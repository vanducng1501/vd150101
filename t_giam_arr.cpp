#include <iostream>
using namespace std;

int main () 
{

    int arr[40],n ,i;
    cout << "Kich thuoc mang : " << endl;
    cin >> n;
    cout << "Nhap " << n << " phan tu mang: " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];      
    }   
    cout << "Mang da cho: " << endl;
    for (i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }
    
    int tangdan;
    for (i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                tangdan = arr[i];
                arr[i] = arr[j];
                arr[j] = tangdan;
            }
        }
    }
    cout << "\n Mang sap xep phan tu tang dan: " << endl;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";  
    }
    int giamdan;
    for (i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                giamdan = arr[i];
                arr[i] = arr[j];
                arr[j] = giamdan;
            }
        }
    }
    cout << "\n Mang sap xep phan tu giam dan: " << endl;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";  
    }
    
    return 0; 
}