#include <string>

class Date{
    static void calculateDifference();
    static bool isValidDate(std::string);

    public:
        Date(std::string);
        Date(int, int, int);
        std::string toString() const;

    private:
        int year;
        int month;
        int day;
};