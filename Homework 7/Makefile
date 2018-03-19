#Makefile for Homework 7
CXXFLAGS = -std=c++11

all: main main_two

main: aaa2575_main.o aaa2575_Robot.o aaa2575_Arm_Robot.o aaa2575_Mobile_Robot.o aaa2575_Extendable_Arm.o aaa2575_Powered_Arm.o aaa2575_Super_Arm.o aaa2575_Mobile_Arm.o
	$(CXX) $(CXXFLAGS) aaa2575_main.o aaa2575_Robot.o aaa2575_Arm_Robot.o aaa2575_Mobile_Robot.o aaa2575_Extendable_Arm.o aaa2575_Powered_Arm.o aaa2575_Super_Arm.o aaa2575_Mobile_Arm.o
	./a.out

main_two:  aaa2575_main_two.o aaa2575_Robot.o aaa2575_Arm_Robot.o aaa2575_Mobile_Robot.o aaa2575_Extendable_Arm.o aaa2575_Powered_Arm.o aaa2575_Super_Arm.o aaa2575_Mobile_Arm.o
	$(CXX) $(CXXFLAGS) aaa2575_main_two.o aaa2575_Robot.o aaa2575_Arm_Robot.o aaa2575_Mobile_Robot.o aaa2575_Extendable_Arm.o aaa2575_Powered_Arm.o aaa2575_Super_Arm.o aaa2575_Mobile_Arm.o
	./a.out

main.o: aaa2575_main.cpp aaa2575_Robot.h aaa2575_Arm_Robot.h aaa2575_Mobile_Robot.h aaa2575_Extendable_Arm.h aaa2575_Powered_Arm.h aaa2575_Super_Arm.h aaa2575_Mobile_Arm.h
	$(CXX) $(CXXFLAGS) -c aaa2575_main.cpp

main_two.o: aaa2575_main_two.cpp aaa2575_Robot.h aaa2575_Arm_Robot.h aaa2575_Mobile_Robot.h aaa2575_Extendable_Arm.h aaa2575_Powered_Arm.h aaa2575_Super_Arm.h aaa2575_Mobile_Arm.h
	$(CXX) $(CXXFLAGS) -c aaa2575_main_two.cpp

Robot.o: aaa2575_Robot.cpp aaa2575_Robot.h
	$(CXX) $(CXXFLAGS) -c aaa2575_Robot.cpp

Arm_Robot.o: aaa2575_Arm_Robot.cpp aaa2575_Arm_Robot.h
	$(CXX) $(CXXFLAGS) -c aaa2575_Arm_Robot.cpp

Mobile_Robot.o: aaa2575_Mobile_Robot.cpp aaa2575_Mobile_Robot.h
	$(CXX) $(CXXFLAGS) -c aaa2575_Mobile_Robot.cpp

Extendable_Arm.o: aaa2575_Extendable_Arm.cpp aaa2575_Extendable_Arm.h
	$(CXX) $(CXXFLAGS) -c aaa2575_Extendable_Arm.cpp

Powered_Arm.o: aaa2575_Powered_Arm.cpp aaa2575_Powered_Arm.h
	$(CXX) $(CXXFLAGS) -c aaa2575_Powered_Arm.cpp

Super_Arm.o: aaa2575_Super_Arm.cpp aaa2575_Super_Arm.h
	$(CXX) $(CXXFLAGS) -c aaa2575_Super_Arm.cpp

Mobile_Arm.o:  aaa2575_Mobile_Arm.cpp aaa2575_Mobile_Arm.h
	$(CXX) $(CXXFLAGS) -c aaa2575_Mobile_Arm.cpp

clean:
	rm -f *.o a.out