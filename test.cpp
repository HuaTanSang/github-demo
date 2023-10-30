#include <bits/stdc++.h>
using namespace std;

vector<int> ans;
int money = 0; 

int main()
{
    // Khởi tạo seed bằng thời gian hiện tại
    //srand(time(0));

    long long n;  
    cout << "Nhap n: "; 
    cin >> n; 

    for(int i = 0; i < n; i++)
    {
        int number = rand() % 100 + 1;
        ans.push_back(number);      
    }
    
    //cout << ans[8]; 
    for(int i = 0; i < n; i++)
    {
        if(ans[i] <= 1 && ans[i] <= 51)
            money--; 
        else 
            money++; 
    }
    
    cout << money; 

    return 0;
}
