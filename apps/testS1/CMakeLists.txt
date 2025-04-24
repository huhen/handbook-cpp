add_executable(testS1
    src/main.cpp
)

# target_link_libraries(app1
#     PRIVATE
#         math_lib
#         utils
# )

install(TARGETS testS1 DESTINATION bin)