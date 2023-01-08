//
// Created by vladd on 04/01/2023.
//

#include "Node.h"

//variables #####################

int Node::Node_Number = 0;

//functions #####################

//Status functions
int Node::Get_Node_ID() {
    return Node_ID;
}

int Node::Get_Node_Number() {
    return Node_Number;
}

int Node::Get_Layer() {
    return Layer;
}

double Node::Get_Strength() {
    return Strength;
}

bool Node::Is_Loop() {
    return Loop_Tag;
}

//utility functions

