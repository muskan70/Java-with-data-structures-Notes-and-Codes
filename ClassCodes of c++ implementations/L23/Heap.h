#include <vector>

template <typename T>
class Heap {
    vector<T> data;

    public :

    Heap() {
        data.push_back(0);
    }

    void insert(T e) {
        data.push_back(e);

        int childIndex = data.size() - 1;
        while(childIndex > 1) {
            int parentIndex = childIndex / 2;
            if(data[parentIndex] < data[childIndex]) {
                break;
            }
            T temp = data[parentIndex];
            data[parentIndex] = data[childIndex];
            data[childIndex] = temp;
            childIndex = parentIndex;
        }
    }

    T getMin() {
        if(data.size() == 1) {
            return 0;
        }
        return data[1];
    }

    T removeMin() {
        if(data.size() == 1) {
            return 0;
        }

        T ans = data[1];
        data[1] = data[data.size() - 1];
        data.pop_back();

        int parentIndex = 1;
        while(parentIndex < data.size()) {
            int leftIndex = 2 * parentIndex;
            int rightIndex = leftIndex + 1;

            int minIndex = parentIndex;
            if(leftIndex < data.size() && data[leftIndex] < data[minIndex]) {
                minIndex = leftIndex;
            }
            if(rightIndex < data.size() && data[rightIndex] < data[minIndex]) {
                minIndex = rightIndex;
            }
            if(minIndex == parentIndex) {
                break;
            }
            T temp = data[minIndex];
            data[minIndex] = data[parentIndex];
            data[parentIndex] = temp;

            parentIndex = minIndex;
        }

        return ans;
    }

};
