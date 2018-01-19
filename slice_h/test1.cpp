// **********************************************************************
//
// Copyright (c) 2003-2008 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.0
// Generated from file `test1.ice'

#include <test1.h>
#include <Ice/LocalException.h>
#include <Ice/ObjectFactory.h>
#include <Ice/BasicStream.h>
#include <IceUtil/Iterator.h>
#include <IceUtil/ScopedArray.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 303
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 > 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 0
#       error Ice patch level mismatch!
#   endif
#endif

static const ::std::string __mod__showtime__format_name = "format";

static const ::std::string __mod__Printer1__print_name = "print";

static const ::std::string __mod__Printer1__theInt_name = "theInt";

static const ::std::string __mod__Printer1__getString_name = "getString";

static const ::std::string __mod__Printer1__getdates_name = "getdates";

static const ::std::string __mod__Printer1__getshow_name = "getshow";

::Ice::Object* IceInternal::upCast(::mod::datetime* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::mod::datetime* p) { return p; }

::Ice::Object* IceInternal::upCast(::mod::showtime* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::mod::showtime* p) { return p; }

::Ice::Object* IceInternal::upCast(::mod::Printer1* p) { return p; }
::IceProxy::Ice::Object* IceInternal::upCast(::IceProxy::mod::Printer1* p) { return p; }

void
mod::__read(::IceInternal::BasicStream* __is, ::mod::datetimePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::mod::datetime;
        v->__copyFrom(proxy);
    }
}

void
mod::__read(::IceInternal::BasicStream* __is, ::mod::showtimePrx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::mod::showtime;
        v->__copyFrom(proxy);
    }
}

void
mod::__read(::IceInternal::BasicStream* __is, ::mod::Printer1Prx& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::mod::Printer1;
        v->__copyFrom(proxy);
    }
}

bool
mod::AMI_Printer1_print::__invoke(const ::mod::Printer1Prx& __prx, const ::std::string& s, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly("print");
        __prepare(__prx, __mod__Printer1__print_name, ::Ice::Normal, __ctx);
        __os->write(s);
        __os->endWriteEncaps();
        return __send();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __releaseCallback(__ex);
        return false;
    }
}

void
mod::AMI_Printer1_print::__response(bool __ok)
{
    ::Ice::Int __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
            return;
        }
        __is->startReadEncaps();
        __is->read(__ret);
        __is->endReadEncaps();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __finished(__ex);
        return;
    }
    ice_response(__ret);
    __releaseCallback();
}

bool
mod::AMI_Printer1_getString::__invoke(const ::mod::Printer1Prx& __prx, const ::std::string& s, const ::Ice::Context* __ctx)
{
    __acquireCallback(__prx);
    try
    {
        __prx->__checkTwowayOnly("getString");
        __prepare(__prx, __mod__Printer1__getString_name, ::Ice::Normal, __ctx);
        __os->write(s);
        __os->endWriteEncaps();
        return __send();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __releaseCallback(__ex);
        return false;
    }
}

void
mod::AMI_Printer1_getString::__response(bool __ok)
{
    ::Ice::Int __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
            return;
        }
        __is->startReadEncaps();
        __is->read(__ret);
        __is->endReadEncaps();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __finished(__ex);
        return;
    }
    ice_response(__ret);
    __releaseCallback();
}

IceAsync::mod::AMD_Printer1_theInt::AMD_Printer1_theInt(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::mod::AMD_Printer1_theInt::ice_response(::Ice::Int __ret)
{
    if(__validateResponse(true))
    {
        try
        {
            ::IceInternal::BasicStream* __os = this->__os();
            __os->write(__ret);
        }
        catch(const ::Ice::Exception& __ex)
        {
            __exception(__ex);
            return;
        }
        __response(true);
    }
}

void
IceAsync::mod::AMD_Printer1_theInt::ice_exception(const ::std::exception& ex)
{
    if(__validateException(ex))
    {
        __exception(ex);
    }
}

void
IceAsync::mod::AMD_Printer1_theInt::ice_exception()
{
    if(__validateException())
    {
        __exception();
    }
}

IceAsync::mod::AMD_Printer1_getString::AMD_Printer1_getString(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::mod::AMD_Printer1_getString::ice_response(::Ice::Int __ret)
{
    if(__validateResponse(true))
    {
        try
        {
            ::IceInternal::BasicStream* __os = this->__os();
            __os->write(__ret);
        }
        catch(const ::Ice::Exception& __ex)
        {
            __exception(__ex);
            return;
        }
        __response(true);
    }
}

void
IceAsync::mod::AMD_Printer1_getString::ice_exception(const ::std::exception& ex)
{
    if(__validateException(ex))
    {
        __exception(ex);
    }
}

void
IceAsync::mod::AMD_Printer1_getString::ice_exception()
{
    if(__validateException())
    {
        __exception();
    }
}

const ::std::string&
IceProxy::mod::datetime::ice_staticId()
{
    return ::mod::datetime::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::mod::datetime::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::mod::datetime);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::mod::datetime::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::mod::datetime);
}

