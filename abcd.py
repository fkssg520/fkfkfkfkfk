'''题目1'''
'''
result = 36
a = 50
cnt = 0
while cnt < 7:
    cnt += 1
    if a > result :
        print('值大了')
        a = int(input())
    elif a < result :
        print('值小了')
        a = int(a)
    elif a == result :
        break
print(a)'''

'''列表'''
'''
my_list = [1, 2, 3.3, 'freshman', 'first play']
print(my_list)
my_list[3] = 'change'
my_list.append('add1')
my_list.remove(2)
print(my_list)'''

'''元组'''
'''
tuple = ( '夜清照', 'yyds', 666, 13.14, 666, 666, 13.14)
print (tuple.index('yyds'))
print(tuple.count(666))'''

'''字典'''
'''
dict1 = {'name1' : 96, 'name2' : 33, 'num_int' : 1314520, 'num_f' : 520.1314, 'list' : [1,2,3]}
dict1['name2'] = 66
dict1.update({'name3' : 100})
dict1.update({'name1' : '95'})
dict1.pop('num_int')
print(dict1['name1'])
print(dict1.keys())
print(dict1.items())
'''

'''集合'''
'''
set1 = {'app','pap','ppa',1,2,3}
set2 = {1,2,3,4}
print(set1 | set2)
print(set1 & set2)'''
