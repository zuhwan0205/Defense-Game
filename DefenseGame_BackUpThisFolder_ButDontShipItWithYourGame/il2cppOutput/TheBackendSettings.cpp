#include "pch-cpp.hpp"






struct PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0;
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
struct ShowOnlyAttribute_tD2028828A8156674573B0648425748C0823B7DDE;
struct String_t;
struct TheBackendSettings_t32802D1CEFC26EA6641FAC449022AF9CBA8FAB6C;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t073FA0A944FE31DC2EC0A35407B7044248AE6CD4 
{
};
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
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
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	bool ___U3CapplyToCollectionU3Ek__BackingField;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
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
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct ShowOnlyAttribute_tD2028828A8156674573B0648425748C0823B7DDE  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};
struct TheBackendSettings_t32802D1CEFC26EA6641FAC449022AF9CBA8FAB6C  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	String_t* ___clientAppID;
	String_t* ___signatureKey;
	String_t* ___functionAuthKey;
	String_t* ___packageName;
	bool ___sendLogReport;
	uint32_t ___timeOutSec;
	String_t* ___Version;
	bool ___autoRefreshToken;
	bool ___retryWhenClientRequestFailError;
	bool ___retryWhenServerError;
	bool ___initFailWhenDeviceIdUnknown;
	bool ___autoLoadLocationProperties;
	bool ___waitUntilInitializeFinish;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D (PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 99873
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TheBackendSettings__ctor_m2EE31CECA208647297295FC65D6CBE7B88C64494 (TheBackendSettings_t32802D1CEFC26EA6641FAC449022AF9CBA8FAB6C* __this, const RuntimeMethod* method) 
{
	{
		__this->___sendLogReport = (bool)1;
		__this->___timeOutSec = ((int32_t)100);
		__this->___autoRefreshToken = (bool)1;
		__this->___retryWhenClientRequestFailError = (bool)1;
		__this->___retryWhenServerError = (bool)1;
		__this->___initFailWhenDeviceIdUnknown = (bool)1;
		__this->___autoLoadLocationProperties = (bool)1;
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// Method Definition Index: 99874
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowOnlyAttribute__ctor_mD68E243F7ADD182CD2988F93407B40C3CD8FBFB8 (ShowOnlyAttribute_tD2028828A8156674573B0648425748C0823B7DDE* __this, const RuntimeMethod* method) 
{
	{
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
