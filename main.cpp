#include<iostream>
#include<cctype> // for tolower function
using namespace std;

int main()
{
    string emotion, response;

    cout <<  "How are you feeling? (happy or sad)" << endl;
    cin >> emotion;

    for (int i = 0; i < emotion.length(); i++) {
        emotion[i] = tolower(emotion[i]);
    }

    if (emotion == "happy") {
        cout << "I'm glad you are happy!" << endl;
    }
    else if (emotion == "sad"){
        cout << "Why are you sad?" << endl;
        cin >> response;
        cout << "Sorry to hear that. I hope things get better!" << endl;
    }
    else {
        cout << "I feel indifferent" << endl;
    }

    return 0;
}
