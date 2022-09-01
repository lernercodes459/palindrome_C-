#include <iostream>
#include <vector>

using namespace std;

vector <int> intToArray(int x){
    vector<int>resultArray;
    while(true){
        resultArray.insert(resultArray.begin(), x % 10);
        x /= 10;
        if(x == 0){
            for(int a = 0; a < resultArray.size(); a++){
                cout << resultArray[a] << endl;
            }
            return resultArray;
        }
    }
}


bool numIsPalindrome(vector <int> array){
    if(array.size() % 2 == 0){
        for(int i = 0; i < array.size() / 2; i++){
            if(array.front() + i  != array.back() + i){
                return false;
            }
        }
        return true;

    }else{
        for(int i = 0; i < (array.size() - 1) / 2; i++){\
            if(array.front() + i != array.back() + i){
                return false;
            }
        }
        return true;
    }
}


int main(){
    int input;
    cin >> input;

    if(numIsPalindrome(intToArray(input))){
        cout << "is palindrome" << endl;
    }else{
        cout << "is not palindrome" << endl;
    }
}