#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
    map<string, string> initial_id;
    map<string, string> finish_id;
    string word[] = {"room", "wonderful", "pork", "trap", "kind", "money", "dog", "given", "yellow", "eat", "apple", "neighbor"};
    initial_id[word[0]] = "r", finish_id[word[0]] = "m";
    initial_id[word[1]] = "w", finish_id[word[1]] = "l";
    initial_id[word[2]] = "p", finish_id[word[2]] = "k";
    initial_id[word[3]] = "t", finish_id[word[3]] = "p";
    initial_id[word[4]] = "k", finish_id[word[4]] = "d";
    initial_id[word[5]] = "m", finish_id[word[5]] = "y";
    initial_id[word[6]] = "d", finish_id[word[6]] = "g";
    initial_id[word[7]] = "g", finish_id[word[7]] = "n";
    initial_id[word[8]] = "y", finish_id[word[8]] = "w";
    initial_id[word[9]] = "e", finish_id[word[9]] = "t";
    initial_id[word[10]] = "a", finish_id[word[10]] = "e";
    initial_id[word[11]] = "n", finish_id[word[11]] = "r";
    
    int judge[12];
    int i, j, k; 
    for(i = 0; i < 12; i++){
        judge[i] = 0;
        for(j = 0; j < 12; j++){
            if(initial_id[word[i]] == finish_id[word[j]]){
                judge[i] = 1;
            }
        }
    }
    for(i = 0; i < 12; i++){
        if(judge[i] == 0){
            cout << word[i] << " ";
            k = i;
        }
    }
    for(i = 0; i < 12; i++){
        if(finish_id[word[k]] == initial_id[word[i]]){
            cout << word[i] << " ";
            k = i;
            i = -1;
        }
    }
    cout << endl;
    return 0;
}