template<typename T>
class Vector{
    T *arr;
    int cs, ms;

    public :
    Vector(int maxSize = 1){
        cs = 0;
        ms = maxSize;
        arr = new T [ms];
    }

    void push_back(T d){
        if(cs == ms){
            T *oldArr = arr;
            ms = 2*ms;
            arr = new T[ms];
            for(int i = 0; i < cs; ++i){
                arr[i] = oldArr[i];
            }
            delete [] oldArr;
        }
        arr[cs] = d;
        ++cs;
    }

    void pop_back(){
        if(cs >= 0){
            --cs;
        }
    }
    bool isEmpty(){
        if(cs == 0){
            return true;
        }
        return false;
    }
    T front(){
        return arr[0];
    }
    T back(){
        return arr[cs - 1];
    }
    T at(int i){
        return arr[i];
    }
    int size(){
        return cs;
    }
    int capacity(){
        return ms;
    }
    T operator[](int i){
        return arr[i];
    }
};