#include <iostream>
using namespace std;

int main() {
	string name;
	cout<<"Enter you name:";
	cin>>name;
	cout<<"Welcome "<<name<<"\n";
    cout << "===== General Knowledge Quiz =====\n\n";

    int score = 0;
    int answer;

    // Question 1
    cout << "Q1: What is the largest ocean on Earth?\n";
    cout << "1. Atlantic Ocean\n2. Indian Ocean\n3. Pacific Ocean\n4. Arctic Ocean\n";
    cout << "Your answer: ";
    cin >> answer;
    if (answer == 3) { cout << "Correct!\n\n"; score++; }
    else { cout << "Incorrect! Correct answer: Pacific Ocean\n\n"; }

    // Question 2
    cout << "Q2: Water boils at what temperature at sea level?\n";
    cout << "1. 90°C\n2. 100°C\n3. 110°C\n4. 120°C\n";
    cout << "Your answer: ";
    cin >> answer;
    if (answer == 2) { cout << "Correct!\n\n"; score++; }
    else { cout << "Incorrect! Correct answer: 100°C\n\n"; }

    // Question 3
    cout << "Q3: Who was the first President of the United States?\n";
    cout << "1. Abraham Lincoln\n2. Thomas Jefferson\n3. George Washington\n4. John Adams\n";
    cout << "Your answer: ";
    cin >> answer;
    if (answer == 3) { cout << "Correct!\n\n"; score++; }
    else { cout << "Incorrect! Correct answer: George Washington\n\n"; }

    // Question 4
    cout << "Q4: What does CPU stand for?\n";
    cout << "1. Central Processing Unit\n2. Control Processing Unit\n3. Central Power Unit\n4. Computer Processing Utility\n";
    cout << "Your answer: ";
    cin >> answer;
    if (answer == 1) { cout << "Correct!\n\n"; score++; }
    else { cout << "Incorrect! Correct answer: Central Processing Unit\n\n"; }

    // Question 5
    cout << "Q5: Which planet is known as the Red Planet?\n";
    cout << "1. Venus\n2. Mars\n3. Jupiter\n4. Mercury\n";
    cout << "Your answer: ";
    cin >> answer;
    if (answer == 2) { cout << "Correct!\n\n"; score++; }
    else { cout << "Incorrect! Correct answer: Mars\n\n"; }

    cout << "====================================\n";
    cout << "Quiz finished! Your total score: " << score << "/5\n";
    cout << "====================================\n";

    return 0;
}
