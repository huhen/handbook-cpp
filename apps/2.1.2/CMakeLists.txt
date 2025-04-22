add_executable(2.1.2
    src/main.cpp
)

# target_link_libraries(app1
#     PRIVATE
#         math_lib
#         utils
# )

install(TARGETS 2.1.2 DESTINATION bin)