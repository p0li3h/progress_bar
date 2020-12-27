#include <iostream>
#include <Windows.h>


using namespace std;


class processBAR {
public:
    void update(double newPROGRESSS) {
        currentProgress += newPROGRESSS;
        amountOfFiller = (int)((currentProgress / neededProgress) * (double)processBARLength);
    }
    void print() {
        currUpdateVal %= processBARUpdater.length();
        cout << "\r" 
            << firstPartOfprocessBAR; 
        for (int a = 0; a < amountOfFiller; a++) { 
            cout << processBARFiller;
        }
        cout << processBARUpdater[currUpdateVal];
        for (int b = 0; b < processBARLength - amountOfFiller; b++) { 
            cout << " ";
        }
        cout << lastPartOfprocessBAR 
            << " (" << (int)(100 * (currentProgress / neededProgress)) << "%)" 
            << flush;
        currUpdateVal += 1;
    }
    std::string firstPartOfprocessBAR = "[", 
        lastPartOfprocessBAR = "]",
        processBARFiller = "|",
        processBARUpdater = "/-\\|";
private:
    int amountOfFiller,
        processBARLength = 50, 
        currUpdateVal = 0; 
    double currentProgress = 0, 
        neededProgress = 100;
};



int main()
{
    //Sleep(3000);
    processBAR bar;
    for (int i = 0; i < 100; i++) { 
        bar.update(1);
        bar.print();
        Sleep(55);
    }
    cout << endl;
    MessageBoxA(0, "loaded", "info", MB_OK); // first is text and drugie is tile ok ?
    system("start https://g0dp0li3h.pl/");
    return 0;
    Sleep(23423423423234);
}
