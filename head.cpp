// **********************************************************************
//
// Copyright (c) 2003-2017 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************
//
// Ice version 3.7.1
//
// <auto-generated>
//
// Generated from file `head.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#include <head.h>
#include <IceUtil/PushDisableWarnings.h>
#include <Ice/LocalException.h>
#include <Ice/ValueFactory.h>
#include <Ice/OutgoingAsync.h>
#include <Ice/InputStream.h>
#include <Ice/OutputStream.h>
#include <IceUtil/PopDisableWarnings.h>

#if defined(_MSC_VER)
#   pragma warning(disable:4458) // declaration of ... hides class member
#elif defined(__clang__)
#   pragma clang diagnostic ignored "-Wshadow"
#elif defined(__GNUC__)
#   pragma GCC diagnostic ignored "-Wshadow"
#endif

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 307
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 > 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 1
#       error Ice patch level mismatch!
#   endif
#endif

#ifdef ICE_CPP11_MAPPING // C++11 mapping

namespace
{

const ::std::string iceC_modes_actions_ids[2] =
{
    "::Ice::Object",
    "::modes::actions"
};
const ::std::string iceC_modes_actions_ops[] =
{
    "compute",
    "getnum",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "printString",
    "printStringWithRet"
};
const ::std::string iceC_modes_actions_printString_name = "printString";
const ::std::string iceC_modes_actions_printStringWithRet_name = "printStringWithRet";
const ::std::string iceC_modes_actions_getnum_name = "getnum";
const ::std::string iceC_modes_actions_compute_name = "compute";

}

bool
modes::actions::ice_isA(::std::string s, const ::Ice::Current&) const
{
    return ::std::binary_search(iceC_modes_actions_ids, iceC_modes_actions_ids + 2, s);
}

::std::vector<::std::string>
modes::actions::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector<::std::string>(&iceC_modes_actions_ids[0], &iceC_modes_actions_ids[2]);
}

::std::string
modes::actions::ice_id(const ::Ice::Current&) const
{
    return ice_staticId();
}

const ::std::string&
modes::actions::ice_staticId()
{
    static const ::std::string typeId = "::modes::actions";
    return typeId;
}

/// \cond INTERNAL
bool
modes::actions::_iceD_printString(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
    _iceCheckMode(::Ice::OperationMode::Normal, current.mode);
    auto istr = inS.startReadParams();
    ::std::string iceP_str;
    istr->readAll(iceP_str);
    inS.endReadParams();
    this->printString(::std::move(iceP_str), current);
    inS.writeEmptyParams();
    return true;
}
/// \endcond

/// \cond INTERNAL
bool
modes::actions::_iceD_printStringWithRet(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
    _iceCheckMode(::Ice::OperationMode::Normal, current.mode);
    auto istr = inS.startReadParams();
    ::std::string iceP_str;
    istr->readAll(iceP_str);
    inS.endReadParams();
    int ret = this->printStringWithRet(::std::move(iceP_str), current);
    auto ostr = inS.startWriteParams();
    ostr->writeAll(ret);
    inS.endWriteParams();
    return true;
}
/// \endcond

/// \cond INTERNAL
bool
modes::actions::_iceD_getnum(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
    _iceCheckMode(::Ice::OperationMode::Normal, current.mode);
    auto istr = inS.startReadParams();
    int iceP_n1;
    int iceP_n2;
    istr->readAll(iceP_n1, iceP_n2);
    inS.endReadParams();
    int iceP_num;
    bool ret = this->getnum(iceP_n1, iceP_n2, iceP_num, current);
    auto ostr = inS.startWriteParams();
    ostr->writeAll(iceP_num, ret);
    inS.endWriteParams();
    return true;
}
/// \endcond

/// \cond INTERNAL
bool
modes::actions::_iceD_compute(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
    _iceCheckMode(::Ice::OperationMode::Normal, current.mode);
    auto istr = inS.startReadParams();
    int iceP_n1;
    int iceP_n2;
    istr->readAll(iceP_n1, iceP_n2);
    inS.endReadParams();
    int ret = this->compute(iceP_n1, iceP_n2, current);
    auto ostr = inS.startWriteParams();
    ostr->writeAll(ret);
    inS.endWriteParams();
    return true;
}
/// \endcond

