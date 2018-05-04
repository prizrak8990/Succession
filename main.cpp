#include <iostream>

class A {
public:
 virtual void foo() {std::cout << "A::foo" << std::endl;};
 virtual void bar() {std::cout << "A::bar"<< std::endl;};
         void baz() {std::cout << "A::baz"<< std::endl;};
};

class B : public A {
public:
    virtual void foo() {std::cout << "B::foo"<< std::endl;};
            void bar() {std::cout << "B::bar"<< std::endl;};
    virtual void baz() {std::cout << "B::baz"<< std::endl;};
};

class C : public B {
public:
    virtual void foo() {std::cout << "C::foo"<< std::endl;};
    virtual void bar() {std::cout << "C::bar"<< std::endl;};
            void baz() {std::cout << "C::baz"<< std::endl;};
};


int main() {
    A* a1 = new B;
    a1->foo();
    a1->bar();
    a1->baz();

    A* a2 = new C;
    a2->foo();
    a2->bar();
    a2->baz();
}
