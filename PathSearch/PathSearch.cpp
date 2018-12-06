#include <cstdio>

#include "PathSearch.h"



//API Project submissions should adhere to the following public interface (no more, no less).

    PathSearch::PathSearch()
    {
        j_initialize = false;
        found_goal = false;
    }
//The constructor should take no arguments.

    PathSearch::~PathSearch(){}
//The destructor should perform any final cleanup required before deletion of the object.

    void PathSearch::initialize(TileMap* _tileMap, SearchNode* start, SearchNode *goal)
//Method will be called to initialize a search, before any update of the path search,
// and should prepare for a search to be performed between the vertices indicated.
{

}


    void PathSearch::update(long timeslice){}
//Method will be called to allow the path search to execute for the specified allotted time (in milliseconds).
// Within this method the search should be performed until the time expires or the solution is found.
//If the update's allotted time is zero (0), this method should only do a single iteration of the algorithm.
// Otherwise the update should only iterate for the time slices number of milliseconds.

    void PathSearch::shutdown(){}
//Method will be called when the current search data is no longer needed.
//It should clean up any memory allocated for this search.
// Note that this is not exactly the same as the destructor,
// as the object may be reinitialized to perform another search.

    bool PathSearch::isDone() const{}
//Method should return true if the update function has finished because it found a solution,
// otherwise it should return false.

//    std::vector<Tile const*> const j_getSolution() const {}
//Method should return a vector containing the solution path as an ordered series of Tile pointers from finish to start.



