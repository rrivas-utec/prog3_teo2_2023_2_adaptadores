#include <iostream>

#include <stack>    // stack
#include <queue>    // queue y priority queue
#include <list>
#include <algorithm>
using namespace std;

void ejercicio_1() {
    std::stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    auto x = 010;
    cout << x << endl;

    for(;!st.empty();st.pop()) {
        std::cout << st.top() << " size: " << st.size() << " is_empty: " << boolalpha << st.empty() << endl;
    }
    std::cout << st.size() << endl;
    std::cout << boolalpha << st.empty() << endl;
}

void ejercicio_2() {
    vector v {10, 20, 40, 50};
    stack st(v);
    for(;!st.empty();st.pop()) {
        std::cout << st.top() << " size: " << st.size() << " is_empty: " << boolalpha << st.empty() << endl;
    }
    reverse(begin(v), end(v));
    stack st2(v);
    for(;!st2.empty();st2.pop()) {
        std::cout << st2.top() << " size: " << st2.size() << " is_empty: " << boolalpha << st2.empty() << endl;
    }
}

void ejercicio_3() {
    deque d {10, 20, 40, 50};
    queue qu(d);
    for(;!qu.empty();qu.pop()) {
        std::cout << qu.front() << " size: " << qu.size() << " is_empty: " << boolalpha << st.empty() << endl;
    }
}

int main() {
//    ejercicio_1();
    ejercicio_2();
    return 0;
}
