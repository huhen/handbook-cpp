add_executable(testS2
    src/main.cpp
)

# target_link_libraries(app1
#     PRIVATE
#         math_lib
#         utils
# )

install(TARGETS testS2 DESTINATION bin)