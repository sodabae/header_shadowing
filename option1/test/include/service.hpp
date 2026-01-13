
#pragma once

// Pull in the real class
namespace real
{
  #include_next "service.hpp"
}

// Extend it
class MockService : public real::Service
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

// Replace the name *after* inclusion
using Service = MockService;

