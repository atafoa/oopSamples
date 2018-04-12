#include "aaa2575_Bundle.h"
#include "aaa2575_Media.h"
#include "aaa2575_Customer.h"
#include "aaa2575_Librarian.h"
#include "aaa2575_Television_Show_Season.h"
#include "aaa2575_Book.h"
#include "aaa2575_Movie.h"
#include "aaa2575_Music_Album.h"
#include "aaa2575_Video_Game.h"
#include "aaa2575_Controller.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	Library library{};
	View view (library);
	Controller controller (library, view);
	controller.cli();
}
