def min_in(minset,vset):
    x=100
    temp=0
    for i in range(0,len(minset)):
        if minset[i]!=0 and minset[i]!=100 and i not in vset and minset[i]<x:
            x=minset[i]
            temp=i
    return(temp)

def update(minset,vset,p,tree):
    for i in range(0,len(minset)):
        if minset[i]!=0 and i not in vset and minset[p]+tree[p][i]<minset[i]:
            minset[i]=minset[p]+tree[p][i]
    return(minset)
      
def Dijkastra(tree,src):
    vset=list()
    minset=tree[src]
    vset.append(src)
    minset[src]=0
    while(len(vset)!=len(tree)):
        p=min_in(minset,vset)
        vset.append(p)
        minset=update(minset,vset,p,tree)
    print(minset)
        
        

#main
src=int(input("ENTER SOURCE::"))
tree=[[100,4,100,8,100],
      [4,100,3,100,100],
      [100,3,100,4,100],
      [8,100,4,100,7],
      [100,100,100,7,100]];
Dijkastra(tree,src)



