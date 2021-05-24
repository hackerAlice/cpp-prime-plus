target=namessp twofile external auto
cxx=g++

all : $(target)
.PHONY : all

auto : auto.cpp
	$(cxx) -g $< -o $@

external : external.cpp
	$(cxx) -g $< -o $@

twofile : twofile1.o twofile2.o
	gcc twofile1.o twofile2.o -o twofile

twofile1.o : twofile1.cpp
	$(cxx) -g $< -o $@

twofile2.o : twofile2.cpp
	$(cxx) -g $< -o $@

namessp : namessp.o namesp.o
	g++ namesp.o namessp.o -o $@

namessp.o : namessp.cpp
	$(cxx) -g $< -o $@

namesp.o : namesp.cpp
	$(cxx) -g $< -o $@

clean:
	rm $(target)