//move zero to end
//non negative  concept
//whenever we see the zero then see to its right mean non zero then just swap it with i
// time complexity O(n^2)
// space compelexity O(n)
for(int i=0;i<n;i++){
    if(arr[i]==0){
        for(int j=i+1;j<n;j++)
           if(arr[j]!=0)
             swap(arr[i],arr[j])
    }
}
//efficient solution
// time complexity O(n)
// space compelexity O(1)
//Techniqe use the count of non negative numbers and jkust replace the value
//10,8,0,0,12,0
//i=0:{10,8,0,0,12,0} count =1
//i=1:{10,8,0,0,12,0} count =2
//i=2:{10,8,0,0,12,0} count =2
//i=3:{10,8,0,0,12,0} count =2
//i=4:{10,8,12,0,0,0} count =3
//i=5:{10,8,0,0,12,0} count =3

int count=0;
for(int i=0;i<n;i++){
    if(arr[i]!=0){
        
        swap(arr[i],arr[count])
            count++;
    }
}
