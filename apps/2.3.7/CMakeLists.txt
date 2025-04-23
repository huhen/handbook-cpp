add_executable(2.3.7
    src/main.cpp
)

# target_link_libraries(app1
#     PRIVATE
#         math_lib
#         utils
# )

install(TARGETS 2.3.7 DESTINATION bin)