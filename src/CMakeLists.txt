add_executable(ScalePracticeTool)

target_sources(ScalePracticeTool
    PRIVATE
        Main.cpp
        Scale.cpp
        Util.cpp
        Note.cpp

    PUBLIC
    FILE_SET HEADERS
    FILES
        Scale.h
        Util.h
        Note.h
)

target_link_libraries(ScalePracticeTool
    PRIVATE
        json
)
