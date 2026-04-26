#include "pch-cpp.hpp"





struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker;
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[1]);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker;
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker<R, T1*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
struct Dictionary_2_tE62442FA3F7B8D308BBF4D149C8DF16A2DC21CAD;
struct Dictionary_2_tA1A7D1A1B05D9250844051544D9046C7459D6C40;
struct Func_2_tCF2B6702148DF79B408F0FFB9B8AE5B305C1FE17;
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0;
struct Func_2_tF20E7560B31C0A5F430905666EFA3C85DC9E43F1;
struct Func_2_tE1D2E4700064383DA4D0A68CB526432EAC0C04B9;
struct ICollection_1_tB388ED908E2D241F56264CA971F25D9ADC1ADEC3;
struct IDictionary_2_t823399AD16F88CDEB25958D8CB61771376A5ADED;
struct IDictionary_2_t4D3B65115D85F2C21975A2BBF4A23860F8BCD02F;
struct IDictionary_2_tEF2F24F05DE454E9375E6C03D964C853EE2F724B;
struct IDictionary_2_tEDC9B805C3AE3213E6E68C5D421DC47438466C45;
struct IEnumerable_1_t1EC9EB35B0A130CF2CBCDE9C7A237D8621D4FCC6;
struct IEnumerator_1_tFABD3B897F1296469E9A2DB9BCF6C89439049208;
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct IEqualityComparer_1_t94D5B2FB65FC47D589EBE9D672B2F4E91A12E74E;
struct IEqualityComparer_1_t2A813D3F2774C05517F0C152C066B070644474C6;
struct KeyCollection_tB45A861D090B15129521119AE48ED3813820A974;
struct KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55;
struct KeyCollection_tEF135DBB5F1201CD7FDE7D85E8389A27D40645FE;
struct KeyCollection_t3D58569E77D6B5A7A8B10971A01962DCCA7BD0F8;
struct ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA;
struct ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40;
struct ValueCollection_t9AE77665792982EA578C8D37FB6065FB30D2A899;
struct ValueCollection_t2ECFD1EF2E6C13B6A68B3C98E4A5936643D3C844;
struct vidL3DsH4E96BjEd9UH_2_t6F1F2D52AF33CB6566BDCD2DED1BFC9DB90F4B67;
struct vidL3DsH4E96BjEd9UH_2_t4433FC9C7D2088518F6001E28BB2868B367F48E9;
struct vidL3DsH4E96BjEd9UH_2_tA989B7A030C3DCA9B826EDA34B988B10B5C92DC8;
struct vidL3DsH4E96BjEd9UH_2_t378F29678E95DC9EA607A863EA3ADEB39A2771C5;
struct zvjcJSqwDd98hxFcxJL_2_t39B92566EB0FE2FC9171C2B7328D5F9DE7A75AA0;
struct EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54;
struct EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3;
struct EntryU5BU5D_t90C64DF7F413EF80A746F428FA2187267EA290B4;
struct EntryU5BU5D_t2E0E8C42A5DB9DFFD4ADE38799F58228CFB07E7E;
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16;
struct IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5;
struct IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct MethodInfo_t;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8;
IL2CPP_EXTERN_C String_t* _stringLiteralF152D9FF145C02638C3A1C1C199FDCB227AD9B2D;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Cast_TisDictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_m6DC5AE0678BB43B49AC178004FA3167907385B01_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CU3Ec_t8BD8C13BF0663DC2955F288BBE4AB6B6B46FBEA8  : public RuntimeObject
{
};
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* ____keys;
	ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* ____keys;
	ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tE62442FA3F7B8D308BBF4D149C8DF16A2DC21CAD  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t90C64DF7F413EF80A746F428FA2187267EA290B4* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tEF135DBB5F1201CD7FDE7D85E8389A27D40645FE* ____keys;
	ValueCollection_t9AE77665792982EA578C8D37FB6065FB30D2A899* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_tA1A7D1A1B05D9250844051544D9046C7459D6C40  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t2E0E8C42A5DB9DFFD4ADE38799F58228CFB07E7E* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t3D58569E77D6B5A7A8B10971A01962DCCA7BD0F8* ____keys;
	ValueCollection_t2ECFD1EF2E6C13B6A68B3C98E4A5936643D3C844* ____values;
	RuntimeObject* ____syncRoot;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct vidL3DsH4E96BjEd9UH_2_t6F1F2D52AF33CB6566BDCD2DED1BFC9DB90F4B67  : public RuntimeObject
{
	RuntimeObject* ___TCksMDM0bA;
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ___TR0svuNpWJ;
	Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___hwss51nOIJ;
};
struct vidL3DsH4E96BjEd9UH_2_t4433FC9C7D2088518F6001E28BB2868B367F48E9  : public RuntimeObject
{
	RuntimeObject* ___TCksMDM0bA;
	Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ___TR0svuNpWJ;
	Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___hwss51nOIJ;
};
struct vidL3DsH4E96BjEd9UH_2_tA989B7A030C3DCA9B826EDA34B988B10B5C92DC8  : public RuntimeObject
{
	RuntimeObject* ___TCksMDM0bA;
	Dictionary_2_tE62442FA3F7B8D308BBF4D149C8DF16A2DC21CAD* ___TR0svuNpWJ;
	Func_2_tF20E7560B31C0A5F430905666EFA3C85DC9E43F1* ___hwss51nOIJ;
};
struct vidL3DsH4E96BjEd9UH_2_t378F29678E95DC9EA607A863EA3ADEB39A2771C5  : public RuntimeObject
{
	RuntimeObject* ___TCksMDM0bA;
	Dictionary_2_tA1A7D1A1B05D9250844051544D9046C7459D6C40* ___TR0svuNpWJ;
	Func_2_tE1D2E4700064383DA4D0A68CB526432EAC0C04B9* ___hwss51nOIJ;
};
struct zvjcJSqwDd98hxFcxJL_2_t39B92566EB0FE2FC9171C2B7328D5F9DE7A75AA0  : public RuntimeObject
{
	RuntimeObject* ___OxIqq0XCoB;
	RuntimeObject* ___DCequlZp7n;
	RuntimeObject* ___NCiqx6AHfv;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
typedef Il2CppFullySharedGenericStruct KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669;
struct pZmRKgz7lyhuXpWlEUn_2_t9C5D631ECF4EB6A37BDA01EE19B271A76D3F9C75 
{
	RuntimeObject* ___MHMzB3putX;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB 
{
	RuntimeObject* ____key;
	RuntimeObject* ____value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_pinvoke
{
	Il2CppIUnknown* ____key;
	Il2CppIUnknown* ____value;
};
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_com
{
	Il2CppIUnknown* ____key;
	Il2CppIUnknown* ____value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct VOT4d6FFPH1Gtv42RMNy_tD2714404642DD9632968173CF2EF10E2AE4D30CF 
{
	String_t* ___oYbFF6ZPTDQ;
	String_t* ___GRpFFw1j5iK;
};
struct VOT4d6FFPH1Gtv42RMNy_tD2714404642DD9632968173CF2EF10E2AE4D30CF_marshaled_pinvoke
{
	char* ___oYbFF6ZPTDQ;
	char* ___GRpFFw1j5iK;
};
struct VOT4d6FFPH1Gtv42RMNy_tD2714404642DD9632968173CF2EF10E2AE4D30CF_marshaled_com
{
	Il2CppChar* ___oYbFF6ZPTDQ;
	Il2CppChar* ___GRpFFw1j5iK;
};
struct XFcsvjzg8YPVu8hqeMO_t55C5991AC4ED21586C98349E6820420D09285D2E 
{
	Type_t* ___D51zQHgssf;
	Type_t* ___VPUzJS2CBM;
};
struct XFcsvjzg8YPVu8hqeMO_t55C5991AC4ED21586C98349E6820420D09285D2E_marshaled_pinvoke
{
	Type_t* ___D51zQHgssf;
	Type_t* ___VPUzJS2CBM;
};
struct XFcsvjzg8YPVu8hqeMO_t55C5991AC4ED21586C98349E6820420D09285D2E_marshaled_com
{
	Type_t* ___D51zQHgssf;
	Type_t* ___VPUzJS2CBM;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Func_2_tCF2B6702148DF79B408F0FFB9B8AE5B305C1FE17  : public MulticastDelegate_t
{
};
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624  : public MulticastDelegate_t
{
};
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0  : public MulticastDelegate_t
{
};
struct Func_2_tF20E7560B31C0A5F430905666EFA3C85DC9E43F1  : public MulticastDelegate_t
{
};
struct Func_2_tE1D2E4700064383DA4D0A68CB526432EAC0C04B9  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct U3CU3Ec_t8BD8C13BF0663DC2955F288BBE4AB6B6B46FBEA8_StaticFields
{
	U3CU3Ec_t8BD8C13BF0663DC2955F288BBE4AB6B6B46FBEA8* ___U3CU3E9;
	Func_2_tCF2B6702148DF79B408F0FFB9B8AE5B305C1FE17* ___U3CU3E9__25_0;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* vidL3DsH4E96BjEd9UH_2_AVZs9qB71u_m331AAC72D00F78E44A6E62517C2EFAAF3555C4DE_gshared (vidL3DsH4E96BjEd9UH_2_t6F1F2D52AF33CB6566BDCD2DED1BFC9DB90F4B67* __this, RuntimeObject* ___0_S7lcYxsNT7ijLpHHvKH, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m623BF34EB93B2B3A3B7D46743B508E2E2958939E_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mBA94A8C4921AE5E4C701892273211E3C25945A1A_gshared (Dictionary_2_tE62442FA3F7B8D308BBF4D149C8DF16A2DC21CAD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mCF0CB40AE23407C46BD6817508B351DA00162F3C_gshared (Dictionary_2_tE62442FA3F7B8D308BBF4D149C8DF16A2DC21CAD* __this, VOT4d6FFPH1Gtv42RMNy_tD2714404642DD9632968173CF2EF10E2AE4D30CF ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* vidL3DsH4E96BjEd9UH_2_AVZs9qB71u_mC647419E7C674436B929BDCCE8EF0F9488CDC2C9_gshared (vidL3DsH4E96BjEd9UH_2_tA989B7A030C3DCA9B826EDA34B988B10B5C92DC8* __this, VOT4d6FFPH1Gtv42RMNy_tD2714404642DD9632968173CF2EF10E2AE4D30CF ___0_S7lcYxsNT7ijLpHHvKH, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mEC05F08018197F27D94CA83FED280BBAC5759094_gshared_inline (Func_2_tF20E7560B31C0A5F430905666EFA3C85DC9E43F1* __this, VOT4d6FFPH1Gtv42RMNy_tD2714404642DD9632968173CF2EF10E2AE4D30CF ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m82BDA5E1230BB856804071AB86D4BC1E19FF5374_gshared (Dictionary_2_tE62442FA3F7B8D308BBF4D149C8DF16A2DC21CAD* __this, VOT4d6FFPH1Gtv42RMNy_tD2714404642DD9632968173CF2EF10E2AE4D30CF ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m03998FFE2C448E9B1DD7FA1F661A532E46CD9FE0_gshared (Dictionary_2_tE62442FA3F7B8D308BBF4D149C8DF16A2DC21CAD* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m9C060E7CDCC8DC5E8D3D578226F7FD7898353572_gshared (Dictionary_2_tA1A7D1A1B05D9250844051544D9046C7459D6C40* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mE64FA67C24FA787AF5748C82216E1EA34DA3BAF8_gshared (Dictionary_2_tA1A7D1A1B05D9250844051544D9046C7459D6C40* __this, XFcsvjzg8YPVu8hqeMO_t55C5991AC4ED21586C98349E6820420D09285D2E ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* vidL3DsH4E96BjEd9UH_2_AVZs9qB71u_mFE19C18A04D8472A0E24DA91B7C1B71184E3272D_gshared (vidL3DsH4E96BjEd9UH_2_t378F29678E95DC9EA607A863EA3ADEB39A2771C5* __this, XFcsvjzg8YPVu8hqeMO_t55C5991AC4ED21586C98349E6820420D09285D2E ___0_S7lcYxsNT7ijLpHHvKH, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_m406CF2B55A6DEF4E73C17A81ADED3A69354C6E6B_gshared_inline (Func_2_tE1D2E4700064383DA4D0A68CB526432EAC0C04B9* __this, XFcsvjzg8YPVu8hqeMO_t55C5991AC4ED21586C98349E6820420D09285D2E ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mD16CBA4C7D5CC211A1F0DC91AEDB1D0BCCFE9C2B_gshared (Dictionary_2_tA1A7D1A1B05D9250844051544D9046C7459D6C40* __this, XFcsvjzg8YPVu8hqeMO_t55C5991AC4ED21586C98349E6820420D09285D2E ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7061CD73993A277387ED0CBDD191679DF5229A05_gshared (Dictionary_2_tA1A7D1A1B05D9250844051544D9046C7459D6C40* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E_gshared (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Cast_TisDictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_m6DC5AE0678BB43B49AC178004FA3167907385B01_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void pZmRKgz7lyhuXpWlEUn_2__ctor_mAC9EF1F72047F93F88B567E088994154F77B6E89_gshared (pZmRKgz7lyhuXpWlEUn_2_t9C5D631ECF4EB6A37BDA01EE19B271A76D3F9C75* __this, RuntimeObject* ___0_U20, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XZnnwMFxNaQO9Fnc4AIv_BabFoetprCu_m4FDBEA2720A4CB4966F76A1C6D3339F142EB0ABE (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329 (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
inline bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849 (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, RuntimeObject*, RuntimeObject**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___0_key, ___1_value, method);
}
inline RuntimeObject* vidL3DsH4E96BjEd9UH_2_AVZs9qB71u_m331AAC72D00F78E44A6E62517C2EFAAF3555C4DE (vidL3DsH4E96BjEd9UH_2_t6F1F2D52AF33CB6566BDCD2DED1BFC9DB90F4B67* __this, RuntimeObject* ___0_S7lcYxsNT7ijLpHHvKH, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (vidL3DsH4E96BjEd9UH_2_t6F1F2D52AF33CB6566BDCD2DED1BFC9DB90F4B67*, RuntimeObject*, const RuntimeMethod*))vidL3DsH4E96BjEd9UH_2_AVZs9qB71u_m331AAC72D00F78E44A6E62517C2EFAAF3555C4DE_gshared)(__this, ___0_S7lcYxsNT7ijLpHHvKH, method);
}
inline RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_tACBF5A1656250800CE861707354491F0611F6624*, RuntimeObject*, const RuntimeMethod*))Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline)(__this, ___0_arg, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
inline void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Dictionary_2__ctor_m623BF34EB93B2B3A3B7D46743B508E2E2958939E (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m623BF34EB93B2B3A3B7D46743B508E2E2958939E_gshared)(__this, ___0_dictionary, method);
}
inline void Dictionary_2__ctor_mBA94A8C4921AE5E4C701892273211E3C25945A1A (Dictionary_2_tE62442FA3F7B8D308BBF4D149C8DF16A2DC21CAD* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE62442FA3F7B8D308BBF4D149C8DF16A2DC21CAD*, const RuntimeMethod*))Dictionary_2__ctor_mBA94A8C4921AE5E4C701892273211E3C25945A1A_gshared)(__this, method);
}
inline bool Dictionary_2_TryGetValue_mCF0CB40AE23407C46BD6817508B351DA00162F3C (Dictionary_2_tE62442FA3F7B8D308BBF4D149C8DF16A2DC21CAD* __this, VOT4d6FFPH1Gtv42RMNy_tD2714404642DD9632968173CF2EF10E2AE4D30CF ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tE62442FA3F7B8D308BBF4D149C8DF16A2DC21CAD*, VOT4d6FFPH1Gtv42RMNy_tD2714404642DD9632968173CF2EF10E2AE4D30CF, RuntimeObject**, const RuntimeMethod*))Dictionary_2_TryGetValue_mCF0CB40AE23407C46BD6817508B351DA00162F3C_gshared)(__this, ___0_key, ___1_value, method);
}
inline RuntimeObject* vidL3DsH4E96BjEd9UH_2_AVZs9qB71u_mC647419E7C674436B929BDCCE8EF0F9488CDC2C9 (vidL3DsH4E96BjEd9UH_2_tA989B7A030C3DCA9B826EDA34B988B10B5C92DC8* __this, VOT4d6FFPH1Gtv42RMNy_tD2714404642DD9632968173CF2EF10E2AE4D30CF ___0_S7lcYxsNT7ijLpHHvKH, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (vidL3DsH4E96BjEd9UH_2_tA989B7A030C3DCA9B826EDA34B988B10B5C92DC8*, VOT4d6FFPH1Gtv42RMNy_tD2714404642DD9632968173CF2EF10E2AE4D30CF, const RuntimeMethod*))vidL3DsH4E96BjEd9UH_2_AVZs9qB71u_mC647419E7C674436B929BDCCE8EF0F9488CDC2C9_gshared)(__this, ___0_S7lcYxsNT7ijLpHHvKH, method);
}
inline RuntimeObject* Func_2_Invoke_mEC05F08018197F27D94CA83FED280BBAC5759094_inline (Func_2_tF20E7560B31C0A5F430905666EFA3C85DC9E43F1* __this, VOT4d6FFPH1Gtv42RMNy_tD2714404642DD9632968173CF2EF10E2AE4D30CF ___0_arg, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_tF20E7560B31C0A5F430905666EFA3C85DC9E43F1*, VOT4d6FFPH1Gtv42RMNy_tD2714404642DD9632968173CF2EF10E2AE4D30CF, const RuntimeMethod*))Func_2_Invoke_mEC05F08018197F27D94CA83FED280BBAC5759094_gshared_inline)(__this, ___0_arg, method);
}
inline void Dictionary_2_set_Item_m82BDA5E1230BB856804071AB86D4BC1E19FF5374 (Dictionary_2_tE62442FA3F7B8D308BBF4D149C8DF16A2DC21CAD* __this, VOT4d6FFPH1Gtv42RMNy_tD2714404642DD9632968173CF2EF10E2AE4D30CF ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE62442FA3F7B8D308BBF4D149C8DF16A2DC21CAD*, VOT4d6FFPH1Gtv42RMNy_tD2714404642DD9632968173CF2EF10E2AE4D30CF, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m82BDA5E1230BB856804071AB86D4BC1E19FF5374_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Dictionary_2__ctor_m03998FFE2C448E9B1DD7FA1F661A532E46CD9FE0 (Dictionary_2_tE62442FA3F7B8D308BBF4D149C8DF16A2DC21CAD* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE62442FA3F7B8D308BBF4D149C8DF16A2DC21CAD*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m03998FFE2C448E9B1DD7FA1F661A532E46CD9FE0_gshared)(__this, ___0_dictionary, method);
}
inline void Dictionary_2__ctor_m9C060E7CDCC8DC5E8D3D578226F7FD7898353572 (Dictionary_2_tA1A7D1A1B05D9250844051544D9046C7459D6C40* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA1A7D1A1B05D9250844051544D9046C7459D6C40*, const RuntimeMethod*))Dictionary_2__ctor_m9C060E7CDCC8DC5E8D3D578226F7FD7898353572_gshared)(__this, method);
}
inline bool Dictionary_2_TryGetValue_mE64FA67C24FA787AF5748C82216E1EA34DA3BAF8 (Dictionary_2_tA1A7D1A1B05D9250844051544D9046C7459D6C40* __this, XFcsvjzg8YPVu8hqeMO_t55C5991AC4ED21586C98349E6820420D09285D2E ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA1A7D1A1B05D9250844051544D9046C7459D6C40*, XFcsvjzg8YPVu8hqeMO_t55C5991AC4ED21586C98349E6820420D09285D2E, RuntimeObject**, const RuntimeMethod*))Dictionary_2_TryGetValue_mE64FA67C24FA787AF5748C82216E1EA34DA3BAF8_gshared)(__this, ___0_key, ___1_value, method);
}
inline RuntimeObject* vidL3DsH4E96BjEd9UH_2_AVZs9qB71u_mFE19C18A04D8472A0E24DA91B7C1B71184E3272D (vidL3DsH4E96BjEd9UH_2_t378F29678E95DC9EA607A863EA3ADEB39A2771C5* __this, XFcsvjzg8YPVu8hqeMO_t55C5991AC4ED21586C98349E6820420D09285D2E ___0_S7lcYxsNT7ijLpHHvKH, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (vidL3DsH4E96BjEd9UH_2_t378F29678E95DC9EA607A863EA3ADEB39A2771C5*, XFcsvjzg8YPVu8hqeMO_t55C5991AC4ED21586C98349E6820420D09285D2E, const RuntimeMethod*))vidL3DsH4E96BjEd9UH_2_AVZs9qB71u_mFE19C18A04D8472A0E24DA91B7C1B71184E3272D_gshared)(__this, ___0_S7lcYxsNT7ijLpHHvKH, method);
}
inline RuntimeObject* Func_2_Invoke_m406CF2B55A6DEF4E73C17A81ADED3A69354C6E6B_inline (Func_2_tE1D2E4700064383DA4D0A68CB526432EAC0C04B9* __this, XFcsvjzg8YPVu8hqeMO_t55C5991AC4ED21586C98349E6820420D09285D2E ___0_arg, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_tE1D2E4700064383DA4D0A68CB526432EAC0C04B9*, XFcsvjzg8YPVu8hqeMO_t55C5991AC4ED21586C98349E6820420D09285D2E, const RuntimeMethod*))Func_2_Invoke_m406CF2B55A6DEF4E73C17A81ADED3A69354C6E6B_gshared_inline)(__this, ___0_arg, method);
}
inline void Dictionary_2_set_Item_mD16CBA4C7D5CC211A1F0DC91AEDB1D0BCCFE9C2B (Dictionary_2_tA1A7D1A1B05D9250844051544D9046C7459D6C40* __this, XFcsvjzg8YPVu8hqeMO_t55C5991AC4ED21586C98349E6820420D09285D2E ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA1A7D1A1B05D9250844051544D9046C7459D6C40*, XFcsvjzg8YPVu8hqeMO_t55C5991AC4ED21586C98349E6820420D09285D2E, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_mD16CBA4C7D5CC211A1F0DC91AEDB1D0BCCFE9C2B_gshared)(__this, ___0_key, ___1_value, method);
}
inline void Dictionary_2__ctor_m7061CD73993A277387ED0CBDD191679DF5229A05 (Dictionary_2_tA1A7D1A1B05D9250844051544D9046C7459D6C40* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA1A7D1A1B05D9250844051544D9046C7459D6C40*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m7061CD73993A277387ED0CBDD191679DF5229A05_gshared)(__this, ___0_dictionary, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JdPCWqs4vjT4WYxXitk_pkFsBOJZEW_m01682DFE6DBE662519694ED4669B9D4F6CA496E4 (RuntimeObject* ___0_U20, String_t* ___1_U20, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_inline (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEntry_get_Value_m75FD18FE968AE131F28AA2CB0DF4895EBA39075E_inline (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, const RuntimeMethod* method) ;
inline void KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*))KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E_gshared)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7 (RuntimeObject* ___0_objA, RuntimeObject* ___1_objB, const RuntimeMethod* method) ;
inline RuntimeObject* Enumerable_Cast_TisDictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_m6DC5AE0678BB43B49AC178004FA3167907385B01 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Cast_TisDictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_m6DC5AE0678BB43B49AC178004FA3167907385B01_gshared)(___0_source, method);
}
inline void pZmRKgz7lyhuXpWlEUn_2__ctor_mAC9EF1F72047F93F88B567E088994154F77B6E89 (pZmRKgz7lyhuXpWlEUn_2_t9C5D631ECF4EB6A37BDA01EE19B271A76D3F9C75* __this, RuntimeObject* ___0_U20, const RuntimeMethod* method)
{
	((  void (*) (pZmRKgz7lyhuXpWlEUn_2_t9C5D631ECF4EB6A37BDA01EE19B271A76D3F9C75*, RuntimeObject*, const RuntimeMethod*))pZmRKgz7lyhuXpWlEUn_2__ctor_mAC9EF1F72047F93F88B567E088994154F77B6E89_gshared)(__this, ___0_U20, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Interlocked_CompareExchange_mC2F0AEDE6957F175ED944794E7AEECE2AED96B71 (RuntimeObject** ___0_location1, RuntimeObject* ___1_value, RuntimeObject* ___2_comparand, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 27022
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void vidL3DsH4E96BjEd9UH_2__ctor_mB6152C28C4F71742C927C2BD6C51A9EB1FAC8213_gshared (vidL3DsH4E96BjEd9UH_2_t6F1F2D52AF33CB6566BDCD2DED1BFC9DB90F4B67* __this, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___0_U20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	vidL3DsH4E96BjEd9UH_2_t6F1F2D52AF33CB6566BDCD2DED1BFC9DB90F4B67* G_B2_0 = NULL;
	vidL3DsH4E96BjEd9UH_2_t6F1F2D52AF33CB6566BDCD2DED1BFC9DB90F4B67* G_B1_0 = NULL;
	{
		XZnnwMFxNaQO9Fnc4AIv_BabFoetprCu_m4FDBEA2720A4CB4966F76A1C6D3339F142EB0ABE(NULL);
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___TCksMDM0bA = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TCksMDM0bA), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_1 = ___0_U20;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_0027;
		}
		G_B1_0 = __this;
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF152D9FF145C02638C3A1C1C199FDCB227AD9B2D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0027:
	{
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_3 = ___0_U20;
		NullCheck(G_B2_0);
		G_B2_0->___hwss51nOIJ = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_0->___hwss51nOIJ), (void*)L_3);
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_4 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___TR0svuNpWJ = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TR0svuNpWJ), (void*)L_4);
		return;
	}
}
// Method Definition Index: 27023
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* vidL3DsH4E96BjEd9UH_2_yVHspl9qZV_mDCC039D40CAC53CAA46E375D3E8D6F98F9E31385_gshared (vidL3DsH4E96BjEd9UH_2_t6F1F2D52AF33CB6566BDCD2DED1BFC9DB90F4B67* __this, RuntimeObject* ___0_RXCpCwsAZLkndO5Ip14, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_0 = __this->___TR0svuNpWJ;
		RuntimeObject* L_1 = ___0_RXCpCwsAZLkndO5Ip14;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_0, L_1, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		G_B3_0 = L_3;
		goto IL_001b;
	}

