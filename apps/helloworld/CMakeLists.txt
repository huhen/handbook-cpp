add_executable(helloworld
    src/main.cpp
)

# target_link_libraries(app1
#     PRIVATE
#         math_lib
#         utils
# )

install(TARGETS helloworld DESTINATION bin)