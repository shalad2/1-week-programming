#ifndef _COLLECTION_H_
#define _COLLECTION_H_

#include <iostream>

using namespace std;

template <typename T> class collection{
private:
    T *m_pArray;
    int m_length;
public:
    inline collection(const T *array, const int length){
        m_pArray = new T[length];
        m_length = length;
        for(int i = 0; i < m_length; i++){
            m_pArray[i] = array[i];
        }
    }
    inline ~collection(){
        delete [] m_pArray;
    }
    inline T getMax() const{
        T max = m_pArray[0];
        for(int i = 0; i < m_length; i++){
            if(max < m_pArray[i]){
                max = m_pArray[i];
            }
        }
        return max;
    }
    inline T getMin() const{
        T min = m_pArray[0];
        for(int i = 0; i < m_length; i++){
            if(min > m_pArray[i]){
                min = m_pArray[i];
            }
        }
        return min;
    }
    inline void showArray() const{
        for(int i = 0; i < m_length; i++){
            cout << m_pArray[i] << " ";
        }
        cout << endl;
    }
};

#endif // _COLLECTION_H_