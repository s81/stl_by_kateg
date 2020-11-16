#include "headers.hpp"

int main()
{
    std::vector<int> numbers{1, 2, 3, 4, 5, 6, 7, 8, 9};

    // for Algorithm lib
    std::for_each(std::begin(numbers),
                  std::end(numbers),
                  [](int const number) -> void {
                      std::cout << number << ',';
                  });

    std::sort(std::begin(numbers),
              std::end(numbers),
              std::greater<int>{});

    // NEW LINE
    std::cout << "\n\n";

    std::for_each(std::begin(numbers),
                  std::end(numbers),
                  [](int const number) -> void {
                      std::cout << number << ',';
                  });

    // NEW LINE
    std::cout << "\n\n";

    // Sum!!
    int sum{};
    std::transform(std::begin(numbers),
                   std::end(numbers),
                   &sum,
                   [&](int acc) -> int {
                       return sum += acc;
                   });

    std::cout << sum << '\n';
}