IL_0014:
	{
		RuntimeObject* L_4 = ___0_RXCpCwsAZLkndO5Ip14;
		RuntimeObject* L_5;
		L_5 = vidL3DsH4E96BjEd9UH_2_AVZs9qB71u_m331AAC72D00F78E44A6E62517C2EFAAF3555C4DE(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		G_B3_0 = L_5;
	}

IL_001b:
	{
		V_1 = G_B3_0;
		goto IL_001e;
	}

IL_001e:
	{
		RuntimeObject* L_6 = V_1;
		return L_6;
	}
}
// Method Definition Index: 27024
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* vidL3DsH4E96BjEd9UH_2_AVZs9qB71u_m331AAC72D00F78E44A6E62517C2EFAAF3555C4DE_gshared (vidL3DsH4E96BjEd9UH_2_t6F1F2D52AF33CB6566BDCD2DED1BFC9DB90F4B67* __this, RuntimeObject* ___0_S7lcYxsNT7ijLpHHvKH, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	{
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_0 = __this->___hwss51nOIJ;
		RuntimeObject* L_1 = ___0_S7lcYxsNT7ijLpHHvKH;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_inline(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		V_0 = L_2;
		RuntimeObject* L_3 = __this->___TCksMDM0bA;
		V_1 = L_3;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008a:
			{
				{
					bool L_4 = V_2;
					if (!L_4)
					{
						goto IL_0094;
					}
				}
				{
					RuntimeObject* L_5 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_5, NULL);
				}

IL_0094:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_6 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_6, (&V_2), NULL);
				Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_7 = __this->___TR0svuNpWJ;
				V_3 = (bool)((((RuntimeObject*)(Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
				bool L_8 = V_3;
				if (!L_8)
				{
					goto IL_004b_1;
				}
			}
			{
				Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_9 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
				Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329(L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
				__this->___TR0svuNpWJ = L_9;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___TR0svuNpWJ), (void*)L_9);
				Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_10 = __this->___TR0svuNpWJ;
				RuntimeObject* L_11 = ___0_S7lcYxsNT7ijLpHHvKH;
				RuntimeObject* L_12 = V_0;
				NullCheck(L_10);
				Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD(L_10, L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
				goto IL_0085_1;
			}

IL_004b_1:
			{
				Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_13 = __this->___TR0svuNpWJ;
				RuntimeObject* L_14 = ___0_S7lcYxsNT7ijLpHHvKH;
				NullCheck(L_13);
				bool L_15;
				L_15 = Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849(L_13, L_14, (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 5));
				V_5 = L_15;
				bool L_16 = V_5;
				if (!L_16)
				{
					goto IL_0066_1;
				}
			}
			{
				RuntimeObject* L_17 = V_4;
				V_6 = L_17;
				goto IL_0095;
			}

IL_0066_1:
			{
				Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_18 = __this->___TR0svuNpWJ;
				Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_19 = (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
				Dictionary_2__ctor_m623BF34EB93B2B3A3B7D46743B508E2E2958939E(L_19, (RuntimeObject*)L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				RuntimeObject* L_20 = ___0_S7lcYxsNT7ijLpHHvKH;
				V_7 = L_20;
				Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_21 = L_19;
				RuntimeObject* L_22 = V_7;
				RuntimeObject* L_23 = V_0;
				NullCheck(L_21);
				Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD(L_21, L_22, L_23, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
				__this->___TR0svuNpWJ = L_21;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___TR0svuNpWJ), (void*)L_21);
			}

IL_0085_1:
			{
				RuntimeObject* L_24 = V_0;
				V_6 = L_24;
				goto IL_0095;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0095:
	{
		RuntimeObject* L_25 = V_6;
		return L_25;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 27022
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void vidL3DsH4E96BjEd9UH_2__ctor_mF7726776B2D73A5EA58ED6C810791BB42CCF185E_gshared (vidL3DsH4E96BjEd9UH_2_t4433FC9C7D2088518F6001E28BB2868B367F48E9* __this, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___0_U20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	vidL3DsH4E96BjEd9UH_2_t4433FC9C7D2088518F6001E28BB2868B367F48E9* G_B2_0 = NULL;
	vidL3DsH4E96BjEd9UH_2_t4433FC9C7D2088518F6001E28BB2868B367F48E9* G_B1_0 = NULL;
	{
		XZnnwMFxNaQO9Fnc4AIv_BabFoetprCu_m4FDBEA2720A4CB4966F76A1C6D3339F142EB0ABE(NULL);
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___TCksMDM0bA = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TCksMDM0bA), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_1 = ___0_U20;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_0027;
		}
		G_B1_0 = __this;
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF152D9FF145C02638C3A1C1C199FDCB227AD9B2D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0027:
	{
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_3 = ___0_U20;
		NullCheck(G_B2_0);
		G_B2_0->___hwss51nOIJ = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_0->___hwss51nOIJ), (void*)L_3);
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_4 = (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___TR0svuNpWJ = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TR0svuNpWJ), (void*)L_4);
		return;
	}
}
// Method Definition Index: 27023
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void vidL3DsH4E96BjEd9UH_2_yVHspl9qZV_mFAA24008EFB8FCD8D670DB4DF7764BC761402FAD_gshared (vidL3DsH4E96BjEd9UH_2_t4433FC9C7D2088518F6001E28BB2868B367F48E9* __this, Il2CppFullySharedGenericAny ___0_RXCpCwsAZLkndO5Ip14, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_mojPqMsw7UNyurGmblP_t0649673D7FBB709A4A5EDCF9C2B8FB28B7A55E66 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	const uint32_t SizeOf_hiv9T7s6yD9vCQk7Rbb_t7F71919DCE683EFAB00F096AD7340538EFA30015 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_hiv9T7s6yD9vCQk7Rbb_t7F71919DCE683EFAB00F096AD7340538EFA30015);
	const Il2CppFullySharedGenericAny L_4 = L_1;
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_mojPqMsw7UNyurGmblP_t0649673D7FBB709A4A5EDCF9C2B8FB28B7A55E66);
	const Il2CppFullySharedGenericAny L_5 = L_3;
	const Il2CppFullySharedGenericAny L_6 = L_3;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_mojPqMsw7UNyurGmblP_t0649673D7FBB709A4A5EDCF9C2B8FB28B7A55E66);
	memset(V_0, 0, SizeOf_mojPqMsw7UNyurGmblP_t0649673D7FBB709A4A5EDCF9C2B8FB28B7A55E66);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_mojPqMsw7UNyurGmblP_t0649673D7FBB709A4A5EDCF9C2B8FB28B7A55E66);
	memset(V_1, 0, SizeOf_mojPqMsw7UNyurGmblP_t0649673D7FBB709A4A5EDCF9C2B8FB28B7A55E66);
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_mojPqMsw7UNyurGmblP_t0649673D7FBB709A4A5EDCF9C2B8FB28B7A55E66);
	memset(G_B3_0, 0, SizeOf_mojPqMsw7UNyurGmblP_t0649673D7FBB709A4A5EDCF9C2B8FB28B7A55E66);
	{
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_0 = __this->___TR0svuNpWJ;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___0_RXCpCwsAZLkndO5Ip14 : &___0_RXCpCwsAZLkndO5Ip14), SizeOf_hiv9T7s6yD9vCQk7Rbb_t7F71919DCE683EFAB00F096AD7340538EFA30015);
		NullCheck(L_0);
		bool L_2;
		L_2 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_1: *(void**)L_1), (Il2CppFullySharedGenericAny*)V_0);
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_mojPqMsw7UNyurGmblP_t0649673D7FBB709A4A5EDCF9C2B8FB28B7A55E66);
		il2cpp_codegen_memcpy(G_B3_0, L_3, SizeOf_mojPqMsw7UNyurGmblP_t0649673D7FBB709A4A5EDCF9C2B8FB28B7A55E66);
		goto IL_001b;
	}

