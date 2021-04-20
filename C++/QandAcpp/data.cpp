
#include "data.h"

void CData::init()
{
	number = 0;
	comment = "";
}

void CData::setNumber(int num0){
    number=num0;
}
void CData::setComment(string comment0){
    comment=comment0;
}
int CData::getNumber(){
    return number;
}

string CData::getComment(){
    return comment;

}
