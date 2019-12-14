CXX=g++
BINARIES= main

main: function.o Compound_trading.o
	${CXX} -o $@ $^

clean:
	rm -r *.o ${BINARIES}