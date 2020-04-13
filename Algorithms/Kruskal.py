def find(t,set_record):
    if set_record[t]==-1:
        return(t)
    else:
        return(find(set_record[t],set_record))


def Update(set_record,p,q):
    x=find(p,set_record)
    y=find(q,set_record)
    set_record[x]=y

def detect_cycle(set_record,p,q):

    x=find(p,set_record)
    y=find(q,set_record)
    if x==y:
        return("FORMED")
    else:
        return("NOT FORMED")

def Kruskal(graph):
    tree=list()
    set_record=list()
    for j in range(0,len(graph)):
        set_record.append(-1)
    for i in range(0,len(graph)):
        if detect_cycle(set_record,graph[i][0],graph[i][1])=="NOT FORMED":
            Update(set_record,graph[i][0],graph[i][1])
            tree.append(graph[i])
        else:
            continue
    print(set_record)
    print(tree)
# MAIN

graph=[[0,1,4],
       [1,2,3],
       [2,3,4],
       [3,4,7],
       [0,3,8]]

graph=sorted(graph,key=lambda x:x[2])
print(graph)
Kruskal(graph)
