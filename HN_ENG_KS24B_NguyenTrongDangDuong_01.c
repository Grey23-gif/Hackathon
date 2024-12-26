
#include <stdio.h>

int main()
{
    int n,choice;
    printf("Nhap so phan tu cho mang: ");
        scanf("%d",&n);
        int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Nhap phan tu thu %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    do
{
    printf("\nMenu");
    printf("\n1.In ra gia tri cac phan tu theo dang arr[0]=... ");
    printf("\n2.Dem so luong cac co nguyen to trong mang.");
    printf("\n3.Tim gia tri nho thu 2:");
    printf("\n4.Them 1 phan tu vao mang:");
    printf("\n5.Xoa 1 phan tu trong mang");
    printf("\n6.Sap xep theo thu tu giam dan(Insertion sort)");
    printf("\n7.Nhap vao 1 phan tu, kiem tra no co trong mang khong(Binary search).");
    printf("\n8.Xoa toan bo phan tu trung lap trong mang,in ra phan tu doc nhat");
    printf("\n9.Dao nguoc thu tu cac phan tu trong mang.");
    printf("\n10.Thoat.");
    printf("\nLua chon cua ban: ");
    scanf("%d",&choice);
    switch(choice)
{
        
    case 1:
    printf("Cac gia tri trong mang: ");
    for(int i=0;i<n;i++)
    {
        printf("\narr[%d]= %d",i,arr[i]);
    }
    break;
    case 2:
    printf("Cac so nguyen to trong mang la: ");
    for(int i=0;i<n;i++)
    {
        int check=1;
        if(arr[i]>1)
        {
        for(int j=2;j*j<=arr[i];j++)
        {
            if(arr[i]%j==0)
            {
                check =0;
            }
        }
        if(check==1)
        {
            printf(" %d",arr[i]);
        }
        }
    }
    break;
    case 3:
    int min=arr[0],min1=arr[1];
    for(int i=1;i<n-1;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
            if(min<min1)
            {
                min1=min;
            }
        }
    }
    printf("So nho thu 2 la: %d",min1);
    break;
    case 4:
    int vitri,them;
    printf("Nhap phan tu can them: ");
    scanf("%d",&them);
    printf("Nhap vi tri can them: ");
    scanf("%d",&vitri);
    for(int i=n;i>vitri;i--)
    {
        arr[i]=arr[i-1];
        
    }
    arr[vitri]=them;
    n++;
    printf("Mang sau khi them: ");
    for(int i=0;i<n;i++)
    {
        printf(" %d",arr[i]);
    }
    break;
    case 5:
    int xoa;
    printf("Nhap vi tri can xoa: ");
    scanf("%d",&xoa);
    for(int i=xoa;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
    printf("Mang sau khi xoa: ");
    for(int i=0;i<n;i++)
    {
        printf(" %d",arr[i]);
    }
    break;
    case 6:
    printf("Mang sau khi sap xep: ");
    for(int i=0;i<n;i++)
    {
        int key=arr[i];
        int j=i-1;
        while(j>=0&&arr[j]<key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
    printf("Mang sau khi sap xep: ");
    for(int i=0;i<n;i++)
    {
        printf(" %d",arr[i]);
    }
    break;
    case 8:
    int Docnhat[100],d=0;
   for (int i = 0; i < n; i++) {
        int lap = 0;
        
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                lap = 1;
                break;
            }
        }
       
        if (lap == 0) {
            Docnhat[d] = arr[i];
            d++; 
        }
    }
    printf("Mang sau khi xoa phan tu trung lap va hien thi cac phan tu doc nhat: ");
    for (int i = 0; i < d; i++) 
    {
        printf("%d ", Docnhat[i]);
    }
    break;
    case 9:
    printf("Mang sau khi dao nguoc: ");
    for(int i = n - 1; i >= 0; i--) 
    {
        printf("%d ", arr[i]);
    }
    break;

}
}
    while(choice!=10);
    
}
