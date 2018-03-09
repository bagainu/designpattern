#include "Singleton.h"
#include <thread>
#include <vector>

void threadProc(int num)
{
    SingletonPtr counter = Singleton::getInstance();
    counter->setCounter(num);
}

int main()
{
    std::thread threads[10];
    for (int i = 0; i < 10; ++i)
    {
        threads[i] = std::thread(threadProc, i);
    }

    for (auto &item : threads)
    {
        item.join();
    }

    SingletonPtr counter = Singleton::getInstance();
    std::cout << "Finally the counter is " <<counter->getCounter() << std::endl;

    return 0;
}