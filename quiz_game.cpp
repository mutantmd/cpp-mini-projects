#include <iostream>
#include <string>
using namespace std;

int main() {
    string questions[] = {
        "What is the capital of France? ",
        "What is 7 + 5? ",
        "What color do you get when you mix blue and yellow? ",
        "Which planet is known as the Red Planet? "
    };

    string answers[] = {
        "paris",
        "12",
        "green",
        "mars"
    };

    int numQuestions = sizeof(questions) / sizeof(questions[0]);
    int score = 0;
    for (int i=0 ; i<numQuestions ;i++){
        string user_answer;
        cout<<questions[i];
        cin>>user_answer;
        for (int j=0 ; j<user_answer.length() ; j++){
            user_answer[j]=tolower(user_answer[j]);
        }
        if (user_answer==answers[i]){
            cout<<" correct"<<endl;
            score++;
        }
        else {
            cout<<"wrong answer"<<endl;
        }
        cout << "You scored " << score << " out of " << numQuestions << "!" << endl;
    }
}