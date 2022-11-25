#include <iostream>
#include <stack>
using namespace std;
int main()
{
    system("clear");
    stack<string>s;
    int i,n;
    string urutan;
    cout<<"Masukkan banyak urutan membuat Krabby Patty? ";
    cin>> n;
    cout<<"Silahkan masukkan urutan Krabby Patty :"<<endl;
    for (i = 0; i <n; i++)
    {
        cout<<i+1<<".";
        cin>>urutan;
        s.push(urutan);
    }
    cout<<endl<<"Tampilan krabby patty jika sudah jadi :"<<endl;
    for (i = 0; i <n; i++)
    {
        cout<<s.top()<<endl;
        s.pop();
    }
}
