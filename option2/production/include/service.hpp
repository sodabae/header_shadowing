#pragma once
#include <string>

class Service
{
public:
    inline std::string name() const
    {
        return "REAL service";
    }

    inline int compute(int x) const
    {
        return x * 2;
    }
};
