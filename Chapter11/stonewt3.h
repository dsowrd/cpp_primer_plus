#ifndef STONEWT3_H_
#define STONEWT3_H_
#include <iostream>

class Stonewt {
private:
	enum { Lbs_per_stn = 14 };
	int stone;
	double pds_left;
	double pounds;
public:
	Stonewt(double lbs);
	Stonewt(int stn, double lbs);
	Stonewt();
	~Stonewt();
	void show_lbs() const;
	void show_stn() const;
	bool operator>(const Stonewt & st) const { return pounds > st.pounds; }
	bool operator>=(const Stonewt & st) const { return pounds >= st.pounds; }
	bool operator<=(const Stonewt & st) const { return pounds <= st.pounds; }
	bool operator<(const Stonewt & st) const { return pounds < st.pounds; }
	bool operator==(const Stonewt & st) const { return pounds == st.pounds; }
	bool operator!=(const Stonewt & st) const { return pounds != st.pounds; }
};
#endif // !STONEWT3_H_