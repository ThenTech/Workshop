#include <iostream>
#include <windows.h>

/*
 *	Tones in Hertz.
 */
#define C3  130
#define Db3 138
#define D3  146
#define Eb3 155
#define E3  164
#define F3  174
#define Gb3 185
#define G3  196
#define Ab3 207
#define A3  220
#define Bb3 233
#define B3  246

#define C4  261
#define Db4 277
#define D4  293
#define Eb4 311
#define E4  329
#define F4  349
#define Gb4 369
#define G4  392
#define Ab4 415
#define A4  440
#define AA4 455
#define Bb4 466
#define B4  493

#define C5  523
#define Db5 544
#define CC5	554
#define D5  587
#define Eb5 622
#define E5  659
#define F5  698
#define Gb5 739
#define G5  783
#define Ab5 830
#define A5  880
#define Bb5 932
#define B5  987

#define C6  1046
#define Db6 1108
#define D6  1174
#define Eb6 1244
#define E6  1318
#define F6  1396
#define Gb6 1479
#define G6  1567
#define Ab6 1661
#define A6  1760
#define Bb6 1864
#define B6  1975

#define C7  2093
#define Db7 2217
#define D7  2349
#define Eb7 2489
#define E7  2637
#define F7  2794
#define Gb7 2960
#define G7  3136
#define Ab7 3322
#define A7  3520
#define Bb7 3729
#define B7  3951

void march() {
	std::cout << "There he comes again..." << std::endl;
	
	Beep(A4, 500);
    Beep(A4, 500);
    Beep(A4, 500);
    Beep(F4, 350);
    Beep(C5, 150);

    Beep(A4, 500);
    Beep(F4, 350);
    Beep(C5, 150);
    Beep(A4, 1000);

    //first bit

    Beep(E5, 500);
    Beep(E5, 500);
    Beep(E5, 500);
    Beep(F5, 350);
    Beep(C5, 150);

    Beep(Ab4, 500);
    Beep(F4, 350);
    Beep(C5, 150);
    Beep(A4, 1000);

    //second bit...

    Beep(A5, 500);
    Beep(A4, 350);
    Beep(A4, 150);
    Beep(A5, 500);
    Beep(Ab5, 250);
    Beep(G5, 250);

    Beep(Gb5, 125);
    Beep(F5, 125);
    Beep(Gb5, 250);
    Sleep(250);
    Beep(AA4, 250);
    Beep(Eb5, 500);
    Beep(D5, 250);
    Beep(CC5, 250);

    //start of the interesting bit

    Beep(C5, 125);
    Beep(Bb4, 125);
    Beep(C5, 250);
    Sleep(250);
    Beep(F4, 125);
    Beep(Ab4, 500);
    Beep(F4, 375);
    Beep(A4, 125);

    Beep(C5, 500);
    Beep(A4, 375);
    Beep(C5, 125);
    Beep(E5, 1000);

    //more interesting stuff (this doesn't quite get it right somehow)

    Beep(A5, 500);
    Beep(A4, 350);
    Beep(A4, 150);
    Beep(A5, 500);
    Beep(Ab5, 250);
    Beep(G5, 250);

    Beep(Gb5, 125);
    Beep(F5, 125);
    Beep(Gb5, 250);
    Sleep(250);
    Beep(AA4, 250);
    Beep(Eb5, 500);
    Beep(D5, 250);
    Beep(CC5, 250);

    //repeat... repeat

    Beep(C5, 125);
    Beep(Bb4, 125);
    Beep(C5, 250);
    Sleep(250);
    Beep(F4, 250);
    Beep(Ab4, 500);
    Beep(F4, 375);
    Beep(C5, 125);

    Beep(A4, 500);
    Beep(F4, 375);
    Beep(C4, 125);
    Beep(A4, 1000);
}

void mission() {
	std::cout << "They see me Cruise'n, they hatin'" << std::endl;
	
	Beep(G5, 150);
	Sleep(300);
	Beep(G5, 150);
	Sleep(300);
	Beep(Bb5, 150);
	Sleep(150);
	Beep(C6, 150);
	Sleep(150);
	Beep(G5, 150);
	Sleep(300);
	Beep(G5, 150);
	Sleep(300);
	Beep(F5, 150);
	Sleep(150);
	Beep(Gb5, 150);
	Sleep(150);
	Beep(G5, 150);
	Sleep(300);
	Beep(G5, 150);
	Sleep(300);
	Beep(Bb5, 150);
	Sleep(150);
	Beep(C6, 150);
	Sleep(150);
	Beep(G5, 150);
	Sleep(300);
	Beep(G5, 150);
	Sleep(300);
	Beep(F5, 150);
	Sleep(150);
	Beep(Gb5, 150);
	Sleep(150);
	Beep(Bb5, 150);
	Beep(G5, 150);
	Beep(D4, 1200);
	Sleep(75);
	Beep(Bb5, 150);
	Beep(G5, 150);
	Beep(CC5, 1200);
	Sleep(75);
	Beep(Bb5, 150);
	Beep(G5, 150);
	Beep(C4, 1200);
	Sleep(150);
	Beep(Bb4, 150);
	Beep(C4, 150);
}

