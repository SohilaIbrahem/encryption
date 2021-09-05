#ifndef OPS_H_INCLUDED
#define OPS_H_INCLUDED

#include <string>
#include <cstdlib>




    class Encrypt
    {
    public:
        string caesar_encrypt()
        {
            Stream st;
            string user_input_message ;
            int key;
            string e_message;
            int new_int_input;
            string m;
            user_input_message = st.read_OriginalMsg();
            cout << user_input_message << endl;

            cout<<"Enter Your Key Shifting : "<<endl;
            cin>>key;

            for(int i=0;i<user_input_message.length();i++)
                {
                    m += (char)toupper(user_input_message[i]);
                }

            for (int i = 0 ; i < m.length() ; i++)
            {
                if (isupper(m[i]))
                {
                    new_int_input = ((int) (m[i]+key-65)%26 +65);
                    e_message += ((char) new_int_input);


                }
                else if(islower(m[i]))
                {
                    new_int_input = ((int)(m[i]+key-97)%26 +97);
                    e_message +=((char)new_int_input);

                }
                else if (isdigit(m[i]))
                {
                    cout<<m[i];
                }


            }
            return e_message;

                }


    };


class Decrypt{
public:
    string caesar_decrypt()
    {
        Stream st;
        string msg,e_msg;
        int key;
        msg = st.read_OriginalMsg();
        cout<<"Enter Your Key Shifting : "<<endl;
            cin>>key;


        for(int i=0;i<msg.length();i++)
        {
            if(isupper(msg[i]))
            {
                int temp = (int)((msg[i]-key+65)%26 +65);
                cout << temp << endl;
                e_msg += (char)temp;
            }
            else if(isdigit(msg[i]))
            {
                e_msg += (char)msg[i];
            }

        }

    return e_msg;
    }

};
#endif // OPS_H_INCLUDED
