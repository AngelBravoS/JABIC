#include "Blockchain.hpp"

int main() {
	Blockchain bChain = Blockchain();

	std::cout << "JABIC 0.01" << endl;

	std::cout << "Mining block 1..." << endl;
	bChain.AddBlock(Block(1, "Block 1 Data"));

	std::cout << "Mining block 2..." << endl;
	bChain.AddBlock(Block(2, "Block 2 Data"));

	std::cout << "Mining block 3..." << endl;
	bChain.AddBlock(Block(3, "Block 3 Data"));

	return 0;
}
