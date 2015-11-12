cmake_minimum_required(VERSION 3.3)
project(Supermercat)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES Supermercat/main.cpp Supermercat/Supermercat.cpp Supermercat/Supermercat.h Supermercat/Client.cpp Supermercat/Client.h Supermercat/Ticket.cpp Supermercat/Ticket.h Supermercat/Producte.cpp Supermercat/Producte.h Supermercat/ProducteComprat.cpp Supermercat/ProducteComprat.h Supermercat/Caixa.cpp Supermercat/Caixa.h Supermercat/CamiPreferent.cpp Supermercat/CamiPreferent.h)
add_executable(Supermercat ${SOURCE_FILES})