p1: p1.cpp
	g++ -o p1 p1.cpp 
p2: p2.cpp
	g++ -o p2 p2.cpp 
p3: p3.cpp
	g++ -o p3 p3.cpp 
p4: p4.cpp
	g++ -o p4 p4.cpp 
p5: p5.cpp
	g++ -o p5 p5.cpp 
clean:
	rm -f p1 p2 p3 p4 p5

installcompi: 
	conda install -y --solver=classic -c conda-forge gxx
	conda install -y --solver=classic -c conda-forge libffi
	conda install -y --solver=classic conda-forge::conda-libmamba-solver conda-forge::libmamba conda-forge::libmambapy conda-forge::libarchive

