// program Antrian Krusty Krab 
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<string>q;
    int i,n;
    string nama ;
    system ("clear");
    cout<<"Selamat datang di Krusty Krab "<<endl;
    cout<<"Masukkan jumlah orang yang mengantri : ";
    cin>>n;

    cout<<"Silahkan masukkan nama yang mengantri : "<<endl;
    for (i = 0; i <n; i++)
    {
        cout<<i+1<<".) ";
        cin>>nama;
        q.push(nama);
    }

    cout<<endl<<"Urutan antrian : "<<endl;
    for ( i = 0; i < n; i++)
    {
        cout<<i+1<<".)"<<q.front()<<endl;
        q.pop();
    }
    
    
}