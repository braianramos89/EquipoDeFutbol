cmake_minimum_required(VERSION 3.22)
project(Templatecpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(Templatecpp main.cpp Persona.cpp Persona.h Tecnico.cpp Tecnico.h Jugador.cpp Jugador.h Portero.cpp Portero.h Mediocampo.cpp Mediocampo.h Delantero.cpp Delantero.h Defensa.cpp Defensa.h EquipoFutbol.cpp EquipoFutbol.h)
