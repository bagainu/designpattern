#pragma once
#include <iostream>
#include <mutex>
#include <memory>

static std::mutex _mutex;

class Singleton;
typedef std::shared_ptr<Singleton> SingletonPtr;
typedef std::weak_ptr<Singleton> SingletonWPtr;

class Singleton
{
public:
    static SingletonPtr getInstance()
    {
        if (instance == nullptr)
        {
            // _mutex.lock();
            // std::unique_lock<std::mutex> uniqueLock(_mutex, std::adopt_lock);
            if (instance == nullptr)
            {
                instance.reset(new Singleton());
            }
        }
        return instance;
    }

    void setCounter(int num)
    {
        counter = num;
        std::cout << counter << std::endl; 
    }

    int getCounter()
    {
        return counter;
    }

private:
    Singleton() : counter(0) {};
    Singleton(const Singleton&);
    Singleton& operator=(const Singleton&);
    static SingletonPtr instance;

private:
    int counter;
};

SingletonPtr Singleton::instance = nullptr;
