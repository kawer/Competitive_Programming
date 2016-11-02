while True:
    N = int(raw_input())
    if N == 0:
        break
    t = int((2 * N) ** 0.5)

    if t * (V + 1) == 2 * N:
        print "YES"
    else:
        print "NO"
