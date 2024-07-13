my_map _ [] = []
my_map f (x:xs) = f x : my_map f xs

my_filter _ [] = []
my_filter f (x:xs)
    | f x = x : my_filter f xs
    | otherwise = my_filter f xs
    
main = do 
    print $ my_map (+1) [1,2,3]
    print $ my_filter (\x -> x `mod` 2 == 0) [1,2,3]
