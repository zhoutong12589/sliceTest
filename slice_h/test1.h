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

#ifndef __test1_h__
#define __test1_h__

#include <Ice/LocalObjectF.h>
#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/Proxy.h>
#include <Ice/Object.h>
#include <Ice/Outgoing.h>
#include <Ice/OutgoingAsync.h>
#include <Ice/Incoming.h>
#include <Ice/IncomingAsync.h>
#include <Ice/Direct.h>
#include <Ice/FactoryTable.h>
#include <Ice/StreamF.h>
#include <Ice/UndefSysMacros.h>

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

namespace IceProxy
{

namespace mod
{

class datetime;

class showtime;

class Printer1;

}

}

namespace mod
{

class datetime;
bool operator==(const datetime&, const datetime&);
bool operator<(const datetime&, const datetime&);

class showtime;
bool operator==(const showtime&, const showtime&);
bool operator<(const showtime&, const showtime&);

class Printer1;
bool operator==(const Printer1&, const Printer1&);
bool operator<(const Printer1&, const Printer1&);

}

namespace IceInternal
{

::Ice::Object* upCast(::mod::datetime*);
::IceProxy::Ice::Object* upCast(::IceProxy::mod::datetime*);

::Ice::Object* upCast(::mod::showtime*);
::IceProxy::Ice::Object* upCast(::IceProxy::mod::showtime*);

::Ice::Object* upCast(::mod::Printer1*);
::IceProxy::Ice::Object* upCast(::IceProxy::mod::Printer1*);

}

namespace mod
{

typedef ::IceInternal::Handle< ::mod::datetime> datetimePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::mod::datetime> datetimePrx;

void __read(::IceInternal::BasicStream*, datetimePrx&);
void __patch__datetimePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::mod::showtime> showtimePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::mod::showtime> showtimePrx;

void __read(::IceInternal::BasicStream*, showtimePrx&);
void __patch__showtimePtr(void*, ::Ice::ObjectPtr&);

typedef ::IceInternal::Handle< ::mod::Printer1> Printer1Ptr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::mod::Printer1> Printer1Prx;

void __read(::IceInternal::BasicStream*, Printer1Prx&);
void __patch__Printer1Ptr(void*, ::Ice::ObjectPtr&);

}

namespace mod
{

class AMI_Printer1_print : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::mod::Printer1Prx&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::mod::AMI_Printer1_print> AMI_Printer1_printPtr;

class AMD_Printer1_theInt : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::mod::AMD_Printer1_theInt> AMD_Printer1_theIntPtr;

class AMI_Printer1_getString : public ::IceInternal::OutgoingAsync
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::Ice::Exception&) = 0;

    bool __invoke(const ::mod::Printer1Prx&, const ::std::string&, const ::Ice::Context*);

protected:

    virtual void __response(bool);
};

typedef ::IceUtil::Handle< ::mod::AMI_Printer1_getString> AMI_Printer1_getStringPtr;

class AMD_Printer1_getString : virtual public ::IceUtil::Shared
{
public:

    virtual void ice_response(::Ice::Int) = 0;
    virtual void ice_exception(const ::std::exception&) = 0;
    virtual void ice_exception() = 0;
};

typedef ::IceUtil::Handle< ::mod::AMD_Printer1_getString> AMD_Printer1_getStringPtr;

}

namespace IceAsync
{

namespace mod
{

class AMD_Printer1_theInt : public ::mod::AMD_Printer1_theInt, public ::IceInternal::IncomingAsync
{
public:

