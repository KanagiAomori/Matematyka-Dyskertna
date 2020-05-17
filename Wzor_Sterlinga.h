#ifndef WZOR_STERLINGA
#define WZOR_STERLINGA
// warunek n > k
int wzor_sterlinga(int n, int k) {  // n Zbiór, k ilosc podzbiorów
    if(n == k)
        return 1;
    if(k == 1)
        return 1;
    if(k == 0)
        return 0;
    return wzor_sterlinga(n - 1, k - 1) + k * wzor_sterlinga(n - 1, k);
} 

#endif