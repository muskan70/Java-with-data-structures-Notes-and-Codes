template <typename T>
class Stack {
    T *data;
    int nextIndex;
    int capacity;

    public :

    Stack() {
        data = new T[5];
        nextIndex = 0;
        capacity = 5;
    }

    int size() {
        return nextIndex;
    }

    bool isEmpty() {
        //return nextIndex == 0;
        return size() == 0;
    }

    T top() {
        if(isEmpty()) {
            cout << "Stack is empty !" << endl;
            return 0;
        }
        return data[nextIndex - 1];
    }

    void push(T element) {
        if(nextIndex == capacity) {
            //cout << "Stack is full ! " << endl;
            //return;
            T *prev = data;
            data = new T[2 * capacity];
            for(int i = 0; i < capacity; i++) {
                data[i] = prev[i];
            }
            capacity *= 2;
            delete [] prev;
        }
        data[nextIndex] = element;
        nextIndex++;
    }
    
    T pop() {
        if(isEmpty()) {
            cout << "Stack is empty !" << endl;
            return 0;
        }
        nextIndex--;
        return data[nextIndex];
    }








};
