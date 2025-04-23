add_executable(2.3.1
    src/main.cpp
)

# target_link_libraries(app1
#     PRIVATE
#         math_lib
#         utils
# )

install(TARGETS 2.3.1 DESTINATION bin)