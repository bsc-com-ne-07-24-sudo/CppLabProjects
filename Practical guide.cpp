// PRACTICAL GUIDE
ACCESSOR METHODS
private:
int name;
string model;
public:
 int getName() // Accessor(getter) for name
 {
    return name;
 }
 string getModel()
 {
    return type;
 }

 // bool operator
 bool operator==(const Ingredient& other);