fname = input('enter the file name : ')
fh = open(fname)
count = dict()
words = list()
for line in fh :
    if not line.startswith('From:') :
        continue
    line = line.split()
    words.append(line[1])
for word in words :
    count[word] = count.get(word,0)+1
maxval = None
maxkey = None
for key,val in count.items() :
    if maxval is None or val > maxval :
        maxkey = key 
        maxval = val
print(maxkey,maxval)