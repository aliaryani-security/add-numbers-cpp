#include <iostream>
#include <functional>

auto main() -> int {
    std::cout << std::plus<>{} (1, 1.23) << '\n';
}
