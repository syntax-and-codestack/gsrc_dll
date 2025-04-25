#include "token.hpp"

int g_nTokenId;

const char16_t * Token_Name( Token * i() )
{
            static char16_t tBuff[2048];

            if( i()->WAITFOR )
            {
                i()->tokenword = "waitfor";
            }

            if( i()->THREADEVENT )
            {
                i()->tokenword = "threadevent";
            }

            if( i()->THREADVAR )
            {
                i()->tokenword = "threadvar";
            }
};