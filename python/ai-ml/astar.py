#Here priority_queue is the open list and path is the closed list
def greedy_best_first_search(graph, heuristic, start, goal):
    visited = set()
    priority_queue = [(heuristic[start], start)]
    path=[]
    total_cost={node: float('inf') for node in graph}
    total_cost[start]=0
    priority_queue1=[(float('inf'), None)]
    

    while priority_queue:
        _, current_node = priority_queue.pop(0)
        #print(current_node)
        path.append(current_node)
        print(path)
        

        if current_node == goal:
            return path
        if current_node in visited:
            continue  # Skip already visited nodes

        visited.add(current_node)

        for neighbor, cost in graph[current_node]:
            if neighbor not in visited:
                totalc=total_cost[current_node]+cost
                print(totalc)
                print('current_node:', current_node)
                print('neighbor:',neighbor)
                if totalc < total_cost[neighbor]:
                    total_cost[neighbor] = totalc  
                    total_f=heuristic[neighbor]+total_cost[neighbor]
                    print(total_f)
                    priority_queue1.append((total_f, neighbor))
        if(len(priority_queue1)):    
            priority_queue1.sort()
            print(priority_queue1)
            g_n, cnode = priority_queue1.pop(0)
            priority_queue.append((g_n, cnode))
            priority_queue1.clear()
        else:
            return
        
        
                
# Define a weighted graph as an adjacency list and a heuristic dictionary
graph = {
    'A': [('B', 5), ('C', 10)],
    'B': [('A', 5), ('D', 5), ('E', 15)],
    'C': [('A', 10), ('F', 20)],
    'D': [('B', 5)],
    'E': [('B', 15), ('F', 10)],
    'F': [('C', 20), ('E', 10)]
}

# Define a heuristic for each node (for simplicity, these are just random values)
heuristic = {
    'A': 15,
    'B': 20,
    'C': 10,
    'D': 5,
    'E': 12,
    'F': 0
}

start_node = 'A'
goal_node = 'F'

path = greedy_best_first_search(graph, heuristic, start_node, goal_node)

if path:
    print(f"Greedy Best First Search path from {start_node} to {goal_node}: {path}")
else:
    print(f"No path found from {start_node} to {goal_node}")
