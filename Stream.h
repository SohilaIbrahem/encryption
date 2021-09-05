#ifndef STREAM_H_INCLUDED
#define STREAM_H_INCLUDED

#include <iostream>
#include <cstring>
#include <string>
#include <fstream>

using namespace std;
class Stream{
private:

    string get_file_name(){
        cout << "Enter file Name" << endl;
        string s;
        cin >> s;
        string temp = s+".txt";
        return temp;
    }

public:
    string read_OriginalMsg()
    {
        string name = get_file_name();
        fstream file(name.c_str());
        string txt;
        getline(file,txt,'/');
        string T(txt);
        file.close();
        return T;
    }

    int get_num_of_cmd(string print)
    {
        cout << print <<": ";
        int cmd;
        cin >> cmd;
        return cmd;
    }

    void save_to_file(string enc)
    {
        fstream file;
        file.open("dec.txt",fstream::out);
        file.clear();
        file <<enc <<endl;
        file.close();
        cout << "Done Saved Encrypted text in encryption.txt" << endl;
    }




};

#endif // STREAM_H_INCLUDED
