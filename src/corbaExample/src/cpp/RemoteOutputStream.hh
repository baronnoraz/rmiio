// This file is generated by omniidl (C++ backend)- omniORB_4_1. Do not edit.
#ifndef __RemoteOutputStream_hh__
#define __RemoteOutputStream_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_RemoteOutputStream
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_RemoteOutputStream
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_RemoteOutputStream
#endif



#ifndef __IOEx_hh_EXTERNAL_GUARD__
#define __IOEx_hh_EXTERNAL_GUARD__
#include <IOEx.hh>
#endif
#ifndef __seq1__StackTraceElement_hh_EXTERNAL_GUARD__
#define __seq1__StackTraceElement_hh_EXTERNAL_GUARD__
#include <seq1_StackTraceElement.hh>
#endif
#ifndef __corbaidl_hh_EXTERNAL_GUARD__
#define __corbaidl_hh_EXTERNAL_GUARD__
#include <corbaidl.hh>
#endif
#ifndef __boxes_hh_EXTERNAL_GUARD__
#define __boxes_hh_EXTERNAL_GUARD__
#include <boxes.hh>
#endif
#ifndef __StackTraceElement_hh_EXTERNAL_GUARD__
#define __StackTraceElement_hh_EXTERNAL_GUARD__
#include <StackTraceElement.hh>
#endif
#ifndef __Throwable_hh_EXTERNAL_GUARD__
#define __Throwable_hh_EXTERNAL_GUARD__
#include <Throwable.hh>
#endif
#ifndef __Exception_hh_EXTERNAL_GUARD__
#define __Exception_hh_EXTERNAL_GUARD__
#include <Exception.hh>
#endif
#ifndef __IOException_hh_EXTERNAL_GUARD__
#define __IOException_hh_EXTERNAL_GUARD__
#include <IOException.hh>
#endif
#ifndef __seq1__octet_hh_EXTERNAL_GUARD__
#define __seq1__octet_hh_EXTERNAL_GUARD__
#include <seq1_octet.hh>
#endif



#ifdef USE_stub_in_nt_dll
# ifndef USE_core_stub_in_nt_dll
#  define USE_core_stub_in_nt_dll
# endif
# ifndef USE_dyn_stub_in_nt_dll
#  define USE_dyn_stub_in_nt_dll
# endif
#endif

#ifdef _core_attr
# error "A local CPP macro _core_attr has already been defined."
#else
# ifdef  USE_core_stub_in_nt_dll
#  define _core_attr _OMNIORB_NTDLL_IMPORT
# else
#  define _core_attr
# endif
#endif

#ifdef _dyn_attr
# error "A local CPP macro _dyn_attr has already been defined."
#else
# ifdef  USE_dyn_stub_in_nt_dll
#  define _dyn_attr _OMNIORB_NTDLL_IMPORT
# else
#  define _dyn_attr
# endif
#endif





_CORBA_MODULE com

_CORBA_MODULE_BEG

  _CORBA_MODULE healthmarketscience

  _CORBA_MODULE_BEG

    _CORBA_MODULE rmiio

    _CORBA_MODULE_BEG

#ifndef __com_mhealthmarketscience_mrmiio_mRemoteOutputStream__
#define __com_mhealthmarketscience_mrmiio_mRemoteOutputStream__

      class RemoteOutputStream;
      class _objref_RemoteOutputStream;
      class _impl_RemoteOutputStream;
      
      typedef _objref_RemoteOutputStream* RemoteOutputStream_ptr;
      typedef RemoteOutputStream_ptr RemoteOutputStreamRef;

      class RemoteOutputStream_Helper {
      public:
        typedef RemoteOutputStream_ptr _ptr_type;

        static _ptr_type _nil();
        static _CORBA_Boolean is_nil(_ptr_type);
        static void release(_ptr_type);
        static void duplicate(_ptr_type);
        static void marshalObjRef(_ptr_type, cdrStream&);
        static _ptr_type unmarshalObjRef(cdrStream&);
      };

      typedef _CORBA_ObjRef_Var<_objref_RemoteOutputStream, RemoteOutputStream_Helper> RemoteOutputStream_var;
      typedef _CORBA_ObjRef_OUT_arg<_objref_RemoteOutputStream,RemoteOutputStream_Helper > RemoteOutputStream_out;