IL_0014:
	{
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___0_RXCpCwsAZLkndO5Ip14 : &___0_RXCpCwsAZLkndO5Ip14), SizeOf_hiv9T7s6yD9vCQk7Rbb_t7F71919DCE683EFAB00F096AD7340538EFA30015);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_4: *(void**)L_4), (Il2CppFullySharedGenericAny*)L_5);
		il2cpp_codegen_memcpy(G_B3_0, L_5, SizeOf_mojPqMsw7UNyurGmblP_t0649673D7FBB709A4A5EDCF9C2B8FB28B7A55E66);
	}

IL_001b:
	{
		il2cpp_codegen_memcpy(V_1, G_B3_0, SizeOf_mojPqMsw7UNyurGmblP_t0649673D7FBB709A4A5EDCF9C2B8FB28B7A55E66);
		goto IL_001e;
	}

IL_001e:
	{
		il2cpp_codegen_memcpy(L_6, V_1, SizeOf_mojPqMsw7UNyurGmblP_t0649673D7FBB709A4A5EDCF9C2B8FB28B7A55E66);
		il2cpp_codegen_memcpy(il2cppRetVal, L_6, SizeOf_mojPqMsw7UNyurGmblP_t0649673D7FBB709A4A5EDCF9C2B8FB28B7A55E66);
		return;
	}
}
// Method Definition Index: 27024
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void vidL3DsH4E96BjEd9UH_2_AVZs9qB71u_mBF3848B9FD1B3293B54DC1531C0AA43EF723BA4F_gshared (vidL3DsH4E96BjEd9UH_2_t4433FC9C7D2088518F6001E28BB2868B367F48E9* __this, Il2CppFullySharedGenericAny ___0_S7lcYxsNT7ijLpHHvKH, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_mojPqMsw7UNyurGmblP_t0649673D7FBB709A4A5EDCF9C2B8FB28B7A55E66 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	const uint32_t SizeOf_hiv9T7s6yD9vCQk7Rbb_t7F71919DCE683EFAB00F096AD7340538EFA30015 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_hiv9T7s6yD9vCQk7Rbb_t7F71919DCE683EFAB00F096AD7340538EFA30015);
	const Il2CppFullySharedGenericAny L_11 = L_1;
	const Il2CppFullySharedGenericAny L_14 = L_1;
	const Il2CppFullySharedGenericAny L_20 = L_1;
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_hiv9T7s6yD9vCQk7Rbb_t7F71919DCE683EFAB00F096AD7340538EFA30015);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_mojPqMsw7UNyurGmblP_t0649673D7FBB709A4A5EDCF9C2B8FB28B7A55E66);
	const Il2CppFullySharedGenericAny L_12 = L_2;
	const Il2CppFullySharedGenericAny L_17 = L_2;
	const Il2CppFullySharedGenericAny L_23 = L_2;
	const Il2CppFullySharedGenericAny L_24 = L_2;
	const Il2CppFullySharedGenericAny L_25 = L_2;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_mojPqMsw7UNyurGmblP_t0649673D7FBB709A4A5EDCF9C2B8FB28B7A55E66);
	memset(V_0, 0, SizeOf_mojPqMsw7UNyurGmblP_t0649673D7FBB709A4A5EDCF9C2B8FB28B7A55E66);
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_mojPqMsw7UNyurGmblP_t0649673D7FBB709A4A5EDCF9C2B8FB28B7A55E66);
	memset(V_4, 0, SizeOf_mojPqMsw7UNyurGmblP_t0649673D7FBB709A4A5EDCF9C2B8FB28B7A55E66);
	bool V_5 = false;
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_mojPqMsw7UNyurGmblP_t0649673D7FBB709A4A5EDCF9C2B8FB28B7A55E66);
	memset(V_6, 0, SizeOf_mojPqMsw7UNyurGmblP_t0649673D7FBB709A4A5EDCF9C2B8FB28B7A55E66);
	Il2CppFullySharedGenericAny V_7 = alloca(SizeOf_hiv9T7s6yD9vCQk7Rbb_t7F71919DCE683EFAB00F096AD7340538EFA30015);
	memset(V_7, 0, SizeOf_hiv9T7s6yD9vCQk7Rbb_t7F71919DCE683EFAB00F096AD7340538EFA30015);
	{
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_0 = __this->___hwss51nOIJ;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___0_S7lcYxsNT7ijLpHHvKH : &___0_S7lcYxsNT7ijLpHHvKH), SizeOf_hiv9T7s6yD9vCQk7Rbb_t7F71919DCE683EFAB00F096AD7340538EFA30015);
		NullCheck(L_0);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_1: *(void**)L_1), (Il2CppFullySharedGenericAny*)L_2);
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_mojPqMsw7UNyurGmblP_t0649673D7FBB709A4A5EDCF9C2B8FB28B7A55E66);
		RuntimeObject* L_3 = __this->___TCksMDM0bA;
		V_1 = L_3;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008a:
			{
				{
					bool L_4 = V_2;
					if (!L_4)
					{
						goto IL_0094;
					}
				}
				{
					RuntimeObject* L_5 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_5, NULL);
				}

IL_0094:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_6 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_6, (&V_2), NULL);
				Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_7 = __this->___TR0svuNpWJ;
				V_3 = (bool)((((RuntimeObject*)(Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
				bool L_8 = V_3;
				if (!L_8)
				{
					goto IL_004b_1;
				}
			}
			{
				Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_9 = (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
				((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
				__this->___TR0svuNpWJ = L_9;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___TR0svuNpWJ), (void*)L_9);
				Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_10 = __this->___TR0svuNpWJ;
				il2cpp_codegen_memcpy(L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___0_S7lcYxsNT7ijLpHHvKH : &___0_S7lcYxsNT7ijLpHHvKH), SizeOf_hiv9T7s6yD9vCQk7Rbb_t7F71919DCE683EFAB00F096AD7340538EFA30015);
				il2cpp_codegen_memcpy(L_12, V_0, SizeOf_mojPqMsw7UNyurGmblP_t0649673D7FBB709A4A5EDCF9C2B8FB28B7A55E66);
				NullCheck(L_10);
				InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_11: *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8)) ? L_12: *(void**)L_12));
				goto IL_0085_1;
			}

IL_004b_1:
			{
				Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_13 = __this->___TR0svuNpWJ;
				il2cpp_codegen_memcpy(L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___0_S7lcYxsNT7ijLpHHvKH : &___0_S7lcYxsNT7ijLpHHvKH), SizeOf_hiv9T7s6yD9vCQk7Rbb_t7F71919DCE683EFAB00F096AD7340538EFA30015);
				NullCheck(L_13);
				bool L_15;
				L_15 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_14: *(void**)L_14), (Il2CppFullySharedGenericAny*)V_4);
				V_5 = L_15;
				bool L_16 = V_5;
				if (!L_16)
				{
					goto IL_0066_1;
				}
			}
			{
				il2cpp_codegen_memcpy(L_17, V_4, SizeOf_mojPqMsw7UNyurGmblP_t0649673D7FBB709A4A5EDCF9C2B8FB28B7A55E66);
				il2cpp_codegen_memcpy(V_6, L_17, SizeOf_mojPqMsw7UNyurGmblP_t0649673D7FBB709A4A5EDCF9C2B8FB28B7A55E66);
				goto IL_0095;
			}

IL_0066_1:
			{
				Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_18 = __this->___TR0svuNpWJ;
				Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_19 = (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
				((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(L_19, (RuntimeObject*)L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				il2cpp_codegen_memcpy(L_20, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___0_S7lcYxsNT7ijLpHHvKH : &___0_S7lcYxsNT7ijLpHHvKH), SizeOf_hiv9T7s6yD9vCQk7Rbb_t7F71919DCE683EFAB00F096AD7340538EFA30015);
				il2cpp_codegen_memcpy(V_7, L_20, SizeOf_hiv9T7s6yD9vCQk7Rbb_t7F71919DCE683EFAB00F096AD7340538EFA30015);
				Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_21 = L_19;
				il2cpp_codegen_memcpy(L_22, V_7, SizeOf_hiv9T7s6yD9vCQk7Rbb_t7F71919DCE683EFAB00F096AD7340538EFA30015);
				il2cpp_codegen_memcpy(L_23, V_0, SizeOf_mojPqMsw7UNyurGmblP_t0649673D7FBB709A4A5EDCF9C2B8FB28B7A55E66);
				NullCheck(L_21);
				InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), L_21, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_22: *(void**)L_22), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8)) ? L_23: *(void**)L_23));
				__this->___TR0svuNpWJ = L_21;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___TR0svuNpWJ), (void*)L_21);
			}

