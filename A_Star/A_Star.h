#ifndef A_STAR_H
#define A_STAR_H



#include <vector>
#include <unordered_map>

#include "PNode.h"
#include "Min_Heap_Map_Opt.h"
#include "PNode_Map.h"



class A_Star{
public:
    int Get_Shortest_Path(const vector<vector<int>>& array,int Max_Search_Time,bool Debug_Info_Switch);
    vector<vector<float>> Shortest_Path;
    void clear();

    int Shortest_Path_Long;
    int Count;  //Search Time

private:
    PNode_Map map;
    Min_Heap_Map_Opt<float,PNode> open_List;
    bool debug_info_switch;

    bool Input_Verify(const vector<vector<int>>& array);
    float H_Calculat(PNode *cur,PNode *end);
    int Search();
    float float_abs(float x);
};
#endif // A_STAR_H