::IceProxy::Ice::Object*
IceProxy::mod::datetime::__newInstance() const
{
    return new datetime;
}

::std::string
IceProxy::mod::showtime::format(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__mod__showtime__format_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::mod::showtime* __del = dynamic_cast< ::IceDelegate::mod::showtime*>(__delBase.get());
            return __del->format(__ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

const ::std::string&
IceProxy::mod::showtime::ice_staticId()
{
    return ::mod::showtime::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::mod::showtime::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::mod::showtime);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::mod::showtime::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::mod::showtime);
}

::IceProxy::Ice::Object*
IceProxy::mod::showtime::__newInstance() const
{
    return new showtime;
}

::Ice::Int
IceProxy::mod::Printer1::print(const ::std::string& s, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__mod__Printer1__print_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::mod::Printer1* __del = dynamic_cast< ::IceDelegate::mod::Printer1*>(__delBase.get());
            return __del->print(s, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

bool
IceProxy::mod::Printer1::print_async(const ::mod::AMI_Printer1_printPtr& __cb, const ::std::string& s)
{
    return __cb->__invoke(this, s, 0);
}

bool
IceProxy::mod::Printer1::print_async(const ::mod::AMI_Printer1_printPtr& __cb, const ::std::string& s, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, s, &__ctx);
}

::Ice::Int
IceProxy::mod::Printer1::theInt(::Ice::Int n, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__mod__Printer1__theInt_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::mod::Printer1* __del = dynamic_cast< ::IceDelegate::mod::Printer1*>(__delBase.get());
            return __del->theInt(n, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::Ice::Int
IceProxy::mod::Printer1::getString(const ::std::string& s, const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__mod__Printer1__getString_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::mod::Printer1* __del = dynamic_cast< ::IceDelegate::mod::Printer1*>(__delBase.get());
            return __del->getString(s, __ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

bool
IceProxy::mod::Printer1::getString_async(const ::mod::AMI_Printer1_getStringPtr& __cb, const ::std::string& s)
{
    return __cb->__invoke(this, s, 0);
}

bool
IceProxy::mod::Printer1::getString_async(const ::mod::AMI_Printer1_getStringPtr& __cb, const ::std::string& s, const ::Ice::Context& __ctx)
{
    return __cb->__invoke(this, s, &__ctx);
}

::mod::datetimePtr
IceProxy::mod::Printer1::getdates(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__mod__Printer1__getdates_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::mod::Printer1* __del = dynamic_cast< ::IceDelegate::mod::Printer1*>(__delBase.get());
            return __del->getdates(__ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

::mod::showtimePtr
IceProxy::mod::Printer1::getshow(const ::Ice::Context* __ctx)
{
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__mod__Printer1__getshow_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::mod::Printer1* __del = dynamic_cast< ::IceDelegate::mod::Printer1*>(__delBase.get());
            return __del->getshow(__ctx);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, 0);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, 0, __cnt);
        }
    }
}

const ::std::string&
IceProxy::mod::Printer1::ice_staticId()
{
    return ::mod::Printer1::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::mod::Printer1::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::mod::Printer1);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::mod::Printer1::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::mod::Printer1);
}

::IceProxy::Ice::Object*
IceProxy::mod::Printer1::__newInstance() const
{
    return new Printer1;
}

::std::string
IceDelegateM::mod::showtime::format(const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __mod__showtime__format_name, ::Ice::Normal, __context);
    bool __ok = __og.invoke();
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::std::string __ret;
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        __is->read(__ret);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::mod::Printer1::print(const ::std::string& s, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __mod__Printer1__print_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(s);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::Ice::Int __ret;
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        __is->read(__ret);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::mod::Printer1::theInt(::Ice::Int n, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __mod__Printer1__theInt_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(n);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::Ice::Int __ret;
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        __is->read(__ret);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateM::mod::Printer1::getString(const ::std::string& s, const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __mod__Printer1__getString_name, ::Ice::Normal, __context);
    try
    {
        ::IceInternal::BasicStream* __os = __og.os();
        __os->write(s);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::Ice::Int __ret;
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        __is->read(__ret);
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::mod::datetimePtr
IceDelegateM::mod::Printer1::getdates(const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __mod__Printer1__getdates_name, ::Ice::Normal, __context);
    bool __ok = __og.invoke();
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::mod::datetimePtr __ret;
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        __is->read(::mod::__patch__datetimePtr, &__ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::mod::showtimePtr
IceDelegateM::mod::Printer1::getshow(const ::Ice::Context* __context)
{
    ::IceInternal::Outgoing __og(__handler.get(), __mod__Printer1__getshow_name, ::Ice::Normal, __context);
    bool __ok = __og.invoke();
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::mod::showtimePtr __ret;
        ::IceInternal::BasicStream* __is = __og.is();
        __is->startReadEncaps();
        __is->read(::mod::__patch__showtimePtr, &__ret);
        __is->readPendingObjects();
        __is->endReadEncaps();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::std::string
IceDelegateD::mod::showtime::format(const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::std::string& __result, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::mod::showtime* servant = dynamic_cast< ::mod::showtime*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->format(_current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::std::string& _result;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __mod__showtime__format_name, ::Ice::Normal, __context);
    ::std::string __result;
    try
    {
        _DirectI __direct(__result, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::Ice::Int
IceDelegateD::mod::Printer1::print(const ::std::string& s, const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int& __result, const ::std::string& s, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_s(s)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::mod::Printer1* servant = dynamic_cast< ::mod::Printer1*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->print(_m_s, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int& _result;
        const ::std::string& _m_s;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __mod__Printer1__print_name, ::Ice::Normal, __context);
    ::Ice::Int __result;
    try
    {
        _DirectI __direct(__result, s, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::Ice::Int
IceDelegateD::mod::Printer1::theInt(::Ice::Int, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::Ice::Int
IceDelegateD::mod::Printer1::getString(const ::std::string&, const ::Ice::Context*)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Int(); // to avoid a warning with some compilers;
}

::mod::datetimePtr
IceDelegateD::mod::Printer1::getdates(const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::mod::datetimePtr& __result, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::mod::Printer1* servant = dynamic_cast< ::mod::Printer1*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getdates(_current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::mod::datetimePtr& _result;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __mod__Printer1__getdates_name, ::Ice::Normal, __context);
    ::mod::datetimePtr __result;
    try
    {
        _DirectI __direct(__result, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::mod::showtimePtr
IceDelegateD::mod::Printer1::getshow(const ::Ice::Context* __context)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::mod::showtimePtr& __result, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::mod::Printer1* servant = dynamic_cast< ::mod::Printer1*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getshow(_current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::mod::showtimePtr& _result;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __mod__Printer1__getshow_name, ::Ice::Normal, __context);
    ::mod::showtimePtr __result;
    try
    {
        _DirectI __direct(__result, __current);
        try
        {
            __direct.servant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

mod::datetime::datetime(::Ice::Int __ice_hours, ::Ice::Int __ice_mins) :
    hours(__ice_hours),
    mins(__ice_mins)
{
}

::Ice::ObjectPtr
mod::datetime::ice_clone() const
{
    ::mod::datetimePtr __p = new ::mod::datetime(*this);
    return __p;
}

static const ::std::string __mod__datetime_ids[2] =
{
    "::Ice::Object",
    "::mod::datetime"
};

bool
mod::datetime::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__mod__datetime_ids, __mod__datetime_ids + 2, _s);
}

::std::vector< ::std::string>
mod::datetime::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__mod__datetime_ids[0], &__mod__datetime_ids[2]);
}

const ::std::string&
mod::datetime::ice_id(const ::Ice::Current&) const
{
    return __mod__datetime_ids[1];
}

const ::std::string&
mod::datetime::ice_staticId()
{
    return __mod__datetime_ids[1];
}

void
mod::datetime::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(hours);
    __os->write(mins);
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__write(__os);
#else
    ::Ice::Object::__write(__os);
#endif
}

void
mod::datetime::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(hours);
    __is->read(mins);
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__read(__is, true);
#else
    ::Ice::Object::__read(__is, true);
#endif
}

void
mod::datetime::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type mod::datetime was not generated with stream support";
    throw ex;
}

void
mod::datetime::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type mod::datetime was not generated with stream support";
    throw ex;
}

class __F__mod__datetime : public ::Ice::ObjectFactory
{
public:

    virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
    {
        assert(type == ::mod::datetime::ice_staticId());
        return new ::mod::datetime;
    }

    virtual void
    destroy()
    {
    }
};

static ::Ice::ObjectFactoryPtr __F__mod__datetime_Ptr = new __F__mod__datetime;

const ::Ice::ObjectFactoryPtr&
mod::datetime::ice_factory()
{
    return __F__mod__datetime_Ptr;
}

class __F__mod__datetime__Init
{
public:

    __F__mod__datetime__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::mod::datetime::ice_staticId(), ::mod::datetime::ice_factory());
    }

    ~__F__mod__datetime__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::mod::datetime::ice_staticId());
    }
};

static __F__mod__datetime__Init __F__mod__datetime__i;

#ifdef __APPLE__
extern "C" { void __F__mod__datetime__initializer() {} }
#endif

void 
mod::__patch__datetimePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::mod::datetimePtr* p = static_cast< ::mod::datetimePtr*>(__addr);
    assert(p);
    *p = ::mod::datetimePtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::mod::datetime::ice_staticId(), v->ice_id());
    }
}

bool
mod::operator==(const ::mod::datetime& l, const ::mod::datetime& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
mod::operator<(const ::mod::datetime& l, const ::mod::datetime& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

mod::showtime::showtime(::Ice::Int __ice_h, ::Ice::Int __ice_m) :
    h(__ice_h),
    m(__ice_m)
{
}

::Ice::ObjectPtr
mod::showtime::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __mod__showtime_ids[2] =
{
    "::Ice::Object",
    "::mod::showtime"
};

bool
mod::showtime::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__mod__showtime_ids, __mod__showtime_ids + 2, _s);
}

::std::vector< ::std::string>
mod::showtime::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__mod__showtime_ids[0], &__mod__showtime_ids[2]);
}

