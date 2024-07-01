#include "MyClass.h"

MyClass::MyClass(QObject *parent)
    : QObject(parent), d_ptr(new MyClassPrivate(this))
{

}

void MyClass::publicMethod() {
    Q_D(MyClass);
    d->privateMethod();
}