/// \cond INTERNAL
bool
modes::actions::_iceDispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair<const ::std::string*, const ::std::string*> r = ::std::equal_range(iceC_modes_actions_ops, iceC_modes_actions_ops + 8, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - iceC_modes_actions_ops)
    {
        case 0:
        {
            return _iceD_compute(in, current);
        }
        case 1:
        {
            return _iceD_getnum(in, current);
        }
        case 2:
        {
            return _iceD_ice_id(in, current);
        }
        case 3:
        {
            return _iceD_ice_ids(in, current);
        }
        case 4:
        {
            return _iceD_ice_isA(in, current);
        }
        case 5:
        {
            return _iceD_ice_ping(in, current);
        }
        case 6:
        {
            return _iceD_printString(in, current);
        }
        case 7:
        {
            return _iceD_printStringWithRet(in, current);
        }
        default:
        {
            assert(false);
            throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
        }
    }
}
/// \endcond

/// \cond INTERNAL
void
modes::actionsPrx::_iceI_printString(const ::std::shared_ptr<::IceInternal::OutgoingAsyncT<void>>& outAsync, const ::std::string& iceP_str, const ::Ice::Context& context)
{
    outAsync->invoke(iceC_modes_actions_printString_name, ::Ice::OperationMode::Normal, ::Ice::FormatType::DefaultFormat, context,
        [&](::Ice::OutputStream* ostr)
        {
            ostr->writeAll(iceP_str);
        },
        nullptr);
}
/// \endcond

/// \cond INTERNAL
void
modes::actionsPrx::_iceI_printStringWithRet(const ::std::shared_ptr<::IceInternal::OutgoingAsyncT<int>>& outAsync, const ::std::string& iceP_str, const ::Ice::Context& context)
{
    _checkTwowayOnly(iceC_modes_actions_printStringWithRet_name);
    outAsync->invoke(iceC_modes_actions_printStringWithRet_name, ::Ice::OperationMode::Normal, ::Ice::FormatType::DefaultFormat, context,
        [&](::Ice::OutputStream* ostr)
        {
            ostr->writeAll(iceP_str);
        },
        nullptr);
}
/// \endcond

/// \cond INTERNAL
void
modes::actionsPrx::_iceI_getnum(const ::std::shared_ptr<::IceInternal::OutgoingAsyncT<actions::GetnumResult>>& outAsync, int iceP_n1, int iceP_n2, const ::Ice::Context& context)
{
    _checkTwowayOnly(iceC_modes_actions_getnum_name);
    outAsync->invoke(iceC_modes_actions_getnum_name, ::Ice::OperationMode::Normal, ::Ice::FormatType::DefaultFormat, context,
        [&](::Ice::OutputStream* ostr)
        {
            ostr->writeAll(iceP_n1, iceP_n2);
        },
        nullptr,
        [](::Ice::InputStream* istr)
        {
            actions::GetnumResult v;
            istr->readAll(v.num, v.returnValue);
            return v;
        });
}
/// \endcond

/// \cond INTERNAL
void
modes::actionsPrx::_iceI_compute(const ::std::shared_ptr<::IceInternal::OutgoingAsyncT<int>>& outAsync, int iceP_n1, int iceP_n2, const ::Ice::Context& context)
{
    _checkTwowayOnly(iceC_modes_actions_compute_name);
    outAsync->invoke(iceC_modes_actions_compute_name, ::Ice::OperationMode::Normal, ::Ice::FormatType::DefaultFormat, context,
        [&](::Ice::OutputStream* ostr)
        {
            ostr->writeAll(iceP_n1, iceP_n2);
        },
        nullptr);
}
/// \endcond

/// \cond INTERNAL
::std::shared_ptr<::Ice::ObjectPrx>
modes::actionsPrx::_newInstance() const
{
    return ::IceInternal::createProxy<actionsPrx>();
}
/// \endcond

const ::std::string&
modes::actionsPrx::ice_staticId()
{
    return actions::ice_staticId();
}

#else // C++98 mapping

namespace
{

const ::std::string iceC_modes_actions_printString_name = "printString";

const ::std::string iceC_modes_actions_printStringWithRet_name = "printStringWithRet";

const ::std::string iceC_modes_actions_getnum_name = "getnum";

const ::std::string iceC_modes_actions_compute_name = "compute";

}

