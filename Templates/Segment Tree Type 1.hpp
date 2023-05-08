class segmenttree
{
    vector<ll> tree, arr;
    int size;

    void build(vector<ll> &arr, int start, int end, int index)
    {
        if (start == end)
        {
            if (start < arr.size())
                tree[index] = arr[start];
            else
                tree[index] = 0;
            return;
        }

        int mid = (start + end) / 2;
        build(arr, start, mid, 2 * index + 1);
        build(arr, mid + 1, end, 2 * index + 2);
        tree[index] = tree[2 * index + 1] + tree[2 * index + 2];
    }

    void update(int start, int end, int index, int pos, ll val)
    {
        if (start == end)
        {
            tree[index] = val;
            return;
        }

        int mid = (start + end) / 2;
        if (pos <= mid)
            update(start, mid, 2 * index + 1, pos, val);
        else
            update(mid + 1, end, 2 * index + 2, pos, val);

        tree[index] = tree[2 * index + 1] + tree[2 * index + 2];
    }

    ll query(int start, int end, int index, int l, int r)
    {
        if (start > r || end < l)
            return 0;

        if (start >= l && end <= r)
            return tree[index];

        int mid = (start + end) / 2;
        ll left = query(start, mid, 2 * index + 1, l, r);
        ll right = query(mid + 1, end, 2 * index + 2, l, r);

        return left + right;
    }

public:
    segmenttree(vector<ll> a)
    {
        int n = a.size();
        size  = 1;
        while (size < n)
            size *= 2;
        this->arr = a;
        tree.resize(size * 2);
        build();
    }

    void build()
    {
        build(arr, 0, size - 1, 0);
        debug(tree);
    }

    void update(int pos, ll val)
    {
        update(0, size - 1, 0, pos, val);
    }

    ll query(int l, int r)
    {
        return query(0, size - 1, 0, l, r);
    }
};
