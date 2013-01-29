#include "include/cef_base.h"
#include "include/cef_v8.h"

namespace v8_extensions {

  class OnigScanner : public CefV8Handler {
  public:
    OnigScanner();
    void CreateContextBinding(CefRefPtr<CefV8Context> context);
    virtual bool Execute(const CefString& name,
                         CefRefPtr<CefV8Value> object,
                         const CefV8ValueList& arguments,
                         CefRefPtr<CefV8Value>& retval,
                         CefString& exception) OVERRIDE;

    // Provide the reference counting implementation for this class.
    IMPLEMENT_REFCOUNTING(OnigRegExp);

    private:
      OnigScanner(OnigScanner const&);
      void operator=(OnigScanner const&);
  };

}