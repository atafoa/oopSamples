CXXFLAGS=-std=c++11

all: main2

main2: main2.o Robot.o Arm_Robot.o Mobile_Robot.o Extendable_Arm.o Powered_Arm.o Super_Arm.o Mobile_Arm.o
	$(CXX) $(CXXFLAGS) -o main2 main2.o Robot.o Arm_Robot.o Mobile_Robot.o Extendable_Arm.o Powered_Arm.o Super_Arm.o Mobile_Arm.o
	./main2

main2.o: aaa2575_main2.cpp
	$(CXX) $(CXXFLAGS) -c aaa2575_main2.cpp -o main2.o

Robot.o: aaa2575_Robot.cpp
	$(CXX) $(CXXFLAGS) -c aaa2575_Robot.cpp -o Robot.o

Arm_Robot.o: aaa2575_Arm_Robot.cpp
	$(CXX) $(CXXFLAGS) -c aaa2575_Arm_Robot.cpp -o Arm_Robot.o

Mobile_Robot.o: aaa2575_Mobile_Robot.cpp
	$(CXX) $(CXXFLAGS) -c aaa2575_Mobile_Robot.cpp -o Mobile_Robot.o

Extendable_Arm.o: aaa2575_Extendable_Arm.cpp
	$(CXX) $(CXXFLAGS) -c aaa2575_Extendable_Arm.cpp -o Extendable_Arm.o

Powered_Arm.o: aaa2575_Powered_Arm.cpp
	$(CXX) $(CXXFLAGS) -c aaa2575_Powered_Arm.cpp -o Powered_Arm.o

Super_Arm.o: aaa2575_Super_Arm.cpp
	$(CXX) $(CXXFLAGS) -c aaa2575_Super_Arm.cpp -o Super_Arm.o

Mobile_Arm.o: aaa2575_Mobile_Arm.cpp
	$(CXX) $(CXXFLAGS) -c aaa2575_Mobile_Arm.cpp -o Mobile_Arm.o

clean:
	rm -f *.o main1 main2
