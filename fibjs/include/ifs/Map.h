/***************************************************************************
 *                                                                         *
 *   This file was automatically generated using idlc.js                   *
 *   PLEASE DO NOT EDIT!!!!                                                *
 *                                                                         *
 ***************************************************************************/

#ifndef _Map_base_H_
#define _Map_base_H_

/**
 @author Leo Hoo <lion@9465.net>
 */

#include "../object.h"

namespace fibjs {

class Map_base : public object_base {
    DECLARE_CLASS(Map_base);

public:
    // Map_base
    static result_t _new(obj_ptr<Map_base>& retVal, v8::Local<v8::Object> This = v8::Local<v8::Object>());
    static result_t _new(v8::Local<v8::Object> map, obj_ptr<Map_base>& retVal, v8::Local<v8::Object> This = v8::Local<v8::Object>());
    virtual result_t get_size(int32_t& retVal) = 0;
    virtual result_t clear() = 0;
    virtual result_t has(exlib::string name, bool& retVal) = 0;
    virtual result_t get(exlib::string name, Variant& retVal) = 0;
    virtual result_t put(v8::Local<v8::Object> map) = 0;
    virtual result_t put(exlib::string name, Variant value) = 0;
    virtual result_t set(v8::Local<v8::Object> map) = 0;
    virtual result_t set(exlib::string name, Variant value) = 0;
    virtual result_t remove(exlib::string name) = 0;
    virtual result_t isEmpty(bool& retVal) = 0;
    virtual result_t _named_getter(exlib::string property, Variant& retVal) = 0;
    virtual result_t _named_enumerator(v8::Local<v8::Array>& retVal) = 0;
    virtual result_t _named_setter(exlib::string property, Variant newVal) = 0;
    virtual result_t _named_deleter(exlib::string property, v8::Local<v8::Boolean>& retVal) = 0;

public:
    template <typename T>
    static void __new(const T& args);

public:
    static void s__new(const v8::FunctionCallbackInfo<v8::Value>& args);
    static void s_get_size(v8::Local<v8::String> property, const v8::PropertyCallbackInfo<v8::Value>& args);
    static void s_clear(const v8::FunctionCallbackInfo<v8::Value>& args);
    static void s_has(const v8::FunctionCallbackInfo<v8::Value>& args);
    static void s_get(const v8::FunctionCallbackInfo<v8::Value>& args);
    static void s_put(const v8::FunctionCallbackInfo<v8::Value>& args);
    static void s_set(const v8::FunctionCallbackInfo<v8::Value>& args);
    static void s_remove(const v8::FunctionCallbackInfo<v8::Value>& args);
    static void s_isEmpty(const v8::FunctionCallbackInfo<v8::Value>& args);
    static void i_NamedGetter(v8::Local<v8::String> property, const v8::PropertyCallbackInfo<v8::Value>& args);
    static void i_NamedEnumerator(const v8::PropertyCallbackInfo<v8::Array>& args);
    static void i_NamedSetter(v8::Local<v8::String> property, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<v8::Value>& args);
    static void i_NamedDeleter(v8::Local<v8::String> property, const v8::PropertyCallbackInfo<v8::Boolean>& args);
};
}

