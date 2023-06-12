# def mysteryrecursive(str, s, e):
#   if (s == e):
#     return True

#   if (str[s] != str[e]):
#     return False

#   if (s < e + 1):
#     return mysteryrecursive(str, s + 1, e - 1)
    
#   return False


# def mystery(str):
#   n = len(str)
#   if (n == 0):
#     return True

#   return mysteryrecursive(str, 0, n - 1)

# print(mystery("kasur rusak"))

def mystery(a, b):
  if a != b:
    print("test")
    m = (a+b)/2
    mystery(a,m)
    mystery(m,b)

mystery(0,8)