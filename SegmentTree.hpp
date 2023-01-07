class segtree
{
public:
    int n;
    vector<int> a, t;

    segtree(vector<int> _a)
    {
        n = _a.size();
        a = _a;
        t.resize(4 * n);
        build(1, 0, n - 1);
    }

private:
    void build(int v, int start, int end)
    {
        if (start == end)
        {
            t[v] = a[start];
            return;
        }

        int mid = (start + end) / 2;
        build(v * 2, start, mid);
        build(v * 2 + 1, mid + 1, end);

        // change the property here : default sum
        t[v] = t[v * 2] + t[v * 2 + 1];
    }

    int ops(int v, int start, int end, int l, int r)
    {
        if (l > r)
            return 0;
        if (l == start && r == end)
            return t[v];

        int mid = (start + end) / 2;

        // change the property here : default sum
        int result = ops(v * 2, start, mid, l, min(r, mid)) + ops(v * 2 + 1, mid + 1, end, max(l, mid + 1), r);

        return result;
    }

    void revise(int v, int start, int end, int pos, int new_val)
    {
        if (start == end)
        {
            t[v] = new_val;
            return;
        }

        int mid = (start + end) / 2;
        if (pos <= mid)
            revise(v * 2, start, mid, pos, new_val);
        else
            revise(v * 2 + 1, mid + 1, end, pos, new_val);

        // change the property here : default sum
        t[v] = t[v * 2] + t[v * 2 + 1];
    }

public:
    void update(int pos, int new_val)
    {
        revise(1, 0, n - 1, pos, new_val);
    }

    int query(int l, int r)
    {
        return ops(1, 0, n - 1, l, r);
    }
};