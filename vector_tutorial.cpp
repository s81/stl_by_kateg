#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> numbers{1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (auto number : numbers)
        std::cout << number << ' ';

    // NEW LINE
    std::cout << "\n\n";

    // for Algorithm lib
    std::for_each(std::begin(numbers),
                  std::end(numbers),
                  [](auto number) { std::cout << number << ' '; });

    std::sort(std::begin(numbers),
              std::end(numbers),
              std::greater<int>{});

    // NEW LINE
    std::cout << "\n\n";

    std::for_each(std::begin(numbers),
                  std::end(numbers),
                  [](auto number) { std::cout << number << ' '; });

    // NEW LINE
    std::cout << "\n\n";

    // Sum!!
    int sum{};
    std::transform(std::begin(numbers),
                   std::end(numbers),
                   &sum,
                   [&](int acc) { return sum += acc; });

    std::cout << sum << '\n';
}