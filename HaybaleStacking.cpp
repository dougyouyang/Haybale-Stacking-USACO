/*

This is free and unencumbered software released into the public domain.

Anyone is free to copy, modify, publish, use, compile, sell, or
distribute this software, either in source code form or as a compiled
binary, for any purpose, commercial or non-commercial, and by any
means.

In jurisdictions that recognize copyright laws, the author or authors
of this software dedicate any and all copyright interest in the
software to the public domain. We make this dedication for the benefit
of the public at large and to the detriment of our heirs and
successors. We intend this dedication to be an overt act of
relinquishment in perpetuity of all present and future rights to this
software under copyright law.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
OTHER DEALINGS IN THE SOFTWARE.

For more information, please refer to <http://unlicense.org/>

*/


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