IL_0085_1:
			{
				il2cpp_codegen_memcpy(L_24, V_0, SizeOf_mojPqMsw7UNyurGmblP_t0649673D7FBB709A4A5EDCF9C2B8FB28B7A55E66);
				il2cpp_codegen_memcpy(V_6, L_24, SizeOf_mojPqMsw7UNyurGmblP_t0649673D7FBB709A4A5EDCF9C2B8FB28B7A55E66);
				goto IL_0095;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0095:
	{
		il2cpp_codegen_memcpy(L_25, V_6, SizeOf_mojPqMsw7UNyurGmblP_t0649673D7FBB709A4A5EDCF9C2B8FB28B7A55E66);
		il2cpp_codegen_memcpy(il2cppRetVal, L_25, SizeOf_mojPqMsw7UNyurGmblP_t0649673D7FBB709A4A5EDCF9C2B8FB28B7A55E66);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 27022
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void vidL3DsH4E96BjEd9UH_2__ctor_m94DC8D494B33EF1F5AC17C50947EB7A3EFA66B2D_gshared (vidL3DsH4E96BjEd9UH_2_tA989B7A030C3DCA9B826EDA34B988B10B5C92DC8* __this, Func_2_tF20E7560B31C0A5F430905666EFA3C85DC9E43F1* ___0_U20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	vidL3DsH4E96BjEd9UH_2_tA989B7A030C3DCA9B826EDA34B988B10B5C92DC8* G_B2_0 = NULL;
	vidL3DsH4E96BjEd9UH_2_tA989B7A030C3DCA9B826EDA34B988B10B5C92DC8* G_B1_0 = NULL;
	{
		XZnnwMFxNaQO9Fnc4AIv_BabFoetprCu_m4FDBEA2720A4CB4966F76A1C6D3339F142EB0ABE(NULL);
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___TCksMDM0bA = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TCksMDM0bA), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Func_2_tF20E7560B31C0A5F430905666EFA3C85DC9E43F1* L_1 = ___0_U20;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_0027;
		}
		G_B1_0 = __this;
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF152D9FF145C02638C3A1C1C199FDCB227AD9B2D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0027:
	{
		Func_2_tF20E7560B31C0A5F430905666EFA3C85DC9E43F1* L_3 = ___0_U20;
		NullCheck(G_B2_0);
		G_B2_0->___hwss51nOIJ = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_0->___hwss51nOIJ), (void*)L_3);
		Dictionary_2_tE62442FA3F7B8D308BBF4D149C8DF16A2DC21CAD* L_4 = (Dictionary_2_tE62442FA3F7B8D308BBF4D149C8DF16A2DC21CAD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Dictionary_2__ctor_mBA94A8C4921AE5E4C701892273211E3C25945A1A(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___TR0svuNpWJ = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TR0svuNpWJ), (void*)L_4);
		return;
	}
}
// Method Definition Index: 27023
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* vidL3DsH4E96BjEd9UH_2_yVHspl9qZV_m62712C7E9D1D391289B32ECC02170A2B26B268D2_gshared (vidL3DsH4E96BjEd9UH_2_tA989B7A030C3DCA9B826EDA34B988B10B5C92DC8* __this, VOT4d6FFPH1Gtv42RMNy_tD2714404642DD9632968173CF2EF10E2AE4D30CF ___0_RXCpCwsAZLkndO5Ip14, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		Dictionary_2_tE62442FA3F7B8D308BBF4D149C8DF16A2DC21CAD* L_0 = __this->___TR0svuNpWJ;
		VOT4d6FFPH1Gtv42RMNy_tD2714404642DD9632968173CF2EF10E2AE4D30CF L_1 = ___0_RXCpCwsAZLkndO5Ip14;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mCF0CB40AE23407C46BD6817508B351DA00162F3C(L_0, L_1, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		G_B3_0 = L_3;
		goto IL_001b;
	}

IL_0014:
	{
		VOT4d6FFPH1Gtv42RMNy_tD2714404642DD9632968173CF2EF10E2AE4D30CF L_4 = ___0_RXCpCwsAZLkndO5Ip14;
		RuntimeObject* L_5;
		L_5 = vidL3DsH4E96BjEd9UH_2_AVZs9qB71u_mC647419E7C674436B929BDCCE8EF0F9488CDC2C9(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		G_B3_0 = L_5;
	}

IL_001b:
	{
		V_1 = G_B3_0;
		goto IL_001e;
	}

IL_001e:
	{
		RuntimeObject* L_6 = V_1;
		return L_6;
	}
}
// Method Definition Index: 27024
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* vidL3DsH4E96BjEd9UH_2_AVZs9qB71u_mC647419E7C674436B929BDCCE8EF0F9488CDC2C9_gshared (vidL3DsH4E96BjEd9UH_2_tA989B7A030C3DCA9B826EDA34B988B10B5C92DC8* __this, VOT4d6FFPH1Gtv42RMNy_tD2714404642DD9632968173CF2EF10E2AE4D30CF ___0_S7lcYxsNT7ijLpHHvKH, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	VOT4d6FFPH1Gtv42RMNy_tD2714404642DD9632968173CF2EF10E2AE4D30CF V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		Func_2_tF20E7560B31C0A5F430905666EFA3C85DC9E43F1* L_0 = __this->___hwss51nOIJ;
		VOT4d6FFPH1Gtv42RMNy_tD2714404642DD9632968173CF2EF10E2AE4D30CF L_1 = ___0_S7lcYxsNT7ijLpHHvKH;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = Func_2_Invoke_mEC05F08018197F27D94CA83FED280BBAC5759094_inline(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		V_0 = L_2;
		RuntimeObject* L_3 = __this->___TCksMDM0bA;
		V_1 = L_3;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008a:
			{
				{
					bool L_4 = V_2;
					if (!L_4)
					{
						goto IL_0094;
					}
				}
				{
					RuntimeObject* L_5 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_5, NULL);
				}

IL_0094:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_6 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_6, (&V_2), NULL);
				Dictionary_2_tE62442FA3F7B8D308BBF4D149C8DF16A2DC21CAD* L_7 = __this->___TR0svuNpWJ;
				V_3 = (bool)((((RuntimeObject*)(Dictionary_2_tE62442FA3F7B8D308BBF4D149C8DF16A2DC21CAD*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
				bool L_8 = V_3;
				if (!L_8)
				{
					goto IL_004b_1;
				}
			}
			{
				Dictionary_2_tE62442FA3F7B8D308BBF4D149C8DF16A2DC21CAD* L_9 = (Dictionary_2_tE62442FA3F7B8D308BBF4D149C8DF16A2DC21CAD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
				Dictionary_2__ctor_mBA94A8C4921AE5E4C701892273211E3C25945A1A(L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
				__this->___TR0svuNpWJ = L_9;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___TR0svuNpWJ), (void*)L_9);
				Dictionary_2_tE62442FA3F7B8D308BBF4D149C8DF16A2DC21CAD* L_10 = __this->___TR0svuNpWJ;
				VOT4d6FFPH1Gtv42RMNy_tD2714404642DD9632968173CF2EF10E2AE4D30CF L_11 = ___0_S7lcYxsNT7ijLpHHvKH;
				RuntimeObject* L_12 = V_0;
				NullCheck(L_10);
				Dictionary_2_set_Item_m82BDA5E1230BB856804071AB86D4BC1E19FF5374(L_10, L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
				goto IL_0085_1;
			}

IL_004b_1:
			{
				Dictionary_2_tE62442FA3F7B8D308BBF4D149C8DF16A2DC21CAD* L_13 = __this->___TR0svuNpWJ;
				VOT4d6FFPH1Gtv42RMNy_tD2714404642DD9632968173CF2EF10E2AE4D30CF L_14 = ___0_S7lcYxsNT7ijLpHHvKH;
				NullCheck(L_13);
				bool L_15;
				L_15 = Dictionary_2_TryGetValue_mCF0CB40AE23407C46BD6817508B351DA00162F3C(L_13, L_14, (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 5));
				V_5 = L_15;
				bool L_16 = V_5;
				if (!L_16)
				{
					goto IL_0066_1;
				}
			}
			{
				RuntimeObject* L_17 = V_4;
				V_6 = L_17;
				goto IL_0095;
			}

IL_0066_1:
			{
				Dictionary_2_tE62442FA3F7B8D308BBF4D149C8DF16A2DC21CAD* L_18 = __this->___TR0svuNpWJ;
				Dictionary_2_tE62442FA3F7B8D308BBF4D149C8DF16A2DC21CAD* L_19 = (Dictionary_2_tE62442FA3F7B8D308BBF4D149C8DF16A2DC21CAD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
				Dictionary_2__ctor_m03998FFE2C448E9B1DD7FA1F661A532E46CD9FE0(L_19, (RuntimeObject*)L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				VOT4d6FFPH1Gtv42RMNy_tD2714404642DD9632968173CF2EF10E2AE4D30CF L_20 = ___0_S7lcYxsNT7ijLpHHvKH;
				V_7 = L_20;
				Dictionary_2_tE62442FA3F7B8D308BBF4D149C8DF16A2DC21CAD* L_21 = L_19;
				VOT4d6FFPH1Gtv42RMNy_tD2714404642DD9632968173CF2EF10E2AE4D30CF L_22 = V_7;
				RuntimeObject* L_23 = V_0;
				NullCheck(L_21);
				Dictionary_2_set_Item_m82BDA5E1230BB856804071AB86D4BC1E19FF5374(L_21, L_22, L_23, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
				__this->___TR0svuNpWJ = L_21;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___TR0svuNpWJ), (void*)L_21);
			}

IL_0085_1:
			{
				RuntimeObject* L_24 = V_0;
				V_6 = L_24;
				goto IL_0095;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0095:
	{
		RuntimeObject* L_25 = V_6;
		return L_25;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 27022
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void vidL3DsH4E96BjEd9UH_2__ctor_m52F30AD866566CA33AB3084C648E4907483631C1_gshared (vidL3DsH4E96BjEd9UH_2_t378F29678E95DC9EA607A863EA3ADEB39A2771C5* __this, Func_2_tE1D2E4700064383DA4D0A68CB526432EAC0C04B9* ___0_U20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	vidL3DsH4E96BjEd9UH_2_t378F29678E95DC9EA607A863EA3ADEB39A2771C5* G_B2_0 = NULL;
	vidL3DsH4E96BjEd9UH_2_t378F29678E95DC9EA607A863EA3ADEB39A2771C5* G_B1_0 = NULL;
	{
		XZnnwMFxNaQO9Fnc4AIv_BabFoetprCu_m4FDBEA2720A4CB4966F76A1C6D3339F142EB0ABE(NULL);
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___TCksMDM0bA = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TCksMDM0bA), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Func_2_tE1D2E4700064383DA4D0A68CB526432EAC0C04B9* L_1 = ___0_U20;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_0027;
		}
		G_B1_0 = __this;
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF152D9FF145C02638C3A1C1C199FDCB227AD9B2D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0027:
	{
		Func_2_tE1D2E4700064383DA4D0A68CB526432EAC0C04B9* L_3 = ___0_U20;
		NullCheck(G_B2_0);
		G_B2_0->___hwss51nOIJ = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_0->___hwss51nOIJ), (void*)L_3);
		Dictionary_2_tA1A7D1A1B05D9250844051544D9046C7459D6C40* L_4 = (Dictionary_2_tA1A7D1A1B05D9250844051544D9046C7459D6C40*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Dictionary_2__ctor_m9C060E7CDCC8DC5E8D3D578226F7FD7898353572(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___TR0svuNpWJ = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TR0svuNpWJ), (void*)L_4);
		return;
	}
}
// Method Definition Index: 27023
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* vidL3DsH4E96BjEd9UH_2_yVHspl9qZV_mB60BD7ACE8DACB5323DFA8B5F205049A4AC4AF58_gshared (vidL3DsH4E96BjEd9UH_2_t378F29678E95DC9EA607A863EA3ADEB39A2771C5* __this, XFcsvjzg8YPVu8hqeMO_t55C5991AC4ED21586C98349E6820420D09285D2E ___0_RXCpCwsAZLkndO5Ip14, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		Dictionary_2_tA1A7D1A1B05D9250844051544D9046C7459D6C40* L_0 = __this->___TR0svuNpWJ;
		XFcsvjzg8YPVu8hqeMO_t55C5991AC4ED21586C98349E6820420D09285D2E L_1 = ___0_RXCpCwsAZLkndO5Ip14;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mE64FA67C24FA787AF5748C82216E1EA34DA3BAF8(L_0, L_1, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		G_B3_0 = L_3;
		goto IL_001b;
	}

IL_0014:
	{
		XFcsvjzg8YPVu8hqeMO_t55C5991AC4ED21586C98349E6820420D09285D2E L_4 = ___0_RXCpCwsAZLkndO5Ip14;
		RuntimeObject* L_5;
		L_5 = vidL3DsH4E96BjEd9UH_2_AVZs9qB71u_mFE19C18A04D8472A0E24DA91B7C1B71184E3272D(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		G_B3_0 = L_5;
	}

IL_001b:
	{
		V_1 = G_B3_0;
		goto IL_001e;
	}

IL_001e:
	{
		RuntimeObject* L_6 = V_1;
		return L_6;
	}
}
// Method Definition Index: 27024
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* vidL3DsH4E96BjEd9UH_2_AVZs9qB71u_mFE19C18A04D8472A0E24DA91B7C1B71184E3272D_gshared (vidL3DsH4E96BjEd9UH_2_t378F29678E95DC9EA607A863EA3ADEB39A2771C5* __this, XFcsvjzg8YPVu8hqeMO_t55C5991AC4ED21586C98349E6820420D09285D2E ___0_S7lcYxsNT7ijLpHHvKH, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	XFcsvjzg8YPVu8hqeMO_t55C5991AC4ED21586C98349E6820420D09285D2E V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		Func_2_tE1D2E4700064383DA4D0A68CB526432EAC0C04B9* L_0 = __this->___hwss51nOIJ;
		XFcsvjzg8YPVu8hqeMO_t55C5991AC4ED21586C98349E6820420D09285D2E L_1 = ___0_S7lcYxsNT7ijLpHHvKH;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = Func_2_Invoke_m406CF2B55A6DEF4E73C17A81ADED3A69354C6E6B_inline(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		V_0 = L_2;
		RuntimeObject* L_3 = __this->___TCksMDM0bA;
		V_1 = L_3;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008a:
			{
				{
					bool L_4 = V_2;
					if (!L_4)
					{
						goto IL_0094;
					}
				}
				{
					RuntimeObject* L_5 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_5, NULL);
				}

IL_0094:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_6 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_6, (&V_2), NULL);
				Dictionary_2_tA1A7D1A1B05D9250844051544D9046C7459D6C40* L_7 = __this->___TR0svuNpWJ;
				V_3 = (bool)((((RuntimeObject*)(Dictionary_2_tA1A7D1A1B05D9250844051544D9046C7459D6C40*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
				bool L_8 = V_3;
				if (!L_8)
				{
					goto IL_004b_1;
				}
			}
			{
				Dictionary_2_tA1A7D1A1B05D9250844051544D9046C7459D6C40* L_9 = (Dictionary_2_tA1A7D1A1B05D9250844051544D9046C7459D6C40*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
				Dictionary_2__ctor_m9C060E7CDCC8DC5E8D3D578226F7FD7898353572(L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
				__this->___TR0svuNpWJ = L_9;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___TR0svuNpWJ), (void*)L_9);
				Dictionary_2_tA1A7D1A1B05D9250844051544D9046C7459D6C40* L_10 = __this->___TR0svuNpWJ;
				XFcsvjzg8YPVu8hqeMO_t55C5991AC4ED21586C98349E6820420D09285D2E L_11 = ___0_S7lcYxsNT7ijLpHHvKH;
				RuntimeObject* L_12 = V_0;
				NullCheck(L_10);
				Dictionary_2_set_Item_mD16CBA4C7D5CC211A1F0DC91AEDB1D0BCCFE9C2B(L_10, L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
				goto IL_0085_1;
			}

IL_004b_1:
			{
				Dictionary_2_tA1A7D1A1B05D9250844051544D9046C7459D6C40* L_13 = __this->___TR0svuNpWJ;
				XFcsvjzg8YPVu8hqeMO_t55C5991AC4ED21586C98349E6820420D09285D2E L_14 = ___0_S7lcYxsNT7ijLpHHvKH;
				NullCheck(L_13);
				bool L_15;
				L_15 = Dictionary_2_TryGetValue_mE64FA67C24FA787AF5748C82216E1EA34DA3BAF8(L_13, L_14, (&V_4), il2cpp_rgctx_method(method->klass->rgctx_data, 5));
				V_5 = L_15;
				bool L_16 = V_5;
				if (!L_16)
				{
					goto IL_0066_1;
				}
			}
			{
				RuntimeObject* L_17 = V_4;
				V_6 = L_17;
				goto IL_0095;
			}

IL_0066_1:
			{
				Dictionary_2_tA1A7D1A1B05D9250844051544D9046C7459D6C40* L_18 = __this->___TR0svuNpWJ;
				Dictionary_2_tA1A7D1A1B05D9250844051544D9046C7459D6C40* L_19 = (Dictionary_2_tA1A7D1A1B05D9250844051544D9046C7459D6C40*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
				Dictionary_2__ctor_m7061CD73993A277387ED0CBDD191679DF5229A05(L_19, (RuntimeObject*)L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
				XFcsvjzg8YPVu8hqeMO_t55C5991AC4ED21586C98349E6820420D09285D2E L_20 = ___0_S7lcYxsNT7ijLpHHvKH;
				V_7 = L_20;
				Dictionary_2_tA1A7D1A1B05D9250844051544D9046C7459D6C40* L_21 = L_19;
				XFcsvjzg8YPVu8hqeMO_t55C5991AC4ED21586C98349E6820420D09285D2E L_22 = V_7;
				RuntimeObject* L_23 = V_0;
				NullCheck(L_21);
				Dictionary_2_set_Item_mD16CBA4C7D5CC211A1F0DC91AEDB1D0BCCFE9C2B(L_21, L_22, L_23, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
				__this->___TR0svuNpWJ = L_21;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___TR0svuNpWJ), (void*)L_21);
			}

IL_0085_1:
			{
				RuntimeObject* L_24 = V_0;
				V_6 = L_24;
				goto IL_0095;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0095:
	{
		RuntimeObject* L_25 = V_6;
		return L_25;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 26767
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void zvjcJSqwDd98hxFcxJL_2__ctor_m6143FBB884589DFA887FEC73066F7CEE6F54A11E_gshared (zvjcJSqwDd98hxFcxJL_2_t39B92566EB0FE2FC9171C2B7328D5F9DE7A75AA0* __this, RuntimeObject* ___0_U20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8);
		s_Il2CppMethodInitialized = true;
	}
	{
		XZnnwMFxNaQO9Fnc4AIv_BabFoetprCu_m4FDBEA2720A4CB4966F76A1C6D3339F142EB0ABE(NULL);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_U20;
		JdPCWqs4vjT4WYxXitk_pkFsBOJZEW_m01682DFE6DBE662519694ED4669B9D4F6CA496E4((RuntimeObject*)L_0, _stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8, NULL);
		RuntimeObject* L_1 = ___0_U20;
		__this->___OxIqq0XCoB = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OxIqq0XCoB), (void*)L_1);
		return;
	}
}
// Method Definition Index: 26768
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void zvjcJSqwDd98hxFcxJL_2__ctor_m941B4A4BB8A56FBCE830746BB19DABB53F2D6E3B_gshared (zvjcJSqwDd98hxFcxJL_2_t39B92566EB0FE2FC9171C2B7328D5F9DE7A75AA0* __this, RuntimeObject* ___0_U20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8);
		s_Il2CppMethodInitialized = true;
	}
	{
		XZnnwMFxNaQO9Fnc4AIv_BabFoetprCu_m4FDBEA2720A4CB4966F76A1C6D3339F142EB0ABE(NULL);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_U20;
		JdPCWqs4vjT4WYxXitk_pkFsBOJZEW_m01682DFE6DBE662519694ED4669B9D4F6CA496E4((RuntimeObject*)L_0, _stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8, NULL);
		RuntimeObject* L_1 = ___0_U20;
		__this->___DCequlZp7n = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DCequlZp7n), (void*)L_1);
		return;
	}
}
// Method Definition Index: 26769
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void zvjcJSqwDd98hxFcxJL_2_Add_m364A879CEA89816A558D5C5D44B8E2AE4A8DF070_gshared (zvjcJSqwDd98hxFcxJL_2_t39B92566EB0FE2FC9171C2B7328D5F9DE7A75AA0* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_vlmyIjqlCtTOrGGpNdq_t7681D8266D6177A6FE7A58F5D0F28AB6FD4F9DC3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const uint32_t SizeOf_LsRYIXqpJedKCMAijTj_tCF81A9EA1093D9E066036ADA621C27F5A6A30597 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_vlmyIjqlCtTOrGGpNdq_t7681D8266D6177A6FE7A58F5D0F28AB6FD4F9DC3);
	const Il2CppFullySharedGenericAny L_11 = L_3;
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_LsRYIXqpJedKCMAijTj_tCF81A9EA1093D9E066036ADA621C27F5A6A30597);
	const Il2CppFullySharedGenericAny L_12 = L_5;
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = __this->___OxIqq0XCoB;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		RuntimeObject* L_2 = __this->___OxIqq0XCoB;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___0_key : &___0_key), SizeOf_vlmyIjqlCtTOrGGpNdq_t7681D8266D6177A6FE7A58F5D0F28AB6FD4F9DC3);
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), L_3);
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)) ? ___1_value : &___1_value), SizeOf_LsRYIXqpJedKCMAijTj_tCF81A9EA1093D9E066036ADA621C27F5A6A30597);
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), L_5);
		NullCheck(L_2);
		InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(5, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_2, L_4, L_6);
		goto IL_004d;
	}

