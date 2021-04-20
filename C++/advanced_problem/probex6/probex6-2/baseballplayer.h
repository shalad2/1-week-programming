#ifndef _BASEBALLPLAYER_H_
#define _BASEBALLPLAYER_H_

#include <iostream>
#include <string>

using namespace std;

class BaseballPlayer{
protected:
    int m_number;
    string m_kind;
    string m_name;
public:
    int getNumber(){
        return m_number;
    }
    string getKind(){
        return m_kind;
    }
    string getName(){
        return m_name;
    }
    virtual void play()=0;
};

#endif // _BASEBALLPLAYER_H_