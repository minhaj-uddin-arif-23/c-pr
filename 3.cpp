#include<bits/stdc++.h>
using namespace std;

struct Question {
    string question;
    vector<string> options;
    char correctOption;
};

class Quiz {
private:
    vector<Question> questions;
    int score;

public:
    Quiz() : score(0) {
        questions.push_back({"What is the capital of France?", {"A. Berlin", "B. Madrid", "C. Paris", "D. Rome"}, 'C'});
        questions.push_back({"Which planet is known as the Red Planet?", {"A. Venus", "B. Mars", "C. Jupiter", "D. Saturn"}, 'B'});
        questions.push_back({"What is the largest mammal?", {"A. Elephant", "B. Blue Whale", "C. Giraffe", "D. Gorilla"}, 'B'});
        questions.push_back({"What is the capital of Bangladesh?", {"A. Dhaka", "B.Barishal", "C.Khulna", "D. Coxbazar"}, 'A'});
        
    }
    void askQuestion(const Question& q) {
        cout << q.question << endl;

        for (const auto& option : q.options) {
            cout << option << endl;
        }

        char userAnswer;
        cout << "Your answer (enter the letter): ";
        cin >> userAnswer;

        if (toupper(userAnswer) == q.correctOption) {
            cout << "Correct!\n";
            score++;
        } else {
            cout << "Incorrect. The correct answer is " << q.correctOption << ".\n";
        }

        cout << "-----------------------------\n";
    }

    // Start the quiz
    void startQuiz() {
        score = 0;
        for (const auto& question : questions) {
            askQuestion(question);
        }

        cout << "Quiz completed! Your final score: " << score << "/" << questions.size() << endl;
    }
};

int main() {
    Quiz quiz;
    cout<<".........................."<<endl;
    cout << "Welcome to the Quiz!\n";
    cout << "Answer the following questions:\n";
    cout<<"...................."<<endl;
    
    quiz.startQuiz();

    return 0;
}
