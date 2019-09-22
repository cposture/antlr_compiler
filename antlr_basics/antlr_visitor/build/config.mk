# antlr c++ 运行时头文件目录
INC_ANTLR_RUNTIME_DIR=/usr/local/include/antlr4-runtime

# antlr c++ 运行时库文件目录
LIB_ANTLR_RUNTIME_DIR=/usr/local/lib

INC=-I$(INC_ANTLR_RUNTIME_DIR)

LIBS=$(LIB_ANTLR_RUNTIME_DIR)

CC=g++

CXXFLAGS=$(INC) -std=c++11 -Werror

LDFLAGS=-L$(LIB_ANTLR_RUNTIME_DIR) -lantlr4-runtime
