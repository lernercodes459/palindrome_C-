#include <iostream>

using namespace std;

/*maybe one day i'll implement a vector to this*/

bool isPalindrome(string word){
    char regular[word.size()];
    char reversed[word.size()];

    for(int i = 0 ; i < word.size(); i++){
        regular[i] = word[i];
        reversed[i] = word[(word.size() - 1) - i];
        if(regular[i] != reversed[i]){
            return false;
        }
    }
    return true;
}

int main(){
    string word = "";
    cin >> word;

    if(isPalindrome(word)){
        cout << "is a palidrome" << endl;
    }else{
        cout << "not a palindrome" << endl;
    }

    return 0;
}

