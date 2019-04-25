rwildcard=$(foreach d,$(wildcard $1*),$(call rwildcard,$d/,$2) $(filter $(subst *,%,$2),$d))

SOURCE_FILES = $(call rwildcard, , *.cpp)
OBJECT_FILES = $(SOURCE_FILES:.cpp=.o)

all: build build/main clean_objects

build:
	mkdir -p build

build/main: $(OBJECT_FILES)
	g++ -g $^ -std=c++11 -o $@

%.o: %.cpp
	g++ -g -std=c++11 -c $^ -o $@

clean_objects: $(OBJECT_FILES)
	rm $^
