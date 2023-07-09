# Median of 2 sorted array of different size
def display(lst):
    for x in lst:
        print(x, end=" ")
    print()

def insert_element(lst, n):
    for i in range(n):
        element = int(input())
        lst.append(element)

def  cal_median(lst1, lst2):
    merge_list =  lst1 + lst2
    #print(merge_list)
    total = len(merge_list)
    if total % 2 == 0:
        mid_term = (merge_list[total//2] + (merge_list[total//2] - 1)) /2
    else:
        mid_term = merge_list[total //2]
    
    return mid_term

list1 = []
size1 = int(input("Enter the size of 1st array : "))
print("Enter the element of the 1st array : ")
insert_element(list1 , size1)
print()
print("Display the 1st array : ")
display(list1)
print()

list2 = []
size2 = int(input("Enter the size of 2nd array : "))
print("Enter the element of the 2nd array : ")
insert_element(list2 , size2)
print()
print("Display the 2nd array : ")
display(list2)
print()

lst1 = sorted(list1)
lst2 = sorted(list2)
print("After sorting 1st array : ")
display(lst1)
print()
print("After sorting 1st array : ")
display(lst2)
print()
mid_item = cal_median (lst1 , lst2)
print("Median of 2 sorted arrays of equal size is = " ,mid_item)