const ::std::string&
mod::showtime::ice_id(const ::Ice::Current&) const
{
    return __mod__showtime_ids[1];
}

const ::std::string&
mod::showtime::ice_staticId()
{
    return __mod__showtime_ids[1];
}

::Ice::DispatchStatus
mod::showtime::___format(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    __inS.is()->skipEmptyEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::std::string __ret = format(__current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}

static ::std::string __mod__showtime_all[] =
{
    "format",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

::Ice::DispatchStatus
mod::showtime::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__mod__showtime_all, __mod__showtime_all + 5, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __mod__showtime_all)
    {
        case 0:
        {
            return ___format(in, current);
        }
        case 1:
        {
            return ___ice_id(in, current);
        }
        case 2:
        {
            return ___ice_ids(in, current);
        }
        case 3:
        {
            return ___ice_isA(in, current);
        }
        case 4:
        {
            return ___ice_ping(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
mod::showtime::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->write(h);
    __os->write(m);
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__write(__os);
#else
    ::Ice::Object::__write(__os);
#endif
}

void
mod::showtime::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->read(h);
    __is->read(m);
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__read(__is, true);
#else
    ::Ice::Object::__read(__is, true);
#endif
}

void
mod::showtime::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type mod::showtime was not generated with stream support";
    throw ex;
}

void
mod::showtime::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type mod::showtime was not generated with stream support";
    throw ex;
}

