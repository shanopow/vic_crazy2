class Market{
    public:
    unordered_map<string, float> market_h;
    Market(){
    market_h["p_grain"] = 4;
    market_h["p_fruit"] = 1.8;
    market_h["p_fish"] = 4;
    market_h["p_cattle"] = 4;
    market_h["p_tea"] = 5;
    market_h["p_coffee"] = 9;
    market_h["p_clothes"] = 14;
    market_h["p_furniture"] = 17;
    market_h["p_liquor"] = 8;
    market_h["p_paper"] = 5.6;
    market_h["p_car"] = 20;
    market_h["p_fuel"] = 8;
    market_h["p_guns"] = 33;    
    }
};



class Government{
    public:
    
    Government(){

    }
};

string farmer_consumes [3][5][2] = { 
    { {"grain","2.5"},{"fish","1"},{"fruit","1"},{"cattle","0.75"},{"null","0"} },
    { {"tea","4"},{"liquor","3"},{"clothes","1.2"},{"furniture","1.1"},{"null","0"} },
    { {"furniture","3"},{"clothes","3"},{"liquor","1.5"},{"paper","1"},{"coffee","0.45"} } 
    };
string artisan_consumes [3][5][2] = { 
    { {"grain","2.5"},{"fish","1"},{"fruit","1"},{"cattle","0.75"},{"null","0"} },
    { {"tea","5"},{"liquor","5"},{"clothes","5"},{"furniture","4"},{"paper","5"} },
    { {"wine","10"},{"coffee","2"},{"cars","1"},{"fuel", "0.2"},{"null", "0"} } 
    };
string aristocrat_consumes [3][5][2] = { 
    { {"grain","2.5"},{"fish","1"},{"fruit","1"},{"cattle","0.75"},{"null","0"} },
    { {"coffee","20"},{"wine","20"},{"null","0"},{"null","0"},{"paper","20"} },
    { {"null","0"},{"guns","1"},{"cars","20"},{"fuel", "30"},{"null", "0"} } 
    };