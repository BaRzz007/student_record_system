cmake_minimum_required(VERSION 3.20)
project(student_record_system)

set(CMAKE_C_STANDARD 99)

set(SOURCES
    main.c
    add.c
    average_score.c
    bye.c
    display_records.c
    free_storage.c
    get_input.c
    init_storage.c
    init_student.c
    interface.c
    remark.c
    remove.c
    save.c
    search.c
    sort_records.c
    update.c
    welcome.c)

add_executable(student_record_system ${SOURCES})