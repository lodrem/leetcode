"""
Valid Number

Validate if a given string is numeric.

Some examples:
"0" => true
" 0.1 " => true
"abc" => false
"1 a" => false
"2e10" => true
Note: It is intended for the problem statement to be ambiguous. You should gather all requirements up front before implementing one.
"""

class Solution:
    # @param s, a string
    # @return a boolean
    def isNumber(self, s):
        try:
            a = float(s)
            return True
        except:
            return False