void 
mod::__patch__showtimePtr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::mod::showtimePtr* p = static_cast< ::mod::showtimePtr*>(__addr);
    assert(p);
    *p = ::mod::showtimePtr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::mod::showtime::ice_staticId(), v->ice_id());
    }
}

bool
mod::operator==(const ::mod::showtime& l, const ::mod::showtime& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
mod::operator<(const ::mod::showtime& l, const ::mod::showtime& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

::Ice::ObjectPtr
mod::Printer1::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

static const ::std::string __mod__Printer1_ids[2] =
{
    "::Ice::Object",
    "::mod::Printer1"
};

bool
mod::Printer1::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__mod__Printer1_ids, __mod__Printer1_ids + 2, _s);
}

::std::vector< ::std::string>
mod::Printer1::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__mod__Printer1_ids[0], &__mod__Printer1_ids[2]);
}

const ::std::string&
mod::Printer1::ice_id(const ::Ice::Current&) const
{
    return __mod__Printer1_ids[1];
}

const ::std::string&
mod::Printer1::ice_staticId()
{
    return __mod__Printer1_ids[1];
}

::Ice::DispatchStatus
mod::Printer1::___print(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::std::string s;
    __is->read(s);
    __is->endReadEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::Ice::Int __ret = print(s, __current);
    __os->write(__ret);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
mod::Printer1::___theInt(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::Ice::Int n;
    __is->read(n);
    __is->endReadEncaps();
    ::mod::AMD_Printer1_theIntPtr __cb = new IceAsync::mod::AMD_Printer1_theInt(__inS);
    try
    {
        theInt_async(__cb, n, __current);
    }
    catch(const ::std::exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(...)
    {
        __cb->ice_exception();
    }
    return ::Ice::DispatchAsync;
}

::Ice::DispatchStatus
mod::Printer1::___getString(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.is();
    __is->startReadEncaps();
    ::std::string s;
    __is->read(s);
    __is->endReadEncaps();
    ::mod::AMD_Printer1_getStringPtr __cb = new IceAsync::mod::AMD_Printer1_getString(__inS);
    try
    {
        getString_async(__cb, s, __current);
    }
    catch(const ::std::exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(...)
    {
        __cb->ice_exception();
    }
    return ::Ice::DispatchAsync;
}

::Ice::DispatchStatus
mod::Printer1::___getdates(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    __inS.is()->skipEmptyEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::mod::datetimePtr __ret = getdates(__current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
mod::Printer1::___getshow(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    __inS.is()->skipEmptyEncaps();
    ::IceInternal::BasicStream* __os = __inS.os();
    ::mod::showtimePtr __ret = getshow(__current);
    __os->write(::Ice::ObjectPtr(::IceInternal::upCast(__ret.get())));
    __os->writePendingObjects();
    return ::Ice::DispatchOK;
}

static ::std::string __mod__Printer1_all[] =
{
    "getString",
    "getdates",
    "getshow",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "print",
    "theInt"
};

::Ice::DispatchStatus
mod::Printer1::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< ::std::string*, ::std::string*> r = ::std::equal_range(__mod__Printer1_all, __mod__Printer1_all + 9, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __mod__Printer1_all)
    {
        case 0:
        {
            return ___getString(in, current);
        }
        case 1:
        {
            return ___getdates(in, current);
        }
        case 2:
        {
            return ___getshow(in, current);
        }
        case 3:
        {
            return ___ice_id(in, current);
        }
        case 4:
        {
            return ___ice_ids(in, current);
        }
        case 5:
        {
            return ___ice_isA(in, current);
        }
        case 6:
        {
            return ___ice_ping(in, current);
        }
        case 7:
        {
            return ___print(in, current);
        }
        case 8:
        {
            return ___theInt(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
mod::Printer1::__write(::IceInternal::BasicStream* __os) const
{
    __os->writeTypeId(ice_staticId());
    __os->startWriteSlice();
    __os->endWriteSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__write(__os);
#else
    ::Ice::Object::__write(__os);
#endif
}

void
mod::Printer1::__read(::IceInternal::BasicStream* __is, bool __rid)
{
    if(__rid)
    {
        ::std::string myId;
        __is->readTypeId(myId);
    }
    __is->startReadSlice();
    __is->endReadSlice();
#if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
    Object::__read(__is, true);
#else
    ::Ice::Object::__read(__is, true);
#endif
}

void
mod::Printer1::__write(const ::Ice::OutputStreamPtr&) const
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type mod::Printer1 was not generated with stream support";
    throw ex;
}

void
mod::Printer1::__read(const ::Ice::InputStreamPtr&, bool)
{
    Ice::MarshalException ex(__FILE__, __LINE__);
    ex.reason = "type mod::Printer1 was not generated with stream support";
    throw ex;
}

void 
mod::__patch__Printer1Ptr(void* __addr, ::Ice::ObjectPtr& v)
{
    ::mod::Printer1Ptr* p = static_cast< ::mod::Printer1Ptr*>(__addr);
    assert(p);
    *p = ::mod::Printer1Ptr::dynamicCast(v);
    if(v && !*p)
    {
        IceInternal::Ex::throwUOE(::mod::Printer1::ice_staticId(), v->ice_id());
    }
}

bool
mod::operator==(const ::mod::Printer1& l, const ::mod::Printer1& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

bool
mod::operator<(const ::mod::Printer1& l, const ::mod::Printer1& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}
