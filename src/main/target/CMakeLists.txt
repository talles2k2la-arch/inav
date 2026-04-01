file(GLOB entries *)
foreach(subdir ${entries})
    set(entry "${subdir}/CMakeLists.txt")
    if (EXISTS ${entry})
        add_subdirectory(${subdir})
    endif()
endforeach()
src/main/target/CMakeLists.txt
