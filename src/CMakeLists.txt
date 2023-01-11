add_executable(${exe_name})
add_executable(${namespace}::${exe_name} ALIAS ${exe_name})

target_link_libraries(${exe_name} PRIVATE SFML::Graphics)

target_sources(
        ${exe_name}
        PRIVATE
        main.cpp
)
