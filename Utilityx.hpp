#include <iostream>
#include <utility>
#include <vector>
#include <map>
#include <unordered_map>
#include <memory>
#define hash_sign #
#define rep(v, j) for (decltype(v) i = 0; i < v; i += j)
#define once(v)   for (static boolean v = True; v; v = False)
#define pass {}
#define namestr(x) #x
#define newln std::cout<<'\n';
#define self (*this)
#define var auto
#define ref &
#define elif else if
#define lambda [&]
#define fn auto
#define pub public:
#define priv private:
#define then {
#define end }
#define is ==
#define in :
#define global ::
#define set =
#define ret return
#define to ->
#define none NULL
#define None NULL
#define new_ptr(v) (new decltype(v)(v))
#define alias using
#define del delete
#define op operator
#define True true
#define False false
#define randf ((float)std::rand()/(float)RAND_MAX)
#define clambda(fn_body,...) struct { auto operator()(__VA_ARGS__){fn_body;}}
#define dotspace(_name,body) struct { body } _name;
//#define def(func_name,...) hash_sign define func_name(__VA_ARGS__)
alias real = float;
alias boolean = bool;
alias str = std::string;
template <typename T> alias dict = std::unordered_map<str, T>;
template <typename T> alias list = std::pmr::vector<T>;
template <typename Return_t> alias func_ptr = Return_t(*)();
//template <typename Return_t, typename ...Args> alias func_ptr = Return_t(*)(Args...);
typedef void* ptr;
namespace std {
	inline int  atoi(boolean& v) then ret v ? 1 : 0; end;
	inline real atof(boolean& v) then ret v ? 1.f : 0.f; end;
	inline boolean atob(const str& v) then ret (v == "1" or v == "true" or v == "True") ? True : False; end;
};
fn printx() then std::cout << '\n'; end;
template <typename T, typename ...TAIL>
fn printx(const T& v, TAIL... tail) then
	std::cout << v;
	printx(tail...);
end;
static const char alphabet[26]{ 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
static const char ALPHABET[26]{ 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
