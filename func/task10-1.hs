fact 0 = 1
fact 1 = 1
fact n = fact(n-1)+ fact(n-2)

main = do
    print $ fact 5
