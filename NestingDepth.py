n=int(input())
for j in range(n):
    s=input()
    a=int(max(s))
    new_s=""
    if a==0:
        new_s=s
    else:
        for i in range(len(s)):
            if i==0:
                new_s=new_s+int(s[i])*"("+ s[i] +int(s[i])*")"
            else:
                if int(s[i])==int(s[i-1]):
                    new_s=new_s[0:len(new_s)-int(s[i])]+s[i]+new_s[len(new_s)-int(s[i]):]
                elif int(s[i])>int(s[i-1]):
                    c=(int(s[i])-int(s[i-1]))
                    new_s=new_s[0:len(new_s)-int(s[i-1])]+c*"("+s[i]+c*")"+new_s[len(new_s)-int(s[i-1]):]
                elif int(s[i])<int(s[i-1]):
                    if s[i]=="0":
                        new_s=new_s+s[i]
                    else:
                        new_s=new_s[0:len(new_s)-int(s[i])]+s[i]+new_s[len(new_s)-int(s[i]):]
    print("Case #"+str(j+1)+": "+new_s)
