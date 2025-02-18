// [ WARNING ] This software is designed for Linux and may not be compatible with Windows NT platforms.

// Author Karl Vince Reyes

#include <base>
#include <kaviyes/std>

using namespace std;

int main(int, char**){
    
    for (;;) {
        kstd::cter();
        string rmk;
        double a,b,c,d,e,f,g,h, avg;
        
        cout << "Computation of Grades\n" << endl << endl
             << "Major Examinations (100 pts each)" 
        << endl;
    
        a = kgrade::getPoints("       First : ");
        b = kgrade::getPoints("       Second: ");
        c = kgrade::getPoints("       Third : ");
        d = kgrade::getPoints("       Final : ");
        
        cout << endl;

        e = kgrade::getPoints("Comprehensive Exam          : ");
        f = kgrade::getPoints("Laboratory Exercises        : ");
        g = kgrade::getPoints("Quizzes/Ass/Oral Recitation : ");
        h = kgrade::getPoints("Programming Plates          : ");
        
        avg = static_cast<int>(kgrade::getAverage(a,b,c,d,e,f,g,h));

        rmk = kgrade::getRemarks(avg);
    
        cout << endl << endl
             << "Gen. Av.   : " << avg << endl
             << "Remarks    : " << rmk << endl
        <<endl;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << endl
             << "Press <Enter Key> to Re-run the Program" << endl
             << "Press <any key> to exit" << endl
        << endl;

        char keyPress = kstd::getch();

        if (keyPress != '\n') {
            break;
        }
    }

    return 0;
}