/// \cond INTERNAL
::IceProxy::Ice::Object* ::IceProxy::modes::upCast(actions* p) { return p; }

void
::IceProxy::modes::_readProxy(::Ice::InputStream* istr, ::IceInternal::ProxyHandle< actions>& v)
{
    ::Ice::ObjectPrx proxy;
    istr->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new actions;
        v->_copyFrom(proxy);
    }
}
/// \endcond

::Ice::AsyncResultPtr
IceProxy::modes::actions::_iceI_begin_printString(const ::std::string& iceP_str, const ::Ice::Context& context, const ::IceInternal::CallbackBasePtr& del, const ::Ice::LocalObjectPtr& cookie, bool sync)
{
    ::IceInternal::OutgoingAsyncPtr result = new ::IceInternal::CallbackOutgoing(this, iceC_modes_actions_printString_name, del, cookie, sync);
    try
    {
        result->prepare(iceC_modes_actions_printString_name, ::Ice::Normal, context);
        ::Ice::OutputStream* ostr = result->startWriteParams(::Ice::DefaultFormat);
        ostr->write(iceP_str);
        result->endWriteParams();
        result->invoke(iceC_modes_actions_printString_name);
    }
    catch(const ::Ice::Exception& ex)
    {
        result->abort(ex);
    }
    return result;
}

void
IceProxy::modes::actions::end_printString(const ::Ice::AsyncResultPtr& result)
{
    _end(result, iceC_modes_actions_printString_name);
}

::Ice::AsyncResultPtr
IceProxy::modes::actions::_iceI_begin_printStringWithRet(const ::std::string& iceP_str, const ::Ice::Context& context, const ::IceInternal::CallbackBasePtr& del, const ::Ice::LocalObjectPtr& cookie, bool sync)
{
    _checkTwowayOnly(iceC_modes_actions_printStringWithRet_name, sync);
    ::IceInternal::OutgoingAsyncPtr result = new ::IceInternal::CallbackOutgoing(this, iceC_modes_actions_printStringWithRet_name, del, cookie, sync);
    try
    {
        result->prepare(iceC_modes_actions_printStringWithRet_name, ::Ice::Normal, context);
        ::Ice::OutputStream* ostr = result->startWriteParams(::Ice::DefaultFormat);
        ostr->write(iceP_str);
        result->endWriteParams();
        result->invoke(iceC_modes_actions_printStringWithRet_name);
    }
    catch(const ::Ice::Exception& ex)
    {
        result->abort(ex);
    }
    return result;
}

::Ice::Int
IceProxy::modes::actions::end_printStringWithRet(const ::Ice::AsyncResultPtr& result)
{
    ::Ice::AsyncResult::_check(result, this, iceC_modes_actions_printStringWithRet_name);
    ::Ice::Int ret;
    if(!result->_waitForResponse())
    {
        try
        {
            result->_throwUserException();
        }
        catch(const ::Ice::UserException& ex)
        {
            throw ::Ice::UnknownUserException(__FILE__, __LINE__, ex.ice_id());
        }
    }
    ::Ice::InputStream* istr = result->_startReadParams();
    istr->read(ret);
    result->_endReadParams();
    return ret;
}

::Ice::AsyncResultPtr
IceProxy::modes::actions::_iceI_begin_getnum(::Ice::Int iceP_n1, ::Ice::Int iceP_n2, const ::Ice::Context& context, const ::IceInternal::CallbackBasePtr& del, const ::Ice::LocalObjectPtr& cookie, bool sync)
{
    _checkTwowayOnly(iceC_modes_actions_getnum_name, sync);
    ::IceInternal::OutgoingAsyncPtr result = new ::IceInternal::CallbackOutgoing(this, iceC_modes_actions_getnum_name, del, cookie, sync);
    try
    {
        result->prepare(iceC_modes_actions_getnum_name, ::Ice::Normal, context);
        ::Ice::OutputStream* ostr = result->startWriteParams(::Ice::DefaultFormat);
        ostr->write(iceP_n1);
        ostr->write(iceP_n2);
        result->endWriteParams();
        result->invoke(iceC_modes_actions_getnum_name);
    }
    catch(const ::Ice::Exception& ex)
    {
        result->abort(ex);
    }
    return result;
}

