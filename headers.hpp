#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>

//Functor Foo!!

struct Foo
{
    auto operator()(std::function<int()> function_)
    {
        function_();
    }
};
