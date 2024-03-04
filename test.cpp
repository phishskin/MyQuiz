#include <iostream>
enum answer : char
{
    A = 'A', B = 'B', C = 'C', D = 'D'
};
int numRight;

int main()
{
    //question 1
    std::cout << "Question 1: \n What is 1+1 \n A) 2 \n B) 0 \n C) 4 \n D) 3 " << std::endl;
    std::cout << "answer: \n";
    char answer1 = 'A';
    char input1;
    int oneRight;
    std::cin >> input1;
    if (input1 == answer1) {
        std::cout << "Correct! \n";
        oneRight = 1;
    }
    else {
        std::cout << "Incorrect!";
        oneRight = 0;
    }
    //question 2
    std::cout << "Question 2: \n What is 1+2 \n A) 4 \n B) 3 \n C) 5 \n D) 1 " << std::endl;
    std::cout << "answer: \n";
    char answer2 = 'B';
    char input2;
    int twoRight;
    std::cin >> input2;
    if (input2 == answer2) {
        std::cout << "Correct! \n";
        twoRight = 1;
    }
    else {
        std::cout << "Incorrect! \n";
        twoRight = 0;
    }
    //question 3
    std::cout << "Question 3: \n What is 1+4 \n A) 1 \n B) 7 \n C) 5 \n D) 0 " << std::endl;
    std::cout << "answer: \n";
    char answer3 = 'C';
    char input3;
    int threeRight;
    std::cin >> input3;
    if (input3 == answer3) {
        std::cout << "Correct! \n";
        threeRight = 1;
    }
    else {
        std::cout << "Incorrect! \n";
        threeRight = 0;
    }
    //question 4
    std::cout << "Question 4: \n What is 1+7 \n A) 6 \n B) 10 \n C) 8 \n D) 4 " << std::endl;
    std::cout << "answer: \n";
    char answer4 = 'C';
    char input4;
    int fourRight;
    std::cin >> input4;
    if (input4 == answer4) {
        std::cout << "Correct! \n";
        fourRight = 1;
    }
    else {
        std::cout << "Incorrect! \n";
        fourRight = 0;
    }
    //question 5
    std::cout << "Question 5: \n What is 2+2 \n A) 4 \n B) 3 \n C) 5 \n D) 1 " << std::endl;
    std::cout << "answer: \n";
    char answer5 = 'A';
    char input5;
    int fiveRight;
    std::cin >> input5;
    if (input5 == answer5) {
        std::cout << "Correct! \n";
        fiveRight = 1;
    }
    else {
        std::cout << "Incorrect! \n";
        fiveRight = 0;
    }

    return 0;
}