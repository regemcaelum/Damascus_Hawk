#ifndef STATS_H_
#define STATS_H_

#include <string>
#include <unordered_map>

#define MAX_STAT 5

using namespace std;

/*!
    \brief A class to be the base for stats in system.

    This class operates as a base class for all of the classes that use stats
    points, i.e. skills and attributes. Contains primary functions to operate on
    stats.
*/
class Stats {
    protected:
        /*!
            \brief The priority level that is set by the player 1, 2, or 3
        */
        short priority;

        /*!
            \brief The amount of points as determined by the level of priority.
        */
        short points;

        /*!
            \brief The amount of points spent in a stat group.
        */
        short spentPoints = 0;

        /*!
            \brief The minimum amount of points that can be in a stat.
        */
        short pointMin = 1;


    public:
        /*!
            \brief A hash map to handle create a list of stat groups
        */
        unordered_map<string, short> stats;

        /*!
            \brief A hash map to manage priority levels
        */
        unordered_map<short, short> pointValues = {
            {1, 5},
            {2, 4},
            {3, 3}
        };

        /*!
            \brief Sets the priority level

            \param[in] level The level to assign to the stat group.
        */
        void setPriority(short level);

        /*!
            \brief Determines the pionts for the stat group.
        */
        void determinePoints();

        /*!
            \brief Increases the amount of points in a specific stat.

            \param[in] stat The stat to increase.
        */
        void increment(string stat);

        /*!
            \brief Decreases the amount of points in a specific stat.

            \param[in] stat The stat to decrease.
        */
        void decrement(string stat);
};

#endif