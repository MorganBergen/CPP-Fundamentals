
#include <iostream>
#include <array>
#include <cstring>
#include <cstdlib>
#include <string>

void decrypt(char*, const char*, int);

int main(){
        
    char *secret = ":mmZ\dxZmx]Zpgy";
    
//Function:     strlen(secret)
//Description:  Returns an integer equal to the length of secret. The null character '\0' is not counted in the length)
    char *output = new char[strlen(secret)];
    
    for (int key = 1; key <= 100; ++key) {
        decrypt(output, secret, key);
        std::cout << "Key " << key << " - " << output << std::endl;
    }
    
    // Found at key 7:  "Attack at dawn!"
    
    std::cout << std::endl;
    delete [] output;
    
    return 0;
}

void decrypt(char *output, const char *secret, int key){
    
    char *out = output;
    
    for (const char *ptr = secret; *ptr; ptr++, out++) {
        if (*ptr + key > 126)
            *out = *ptr + key - 95;
        else
            *out = *ptr + key;
    }
    *out = '\0';
}


/*
 
 
 OUTPUT
 
 
 Key 1 - ;nn[ey[ny^[qhz
 Key 2 - <oo\fz\oz_\ri{
 Key 3 - =pp]g{]p{`]sj|
 Key 4 - >qq^h|^q|a^tk}
 Key 5 - ?rr_i}_r}b_ul~
 Key 6 - @ss`j~`s~c`vm
 Key 7 - Attak at dawn!
 Key 8 - Buubl!bu!ebxo"
 Key 9 - Cvvcm"cv"fcyp#
 Key 10 - Dwwdn#dw#gdzq$
 Key 11 - Exxeo$ex$he{r%
 Key 12 - Fyyfp%fy%if|s&
 Key 13 - Gzzgq&gz&jg}t'
 Key 14 - H{{hr'h{'kh~u(
 Key 15 - I||is(i|(li v)
 Key 16 - J}}jt)j})mj!w*
 Key 17 - K~~ku*k~*nk"x+
 Key 18 - L  lv+l +ol#y,
 Key 19 - M!!mw,m!,pm$z-
 Key 20 - N""nx-n"-qn%{.
 Key 21 - O##oy.o#.ro&|/
 Key 22 - P$$pz/p$/sp'}0
 Key 23 - Q%%q{0q%0tq(~1
 Key 24 - R&&r|1r&1ur) 2
 Key 25 - S''s}2s'2vs*!3
 Key 26 - T((t~3t(3wt+"4
 Key 27 - U))u 4u)4xu,#5
 Key 28 - V**v!5v*5yv-$6
 Key 29 - W++w"6w+6zw.%7
 Key 30 - X,,x#7x,7{x/&8
 Key 31 - Y--y$8y-8|y0'9
 Key 32 - Z..z%9z.9}z1(:
 Key 33 - [//{&:{/:~{2);
 Key 34 - \00|';|0; |3*<
 Key 35 - ]11}(<}1<!}4+=
 Key 36 - ^22~)=~2="~5,>
 Key 37 - _33 *> 3># 6-?
 Key 38 - `44!+?!4?$!7.@
 Key 39 - a55",@"5@%"8/A
 Key 40 - b66#-A#6A&#90B
 Key 41 - c77$.B$7B'$:1C
 Key 42 - d88%/C%8C(%;2D
 Key 43 - e99&0D&9D)&<3E
 Key 44 - f::'1E':E*'=4F
 Key 45 - g;;(2F(;F+(>5G
 Key 46 - h<<)3G)<G,)?6H
 Key 47 - i==*4H*=H-*@7I
 Key 48 - j>>+5I+>I.+A8J
 Key 49 - k??,6J,?J/,B9K
 Key 50 - l@@-7K-@K0-C:L
 Key 51 - mAA.8L.AL1.D;M
 Key 52 - nBB/9M/BM2/E<N
 Key 53 - oCC0:N0CN30F=O
 Key 54 - pDD1;O1DO41G>P
 Key 55 - qEE2<P2EP52H?Q
 Key 56 - rFF3=Q3FQ63I@R
 Key 57 - sGG4>R4GR74JAS
 Key 58 - tHH5?S5HS85KBT
 Key 59 - uII6@T6IT96LCU
 Key 60 - vJJ7AU7JU:7MDV
 Key 61 - wKK8BV8KV;8NEW
 Key 62 - xLL9CW9LW<9OFX
 Key 63 - yMM:DX:MX=:PGY
 Key 64 - zNN;EY;NY>;QHZ
 Key 65 - {OO<FZ<OZ?<RI[
 Key 66 - |PP=G[=P[@=SJ\
 Key 67 - }QQ>H\>Q\A>TK]
 Key 68 - ~RR?I]?R]B?UL^
 Key 69 -  SS@J^@S^C@VM_
 Key 70 - !TTAK_AT_DAWN`
 Key 71 - "UUBL`BU`EBXOa
 Key 72 - #VVCMaCVaFCYPb
 Key 73 - $WWDNbDWbGDZQc
 Key 74 - %XXEOcEXcHE[Rd
 Key 75 - &YYFPdFYdIF\Se
 Key 76 - 'ZZGQeGZeJG]Tf
 Key 77 - ([[HRfH[fKH^Ug
 Key 78 - )\\ISgI\gLI_Vh
 Key 79 - *]]JThJ]hMJ`Wi
 Key 80 - +^^KUiK^iNKaXj
 Key 81 - ,__LVjL_jOLbYk
 Key 82 - -``MWkM`kPMcZl
 Key 83 - .aaNXlNalQNd[m
 Key 84 - /bbOYmObmROe\n
 Key 85 - 0ccPZnPcnSPf]o
 Key 86 - 1ddQ[oQdoTQg^p
 Key 87 - 2eeR\pRepURh_q
 Key 88 - 3ffS]qSfqVSi`r
 Key 89 - 4ggT^rTgrWTjas
 Key 90 - 5hhU_sUhsXUkbt
 Key 91 - 6iiV`tVitYVlcu
 Key 92 - 7jjWauWjuZWmdv
 Key 93 - 8kkXbvXkv[Xnew
 Key 94 - 9llYcwYlw\Yofx
 Key 95 - :mmZdxZmx]Zpgy
 Key 96 - ;nn[ey[ny^[qhz
 Key 97 - <oo\fz\oz_\ri{
 Key 98 - =pp]g{]p{`]sj|
 Key 99 - >qq^h|^q|a^tk}
 Key 100 - ?rr_i}_r}b_ul~
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 */
