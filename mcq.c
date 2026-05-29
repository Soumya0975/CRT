#include <stdio.h>

int main() {
int i;
for(i=0;i<=3;i++);
printf("%d ", i);

    return 0;
}
// op=4

#include <iostream>
using namespace std;
int main() {
int i=0;
for(i=0;i==0;i++){
cout<<i;}

    return 0;
}
// OP=0

#include <iostream>
using namespace std;
int main() {
int i,j;
for(i=0,j=5;i<j;i++,j--){
    // print i then print j then i is inc so op is 1 and j dec so op is 4 
cout<<i<<j;
    
}

    return 0;
}
// OP=051423

#include <iostream>
using namespace std;
int main() {
int i;
for(i=0;i<9;i=i+3){

cout<<"for";
    
}

    return 0;
}

// OP= forforfor

#include <iostream>
using namespace std;
int main() {
int i,sum=0;
for(i=0;i<10;i=i+3){
    sum=sum+i;
}
cout<<sum;
    

    return 0;
}

//OP=18


#include <iostream>
using namespace std;
int main() {
int i=5;
while(--i>0)
  cout<<"loop";
return 0;
}
// OP=looplooplooplopp


#include <iostream>
using namespace std;
int main() {
int i=0;
while(i++)
  cout<<"loop";
  if(i==3)
    break;
return 0;
}
// print nothing
// the condition is while (i--) the expression is post increment variable so when it is applied for 1st time the condition will be false because while(0)

#include <iostream>
using namespace std;
int main() {
  while(!cout<<"help4code.com");
return 0
  }


  
