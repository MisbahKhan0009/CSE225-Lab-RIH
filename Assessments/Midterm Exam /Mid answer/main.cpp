#include <iostream>
#include<string>
#include"stacktype.h"
#include"Employee.h"

using namespace std;

int main()
{

StackType <int> st;

    st.Push(34);
    st.Push(75);
    st.Push(42);
    st.Push(23);

    StackType<int> st2;

    while(!st.IsEmpty())
    {

        st2.Push(st.Top());
        cout<<st2.Top();
        st.Pop();
    }


   Employee e1(801234, "Walter White", 50000);
   Employee e2(802678, "Jesse Pinkman", 35000);
   Employee e3(803123, "Skyler White", 15000);
   Employee e4(804908, "Hank Schrader", 40000);
   Employee e5(805235, "Saul Goodman", 30000);

   StackType<Employee> obj;
   obj.Push(e1);
   obj.Push(e2);
   obj.Push(e3);
   obj.Push(e4);
   obj.Push(e5);

  StackType<Employee> obj2;

    while(!obj.IsEmpty())
    {

        Obj2.Push(obj.Top());
        obj2.Print();
    }

   StackType<Employee> obj3;
    if(obj3.Salary>30000)
    {

        obj3.Push();
    }
 StackType<Employee> obj4;

    while(!obj3.IsEmpty())
    {

        Obj4.Push(obj3.Top());
        obj4.Print();
    }


    return 0;
}
