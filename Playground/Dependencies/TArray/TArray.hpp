#include <ranges>

template<typename T, size_t size = 0>
class TArray
{
	/** Container **/
	std::vector<T> v = std::vector<T>(size);

public:
	/** Constructor **/
	TArray()
		: v(std::vector<T>())
	{
	}
	TArray(const size_t& size)
		: v(std::vector<T>(size))
	{
	}
	TArray(const size_t& size, const T& value)
		: v(std::vector<T>(size, value))
	{
		std::ranges::fill(v, value);
	}

	/** Get raw data **/
	std::vector<T>& Get() { return v; }

	/** For reserve capacity **/
	void Reserve(const size_t& size) { v.reserve(size); }

	/** Add **/
	void Add(const T& element) { v.push_back(element); }

	/** Return true if contain element **/
	bool Contain(const T& element) { return std::ranges::find(v, element) != v.end(); }

	/** Return size of vector **/
	size_t Num() const { return v.size(); }

	/** Return idx-th element **/
	T& operator [](const int& idx) { return v[idx]; }
};