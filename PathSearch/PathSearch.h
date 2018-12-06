#pragma once
#include "../TileLibrary/Graph.h"
#include "../TileLibrary/TileMap.h"
#include <math.h>
#include <vector>


class PathSearch
{
//API Project submissions should adhere to the following public interface (no more, no less).
public:
    bool j_initialize;
    bool found_goal;

    PathSearch();
//The constructor should take no arguments.

    ~PathSearch();
//The destructor should perform any final cleanup required before deletion of the object.

private:
    std::vector<SearchNode*>j_openList;
    std::vector<SearchNode*>j_visitedList;
    std::vector<Tile*>j_getSolution;

    void initialize(TileMap* _tileMap, SearchNode* start, SearchNode *goal);
//Method will be called to initialize a search, before any update of the path search,
// and should prepare for a search to be performed between the vertices indicated.

    void update(long timeslice);
//Method will be called to allow the path search to execute for the specified allotted time (in milliseconds).
// Within this method the search should be performed until the time expires or the solution is found.
//If the update's allotted time is zero (0), this method should only do a single iteration of the algorithm.
// Otherwise the update should only iterate for the time slices number of milliseconds.

    void shutdown();
//Method will be called when the current search data is no longer needed.
//It should clean up any memory allocated for this search.
// Note that this is not exactly the same as the destructor,
// as the object may be reinitialized to perform another search.

    bool isDone() const;
//Method should return true if the update function has finished because it found a solution,
// otherwise it should return false.

    std::vector<Tile const*> const getSolution() const { return j_getSolution;}
//Method should return a vector containing the solution path as an ordered series of Tile pointers from finish to start.


};





