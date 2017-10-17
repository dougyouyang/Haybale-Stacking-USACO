//  Copyright © 2017 Dougy Ouyang. All rights reserved.

#include <iostream>
#include <algorithm>

using namespace std;
int stack[1000005];
int s[25050], e[25050];

int main()
{
    int n, k;
    int pos=0, poe=0, plus=0;
    int i;
    
    cin >> n >> k;
    for(i=0;i<k;i++){
        cin >> s[i] >> e[i];
    }
    sort(s,s+k);
    sort(e, e+k);
    
    for(i=0;i<n;i++){
        while(i==s[pos]){
            plus++, pos++;
        }
        while(i==e[poe]+1){
            plus--, poe++;
        }
        stack[i]=plus;
    }
    
    sort(stack, stack+n);
    cout << stack[n/2] << endl;
    
    return 0;
}
