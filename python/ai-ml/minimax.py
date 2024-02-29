import math
def minimax (depth, nodeIndex, maxTurn, scores, target):

    if (depth == target):

        return scores[nodeIndex]

    if (maxTurn):

        return max(minimax(depth + 1, nodeIndex * 2,False, scores, target),minimax(depth + 1, nodeIndex * 2 + 1,False, scores, target))

    else:

        return min(minimax(depth + 1, nodeIndex * 2,True, scores, target),minimax(depth + 1, nodeIndex * 2 + 1,True, scores, target))

scores = [4,-1,8,5,-7,-4,-2,-1]
a = math.log(len(scores), 2)
print("The optimal value is : ", end = "")
print(minimax(0, 0, True, scores, a))
