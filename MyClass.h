#ifndef MYCLASS_H
#define MYCLASS_H

#include <QObject>
#include <MyClass_p.h>

class MyClassPrivate;

class MyClass : public QObject
{
    Q_OBJECT
public:
    explicit MyClass(QObject *parent = nullptr);

     void publicMethod();
signals:
private:

private:
     MyClassPrivate * const d_ptr;
     Q_DECLARE_PRIVATE(MyClass)
    // Q_DISABLE_COPY(MyClass)
};

#endif // MYCLASS_H
