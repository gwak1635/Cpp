#define LENGTH 50
#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    int howmany;
    cin >> howmany;
    char arr1[howmany][LENGTH];
    char arr2[howmany][LENGTH];
    ZeroMemory(arr1, sizeof(arr1));
    ZeroMemory(arr2, sizeof(arr2));
    for (int i = 0; i < howmany; i++) {
        scanf("%s", arr1[i]);
    }
    for (int i = 0; i < howmany; i++) {
        //제일 짧은거 발견하면
        int min = 1;
        if (arr1[i][0] == NULL)
            continue;
        for (int j = 0; arr[i][j] != NULL; j++) {
            int count = 0;
            if (arr[i][j + 1] == NULL)
                count = j + 1;
        }




        //중복되는게 없다면 복사하고
        //제일 짧은놈을 지우기
        ZeroMemory(arr1[i], sizeof(arr1[i]));
    }
}