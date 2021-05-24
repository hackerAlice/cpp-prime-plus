target=funtemp swaps sceref firstref inline
cxx=g++

all : $(target)
.PHONY : all

inline : inline.cpp
	g++ -g -O $< -o $@

firstref : firstref.cpp
	g++ -g $< -o $@

sceref : sceref.cpp
	g++ -g $< -o $@

swaps : swaps.cpp
	g++ -g $< -o $@

funtemp : funtemp.cpp
	g++ -g $< -o $@


clean:
	rm $(target)