IL_002a:
	{
		RuntimeObject* L_7 = __this->___DCequlZp7n;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_7) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_9 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_003e:
	{
		RuntimeObject* L_10 = __this->___DCequlZp7n;
		il2cpp_codegen_memcpy(L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___0_key : &___0_key), SizeOf_vlmyIjqlCtTOrGGpNdq_t7681D8266D6177A6FE7A58F5D0F28AB6FD4F9DC3);
		il2cpp_codegen_memcpy(L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)) ? ___1_value : &___1_value), SizeOf_LsRYIXqpJedKCMAijTj_tCF81A9EA1093D9E066036ADA621C27F5A6A30597);
		NullCheck(L_10);
		InterfaceActionInvoker2Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_11: *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)) ? L_12: *(void**)L_12));
	}

IL_004d:
	{
		return;
	}
}
// Method Definition Index: 26770
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool zvjcJSqwDd98hxFcxJL_2_ContainsKey_mDD986A6C9B1167B4705A13862616924788679ADF_gshared (zvjcJSqwDd98hxFcxJL_2_t39B92566EB0FE2FC9171C2B7328D5F9DE7A75AA0* __this, Il2CppFullySharedGenericAny ___0_IZAqFrq93LxHQKuCSDP, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_vlmyIjqlCtTOrGGpNdq_t7681D8266D6177A6FE7A58F5D0F28AB6FD4F9DC3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_vlmyIjqlCtTOrGGpNdq_t7681D8266D6177A6FE7A58F5D0F28AB6FD4F9DC3);
	const Il2CppFullySharedGenericAny L_5 = L_2;
	bool V_0 = false;
	bool G_B3_0 = false;
	{
		RuntimeObject* L_0 = __this->___OxIqq0XCoB;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = __this->___DCequlZp7n;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___0_IZAqFrq93LxHQKuCSDP : &___0_IZAqFrq93LxHQKuCSDP), SizeOf_vlmyIjqlCtTOrGGpNdq_t7681D8266D6177A6FE7A58F5D0F28AB6FD4F9DC3);
		NullCheck(L_1);
		bool L_3;
		L_3 = InterfaceFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(4, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_2: *(void**)L_2));
		G_B3_0 = L_3;
		goto IL_0028;
	}

IL_0017:
	{
		RuntimeObject* L_4 = __this->___OxIqq0XCoB;
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___0_IZAqFrq93LxHQKuCSDP : &___0_IZAqFrq93LxHQKuCSDP), SizeOf_vlmyIjqlCtTOrGGpNdq_t7681D8266D6177A6FE7A58F5D0F28AB6FD4F9DC3);
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), L_5);
		NullCheck(L_4);
		bool L_7;
		L_7 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(4, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_4, L_6);
		G_B3_0 = L_7;
	}

IL_0028:
	{
		V_0 = G_B3_0;
		goto IL_002b;
	}

IL_002b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 26771
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* zvjcJSqwDd98hxFcxJL_2_get_Keys_m8BBF36BB995DBBB9B960A8844E5BEF9627EAFCB0_gshared (zvjcJSqwDd98hxFcxJL_2_t39B92566EB0FE2FC9171C2B7328D5F9DE7A75AA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = __this->___OxIqq0XCoB;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject* L_1 = __this->___DCequlZp7n;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_1);
		G_B3_0 = L_2;
		goto IL_002d;
	}

IL_0016:
	{
		RuntimeObject* L_3 = __this->___OxIqq0XCoB;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_3);
		RuntimeObject* L_5;
		L_5 = ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))((RuntimeObject*)L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_6;
		L_6 = ((  List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_0 = (RuntimeObject*)L_6;
		RuntimeObject* L_7 = V_0;
		G_B3_0 = L_7;
	}

IL_002d:
	{
		V_1 = G_B3_0;
		goto IL_0030;
	}

IL_0030:
	{
		RuntimeObject* L_8 = V_1;
		return L_8;
	}
}
// Method Definition Index: 26772
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool zvjcJSqwDd98hxFcxJL_2_Remove_m1BF8C70A98A3EAF3F885BCD91A36DAB511403B4E_gshared (zvjcJSqwDd98hxFcxJL_2_t39B92566EB0FE2FC9171C2B7328D5F9DE7A75AA0* __this, Il2CppFullySharedGenericAny ___0_g6CD3jqNAaNB8stWlsc, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_vlmyIjqlCtTOrGGpNdq_t7681D8266D6177A6FE7A58F5D0F28AB6FD4F9DC3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_vlmyIjqlCtTOrGGpNdq_t7681D8266D6177A6FE7A58F5D0F28AB6FD4F9DC3);
	const Il2CppFullySharedGenericAny L_6 = L_3;
	const Il2CppFullySharedGenericAny L_11 = L_3;
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		RuntimeObject* L_0 = __this->___OxIqq0XCoB;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = __this->___DCequlZp7n;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___0_g6CD3jqNAaNB8stWlsc : &___0_g6CD3jqNAaNB8stWlsc), SizeOf_vlmyIjqlCtTOrGGpNdq_t7681D8266D6177A6FE7A58F5D0F28AB6FD4F9DC3);
		NullCheck(L_2);
		bool L_4;
		L_4 = InterfaceFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(6, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_3: *(void**)L_3));
		V_1 = L_4;
		goto IL_004f;
	}

IL_001d:
	{
		RuntimeObject* L_5 = __this->___OxIqq0XCoB;
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___0_g6CD3jqNAaNB8stWlsc : &___0_g6CD3jqNAaNB8stWlsc), SizeOf_vlmyIjqlCtTOrGGpNdq_t7681D8266D6177A6FE7A58F5D0F28AB6FD4F9DC3);
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), L_6);
		NullCheck(L_5);
		bool L_8;
		L_8 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(4, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_5, L_7);
		V_2 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0039;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_004f;
	}

IL_0039:
	{
		RuntimeObject* L_10 = __this->___OxIqq0XCoB;
		il2cpp_codegen_memcpy(L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___0_g6CD3jqNAaNB8stWlsc : &___0_g6CD3jqNAaNB8stWlsc), SizeOf_vlmyIjqlCtTOrGGpNdq_t7681D8266D6177A6FE7A58F5D0F28AB6FD4F9DC3);
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), L_11);
		NullCheck(L_10);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(10, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_10, L_12);
		V_1 = (bool)1;
		goto IL_004f;
	}

IL_004f:
	{
		bool L_13 = V_1;
		return L_13;
	}
}
// Method Definition Index: 26773
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool zvjcJSqwDd98hxFcxJL_2_TryGetValue_mC2BF56AAA13347044CACF209038CDFF712CBB296_gshared (zvjcJSqwDd98hxFcxJL_2_t39B92566EB0FE2FC9171C2B7328D5F9DE7A75AA0* __this, Il2CppFullySharedGenericAny ___0_PouGwFqMZMDnAuKvM2C, Il2CppFullySharedGenericAny* ___1_U20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_vlmyIjqlCtTOrGGpNdq_t7681D8266D6177A6FE7A58F5D0F28AB6FD4F9DC3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const uint32_t SizeOf_LsRYIXqpJedKCMAijTj_tCF81A9EA1093D9E066036ADA621C27F5A6A30597 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_vlmyIjqlCtTOrGGpNdq_t7681D8266D6177A6FE7A58F5D0F28AB6FD4F9DC3);
	const Il2CppFullySharedGenericAny L_7 = L_3;
	const Il2CppFullySharedGenericAny L_14 = L_3;
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_LsRYIXqpJedKCMAijTj_tCF81A9EA1093D9E066036ADA621C27F5A6A30597);
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		RuntimeObject* L_0 = __this->___OxIqq0XCoB;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_2 = __this->___DCequlZp7n;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___0_PouGwFqMZMDnAuKvM2C : &___0_PouGwFqMZMDnAuKvM2C), SizeOf_vlmyIjqlCtTOrGGpNdq_t7681D8266D6177A6FE7A58F5D0F28AB6FD4F9DC3);
		Il2CppFullySharedGenericAny* L_4 = ___1_U20;
		NullCheck(L_2);
		bool L_5;
		L_5 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(7, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_3: *(void**)L_3), L_4);
		V_1 = L_5;
		goto IL_0062;
	}

IL_001e:
	{
		RuntimeObject* L_6 = __this->___OxIqq0XCoB;
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___0_PouGwFqMZMDnAuKvM2C : &___0_PouGwFqMZMDnAuKvM2C), SizeOf_vlmyIjqlCtTOrGGpNdq_t7681D8266D6177A6FE7A58F5D0F28AB6FD4F9DC3);
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), L_7);
		NullCheck(L_6);
		bool L_9;
		L_9 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(4, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_6, L_8);
		V_2 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0042;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_11 = ___1_U20;
		il2cpp_codegen_initobj(L_11, SizeOf_LsRYIXqpJedKCMAijTj_tCF81A9EA1093D9E066036ADA621C27F5A6A30597);
		V_1 = (bool)0;
		goto IL_0062;
	}

