CXXFLAGS += -std=c++11
GTKFLAGS = `/usr/bin/pkg-config gtkmm-3.0 --cflags --libs`

all: executable

executable: aaa2575_Book.o aaa2575_Bundle.o aaa2575_Controller.o aaa2575_Customer.o aaa2575_Date.o aaa2575_Librarian.o aaa2575_Library.o aaa2575_Media.o aaa2575_Movie.o aaa2575_Music_Album.o aaa2575_Television_Show_Season.o aaa2575_Transaction.o aaa2575_Video_Game.o aaa2575_View.o aaa2575_main.o aaa2575_Dialog.o aaa2575_Main_Window.o
	${CXX} ${CXXFLAGS} aaa2575_Book.o aaa2575_Bundle.o aaa2575_Controller.o aaa2575_Customer.o aaa2575_Date.o aaa2575_Librarian.o aaa2575_Library.o aaa2575_Media.o aaa2575_Movie.o aaa2575_Music_Album.o aaa2575_Television_Show_Season.o aaa2575_Transaction.o aaa2575_Video_Game.o aaa2575_View.o aaa2575_main.o aaa2575_Dialog.o aaa2575_Main_Window.o $(GTKFLAGS) 
	./a.out


aaa2575_Main_Window.o: aaa2575_Main_Window.cpp
	${CXX} ${CXXFLAGS} -c aaa2575_Main_Window.cpp -o aaa2575_Main_Window.o $(GTKFLAGS)
aaa2575_Book.o: aaa2575_Book.cpp
	${CXX} ${CXXFLAGS} -c aaa2575_Book.cpp -o aaa2575_Book.o $(GTKFLAGS)

aaa2575_Bundle.o: aaa2575_Bundle.cpp
	${CXX} ${CXXFLAGS} -c aaa2575_Bundle.cpp -o aaa2575_Bundle.o $(GTKFLAGS)

aaa2575_Controller.o: aaa2575_Controller.cpp
	${CXX} ${CXXFLAGS} -c aaa2575_Controller.cpp -o aaa2575_Controller.o $(GTKFLAGS)

aaa2575_Customer.o: aaa2575_Customer.cpp
	${CXX} ${CXXFLAGS} -c aaa2575_Customer.cpp -o aaa2575_Customer.o $(GTKFLAGS)

aaa2575_Date.o: aaa2575_Date.cpp
	${CXX} ${CXXFLAGS} -c aaa2575_Date.cpp -o aaa2575_Date.o $(GTKFLAGS)

aaa2575_Librarian.o: aaa2575_Librarian.cpp
	${CXX} ${CXXFLAGS} -c aaa2575_Librarian.cpp -o aaa2575_Librarian.o $(GTKFLAGS)

aaa2575_Library.o: aaa2575_Library.cpp
	${CXX} ${CXXFLAGS} -c aaa2575_Library.cpp -o aaa2575_Library.o $(GTKFLAGS)

aaa2575_Media.o: aaa2575_Media.cpp
	${CXX} ${CXXFLAGS} -c aaa2575_Media.cpp -o aaa2575_Media.o $(GTKFLAGS)

aaa2575_Movie.o: aaa2575_Movie.cpp
	${CXX} ${CXXFLAGS} -c aaa2575_Movie.cpp -o aaa2575_Movie.o $(GTKFLAGS)

aaa2575_Music_Album.o: aaa2575_Music_Album.cpp
	${CXX} ${CXXFLAGS} -c aaa2575_Music_Album.cpp -o aaa2575_Music_Album.o $(GTKFLAGS)

aaa2575_Television_Show_Season.o: aaa2575_Television_Show_Season.cpp
	${CXX} ${CXXFLAGS} -c aaa2575_Television_Show_Season.cpp -o aaa2575_Television_Show_Season.o $(GTKFLAGS)

aaa2575_Transaction.o: aaa2575_Transaction.cpp
	${CXX} ${CXXFLAGS} -c aaa2575_Transaction.cpp -o aaa2575_Transaction.o $(GTKFLAGS)

aaa2575_Video_Game.o: aaa2575_Video_Game.cpp
	${CXX} ${CXXFLAGS} -c aaa2575_Video_Game.cpp -o aaa2575_Video_Game.o $(GTKFLAGS)

aaa2575_View.o: aaa2575_View.cpp
	${CXX} ${CXXFLAGS} -c aaa2575_View.cpp -o aaa2575_View.o $(GTKFLAGS)

aaa2575_main.o: aaa2575_main.cpp
	${CXX} ${CXXFLAGS} -c aaa2575_main.cpp -o aaa2575_main.o $(GTKFLAGS)

aaa2575_Dialog.o: aaa2575_Dialog.h aaa2575_Dialog.cpp
	${CXX} ${CXXFLAGS} -c aaa2575_Dialog.cpp -o aaa2575_Dialog.o $(GTKFLAGS)

clean:
	rm -rf a.out *.o aaa2575_Book aaa2575_Bundle aaa2575_Controller aaa2575_Customer aaa2575_Date aaa2575_Librarian aaa2575_Library aaa2575_Media aaa2575_Movie aaa2575_Music_Album aaa2575_Television_Show_Season aaa2575_Transaction aaa2575_Video_Game aaa2575_View aaa2575_main 


