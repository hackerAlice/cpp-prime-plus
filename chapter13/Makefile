target=usett0 usett1 usebrass1 usebrass2
cc=g++

all: $(target)
.PHONY: all

usett0: usett0.o tabtenn0.o
	$(cc) usett0.o tabtenn0.o -o $@

usett0.o: usett0.cpp
	$(cc) -c $<

tabtenn0.o: tabtenn0.cpp
	$(cc) -c $<

usett1: usett1.o tabtenn1.o
	$(cc) usett1.o tabtenn1.o -o $@

usett1.o: usett1.cpp
	$(cc) -c $<

tabtenn1.o: tabtenn1.cpp
	$(cc) -c $<

usebrass1: usebrass1.o brass.o brassplus.o
	$(cc) usebrass1.o brass.o brassplus.o -o $@

usebrass2: usebrass2.o brass.o brassplus.o
	$(cc) usebrass2.o brass.o brassplus.o -o $@

usebrass2.o: usebrass2.cpp
	$(cc) -c $<

usebrass1.o: usebrass1.cpp
	$(cc) -c $<

brass.o: brass.cpp
	$(cc) -c $<

brassplus.o: brassplus.cpp
	$(cc) -c $<

clean:
	rm $(target) *.o