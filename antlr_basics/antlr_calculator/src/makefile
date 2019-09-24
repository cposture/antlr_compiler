include ../build/config.mk

TARGET = ../antlr_calculator

# antlr
INC_ANTLR = -I../antlr4/
LIB_ANTLR = ../antlr4/libantlr.a

INC := $(INC) -I./ $(INC_ANTLR)
LIBS := $(LIB_ANTLR) -lstdc++

all:$(TARGET)

ALL_OBJ = $(patsubst %.cpp, .obj/%.o, $(wildcard *.cpp))

$(TARGET) : $(ALL_OBJ)
	$(CXX) -o $@ $(CFLAGS) $(LDFLAGS) $(ALL_OBJ) $(LIBS)

install:
	echo "no need to install"

include ../build/build.mk
