#include<bits/stdc++.h>
using namespace std;

// 1. Next Greater Right (Monotonic Decreasing)
// a[st.top()] < a[i]
vector<int> nextGreaterRight(vector<int> &a){
    int n=a.size();
    stack<int> st;
    vector<int> ans(n,-1);
    for(int i=0; i<n; i++){
        while(!st.empty() && a[st.top()] < a[i]){
            ans[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    return ans;
}

// 2. Next Greater Left (Monotonic Decreasing) or Previous Greater
// a[st.top()] <= a[i]
vector<int> nextGreaterLeft(vector<int> &a){
    int n=a.size();
    stack<int> st;
    vector<int> ans(n,-1);
    for(int i=n-1; i>=0; i--){
        while(!st.empty() && a[st.top()] <= a[i]){
            st.pop();
        }
        ans[i] = st.empty() ? -1 : st.top();
        st.push(i);
    }
    return ans;
}

// 3. Next Smaller Right (Monotonic Increasing)
// a[st.top()] > a[i]
vector<int> nextSmallerRight(vector<int>& a) {
    int n = a.size();
    vector<int> ans(n, -1);
    stack<int> st;

    for (int i = 0; i < n; i++) {
        while (!st.empty() && a[st.top()] > a[i]) {
            ans[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    return ans;
}

// 4. Next Smaller Left (Monotonic Increasing) or Previous Smaller
// a[st.top()] >= a[i]
vector<int> nextSmallerLeft(vector<int>& a) {
    int n = a.size();
    vector<int> ans(n, -1);
    stack<int> st;

    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && a[st.top()] >= a[i])
            st.pop();
        ans[i] = st.empty() ? -1 : st.top();
        st.push(i);
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    vector<int> ans = nextGreaterRight(a);
    //vector<int> ans = nextGreaterLeft(a);
    //vector<int> ans = nextSmallerRight(a);
    //vector<int> ans = nextSmallerLeft(a);
    for(int x : ans) cout << x << " ";
    return 0;
}
