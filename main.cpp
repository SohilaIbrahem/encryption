#include <iostream>
#include <string>
#include "UI.h"
#include "Stream.h"
#include "Ops.h"
using namespace std;

int main()
{
    Stream file;
    UI window;
	string password("admin"), uname("admin");
	string n, p;

    window.set_disp_pass();
    cout <<"\tWelcome to CRYPTO's LOGIN SYSTEM\n";
	do
	{
		if ((!n.empty() || !p.empty()) && (p != "admin" || n != "admin"))
			cout << "\nWrong User Info ";
		cout << "Enter User Name" << endl;
		cin >> n;
		cout << "Enter Password" << endl;
		p = window.write_password();
	} while (n.compare(uname) != 0 || p.compare(password) != 0);

	window.set_window_info();
	window.draw_width(100, '-');
	string header[] = { "CRYPTO v1.0","Welcome to CRYPTO","Please select encryption method by select number of it" };
	window.write_header(header, 25);
	window.type_center("Select file first before select encryption method!\n");
	window.draw_width(80, '=');
	window.type_center("========== Type name of file which include text then press Enter ==========");
	window.draw_width(80, '=');
	window.draw_width(100, '-');
	string items[] = {
		"MD5 Cipher Encryption",
		"One-way encryption algorithm, producing a 128-bit hash value.",
		"Caesar Cipher Encryption",
		"one of the simplest and most widely known encryption techniques.",
		"Hill Cipher Encryption",
		"Good Method, It needs a key word with original text",
		"Vigenere Cipher Encryption ",
		"Very Good way, Depends on the principle of using a key length\n\t\t corresponding to the length of the original text",
		"EXIT",
		"Exit program"
	};
	window.draw_menu(items, 5);
	window.type_center("The Encrypted text will writed down into 'encrypted.txt' in same path");
	window.draw_width(100, '-');
	window.printS("Please Enter File name with path without '.txt' ***** Enter Key", '|');





    Encrypt enc;
    Decrypt dic;

    string msg;
    msg = enc.caesar_encrypt();
    file.save_to_file(msg);

    string msg2;
    msg2 = dic.caesar_decrypt();
    file.save_to_file(msg2);


    return 0;
}
