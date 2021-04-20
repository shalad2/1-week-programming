#include <iostream>
#include <cctype>
#include <string>
#include "NewString.h"

using namespace std;

NewString::NewString(){
    m_value = "";
}
NewString::NewString(string value){
    m_value = value;
}
NewString::NewString(NewString &value){
    m_value = value.getValue();
}
NewString& NewString::operator=(NewString &n){
    m_value = n.getValue();
    return *this;
}
bool NewString::operator==(const NewString &n){
    string tmp1, tmp2;
    for(int i = 0; i < m_value.size(); i++){
        tmp1[i] = toupper(m_value[i]);
        tmp2[i] = toupper(n.m_value[i]);
    }
    return tmp1 == tmp2; 
}
string NewString::getValue(){
    return m_value;
}
