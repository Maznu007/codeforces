try:
    t = int(input())
except EOFError:
    t = 0
except ValueError:
    t = 0
for _ in range(t):
    try:
        rating = int(input())
    except EOFError:
        break
    except ValueError:
        continue 
        
    if rating >= 1900:
        print("Division 1")
    elif rating >= 1600:
        print("Division 2")
    elif rating >= 1400:
        print("Division 3")
    else:
        print("Division 4")