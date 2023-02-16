#include <iostream>

#include <sol/sol.hpp>

int main() {
    std::cout << "Hello, from C++\n";
    sol::state lua;
    lua.open_libraries(sol::lib::base, sol::lib::package);
    sol::protected_function_result result = lua.script("print('Hello from Lua')");
    if (!result.valid()) {
        sol::error err = result;
        std::cout << err.what();
    }
}
