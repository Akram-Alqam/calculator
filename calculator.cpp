#include <bits/stdc++.h>
#include <chrono>
#include <thread>
using namespace std;
struct stfindclaculutar{
    
    // getfindcalculutar
    char z;
    double x,y;
};
void getfindclaculutar(stfindclaculutar l){
    
    if (l.z == '+'){
        
        cout <<l.x+l.y<<endl;
    } else if (l.z == '-'){
        
        cout <<l.x-l.y<<endl;
    } else if (l.z == '*'){
        
        cout <<l.x*l.y<<endl;
    } else if (l.z =='/'){
        if (l.y != 0){
         
         cout <<l.x / l.y<<endl;   
        } else {
          
         cout <<"Division by zero is not allowed"<<endl;
        } 
    } else if (l.z == '^'){
        
        cout <<pow(l.x,l.y)<<endl;
    } else {
        
        cout <<"Out This Function "<<endl;
    }
}

struct stfindAbslioutNumber{
    
    // getfindAbslioutNumber
    float G;
};

void getfindAbslioutNumber(stfindAbslioutNumber A){
    
    do {
     
     if (A.G < 0){
        
        cout <<"Enter Absoliaout value G"<<' '<<'='<<' '<<-(A.G)<<"\n"; 
    } else {
        
        cout <<"Enter Absoliaout value G"<<' '<<'='<<' '<<(A.G)<<"\n";
    }} while(false);
}

struct stfindFactorialNumber{
    
    // getfindFactorialNumber
    int Number;
    long long results;
};
long long getfindFactorialNumber(int n){
    
    if (n == 1 || n == 0){
        
        return 1;
    } else {
        
        return n * getfindFactorialNumber(n-1);
    }
}

// algorithm section
struct stFindalgorithmNumber{
    
    double Valueof,LogPower,Number;
    int w;
};
void getFindalgorithmNumber(stFindalgorithmNumber p){
    
    
    if (log10(p.Number) != 0){
        p.Valueof = log10(p.Number);
        cout <<p.Valueof<<endl;
    } else if (pow(log10(p.Number),p.w) > 0){
        p.LogPower = log10(p.Number) * p.w;
    } else {
        
        cout <<"Out The Function"<<endl;
    }
}

struct stfindtrigonometricangle{
    
    // getfindtrigonometricangle
    double angle,radians;
    float pi = 3.14;
};
void getfindtrigonometricangle(stfindtrigonometricangle T){
    
    T.radians = (T.angle * T.pi )/ 180.0;
    
    if (T.angle >= 0){
        
        cout <<"sin("<<T.angle<<")="<<sin(T.radians)<<"\n";
        cout <<"cos("<<T.angle<<")="<<cos(T.radians)<<"\n";
        cout <<"tan("<<T.angle<<")="<<tan(T.radians)<<"\n";
    } else {
     
      cout <<"not difind trigonometric The angle"<<"\n";  
    }
}

struct stfindmaximumNumber{
    
    // getfindmaximNmumber
    int Number1,Number2,Number3;
};
void getfindmaximumNumber(stfindmaximumNumber g){
    
    if (g.Number1 > g.Number2 && g.Number1 > g.Number3){
        
        cout <<"The Number one is maxumim"<<" "<<"="<<" "<<g.Number1<<endl;
    } else if (g.Number2 > g.Number1 && g.Number2 > g.Number3){
        
        cout <<"The Number Two is maximum"<<" "<<"="<<" "<<g.Number2<<endl;
    } else if(g.Number3 > g.Number1 && g.Number3 > g.Number2){
    
        cout <<"The Number Three is maximum"<<" "<<"="<<" "<<g.Number3<<endl;
    } else {
        
        cout <<"Out This Function in Maximum"<<endl;
    }
}
struct stfindminimumNumber{
    
