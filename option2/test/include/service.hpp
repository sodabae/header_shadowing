
#pragma once

namespace real {
    #include "shim_service.hpp"
}

// Extend it
class Service : public real::Service
{
public:
    inline std::string name() const
    {
        return "MOCK service";
    }

    inline int compute(int) const
    {
        return 42;
    }
};