    AMD_Printer1_theInt(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

class AMD_Printer1_getString : public ::mod::AMD_Printer1_getString, public ::IceInternal::IncomingAsync
{
public:

    AMD_Printer1_getString(::IceInternal::Incoming&);

    virtual void ice_response(::Ice::Int);
    virtual void ice_exception(const ::std::exception&);
    virtual void ice_exception();
};

}

}

namespace IceProxy
{

namespace mod
{

class datetime : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<datetime> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<datetime*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<datetime*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<datetime> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<datetime*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<datetime*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<datetime> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<datetime*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<datetime*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<datetime> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<datetime*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<datetime*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<datetime> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<datetime*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<datetime*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<datetime> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<datetime*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<datetime*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<datetime> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<datetime*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<datetime*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<datetime> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<datetime*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<datetime*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<datetime> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<datetime*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<datetime*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<datetime> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<datetime*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<datetime*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<datetime> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<datetime*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<datetime*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<datetime> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<datetime*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<datetime*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<datetime> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<datetime*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<datetime*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<datetime> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<datetime*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<datetime*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<datetime> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<datetime*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<datetime*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<datetime> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<datetime*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<datetime*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<datetime> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<datetime*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<datetime*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<datetime> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<datetime*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<datetime*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<datetime> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<datetime*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<datetime*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class showtime : virtual public ::IceProxy::Ice::Object
{
public:

    ::std::string format()
    {
        return format(0);
    }
    ::std::string format(const ::Ice::Context& __ctx)
    {
        return format(&__ctx);
    }
    
private:

    ::std::string format(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<showtime> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<showtime*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<showtime*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<showtime> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<showtime*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<showtime*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<showtime> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<showtime*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<showtime*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<showtime> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<showtime*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<showtime*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<showtime> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<showtime*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<showtime*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<showtime> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<showtime*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<showtime*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<showtime> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<showtime*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<showtime*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<showtime> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<showtime*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<showtime*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<showtime> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<showtime*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<showtime*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<showtime> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<showtime*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<showtime*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<showtime> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<showtime*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<showtime*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<showtime> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<showtime*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<showtime*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<showtime> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<showtime*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<showtime*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<showtime> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<showtime*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<showtime*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<showtime> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<showtime*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<showtime*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<showtime> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<showtime*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<showtime*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<showtime> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<showtime*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<showtime*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<showtime> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<showtime*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<showtime*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<showtime> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<showtime*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<showtime*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class Printer1 : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::Int print(const ::std::string& s)
    {
        return print(s, 0);
    }
    ::Ice::Int print(const ::std::string& s, const ::Ice::Context& __ctx)
    {
        return print(s, &__ctx);
    }
    
private:

    ::Ice::Int print(const ::std::string&, const ::Ice::Context*);
    
public:
    bool print_async(const ::mod::AMI_Printer1_printPtr&, const ::std::string&);
    bool print_async(const ::mod::AMI_Printer1_printPtr&, const ::std::string&, const ::Ice::Context&);

    ::Ice::Int theInt(::Ice::Int n)
    {
        return theInt(n, 0);
    }
    ::Ice::Int theInt(::Ice::Int n, const ::Ice::Context& __ctx)
    {
        return theInt(n, &__ctx);
    }
    
private:

    ::Ice::Int theInt(::Ice::Int, const ::Ice::Context*);
    
public:

    ::Ice::Int getString(const ::std::string& s)
    {
        return getString(s, 0);
    }
    ::Ice::Int getString(const ::std::string& s, const ::Ice::Context& __ctx)
    {
        return getString(s, &__ctx);
    }
    
private:

    ::Ice::Int getString(const ::std::string&, const ::Ice::Context*);
    
public:
    bool getString_async(const ::mod::AMI_Printer1_getStringPtr&, const ::std::string&);
    bool getString_async(const ::mod::AMI_Printer1_getStringPtr&, const ::std::string&, const ::Ice::Context&);

    ::mod::datetimePtr getdates()
    {
        return getdates(0);
    }
    ::mod::datetimePtr getdates(const ::Ice::Context& __ctx)
    {
        return getdates(&__ctx);
    }
    
private:

    ::mod::datetimePtr getdates(const ::Ice::Context*);
    
public:

    ::mod::showtimePtr getshow()
    {
        return getshow(0);
    }
    ::mod::showtimePtr getshow(const ::Ice::Context& __ctx)
    {
        return getshow(&__ctx);
    }
    
private:

    ::mod::showtimePtr getshow(const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<Printer1> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Printer1*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<Printer1*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Printer1> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Printer1*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<Printer1*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Printer1> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Printer1*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<Printer1*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Printer1> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Printer1*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<Printer1*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Printer1> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Printer1*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<Printer1*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Printer1> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Printer1*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<Printer1*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Printer1> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Printer1*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<Printer1*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Printer1> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Printer1*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<Printer1*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Printer1> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Printer1*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<Printer1*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Printer1> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Printer1*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<Printer1*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Printer1> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Printer1*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<Printer1*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Printer1> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Printer1*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<Printer1*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Printer1> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Printer1*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<Printer1*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Printer1> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Printer1*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<Printer1*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Printer1> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Printer1*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<Printer1*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Printer1> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Printer1*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<Printer1*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Printer1> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Printer1*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<Printer1*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Printer1> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Printer1*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<Printer1*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<Printer1> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<Printer1*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<Printer1*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

}

namespace IceDelegate
{

namespace mod
{

class datetime : virtual public ::IceDelegate::Ice::Object
{
public:
};

class showtime : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::std::string format(const ::Ice::Context*) = 0;
};

class Printer1 : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::Ice::Int print(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::Ice::Int theInt(::Ice::Int, const ::Ice::Context*) = 0;

    virtual ::Ice::Int getString(const ::std::string&, const ::Ice::Context*) = 0;

    virtual ::mod::datetimePtr getdates(const ::Ice::Context*) = 0;

    virtual ::mod::showtimePtr getshow(const ::Ice::Context*) = 0;
};

}

}

namespace IceDelegateM
{

namespace mod
{

class datetime : virtual public ::IceDelegate::mod::datetime,
                 virtual public ::IceDelegateM::Ice::Object
{
public:
};

class showtime : virtual public ::IceDelegate::mod::showtime,
                 virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::std::string format(const ::Ice::Context*);
};

class Printer1 : virtual public ::IceDelegate::mod::Printer1,
                 virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::Ice::Int print(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int theInt(::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int getString(const ::std::string&, const ::Ice::Context*);

    virtual ::mod::datetimePtr getdates(const ::Ice::Context*);

    virtual ::mod::showtimePtr getshow(const ::Ice::Context*);
};

}

}

namespace IceDelegateD
{

namespace mod
{

class datetime : virtual public ::IceDelegate::mod::datetime,
                 virtual public ::IceDelegateD::Ice::Object
{
public:
};

class showtime : virtual public ::IceDelegate::mod::showtime,
                 virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::std::string format(const ::Ice::Context*);
};

class Printer1 : virtual public ::IceDelegate::mod::Printer1,
                 virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::Ice::Int print(const ::std::string&, const ::Ice::Context*);