void plumber() {
	std::cout << "Red plumber saves the drain..." << std::endl;

	Beep(E5, 250);
	Beep(E5, 250);
	Beep(E5, 300);
	Beep(C4, 250);
	Beep(E5, 250);
	Beep(G5, 300);
	Beep(G4, 300);
	Beep(C4, 275);
	Beep(G4, 275);
	Beep(E4, 275);
	Beep(A4, 250);
	Beep(B4, 250);
	Beep(Bb4, 275);
	Beep(A4, 275);
	Beep(G4, 275);
	Beep(E5, 250);
	Beep(G5, 250);
	Beep(A5, 275);
	Beep(F5, 275);
	Beep(G5, 225);
	Beep(E5, 250);
	Beep(C4, 250);
	Beep(D4, 225);
	Beep(B4, 225);
}

void xrefren() {
	Beep(E5, 300);
	Beep(E5, 300);
	Beep(E5, 300);

	Sleep(300);

	Beep(E5, 300);
	Beep(E5, 300);
	Beep(E5, 300);

	Sleep(300);

	Beep(E5, 300);
	Beep(G5, 300);
	Beep(C5, 300);
	Beep(D5, 300);
	Beep(E5, 300);

	Beep(C4, 300);
	Beep(D4, 300);
	Beep(E4, 300);

	Beep(F5, 300);
	Beep(F5, 300);
	Beep(F5, 300);

	Sleep(300);

	Beep(F5, 300);
	Beep(E5, 300);
	Beep(E5, 300);

	Sleep(300);

	Beep(E5, 300);
	Beep(D5, 300);
	Beep(D5, 300);
	Beep(E5, 300);
	Beep(D5, 300);

	Sleep(300);

	Beep(G5, 300);

	Sleep(300);

	// -----------

	Beep(E5, 300);
	Beep(E5, 300);
	Beep(E5, 300);

	Sleep(300);

	Beep(E5, 300);
	Beep(E5, 300);
	Beep(E5, 300);

	Sleep(300);

	Beep(E5, 300);
	Beep(G5, 300);
	Beep(C5, 300);
	Beep(D5, 300);
	Beep(E5, 300);

	Beep(C4, 300);
	Beep(D4, 300);
	Beep(E4, 300);

	Beep(F5, 300);
	Beep(F5, 300);
	Beep(F5, 300);

	Sleep(300);

	Beep(F5, 300);
	Beep(E5, 300);
	Beep(E5, 300);

	Sleep(300);

	Beep(G5, 300);
	Beep(G5, 300);
	Beep(F5, 300);
	Beep(D5, 300);
	Beep(C5, 600);

	Sleep(600);
}

void crossmas() {
	std::cout << "Happy X-mas you filthy animal!" << std::endl;
	
	xrefren();
	
	Beep(G4, 300);
	Beep(E5, 300);
	Beep(D5, 300);
	Beep(C5, 300);
	Beep(G4, 600);

	Sleep(600);

	Beep(G4, 300);
	Beep(E5, 300);
	Beep(D5, 300);
	Beep(C5, 300);
	Beep(A4, 600);

	Sleep(600);

	Beep(A4, 300);
	Beep(F5, 300);
	Beep(E5, 300);
	Beep(D5, 300);
	Beep(G5, 600);

	Sleep(600);

	Beep(A5, 300);
	Beep(A5, 300);
	Beep(G5, 300);
	Beep(Eb5, 300);
	Beep(E5, 600);

	Sleep(600);

	// -----------

	Beep(G4, 300);
	Beep(E5, 300);
	Beep(D5, 300);
	Beep(C5, 300);
	Beep(G4, 600);

	Sleep(600);

	Beep(G4, 300);
	Beep(E5, 300);
	Beep(D5, 300);
	Beep(C5, 300);
	Beep(A4, 600);

	Sleep(600);

	Beep(A4, 300);
	Beep(F5, 300);
	Beep(E5, 300);
	Beep(D5, 300);
	Beep(G5, 600);

	Sleep(600);

	Beep(A5, 300);
	Beep(G5, 300);
	Beep(F5, 300);
	Beep(D5, 300);
	Beep(C5, 600);

	Sleep(600);
	
	xrefren();
}

int main(void) {
	int in = 0;

	while(1) {
		do {
			system("CLS");
			std::cin.clear(); std::cin.sync();
			std::cout << "    1   Marching" << std::endl;
			std::cout << "    2   Cruise Impossibru" << std::endl;
			std::cout << "    3   Not Luigi" << std::endl;
			std::cout << "    4   Saint Nicolas from the U.S." << std::endl << std::endl;
			std::cout << "Choose an option: ";
			std::cin >> in;
		} while(in < 1 || in > 4);
		
		switch (in) {
			case 1:		march(); 	break;
			case 2:		mission();	break;
			case 3:		plumber();	break;
			case 4:		crossmas();	break;
			default: 	exit(0);
		}
		Sleep(500);
	}

	return 0;
}
