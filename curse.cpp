#include <iostream>
#include <unistd.h>
using namespace std;

int x2, y2;

char map[10][10] = {							 // y cord
	{'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'}, // x coord
	{'#', '.', '.', '.', '.', '.', '.', '.', '%', '#'},
	{'#', '.', '.', '.', '.', '.', '.', '.', '.', '#'},
	{'#', '.', '.', '.', '.', '.', '.', '.', '.', '#'},
	{'#', '.', '.', '.', '.', '.', '.', '.', '.', '#'},
	{'#', '.', '.', '.', '.', '.', '.', '.', '.', '#'},
	{'#', '.', '.', '.', '.', '.', '.', '.', '.', '#'},
	{'#', '.', '.', '.', '.', '.', '.', '.', '.', '#'},
	{'#', '@', '.', '.', '.', '.', '.', '.', '.', '#'},
	{'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'}

};

void print(){
	system("clear");
	for(int x = 0; x < 10; x++){
		for(int y = 0; y < 10; y++){
			cout << map[x][y];
		}cout << endl;
	}
};


int main()
{
	while(true){
		print();
		char userinput = getchar();

		for(int x = 0; x < 10; x++){
			for(int y = 0; y < 10; y++){
				switch(map[x][y]){
					case '@':

						switch(userinput){
							case 'w':
								x2 = x-1;

								switch(map[x2][y]){
									case '.':
										map[x][y] = '.';
										x = x-1;
										map[x2][y] = '@';
										break;

									}// x2
								break;

							case 's':
								x2 = x+1;

								switch(map[x2][y]){
									case '.':
										map[x][y] = '.';
										x = x+1;
										map[x2][y] = '@';
										break;


								}// x2
								break;


							case 'a':
								y2 = y-1;

								switch(map[x][y2]){
									case '.':
										map[x][y] = '.';
										y = y-1;
										map[x][y2] = '@';
										break;

									}// x2
								break;

							case 'd':
								y2 = y+1;

								switch(map[x][y2]){
											case '.':
												map[x][y] = '.';
												y = y + 1;
												map[x][y2]= '@';
												break;
											
											case '%':
												cout << "You won!" << endl;
												exit(0);
								}


						}// user input switch


				} // map switch
				
			}
		}


	}// while loop [main]

	return 0;
}