    virtual ::Ice::Int theInt(::Ice::Int, const ::Ice::Context*);

    virtual ::Ice::Int getString(const ::std::string&, const ::Ice::Context*);

    virtual ::mod::datetimePtr getdates(const ::Ice::Context*);

    virtual ::mod::showtimePtr getshow(const ::Ice::Context*);
};

}

}

namespace mod
{

class datetime : virtual public ::Ice::Object
{
public:

    typedef datetimePrx ProxyType;
    typedef datetimePtr PointerType;
    
    datetime() {}
    datetime(::Ice::Int, ::Ice::Int);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:

    virtual ~datetime() {}

    friend class datetime__staticInit;

public:

    ::Ice::Int hours;

    ::Ice::Int mins;
};

class datetime__staticInit
{
public:

    ::mod::datetime _init;
};

static ::mod::datetime__staticInit _datetime_init;

class showtime : virtual public ::Ice::Object
{
public:

    typedef showtimePrx ProxyType;
    typedef showtimePtr PointerType;
    
    showtime() {}
    showtime(::Ice::Int, ::Ice::Int);
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    virtual ::std::string format(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___format(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);

    ::Ice::Int h;

    ::Ice::Int m;
};

class Printer1 : virtual public ::Ice::Object
{
public:

    typedef Printer1Prx ProxyType;
    typedef Printer1Ptr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Ice::Int print(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___print(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void theInt_async(const ::mod::AMD_Printer1_theIntPtr&, ::Ice::Int, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___theInt(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void getString_async(const ::mod::AMD_Printer1_getStringPtr&, const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getString(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::mod::datetimePtr getdates(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getdates(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::mod::showtimePtr getshow(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getshow(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

}

#endif
