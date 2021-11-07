#pragma once

#include <string>

#include "astnode.hpp"

class Variable : public ASTNode {
  public:
    explicit Variable(const std::string& var)
        : ASTNode(var) {}
};
