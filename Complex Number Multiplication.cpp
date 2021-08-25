class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {
        vector<long long int> vec1,vec2;
        string res;
        vec1 = find_numbers(num1);
        vec2 = find_numbers(num2);
        long long x = vec1[0] * vec2[0] - vec1[1] * vec2[1];
        long long y = vec1[0] * vec2[1] + vec1[1] * vec2[0];
        res = to_string(x) + '+' + to_string(y) + 'i';
        return res;
    }
    
    vector<long long int> find_numbers(string num)
    {
        vector<long long int> vec;
        int a = 0, b = 0;
        int sa = 0, sb = 0, i = 0;
        if (num[0] == '-') 
        {
            sa = 1;
            i = 1;
        }
        while (isdigit(num[i])) 
        {
            a = a * 10 + (int(num[i]) - 48);
            i++;
        }
        if (num[i] == '+') 
        {
            sb = 0;
            i += 1;
        }
        if (num[i] == '-') 
        {
            sb = 1;
            i += 1;
        }
        while (i < num.length() && isdigit(num[i])) 
        {
            b = b * 10 + (int(num[i]) - 48);
            i++;
        }
        if(sa)
            a *= -1;
        if(sb)
            b *= -1;
        vec.push_back(a);
        vec.push_back(b);
        return vec;
    }
};
