fib 0 = 0
fib 1 = 1
fib n = fib(n-1)+ fib(n-2)

my_length [] = 0
my_length (_:xs) = my_length xs + 1
 
my_sum [] = 0
my_sum (x:xs) = my_sum xs + x

my_reverse [] = []
my_reverse (x:xs) = my_reverse xs ++ [x]

main = do
    print $ fib 5
    print $ my_length [1,2,3]
    print $ my_length []
    print $ my_sum [1..5]
    print $ my_reverse [1..5]