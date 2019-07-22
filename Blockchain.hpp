//
// Created by Dave Nash on 20/10/2017.
//

#ifndef TESTCHAIN_BLOCKCHAIN_HPP
#define TESTCHAIN_BLOCKCHAIN_HPP

#include <cstdint>
#include <vector>
#include "Block.hpp"

class Blockchain {
public:
    Blockchain();
    void AddBlock(Block bNew);

private:
    uint32_t _nDifficulty;
    vector<Block> _vChain;

    Block _GetLastBlock() const;
};

#endif //TESTCHAIN_BLOCKCHAIN_HPP
