#include <cstdio>
#include <stack>

using namespace std;

int main(){

    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);

    printf("%d\n", st.top());
    printf("%d\n", st.size());

    st.pop();

    printf("%d\n", st.top());
    printf("%d\n", st.size());
    
    return 0;
}