CXXFLAGS += -std=c++11
GTKFLAGS = `/usr/bin/pkg-config gtkmm-3.0 --cflags --libs`

all: executable

executable: aaa2575_Book.o aaa2575_Bundle.o  aaa2575_Controller.o  aaa2575_Customer.o  aaa2575_Date.o  aaa2575_Librarian.o  aaa2575_Library.o  aaa2575_Media.o  aaa2575_Movie.o  aaa2575_Music_Album.o  aaa2575_Television_Show_Season.o  aaa2575_Transaction.o  aaa2575_Video_Game.o  aaa2575_View.o  aaa2575_main.o  aaa2575_Dialog.o  aaa2575_Main_Window.o
	${CXX} ${CXXFLAGS}  build/aaa2575_Book.o  build/aaa2575_Bundle.o  build/aaa2575_Controller.o  build/aaa2575_Customer.o  build/aaa2575_Date.o  build/aaa2575_Librarian.o  build/aaa2575_Library.o  build/aaa2575_Media.o  build/aaa2575_Movie.o  build/aaa2575_Music_Album.o  build/aaa2575_Television_Show_Season.o  build/aaa2575_Transaction.o  build/aaa2575_Video_Game.o  build/aaa2575_View.o  build/aaa2575_main.o  build/aaa2575_Dialog.o  build/aaa2575_Main_Window.o $(GTKFLAGS) 
	./a.out


aaa2575_Main_Window.o: aaa2575_Main_Window.cpp
	${CXX} ${CXXFLAGS} -c src/aaa2575_Main_Window.cpp -o build/aaa2575_Main_Window.o $(GTKFLAGS)
aaa2575_Book.o: src/aaa2575_Book.cpp
	${CXX} ${CXXFLAGS} -c src/aaa2575_Book.cpp -o build/aaa2575_Book.o $(GTKFLAGS)

aaa2575_Bundle.o: src/aaa2575_Bundle.cpp
	${CXX} ${CXXFLAGS} -c src/aaa2575_Bundle.cpp -o build/aaa2575_Bundle.o $(GTKFLAGS)

aaa2575_Controller.o: src/aaa2575_Controller.cpp
	${CXX} ${CXXFLAGS} -c src/aaa2575_Controller.cpp -o build/aaa2575_Controller.o $(GTKFLAGS)

aaa2575_Customer.o: src/aaa2575_Customer.cpp
	${CXX} ${CXXFLAGS} -c src/aaa2575_Customer.cpp -o build/aaa2575_Customer.o $(GTKFLAGS)

aaa2575_Date.o: src/aaa2575_Date.cpp
	${CXX} ${CXXFLAGS} -c src/aaa2575_Date.cpp -o build/aaa2575_Date.o $(GTKFLAGS)

aaa2575_Librarian.o: src/aaa2575_Librarian.cpp
	${CXX} ${CXXFLAGS} -c src/aaa2575_Librarian.cpp -o builf/aaa2575_Librarian.o $(GTKFLAGS)

aaa2575_Library.o: src/aaa2575_Library.cpp
	${CXX} ${CXXFLAGS} -c src/aaa2575_Library.cpp -o build/aaa2575_Library.o $(GTKFLAGS)

aaa2575_Media.o: src/aaa2575_Media.cpp
	${CXX} ${CXXFLAGS} -c src/aaa2575_Media.cpp -o build/aaa2575_Media.o $(GTKFLAGS)

aaa2575_Movie.o: src/aaa2575_Movie.cpp
	${CXX} ${CXXFLAGS} -c src/aaa2575_Movie.cpp -o build/aaa2575_Movie.o $(GTKFLAGS)

aaa2575_Music_Album.o: src/aaa2575_Music_Album.cpp
	${CXX} ${CXXFLAGS} -c src/aaa2575_Music_Album.cpp -o build/aaa2575_Music_Album.o $(GTKFLAGS)

aaa2575_Television_Show_Season.o: src/aaa2575_Television_Show_Season.cpp
	${CXX} ${CXXFLAGS} -c src/aaa2575_Television_Show_Season.cpp -o build/aaa2575_Television_Show_Season.o $(GTKFLAGS)

aaa2575_Transaction.o: src/aaa2575_Transaction.cpp
	${CXX} ${CXXFLAGS} -c src/aaa2575_Transaction.cpp -o build/aaa2575_Transaction.o $(GTKFLAGS)

aaa2575_Video_Game.o: src/aaa2575_Video_Game.cpp
	${CXX} ${CXXFLAGS} -c src/aaa2575_Video_Game.cpp -o build/aaa2575_Video_Game.o $(GTKFLAGS)

aaa2575_View.o: src/aaa2575_View.cpp
	${CXX} ${CXXFLAGS} -c src/aaa2575_View.cpp -o build/aaa2575_View.o $(GTKFLAGS)

aaa2575_main.o: src/aaa2575_main.cpp
	${CXX} ${CXXFLAGS} -c src/aaa2575_main.cpp -o build/aaa2575_main.o $(GTKFLAGS)

aaa2575_Dialog.o: include/aaa2575_Dialog.h src/aaa2575_Dialog.cpp
	${CXX} ${CXXFLAGS} -c src/aaa2575_Dialog.cpp -o build/aaa2575_Dialog.o $(GTKFLAGS)

clean:
	rm -rf a.out build/*.*


