#pragma once

<<<<<<< HEAD
using ushort = unsigned short;
namespace university {

    class Date {
        public:
         //Date(ushort day, ushort mouth, uhsort year);
         void print_date() const;

        private:
         ushort day_;
         ushort mouth_;
         ushort year_;

         bool is_valid_date(ushort day, ushort mouth, ushort year)
                const;
         int get_days_in_mouth(ushort mouth, ushort year) const;
         static bool is_leap_year(ushort year);
         void get_attribute_offsets() const;
    };

}
=======
#include <string>
#include<iostream>

namespace university {
using ushort = unsigned short;

class Date {
   public:
    Date() {
        day_ = 0;
        month_ = 0;
        year_ = 0;
    }

    Date(ushort day, ushort month, ushort year){
        if (!is_valid_date(day, month, year))
        {
            std::cout << "The arguments passed are not valid" << '\n';
            return;
        }
           day_ = day;
           month_ = month;
           year_ = year;
    }
    // Date(ushort day, ushort month, ushort year);
    /**
     * @brief
     *
     */
    void print_date() const;

    /**
     * @brief Get the attribute offsets object
     *
     */
    void get_attribute_offsets() const;

    // Accessors
    ushort get_day() const { return day_; }
    ushort get_month() const { return month_; }
    ushort get_year() const { return year_; }

    // Mutators
    // void set_day(ushort day) { day_ = day; }

   private:
    ushort day_;
    ushort month_;
    ushort year_ = 2024;

    bool is_valid_date(ushort day, ushort month, ushort year) const;
    ushort get_days_in_month(ushort month, ushort year) const;
    static bool is_leap_year(ushort year);

};  // class Date
}  // namespace university
>>>>>>> be7e9f955c27e83c157edf8fe89bcf541edc45e5
