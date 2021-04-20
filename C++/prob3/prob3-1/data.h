#ifndef _DATA_H_
#define _DATA_H_

#include <string>

using namespace std;

class CData{
private:
    int number;
    string comment;
public:
    void init();
    void setNumber(int num);
    void setComment(string com);
    int getNumber();
    string getComment();
};

#endif // _DATA_H_