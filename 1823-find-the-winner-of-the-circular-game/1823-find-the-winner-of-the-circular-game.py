class Solution:
    def findTheWinner(self, n: int, k: int) -> int:
        winner = 0  # Base case for J(1, k) in 0-based indexing
    
        for i in range(2, n + 1):
            winner = (winner + k) % i
        
        return winner + 1  # Convert to 1-based indexing