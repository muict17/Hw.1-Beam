// #include<stdio.h>
// int main()
// {
//   int n;

//   scanf("%d",&n);

//   int a[n];
//   int count[n];

//   for(int i=0;i<n;i++){
//   count[i]=0;
//   }

//   for(int i=0;i<n;i++){
//     scanf("%d",&a[i]);
//   }
//   for(int i=0;i<n;i++){
//     for(int j=i+1;j<n-1;j++){
//       if (a[i]==a[j]) count[i]=count[i]+1;
     
//     } 
//   }

//   int max=count[0];
//   int x=0;
//   for(int i=0;i<n;i++){
//     if(max<count[i]){ 
//     max=count[i];
//     x=i;
//     }
   
//    }

//    printf("%d",a[x]);

//   return 0 ;
// }
