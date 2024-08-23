def fibonacci():
    a, b = 0, 1
    while True:
        yield a
        a, b = b, a + b

def print_fibonacci(n):
    for num in fibonacci():
        if num > n:
            break
        print(num, end=" ")
    print()

def print_next_fibonacci(n):
    for num in fibonacci():
        if num == 0:
            for _ in range(5):
                print(next(fibonacci()), end=" ")
            print()
            return
        if num > n:
            break
        print(num, end=" ")
    print()

def main():
    for line in input().split():
        n = int(line)
        print_fibonacci(n)
        print_next_fibonacci(n)

if __name__ == "__main__":
    main()