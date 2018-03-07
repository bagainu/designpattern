#pragma once
#include <string>
#include <memory>

class GredientA
{
public:
    virtual std::string getName() = 0;
};

typedef std::shared_ptr<GredientA> GredientAPtr;
typedef std::weak_ptr<GredientA> GredientAWPtr;

class GredientB
{
public:
    virtual std::string getName() = 0;
};

typedef std::shared_ptr<GredientB> GredientBPtr;
typedef std::weak_ptr<GredientB> GredientBWPtr;

class GredientC
{
public:
    virtual std::string getName() = 0;
};

typedef std::shared_ptr<GredientC> GredientCPtr;
typedef std::weak_ptr<GredientC> GredientCWPtr;

class GredientAA : public GredientA
{
public:       
    std::string getName()
    {
        return "GredientAA";
    }
};

class GredientAB : public GredientA
{
public:       
    std::string getName()
    {
        return "GredientAB";
    }
};

class GredientAC : public GredientA
{
public:       
    std::string getName()
    {
        return "GredientAC";
    }
};

class GredientBA : public GredientB
{
public:       
    std::string getName()
    {
        return "GredientBA";
    }
};

class GredientBB : public GredientB
{
public:       
    std::string getName()
    {
        return "GredientBB";
    }
};

class GredientBC : public GredientB
{
public:       
    std::string getName()
    {
        return "GredientBC";
    }
};

class GredientCA : public GredientC
{
public:       
    std::string getName()
    {
        return "GredientCA";
    }
};

class GredientCB : public GredientC
{
public:       
    std::string getName()
    {
        return "GredientCB";
    }
};

class GredientCC : public GredientC
{
public:       
    std::string getName()
    {
        return "GredientCC";
    }
};