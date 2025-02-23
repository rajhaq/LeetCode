class Solution(object):
    def fizzBuzz(self, n):
        """
        :type n: int
        :rtype: List[str]
        """
        new_list = list()
        for j in range(n):
            i=j+1
            if i%3==0:
                if i%5==0:
                    new_list.append("FizzBuzz")
                else:
                    new_list.append("Fizz")
            elif i%5==0:
                new_list.append("Buzz")
            else:
                new_list.append(str(i))
        return new_list