IL_0042:
	{
		Il2CppFullySharedGenericAny* L_12 = ___1_U20;
		RuntimeObject* L_13 = __this->___OxIqq0XCoB;
		il2cpp_codegen_memcpy(L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___0_PouGwFqMZMDnAuKvM2C : &___0_PouGwFqMZMDnAuKvM2C), SizeOf_vlmyIjqlCtTOrGGpNdq_t7681D8266D6177A6FE7A58F5D0F28AB6FD4F9DC3);
		RuntimeObject* L_15 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), L_14);
		NullCheck(L_13);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_13, L_15);
		void* L_18 = UnBox_Any(L_16, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_17);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_12, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_18)), SizeOf_LsRYIXqpJedKCMAijTj_tCF81A9EA1093D9E066036ADA621C27F5A6A30597);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (void**)(Il2CppFullySharedGenericAny*)L_12, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_18)));
		V_1 = (bool)1;
		goto IL_0062;
	}

IL_0062:
	{
		bool L_19 = V_1;
		return L_19;
	}
}
// Method Definition Index: 26774
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* zvjcJSqwDd98hxFcxJL_2_get_Values_mDEBE3EACEE233D927A732100FCF3915ABA72A0C4_gshared (zvjcJSqwDd98hxFcxJL_2_t39B92566EB0FE2FC9171C2B7328D5F9DE7A75AA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = __this->___OxIqq0XCoB;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject* L_1 = __this->___DCequlZp7n;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_1);
		G_B3_0 = L_2;
		goto IL_002d;
	}

IL_0016:
	{
		RuntimeObject* L_3 = __this->___OxIqq0XCoB;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_3);
		RuntimeObject* L_5;
		L_5 = ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))((RuntimeObject*)L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_6;
		L_6 = ((  List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		V_0 = (RuntimeObject*)L_6;
		RuntimeObject* L_7 = V_0;
		G_B3_0 = L_7;
	}

IL_002d:
	{
		V_1 = G_B3_0;
		goto IL_0030;
	}

IL_0030:
	{
		RuntimeObject* L_8 = V_1;
		return L_8;
	}
}
// Method Definition Index: 26775
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void zvjcJSqwDd98hxFcxJL_2_get_Item_m0090B3861D015F73C34D348AF091B994465AB6C9_gshared (zvjcJSqwDd98hxFcxJL_2_t39B92566EB0FE2FC9171C2B7328D5F9DE7A75AA0* __this, Il2CppFullySharedGenericAny ___0_gWiCWUqv36bAPGu4iHs, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_LsRYIXqpJedKCMAijTj_tCF81A9EA1093D9E066036ADA621C27F5A6A30597 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const uint32_t SizeOf_vlmyIjqlCtTOrGGpNdq_t7681D8266D6177A6FE7A58F5D0F28AB6FD4F9DC3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_vlmyIjqlCtTOrGGpNdq_t7681D8266D6177A6FE7A58F5D0F28AB6FD4F9DC3);
	const Il2CppFullySharedGenericAny L_5 = L_2;
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_LsRYIXqpJedKCMAijTj_tCF81A9EA1093D9E066036ADA621C27F5A6A30597);
	const Il2CppFullySharedGenericAny L_8 = L_3;
	const Il2CppFullySharedGenericAny L_10 = L_3;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_LsRYIXqpJedKCMAijTj_tCF81A9EA1093D9E066036ADA621C27F5A6A30597);
	memset(V_0, 0, SizeOf_LsRYIXqpJedKCMAijTj_tCF81A9EA1093D9E066036ADA621C27F5A6A30597);
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_LsRYIXqpJedKCMAijTj_tCF81A9EA1093D9E066036ADA621C27F5A6A30597);
	memset(G_B3_0, 0, SizeOf_LsRYIXqpJedKCMAijTj_tCF81A9EA1093D9E066036ADA621C27F5A6A30597);
	{
		RuntimeObject* L_0 = __this->___OxIqq0XCoB;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = __this->___DCequlZp7n;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___0_gWiCWUqv36bAPGu4iHs : &___0_gWiCWUqv36bAPGu4iHs), SizeOf_vlmyIjqlCtTOrGGpNdq_t7681D8266D6177A6FE7A58F5D0F28AB6FD4F9DC3);
		NullCheck(L_1);
		InterfaceActionInvoker2Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_2: *(void**)L_2), (Il2CppFullySharedGenericAny*)L_3);
		il2cpp_codegen_memcpy(G_B3_0, L_3, SizeOf_LsRYIXqpJedKCMAijTj_tCF81A9EA1093D9E066036ADA621C27F5A6A30597);
		goto IL_002d;
	}

IL_0017:
	{
		RuntimeObject* L_4 = __this->___OxIqq0XCoB;
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___0_gWiCWUqv36bAPGu4iHs : &___0_gWiCWUqv36bAPGu4iHs), SizeOf_vlmyIjqlCtTOrGGpNdq_t7681D8266D6177A6FE7A58F5D0F28AB6FD4F9DC3);
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), L_5);
		NullCheck(L_4);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_4, L_6);
		void* L_9 = UnBox_Any(L_7, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_8);
		il2cpp_codegen_memcpy(G_B3_0, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_9)), SizeOf_LsRYIXqpJedKCMAijTj_tCF81A9EA1093D9E066036ADA621C27F5A6A30597);
	}

IL_002d:
	{
		il2cpp_codegen_memcpy(V_0, G_B3_0, SizeOf_LsRYIXqpJedKCMAijTj_tCF81A9EA1093D9E066036ADA621C27F5A6A30597);
		goto IL_0030;
	}

IL_0030:
	{
		il2cpp_codegen_memcpy(L_10, V_0, SizeOf_LsRYIXqpJedKCMAijTj_tCF81A9EA1093D9E066036ADA621C27F5A6A30597);
		il2cpp_codegen_memcpy(il2cppRetVal, L_10, SizeOf_LsRYIXqpJedKCMAijTj_tCF81A9EA1093D9E066036ADA621C27F5A6A30597);
		return;
	}
}
// Method Definition Index: 26776
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void zvjcJSqwDd98hxFcxJL_2_set_Item_m7E0769D121EC70DBBC8AC928804799F6A2C5A0BB_gshared (zvjcJSqwDd98hxFcxJL_2_t39B92566EB0FE2FC9171C2B7328D5F9DE7A75AA0* __this, Il2CppFullySharedGenericAny ___0_nbhcDxq5ShVjh4NqjNl, Il2CppFullySharedGenericAny ___1_uP3XFtqjpK7QTJZQLHY, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_vlmyIjqlCtTOrGGpNdq_t7681D8266D6177A6FE7A58F5D0F28AB6FD4F9DC3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const uint32_t SizeOf_LsRYIXqpJedKCMAijTj_tCF81A9EA1093D9E066036ADA621C27F5A6A30597 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_vlmyIjqlCtTOrGGpNdq_t7681D8266D6177A6FE7A58F5D0F28AB6FD4F9DC3);
	const Il2CppFullySharedGenericAny L_8 = L_3;
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_LsRYIXqpJedKCMAijTj_tCF81A9EA1093D9E066036ADA621C27F5A6A30597);
	const Il2CppFullySharedGenericAny L_9 = L_5;
	bool V_0 = false;
	{
		RuntimeObject* L_0 = __this->___OxIqq0XCoB;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		RuntimeObject* L_2 = __this->___OxIqq0XCoB;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___0_nbhcDxq5ShVjh4NqjNl : &___0_nbhcDxq5ShVjh4NqjNl), SizeOf_vlmyIjqlCtTOrGGpNdq_t7681D8266D6177A6FE7A58F5D0F28AB6FD4F9DC3);
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), L_3);
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)) ? ___1_uP3XFtqjpK7QTJZQLHY : &___1_uP3XFtqjpK7QTJZQLHY), SizeOf_LsRYIXqpJedKCMAijTj_tCF81A9EA1093D9E066036ADA621C27F5A6A30597);
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), L_5);
		NullCheck(L_2);
		InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(1, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_2, L_4, L_6);
		goto IL_0036;
	}

IL_0028:
	{
		RuntimeObject* L_7 = __this->___DCequlZp7n;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? ___0_nbhcDxq5ShVjh4NqjNl : &___0_nbhcDxq5ShVjh4NqjNl), SizeOf_vlmyIjqlCtTOrGGpNdq_t7681D8266D6177A6FE7A58F5D0F28AB6FD4F9DC3);
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)) ? ___1_uP3XFtqjpK7QTJZQLHY : &___1_uP3XFtqjpK7QTJZQLHY), SizeOf_LsRYIXqpJedKCMAijTj_tCF81A9EA1093D9E066036ADA621C27F5A6A30597);
		NullCheck(L_7);
		InterfaceActionInvoker2Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? L_8: *(void**)L_8), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)) ? L_9: *(void**)L_9));
	}

IL_0036:
	{
		return;
	}
}
// Method Definition Index: 26777
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void zvjcJSqwDd98hxFcxJL_2_Add_m0F8A2C39A49C5C9D2949FCB3FAA196F41E7D1C5D_gshared (zvjcJSqwDd98hxFcxJL_2_t39B92566EB0FE2FC9171C2B7328D5F9DE7A75AA0* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___0_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_KeyValuePair_2_t3770E71972AFD7A2CEA20F249F0A3205B9CEAA91 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 23));
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_3 = alloca(SizeOf_KeyValuePair_2_t3770E71972AFD7A2CEA20F249F0A3205B9CEAA91);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_9 = L_3;
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = __this->___OxIqq0XCoB;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		RuntimeObject* L_2 = __this->___OxIqq0XCoB;
		il2cpp_codegen_memcpy(L_3, ___0_item, SizeOf_KeyValuePair_2_t3770E71972AFD7A2CEA20F249F0A3205B9CEAA91);
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 23), L_3);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_2, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var)));
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(2, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_2, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var)), L_4);
		goto IL_0047;
	}

IL_0029:
	{
		RuntimeObject* L_6 = __this->___DCequlZp7n;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_6) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0039;
		}
	}
	{
		goto IL_0047;
	}

IL_0039:
	{
		RuntimeObject* L_8 = __this->___DCequlZp7n;
		il2cpp_codegen_memcpy(L_9, ___0_item, SizeOf_KeyValuePair_2_t3770E71972AFD7A2CEA20F249F0A3205B9CEAA91);
		NullCheck((RuntimeObject*)L_8);
		InterfaceActionInvoker1Invoker< KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 >::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 24), (RuntimeObject*)L_8, L_9);
	}

IL_0047:
	{
		return;
	}
}
// Method Definition Index: 26778
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void zvjcJSqwDd98hxFcxJL_2_Clear_mD5A562B25C551A927EB1E75A50165E3AE3472167_gshared (zvjcJSqwDd98hxFcxJL_2_t39B92566EB0FE2FC9171C2B7328D5F9DE7A75AA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeObject* L_0 = __this->___OxIqq0XCoB;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_2 = __this->___OxIqq0XCoB;
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(6, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_2);
		goto IL_0028;
	}

IL_001c:
	{
		RuntimeObject* L_3 = __this->___DCequlZp7n;
		NullCheck((RuntimeObject*)L_3);
		InterfaceActionInvoker0::Invoke(3, il2cpp_rgctx_data(method->klass->rgctx_data, 24), (RuntimeObject*)L_3);
	}

IL_0028:
	{
		return;
	}
}
// Method Definition Index: 26779
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool zvjcJSqwDd98hxFcxJL_2_Contains_m39257534330E6EA8D6497B278DE05279A2141698_gshared (zvjcJSqwDd98hxFcxJL_2_t39B92566EB0FE2FC9171C2B7328D5F9DE7A75AA0* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___0_U20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_KeyValuePair_2_t3770E71972AFD7A2CEA20F249F0A3205B9CEAA91 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 23));
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_2 = alloca(SizeOf_KeyValuePair_2_t3770E71972AFD7A2CEA20F249F0A3205B9CEAA91);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_5 = L_2;
	bool V_0 = false;
	bool G_B3_0 = false;
	{
		RuntimeObject* L_0 = __this->___OxIqq0XCoB;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = __this->___DCequlZp7n;
		il2cpp_codegen_memcpy(L_2, ___0_U20, SizeOf_KeyValuePair_2_t3770E71972AFD7A2CEA20F249F0A3205B9CEAA91);
		NullCheck((RuntimeObject*)L_1);
		bool L_3;
		L_3 = InterfaceFuncInvoker1Invoker< bool, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 >::Invoke(4, il2cpp_rgctx_data(method->klass->rgctx_data, 24), (RuntimeObject*)L_1, L_2);
		G_B3_0 = L_3;
		goto IL_002d;
	}

IL_0017:
	{
		RuntimeObject* L_4 = __this->___OxIqq0XCoB;
		il2cpp_codegen_memcpy(L_5, ___0_U20, SizeOf_KeyValuePair_2_t3770E71972AFD7A2CEA20F249F0A3205B9CEAA91);
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 23), L_5);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_4, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var)));
		bool L_7;
		L_7 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(3, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var)), L_6);
		G_B3_0 = L_7;
	}

IL_002d:
	{
		V_0 = G_B3_0;
		goto IL_0030;
	}

