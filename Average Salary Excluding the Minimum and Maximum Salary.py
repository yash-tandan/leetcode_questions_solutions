class Solution:
    def average(self, salary: List[int]) -> float:
        sum = 0
        sum=sum(salary)
        
        sum = sum - max(salary) - min(salary)
        i = len(salary)
        average = sum/(i-2)

        return average

