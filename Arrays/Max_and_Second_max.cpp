vector<int> largestAndSecondLargest(int sizeOfArray, int arr[]){
        int max = INT_MIN, max2= INT_MIN;
        vector<int> v1;
        /*********************************
         * Your code here
         * This function should return a
         * vector with first element as
         * max and second element as 
         * second max
         * *******************************/
         int g1 = INT_MIN;
         int g2=INT_MIN;
         for(int i=0;i<sizeOfArray;i++){
            if(max < arr[i]){
                max2=max;
                max = arr[i];
            }
            else if(arr[i] != max && arr[i] >max2){
                max2 = arr[i];
            }
         }
         if(max2 == INT_MIN){
            max2 = -1;
         }
         v1.push_back(max);
         v1.push_back(max2);
         return v1;
    }
