from typing import Generator

def fibonacci_gene() -> Generator[int, None, None]:
    """Generate an infinite sequence of Fibonacci numbers."""
    a, b = 0, 1
    while True:
        yield a
        a, b = b, a + b


#fibonacci_sequence = fibonacci_gene()
#for _ in range(10):
#    print(next(fibonacci_sequence))

def main() -> None:
    fib_gen: Generator[int, None, None] = fibonacci_gene()
    n: int = 10 
    line_break:str = '-' * 20
   
    while True:
      input(f'tap "enter foor the nexxt {n} Fibonacci numbers: ')
      for i in range(n):
            print(f'{next(fib_gen)}')

      print(line_break)
if __name__ == "__main__":
    main()