#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
    map<string, string> animals;
    string english[] = {"cat", "dog", "bird", "tiger"};
    string name;
    animals[english[0]] = "猫";
    animals[english[1]] = "犬";
    animals[english[2]] = "鳥";
    animals[english[3]] = "トラ";
    cout << "英語で動物の名前を入力してください：";
    cin >> name;
    cout << endl;
    int j = 0; 
    for(int i = 0; i < 4; i++){
        if(name == english[i]){
            cout << "「" << animals[english[i]] << "」です。" << endl;
            j++;
        }
    }
    if(j == 0){
        cout << "対応するデータは登録されていません。" << endl;
    }
    return 0;
}