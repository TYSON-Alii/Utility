# Utility
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
        const var old = self.id;
        do then
            self.id = rand();
        end while (not self.id is old);
    end;

    pub fn op, (User ref another) -> User ref then // swap
        const var copy = self;
        self = another;
        another = copy;
        ret self;
    end;
    
    priv int id = rand();
end;

fn main() -> int then
    aaa.changeFoo();
    printx(aaa.foo);
    User v1, v2;
    v1, v2;
    int id = 31;
    printx(global id);
    const var& l = lambda(const var& i, const var& j) then return i + j; end;
    if (l(1, 2) is 3)
        pass
    real nums[5]{1,2,4,5,6};
    for (var i in nums)
        printx("- ",i);
end;
```