IL_0030:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 26780
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void zvjcJSqwDd98hxFcxJL_2_CopyTo_mD8BAC8ED034E7DD9ED81127CE483FDCF0C1DDB8E_gshared (zvjcJSqwDd98hxFcxJL_2_t39B92566EB0FE2FC9171C2B7328D5F9DE7A75AA0* __this, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* ___0_U20, int32_t ___1_U20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_vlmyIjqlCtTOrGGpNdq_t7681D8266D6177A6FE7A58F5D0F28AB6FD4F9DC3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const uint32_t SizeOf_LsRYIXqpJedKCMAijTj_tCF81A9EA1093D9E066036ADA621C27F5A6A30597 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const uint32_t SizeOf_KeyValuePair_2_t3770E71972AFD7A2CEA20F249F0A3205B9CEAA91 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 23));
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_vlmyIjqlCtTOrGGpNdq_t7681D8266D6177A6FE7A58F5D0F28AB6FD4F9DC3);
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_vlmyIjqlCtTOrGGpNdq_t7681D8266D6177A6FE7A58F5D0F28AB6FD4F9DC3);
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_LsRYIXqpJedKCMAijTj_tCF81A9EA1093D9E066036ADA621C27F5A6A30597);
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_LsRYIXqpJedKCMAijTj_tCF81A9EA1093D9E066036ADA621C27F5A6A30597);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_21 = alloca(SizeOf_KeyValuePair_2_t3770E71972AFD7A2CEA20F249F0A3205B9CEAA91);
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	{
		RuntimeObject* L_0 = __this->___OxIqq0XCoB;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_007e;
		}
	}
	{
		RuntimeObject* L_2 = __this->___OxIqq0XCoB;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(9, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005d:
			{
				{
					RuntimeObject* L_4 = V_1;
					V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_4;
					V_5 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
					bool L_6 = V_5;
					if (!L_6)
					{
						goto IL_0079;
					}
				}
				{
					RuntimeObject* L_7 = V_4;
					NullCheck(L_7);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
				}

IL_0079:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0050_1;
			}

IL_001e_1:
			{
				RuntimeObject* L_8 = V_1;
				NullCheck(L_8);
				DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_9;
				L_9 = InterfaceFuncInvoker0< DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB >::Invoke(2, IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16_il2cpp_TypeInfo_var, L_8);
				V_2 = L_9;
				KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_10 = ___0_U20;
				int32_t L_11 = ___1_U20;
				int32_t L_12 = L_11;
				___1_U20 = ((int32_t)il2cpp_codegen_add(L_12, 1));
				RuntimeObject* L_13;
				L_13 = DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_inline((&V_2), NULL);
				void* L_15 = UnBox_Any(L_13, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_14);
				RuntimeObject* L_16;
				L_16 = DictionaryEntry_get_Value_m75FD18FE968AE131F28AA2CB0DF4895EBA39075E_inline((&V_2), NULL);
				void* L_18 = UnBox_Any(L_16, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_17);
				memset(L_21, 0, SizeOf_KeyValuePair_2_t3770E71972AFD7A2CEA20F249F0A3205B9CEAA91);
				KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_21, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? il2cpp_codegen_memcpy(L_19, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_15)), SizeOf_vlmyIjqlCtTOrGGpNdq_t7681D8266D6177A6FE7A58F5D0F28AB6FD4F9DC3): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_15))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)) ? il2cpp_codegen_memcpy(L_20, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_18)), SizeOf_LsRYIXqpJedKCMAijTj_tCF81A9EA1093D9E066036ADA621C27F5A6A30597): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_18))), il2cpp_rgctx_method(method->klass->rgctx_data, 29));
				NullCheck(L_10);
				il2cpp_codegen_memcpy((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)), L_21, SizeOf_KeyValuePair_2_t3770E71972AFD7A2CEA20F249F0A3205B9CEAA91);
				Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 23), (void**)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)), (void*)L_21);
			}

IL_0050_1:
			{
				RuntimeObject* L_22 = V_1;
				NullCheck((RuntimeObject*)L_22);
				bool L_23;
				L_23 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_22);
				V_3 = L_23;
				bool L_24 = V_3;
				if (L_24)
				{
					goto IL_001e_1;
				}
			}
			{
				goto IL_007b;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007b:
	{
		goto IL_008c;
	}

IL_007e:
	{
		RuntimeObject* L_25 = __this->___DCequlZp7n;
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_26 = ___0_U20;
		int32_t L_27 = ___1_U20;
		NullCheck((RuntimeObject*)L_25);
		InterfaceActionInvoker2< KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 24), (RuntimeObject*)L_25, L_26, L_27);
	}

IL_008c:
	{
		return;
	}
}
// Method Definition Index: 26781
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t zvjcJSqwDd98hxFcxJL_2_get_Count_m1B7FF01C0BEFF8B1F0837FA0F315D5BF1122C966_gshared (zvjcJSqwDd98hxFcxJL_2_t39B92566EB0FE2FC9171C2B7328D5F9DE7A75AA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = __this->___OxIqq0XCoB;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = __this->___DCequlZp7n;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 24), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		goto IL_0020;
	}

IL_0015:
	{
		RuntimeObject* L_3 = __this->___OxIqq0XCoB;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
		G_B3_0 = L_4;
	}

IL_0020:
	{
		return G_B3_0;
	}
}
// Method Definition Index: 26782
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool zvjcJSqwDd98hxFcxJL_2_get_IsReadOnly_mFC31BF601B3AB624B9A96FB2C29E446F9EBFB6F2_gshared (zvjcJSqwDd98hxFcxJL_2_t39B92566EB0FE2FC9171C2B7328D5F9DE7A75AA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool G_B3_0 = false;
	{
		RuntimeObject* L_0 = __this->___OxIqq0XCoB;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject* L_1 = __this->___DCequlZp7n;
		NullCheck((RuntimeObject*)L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 24), (RuntimeObject*)L_1);
		G_B3_0 = L_2;
		goto IL_0021;
	}

IL_0016:
	{
		RuntimeObject* L_3 = __this->___OxIqq0XCoB;
		NullCheck(L_3);
		bool L_4;
		L_4 = InterfaceFuncInvoker0< bool >::Invoke(7, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_3);
		G_B3_0 = L_4;
	}

IL_0021:
	{
		V_0 = G_B3_0;
		goto IL_0024;
	}

IL_0024:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// Method Definition Index: 26783
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool zvjcJSqwDd98hxFcxJL_2_Remove_mC076D767CD60AD90E5FBF0E2462406AC4C73B2E7_gshared (zvjcJSqwDd98hxFcxJL_2_t39B92566EB0FE2FC9171C2B7328D5F9DE7A75AA0* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___0_U20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_KeyValuePair_2_t3770E71972AFD7A2CEA20F249F0A3205B9CEAA91 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 23));
	const uint32_t SizeOf_vlmyIjqlCtTOrGGpNdq_t7681D8266D6177A6FE7A58F5D0F28AB6FD4F9DC3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_vlmyIjqlCtTOrGGpNdq_t7681D8266D6177A6FE7A58F5D0F28AB6FD4F9DC3);
	const Il2CppFullySharedGenericAny L_11 = L_6;
	const Il2CppFullySharedGenericAny L_19 = L_6;
	const uint32_t SizeOf_LsRYIXqpJedKCMAijTj_tCF81A9EA1093D9E066036ADA621C27F5A6A30597 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_LsRYIXqpJedKCMAijTj_tCF81A9EA1093D9E066036ADA621C27F5A6A30597);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_3 = alloca(SizeOf_KeyValuePair_2_t3770E71972AFD7A2CEA20F249F0A3205B9CEAA91);
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		RuntimeObject* L_0 = __this->___OxIqq0XCoB;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = __this->___DCequlZp7n;
		il2cpp_codegen_memcpy(L_3, ___0_U20, SizeOf_KeyValuePair_2_t3770E71972AFD7A2CEA20F249F0A3205B9CEAA91);
		NullCheck((RuntimeObject*)L_2);
		bool L_4;
		L_4 = InterfaceFuncInvoker1Invoker< bool, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 >::Invoke(6, il2cpp_rgctx_data(method->klass->rgctx_data, 24), (RuntimeObject*)L_2, L_3);
		V_1 = L_4;
		goto IL_008e;
	}

IL_001d:
	{
		RuntimeObject* L_5 = __this->___OxIqq0XCoB;
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 34)), il2cpp_rgctx_method(method->klass->rgctx_data, 34), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_U20, (Il2CppFullySharedGenericAny*)L_6);
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), L_6);
		NullCheck(L_5);
		bool L_8;
		L_8 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(4, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_5, L_7);
		V_2 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_003f;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_008e;
	}

IL_003f:
	{
		RuntimeObject* L_10 = __this->___OxIqq0XCoB;
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 34)), il2cpp_rgctx_method(method->klass->rgctx_data, 34), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_U20, (Il2CppFullySharedGenericAny*)L_11);
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), L_11);
		NullCheck(L_10);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_10, L_12);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)), il2cpp_rgctx_method(method->klass->rgctx_data, 36), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_U20, (Il2CppFullySharedGenericAny*)L_14);
		RuntimeObject* L_15 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), L_14);
		bool L_16;
		L_16 = Object_Equals_m434DF93FDA204D5C06E889A9CB53BC2E5D39ABF7(L_13, L_15, NULL);
		V_3 = (bool)((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_0072;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_008e;
	}

IL_0072:
	{
		RuntimeObject* L_18 = __this->___OxIqq0XCoB;
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 34)), il2cpp_rgctx_method(method->klass->rgctx_data, 34), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_U20, (Il2CppFullySharedGenericAny*)L_19);
		RuntimeObject* L_20 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2), L_19);
		NullCheck(L_18);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(10, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_18, L_20);
		V_1 = (bool)1;
		goto IL_008e;
	}

IL_008e:
	{
		bool L_21 = V_1;
		return L_21;
	}
}
// Method Definition Index: 26784
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* zvjcJSqwDd98hxFcxJL_2_GetEnumerator_mB7FB31CCD9B39A335D77D0C0AC069CF4B0565335_gshared (zvjcJSqwDd98hxFcxJL_2_t39B92566EB0FE2FC9171C2B7328D5F9DE7A75AA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Cast_TisDictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_m6DC5AE0678BB43B49AC178004FA3167907385B01_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	Func_2_tCF2B6702148DF79B408F0FFB9B8AE5B305C1FE17* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	Func_2_tCF2B6702148DF79B408F0FFB9B8AE5B305C1FE17* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = __this->___OxIqq0XCoB;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject* L_1 = __this->___DCequlZp7n;
		NullCheck((RuntimeObject*)L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 37), (RuntimeObject*)L_1);
		G_B5_0 = L_2;
		goto IL_004a;
	}

IL_0016:
	{
		RuntimeObject* L_3 = __this->___OxIqq0XCoB;
		RuntimeObject* L_4;
		L_4 = Enumerable_Cast_TisDictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_m6DC5AE0678BB43B49AC178004FA3167907385B01((RuntimeObject*)L_3, Enumerable_Cast_TisDictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_m6DC5AE0678BB43B49AC178004FA3167907385B01_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 42));
		Func_2_tCF2B6702148DF79B408F0FFB9B8AE5B305C1FE17* L_5 = ((U3CU3Ec_t8BD8C13BF0663DC2955F288BBE4AB6B6B46FBEA8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 42)))->___U3CU3E9__25_0;
		Func_2_tCF2B6702148DF79B408F0FFB9B8AE5B305C1FE17* L_6 = L_5;
		if (L_6)
		{
			G_B4_0 = L_6;
			G_B4_1 = L_4;
			goto IL_0040;
		}
		G_B3_0 = L_6;
		G_B3_1 = L_4;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 42));
		U3CU3Ec_t8BD8C13BF0663DC2955F288BBE4AB6B6B46FBEA8* L_7 = ((U3CU3Ec_t8BD8C13BF0663DC2955F288BBE4AB6B6B46FBEA8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 42)))->___U3CU3E9;
		Func_2_tCF2B6702148DF79B408F0FFB9B8AE5B305C1FE17* L_8 = (Func_2_tCF2B6702148DF79B408F0FFB9B8AE5B305C1FE17*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 41));
		((  void (*) (Func_2_tCF2B6702148DF79B408F0FFB9B8AE5B305C1FE17*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 44)))(L_8, (RuntimeObject*)L_7, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 43)), il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		Func_2_tCF2B6702148DF79B408F0FFB9B8AE5B305C1FE17* L_9 = L_8;
		((U3CU3Ec_t8BD8C13BF0663DC2955F288BBE4AB6B6B46FBEA8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 42)))->___U3CU3E9__25_0 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t8BD8C13BF0663DC2955F288BBE4AB6B6B46FBEA8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 42)))->___U3CU3E9__25_0), (void*)L_9);
		G_B4_0 = L_9;
		G_B4_1 = G_B3_1;
	}

IL_0040:
	{
		RuntimeObject* L_10;
		L_10 = ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tCF2B6702148DF79B408F0FFB9B8AE5B305C1FE17*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)))(G_B4_1, G_B4_0, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 37), L_10);
		G_B5_0 = L_11;
	}

IL_004a:
	{
		V_0 = G_B5_0;
		goto IL_004d;
	}

IL_004d:
	{
		RuntimeObject* L_12 = V_0;
		return L_12;
	}
}
// Method Definition Index: 26785
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* zvjcJSqwDd98hxFcxJL_2_System_Collections_IEnumerable_GetEnumerator_mF0EDFEA123EF75380658C5B19CA33D389DA69CB2_gshared (zvjcJSqwDd98hxFcxJL_2_t39B92566EB0FE2FC9171C2B7328D5F9DE7A75AA0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (zvjcJSqwDd98hxFcxJL_2_t39B92566EB0FE2FC9171C2B7328D5F9DE7A75AA0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 46)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 26786
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void zvjcJSqwDd98hxFcxJL_2_System_Collections_IDictionary_Add_m42DF72B5C91547BEEE724226587BD5F37F4F872F_gshared (zvjcJSqwDd98hxFcxJL_2_t39B92566EB0FE2FC9171C2B7328D5F9DE7A75AA0* __this, RuntimeObject* ___0_U20, RuntimeObject* ___1_U20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_vlmyIjqlCtTOrGGpNdq_t7681D8266D6177A6FE7A58F5D0F28AB6FD4F9DC3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_vlmyIjqlCtTOrGGpNdq_t7681D8266D6177A6FE7A58F5D0F28AB6FD4F9DC3);
	const uint32_t SizeOf_LsRYIXqpJedKCMAijTj_tCF81A9EA1093D9E066036ADA621C27F5A6A30597 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_LsRYIXqpJedKCMAijTj_tCF81A9EA1093D9E066036ADA621C27F5A6A30597);
	bool V_0 = false;
	{
		RuntimeObject* L_0 = __this->___OxIqq0XCoB;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_2 = __this->___OxIqq0XCoB;
		RuntimeObject* L_3 = ___0_U20;
		RuntimeObject* L_4 = ___1_U20;
		NullCheck(L_2);
		InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(5, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_2, L_3, L_4);
		goto IL_0036;
	}

IL_001e:
	{
		RuntimeObject* L_5 = __this->___DCequlZp7n;
		RuntimeObject* L_6 = ___0_U20;
		void* L_8 = UnBox_Any(L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_7);
		RuntimeObject* L_9 = ___1_U20;
		void* L_11 = UnBox_Any(L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_10);
		NullCheck(L_5);
		InterfaceActionInvoker2Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_8)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_8))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_11)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_11))));
	}

