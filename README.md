## Utility [C++ With Macros]
### Keywords
|   a - e  |   f - l   |  n - p  |  p - s |  t - z |
| -------- | --------- | ------- | ------ | ------ |
| alias    | fn        | namestr | ptr    | temp   |
| boolean  | func_ptr  | newln   | puts   | then   |
| clambda  | False     | none    | randf  | to     |
| comment  | global    | null    | real   | True   |
| copyof   | hash_sign | new_v   | ref    | typeof |
| del      | if_else   | once    | rep    | var    |
| dict     | in        | Once    | ret    | when   |
| dotspace | integer   | op      | self   | $      |
| echo     | is        | pass    | self_t |  |
| elif     | lambda    | priv    | set    |  |
| end      | let       | pub     | str    |  |
|          | list      | print   | sto    |  |
## Simple Code 
```cpp
int id = 0;
dotspace(aaa,
    pub bool foo = false;
    pub fn changeFoo() then
        foo = rand() % 2 == 0;
    end;
    priv int secret = 31;
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
    print("hi..");
    ret 31;
end;

fn main() -> int then
    rep(i,10u,1)
        Once(echo "hello\n")
    func_ptr<int> fptr = func; $ selam meraba
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
    print(global id);
    const var l = lambda(const var i, const var j) then return i + j; end;
    if (l(1, 2) is 3)
        pass
    real nums[5]{1,2,4,5,6};
    for (let i in nums)
        print("- ",i);
end;
```
