
#include <iostream>
using namespace std;

int main()
{

     int cho ;
     string alphabit={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
     string tex;
     string re_tex="";
     string rev_tex="";
     cout<<"enter the text : ";
     getline(cin,tex);
 // asking user what he want encrypt or decrypt.
    cout << "1-encrypt\n""2- decrypt" << endl;
    cout<<"choose 1 or 2 : ";
     cin >> cho;

   if (cho ==1)
   {
        cout<<"---encrypt---"<<endl;
        for (int i =0; i<tex.length();i++){
// make all characters uppercase
           string x;
           tex[i]=toupper(tex[i]);}
        for(int n=alphabit.length()-1;n>=0;n--){
            rev_tex+=alphabit[n];}

//reverse all alphabet letters
        for (int y =0; y<tex.length();y++){
             if(tex[y]==32){
                  re_tex+=' ';
//add any space in re_tex
            }else{

                for (int x=0;x<alphabit.length();x++){
                    if (tex[y]==alphabit[x]){
                         re_tex+=rev_tex[x];
                         break;
                     }
//add the reverse letters in re_tex






                 }
            }
           }

    cout << re_tex ;


      }else if(cho==2){
          string rev_alpha={'Z','X','Y','W','V','U','T','S','R','Q','P','O','N','M','L','K','J','I','H','G','F','E','D','C','B','A'};
          cout<<"---decrypt---"<<endl;
          for (int m =0; m<tex.length();m++){
           // make all character uppercase
           tex[m]=toupper(tex[m]);}
        for(int w=rev_alpha.length()-1;w>=0;w--){
            rev_tex+=rev_alpha[w];}
        for(int z =0; z<tex.length();z++){

            if(tex[z]==32){
                  re_tex+=' ';

            }else{

                for (int x=0;x<rev_alpha.length();x++){
                    if (tex[z]==rev_alpha[x]){
                         re_tex+=rev_tex[x];
                         break;

        }



   }



  }

        }

  cout<<re_tex;

      }else{
             cout <<"Sorry, your input not valid";

    }

    return 0 ;
}

