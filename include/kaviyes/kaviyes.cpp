// [ WARNING ] This software is designed for Linux and may not be compatible with Windows NT platforms.

/*
   Author Karl Vince Reyes 2025
   Educational Purposes Only

   For Lab 4
*/

#include <kaviyes/std>

namespace kstd {

    char getch(bool Debug) { // https://stackoverflow.com/questions/7469139/what-is-the-equivalent-to-getch-getche-in-linux
        struct termios oldt, newt;
        char ch;

        tcgetattr(STDIN_FILENO, &oldt);
        newt = oldt;
        newt.c_lflag &= ~(ICANON | ECHO);

        tcsetattr(STDIN_FILENO, TCSANOW, &newt);

        ch = getchar();

        tcsetattr(STDIN_FILENO, TCSANOW, &oldt);

        switch (Debug) {
            case true:
                std::cout << "[DEBUG] Key: " << ch << " is pressed\n" << std::endl;
                return ch;
            default:
                return ch;
        }
    }

    void cter() {
        std::cout << "\033c";
    }
}

namespace kgrade {

    double computeBase_15(double RawScore, double TotalItems) {
        return (RawScore / TotalItems) * (85 + 15);
    }

    std::string getRemarks(int Grade) {
        
        if      (Grade >= 95) {return "Excellent";}
        else if (Grade >= 90) {return "Very Good";}
        else if (Grade >= 85) {return "Good";}
        else if (Grade >= 80) {return "Satisfactory";}
        else if (Grade >= 75) {return "Fair";}
        else                  {return "Failed";}
    }

    double getPoints(std::string x, bool StopOnError) {
        double value;
        
        std::cout << x;
        std::cin >> value;

        if (value < 0 || value > 100) {

            std::cout << "\n"
                      << "[ERROR]   POINT IS NOT VALID." << std::endl
                      << "          Range 0 - 100 Only.\n" << std::endl;
            
            switch (StopOnError) {
                case true:
                    exit(1);
                case false:
                    return value;
            }

        } else {return value;}
    }

    double getAverage(

        double firstExam,
        double secondExam,
        double thirdExam,
        double finalExam,

        double labExercises,
        double quizzes,
        double programmingPlates,
        double CompreExam
    ) {
        
        return (
            
            (computeBase_15(firstExam, 100)          * EXAM_1st)             +
            (computeBase_15(secondExam, 100)         * EXAM_2nd)             +
            (computeBase_15(thirdExam, 100)          * EXAM_3rd)             +
            (computeBase_15(finalExam, 100)          * EXAM_FINAL)           +
            (computeBase_15(labExercises, 100)       * LAB_EXERCISE)         +
            (computeBase_15(quizzes, 100)            * QUIZZES)              +
            (computeBase_15(programmingPlates, 100)  * PROGRAMMING_PLATES)   +
            (computeBase_15(CompreExam, 100)         * COMPRE_EXAM)

        );

    }
}
