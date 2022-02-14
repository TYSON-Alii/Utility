# Utility
```cpp
int id = 0;
class Class then
    pub fn getId() -> int ref then
        ret self.id;
    end;

    pub fn changeID() then
        const int old = self.id;
        do then
            self.id = rand();
        end while (not self.id is old);
    end;
    
    priv int id = rand();
end;

fn main() -> int then
    int id = 31;
    printx(global id);
    const var l = lambda(const var i, const var j) then return i + j; end;
    if (l(1, 2) is 3)
        pass
    real nums[5]{1,2,4,5,6};
    for (var i in nums)
        printx("- ",i);
end;
```
