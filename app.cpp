#include <iostream>

class Word {
private:
    char* phrase;

public:
    void getWord() {

        std::cout << "Please enter the word you want to check if it is a palidrome :)";
        std::cin >> phrase;
        std::cout << "Thank You.";

    }

    bool isPalidrome() {
        int startOfWord = 0;
        int endOfWord = sizeof(phrase) - 1;

        while (startOfWord < endOfWord){
            if (phrase[startOfWord] != phrase[endOfWord]) {
                return false;
            }
            startOfWord++;
            endOfWord--;
            return true;
        }
    }
};


int main() {
    Word text;
    text.getWord();
    bool result = text.isPalidrome();
    if (result) {
        std::cout << "Yay! The word you entered is a palindrome.";
    }
    else {
        std::cout << "Yikes! The word you entered isn't a palindrome";
    }

    std::cin.get();

}
