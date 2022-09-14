class Solution(object):
    def interpret(self, command):
        """
        :type command: str
        :rtype: str
        """
        check = {"(al)":"al", "()":"o","G":"G"}
        t,ans ="",""
        for i in range(len(command)):
            t+=command[i]
            if t in check:
                ans+=check[t]
                t=""
        return ans
        