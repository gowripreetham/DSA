int median(int A[],int N)
    {
        
        sort(A,A+N);
        
        //your code here
        //If median is in fraction then convert it to integer and return
        int mid = N/2;
        if(N%2 != 0){ //N is odd case
            return A[mid];
        }
        else{   //N is even case
            
           int x = (N/2)-1;
           int y = x+1;
           int median = (A[x]+A[y])/2;
           return (int)median;
        }
    }
    //Function to find mean of the array elements.
    int mean(int A[],int N)
    {
        //your code here
        int sum=0;
        for(int i=0;i<N;i++){
            sum += A[i];
        }
        return sum/N;
    }
