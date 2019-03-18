//
// Created by andrea settimo on 2019-03-14.
//

#ifndef BUFFER
#define BUFFER

class Buffer{
    int size;
    int *buf;

public:

    /* costruttore */
    Buffer(int size): size(size){
        buf = new int[size];        /* creazione del buffer */
    }

    /* distruttore */
    ~Buffer(){
        delete[] buf;
    }

    int getSize(){
        return size;
    }

    bool setData(int pos, int value){
        if (pos < this->size){
            buf[pos] = value;
            return true;
        }
        return false;
    }

    bool getData(int pos, int *value){
        if (pos < this->size){
            *value = buf[pos];
            return true;
        }
        return false;
    }

};
#endif
