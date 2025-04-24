add_executable(testJS
    src/main.cpp
)

# target_link_libraries(app1
#     PRIVATE
#         math_lib
#         utils
# )

install(TARGETS testJS DESTINATION bin)