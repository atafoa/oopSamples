CXXFLAGS += -std=c++11
GTKFLAGS = `/usr/bin/pkg-config gtkmm-3.0 --cflags --libs`

hello: hello_world.o
	$(CXX) $(CXXFLAGS) -o hello hello_world.cpp $(GTKFLAGS)
hello_world.o: hello_world.cpp
	$(CXX) $(CXXFLAGS) -c hello_world.cpp $(GTKFLAGS)
