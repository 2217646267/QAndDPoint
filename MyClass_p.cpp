#include "MyClass_p.h"

MyClassPrivate::MyClassPrivate(MyClass *q)
     : q_ptr(q), privateData(0)
{

}

void MyClassPrivate::privateMethod() {
    // 私有方法实现
}
