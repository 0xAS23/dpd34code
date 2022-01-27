/* USER: 34pdpgavriil
LANG: C++
TASK: voting */
#include <iostream>
#include <fstream>
#include <iomanip>
#include <map>
#include <iterator>
int main(){
    freopen ("voting.in","r",stdin);
    freopen ("voting.out","w",stdout);
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int m ;
    int n ;
    int k ;
    std::cin >> n ;
    std::cin >> m ;
    std::cin >> k ;
    if( m == 2 ){
        std::map<int, int> list ;
    int a ;
    for(int i = 0 ; i < k ; i++){
        std::cin >> a ;
        list[a-1]++ ;
    }
    int max = 0 ;
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
    std::cout << count ;
    }else if( n == k ){
        std::map<int,int> list ;
        int a ;
    for(int i = 0 ; i < k ; i++){
        std::cin >> a ;
        list[a-1]++ ;
    }
    int max = 0 ;
    int pos = 0 ;
    for(int i = 0 ; i < m ; i++){
    if( list[i] > max ){
        max = list[i] ;
        pos = i ;
        }
    }
    int flag = 1 ;
    for(int i = 0 ; i < m ; i++){
        if( i == pos){
            continue ;
        }else{

            if( list[i] == max ){
                flag = 0 ;
            }
        }
    }
    std::cout << flag ;

    }else{
        std::map<int, int> list ;
    int a ;
    for(int i = 0 ; i < k ; i++){
        std::cin >> a ;
        list[a-1]++ ;
    }
    int max = 0 ;
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
    std::cout << count ;
    }

}
