from collections import deque
import copy

#노드의 갯수 입력 받기
v = int(input())
#모든노드의 진입차수는 0으로 초기화
indegree = [0] * (v + 1)
#각 노드에 연결된 간선의 정보를 담기위한 연결리스트 초기화
graph = [[] for _ in range(v + 1)]
#각 강의의 시간을 0으로 초기화
time = [0] * (v + 1)


#방향그래스의 모든 간선정보 입력받기
for i in range(1, v + 1):
    data = list(map(int, input().split()))
    time[i] = data[0]
    for x in data[1:-1]:
        indegree[i] +=1
        graph[x].append(i)

#위상정렬 함수
def topology_sort():
    result = copy.deepcopy(time) #알고리즘 수행결과를 담을 리스트
    q = deque() #큐기능을 위한 deque 라이브러리 사용

    #처음시작할때는 진입차수가 0인 노드를 큐에 삽입
    for i in range(1, v + 1):
        if indegree[i] == 0:
            q.append(i)

    #큐가 빌때까지 반복
    while q:
        #큐에서 원소 꺼내기
        now = q.popleft()
        #해당원소에 연결왼 노드들의 진입차수에서 1 빼기
        for i in graph[now]:
            result[i] = max(result[i], result[now] + time[i])
            indegree[i] -= 1
            #새롭게 진입차수가 0이 되는 노드를 큐에 삽입
            if indegree[i] == 0:
                q.append(i)

    for i in range(1, v + 1):
        print(result[i])

topology_sort()