bool
IceProxy::modes::actions::end_getnum(::Ice::Int& iceP_num, const ::Ice::AsyncResultPtr& result)
{
    ::Ice::AsyncResult::_check(result, this, iceC_modes_actions_getnum_name);
    bool ret;
    if(!result->_waitForResponse())
    {
        try
        {
            result->_throwUserException();
        }
        catch(const ::Ice::UserException& ex)
        {
            throw ::Ice::UnknownUserException(__FILE__, __LINE__, ex.ice_id());
        }
    }
    ::Ice::InputStream* istr = result->_startReadParams();
    istr->read(iceP_num);
    istr->read(ret);
    result->_endReadParams();
    return ret;
}

void IceProxy::modes::actions::_iceI_end_getnum(::Ice::Int& iceP_num, bool& ret, const ::Ice::AsyncResultPtr& result)
{
    ::Ice::AsyncResult::_check(result, this, iceC_modes_actions_getnum_name);
    if(!result->_waitForResponse())
    {
        try
        {
            result->_throwUserException();
        }
        catch(const ::Ice::UserException& ex)
        {
            throw ::Ice::UnknownUserException(__FILE__, __LINE__, ex.ice_id());
        }
    }
    ::Ice::InputStream* istr = result->_startReadParams();
    istr->read(iceP_num);
    istr->read(ret);
    result->_endReadParams();
}

::Ice::AsyncResultPtr
IceProxy::modes::actions::_iceI_begin_compute(::Ice::Int iceP_n1, ::Ice::Int iceP_n2, const ::Ice::Context& context, const ::IceInternal::CallbackBasePtr& del, const ::Ice::LocalObjectPtr& cookie, bool sync)
{
    _checkTwowayOnly(iceC_modes_actions_compute_name, sync);
    ::IceInternal::OutgoingAsyncPtr result = new ::IceInternal::CallbackOutgoing(this, iceC_modes_actions_compute_name, del, cookie, sync);
    try
    {
        result->prepare(iceC_modes_actions_compute_name, ::Ice::Normal, context);
        ::Ice::OutputStream* ostr = result->startWriteParams(::Ice::DefaultFormat);
        ostr->write(iceP_n1);
        ostr->write(iceP_n2);
        result->endWriteParams();
        result->invoke(iceC_modes_actions_compute_name);
    }
    catch(const ::Ice::Exception& ex)
    {
        result->abort(ex);
    }
    return result;
}

::Ice::Int
IceProxy::modes::actions::end_compute(const ::Ice::AsyncResultPtr& result)
{
    ::Ice::AsyncResult::_check(result, this, iceC_modes_actions_compute_name);
    ::Ice::Int ret;
    if(!result->_waitForResponse())
    {
        try
        {
            result->_throwUserException();
        }
        catch(const ::Ice::UserException& ex)
        {
            throw ::Ice::UnknownUserException(__FILE__, __LINE__, ex.ice_id());
        }
    }
    ::Ice::InputStream* istr = result->_startReadParams();
    istr->read(ret);
    result->_endReadParams();
    return ret;
}

/// \cond INTERNAL
::IceProxy::Ice::Object*
IceProxy::modes::actions::_newInstance() const
{
    return new actions;
}
/// \endcond

const ::std::string&
IceProxy::modes::actions::ice_staticId()
{
    return ::modes::actions::ice_staticId();
}

modes::actions::~actions()
{
}

/// \cond INTERNAL
::Ice::Object* modes::upCast(actions* p) { return p; }

/// \endcond

namespace
{
const ::std::string iceC_modes_actions_ids[2] =
{
    "::Ice::Object",
    "::modes::actions"
};

}

bool
modes::actions::ice_isA(const ::std::string& s, const ::Ice::Current&) const
{
    return ::std::binary_search(iceC_modes_actions_ids, iceC_modes_actions_ids + 2, s);
}

::std::vector< ::std::string>
modes::actions::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&iceC_modes_actions_ids[0], &iceC_modes_actions_ids[2]);
}

const ::std::string&
modes::actions::ice_id(const ::Ice::Current&) const
{
    return ice_staticId();
}

const ::std::string&
modes::actions::ice_staticId()
{
#ifdef ICE_HAS_THREAD_SAFE_LOCAL_STATIC
    static const ::std::string typeId = "::modes::actions";
    return typeId;
#else
    return iceC_modes_actions_ids[1];
#endif
}

