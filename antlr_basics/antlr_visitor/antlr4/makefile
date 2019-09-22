include ../build/config.mk

TARGET = libantlr.a

all:$(TARGET)

ALL_OBJ = $(patsubst %.cpp, .obj/%.o, $(wildcard *.cpp))

$(TARGET) : $(ALL_OBJ)
	ar -rv $@ $^

install:
	echo "no need to install"

include ../build/build.mk
