#include <string.h>
#include "proboard.hpp"

void
version_info(char *)
{
     LOG(2,"Version info requested");

     io << "\f\n\7"
     " ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n"
     " ³ ProBoard version " VERSION;

     for(int i=0;i<54-strlen(VERSION);i++) io << ' ';
     io << "³\n"
     //io << "\1(c) 1990-1996 Philippe Leybaert \7³\n"
               " ³                                                                        ³\n";
     io << "\7 ³ Copyright (c) 1990-1999  TeleGrafix Communications, Inc.               ³\n";
     io << "\7 ³ All Rights Reserved                                                    ³\n";
     io << "\7 ³ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ³\n"
          "\7 ³                                                                        ³\n";


     //----------------------------  
     // JDR: REGISTRATION REFERENCE
     //----------------------------  

     if(registered)
     {
          io << "\7 ³ \7Registered to:\6 " << form("%-36s",regis.sysopName) << "\7                    ³\n"
               "\7 ³                \6" <<   form("%-36s",regis.bbsName) << "\7                    ³\n"
               "\7 ³                                                                        ³\n";
     }
     else io << " ³ \6UNREGISTERED EVALUATION VERSION                                        ³\n"
          "\7 ³                                                                        ³\n";


     if(regis.beta || regis.distSite)
     io << "\7 ³ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ³\n"
          "\7 ³                                                                        ³\n";


     if(regis.beta)
     {
     io << "\7 ³\x12 Official ProBoard beta-site\7  ÄÄÄÄÄÄÄ  Compiled: \6" __DATE__ " , " __TIME__ " \7³\n"
          "\7 ³                                                                        ³\n";
     }

     if(regis.distSite)
     {
     io << "\7 ³\2 Official ProBoard Distribution Site                                    \7³\n"
          "\7 ³                                                                        ³\n";
     }

     io << "\7 ³ÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ³\n";

     io <<   " ³ JAM(mbp) - Copyright 1993 Joaquim Homrighausen, Andrew Milner,         ³\n"
          " ³                           Mats Birch, Mats Wallin.                     ³\n"
          " ³                           ALL RIGHTS RESERVED.                         ³\n";
     io << "\7 ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n\n  "
     << S_PRESS_ENTER_TO_CONTINUE;
}

