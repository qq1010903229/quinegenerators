int a1[]={105,110,116,32,97,91,93,61,123,};int a2[]={125,59,};int a3[]={10,35,105,110,99,108,117,100,101,32,60,105,111,115,116,114,101,97,109,62,10,117,115,105,110,103,32,110,97,109,101,115,112,97,99,101,32,115,116,100,59,105,110,116,32,109,97,105,110,40,41,123,102,111,114,40,105,110,116,32,105,61,48,59,105,60,57,59,105,43,43,41,123,99,111,117,116,60,60,40,99,104,97,114,41,97,49,91,105,93,59,105,102,40,105,61,61,52,41,99,111,117,116,60,60,49,59,125,102,111,114,40,105,110,116,32,105,61,48,59,105,60,57,59,105,43,43,41,123,99,111,117,116,60,60,97,49,91,105,93,60,60,39,44,39,59,125,102,111,114,40,105,110,116,32,105,61,48,59,105,60,50,59,105,43,43,41,123,99,111,117,116,60,60,40,99,104,97,114,41,97,50,91,105,93,59,125,102,111,114,40,105,110,116,32,105,61,48,59,105,60,57,59,105,43,43,41,123,99,111,117,116,60,60,40,99,104,97,114,41,97,49,91,105,93,59,105,102,40,105,61,61,52,41,99,111,117,116,60,60,50,59,125,102,111,114,40,105,110,116,32,105,61,48,59,105,60,50,59,105,43,43,41,123,99,111,117,116,60,60,97,50,91,105,93,60,60,39,44,39,59,125,102,111,114,40,105,110,116,32,105,61,48,59,105,60,50,59,105,43,43,41,123,99,111,117,116,60,60,40,99,104,97,114,41,97,50,91,105,93,59,125,102,111,114,40,105,110,116,32,105,61,48,59,105,60,57,59,105,43,43,41,123,99,111,117,116,60,60,40,99,104,97,114,41,97,49,91,105,93,59,105,102,40,105,61,61,52,41,99,111,117,116,60,60,51,59,125,102,111,114,40,105,110,116,32,105,61,48,59,105,60,53,48,50,59,105,43,43,41,123,99,111,117,116,60,60,97,51,91,105,93,60,60,39,44,39,59,125,102,111,114,40,105,110,116,32,105,61,48,59,105,60,50,59,105,43,43,41,123,99,111,117,116,60,60,40,99,104,97,114,41,97,50,91,105,93,59,125,102,111,114,40,105,110,116,32,105,61,48,59,105,60,53,48,50,59,105,43,43,41,123,99,111,117,116,60,60,40,99,104,97,114,41,97,51,91,105,93,59,125,125,};
#include <iostream>
using namespace std;int main(){for(int i=0;i<9;i++){cout<<(char)a1[i];if(i==4)cout<<1;}for(int i=0;i<9;i++){cout<<a1[i]<<',';}for(int i=0;i<2;i++){cout<<(char)a2[i];}for(int i=0;i<9;i++){cout<<(char)a1[i];if(i==4)cout<<2;}for(int i=0;i<2;i++){cout<<a2[i]<<',';}for(int i=0;i<2;i++){cout<<(char)a2[i];}for(int i=0;i<9;i++){cout<<(char)a1[i];if(i==4)cout<<3;}for(int i=0;i<502;i++){cout<<a3[i]<<',';}for(int i=0;i<2;i++){cout<<(char)a2[i];}for(int i=0;i<502;i++){cout<<(char)a3[i];}}