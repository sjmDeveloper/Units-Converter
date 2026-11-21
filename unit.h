#include <QMap>
#include <QString> 
//that for clean code for edit type of integer
using number =  double;
//that {typeOfUnit ex:mass {typeOfUnit ex:"g", value like for 1g->1000mg is 1SI/Smallest }}
inline QMap<QString,QMap<QString,number>>  Units = 
{
    {"Mass",{{"mg",1},{"cg",10},{"dg",100},{"g",1000},{"dag",10000},{"hg",100000},{"kg",1000000},{"Q",100000000},{"T",1000000000}}},
    {"Length",{{"mm",1},{"cm",10},{"dm",100},{"m",1000},{"dam",10000},{"hm",100000},{"km",1000000}}},
    {"Volume",{{"ml",1},{"cl",10},{"dl",100},{"l",1000},{"dal",10000},{"hl",100000}}}
};