#ifndef TOKEN_HPP
#define TOKEN_HPP

class Token{
    public:
        Token();
        ~Token();

        const char * tokenword;

        enum token
        {
            WAITFOR,
            THREADEVENT,
            THREADVAR
        }
}

#endif