namespace fibjs {
inline ClassInfo& Map_base::class_info()
{
    static ClassData::ClassMethod s_method[] = {
        { "clear", s_clear, false },
        { "has", s_has, false },
        { "get", s_get, false },
        { "put", s_put, false },
        { "set", s_set, false },
        { "remove", s_remove, false },
        { "isEmpty", s_isEmpty, false }
    };

    static ClassData::ClassProperty s_property[] = {
        { "size", s_get_size, block_set, false }
    };

    static ClassData::ClassNamed s_named = {
        i_NamedGetter, i_NamedSetter, i_NamedDeleter, i_NamedEnumerator
    };

    static ClassData s_cd = {
        "Map", false, s__new, NULL,
        ARRAYSIZE(s_method), s_method, 0, NULL, ARRAYSIZE(s_property), s_property, NULL, &s_named,
        &object_base::class_info()
    };

    static ClassInfo s_ci(s_cd);
    return s_ci;
}

inline void Map_base::s__new(const v8::FunctionCallbackInfo<v8::Value>& args)
{
    CONSTRUCT_INIT();
    __new(args);
}

template <typename T>
void Map_base::__new(const T& args)
{
    obj_ptr<Map_base> vr;

    METHOD_NAME("new Map()");
    CONSTRUCT_ENTER();

    METHOD_OVER(0, 0);

    hr = _new(vr, args.This());

    METHOD_OVER(1, 1);

    ARG(v8::Local<v8::Object>, 0);

    hr = _new(v0, vr, args.This());

    CONSTRUCT_RETURN();
}

inline void Map_base::s_get_size(v8::Local<v8::String> property, const v8::PropertyCallbackInfo<v8::Value>& args)
{
    int32_t vr;

    METHOD_NAME("Map.size");
    METHOD_INSTANCE(Map_base);
    PROPERTY_ENTER();

    hr = pInst->get_size(vr);

    METHOD_RETURN();
}

inline void Map_base::s_clear(const v8::FunctionCallbackInfo<v8::Value>& args)
{
    METHOD_NAME("Map.clear");
    METHOD_INSTANCE(Map_base);
    METHOD_ENTER();

    METHOD_OVER(0, 0);

    hr = pInst->clear();

    METHOD_VOID();
}

inline void Map_base::s_has(const v8::FunctionCallbackInfo<v8::Value>& args)
{
    bool vr;

    METHOD_NAME("Map.has");
    METHOD_INSTANCE(Map_base);
    METHOD_ENTER();

    METHOD_OVER(1, 1);

    ARG(exlib::string, 0);

    hr = pInst->has(v0, vr);

    METHOD_RETURN();
}

inline void Map_base::s_get(const v8::FunctionCallbackInfo<v8::Value>& args)
{
    Variant vr;

    METHOD_NAME("Map.get");
    METHOD_INSTANCE(Map_base);
    METHOD_ENTER();

    METHOD_OVER(1, 1);

    ARG(exlib::string, 0);

    hr = pInst->get(v0, vr);

    METHOD_RETURN();
}

inline void Map_base::s_put(const v8::FunctionCallbackInfo<v8::Value>& args)
{
    METHOD_NAME("Map.put");
    METHOD_INSTANCE(Map_base);
    METHOD_ENTER();

    METHOD_OVER(1, 1);

    ARG(v8::Local<v8::Object>, 0);

    hr = pInst->put(v0);

    METHOD_OVER(2, 2);

    ARG(exlib::string, 0);
    ARG(Variant, 1);

    hr = pInst->put(v0, v1);

    METHOD_VOID();
}

inline void Map_base::s_set(const v8::FunctionCallbackInfo<v8::Value>& args)
{
    METHOD_NAME("Map.set");
    METHOD_INSTANCE(Map_base);
    METHOD_ENTER();

    METHOD_OVER(1, 1);

    ARG(v8::Local<v8::Object>, 0);

    hr = pInst->set(v0);

    METHOD_OVER(2, 2);

    ARG(exlib::string, 0);
    ARG(Variant, 1);

    hr = pInst->set(v0, v1);

    METHOD_VOID();
}

inline void Map_base::s_remove(const v8::FunctionCallbackInfo<v8::Value>& args)
{
    METHOD_NAME("Map.remove");
    METHOD_INSTANCE(Map_base);
    METHOD_ENTER();

    METHOD_OVER(1, 1);

    ARG(exlib::string, 0);

    hr = pInst->remove(v0);

    METHOD_VOID();
}

inline void Map_base::s_isEmpty(const v8::FunctionCallbackInfo<v8::Value>& args)
{
    bool vr;

    METHOD_NAME("Map.isEmpty");
    METHOD_INSTANCE(Map_base);
    METHOD_ENTER();

    METHOD_OVER(0, 0);

    hr = pInst->isEmpty(vr);

    METHOD_RETURN();
}

inline void Map_base::i_NamedGetter(v8::Local<v8::String> property, const v8::PropertyCallbackInfo<v8::Value>& args)
{
    Variant vr;

    METHOD_NAME("Map.undefined[]");
    METHOD_INSTANCE(Map_base);
    PROPERTY_ENTER();

    exlib::string k;
    GetArgumentValue(isolate, property, k);
    if (class_info().has(k.c_str()))
        return;

    hr = pInst->_named_getter(k, vr);
    if (hr == CALL_RETURN_NULL)
        return;

    METHOD_RETURN();
}

inline void Map_base::i_NamedEnumerator(const v8::PropertyCallbackInfo<v8::Array>& args)
{
    v8::Local<v8::Array> vr;

    METHOD_NAME("Map.undefined");
    METHOD_INSTANCE(Map_base);
    PROPERTY_ENTER();

    hr = pInst->_named_enumerator(vr);

    METHOD_RETURN1();
}

inline void Map_base::i_NamedSetter(v8::Local<v8::String> property, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<v8::Value>& args)
{
    METHOD_NAME("Map.undefined");
    METHOD_INSTANCE(Map_base);
    PROPERTY_ENTER();

    PROPERTY_VAL(Variant);
    exlib::string k;
    GetArgumentValue(isolate, property, k);
    if (class_info().has(k.c_str()))
        return;

    hr = pInst->_named_setter(k, v0);
    if (hr == CALL_RETURN_NULL)
        return;

    METHOD_VOID();
}

inline void Map_base::i_NamedDeleter(v8::Local<v8::String> property, const v8::PropertyCallbackInfo<v8::Boolean>& args)
{
    v8::Local<v8::Boolean> vr;

    METHOD_NAME("Map.undefined");
    METHOD_INSTANCE(Map_base);
    PROPERTY_ENTER();

    exlib::string k;
    GetArgumentValue(isolate, property, k);
    if (class_info().has(k.c_str())) {
        args.GetReturnValue().Set(v8::False(isolate));
        return;
    }

    hr = pInst->_named_deleter(k, vr);
    METHOD_RETURN1();
}
}

#endif
