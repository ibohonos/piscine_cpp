template<typename T>

typename T::iterator easyfind(T &arr, int i) throw(std::exception) {
	typename T::iterator it;

	it = std::find(std::begin(arr), std::end(arr), i);
	if (it == std::end(arr))
		throw (std::exception());
	return it;
}