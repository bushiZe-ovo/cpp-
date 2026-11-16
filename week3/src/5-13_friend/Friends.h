#pragma once
class X;
class Y {
public:
    void g(X* p);
};
class Z {
public:
    void f(X* p);
};
void h(X* p);
class X {
    int i;
public:
    explicit X(int value = 0) : i(value) {}
    int getI() const { return i; }
    friend void Y::g(X* p);
    friend class Z;
    friend void h(X* p);
};
inline void Y::g(X* p) { ++p->i; }
inline void Z::f(X* p) { p->i += 5; }
inline void h(X* p) { p->i += 10; }
