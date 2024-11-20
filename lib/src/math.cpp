#include "lib/math.hpp"

#include <functional>

namespace lib
{

int AddOne(int value)
{
    return value + 1;
}

int MultiplyByTwo(int value)
{
    return value * 2;
}

auto ByFunction(int value, std::function<int(int)> f) -> int
{
    return f(value);
}

} // namespace lib
