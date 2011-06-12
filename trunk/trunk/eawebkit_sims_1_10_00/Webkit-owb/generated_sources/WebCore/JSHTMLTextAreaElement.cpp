/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

/*
* This file was modified by Electronic Arts Inc Copyright � 2009
*/

#include "config.h"

#include "JSHTMLTextAreaElement.h"

#include <wtf/GetPtr.h>

#include "HTMLFormElement.h"
#include "HTMLTextAreaElement.h"
#include "JSHTMLFormElement.h"
#include "KURL.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashTableValue JSHTMLTextAreaElementTableValues[15] =
{
    { "defaultValue", (intptr_t)JSHTMLTextAreaElement::DefaultValueAttrNum, DontDelete, 0 },
    { "form", (intptr_t)JSHTMLTextAreaElement::FormAttrNum, DontDelete|ReadOnly, 0 },
    { "accessKey", (intptr_t)JSHTMLTextAreaElement::AccessKeyAttrNum, DontDelete, 0 },
    { "cols", (intptr_t)JSHTMLTextAreaElement::ColsAttrNum, DontDelete, 0 },
    { "disabled", (intptr_t)JSHTMLTextAreaElement::DisabledAttrNum, DontDelete, 0 },
    { "autofocus", (intptr_t)JSHTMLTextAreaElement::AutofocusAttrNum, DontDelete, 0 },
    { "name", (intptr_t)JSHTMLTextAreaElement::NameAttrNum, DontDelete, 0 },
    { "readOnly", (intptr_t)JSHTMLTextAreaElement::ReadOnlyAttrNum, DontDelete, 0 },
    { "rows", (intptr_t)JSHTMLTextAreaElement::RowsAttrNum, DontDelete, 0 },
    { "type", (intptr_t)JSHTMLTextAreaElement::TypeAttrNum, DontDelete|ReadOnly, 0 },
    { "value", (intptr_t)JSHTMLTextAreaElement::ValueAttrNum, DontDelete, 0 },
    { "selectionStart", (intptr_t)JSHTMLTextAreaElement::SelectionStartAttrNum, DontDelete, 0 },
    { "selectionEnd", (intptr_t)JSHTMLTextAreaElement::SelectionEndAttrNum, DontDelete, 0 },
    { "constructor", (intptr_t)JSHTMLTextAreaElement::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLTextAreaElementTable = { 255, JSHTMLTextAreaElementTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSHTMLTextAreaElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLTextAreaElementConstructorTable = { 0, JSHTMLTextAreaElementConstructorTableValues, 0 };

class JSHTMLTextAreaElementConstructor : public DOMObject {
public:
    JSHTMLTextAreaElementConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSHTMLTextAreaElementPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSHTMLTextAreaElementConstructor::s_info = { "HTMLTextAreaElementConstructor", 0, &JSHTMLTextAreaElementConstructorTable, 0 };

bool JSHTMLTextAreaElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLTextAreaElementConstructor, DOMObject>(exec, &JSHTMLTextAreaElementConstructorTable, this, propertyName, slot);
}

JSValue* JSHTMLTextAreaElementConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLTextAreaElementPrototypeTableValues[3] =
{
    { "select", (intptr_t)jsHTMLTextAreaElementPrototypeFunctionSelect, DontDelete|Function, 0 },
    { "setSelectionRange", (intptr_t)jsHTMLTextAreaElementPrototypeFunctionSetSelectionRange, DontDelete|Function, 2 },
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLTextAreaElementPrototypeTable = { 15, JSHTMLTextAreaElementPrototypeTableValues, 0 };

const ClassInfo JSHTMLTextAreaElementPrototype::s_info = { "HTMLTextAreaElementPrototype", 0, &JSHTMLTextAreaElementPrototypeTable, 0 };

JSObject* JSHTMLTextAreaElementPrototype::self(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier prototypeIdentifier(exec, "[[JSHTMLTextAreaElement.prototype]]");
    return KJS::cacheGlobalObject<JSHTMLTextAreaElementPrototype>(exec, prototypeIdentifier);
}

bool JSHTMLTextAreaElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSHTMLTextAreaElementPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSHTMLTextAreaElement::s_info = { "HTMLTextAreaElement", &JSHTMLElement::s_info, &JSHTMLTextAreaElementTable , 0 };

JSHTMLTextAreaElement::JSHTMLTextAreaElement(JSObject* prototype, HTMLTextAreaElement* impl)
    : JSHTMLElement(prototype, impl)
{
}

bool JSHTMLTextAreaElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLTextAreaElement, Base>(exec, &JSHTMLTextAreaElementTable, this, propertyName, slot);
}

JSValue* JSHTMLTextAreaElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case DefaultValueAttrNum: {
        HTMLTextAreaElement* imp = static_cast<HTMLTextAreaElement*>(impl());
        return jsString(exec, imp->defaultValue());
    }
    case FormAttrNum: {
        HTMLTextAreaElement* imp = static_cast<HTMLTextAreaElement*>(impl());
        return toJS(exec, WTF::getPtr(imp->form()));
    }
    case AccessKeyAttrNum: {
        HTMLTextAreaElement* imp = static_cast<HTMLTextAreaElement*>(impl());
        return jsString(exec, imp->accessKey());
    }
    case ColsAttrNum: {
        HTMLTextAreaElement* imp = static_cast<HTMLTextAreaElement*>(impl());
        return jsNumber(exec, imp->cols());
    }
    case DisabledAttrNum: {
        HTMLTextAreaElement* imp = static_cast<HTMLTextAreaElement*>(impl());
        return jsBoolean(imp->disabled());
    }
    case AutofocusAttrNum: {
        HTMLTextAreaElement* imp = static_cast<HTMLTextAreaElement*>(impl());
        return jsBoolean(imp->autofocus());
    }
    case NameAttrNum: {
        HTMLTextAreaElement* imp = static_cast<HTMLTextAreaElement*>(impl());
        return jsString(exec, imp->name());
    }
    case ReadOnlyAttrNum: {
        HTMLTextAreaElement* imp = static_cast<HTMLTextAreaElement*>(impl());
        return jsBoolean(imp->readOnly());
    }
    case RowsAttrNum: {
        HTMLTextAreaElement* imp = static_cast<HTMLTextAreaElement*>(impl());
        return jsNumber(exec, imp->rows());
    }
    case TypeAttrNum: {
        HTMLTextAreaElement* imp = static_cast<HTMLTextAreaElement*>(impl());
        return jsString(exec, imp->type());
    }
    case ValueAttrNum: {
        HTMLTextAreaElement* imp = static_cast<HTMLTextAreaElement*>(impl());
        return jsString(exec, imp->value());
    }
    case SelectionStartAttrNum: {
        HTMLTextAreaElement* imp = static_cast<HTMLTextAreaElement*>(impl());
        return jsNumber(exec, imp->selectionStart());
    }
    case SelectionEndAttrNum: {
        HTMLTextAreaElement* imp = static_cast<HTMLTextAreaElement*>(impl());
        return jsNumber(exec, imp->selectionEnd());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSHTMLTextAreaElement::put(ExecState* exec, const Identifier& propertyName, JSValue* value)
{
    lookupPut<JSHTMLTextAreaElement, Base>(exec, propertyName, value, &JSHTMLTextAreaElementTable, this);
}

void JSHTMLTextAreaElement::putValueProperty(ExecState* exec, int token, JSValue* value)
{
    switch (token) {
    case DefaultValueAttrNum: {
        HTMLTextAreaElement* imp = static_cast<HTMLTextAreaElement*>(impl());
        imp->setDefaultValue(valueToStringWithNullCheck(exec, value));
        break;
    }
    case AccessKeyAttrNum: {
        HTMLTextAreaElement* imp = static_cast<HTMLTextAreaElement*>(impl());
        imp->setAccessKey(valueToStringWithNullCheck(exec, value));
        break;
    }
    case ColsAttrNum: {
        HTMLTextAreaElement* imp = static_cast<HTMLTextAreaElement*>(impl());
        imp->setCols(value->toInt32(exec));
        break;
    }
    case DisabledAttrNum: {
        HTMLTextAreaElement* imp = static_cast<HTMLTextAreaElement*>(impl());
        imp->setDisabled(value->toBoolean(exec));
        break;
    }
    case AutofocusAttrNum: {
        HTMLTextAreaElement* imp = static_cast<HTMLTextAreaElement*>(impl());
        imp->setAutofocus(value->toBoolean(exec));
        break;
    }
    case NameAttrNum: {
        HTMLTextAreaElement* imp = static_cast<HTMLTextAreaElement*>(impl());
        imp->setName(valueToStringWithNullCheck(exec, value));
        break;
    }
    case ReadOnlyAttrNum: {
        HTMLTextAreaElement* imp = static_cast<HTMLTextAreaElement*>(impl());
        imp->setReadOnly(value->toBoolean(exec));
        break;
    }
    case RowsAttrNum: {
        HTMLTextAreaElement* imp = static_cast<HTMLTextAreaElement*>(impl());
        imp->setRows(value->toInt32(exec));
        break;
    }
    case ValueAttrNum: {
        HTMLTextAreaElement* imp = static_cast<HTMLTextAreaElement*>(impl());
        imp->setValue(valueToStringWithNullCheck(exec, value));
        break;
    }
    case SelectionStartAttrNum: {
        HTMLTextAreaElement* imp = static_cast<HTMLTextAreaElement*>(impl());
        imp->setSelectionStart(value->toInt32(exec));
        break;
    }
    case SelectionEndAttrNum: {
        HTMLTextAreaElement* imp = static_cast<HTMLTextAreaElement*>(impl());
        imp->setSelectionEnd(value->toInt32(exec));
        break;
    }
    }
}

JSValue* JSHTMLTextAreaElement::getConstructor(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier constructorIdentifier(exec, "[[HTMLTextAreaElement.constructor]]");
    return KJS::cacheGlobalObject<JSHTMLTextAreaElementConstructor>(exec, constructorIdentifier);
}

JSValue* jsHTMLTextAreaElementPrototypeFunctionSelect(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSHTMLTextAreaElement::s_info))
        return throwError(exec, TypeError);
    JSHTMLTextAreaElement* castedThisObj = static_cast<JSHTMLTextAreaElement*>(thisValue);
    HTMLTextAreaElement* imp = static_cast<HTMLTextAreaElement*>(castedThisObj->impl());

    imp->select();
    return jsUndefined();
}

JSValue* jsHTMLTextAreaElementPrototypeFunctionSetSelectionRange(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSHTMLTextAreaElement::s_info))
        return throwError(exec, TypeError);
    JSHTMLTextAreaElement* castedThisObj = static_cast<JSHTMLTextAreaElement*>(thisValue);
    HTMLTextAreaElement* imp = static_cast<HTMLTextAreaElement*>(castedThisObj->impl());
    int start = args[0]->toInt32(exec);
    int end = args[1]->toInt32(exec);

    imp->setSelectionRange(start, end);
    return jsUndefined();
}


}