cmake_minimum_required(VERSION 3.17)
project(demo C)

set(CMAKE_C_STANDARD 99)

add_executable(
        demo src/ADT/main.c
        src/LinkList/LinkList.c
        src/LinkList/LinkList.h
        src/SortedList/Books/Books.c
        src/SortedList/Books/Books.h
        src/SortedList/SortedList.c
        src/SortedList/SortedList.h
        src/common/Constants.c
        src/common/Constants.h
        src/SortedList/Polynomial/Polynomial.c
        src/SortedList/Polynomial/Polynomial.h

)