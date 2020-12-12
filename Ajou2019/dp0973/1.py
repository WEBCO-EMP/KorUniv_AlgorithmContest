quiznum, abilty, maxquiz = map(int, input().split())
score = 0
escape = 0 
quiz = []
while True:
    for i in range(0, quiznum):
        a = []
        diff1, diff2 = map(int, input().split())
        a.extend([diff1, diff2, 1])
        quiz.append(a)
    for i in range(0, quiznum):
        if maxquiz <= 0:
            escape = 1
            break
        if quiz[i][1] <= abilty:
            score += 140
            maxquiz -= 1
            quiz[i][2] = 0
    if escape == 1: break
    for i in range(0, quiznum):
        if maxquiz <= 0:
            break
        if quiz[i][2] != 0:
            if quiz[i][0] <= abilty:
                score += 100
                maxquiz -= 1
    break
print(score)





        
