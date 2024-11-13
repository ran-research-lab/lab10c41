p1: p1.cpp
	g++ -o p1 p1.cpp -std=c++11
clean:
	rm -f p1 p2 p3 p4 p5

installcompi: 
	conda install -y --solver=classic -c conda-forge gxx
	conda install -y --solver=classic -c conda-forge libffi
	conda install -y --solver=classic conda-forge::conda-libmamba-solver conda-forge::libmamba conda-forge::libmambapy conda-forge::libarchive

