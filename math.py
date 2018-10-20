N = int(input())
X = list(input())
nX = []

for i in range(N):
    if X[i] == '0':
        continue
    elif X[i] == '1':
        continue
    elif X[i] == '4':
        nX+=['3','2','2']
    elif X[i] == '6':
        nX+=['5','3']
    elif X[i] == '8':
        nX+=['7','2','2','2']
    elif X[i] == '9':
        nX+=['7','3','3','2']
    else:
        nX+=X[i]

print(''.join(sorted(nX,reverse=True)))
