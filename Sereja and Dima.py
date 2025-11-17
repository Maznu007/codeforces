n = int(input())
cards = list(map(int, input().split()))
left = 0
right = n - 1
sereja = 0
dima = 0
turn = 0
while left<=right:
    if cards[left]>=cards[right]:
        val = cards[left]
        left+=1
    else:
        val = cards[right]
        right-=1
    if turn == 0:
        sereja+=val
    else:
        dima+=val
    turn = 1 - turn
print(sereja, dima)