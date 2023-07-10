# Brute force approach 

def commonElements (A, B, C, n1, n2, n3):
        A=list(set(A))
        B=list(set(B))
        C=list(set(C))
        d={}
        ans=[]
        arr=A+B+C
        for i in arr:
            d[i]=arr.count(i)
        for i in d:
            if d[i]==3:
                ans.append(i)
        ans.sort()
        return ans

def insert_element(lst, n):
    for i in range(n):
        element = int(input())
        lst.append(element)

n1 = int(input("Enter the size of 1st array : "))
n2 = int(input("Enter the size of 2nd array : "))
n3 = int(input("Enter the size of 3rd array : "))
lst1 = []
print("Enter the 1st array element : ")
insert_element(lst1, n1)
A = sorted(lst1)
print(A)
lst2 = []
print("Enter the 2nd array element : ")
insert_element(lst2, n2)
B = sorted(lst2)
lst3 = []
print("Enter the 3rd array element : ")
insert_element(lst3, n3)
C = sorted(lst3)

result = commonElements(A,B,C,n1, n2, n3)
print("Common elements in 3 sorted arrays" , result)