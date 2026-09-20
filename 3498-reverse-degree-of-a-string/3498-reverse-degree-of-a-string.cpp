class Solution {
public:
    int reverseDegree(string s) {
        int a = 26;
        int b = 25;
        int c = 24;
        int d = 23;
        int e = 22;
        int f = 21;
        int g = 20;
        int h = 19;
        int i1 = 18;
        int j = 17;
        int k = 16;
        int l = 15;
        int m = 14;
        int n = 13;
        int o = 12;
        int p = 11;
        int q = 10;
        int r = 9;
        int s1 = 8;
        int t = 7;
        int u = 6;
        int v = 5;
        int w = 4;
        int x = 3;
        int y = 2;
        int z = 1;
        int sum = 0;
        
            for (int i = 0; i < s.size(); i++) {
                if (s[i] == 'a')
                    sum = sum + a * (i + 1);
                if (s[i] == 'b')
                    sum = sum + b * (i + 1);
                if (s[i] == 'c')
                    sum = sum + c * (i + 1);
                if (s[i] == 'd')
                    sum = sum + d * (i + 1);
                if (s[i] == 'e')
                    sum = sum + e * (i + 1);
                if (s[i] == 'f')
                    sum = sum + f * (i + 1);
                if (s[i] == 'g')
                    sum = sum + g * (i + 1);
                if (s[i] == 'h')
                    sum = sum + h * (i + 1);
                if (s[i] == 'i')
                    sum = sum + i1 * (i + 1);
                if (s[i] == 'j')
                    sum = sum + j * (i + 1);
                if (s[i] == 'k')
                    sum = sum + k * (i + 1);
                if (s[i] == 'l')
                    sum = sum + l * (i + 1);
                if (s[i] == 'm')
                    sum = sum + m * (i + 1);
                if (s[i] == 'n')
                    sum = sum + n * (i + 1);
                if (s[i] == 'o')
                    sum = sum + o * (i + 1);
                if (s[i] == 'p')
                    sum = sum + p * (i + 1);
                if (s[i] == 'q')
                    sum = sum + q * (i + 1);
                if (s[i] == 'r')
                    sum = sum + r * (i + 1);
                if (s[i] == 's')
                    sum = sum + s1 * (i + 1);
                if (s[i] == 't')
                    sum = sum + t * (i + 1);
                if (s[i] == 'u')
                    sum = sum + u * (i + 1);
                if (s[i] == 'v')
                    sum = sum + v * (i + 1);
                if (s[i] == 'w')
                    sum = sum + w * (i + 1);
                if (s[i] == 'x')
                    sum = sum + x * (i + 1);
                if (s[i] == 'y')
                    sum = sum + y * (i + 1);
                if (s[i] == 'z')
                    sum = sum + z * (i + 1);
            }
        
        return sum;
    }
};