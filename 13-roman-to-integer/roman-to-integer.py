class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        roman_numerals = {
        "I": 1,
        "V": 5,
        "X": 10,
        "L": 50,
        "C": 100,
        "D": 500,
        "M": 1000
        }
        lst=[]
        for i in s:
            lst.append(roman_numerals[i])
        for i in range(len(lst)):
            if i>0 and lst[i]>lst[i-1]:
                lst[i]=lst[i]-lst[i-1]
                lst[i-1]=0
        return sum(lst)
        



        