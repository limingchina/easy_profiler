/************************************************************************
* file name         : globals_qobjects.cpp
* ----------------- :
* creation time     : 2016/08/08
* copyright         : (c) 2016 Victor Zarubkin, Sergey Yagovtsev
* author            : Victor Zarubkin
* email             : v.s.zarubkin@gmail.com
* ----------------- :
* description       : The file contains implementation of EasyGlobalSignals QObject class.
* ----------------- :
* change log        : * 2016/08/08 Sergey Yagovtsev: moved sources from globals.cpp
*                   :
*                   : *
* ----------------- :
* license           : TODO: add license text
************************************************************************/

#include "globals_qobjects.h"

//////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////

namespace profiler_gui {

    EasyGlobalSignals::EasyGlobalSignals() : QObject()
    {
    }

    EasyGlobalSignals::~EasyGlobalSignals()
    {
    }

} // END of namespace profiler_gui.

//////////////////////////////////////////////////////////////////////////
