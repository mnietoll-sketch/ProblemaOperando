test: twins.cc
	g++ twins.cc -o test
testError: twinsError.cc
	g++ twinsError.cc -o testError
clean:
	rm test testError
run: test testError twinsInput.txt
	./test < twinsInput.txt
	./testError < twinsInput.txt
