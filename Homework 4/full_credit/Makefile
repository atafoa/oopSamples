# makefile for homework 4 fullCredit
CXXFLAGS = -std=c++11

executable: aaa2575_main.o aaa2575_Transaction_List.o
	$(CXX) $(CXXFLAGS) aaa2575_main.o aaa2575_Transaction_List.o

main.o: aaa2575_main.cpp aaa2575_Transaction_List.H
	$(CXX) $(CXXFLAGS) -c aaa2575_main.cpp

Transaction_List.o: aaa2575_Transaction_List.cpp aaa2575_Transaction_List.h
	$(CXX) $(CXXFLAGS) -c aaa2575_Transaction_List.cpp

clean:
	rm -f *.o a.out
