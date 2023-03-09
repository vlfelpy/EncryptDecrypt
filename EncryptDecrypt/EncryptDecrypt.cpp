#include <Windows.h>
#include <iostream>
#include <vector>
using namespace std;

// Шифрование
string encrypt(string input) {
    vector<char> word(input.begin(), input.end());
    string alphabet = "abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < (int)input.length(); i++) {
        for (int j = 0; j < (int)alphabet.length(); j++) {
            if (word[i] == alphabet[j]) {
                word[i] = alphabet[(j + 3) % 26];

                break;
            }
        }
    }
    string str(word.begin(), word.end());
    return str;
}

// Расшифровка
string decrypt(string input) {
    vector<char> word(input.begin(), input.end());
    string alphabet = "abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < (int)input.length(); i++) {
        for (int j = 0; j < (int)alphabet.length(); j++) {
            if (word[i] == alphabet[j]) {
                word[i] = alphabet[(j - 3) % 26];

                break;
            }
        }
    }
    string str(word.begin(), word.end());
    return str;
}


int main() {

    //Обычный вид без шифрования
    string text = "What are u doing dude?";
    cout << text << endl;

    //Шифрование
    string textencrypt = encrypt(text);
    cout << textencrypt << endl;

    string url = encrypt("https://ya.ru/");
    cout << url << endl;

    //Расшифровка
    string textdecrypt = decrypt(textencrypt);
    cout << textdecrypt << endl;




}
