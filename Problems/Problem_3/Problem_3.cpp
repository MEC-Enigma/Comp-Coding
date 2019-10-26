#include<iostream>

using namespace std;

bool isPrime(long long int N){
    //2 is the only even prime
    if(N==2){
        return true;
    }
    //all other even numbers are non-prime
    else if(N % 2 == 0){
        return false;
    }
    //we only need to check if any odd number less
    //than the square root of N divides N
    for(long long int i=3; i*i <= N; i+=2){
        if(N % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    long long int N,i;
    cin>>N;
    for(i=2; N>0; i++) {
        if(isPrime(i)) {
            N--;
        }
    }
    cout<<i-1;
    return 0;
}