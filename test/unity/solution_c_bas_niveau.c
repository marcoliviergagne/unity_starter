
size_t strlen_p(const char* cs)
{
    size_t i = 0;
    while(cs[i++] != '\0');
    return i-1;
}


