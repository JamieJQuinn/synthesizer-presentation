BINS=synth graph
SRCS=synth.cpp filters.cpp waves.cpp utility.cpp

all: $(BINS)

synth: $(SRCS)
	g++ -lm $(SRCS) -lsfml-graphics -lsfml-window -lsfml-system -o synth

graph: graph.cpp
	g++ graph.cpp -o graph

.PHONY: clean

clean:
	rm $(BINS)
