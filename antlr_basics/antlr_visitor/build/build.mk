CUR_DIR := $(shell pwd)
LIBS := -Xlinker "-(" $(LIBS) -Xlinker "-)"

#所有库的路径
ALL_LIBDIR:=$(patsubst -L%,:%,$(patsubst -l%,,$(LIBS)))

#makefile搜索路径
VPATH := $(VPATH):$(ALL_LIBDIR)

#建立源文件和头文件的依赖关系
deps:$(patsubst %.cpp, .obj/%.d, $(wildcard *.cpp))

#自动推导编译规则
.obj/%.o: %.cpp .obj/%.d
	mkdir -p .obj
	$(CXX) $(CFLAGS) $(CXXFLAGS) ${INC} -c $< -o $@
	
#生成对头文件依赖关系文件
.obj/%.d: %.cpp
	mkdir -p .obj
	@set -e; rm -f $@;
	-$(CC) $(CFLAGS) $(CXXFLAGS) -MM ${INC} $<   > $@.tmp;
	sed 's,\($*\)\.o[ :]*,\1.o $@ : ,g' <  $@.tmp  > $@;
	rm -f $@.tmp

#包含所有依赖关系的文件
ifneq ($(MAKECMDGOALS), clean)
-include $(patsubst %.cpp, .obj/%.d, $(wildcard *.cpp))
endif

clean:
	$(SILENCE) rm -rf .obj $(TARGET)
