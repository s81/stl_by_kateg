#include <algorithm>
#include <functional>
#include <iostream>
#include <numeric>
#include <vector>

//Functor Foo!!
template<typename outterType, typename innerType, typename paraType>
struct Compose
{
    auto operator()(std::function<outterType(innerType)> function_one, 
                    std::function<innerType(paraType)> function_two, 
                    paraType parameter)
    {
        return function_one(function_two(parameter));
    }
};
