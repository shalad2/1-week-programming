
#include <iostream>
#include <fstream>
#include <sstream>

#include <float.h>
#include <assert.h>
#include <string.h>

#include <string>
#include <vector>

#include <stdlib.h>     // standard C library function
#include<time.h>


#include<bitset>
using namespace std;

// prob6-1：main.c
// 同様に、二つの数の差を求める関数、sub()を追加し、最後に、その結果も表示するようにしなさい。
// #include <stdio.h>
//	関数のプロトタイプ宣言
int add(int,int);
int sub(int,int);

//prob6-9
void square(int a, int b);


//probex6-1
typedef struct{
	float x;
	float y;
}Vector2D;

//probex6-4
typedef struct{
	int id;			//	学生番号
	int kokugo;		//	国語の点数
	int sansu;		//	算数の点数
        int rika;               //      理科の点数
	int syakai;		//	社会の点数
	int eigo;		//	英語の点数
}student_data;
//	データのセット
void setData(student_data* data,int id,int kokugo, int sansu, int rika, int syakai,int eigo);
//	データの表示
void showDatamean(student_data* data,int num);


#include <stdio.h>


int main(){


// prob1-2.(難易度：★)
// 以下のプログラムを変更し、実行結果は同じでも、printf()がひとつしかないような形にプログラムを変更しなさい。
// prob1-2：main.c
// Answer 1-2
// 	printf("123\n456\n789\n");

//     return 0;

// }


// Answer 2-1
	// int a,b;
	// printf("a = ");
	// scanf("%d",&a);
	// printf("b = ");
	// scanf("%d",&b);
	// printf("a + b = %d \n",a+b);
    // printf("a - b = %d \n",a-b);
    // printf("a * b = %d \n",a*b);
    // printf("a / b = %d \n",a/b);
    // printf("a %% b = %d \n",a%b);


// prob3-1.(難易度：★)
// キーボードから整数値を入力させ、5以上ならば、”5以上です”と表示するプログラムを作りなさい。
// Answer 3-1. 
	// int a;
	// printf("a = ");
	// scanf("%d",&a);
    // if(a>= 5){
    //     printf("”5以上です”");
    // }
    //prob3-18.
    //乱数で、－10から35までの乱数を発生させ、”摂氏○○度”（○○が、発生した乱数）と表示させ、その値により、以下のように表示しなさい。
    // 30度以上の場合は、”真夏日です。”と表示。
    // 25度以上、30度未満の場合”夏日です。”と表示。
    // 0度未満の場合、”真冬日です。”と表示。

    // // Answer 3-18.
    // int nmax,T;
    // nmax=45;
    // srand(time(0)); 
    // // srand(1001);
    // T= rand() % nmax -10 ;
    // printf("摂氏%d度\n",T);
    // if(T>=30){
    // printf("真夏日です。\n");
    // }else if(T>=25){
    // printf("夏日です。\n");
    // }else if(T<0){
    // printf("真冬日です。\n");
    // }

    // //

// prob4-1.(難易度：★)

// １から10までの乱数を発生させ、その数を表示した後、forループを用いて、その数だけ■マークを表示するプログラムを作りなさい。
    // int i,n,num;
    // n=10;
    // srand(time(0)); 
    // num= rand() % n +1 ;

    // printf("数:%d \n",num);
    //     for(i=0; i<num;i++){
    //         printf("■");
    //     }

// prob4-2.(難易度：★)
// 上と同じ処理を、while文で作ったループで行いなさい。
    // int i,n,num;
    // n=10;
    // srand(time(0)); 
    // num= rand() % n +1 ;

    // printf("数:%d \n",num);
    // i=0;
    // while(1){
    //    printf("■");
    //    i++;
    //    if(i>num) break;
    // }

// prob4-17.(難易度：★★)
// forの二重ループを用いて、以下のような図形を表示させるプログラムを作りなさい。
// ヒント：ループに用いる変数iとjの大きさの関係に注目する。
    // int i,j;
    // for(i=0; i<10;i++){
    //     for(j=0;j<10;j++){
    //         if(i<j){
    //             printf("□ ");
    //         }else{
    //             printf("■ ");
    //         }

    //    }
    //     printf("\n");
    // }

// prob5-1.(難易度：★)
// 整数型の配列変数、aを、以下の条件で作り、その結果を、実行結果にならい、表示しなさい。
//     配列の大きさは、6
//     値は、1から10までの乱数を発生させて、代入。
    // int a[6];
    // int num,nmax,n,i ; 
    // nmax=10;
    // srand(time(0)); 
    // n=6;
    // for(int i=0;i<n;i++){
    // num= rand() % nmax +1 ;
    // a[i]= num;
    // printf("a[%d]=%d ",i,a[i]);
    // }
    // printf("\n");


// prob5-12.(難易度：★)
// 3×3の二次元配列を作成し、それぞれに0から9の乱数を発生させ、実行例にならいその内容を表示させなさい。
// ヒント：forの二重ループを使う
    // int num,nmax,n,i,j ; 
    // int a[3][3];
    // nmax=10;
    // srand(time(0)); 

    // for(i=0;i<3;i++){
    //     for(j=0;j<3;j++){
    //         num= rand() % nmax  ;
    //         a[i][j]=num;
    //         printf("%d ",a[i][j]);
    //     }
    //     printf("\n");
    // }


// prob6-1.(難易度★)
// 以下のプログラムは、キーボードから２つの整数の値を入力し、その和を求めるものである。このとき、このプログラムを以下のように改造しなさい。
// prob6-1：main.c
// 同様に、二つの数の差を求める関数、sub()を追加し、最後に、その結果も表示するようにしなさい。
// #include <stdio.h>

	// int a,b;
	// int result;
	// printf("a=");
	// scanf("%d",&a);		//	1つ目の数、aを入力
	// printf("b=");
	// scanf("%d",&b);		//	2つ目の数、bを入力
	// result = add(a,b);	//	3つ目の数、cを入力
	// printf("%d + %d = %d\n",a,b,result);	//	計算結果を出力
	// result = sub(a,b);	
	// printf("%d - %d = %d\n",a,b,result);	//	計算結果を出力



// prob6-9.(難易度★★)
// 実行例にならい、キーボードから2つの整数を入力させ、関数を用いてそれぞれの数をたて、よこの■の数として、四角形を表示させるプログラムを作りなさい。
	// int a,b;
	// printf("たて : ");
	// scanf("%d",&a);		//	1つ目の数、aを入力
	// printf("よこ : ");
	// scanf("%d",&b);		//	2つ目の数、bを入力
    // square(a,b);

    //  return 0;



// prob8-1.(難易度★★)（ピタゴラス数）
// a,b,cを、いずれも1以上100以下の整数とするとき、a*a+b*b=c*cを満たす、全てのa,b,cの組み合わせ全てと、その数を求め、画面に表示しなさい。ただし、a,bの数値の組み合わせが同じものも別のものとしてもかまわない。具体的には、a=3,b=4,c=5と、a=4,b=3,c=5は別の組み合わせとする。
    // int a,b,c;
    // int sum;
    
    // for(a=1;a<101;a++){
    //     for(b=1;b<101;b++){
    //         for(c=1;c<101;c++){
    //             sum=a*a+b*b;
    //             if( c==sum){
    //                 printf("a,b,c= %d, %d, %d \n",a,b,c);
    //             }
    //         }
    //     }
    // }


// prob8-16.(難易度★★★)（並べ替え）
// 長さ10の整数の配列を作成し、各々の中に1から100までの乱数を代入し、その数を大きい順番に並べ替えて表示しなさい。なお、並べ替えの方法としては、以下の方法を用いなさい。
// ① 配列の中から、最大の数を探し出す。
// ② ①で見つけた数と、配列の最初の数を入れ替える。
// ③ 次に、配列の２番目から最後の中でもっとも大きな数を見つけ出す。
// ④ ③で見つけた数と、配列の２番目の数を入れ替える。
// ⑤ これを最後10番目まで繰り返す。 
    // int a[10];
    // int num,nmax,n,i,ind,max ; 
    // nmax=100;
    // srand(time(0)); 
    // for(i=0;i<10;i++){
    //     num= rand() % nmax +1 ;
    //     a[i]=num;
    // }

    // // swap sort
    // int tmp;
    //     max=-1;
    //     for(i=0;i<10;i++){
    //         max=a[i];
    //         for(int j=i+1;j<10;j++)
    //             if(a[j]>max){
    //                 max=a[j];
    //                 ind=j;
    //             }
    //         //  exchnage
    //         tmp=a[i];
    //         a[i]=max;
    //         a[ind]=tmp;
    //     }
    // printf("numbers ");
    // for(i=0;i<10;i++){
    //     printf(" %d",a[i]);
    // }
    // printf("\n");


    // int unordered[10],ordered[10];
    // //ordering naive sort slow
    // for(int j=0;j<10;j++){
    //     max=-1;
    //     for(i=0;i<10;i++){
    //         if(unordered[i]>max){
    //             max=unordered[i];
    //             ind=i;
    //         }
    //     }
    //     ordered[j]=max;
    //     unordered[ind]=-1;
    // }
    // //   for(i=0;i<10;i++){ unordered[i]=ordered[i];}
    //check
    // printf("numbers ");
    // for(i=0;i<10;i++){
    //     printf(" %d",ordered[i]);
    // }
    // printf("\n");

    // probex1-1.(難易度：★)
// 1から10までの乱数を5回発生させ、表示するプログラムを作りなさい
    // int num,nmax,n,i,ind,max ; 
    // nmax=10;
    // srand(time(0)); 
    // for(i=0;i<5;i++){
    //     num= rand() % nmax +1 ;
    //     printf("%d ",num);
    // }


// probex3-1(難易度：★★)
// 以下の例にならい、キーボードから入力したアルファベットを、すべて小文字にして表示するプログラムを作りなさい。なお、アルファベットを小文字にするには、文字コードと0x20の論理和をとるとよい。
// 期待される実行結果
// Input words:HelloWorld  ←キーボードから入力
// helloworld
//	16進数
	// unsigned char tolower = 0x20;	//	

    // std::string input;
    // std::cin >>input;
    // cout<<endl;
    // // input="Hello World";
    // int N;
    // N=input.length();

    //      // to lower
    //      int mask;
    //      for ( int k =0 ; k<N;k++){
    //          // 6 bit
    //          mask = 1<<5; //0x20== 0000000000100000
    //          std::bitset<16> and_bits;
    //          and_bits = bitset<16>(input[k])|bitset<16>(mask)  ; // 論理積         
    //          unsigned long itmp ;
    //          itmp= and_bits.to_ulong(); 
    //          unsigned char c = static_cast<unsigned char>( itmp ); //
    //          cout<<c;
    //          input[k]=c;
    //      }
    //      cout<<endl;
    //      // to upper
    //      for ( int k =0 ; k<N;k++){
    //          mask =0xdf;
    //          // cout<<bitset<16>(mask)<<endl;
    //          std::bitset<16> and_bits;
    //          // cout << bitset<16>(input[k])<<endl;
    //          and_bits = bitset<16>(input[k]) & bitset<16>(mask)  ; // 論理積         
    //          // cout << and_bits<<endl;
    //          unsigned long itmp ;
    //          itmp= and_bits.to_ulong(); 
    //          unsigned char c = static_cast<unsigned char>( itmp ); //
    //          cout<<c;
    //          input[k]=c;
    //      }
    //      cout<<endl;

    //      // 


    //probex4-1.(難易度：★★)
    // このプログラムの一部を改造し、実行結果2のようになるようにプログラムを変えなさい。ただし、変えてよい部分は、ポインタ変数pへの操作の部分のみとする。
    // 実行結果2
    // 5 4 3 2 1 


    // //    //  サイズSIZEの配列を用意する。
    // int nums[] = { 1,2,3,4,5 };
    // int *p = NULL;
    // int i;
    // p = nums; //  pにnumsのアドレスを入力
    // p=p+4;
    // for( i = 0 ; i < 5; i++){
    //     printf("%d ",*p);
    //     p=p-1;   //  p2のアドレスをインクリメント
    // }
	// printf("\n");

    //probex5-2(難易度：★)
    //probex5-1と同じ結果を得られるプログラムを、strcpy()やstrcat関数といった、文字列操作関数を用いずに作りなさい。
 //    string inp1,inp2;

 //    cout <<"文字列1：";
 //           cin >> inp1;
 // cout <<"文字列2：";
 //        cin >> inp2;
 //    string out;
 //    out=inp1+inp2;
 //    cout <<"結合した結果：\n";
 //    cout <<out<<endl;


// probex5-4(難易度：★★)
// probex5-3と同じ結果を得られるプログラムを、strlen関数を用いないで作りなさい
//  文字列を入力：ABCDEF ←キーボードから入力
// 文字列の長さ：6文字
    // string inp1;
    // cout <<"文字列を入力：";
    // cin>>inp1;
    // cout<<"文字列の長さ："<<inp1.length()<<"文字";


// probex5-6.(難易度：★★)
// キーボードから2つの字列を入力し、2つが同じものならば、「同じものです」と表示し、違うのならば、「違うものです」と表示するプログラムを作りなさい。同じ結果が得られるものを、strcmp()関数を用いずに作りなさい
// 期待される実行結果①（二つの文字列が同じ場合）
// 文字列１：ABC ← キーボードから入力
// 文字列２：ABC ← キーボードから入力
// 同じものです
// 期待される実行結果②（二つの文字列が異なる場合）
// 文字列１：ABC ← キーボードから入力
// 文字列２：DEF ← キーボードから入力
// 異なるものです
    // string inp1,inp2;
    // cout <<"文字列1：";
    // cin >> inp1;
    // cout <<"文字列2：";
    // cin >> inp2;

    // if(inp1==inp2){
    //     cout<<"同じものです"<<endl;
    // }else{
    //     cout<<"異なるものです"<<endl;
    // }


// probex6-1.(難易度：★)
// このプログラムの一部を改造し、実行結果2のようになるようにプログラムを変えなさい。
// 実行結果2
// v1.x=1.0 ← キーボードから入力
// v1.y=1.0 ← キーボードから入力
// v2.x=2.0
// v2.y=3.0
// (1.000000,1.000000)+(2.000000,3.000000)=(3.000000,4.000000)
// (1.000000,1.000000)-(2.000000,3.000000)=(-1.000000,-2.000000)
    

	// Vector2D v1,v2;
	// printf("v1.x=");
	// scanf("%f",&(v1.x));
	// printf("v1.y=");
	// scanf("%f",&(v1.y));
    // v2.x=v1.x+v1.y;
    // v2.y=v2.x+1.0;
	// printf("v2.x=%2.1f\n",v2.x);
	// printf("v2.y=%2.1f\n",v2.y);
	// // scanf("%f",&(v2.y));
	// printf("(%f,%f) + (%f,%f)=(%f,%f)\n",v1.x,v1.y,v2.x,v2.y,(v1.x + v2.x),(v1.y + v2.y));
	// printf("(%f,%f) - (%f,%f)=(%f,%f)\n",v1.x,v1.y,v2.x,v2.y,(v1.x - v2.x),(v1.y - v2.y));


// probex6-4(難易度：★★)
// 以下の表は、あるクラスのテストの成績を示す票である。この生徒情報を構造体として作成し、それぞれの科目の平均点を構造体のポインタを用いて求めなさい。
// 学生番号	国語	算数	理科	社会	英語
// 1001	82	43	53	84	45
// 1002	92	83	88	79	99
// 1003	43	32	53	45	66
// 1004	72	73	71	68	59
// 1005	99	72	82	91	94
    // student_data dat[5];
    // // cout<<dat[3]<<endl;
    // int    num=5;
    // int   ids[]={ 1001,1002,1003,1004,1005};
    // int ks[]={ 92,92,34,72,99};
    // int ss[]={ 43,83,32,73,72};
    // int rs[]={53,88,53,71,82};
    // int syas[]={84,79,45,68,91};
    // int es[]={45,99,66,59,94};
    
    // for(int i =0;i<num;i++){
    //     setData(&dat[i],ids[i],ks[i],ss[i],rs[i],syas[i],es[i] );
    // }

    // showDatamean(dat,num);
    // // setData(&dat[0],1001,82,43,53,84,45 );
    // // setData(&dat[1],1001,82,43,53,84,45 );    
    // // setData(&dat[0],1001,82,43,53,84,45 );
    // // setData(&dat[0],1001,82,43,53,84,45 );
    // // setData(&dat[0],1001,82,43,53,84,45 );


    //

// probex7-1.(難易度：★)

// HelloWorld.txtというファイルに、"HelloWorld."と書き出すプログラムを作成しなさい。
    // ofstream outputfile("HelloWorld.txt");
    // outputfile<<"HelloWorld.";
    // outputfile.close();

// probex7-2.(難易度：★)
// 以下のデータは、sample.txtというファイルに書かれているデータの内容である。このデータを読み出し、コンソール画面に出力するプログラムを作成しなさい。
// sample.txtの内容
// This is C language.

//   std::string filename = "sample.txt";
//   std::ifstream reading_file;
//   reading_file.open(filename.c_str(), std::ios::in);
//   std::string reading_line_buffer;
//   std::cout << "reading " << filename << "..." << std::endl;

// while (!reading_file.eof())
//   {
//     // read by line
//     std::getline(reading_file, reading_line_buffer);
//     std::cout << reading_line_buffer << std::endl;
//   }


// probex7-6.(難易度：★★)
// 以下の、words.txtには、,(コンマ)で区切られた英単語が入っている。この単語のなかから、"a"で始まる文字列のみを表示し、その数も出力しなさい。
  std::string filename = "words.txt";
  std::ifstream reading_file;
  reading_file.open(filename.c_str(), std::ios::in);
  std::string reading_line_buffer;
  // std::cout << "reading " << filename << "..." << std::endl;
  cout<<"aから始まる単語"<<endl;
    int count=0;
while (!reading_file.eof())
  {
    // read by line
      std::getline(reading_file, reading_line_buffer);
    // std::cout << reading_line_buffer << std::endl;

    // read by delimiter on reading "one" line
    const char delimiter = ',';
    std::string separated_string_buffer;
    std::istringstream line_separater(reading_line_buffer);



    while(     std::getline(line_separater, separated_string_buffer, delimiter)){
        if(separated_string_buffer.compare(0,1,"a")==0){
            std::cout << separated_string_buffer << std::endl;
            count++;
        }
    }
  }
 cout<<"----------"<<endl;
 cout<<"個数："<<count<<endl;

}


