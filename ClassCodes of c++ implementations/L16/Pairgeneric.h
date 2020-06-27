template <typename T, typename V>
class PairGeneric {
    T x;
    V y;

    public :

    PairGeneric() {

    }

    PairGeneric(T x, V y) {
        this -> x = x;
        this -> y = y;
    }

    T getX() {
        return x;
    }

    V getY() {
        return y;
    }
};
