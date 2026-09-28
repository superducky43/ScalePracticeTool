add_library(json INTERFACE)

target_sources(json
    INTERFACE
    FILE_SET HEADERS
    FILES
        json.hpp
)
