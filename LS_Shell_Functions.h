void type_prompt ()
{
    static int first_time = 1;
    if ( first_time )
    {
        const char* CLEAR_SCREEN_ANSI = "\033[H\033[J";
        write(STDOUT_FILENO, CLEAR_SCREEN_ANSI, 12);
        first_time = 0;
    }
    print("#");
}