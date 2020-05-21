name = input("Enter file:")
if len(name) < 1 : name = "mbox-short.txt"
handle = open(name)
words = list()
count = dict()
for line in handle :
    if not line.startswith('From ') : continue
    line = line.split()
    line = line[5].split(':')
    words.append(line[0])
for word in words :
    count[word] = count.get(word,0)+1
temp = dict()
for key,val in sorted(count.items()) :
    print(key,val)