    int Number1,Number2,Number3;
};
void getfindminimumNumber(stfindminimumNumber e){
    
    if (e.Number1 < e.Number2 && e.Number1 < e.Number3){
        
        cout <<"The Number one is minimum"<<" "<<"="<<" "<<e.Number1<<endl;
    } else if (e.Number2 < e.Number1 && e.Number2 < e.Number3){
        
        cout <<"The Number one is minimum"<<" "<<"="<<" "<<e.Number2<<endl;
    } else if (e.Number3 < e.Number1 && e.Number3 < e.Number2){
    
        cout <<"The Number one is minimum"<<" "<<"="<<" "<<e.Number3<<endl;
    } else {

        cout <<"out The Function in Minimum"<<endl;
    }
}

 // Print section
int main(){
    
    // find calculations 
    stfindclaculutar l;
    cout <<"In This Section find operator (+,-,*,/,^) of The Number"<<endl;
    cout <<"Enter The operator :"<<endl;
    cin >>l.z;
    
    cout <<"Enter The Number one :"<<endl;
    cin >>l.x;
    
    cout <<"Enter The Number Two :"<<endl;
    cin >>l.y;
    
    cout <<"output this Function : ";
    // call The Function1
    getfindclaculutar(l);

    stfindAbslioutNumber A;
    
    cout <<"Enter Absoliaout value of Number G"<<endl;
    cin >>A.G;
    
    // call the Function2
    getfindAbslioutNumber(A);

     stfindFactorialNumber h;
    cout <<"Enter The Number to Find Factorial"<<" "<<":"<<" "<<endl;
    cin >>h.Number;
        
    if (h.Number < 0){
        
        cout <<"In This Factorial not found because Number is negtive"<<endl;
    } else {
        
        h.results = getfindFactorialNumber(h.Number);
        cout <<"Factorial This Number is:"<<" "<<h.Number<<"!"<<" "<<"="<<" "<<h.results<<endl;
    }
     // the Function3
     
    stFindalgorithmNumber p;
    
    cout <<"Enter The algorithm basis Number 10 :"<<endl;
    cin >>p.Number;
    cout <<"algorithm is Number"<<" "<<p.Number<<" "<<"="<<" "<<log10(p.Number)<<endl;;
     
    cout <<"Enter The Number x is a power algorithm :"<<endl;
    cin >>p.w;
    
    cout <<"Enter The Number in algorithm :"<<endl;
    cin >>p.Number;
    cout <<"algorithm is This Function "<<" "<<"is"
    <<" "<<"="<<" "<<log10(p.Number) * p.w<<endl;
    
    // call The Function4
    getFindalgorithmNumber(p);

    stfindtrigonometricangle(T);
       
       cout <<"Enter The angle :"<<"\n";
       cin >>T.angle;
    
    // call the Function5
    getfindtrigonometricangle(T);

    
    stfindmaximumNumber g;
    cout <<"In This Section find maximum Number"<<endl;
    cout <<"Enter Number one by Function maximum"<<" "<<"="<<" "<<endl;
    cin >>g.Number1;
     
    cout <<"Enter Number Two by Function maximum"<<" "<<"="<<" "<<endl;
    cin >>g.Number2;
    
    cout <<"Enter Number Three by Function maximum"<<" "<<"="<<" "<<endl;
    cin >>g.Number3;
    
    // call the Function6
    getfindmaximumNumber(g);
    
    stfindminimumNumber e;
    cout <<"In This Section find minimum Number"<<endl;
    cout <<"Enter Number one by Function minimum"<<" "<<"="<<" "<<endl;
    cin >>e.Number1;
    
    cout <<"Enter Number Two by Function minimum"<<" "<<"="<<" "<<endl;
    cin >>e.Number2;
    
    cout <<"Enter Number Three by Function minimum"<<" "<<"="<<" "<<endl;
    cin >>e.Number3;
    // call the  Function7
    getfindminimumNumber(e);
    
  this_thread::sleep_for(chrono::seconds(3)); // left compiler after This opretor 
    
    return 0;
}