//QUINE RELAY GENERATOR
//This is not a C++ quine but the output is the C++ part of a C-C++ quine relay
#include <iostream>
using namespace std;
#define N3 639
#define N4 625

int a1[]={'i','n','t',' ','a','[',']','=','{'};
int a2[]={'}',';'};
int a3[]={10,
'#','i','n','c','l','u','d','e',' ','<','i','o','s','t','r','e','a','m','>','\n',
'u','s','i','n','g',' ','n','a','m','e','s','p','a','c','e',' ','s','t','d',';',
'i','n','t',' ','m','a','i','n','(',')','{',
'f','o','r','(','i','n','t',' ','i','=','0',';','i','<','9',';','i','+','+',')','{',
'c','o','u','t','<','<','(','c','h','a','r',')','a','1','[','i',']',';',
'i','f','(','i','=','=','4',')','c','o','u','t','<','<','1',';',
'}',
'f','o','r','(','i','n','t',' ','i','=','0',';','i','<','9',';','i','+','+',')','{',
'c','o','u','t','<','<','a','1','[','i',']','<','<','\'',',','\'',';',
'}',
'f','o','r','(','i','n','t',' ','i','=','0',';','i','<','2',';','i','+','+',')','{',
'c','o','u','t','<','<','(','c','h','a','r',')','a','2','[','i',']',';',
'}',
'f','o','r','(','i','n','t',' ','i','=','0',';','i','<','9',';','i','+','+',')','{',
'c','o','u','t','<','<','(','c','h','a','r',')','a','1','[','i',']',';',
'i','f','(','i','=','=','4',')','c','o','u','t','<','<','2',';',
'}',
'f','o','r','(','i','n','t',' ','i','=','0',';','i','<','2',';','i','+','+',')','{',
'c','o','u','t','<','<','a','2','[','i',']','<','<','\'',',','\'',';',
'}',
'f','o','r','(','i','n','t',' ','i','=','0',';','i','<','2',';','i','+','+',')','{',
'c','o','u','t','<','<','(','c','h','a','r',')','a','2','[','i',']',';',
'}',
'f','o','r','(','i','n','t',' ','i','=','0',';','i','<','9',';','i','+','+',')','{',
'c','o','u','t','<','<','(','c','h','a','r',')','a','1','[','i',']',';',
'i','f','(','i','=','=','4',')','c','o','u','t','<','<','3',';',
'}',
'f','o','r','(','i','n','t',' ','i','=','0',';','i','<','6','3','9',';','i','+','+',')','{',
'c','o','u','t','<','<','a','3','[','i',']','<','<','\'',',','\'',';',
'}',
'f','o','r','(','i','n','t',' ','i','=','0',';','i','<','2',';','i','+','+',')','{',
'c','o','u','t','<','<','(','c','h','a','r',')','a','2','[','i',']',';',
'}',
'f','o','r','(','i','n','t',' ','i','=','0',';','i','<','9',';','i','+','+',')','{',
'c','o','u','t','<','<','(','c','h','a','r',')','a','1','[','i',']',';',
'i','f','(','i','=','=','4',')','c','o','u','t','<','<','4',';',
'}',
'f','o','r','(','i','n','t',' ','i','=','0',';','i','<','6','2','5',';','i','+','+',')','{',
'c','o','u','t','<','<','a','4','[','i',']','<','<','\'',',','\'',';',
'}',
'f','o','r','(','i','n','t',' ','i','=','0',';','i','<','2',';','i','+','+',')','{',
'c','o','u','t','<','<','(','c','h','a','r',')','a','2','[','i',']',';',
'}',
'f','o','r','(','i','n','t',' ','i','=','0',';','i','<','6','2','5',';','i','+','+',')','{',
'c','o','u','t','<','<','(','c','h','a','r',')','a','4','[','i',']',';',
'}',
'}',34567
};
int a4[]={10,
'#','i','n','c','l','u','d','e',' ','<','s','t','d','i','o','.','h','>','\n',
'm','a','i','n','(',')','{','i','n','t',' ','i',';',
'f','o','r','(','i','=','0',';','i','<','9',';','i','+','+',')','{',
'p','r','i','n','t','f','(','\"','%','c','\"',',','a','1','[','i',']',')',';',
'i','f','(','i','=','=','4',')','p','r','i','n','t','f','(','\"','%','c','\"',',','\'','1','\'',')',';',
'}',
'f','o','r','(','i','=','0',';','i','<','9',';','i','+','+',')','{',
'p','r','i','n','t','f','(','\"','%','d',',','\"',',','a','1','[','i',']',')',';',
'}',
'f','o','r','(','i','=','0',';','i','<','2',';','i','+','+',')','{',
'p','r','i','n','t','f','(','\"','%','c','\"',',','a','2','[','i',']',')',';',
'}',
'f','o','r','(','i','=','0',';','i','<','9',';','i','+','+',')','{',
'p','r','i','n','t','f','(','\"','%','c','\"',',','a','1','[','i',']',')',';',
'i','f','(','i','=','=','4',')','p','r','i','n','t','f','(','\"','%','c','\"',',','\'','2','\'',')',';',
'}',
'f','o','r','(','i','=','0',';','i','<','2',';','i','+','+',')','{',
'p','r','i','n','t','f','(','\"','%','d',',','\"',',','a','2','[','i',']',')',';',
'}',
'f','o','r','(','i','=','0',';','i','<','2',';','i','+','+',')','{',
'p','r','i','n','t','f','(','\"','%','c','\"',',','a','2','[','i',']',')',';',
'}',
'f','o','r','(','i','=','0',';','i','<','9',';','i','+','+',')','{',
'p','r','i','n','t','f','(','\"','%','c','\"',',','a','1','[','i',']',')',';',
'i','f','(','i','=','=','4',')','p','r','i','n','t','f','(','\"','%','c','\"',',','\'','3','\'',')',';',
'}',
'f','o','r','(','i','=','0',';','i','<','6','3','9',';','i','+','+',')','{',
'p','r','i','n','t','f','(','\"','%','d',',','\"',',','a','3','[','i',']',')',';',
'}',
'f','o','r','(','i','=','0',';','i','<','2',';','i','+','+',')','{',
'p','r','i','n','t','f','(','\"','%','c','\"',',','a','2','[','i',']',')',';',
'}',
'f','o','r','(','i','=','0',';','i','<','9',';','i','+','+',')','{',
'p','r','i','n','t','f','(','\"','%','c','\"',',','a','1','[','i',']',')',';',
'i','f','(','i','=','=','4',')','p','r','i','n','t','f','(','\"','%','c','\"',',','\'','4','\'',')',';',
'}',
'f','o','r','(','i','=','0',';','i','<','6','2','5',';','i','+','+',')','{',
'p','r','i','n','t','f','(','\"','%','d',',','\"',',','a','4','[','i',']',')',';',
'}',
'f','o','r','(','i','=','0',';','i','<','2',';','i','+','+',')','{',
'p','r','i','n','t','f','(','\"','%','c','\"',',','a','2','[','i',']',')',';',
'}',

'f','o','r','(','i','=','0',';','i','<','6','3','9',';','i','+','+',')','{',
'p','r','i','n','t','f','(','\"','%','c','\"',',','a','3','[','i',']',')',';',
'}',
'}',34567
};
int main(){
	for(int i=0;i<9;i++){
		cout<<(char)a1[i];
		if(i==4)cout<<1;
	}
	for(int i=0;i<9;i++){
		cout<<a1[i]<<',';
	}
	for(int i=0;i<2;i++){
		cout<<(char)a2[i];
	}
	for(int i=0;i<9;i++){
		cout<<(char)a1[i];
		if(i==4)cout<<2;
	}
	for(int i=0;i<2;i++){
		cout<<a2[i]<<',';
	}
	for(int i=0;i<2;i++){
		cout<<(char)a2[i];
	}
	for(int i=0;i<9;i++){
		cout<<(char)a1[i];
		if(i==4)cout<<3;
	}
	for(int i=0;i<N3;i++){
		cout<<a3[i]<<',';
	}
	for(int i=0;i<2;i++){
		cout<<(char)a2[i];
	}
	for(int i=0;i<9;i++){
		cout<<(char)a1[i];
		if(i==4)cout<<4;
	}
	for(int i=0;i<N4;i++){
		cout<<a4[i]<<',';
	}
	for(int i=0;i<2;i++){
		cout<<(char)a2[i];
	}
	for(int i=0;i<N3;i++){
		cout<<(char)a3[i];
	}
}
