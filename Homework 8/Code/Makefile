CC = g++
FLAGS = -std=c++11

all: executable

executable: aaa2575_Book.o aaa2575_Bundle.o aaa2575_Customer.o aaa2575_Librarian.o aaa2575_main.o aaa2575_Media.o aaa2575_Movie.o aaa2575_Music_Album.o aaa2575_Television_Show_Season.o aaa2575_Video_Game.o 
	${CC} ${FLAGS} aaa2575_Book.o aaa2575_Bundle.o aaa2575_Customer.o aaa2575_Librarian.o aaa2575_main.o aaa2575_Media.o aaa2575_Movie.o aaa2575_Music_Album.o aaa2575_Television_Show_Season.o aaa2575_Video_Game.o 

aaa2575_Book.o: aaa2575_Book.cpp
	${CC} ${FLAGS} -c aaa2575_Book.cpp -o aaa2575_Book.o

aaa2575_Bundle.o: aaa2575_Bundle.cpp
	${CC} ${FLAGS} -c aaa2575_Bundle.cpp -o aaa2575_Bundle.o

aaa2575_Customer.o: aaa2575_Customer.cpp
	${CC} ${FLAGS} -c aaa2575_Customer.cpp -o aaa2575_Customer.o

aaa2575_Librarian.o: aaa2575_Librarian.cpp
	${CC} ${FLAGS} -c aaa2575_Librarian.cpp -o aaa2575_Librarian.o

aaa2575_main.o: aaa2575_main.cpp
	${CC} ${FLAGS} -c aaa2575_main.cpp -o aaa2575_main.o

aaa2575_Media.o: aaa2575_Media.cpp
	${CC} ${FLAGS} -c aaa2575_Media.cpp -o aaa2575_Media.o

aaa2575_Movie.o: aaa2575_Movie.cpp
	${CC} ${FLAGS} -c aaa2575_Movie.cpp -o aaa2575_Movie.o

aaa2575_Music_Album.o: aaa2575_Music_Album.cpp
	${CC} ${FLAGS} -c aaa2575_Music_Album.cpp -o aaa2575_Music_Album.o

aaa2575_Television_Show_Season.o: aaa2575_Television_Show_Season.cpp
	${CC} ${FLAGS} -c aaa2575_Television_Show_Season.cpp -o aaa2575_Television_Show_Season.o

aaa2575_Video_Game.o: aaa2575_Video_Game.cpp
	${CC} ${FLAGS} -c aaa2575_Video_Game.cpp -o aaa2575_Video_Game.o

clean:
	rm -rf a.out *.o 
