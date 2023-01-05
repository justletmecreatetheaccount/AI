//
// Created by vladd on 04/01/2023.
//

#ifndef AI_NODE_H
#define AI_NODE_H


class Node {
protected:
    unsigned int Number_Nodes = 0;

public:
    Node(unsigned int l = 0){
        Number_Nodes += 1;
        unsigned int Node_ID = Number_Nodes;
        unsigned int Layer = l;
    }

};


#endif //AI_NODE_H
