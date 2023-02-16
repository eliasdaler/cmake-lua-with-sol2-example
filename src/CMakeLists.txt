add_executable(game main.cpp)

target_link_libraries(game PRIVATE
  lua::lua
  sol2::sol2
)

set_property(TARGET game PROPERTY CXX_STANDARD 17)
