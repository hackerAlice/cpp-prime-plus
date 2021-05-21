target=calling protos twoarg lotto arfun1 arrfun2 travel atrctfun strcptr topfive
cxx=g++

all : $(target)
.PHONY : all

calling : calling.cpp
	$(cxx) $< -o $@

protos : protos.cpp
	$(cxx) $< -o $@

twoarg : twoarg.cpp
	$(cxx) -g $< -o $@

lotto : lotto.cpp
	$(cxx) -g $< -o $@

arfun1 : arfun1.cpp
	$(cxx) -g $< -o $@

arrfun2 : arrfun2.cpp
	$(cxx) -g $< -o $@

travel : travel.cpp
	$(cxx) -g $< -o $@

atrctfun : atrctfun.cpp
	$(cxx) -g $< -o $@

strcptr : strcptr.cpp
	$(cxx) -g $< -o $@

topfive : topfive.cpp
	$(cxx) -g $< -o $@

clean:
	rm $(target)