#endif

      // interface RemoteOutputStream
      class RemoteOutputStream {
      public:
        // Declarations for this interface type.
        typedef RemoteOutputStream_ptr _ptr_type;
        typedef RemoteOutputStream_var _var_type;

        static _ptr_type _duplicate(_ptr_type);
        static _ptr_type _narrow(CORBA::Object_ptr);
        static _ptr_type _unchecked_narrow(CORBA::Object_ptr);
        
        static _ptr_type _nil();

        static inline void _marshalObjRef(_ptr_type, cdrStream&);

        static inline _ptr_type _unmarshalObjRef(cdrStream& s) {
          omniObjRef* o = omniObjRef::_unMarshal(_PD_repoId,s);
          if (o)
            return (_ptr_type) o->_ptrToObjRef(_PD_repoId);
          else
            return _nil();
        }

        static _core_attr const char* _PD_repoId;

        // Other IDL defined within this scope.
        
      };

      class _objref_RemoteOutputStream :
        public virtual CORBA::Object,
        public virtual omniObjRef
      {
      public:
        void flush();
        CORBA::Boolean usingGZIPCompression();
        void close(CORBA::Boolean writeSuccess);
        void writePacket(org::omg::boxedRMI::seq1_octet* packet, CORBA::Long packetId);

        inline _objref_RemoteOutputStream()  { _PR_setobj(0); }  // nil
        _objref_RemoteOutputStream(omniIOR*, omniIdentity*);

      protected:
        virtual ~_objref_RemoteOutputStream();

        
      private:
        virtual void* _ptrToObjRef(const char*);

        _objref_RemoteOutputStream(const _objref_RemoteOutputStream&);
        _objref_RemoteOutputStream& operator = (const _objref_RemoteOutputStream&);
        // not implemented

        friend class RemoteOutputStream;
      };

      class _pof_RemoteOutputStream : public _OMNI_NS(proxyObjectFactory) {
      public:
        inline _pof_RemoteOutputStream() : _OMNI_NS(proxyObjectFactory)(RemoteOutputStream::_PD_repoId) {}
        virtual ~_pof_RemoteOutputStream();

        virtual omniObjRef* newObjRef(omniIOR*,omniIdentity*);
        virtual _CORBA_Boolean is_a(const char*) const;
      };

      class _impl_RemoteOutputStream :
        public virtual omniServant
      {
      public:
        virtual ~_impl_RemoteOutputStream();

        virtual void flush() = 0;
        virtual CORBA::Boolean usingGZIPCompression() = 0;
        virtual void close(CORBA::Boolean writeSuccess) = 0;
        virtual void writePacket(org::omg::boxedRMI::seq1_octet* packet, CORBA::Long packetId) = 0;
        
      public:  // Really protected, workaround for xlC
        virtual _CORBA_Boolean _dispatch(omniCallHandle&);

      private:
        virtual void* _ptrToInterface(const char*);
        virtual const char* _mostDerivedRepoId();
        
      };


    _CORBA_MODULE_END

  _CORBA_MODULE_END

_CORBA_MODULE_END



_CORBA_MODULE POA_com
_CORBA_MODULE_BEG

  _CORBA_MODULE healthmarketscience
  _CORBA_MODULE_BEG

    _CORBA_MODULE rmiio
    _CORBA_MODULE_BEG

      class RemoteOutputStream :
        public virtual com::healthmarketscience::rmiio::_impl_RemoteOutputStream,
        public virtual PortableServer::ServantBase
      {
      public:
        virtual ~RemoteOutputStream();

        inline ::com::healthmarketscience::rmiio::RemoteOutputStream_ptr _this() {
          return (::com::healthmarketscience::rmiio::RemoteOutputStream_ptr) _do_this(::com::healthmarketscience::rmiio::RemoteOutputStream::_PD_repoId);
        }
      };

    _CORBA_MODULE_END

  _CORBA_MODULE_END

_CORBA_MODULE_END



_CORBA_MODULE OBV_com
_CORBA_MODULE_BEG

  _CORBA_MODULE healthmarketscience
  _CORBA_MODULE_BEG

    _CORBA_MODULE rmiio
    _CORBA_MODULE_BEG

    _CORBA_MODULE_END

  _CORBA_MODULE_END

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr



inline void
com::healthmarketscience::rmiio::RemoteOutputStream::_marshalObjRef(::com::healthmarketscience::rmiio::RemoteOutputStream_ptr obj, cdrStream& s) {
  omniObjRef::_marshal(obj->_PR_getobj(),s);
}




#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_RemoteOutputStream
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_RemoteOutputStream
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_RemoteOutputStream
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_RemoteOutputStream
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_RemoteOutputStream
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_RemoteOutputStream
#endif

#endif  // __RemoteOutputStream_hh__

