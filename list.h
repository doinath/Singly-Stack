class list {
public:
    virtual void add(int num) = 0;
    virtual void print() = 0;
    virtual int peek() = 0;
    virtual void insertAt(int num, int pos) = 0;
    virtual void removeHead() = 0;
    virtual void removeTail() = 0;
};