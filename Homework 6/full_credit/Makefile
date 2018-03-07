# makefile for homework 4 fullCredit
CXXFLAGS = -std=c++11

executable: aaa2575_main.o aaa2575_Robot.o aaa2575_Arm_Robot.o aaa2575_Extendable_Arm.o aaa2575_Powered_Arm.o  aaa2575_Mobile_Robot.o
	$(CXX) $(CXXFLAGS) aaa2575_main.o aaa2575_Robot.o aaa2575_Extendable_Arm.o aaa2575_Arm_Robot.o aaa2575_Powered_Arm.o aaa2575_Mobile_Robot.o
	./a.out

main.o: aaa2575_main.cpp aaa2575_Robot.h aaa2575_Powered_Arm.h aaaa2575_Mobile_Robot.h
	$(CXX) $(CXXFLAGS) -c aaa2575_main.cpp

Mobile_Robot.o: aaa2575_Mobile_Robot.cpp aaa2575_Mobile_Robot.h
	$(CXX) $(CXXFLAGS) -c aaa2575_Mobile_Robot.cpp

Powered_Arm.o: aaa2575_Powered_Arm.cpp aaa2575_Powered_Arm.h
	$(CXX) $(CXXFLAGS) -c aaa2575_Powered_Arm.cpp

Extendable_Arm.o: aaa2575_Extendable_Arm.cpp aaa2575_Extendable_Arm.h
	$(CXX) $(CXXFLAGS) -c aaa2575_Extendable_Arm.cpp

Arm_Robot.o: aaa2575_Arm_Robot.cpp aaa2575_Arm_Robot.h
	$(CXX) $(CXXFLAGS) -c aaa2575_Arm_Robot.cpp

Robot.o: aaa2575_Robot.cpp aaa2575_Robot.h
	$(CXX) $(CXXFLAGS) -c aaa2575_Robot.cpp

clean:
	rm -f *.o a.out
