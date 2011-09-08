



int main(int argc, const char *argv[])
{
    char c, mask, result;

    mask = 1;

    result = c & mask;

    result = c & (mask << 2);

    return 0;
}
