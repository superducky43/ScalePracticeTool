add_executable(ScalePracticeTool)

target_sources(ScalePracticeTool
    PRIVATE
        Main.cpp
        Scale.cpp

    PUBLIC
    FILE_SET HEADERS
    FILES
        Scale.h
)

target_link_libraries(ScalePracticeTool
    PRIVATE
        json
)
