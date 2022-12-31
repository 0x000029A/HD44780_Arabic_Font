# HD44780_Arabic_Font
## Arabic font for character LCDs, v1.0
## Limitations
- There are hardware-limitation that we can't create more than 8 custom characters at the same time.
## How to install
- Click on Code and then choose "Download zip"
- Add it to Arduino IDE libraries.
- See the example.
## How to use
- The function translates a single english letter to a single arabic letter.
- It only supports initial and final positions of a character.
- Use the function above to write arabic words, with maximum of 8 letters (don't use spaces to maximize the letter count).
## Example (in your main source code file)
```Cpp
printAR("mRhbA");
```
Output
```
مرحبا
```
## Alphabet
| AR Initial | EN Letter | AR Final | EN Letter |
| ---------- | --------- | -------- | --------- |
|     ا      |     a     |    ـا    |    A      |
|     بـ     |     b     |    ـب    |    B      |
|     تـ     |     t     |    ـت    |    t      |
|     ثـ     |     c     |    ـث    |    C      |
|     جـ     |     g     |    ـج    |    G      |
|     حـ     |     j     |    ـح    |    J      |
|      خـ    |     i     |    ـخ    |    I      |
|      د     |     d     |    ـد    |    D      |
|      ذ     |     y     |    ـذ    |    Y      |
|      ر     |     r     |    ـر    |    R      |
|      ز     |     z     |    ـز    |    Z      |
|      سـ    |     s     |    ـس    |    S      |
|       شـ   |     x     |    ـش    |    X      |
|      صـ    |     p     |    ـص    |    P      |
|      ضـ    |     0    |          |           |
|       طـ   |     1    |          |           |
|       ظـ   |     u     |    ـط    |    U      |
|      عـ    |     o     |   ـع     |    O      |
|      غـ    |     v     |    ـغ    |    V      |
|      فـ    |     f     |    ـف    |    F      |
|      قـ    |     q     |    ـق    |    Q      |
|      كـ    |     k     |    ـك    |    K      |
|      لـ    |     l     |    ـل    |    L      |
|      مـ    |     m     |    ـم    |    M      |
|      نـ    |     n     |    ـن    |    N      |
|      هـ    |     h     |    ـه    |    H      |
|      و     |     w     |    ـو    |    W      |
|      يـ    |     e     |    ـي    |    E      |
|      ئـ    |     2    |          |           |
