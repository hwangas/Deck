template< typename T >
class Enum
{
public:
	class Iterator
	{
	public:
		Iterator(int value) : m_value(value) {}

		T operator*(void) const {
			return (T) m_value;
		}

		void operator++(void) {
			++m_value;
		}

		bool operator!=(Iterator rhs) {
			return m_value != rhs.m_value;
		}

		bool operator==(Iterator rhs) {
			return m_value == rhs.m_value;
		}

	private:
		int m_value;
	};

};

template< typename T >
typename Enum<T>::Iterator begin(Enum<T>)
{
	return typename Enum<T>::Iterator((int)T::FIRST);
}

template< typename T >
typename Enum<T>::Iterator end(Enum<T>)
{
	return typename Enum<T>::Iterator(((int)T::LAST) + 1);
}