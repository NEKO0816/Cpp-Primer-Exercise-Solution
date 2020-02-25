inline double Sales_data::avg_price() const
{
    return units_sold? revenue/units_sold : 0;
}
