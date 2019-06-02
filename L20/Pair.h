template <typename T, typename V>
class Pair {
    T first;
    V second;

    public :
    // Getters and setters
    T getFirst() {
        return first;
    }

    void setFirst(T first) {
        this -> first = first;
    }

    V getSecond() {
        return second;
    }

    void setSecond(V second) {
        this -> second = second;
    }
};


/*
class Pair {
    int first;
    int second;

    public :
    // Getters and setters
    int getFirst() {
        return first;
    }

    void setFirst(int first) {
        this -> first = first;
    }

    int getSecond() {
        return second;
    }

    void setSecond(int second) {
        this -> second = second;
    }
};

*/
