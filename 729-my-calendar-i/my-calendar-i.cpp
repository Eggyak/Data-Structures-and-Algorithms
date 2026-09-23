#include <map>

class MyCalendar {
private:
    // Map stores the event as: key = startTime, value = endTime
    std::map<int, int> bookings;

public:
    MyCalendar() {
        // Initializes the calendar object
    }
    
    bool book(int startTime, int endTime) {
        // Find the first event that starts at or after the new event's startTime
        auto nextEvent = bookings.lower_bound(startTime);
        
        // 1. Check overlap with the NEXT event:
        // If there is a next event, its startTime must be >= endTime of the new event
        if (nextEvent != bookings.end() && nextEvent->first < endTime) {
            return false;
        }
        
        // 2. Check overlap with the PREVIOUS event:
        // If there is a previous event, its endTime must be <= startTime of the new event
        if (nextEvent != bookings.begin()) {
            auto prevEvent = std::prev(nextEvent);
            if (prevEvent->second > startTime) {
                return false;
            }
        }
        
        // If no overlap is found, insert the booking and return true
        bookings[startTime] = endTime;
        return true;
    }
};
