#include <stdio.h>

main()
{
    FILE *in = fopen("time.in", "r");
    FILE *out = fopen("time.out", "w");
    int h, m, s, alls, temp;
    char t1, t2;
    fscanf(in, "%d%c%d%c%d", &h, &t1, &m, &t2, &s);
    
    alls = h * 3600 + m * 60 + s;
    alls = alls * 2;
    h = (alls - (alls % 3600)) / 3600;
    temp = alls % 3600;
    m = (temp - (temp % 60)) / 60;
    s = temp % 60;
    if (h < 10){
        fprintf(out, "0%d%c%d%c%d\n", h, t1, m, t2, s);
    }
    if (m < 10){
        fprintf(out, "%d%c0%d%c%d\n", h, t1, m, t2, s);
    }
    if (s < 10){
        fprintf(out, "%d%c%d%c0%d\n", h, t1, m, t2, s);
    }
    if (h > 10 && m > 10 && s > 10){
        fprintf(out, "%d%c%d%c%d\n", h, t1, m, t2, s);
    }
    fclose (in);
    fclose (out);
return 0;
}

