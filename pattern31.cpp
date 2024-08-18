/*4 4 4 4 4 4 4  
  4 3 3 3 3 3 4   
  4 3 2 2 2 3 4   
  4 3 2 1 2 3 4     
  4 3 2 2 2 3 4   
  4 3 3 3 3 3 4   
  4 4 4 4 4 4 4 */

  #include<iostream>
  using namespace std;

  int main(){
    int n,col,row,num,no;
    cin>>n;
    col=2*n-1;
    row=2*n-1;
    num=n;
    no=1;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            if(i==1||j==1||i==row || j==col){
                cout<<num<<" ";
            }
            if()
        }

        cout<<"\n";
    }



    return 0;
  }