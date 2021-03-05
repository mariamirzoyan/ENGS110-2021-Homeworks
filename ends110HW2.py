def fibsum (number):
	F1 = 0
	F2 = 1
	S = 0
	while(F2 <= number):
		S = F2+S
		next = F1 + F2
		F1 = F2
		F2 = next
	print (S)

def prime (number):
	if number > 1:
		for i in range(2,number):
			if (number % i) == 0:
				print(number,"is not a prime number")
				print(i,"times",number//i,"is",number)
				break
		else:
			print(number,"is a prime number")
	else:
   		print(number,"is not a prime number")

def toBinary(number):
	binary = [0,0,0,0,0,0,0,0]
	i = len(binary)-1
	print(binary[i])
	while(number > 0):
		binary[i] = number%2
		i-=1
		number = int(number/2)
	print(binary)
def main():
	N = int(input("Please type your age: "))
	fibsum(N)
	prime(N)
	toBinary(N)
	print("Done")


main()
