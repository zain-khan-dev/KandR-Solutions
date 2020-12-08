f=open("Readme.md")

code=""
codes=[]
numbers=[]

for lines in f:
    if(lines=="\n" or lines==""):
        continue
    if(lines[0]=='E'):
        numbers.append(lines.split('.')[1][:-1])
        codes.append(code)
        code=""
    else:
        code+=lines

codes=codes[1:]
for i in range(len(codes)):
    f=open("Chapter2/2.{0}.c".format(numbers[i]),"w+")
    f.write(codes[i])
    f.close()