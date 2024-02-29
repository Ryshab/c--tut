#include <iostream>
#include <fstream>
using namespace std;

class Sample
{
    string st, s,st2;

public:
    Sample(){
        cout<<"Your constructer has been called here"<<endl;
        fstream out;
        out.open("Sample.txt");
    }
    string inp(){
        cout<<"Enter your input :"<<endl;
        getline(cin,s);
        return s;
    }
    void write()
    {
        st2=inp();
        ofstream out("sample.txt");
        out << st2;
        out<<"\nThis is additional line";
    }
    void read(void)
    {
        ifstream in("sample.txt");
        // while (getline(in, st)){
        //     if (st.empty()){
        //         break;
        //     }

        // cout << st<<endl;}
        while (in.eof()==0){
            getline(in,st);
            cout<<st<<endl;
        
    }}
    ~Sample(){
        fstream out;
        out.close();
        cout<<"\nYour destructer has been called here"<<endl;
    }
};
int main()
{
    Sample obj;
    // obj.write("Fuck u bitch");
    obj.write();
    obj.read();
    return 0;
}