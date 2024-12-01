#include "Spot.h"
#include "Region.h"
#include "City.h"
#include "Metropolis.h"

int main()
{
    std::string SpotType1 = "REGION";
    std::string SpotType2 = "CITY";
    std::string SpotType3 = "METROPOLIS";

    std::string value = "Moscow";

    Region REGION(SpotType1, value);

    value = "Zelenograd";

    City CITY(SpotType2, value);

    value = "Moscow";

    Metropolis METROPOLIS(SpotType3, value);

    std::cout << "List of spots: " << std::endl;
    Spot::Print();

    return 0;
}
