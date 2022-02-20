## Utility [C++ With Macros]
### Keywords
|   a - f  |   g - n   |  o - r |  s - z |
| -------- | --------- | ------ | ------ |
| boolean  | global    | once   | self   |
| clambda  | hash_sign | op     | self_t |
| comment  | in        | pass   | set    |
| copyof   | is        | priv   | str    |
| del      | lambda    | pub    | temp   |
| dict     | let       | printx | then   |
| dotspace | list      | ptr    | to     |
| echo     | namestr   | puts   | True   |
| elif     | newln     | randf  | typeof |
| end      | none      | real   | var    |
| fn       | null      | ref    | when   |
| func_ptr | new_v     | rep    |        |
| False    |           | ret    |        |
## Simple Code 
```cpp
int id = 0;
dotspace(aaa,
    pub bool foo = false;
    pub fn changeFoo() then
        foo = rand() % 2 == 0;
    end;
    priv int secret = 31;
    pub alias Int = int;
)
class User then
    pub User() = default;
    pub fn getId() -> int ref then
        ret self.id;
    end;

    pub fn changeID() then
        const let old = self.id;
        do then
            self.id = rand();
        end while (not self.id is old);
    end;

    pub fn op, (User ref another) -> User ref then // swap
        const let copy = self;
        self = another;
        another = copy;
        ret self;
    end;
    
    priv int id = rand();
end;

fn func() -> int then
    printx("hi..");
    ret 31;
end;

fn main() -> int then
    func_ptr<int> fptr = func; comment(selam meraba)
    fptr();
    dict<int> mydict;
    mydict.insert({ "tysob",5 });
    mydict.insert({ "aaaaaa",17 });
    mydict.insert({ "fdsfsf",16 });
    echo mydict["tysob"];
    aaa.changeFoo();
    puts aaa.foo;
    User v1, v2;
    v1, v2;
    int id = 31;
    printx(global id);
    const var l = lambda(const var i, const var j) then return i + j; end;
    if (l(1, 2) is 3)
        pass
    real nums[5]{1,2,4,5,6};
    for (let i in nums)
        printx("- ",i);
end;
```