IL_0036:
	{
		return;
	}
}
// Method Definition Index: 26787
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* zvjcJSqwDd98hxFcxJL_2_System_Collections_IDictionary_get_Item_m255BCA6F3F10B65047D4613BF4F8B8ECB17ECE15_gshared (zvjcJSqwDd98hxFcxJL_2_t39B92566EB0FE2FC9171C2B7328D5F9DE7A75AA0* __this, RuntimeObject* ___0_U20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_vlmyIjqlCtTOrGGpNdq_t7681D8266D6177A6FE7A58F5D0F28AB6FD4F9DC3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_vlmyIjqlCtTOrGGpNdq_t7681D8266D6177A6FE7A58F5D0F28AB6FD4F9DC3);
	const uint32_t SizeOf_LsRYIXqpJedKCMAijTj_tCF81A9EA1093D9E066036ADA621C27F5A6A30597 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_LsRYIXqpJedKCMAijTj_tCF81A9EA1093D9E066036ADA621C27F5A6A30597);
	RuntimeObject* V_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = __this->___OxIqq0XCoB;
		if (L_0)
		{
			goto IL_0021;
		}
	}
	{
		RuntimeObject* L_1 = __this->___DCequlZp7n;
		RuntimeObject* L_2 = ___0_U20;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3);
		NullCheck(L_1);
		InterfaceActionInvoker2Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))), (Il2CppFullySharedGenericAny*)L_5);
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), L_5);
		G_B3_0 = L_6;
		goto IL_002d;
	}

IL_0021:
	{
		RuntimeObject* L_7 = __this->___OxIqq0XCoB;
		RuntimeObject* L_8 = ___0_U20;
		NullCheck(L_7);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_7, L_8);
		G_B3_0 = L_9;
	}

IL_002d:
	{
		V_0 = G_B3_0;
		goto IL_0030;
	}

IL_0030:
	{
		RuntimeObject* L_10 = V_0;
		return L_10;
	}
}
// Method Definition Index: 26788
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void zvjcJSqwDd98hxFcxJL_2_System_Collections_IDictionary_set_Item_m96AA5E1C072920004C7A2EB260B617FD4EE5DBA4_gshared (zvjcJSqwDd98hxFcxJL_2_t39B92566EB0FE2FC9171C2B7328D5F9DE7A75AA0* __this, RuntimeObject* ___0_U20, RuntimeObject* ___1_U20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_vlmyIjqlCtTOrGGpNdq_t7681D8266D6177A6FE7A58F5D0F28AB6FD4F9DC3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_vlmyIjqlCtTOrGGpNdq_t7681D8266D6177A6FE7A58F5D0F28AB6FD4F9DC3);
	const uint32_t SizeOf_LsRYIXqpJedKCMAijTj_tCF81A9EA1093D9E066036ADA621C27F5A6A30597 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_LsRYIXqpJedKCMAijTj_tCF81A9EA1093D9E066036ADA621C27F5A6A30597);
	bool V_0 = false;
	{
		RuntimeObject* L_0 = __this->___OxIqq0XCoB;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_2 = __this->___OxIqq0XCoB;
		RuntimeObject* L_3 = ___0_U20;
		RuntimeObject* L_4 = ___1_U20;
		NullCheck(L_2);
		InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(1, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_2, L_3, L_4);
		goto IL_0036;
	}

IL_001e:
	{
		RuntimeObject* L_5 = __this->___DCequlZp7n;
		RuntimeObject* L_6 = ___0_U20;
		void* L_8 = UnBox_Any(L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_7);
		RuntimeObject* L_9 = ___1_U20;
		void* L_11 = UnBox_Any(L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_10);
		NullCheck(L_5);
		InterfaceActionInvoker2Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_8)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_8))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_11)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_11))));
	}

IL_0036:
	{
		return;
	}
}
// Method Definition Index: 26789
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* zvjcJSqwDd98hxFcxJL_2_System_Collections_IDictionary_GetEnumerator_m8A7F6FB6A353481D4E00FD21C27690773F840C81_gshared (zvjcJSqwDd98hxFcxJL_2_t39B92566EB0FE2FC9171C2B7328D5F9DE7A75AA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = __this->___OxIqq0XCoB;
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_1 = __this->___DCequlZp7n;
		NullCheck((RuntimeObject*)L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 37), (RuntimeObject*)L_1);
		pZmRKgz7lyhuXpWlEUn_2_t9C5D631ECF4EB6A37BDA01EE19B271A76D3F9C75 L_3;
		memset((&L_3), 0, sizeof(L_3));
		pZmRKgz7lyhuXpWlEUn_2__ctor_mAC9EF1F72047F93F88B567E088994154F77B6E89((&L_3), L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		pZmRKgz7lyhuXpWlEUn_2_t9C5D631ECF4EB6A37BDA01EE19B271A76D3F9C75 L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 47), &L_4);
		V_0 = (RuntimeObject*)L_5;
		RuntimeObject* L_6 = V_0;
		G_B3_0 = L_6;
		goto IL_002d;
	}

IL_0022:
	{
		RuntimeObject* L_7 = __this->___OxIqq0XCoB;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(9, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_7);
		G_B3_0 = L_8;
	}

IL_002d:
	{
		V_1 = G_B3_0;
		goto IL_0030;
	}

IL_0030:
	{
		RuntimeObject* L_9 = V_1;
		return L_9;
	}
}
// Method Definition Index: 26790
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool zvjcJSqwDd98hxFcxJL_2_System_Collections_IDictionary_Contains_mE842EF1285243C92B57579D48F9F328C299B9389_gshared (zvjcJSqwDd98hxFcxJL_2_t39B92566EB0FE2FC9171C2B7328D5F9DE7A75AA0* __this, RuntimeObject* ___0_U20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_vlmyIjqlCtTOrGGpNdq_t7681D8266D6177A6FE7A58F5D0F28AB6FD4F9DC3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_vlmyIjqlCtTOrGGpNdq_t7681D8266D6177A6FE7A58F5D0F28AB6FD4F9DC3);
	bool V_0 = false;
	bool G_B3_0 = false;
	{
		RuntimeObject* L_0 = __this->___DCequlZp7n;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_1 = __this->___OxIqq0XCoB;
		RuntimeObject* L_2 = ___0_U20;
		NullCheck(L_1);
		bool L_3;
		L_3 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(4, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_1, L_2);
		G_B3_0 = L_3;
		goto IL_0028;
	}

IL_0017:
	{
		RuntimeObject* L_4 = __this->___DCequlZp7n;
		RuntimeObject* L_5 = ___0_U20;
		void* L_7 = UnBox_Any(L_5, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_6);
		NullCheck(L_4);
		bool L_8;
		L_8 = InterfaceFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(4, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_7)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_7))));
		G_B3_0 = L_8;
	}

IL_0028:
	{
		V_0 = G_B3_0;
		goto IL_002b;
	}

IL_002b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
// Method Definition Index: 26791
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool zvjcJSqwDd98hxFcxJL_2_System_Collections_IDictionary_get_IsFixedSize_m3AFEA94BB39A8157F2B4E99859EB06FE79770303_gshared (zvjcJSqwDd98hxFcxJL_2_t39B92566EB0FE2FC9171C2B7328D5F9DE7A75AA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = __this->___DCequlZp7n;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = __this->___OxIqq0XCoB;
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(8, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 0;
	}

IL_0016:
	{
		return (bool)G_B3_0;
	}
}
// Method Definition Index: 26792
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* zvjcJSqwDd98hxFcxJL_2_System_Collections_IDictionary_get_Keys_mA06502457BE4A76D733F39A1BEDE9742D459045A_gshared (zvjcJSqwDd98hxFcxJL_2_t39B92566EB0FE2FC9171C2B7328D5F9DE7A75AA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = __this->___DCequlZp7n;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject* L_1 = __this->___OxIqq0XCoB;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
		goto IL_0028;
	}

IL_0016:
	{
		RuntimeObject* L_3 = __this->___DCequlZp7n;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3);
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_5;
		L_5 = ((  List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))((RuntimeObject*)L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_0 = (RuntimeObject*)L_5;
		RuntimeObject* L_6 = V_0;
		G_B3_0 = L_6;
	}

IL_0028:
	{
		V_1 = G_B3_0;
		goto IL_002b;
	}

IL_002b:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 26793
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void zvjcJSqwDd98hxFcxJL_2_Remove_m9DCFEC2C553C0A18F57338BD74FD82C83F79D6DB_gshared (zvjcJSqwDd98hxFcxJL_2_t39B92566EB0FE2FC9171C2B7328D5F9DE7A75AA0* __this, RuntimeObject* ___0_U20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_vlmyIjqlCtTOrGGpNdq_t7681D8266D6177A6FE7A58F5D0F28AB6FD4F9DC3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_vlmyIjqlCtTOrGGpNdq_t7681D8266D6177A6FE7A58F5D0F28AB6FD4F9DC3);
	bool V_0 = false;
	{
		RuntimeObject* L_0 = __this->___OxIqq0XCoB;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = __this->___OxIqq0XCoB;
		RuntimeObject* L_3 = ___0_U20;
		NullCheck(L_2);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(10, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_2, L_3);
		goto IL_002f;
	}

IL_001d:
	{
		RuntimeObject* L_4 = __this->___DCequlZp7n;
		RuntimeObject* L_5 = ___0_U20;
		void* L_7 = UnBox_Any(L_5, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_6);
		NullCheck(L_4);
		bool L_8;
		L_8 = InterfaceFuncInvoker1Invoker< bool, Il2CppFullySharedGenericAny >::Invoke(6, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_7)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_7))));
	}

IL_002f:
	{
		return;
	}
}
// Method Definition Index: 26794
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* zvjcJSqwDd98hxFcxJL_2_System_Collections_IDictionary_get_Values_m79345B5818FA136D6227FCDC1DF701D335272DD1_gshared (zvjcJSqwDd98hxFcxJL_2_t39B92566EB0FE2FC9171C2B7328D5F9DE7A75AA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = __this->___DCequlZp7n;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject* L_1 = __this->___OxIqq0XCoB;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_1);
		G_B3_0 = L_2;
		goto IL_0028;
	}

IL_0016:
	{
		RuntimeObject* L_3 = __this->___DCequlZp7n;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_3);
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_5;
		L_5 = ((  List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))((RuntimeObject*)L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		V_0 = (RuntimeObject*)L_5;
		RuntimeObject* L_6 = V_0;
		G_B3_0 = L_6;
	}

IL_0028:
	{
		V_1 = G_B3_0;
		goto IL_002b;
	}

IL_002b:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
// Method Definition Index: 26795
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void zvjcJSqwDd98hxFcxJL_2_System_Collections_ICollection_CopyTo_m8059C4A11A36369B167D40909835D95DCA5B070E_gshared (zvjcJSqwDd98hxFcxJL_2_t39B92566EB0FE2FC9171C2B7328D5F9DE7A75AA0* __this, RuntimeArray* ___0_U20, int32_t ___1_U20, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeObject* L_0 = __this->___OxIqq0XCoB;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_2 = __this->___OxIqq0XCoB;
		RuntimeArray* L_3 = ___0_U20;
		int32_t L_4 = ___1_U20;
		NullCheck((RuntimeObject*)L_2);
		InterfaceActionInvoker2< RuntimeArray*, int32_t >::Invoke(0, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_2, L_3, L_4);
		goto IL_0031;
	}

IL_001e:
	{
		RuntimeObject* L_5 = __this->___DCequlZp7n;
		RuntimeArray* L_6 = ___0_U20;
		int32_t L_7 = ___1_U20;
		NullCheck((RuntimeObject*)L_5);
		InterfaceActionInvoker2< KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 24), (RuntimeObject*)L_5, ((KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 28))), L_7);
	}

IL_0031:
	{
		return;
	}
}
// Method Definition Index: 26796
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool zvjcJSqwDd98hxFcxJL_2_System_Collections_ICollection_get_IsSynchronized_mAB4FDFF4A0A1807860BDAF8324EAC8BF249E6FA8_gshared (zvjcJSqwDd98hxFcxJL_2_t39B92566EB0FE2FC9171C2B7328D5F9DE7A75AA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = __this->___OxIqq0XCoB;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = __this->___OxIqq0XCoB;
		NullCheck((RuntimeObject*)L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(3, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 0;
	}

IL_0016:
	{
		return (bool)G_B3_0;
	}
}
// Method Definition Index: 26797
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* zvjcJSqwDd98hxFcxJL_2_System_Collections_ICollection_get_SyncRoot_mB08FB008377E04E2D99EC14FFB7142B23CDFB265_gshared (zvjcJSqwDd98hxFcxJL_2_t39B92566EB0FE2FC9171C2B7328D5F9DE7A75AA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	{
		RuntimeObject* L_0 = __this->___NCiqx6AHfv;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject** L_2 = (RuntimeObject**)(&__this->___NCiqx6AHfv);
		RuntimeObject* L_3 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_3, NULL);
		RuntimeObject* L_4;
		L_4 = Interlocked_CompareExchange_mC2F0AEDE6957F175ED944794E7AEECE2AED96B71(L_2, L_3, NULL, NULL);
	}

IL_0020:
	{
		RuntimeObject* L_5 = __this->___NCiqx6AHfv;
		V_1 = L_5;
		goto IL_0029;
	}

IL_0029:
	{
		RuntimeObject* L_6 = V_1;
		return L_6;
	}
}
// Method Definition Index: 26798
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* zvjcJSqwDd98hxFcxJL_2_get_UnderlyingDictionary_mAFBFAE3F4CE3340BE89046DAC7C987352421A027_gshared (zvjcJSqwDd98hxFcxJL_2_t39B92566EB0FE2FC9171C2B7328D5F9DE7A75AA0* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = __this->___OxIqq0XCoB;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_1 = __this->___DCequlZp7n;
		G_B3_0 = L_1;
		goto IL_0017;
	}

IL_0011:
	{
		RuntimeObject* L_2 = __this->___OxIqq0XCoB;
		G_B3_0 = ((RuntimeObject*)(L_2));
	}

IL_0017:
	{
		V_0 = (RuntimeObject*)G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 10589
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_inline (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____key;
		return L_0;
	}
}
// Method Definition Index: 10590
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEntry_get_Value_m75FD18FE968AE131F28AA2CB0DF4895EBA39075E_inline (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____value;
		return L_0;
	}
}
// Method Definition Index: 938
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 938
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mEC05F08018197F27D94CA83FED280BBAC5759094_gshared_inline (Func_2_tF20E7560B31C0A5F430905666EFA3C85DC9E43F1* __this, VOT4d6FFPH1Gtv42RMNy_tD2714404642DD9632968173CF2EF10E2AE4D30CF ___0_arg, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, VOT4d6FFPH1Gtv42RMNy_tD2714404642DD9632968173CF2EF10E2AE4D30CF, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 938
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_m406CF2B55A6DEF4E73C17A81ADED3A69354C6E6B_gshared_inline (Func_2_tE1D2E4700064383DA4D0A68CB526432EAC0C04B9* __this, XFcsvjzg8YPVu8hqeMO_t55C5991AC4ED21586C98349E6820420D09285D2E ___0_arg, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, XFcsvjzg8YPVu8hqeMO_t55C5991AC4ED21586C98349E6820420D09285D2E, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
