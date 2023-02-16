#include <iostream>

#include <sol/sol.hpp>

int main() {
    std::cout << "hello, world\n";

    sol::state lua;
    lua.open_libraries(sol::lib::base, sol::lib::package);
    sol::protected_function_result result = lua.script("print('hello from Lua!')");
    if (!result.valid()) {
        sol::error err = result;
        std::cout << err.what();
    }
}
