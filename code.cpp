#include <iostream>

using namespace std;

int len = 0;

string OneNine(int n){
    string e;
    if ( n==1 ){
        e = " one";
        len = len + 3;
    } else if ( n==2 ){
        e = " two";
        len = len + 3;
    } else if ( n==3 ){
        e = " three";
        len = len + 5;
    } else if ( n==4 ){
        e = " four";
        len = len + 4;
    } else if ( n==5 ){
        e = " five";
        len = len + 4;
    } else if ( n==6 ){
        e = " six";
        len = len + 3;
    } else if ( n==7 ){
        e = " seven";
        len = len + 5;
    } else if ( n==8 ){
        e = " eight";
        len = len + 5;
    } else if ( n==9 ){
        e = " nine";
        len = len + 4;
    } else if ( n==10 ){
        e = " ten";
        len = len + 3;
    } else if ( n==11 ){
        e = " eleven";
        len = len + 6;
    } else if ( n==12 ){
        e = " twelve";
        len = len + 6;
    } else if ( n==13 ){
        e = " thirteen";
        len = len + 8;
    } else if ( n==14 ){
        e = " fourteen";
        len = len + 8;
    } else if ( n==15 ){
        e = " fifteen";
        len = len + 7;
    } else if ( n==16 ){
        e = " sixteen";
        len = len + 7;
    } else if ( n==17 ){
        e = " seventeen";
        len = len + 9;
    } else if ( n==18 ){
        e = " eighteen";
        len = len + 8;
    } else if ( n==19 ){
        e = " nineteen";
        len = len + 8;
    } else {

    }
    return e;
}

string des(int num){
    string en;
    int temp;
    if ( num>=1 and num<20 ){
        en = OneNine(num);
    } else if ( num == 20 ){
        en = " twenty";
        len = len + 6;
    } else if ( num > 20 and num < 30){
        temp = num - 20;
        en = " twenty" + OneNine(temp);
        len = len + 6;
    } else if ( num == 30 ){
        en = " thirty";
        len = len + 6;
    } else if ( num > 30 and num < 40 ){
        temp = num - 30;
        en = " thirty" + OneNine(temp);
        len = len + 6;
    } else if ( num == 40 ){
        en = " forty";
        len = len + 5;
    } else if ( num > 40 and num < 50 ){
        temp = num - 40;
        en = " forty" + OneNine(temp);
        len = len + 5;
    } else if ( num == 50 ){
        en = " fifty";
        len = len + 5;
    } else if ( num > 50 and num < 60 ){
        temp = num - 50;
        en = " fifty" + OneNine(temp);
        len = len + 5;
    } else if ( num == 60 ){
        en = " sixty";
        len = len + 5;
    } else if ( num >60 and num < 70 ){
        temp = num - 60;
        en = " sixty" + OneNine(temp);
        len = len + 5;
    } else if ( num == 70 ){
        en = " seventy";
        len = len + 7;
    } else if ( num > 70 and num < 80 ){
        temp = num - 70;
        en = " seventy" + OneNine(temp);
        len = len + 7;
    } else if ( num == 80 ){
        en = " eighty";
        len = len + 6;
    } else if ( num > 80 and num < 90){
        temp = num - 80;
        en = " eighty" + OneNine(temp);
        len = len + 6;
    } else if ( num == 90 ){
        en = " ninety";
        len = len + 6;
    } else if ( num > 90 and num < 100 ){
        temp = num - 90;
        en = " ninety" + OneNine(temp);
        len = len + 6;
    }
    return en;
}