// prob6-1.(難易度★)
//	二つの整数の和を求める関数
int add(int n1,int n2){
	return n1 + n2;
}
int sub(int n1,int n2){
	return n1 - n2;
}

// prob6-9.(難易度★★)
void square(int a, int b){
    int i,j;
    if(a<=0 || b<=0) {
        // std::exit(1);
        exit (1);
    }

    for(i=0; i<a;i++){
        for(j=0; j<b;j++){
            printf("■ ");
        }
            printf("\n");
    }
}


//probex6-4
    // setData(dat[0],1001,82,43,53,84,45 );
void setData(student_data* data,int id,int kokugo, int sansu, int rika, int syakai,int eigo){
	data->id = id;
	data->kokugo = kokugo;
	data->sansu = sansu;
	data->rika = rika;
	data->syakai = syakai;
	data->eigo = eigo;
}


//	データの表示
    void showDatamean(student_data* data,int num){
    int i; 
    float mean;

    mean=0;
    for(i=0;i<num;i++){
        mean=mean+data[i].kokugo;
    }
    mean=mean/num;
    cout<< mean<<endl;

    mean=0;
    for(i=0;i<num;i++){
        mean=mean+data[i].sansu;
    }
    mean=mean/num;
    cout<< mean<<endl;

    mean=0;
    for(i=0;i<num;i++){
        mean=mean+data[i].rika;
    }
    mean=mean/num;
    cout<< mean<<endl;

    mean=0;
    for(i=0;i<num;i++){
        mean=mean+data[i].syakai;
    }
    mean=mean/num;
    cout<< mean<<endl;

    mean=0;
    for(i=0;i<num;i++){
        mean=mean+data[i].eigo;
    }
    mean=mean/num;
    cout<< mean<<endl;
}
