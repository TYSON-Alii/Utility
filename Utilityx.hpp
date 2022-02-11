#define rep(v, j)	for (decltype(v) i = 0; i < v; i += j)
#define Once(v)		for (static bool v = true; v; v = false)
#define pass {}
#define namestr(x) #x
#define newln std::cout<<'\n';
#define self (*this)
#define var auto&
//#define ref &
#define elif else if
#define lambda [&]
#define def auto;
#define fn auto;
#define clambda(fn_body,...) struct { auto operator()(__VA_ARGS__) {fn_body; }
namespace std {
	int		atoi(bool& v)		{ return v ? 1 : 0; };
	float	atof(bool& v)		{ return v ? 1.f : 0.f; };
	bool	atob(const char* v)	{ return (std::string(v) == "true" || std::string(v) == "1") ? true : false; };
	bool	atob(std::string v)	{ return (v == "true" || v == "1") ? true : false; };
};
void printx() { std::cout << '\n'; };
template <typename T, typename ...TAIL>
void printx(const T& v, TAIL... tail) {
	std::cout << v;
	printx(tail...);
};
static const char alphabet[26]{ 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
static const char ALPHABET[26]{ 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
