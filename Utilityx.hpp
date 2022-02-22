#include <iostream>
#include <utility>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <memory>
#define hash_sign #
#define rep(i, count, num) for (decltype(count) i = 0; i < count; i += num)
#define once(v)   for (static boolean v = True; v; v = False)
#define Once(body) {static const auto& Once = []() { body; return nullptr; }(); }
#define pass {}
#define namestr(x) #x
#define newln std::cout<<'\n';
#define self (*this)
#define var auto&
#define let auto
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
#define typeof decltype
#define null NULL
#define none NULL
#define None NULL
#define new_v(v) (new typeof(v)(v))
#define copyof(v) (*(new_v(v)))
#define self_t typeof(self)
#define echo std::cout<<
#define puts std::cout<<
#define if_else(condition,if,else) ((condition)?(if):(else))
#define when switch
#define alias using
#define del delete
#define op operator
#define True true
#define False false
#define temp template
#define comment(v) /##*comment*/
#define $ /##/
#define randf ((float)std::rand()/(float)RAND_MAX)
#define clambda(fn_body,...) struct { fn operator()(__VA_ARGS__){fn_body;}}
#define dotspace(_name,body) struct { body } _name;
//#define def(func_name,...) hash_sign define func_name(__VA_ARGS__)
alias real = float;
alias boolean = bool;
alias str = std::string;
alias integer = int;
temp <typename T> alias dict = std::unordered_map<str, T>;
temp <typename T> alias list = std::pmr::vector<T>;
temp <typename Return_t, typename ...Args> alias func_ptr = Return_t(*)(Args...);
typedef void* ptr;
namespace std then
	inline int  atoi(boolean ref v) then ret v ? 1 : 0; end;
	inline real atof(boolean ref v) then ret v ? 1.f : 0.f; end;
	inline boolean atob(const str ref v) then ret (v is "1" or v is "true" or v is "True") ? True : False; end;
end;
temp <typename ...Args_t>
inline fn print(Args_t&&... args) then
	(std::cout << ... << args) << '\n';
end;
static const char alphabet[26]{ 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
static const char ALPHABET[26]{ 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };

temp <typename T> T sto(const std::string&);
temp <> inline int sto<int>(const std::string& _str) { return std::stoi(_str); };
temp <> inline real sto<real>(const std::string& _str) { return std::stof(_str); };
temp <> inline double sto<double>(const std::string& _str) { return std::stod(_str); };
temp <> inline long double sto<long double>(const std::string& _str) { return std::stold(_str); };
temp <> inline size_t sto<size_t>(const std::string& _str) { return (size_t)std::stoi(_str); };
temp <> inline long sto<long>(const std::string& _str) { return std::stol(_str); };
temp <> inline long long sto<long long>(const std::string& _str) { return std::stoll(_str); };
temp <> inline unsigned long long sto<unsigned long long>(const std::string& _str) { return std::stoull(_str); };
temp <> inline unsigned long long sto<unsigned long long>(const std::string& _str) { return std::stoull(_str); };
