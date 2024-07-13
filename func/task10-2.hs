main = do
    print [x*3 | x <- [1..100], x*3 <= 100]
    print $ sum [x^2 | x <- [1..1000]]
