class Solution(object):
    def diagonalSum(self, mat):
        """
        :type mat: List[List[int]]
        :rtype: int
        """
        sums = 0

        i = 0
        j = 0
        while i < len(mat) and j < len(mat):
            sums += mat[i][j]
            i += 1
            j += 1

        i = 0
        j = len(mat[0])-1
        while i < len(mat) and j >= 0:
            sums += mat[i][j]
            i += 1
            j -= 1

        if len(mat) % 2 and len(mat) == len(mat[0]):
            sums -= mat[len(mat)//2][len(mat[0])//2]

        return sums
        