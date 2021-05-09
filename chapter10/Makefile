stacker: stack.o stacker.o
    g++ stack.o stacker.o -o stacker

stacker.o: stacker.cpp
    g++ -c $<

stack.o: stack.cpp
    g++ -c $<

clean:
    rm stack *.o