string hanet(int num){
    string en,h;
    h = " hundred";
    int temp;
    if ( num>=1 and num<20 ){
        en = OneNine(num);
    } else if ( num >= 20 and num < 100){
        en = des(num);
    } else if ( num == 100 ){
        en = " one" + h;
        len = len + 7 + 3;
    } else if ( num > 100 and num < 200) {
        temp = num - 100;
        en = " one" + h + des(temp);
        len = len + 7 + 3;
    } else if ( num == 200 ){
        en = " two" + h;
        len = len + 7 + 3;
    } else if ( num > 200 and num < 300){
        temp = num - 200;
        en = " two" + h + des(temp);
        len = len + 7 + 3;
    } else if ( num == 300 ){
        en = " three"+ h;
        len = len + 7 + 5;
    } else if ( num > 300 and num < 400 ){
        temp = num - 300;
        en = " three" + h + des(temp);
        len = len + 7 + 5;
    } else if ( num == 400 ){
        en = " four" + h;
        len = len + 7 + 4;
    } else if ( num > 400 and num < 500 ){
        temp = num - 400;
        en = " four" + h + des(temp);
        len = len + 7 + 4;
    } else if ( num == 500 ){
        en = " five" + h;
        len = len + 7 + 4;
    } else if ( num > 500 and num < 600 ){
        temp = num - 500;
        en = " five" + h + des(temp);
        len = len + 7 + 4;
    } else if ( num == 600 ){
        en = " six" + h;
        len = len + 7 + 3;
    } else if ( num >600 and num < 700 ){
        temp = num - 600;
        en = " six" + h + des(temp);
        len = len + 7 + 3;
    } else if ( num == 700 ){
        en = " seven" + h;
        len = len + 7 + 5;
    } else if ( num > 700 and num < 800 ){
        temp = num - 700;
        en = " seven" + h + des(temp);
        len = len + 7 + 5;
    } else if ( num == 800 ){
        en = " eight" + h;
        len = len + 7 + 5;
    } else if ( num > 800 and num < 900){
        temp = num - 800;
        en = " eight" + h + des(temp);
        len = len + 7 + 5;
    } else if ( num == 900 ){
        en = " nine" + h;
        len = len + 7 + 4;
    } else if ( num > 900 and num < 1000 ){
        temp = num - 900;
        en = " nine" + h + des(temp);
        len = len + 7 + 4;
    }
    return en;
}

string thous(int num){
string word;
    word = " ";
    int length,a,s;
    double q,w;
    q = 0;
    w = 0;
    length = 0;
    if ( num >= 1000 and num < 1000000 ) {
        if ( num>=1000 and num<2000 ) {
            word = word + " one thousand";
            len = len + 11;
        } else {
            q = num;
            q = q / 1000;
            a = (int) q;
            }
            word = word + hanet(a) + " thousand";
            len = len + 8;
            w = num - a * 1000;
            word = word + hanet(w);
        } else {
            word = word + hanet(num);
        }
    return word;
}



string NumberWord(int num){
    string word;
    int a,s;
    double q,w;
    q = 0;
    w = 0;
    if ( num<1000000000 and num>=1000000 ) {
        if ( num>=1000000 and num<2000000 ) {
            word = word + " one million";
            len = len + 10;
        } else {
            q = num;
            q = q / 1000000;
            a = (int) q;
            }
            word = word + hanet(a) + " million";
            len = len + 7;
            w = num - a * 1000000;
            word = word + thous(w);
        } else {
            word = word + thous(num);
        }
    return word;
}


int main(){
    int p,an,temp;
    string k;
    an = 0;
    temp = 0;
    p = 0;
    cout << "Number letter thing that all ways results to four. v0.1" << endl << endl;
    cout << "Enter an number - ";
    while (p<1){
        cin >> p;
        if (p<1){
            cout << endl << "Invalid number, enter a valid one. ";
            an = 1;
        }
    }
    if (an == 1) {
        cout << "Finally, now... " << endl;
    }
    cout << endl;
    while ( p != 4 ){
    cout << NumberWord(p) << " - ";
    cout << len << endl;
    if ( len != temp ) {
    temp = len;
    p = len;
    } else{
        cin >> k;
    }
    len = 0;
    }
    cout << "  four - 4" << endl;
    cout << endl << "  At 4 again.";

    cin >> k;

    return 0;
}

