#pragma once

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
    }
    
}