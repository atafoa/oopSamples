CXXFLAGS += -std=c++11
GTKFLAGS = `/usr/bin/pkg-config gtkmm-3.0 --cflags --libs`

ex: main.o dialog.o
	$(CXX) $(CXXFLAGS) -o hello main.o dialog.o $(GTKFLAGS)
main.o: main.cpp dialog.h
	$(CXX) $(CXXFLAGS) -c main.cpp $(GTKFLAGS)
dialog.o: dialog.h dialog.cpp
	$(CXX) $(CXXFLAGS) -c dialog.cpp $(GTKFLAGS)
