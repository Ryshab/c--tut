import heapq
def uniform_cost_search(graph, start, goal):
# Initialize the priority queue with the start node and a cost of 0.
    priority_queue = [(0, start)]# Priority queue (min-heap) with (cost, node)
    visited = set()# Set to keep track of visited nodes
    path_cost = {node: float('inf') for node in graph}# Dictionary to store path costs
    path_cost[start] = 0# Cost from start to start is 0
    parent = {}
    while priority_queue:
# Get the node with the lowest path cost.
        cost, node = heapq.heappop(priority_queue)
        if node == goal:
            return reconstruct_path(parent, start, goal)
        if node in visited:
            continue
        visited.add(node)
        for neighbor, edge_cost in graph[node].items():
            new_cost = path_cost[node] + edge_cost
            print(path_cost[neighbor])
            print(neighbor)
            if new_cost < path_cost[neighbor]:
                path_cost[neighbor] = new_cost
                parent[neighbor] = node
                heapq.heappush(priority_queue, (new_cost, neighbor))

                print(parent[neighbor])
            return None # No path found
def reconstruct_path(parent, start, goal):
    path = []
    node = goal
    while node != start:
        path.insert(0, node)
        node = parent[node]
        path.insert(0, start)
    return path
graph = {
'A': {'B': 1, 'C': 4},
'B': {'A': 1, 'C': 2, 'D': 5},
'C': {'A': 4, 'B': 2, 'D': 1},
'D': {'B': 5, 'C': 1, 'E': 3},
'E': {'D': 3}
}
start_node = 'A'
goal_node = 'E'

result = uniform_cost_search(graph, start_node, goal_node)
if result:
    path, cost = result, sum(graph[result[i]][result[i + 1]] for i in range(len(result) - 1))
    print(f"Shortest Path from {start_node} to {goal_node}: {path}")
    print(f"Total Cost: {cost}")
else:
    print(f"No path found from {start_node} to {goal_node}")
