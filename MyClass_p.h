#ifndef MYCLASS_P_H
#define MYCLASS_P_H

#include <QObject>
class MyClass;
class MyClassPrivate
{
public:
    MyClassPrivate(MyClass *q);

    void privateMethod();
    int privateData;
signals:

private:
    MyClass *q_ptr;
    Q_DECLARE_PUBLIC(MyClass)
};

#endif // MYCLASS_P_H
