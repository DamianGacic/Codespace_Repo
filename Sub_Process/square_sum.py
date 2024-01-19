import sys
import time

def sum_of_squares(limit):
    result = 0
    for i in range(1, limit + 1):
        result += i * i
    return result

if len(sys.argv) != 2:
    print("Usage: python script.py <limit>")
    sys.exit(1)

limit = int(sys.argv[1])
if limit <= 0:
    print("Error: Limit must be a positive integer.")
    sys.exit(1)

start_time = time.time()
result = sum_of_squares(limit)
end_time = time.time()

print(f"Sum of squares from 1 to {limit}: {result}")
print(f"Execution Time: {end_time - start_time} seconds")
