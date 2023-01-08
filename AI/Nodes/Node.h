//
// Created by vladd on 04/01/2023.
//
#include <string>
#include <iostream>

#ifndef AI_NODE_H
#define AI_NODE_H


class Node {
private:

    static int Node_Number;
    int Node_ID;
    int Layer;
    double Strength;
    bool Loop_Tag = 0.5;

public:

    Node(int l = 0, bool t = false){
        Node_Number++;
        Node_ID = Node_Number;
        Layer = l;
        Loop_Tag = t;
    }

    int Get_Node_ID();
    int Get_Node_Number();
    int Get_Layer();
    double Get_Strength();
    bool Is_Loop();
};

#endif //AI_NODE_H
