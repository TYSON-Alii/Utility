# Utility
```cpp
using namespace std;

class Class then
    pub fn getId() -> int ref then
        return self.id;
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
    const var l = lambda(const var i, const var j) then return i + j; end;
    if (l(1,2) == 3)
        pass
end;
```