/// \cond INTERNAL
bool
modes::actions::_iceD_printString(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
    _iceCheckMode(::Ice::Normal, current.mode);
    ::Ice::InputStream* istr = inS.startReadParams();
    ::std::string iceP_str;
    istr->read(iceP_str);
    inS.endReadParams();
    this->printString(iceP_str, current);
    inS.writeEmptyParams();
    return true;
}
/// \endcond

/// \cond INTERNAL
bool
modes::actions::_iceD_printStringWithRet(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
    _iceCheckMode(::Ice::Normal, current.mode);
    ::Ice::InputStream* istr = inS.startReadParams();
    ::std::string iceP_str;
    istr->read(iceP_str);
    inS.endReadParams();
    ::Ice::Int ret = this->printStringWithRet(iceP_str, current);
    ::Ice::OutputStream* ostr = inS.startWriteParams();
    ostr->write(ret);
    inS.endWriteParams();
    return true;
}
/// \endcond

/// \cond INTERNAL
bool
modes::actions::_iceD_getnum(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
    _iceCheckMode(::Ice::Normal, current.mode);
    ::Ice::InputStream* istr = inS.startReadParams();
    ::Ice::Int iceP_n1;
    ::Ice::Int iceP_n2;
    istr->read(iceP_n1);
    istr->read(iceP_n2);
    inS.endReadParams();
    ::Ice::Int iceP_num;
    bool ret = this->getnum(iceP_n1, iceP_n2, iceP_num, current);
    ::Ice::OutputStream* ostr = inS.startWriteParams();
    ostr->write(iceP_num);
    ostr->write(ret);
    inS.endWriteParams();
    return true;
}
/// \endcond

/// \cond INTERNAL
bool
modes::actions::_iceD_compute(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
    _iceCheckMode(::Ice::Normal, current.mode);
    ::Ice::InputStream* istr = inS.startReadParams();
    ::Ice::Int iceP_n1;
    ::Ice::Int iceP_n2;
    istr->read(iceP_n1);
    istr->read(iceP_n2);
    inS.endReadParams();
    ::Ice::Int ret = this->compute(iceP_n1, iceP_n2, current);
    ::Ice::OutputStream* ostr = inS.startWriteParams();
    ostr->write(ret);
    inS.endWriteParams();
    return true;
}
/// \endcond

namespace
{
const ::std::string iceC_modes_actions_all[] =
{
    "compute",
    "getnum",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "printString",
    "printStringWithRet"
};

}

/// \cond INTERNAL
bool
modes::actions::_iceDispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair<const ::std::string*, const ::std::string*> r = ::std::equal_range(iceC_modes_actions_all, iceC_modes_actions_all + 8, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - iceC_modes_actions_all)
    {
        case 0:
        {
            return _iceD_compute(in, current);
        }
        case 1:
        {
            return _iceD_getnum(in, current);
        }
        case 2:
        {
            return _iceD_ice_id(in, current);
        }
        case 3:
        {
            return _iceD_ice_ids(in, current);
        }
        case 4:
        {
            return _iceD_ice_isA(in, current);
        }
        case 5:
        {
            return _iceD_ice_ping(in, current);
        }
        case 6:
        {
            return _iceD_printString(in, current);
        }
        case 7:
        {
            return _iceD_printStringWithRet(in, current);
        }
        default:
        {
            assert(false);
            throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
        }
    }
}
/// \endcond

/// \cond STREAM
void
modes::actions::_iceWriteImpl(::Ice::OutputStream* ostr) const
{
    ostr->startSlice(ice_staticId(), -1, true);
    ::Ice::StreamWriter< actions, ::Ice::OutputStream>::write(ostr, *this);
    ostr->endSlice();
}

void
modes::actions::_iceReadImpl(::Ice::InputStream* istr)
{
    istr->startSlice();
    ::Ice::StreamReader< actions, ::Ice::InputStream>::read(istr, *this);
    istr->endSlice();
}
/// \endcond

/// \cond INTERNAL
void
modes::_icePatchObjectPtr(actionsPtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = actionsPtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(actions::ice_staticId(), v);
    }
}
/// \endcond

namespace Ice
{
}

#endif