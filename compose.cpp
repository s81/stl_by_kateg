#include "headers.hpp"



int main()
{
     

     std::cout << Compose<int, int, int>{}(
                    [](auto number) { return number + number; },
                    [](auto number) { return number * number; },
                    3)
                << '\n';

     std::cout << Compose<float, float, int>{}(
         [](auto number) { return number / 2.0f; },
         [](auto number) { return static_cast<float>(number * number); },
         3);
}