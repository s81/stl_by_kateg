#include "headers.hpp"



int main()
{
    auto data01 = Compose<int, int, int>{}(
        [](auto number) { return number + number; },
        [](auto number) { return number * number; },
        [] { return 1.5; }());

    std::cout << data01 << '\n';

    std::cout << [=] { return data01 * 3; }() << '\n';

    auto data02 = Compose<float, float, int>{}(
        [](auto number) { return number / 2.0f; },
        [](auto number) { return static_cast<float>(number * number); },
        [] { return -3; }());

    std::cout << data02 << '\n';

    std::cout << [=] { return data02 * 3; }() << '\n';
}