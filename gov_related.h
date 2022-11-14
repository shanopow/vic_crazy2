class Goverment{
    public:
    float treasury;
    // sliders
    float edu_spend;
    float admin_spend;
    float mil_spend;
    Government(float treasury, float edu_spend, float admin_spend, float mil_spend){
        treasury = treasury;
        edu_spend = edu_spend;
        admin_spend = admin_spend;
        mil_spend = mil_spend;
    }
};