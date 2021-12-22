/* USER: 34pdpgavriil
LANG: C++
TASK: voting */
#include <iostream>
#include <fstream>
#include <iomanip>
#include <map>
#include <iterator>

using namespace std;

int main(){
    ofstream fout;
    ifstream fin ;
    fin.open("voting.in") ;
    fout.open("voting.out") ;
  int m ;
  int n ;
  int k ;

  fin >> n ;
  fin >> m ;
  fin >> k ;
  map<int, int> list ;
  for(int i = 0 ; i < m ; i++){
    list[i] = 0 ;

  }
  int a ;
  for(int i = 0 ; i < k ; i++){
        fin >> a ;
        list[a-1]++ ;
  }
  signed int max = -1 ;
  int diff = n - k ;
  for(int i = 0 ; i < m ; i++){
    if( list[i] > max ){
        max = list[i] ;
    }
  }
    int count = 0 ;
    for(int i = 0 ; i < m ; i++){
        if( list[i] + diff > max){
            count++ ;
        }
    }
    fout << count ;
    fout.close() ;
    return 0 ;
}
