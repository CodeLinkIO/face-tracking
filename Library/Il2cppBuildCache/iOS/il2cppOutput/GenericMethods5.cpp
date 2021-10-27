#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation>
struct Action_1_t712E64B2FB6B72A4E947CBB2975DABB73A06E663;
// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice>
struct Action_2_t83E2B2D05A16B14F487969D4D187AEC66413E199;
// System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>
struct Action_2_tACB2F8D6B2F70F78DC65A6BC64A3108B0B1AC539;
// System.Action`2<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation,System.String>
struct Action_2_t1C13FAA0BE04A7EFAC5DDD87B23307535BE59B56;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>>
struct Dictionary_2_t73E7A2CC7CD17B4CBC4DBC5B50FC3A085745875D;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString[]>
struct Dictionary_2_t6B8207956EB1FAAEB6DBD37E3FD84A30466F2BA8;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Layouts.InputControlLayout>
struct Dictionary_2_tDCF55C892C8E630B68A32A8B68C04B47E837C8A7;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString>
struct Dictionary_2_tBE5A6550789B79F0A18DA883DF48023D1D980096;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.String>
struct Dictionary_2_tDA5E5646D36E737D207FA28F7AB4CE457B42B367;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type>
struct Dictionary_2_t9AFCC08689B78B2E9999C1E77045DE7FE2E38939;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>
struct Dictionary_2_tEDC3A3E73C894B8EF1BB6DB89A4CB172AFB85667;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>
struct Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B;
// System.Func`2<UnityEngine.InputSystem.InputControl,System.String>
struct Func_2_t256D379297E9972A2E59B56A5D0276E9ED789181;
// System.Func`3<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Single>
struct Func_3_tB2180AFDCB89ECEDE3ED8A30CA81B8E923416ADC;
// System.Collections.Generic.HashSet`1<UnityEngine.InputSystem.Utilities.InternedString>
struct HashSet_1_t68A0DBD19F3F3043FF8AC0D854B63BAA7BEB4064;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader>
struct HashSet_1_t0BB7AD0707F32BD77A251670A64E2F9355AC13F6;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t7EEC9B4006D6D425748908D52AA799197F29A165;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,UnityEngine.ISubsystem>
struct KeyCollection_tA78C44CE4ECC5E36F9D102D66F5C337E0EB0CF49;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>
struct KeyValuePair_2_tA4DF5ECAE9C383B045BDF7D84EA71747D26A2AD5;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<UnityEngine.InputSystem.XR.UsageHint>
struct List_1_t4CDCC087E13A6B3A7AEEB086AB0496DA6CAB31E5;
// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_t6331523A19E51FB87CA899920C03B10A48A562B0;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRReferenceObjectEntry>
struct List_1_tB23AEDE769BF4EA511C93F224596EF58939F8E5A;
// System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>
struct List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013;
// System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose>
struct List_1_tA9A7E2A508B3146A7DE46E73A64E988FE4BD5248;
// System.Collections.Generic.List`1<UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/LayoutMatcher>
struct List_1_tE0D0016948365B54865C0A62B95211A71F2FB9A6;
// System.Tuple`2<System.Object,System.Object>
struct Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,UnityEngine.ISubsystem>
struct ValueCollection_t7427E2A255085073429A560EED6DE8F510FA74F1;
// System.Action`1<System.Object>[]
struct Action_1U5BU5D_t45AFA72AB9C17482E4A448FF460696B2CD7F5B30;
// System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>[]
struct Action_2U5BU5D_t459BDBFC4C24F188864A38C4CD1D0E76071FEF6D;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,UnityEngine.ISubsystem>[]
struct EntryU5BU5D_t3AFED47D4D21250F38CAB7868BA0FBB84D99C302;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>[]
struct KeyValuePair_2U5BU5D_t5C04AE017D2E5ABB3B7D690F561546EFABE0DD7F;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Runtime.InteropServices.GCHandle[]
struct GCHandleU5BU5D_tE15D27927DA8B3D667EF2723192CDC34B763D2F3;
// UnityEngine.InputSystem.IInputInteraction[]
struct IInputInteractionU5BU5D_tC7710034CF7D51B96E7C1E12F3C7E64AB0B6C3E8;
// UnityEngine.InputSystem.InputActionMap[]
struct InputActionMapU5BU5D_tEE6F572B03BE03B28C7B701C19AE4FD4D5D2E580;
// UnityEngine.InputSystem.InputBindingComposite[]
struct InputBindingCompositeU5BU5D_tC0DEE76C22B9127A27E52487A6F2F5F9CCF483B6;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67;
// UnityEngine.InputSystem.InputProcessor[]
struct InputProcessorU5BU5D_tC2B97EE395F9CFBD17046BD90DB5A0A3B46EB9D3;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.InputSystem.Utilities.InternedString[]
struct InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648;
// UnityEngine.InputSystem.Utilities.NameAndParameters[]
struct NameAndParametersU5BU5D_t92AB405EB6A1ADE1882C30BD29671750A89F3C49;
// UnityEngine.InputSystem.Utilities.NamedValue[]
struct NamedValueU5BU5D_t14E74CFBB3D0ED7EC9222CFA9E959246B9E4DB15;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem[]
struct ControlItemU5BU5D_t5AFF1520667DFF9AA06E17887A3D0B77BEB173BB;
// UnityEngine.InputSystem.InputControlScheme/DeviceRequirement[]
struct DeviceRequirementU5BU5D_t78146FB21A5C410CBC1F66A8D380D1E95EB2C045;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// UnityEngine.ISubsystem
struct ISubsystem_t64464AB5EA37383499172853FA932A96C7841789;
// UnityEngine.InputSystem.InputAction
struct InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C;
// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F;
// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C;
// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider
struct SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E;
// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// System.Type
struct Type_t;
// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.XR.Management.XRLoader
struct XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B;
// UnityEngine.XR.Management.XRLoaderHelper
struct XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013;
// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F;
// UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor
struct XRObjectTrackingSubsystemDescriptor_t831B568A9BE175A6A79BB87E25DEFAC519A6C472;
// UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor
struct XRParticipantSubsystemDescriptor_t533EE70DC8D4B105B9C87B76D35A7D59A84BCA55;
// UnityEngine.XR.ARSubsystems.XRReferenceObjectLibrary
struct XRReferenceObjectLibrary_t07704B2996E507F23EE3C99CFC3BB73A83C99A7C;
// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation
struct RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970;
// UnityEngine.InputSystem.InputActionState/ActionMapIndices
struct ActionMapIndices_t70234E0132647DCE386300AED2C964F629609245;
// UnityEngine.InputSystem.InputActionState/BindingState
struct BindingState_tE715A30188652BA114CEB7CD0E12A25CFCEF8FC7;
// UnityEngine.InputSystem.InputActionState/InteractionState
struct InteractionState_tC8A885CD98436B1609B0988EFDCCD6BBBCFDD6B7;
// UnityEngine.InputSystem.InputActionState/TriggerState
struct TriggerState_tD1D00F0DE77AE9CA21DE7A2CEDA8D93EED009CBE;
// UnityEngine.InputSystem.Layouts.InputControlLayout/Builder
struct Builder_t4C196179CE57554255EBFB4ECD4D6499ADA974FB;
// UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem/Provider
struct Provider_t35977A2A0AA6C338BC9893668DD32F0294A9C01E;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISubsystemDescriptor_tEB935323042076ECFC076435FBD756B1E7953A14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISubsystem_t64464AB5EA37383499172853FA932A96C7841789_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputProcessor_tAC24832406A406286CE4B162D9D2EF5E2E08765A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemDescriptorStore_tE5D99C3159868DE6506269CB6B830621F8BC31A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRObjectTrackingSubsystemDescriptor_t831B568A9BE175A6A79BB87E25DEFAC519A6C472_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRParticipantSubsystemDescriptor_t533EE70DC8D4B105B9C87B76D35A7D59A84BCA55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral4484D73E5D13E98119AFD8332CD8BC78758E004F;
IL2CPP_EXTERN_C String_t* _stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11;
IL2CPP_EXTERN_C String_t* _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694;
IL2CPP_EXTERN_C String_t* _stringLiteralAFCE96C2E9CB5FEF65576BADEA096873577F2BF6;
IL2CPP_EXTERN_C String_t* _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5;
IL2CPP_EXTERN_C const RuntimeMethod* BindingSyntax_WithInteraction_TisRuntimeObject_mF004EAD1BEFB97AAECF7B3AD3C9856304B302EDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BindingSyntax_WithProcessor_TisRuntimeObject_mE7F31DB067FE1D0D8B6CAE2F3A869BB60B4E15ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m9E74E9D949738C4D713E2CBBB913F1802FC81EC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m5937D6874DDC30F39BB9C214C475213227C16F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m0439232C1973145EACAE3AF316075FAE865873D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mF9CF6659FF9290D0399AE9BAB022F7F806AF1610_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m3E52F1FFE137D3A16050805AB648F726394436DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRObjectTrackingSubsystem_Register_TisRuntimeObject_TisRuntimeObject_mAD339CA933DF8B8D705E23C725E78FF7599EC36F_RuntimeMethod_var;
struct DeviceRequirement_t81B74F0AB5D81F4F19AB7A30E422908B6EF74ED3_marshaled_com;
struct DeviceRequirement_t81B74F0AB5D81F4F19AB7A30E422908B6EF74ED3_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>
struct Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t3AFED47D4D21250F38CAB7868BA0FBB84D99C302* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tA78C44CE4ECC5E36F9D102D66F5C337E0EB0CF49 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t7427E2A255085073429A560EED6DE8F510FA74F1 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B, ___entries_1)); }
	inline EntryU5BU5D_t3AFED47D4D21250F38CAB7868BA0FBB84D99C302* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t3AFED47D4D21250F38CAB7868BA0FBB84D99C302** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t3AFED47D4D21250F38CAB7868BA0FBB84D99C302* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B, ___keys_7)); }
	inline KeyCollection_tA78C44CE4ECC5E36F9D102D66F5C337E0EB0CF49 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tA78C44CE4ECC5E36F9D102D66F5C337E0EB0CF49 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tA78C44CE4ECC5E36F9D102D66F5C337E0EB0CF49 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B, ___values_8)); }
	inline ValueCollection_t7427E2A255085073429A560EED6DE8F510FA74F1 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t7427E2A255085073429A560EED6DE8F510FA74F1 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t7427E2A255085073429A560EED6DE8F510FA74F1 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Tuple`2<System.Object,System.Object>
struct Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1  : public RuntimeObject
{
public:
	// T1 System.Tuple`2::m_Item1
	RuntimeObject * ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	RuntimeObject * ___m_Item2_1;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1, ___m_Item1_0)); }
	inline RuntimeObject * get_m_Item1_0() const { return ___m_Item1_0; }
	inline RuntimeObject ** get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(RuntimeObject * value)
	{
		___m_Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1, ___m_Item2_1)); }
	inline RuntimeObject * get_m_Item2_1() const { return ___m_Item2_1; }
	inline RuntimeObject ** get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(RuntimeObject * value)
	{
		___m_Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item2_1), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider
struct SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E  : public RuntimeObject
{
public:
	// System.String UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<providerType>k__BackingField
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<subsystemTypeOverride>k__BackingField
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E, ___U3CproviderTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CproviderTypeU3Ek__BackingField_1() const { return ___U3CproviderTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CproviderTypeU3Ek__BackingField_1() { return &___U3CproviderTypeU3Ek__BackingField_1; }
	inline void set_U3CproviderTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CproviderTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E, ___U3CsubsystemTypeOverrideU3Ek__BackingField_2)); }
	inline Type_t * get_U3CsubsystemTypeOverrideU3Ek__BackingField_2() const { return ___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline Type_t ** get_address_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return &___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline void set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(Type_t * value)
	{
		___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)value);
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemProvider::m_Running
	bool ___m_Running_0;

public:
	inline static int32_t get_offset_of_m_Running_0() { return static_cast<int32_t>(offsetof(SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9, ___m_Running_0)); }
	inline bool get_m_Running_0() const { return ___m_Running_0; }
	inline bool* get_address_of_m_Running_0() { return &___m_Running_0; }
	inline void set_m_Running_0(bool value)
	{
		___m_Running_0 = value;
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider
struct SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<running>k__BackingField
	bool ___U3CrunningU3Ek__BackingField_0;
	// UnityEngine.SubsystemsImplementation.SubsystemProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<providerBase>k__BackingField
	SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 * ___U3CproviderBaseU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CrunningU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E, ___U3CrunningU3Ek__BackingField_0)); }
	inline bool get_U3CrunningU3Ek__BackingField_0() const { return ___U3CrunningU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CrunningU3Ek__BackingField_0() { return &___U3CrunningU3Ek__BackingField_0; }
	inline void set_U3CrunningU3Ek__BackingField_0(bool value)
	{
		___U3CrunningU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CproviderBaseU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E, ___U3CproviderBaseU3Ek__BackingField_1)); }
	inline SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 * get_U3CproviderBaseU3Ek__BackingField_1() const { return ___U3CproviderBaseU3Ek__BackingField_1; }
	inline SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 ** get_address_of_U3CproviderBaseU3Ek__BackingField_1() { return &___U3CproviderBaseU3Ek__BackingField_1; }
	inline void set_U3CproviderBaseU3Ek__BackingField_1(SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 * value)
	{
		___U3CproviderBaseU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderBaseU3Ek__BackingField_1), (void*)value);
	}
};


// System.ThrowHelper
struct ThrowHelper_t396052A7B504E698E9DF1B91F7A52F4D2EA47246  : public RuntimeObject
{
public:

public:
};


// System.Tuple
struct Tuple_t04ED51FC9876E74A8E2D69E20EC4D89DAF554A9F  : public RuntimeObject
{
public:

public:
};


// UnityEngine.InputSystem.Utilities.TypeHelpers
struct TypeHelpers_t9F29E39C92189A7E92225561C1D1556C8E46CA85  : public RuntimeObject
{
public:

public:
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility
struct UnsafeUtility_tAA965823E05BE8ADD69F58C82BF0DF723476E551  : public RuntimeObject
{
public:

public:
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Threading.Volatile
struct Volatile_t7A8B2983396C4500A8FC226CDB66FE9067DA4AE6  : public RuntimeObject
{
public:

public:
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Byte>
struct AlignOfHelper_1_t030625109E9AAAF4D093DC2F7FAA2BEC2000FA0A 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	uint8_t ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t030625109E9AAAF4D093DC2F7FAA2BEC2000FA0A, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t030625109E9AAAF4D093DC2F7FAA2BEC2000FA0A, ___data_1)); }
	inline uint8_t get_data_1() const { return ___data_1; }
	inline uint8_t* get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(uint8_t value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Int32>
struct AlignOfHelper_1_t2D37A63A0766FF4D4D0AA3CCD8879D66AC006FF1 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	int32_t ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t2D37A63A0766FF4D4D0AA3CCD8879D66AC006FF1, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t2D37A63A0766FF4D4D0AA3CCD8879D66AC006FF1, ___data_1)); }
	inline int32_t get_data_1() const { return ___data_1; }
	inline int32_t* get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(int32_t value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Single>
struct AlignOfHelper_1_t71968306CCF214CB31392EA30096E5F1D1566E97 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	float ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t71968306CCF214CB31392EA30096E5F1D1566E97, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t71968306CCF214CB31392EA30096E5F1D1566E97, ___data_1)); }
	inline float get_data_1() const { return ___data_1; }
	inline float* get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(float value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.UInt32>
struct AlignOfHelper_1_t5566EA2E593CB8248CE5949452A1803A03E3AEE0 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	uint32_t ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t5566EA2E593CB8248CE5949452A1803A03E3AEE0, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t5566EA2E593CB8248CE5949452A1803A03E3AEE0, ___data_1)); }
	inline uint32_t get_data_1() const { return ___data_1; }
	inline uint32_t* get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(uint32_t value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.UInt64>
struct AlignOfHelper_1_t4841EA6819270C98FCF241417AE852035FAD295D 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	uint64_t ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t4841EA6819270C98FCF241417AE852035FAD295D, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t4841EA6819270C98FCF241417AE852035FAD295D, ___data_1)); }
	inline uint64_t get_data_1() const { return ___data_1; }
	inline uint64_t* get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(uint64_t value)
	{
		___data_1 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<System.Object>>
struct InlinedArray_1_tCA120CEA444FAF14E58313503668909AB8450BB2 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_t45AFA72AB9C17482E4A448FF460696B2CD7F5B30* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_tCA120CEA444FAF14E58313503668909AB8450BB2, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_tCA120CEA444FAF14E58313503668909AB8450BB2, ___firstValue_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_firstValue_1() const { return ___firstValue_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_tCA120CEA444FAF14E58313503668909AB8450BB2, ___additionalValues_2)); }
	inline Action_1U5BU5D_t45AFA72AB9C17482E4A448FF460696B2CD7F5B30* get_additionalValues_2() const { return ___additionalValues_2; }
	inline Action_1U5BU5D_t45AFA72AB9C17482E4A448FF460696B2CD7F5B30** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(Action_1U5BU5D_t45AFA72AB9C17482E4A448FF460696B2CD7F5B30* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>>
struct InlinedArray_1_t6ABF81F82684BB96455201090C17BCA8242E85BD 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_2_tACB2F8D6B2F70F78DC65A6BC64A3108B0B1AC539 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_2U5BU5D_t459BDBFC4C24F188864A38C4CD1D0E76071FEF6D* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t6ABF81F82684BB96455201090C17BCA8242E85BD, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t6ABF81F82684BB96455201090C17BCA8242E85BD, ___firstValue_1)); }
	inline Action_2_tACB2F8D6B2F70F78DC65A6BC64A3108B0B1AC539 * get_firstValue_1() const { return ___firstValue_1; }
	inline Action_2_tACB2F8D6B2F70F78DC65A6BC64A3108B0B1AC539 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(Action_2_tACB2F8D6B2F70F78DC65A6BC64A3108B0B1AC539 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t6ABF81F82684BB96455201090C17BCA8242E85BD, ___additionalValues_2)); }
	inline Action_2U5BU5D_t459BDBFC4C24F188864A38C4CD1D0E76071FEF6D* get_additionalValues_2() const { return ___additionalValues_2; }
	inline Action_2U5BU5D_t459BDBFC4C24F188864A38C4CD1D0E76071FEF6D** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(Action_2U5BU5D_t459BDBFC4C24F188864A38C4CD1D0E76071FEF6D* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// Unity.Collections.NativeSlice`1<System.Byte>
struct NativeSlice_1_tA05D3BC7EB042685CBFD3369ECB6140D114C911B 
{
public:
	// System.Byte* Unity.Collections.NativeSlice`1::m_Buffer
	uint8_t* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Stride
	int32_t ___m_Stride_1;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Length
	int32_t ___m_Length_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeSlice_1_tA05D3BC7EB042685CBFD3369ECB6140D114C911B, ___m_Buffer_0)); }
	inline uint8_t* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline uint8_t** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(uint8_t* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Stride_1() { return static_cast<int32_t>(offsetof(NativeSlice_1_tA05D3BC7EB042685CBFD3369ECB6140D114C911B, ___m_Stride_1)); }
	inline int32_t get_m_Stride_1() const { return ___m_Stride_1; }
	inline int32_t* get_address_of_m_Stride_1() { return &___m_Stride_1; }
	inline void set_m_Stride_1(int32_t value)
	{
		___m_Stride_1 = value;
	}

	inline static int32_t get_offset_of_m_Length_2() { return static_cast<int32_t>(offsetof(NativeSlice_1_tA05D3BC7EB042685CBFD3369ECB6140D114C911B, ___m_Length_2)); }
	inline int32_t get_m_Length_2() const { return ___m_Length_2; }
	inline int32_t* get_address_of_m_Length_2() { return &___m_Length_2; }
	inline void set_m_Length_2(int32_t value)
	{
		___m_Length_2 = value;
	}
};


// Unity.Collections.NativeSlice`1<System.UInt32>
struct NativeSlice_1_t2093A56F394B534880A6F90CD910C6FCA0F9958A 
{
public:
	// System.Byte* Unity.Collections.NativeSlice`1::m_Buffer
	uint8_t* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Stride
	int32_t ___m_Stride_1;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Length
	int32_t ___m_Length_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeSlice_1_t2093A56F394B534880A6F90CD910C6FCA0F9958A, ___m_Buffer_0)); }
	inline uint8_t* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline uint8_t** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(uint8_t* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Stride_1() { return static_cast<int32_t>(offsetof(NativeSlice_1_t2093A56F394B534880A6F90CD910C6FCA0F9958A, ___m_Stride_1)); }
	inline int32_t get_m_Stride_1() const { return ___m_Stride_1; }
	inline int32_t* get_address_of_m_Stride_1() { return &___m_Stride_1; }
	inline void set_m_Stride_1(int32_t value)
	{
		___m_Stride_1 = value;
	}

	inline static int32_t get_offset_of_m_Length_2() { return static_cast<int32_t>(offsetof(NativeSlice_1_t2093A56F394B534880A6F90CD910C6FCA0F9958A, ___m_Length_2)); }
	inline int32_t get_m_Length_2() const { return ___m_Length_2; }
	inline int32_t* get_address_of_m_Length_2() { return &___m_Length_2; }
	inline void set_m_Length_2(int32_t value)
	{
		___m_Length_2 = value;
	}
};


// Unity.Collections.NativeSlice`1<UnityEngine.Vector3>
struct NativeSlice_1_tCD0AC77C2E3CDA052D42479FF29B6F9F6454B125 
{
public:
	// System.Byte* Unity.Collections.NativeSlice`1::m_Buffer
	uint8_t* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Stride
	int32_t ___m_Stride_1;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Length
	int32_t ___m_Length_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeSlice_1_tCD0AC77C2E3CDA052D42479FF29B6F9F6454B125, ___m_Buffer_0)); }
	inline uint8_t* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline uint8_t** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(uint8_t* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Stride_1() { return static_cast<int32_t>(offsetof(NativeSlice_1_tCD0AC77C2E3CDA052D42479FF29B6F9F6454B125, ___m_Stride_1)); }
	inline int32_t get_m_Stride_1() const { return ___m_Stride_1; }
	inline int32_t* get_address_of_m_Stride_1() { return &___m_Stride_1; }
	inline void set_m_Stride_1(int32_t value)
	{
		___m_Stride_1 = value;
	}

	inline static int32_t get_offset_of_m_Length_2() { return static_cast<int32_t>(offsetof(NativeSlice_1_tCD0AC77C2E3CDA052D42479FF29B6F9F6454B125, ___m_Length_2)); }
	inline int32_t get_m_Length_2() const { return ___m_Length_2; }
	inline int32_t* get_address_of_m_Length_2() { return &___m_Length_2; }
	inline void set_m_Length_2(int32_t value)
	{
		___m_Length_2 = value;
	}
};


// System.Nullable`1<System.Boolean>
struct Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Int32>
struct Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.Utilities.InternedString>
struct ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E 
{
public:
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E, ___m_Array_0)); }
	inline InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* get_m_Array_0() const { return ___m_Array_0; }
	inline InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartIndex_1() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E, ___m_StartIndex_1)); }
	inline int32_t get_m_StartIndex_1() const { return ___m_StartIndex_1; }
	inline int32_t* get_address_of_m_StartIndex_1() { return &___m_StartIndex_1; }
	inline void set_m_StartIndex_1(int32_t value)
	{
		___m_StartIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_Length_2() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E, ___m_Length_2)); }
	inline int32_t get_m_Length_2() const { return ___m_Length_2; }
	inline int32_t* get_address_of_m_Length_2() { return &___m_Length_2; }
	inline void set_m_Length_2(int32_t value)
	{
		___m_Length_2 = value;
	}
};


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.Utilities.NameAndParameters>
struct ReadOnlyArray_1_tFDE28AEF065032FD07DBD63327E0E166901BA3ED 
{
public:
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	NameAndParametersU5BU5D_t92AB405EB6A1ADE1882C30BD29671750A89F3C49* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_tFDE28AEF065032FD07DBD63327E0E166901BA3ED, ___m_Array_0)); }
	inline NameAndParametersU5BU5D_t92AB405EB6A1ADE1882C30BD29671750A89F3C49* get_m_Array_0() const { return ___m_Array_0; }
	inline NameAndParametersU5BU5D_t92AB405EB6A1ADE1882C30BD29671750A89F3C49** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(NameAndParametersU5BU5D_t92AB405EB6A1ADE1882C30BD29671750A89F3C49* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartIndex_1() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_tFDE28AEF065032FD07DBD63327E0E166901BA3ED, ___m_StartIndex_1)); }
	inline int32_t get_m_StartIndex_1() const { return ___m_StartIndex_1; }
	inline int32_t* get_address_of_m_StartIndex_1() { return &___m_StartIndex_1; }
	inline void set_m_StartIndex_1(int32_t value)
	{
		___m_StartIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_Length_2() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_tFDE28AEF065032FD07DBD63327E0E166901BA3ED, ___m_Length_2)); }
	inline int32_t get_m_Length_2() const { return ___m_Length_2; }
	inline int32_t* get_address_of_m_Length_2() { return &___m_Length_2; }
	inline void set_m_Length_2(int32_t value)
	{
		___m_Length_2 = value;
	}
};


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.Utilities.NamedValue>
struct ReadOnlyArray_1_t6FE717AFD2F26F2DEB5FED5B30524738781C25CE 
{
public:
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	NamedValueU5BU5D_t14E74CFBB3D0ED7EC9222CFA9E959246B9E4DB15* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t6FE717AFD2F26F2DEB5FED5B30524738781C25CE, ___m_Array_0)); }
	inline NamedValueU5BU5D_t14E74CFBB3D0ED7EC9222CFA9E959246B9E4DB15* get_m_Array_0() const { return ___m_Array_0; }
	inline NamedValueU5BU5D_t14E74CFBB3D0ED7EC9222CFA9E959246B9E4DB15** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(NamedValueU5BU5D_t14E74CFBB3D0ED7EC9222CFA9E959246B9E4DB15* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartIndex_1() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t6FE717AFD2F26F2DEB5FED5B30524738781C25CE, ___m_StartIndex_1)); }
	inline int32_t get_m_StartIndex_1() const { return ___m_StartIndex_1; }
	inline int32_t* get_address_of_m_StartIndex_1() { return &___m_StartIndex_1; }
	inline void set_m_StartIndex_1(int32_t value)
	{
		___m_StartIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_Length_2() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t6FE717AFD2F26F2DEB5FED5B30524738781C25CE, ___m_Length_2)); }
	inline int32_t get_m_Length_2() const { return ___m_Length_2; }
	inline int32_t* get_address_of_m_Length_2() { return &___m_Length_2; }
	inline void set_m_Length_2(int32_t value)
	{
		___m_Length_2 = value;
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_tB30A449BCFE0FA82C8183709FCA73609BEF8497F  : public SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRParticipantSubsystem,UnityEngine.XR.ARSubsystems.XRParticipantSubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_t43C05E9C3928E04822F2DA791FFAC4C140DF10A5  : public SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem>
struct SubsystemProvider_1_tF2F3B0C041BDD07A00CD49B25AE6016B61F24816  : public SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem/Provider>
struct SubsystemWithProvider_3_t2622D99FF6F2A6B95B2E82547A76A7E7712AA7DB  : public SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E
{
public:
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRObjectTrackingSubsystemDescriptor_t831B568A9BE175A6A79BB87E25DEFAC519A6C472 * ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_t35977A2A0AA6C338BC9893668DD32F0294A9C01E * ___U3CproviderU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t2622D99FF6F2A6B95B2E82547A76A7E7712AA7DB, ___U3CsubsystemDescriptorU3Ek__BackingField_2)); }
	inline XRObjectTrackingSubsystemDescriptor_t831B568A9BE175A6A79BB87E25DEFAC519A6C472 * get_U3CsubsystemDescriptorU3Ek__BackingField_2() const { return ___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline XRObjectTrackingSubsystemDescriptor_t831B568A9BE175A6A79BB87E25DEFAC519A6C472 ** get_address_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return &___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline void set_U3CsubsystemDescriptorU3Ek__BackingField_2(XRObjectTrackingSubsystemDescriptor_t831B568A9BE175A6A79BB87E25DEFAC519A6C472 * value)
	{
		___U3CsubsystemDescriptorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemDescriptorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t2622D99FF6F2A6B95B2E82547A76A7E7712AA7DB, ___U3CproviderU3Ek__BackingField_3)); }
	inline Provider_t35977A2A0AA6C338BC9893668DD32F0294A9C01E * get_U3CproviderU3Ek__BackingField_3() const { return ___U3CproviderU3Ek__BackingField_3; }
	inline Provider_t35977A2A0AA6C338BC9893668DD32F0294A9C01E ** get_address_of_U3CproviderU3Ek__BackingField_3() { return &___U3CproviderU3Ek__BackingField_3; }
	inline void set_U3CproviderU3Ek__BackingField_3(Provider_t35977A2A0AA6C338BC9893668DD32F0294A9C01E * value)
	{
		___U3CproviderU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderU3Ek__BackingField_3), (void*)value);
	}
};


// UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/Triangle`1<System.Int16>
struct Triangle_1_t5D70FED5A96E61ADDCC41F8B4CA3855BC7A98A11 
{
public:
	// T UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/Triangle`1::a
	int16_t ___a_0;
	// T UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/Triangle`1::b
	int16_t ___b_1;
	// T UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/Triangle`1::c
	int16_t ___c_2;

public:
	inline static int32_t get_offset_of_a_0() { return static_cast<int32_t>(offsetof(Triangle_1_t5D70FED5A96E61ADDCC41F8B4CA3855BC7A98A11, ___a_0)); }
	inline int16_t get_a_0() const { return ___a_0; }
	inline int16_t* get_address_of_a_0() { return &___a_0; }
	inline void set_a_0(int16_t value)
	{
		___a_0 = value;
	}

	inline static int32_t get_offset_of_b_1() { return static_cast<int32_t>(offsetof(Triangle_1_t5D70FED5A96E61ADDCC41F8B4CA3855BC7A98A11, ___b_1)); }
	inline int16_t get_b_1() const { return ___b_1; }
	inline int16_t* get_address_of_b_1() { return &___b_1; }
	inline void set_b_1(int16_t value)
	{
		___b_1 = value;
	}

	inline static int32_t get_offset_of_c_2() { return static_cast<int32_t>(offsetof(Triangle_1_t5D70FED5A96E61ADDCC41F8B4CA3855BC7A98A11, ___c_2)); }
	inline int16_t get_c_2() const { return ___c_2; }
	inline int16_t* get_address_of_c_2() { return &___c_2; }
	inline void set_c_2(int16_t value)
	{
		___c_2 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/Triangle`1<System.Int32>
struct Triangle_1_t23CE09469BEC0FFB6767EDDA20FAB85B0C3104C9 
{
public:
	// T UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/Triangle`1::a
	int32_t ___a_0;
	// T UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/Triangle`1::b
	int32_t ___b_1;
	// T UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/Triangle`1::c
	int32_t ___c_2;

public:
	inline static int32_t get_offset_of_a_0() { return static_cast<int32_t>(offsetof(Triangle_1_t23CE09469BEC0FFB6767EDDA20FAB85B0C3104C9, ___a_0)); }
	inline int32_t get_a_0() const { return ___a_0; }
	inline int32_t* get_address_of_a_0() { return &___a_0; }
	inline void set_a_0(int32_t value)
	{
		___a_0 = value;
	}

	inline static int32_t get_offset_of_b_1() { return static_cast<int32_t>(offsetof(Triangle_1_t23CE09469BEC0FFB6767EDDA20FAB85B0C3104C9, ___b_1)); }
	inline int32_t get_b_1() const { return ___b_1; }
	inline int32_t* get_address_of_b_1() { return &___b_1; }
	inline void set_b_1(int32_t value)
	{
		___b_1 = value;
	}

	inline static int32_t get_offset_of_c_2() { return static_cast<int32_t>(offsetof(Triangle_1_t23CE09469BEC0FFB6767EDDA20FAB85B0C3104C9, ___c_2)); }
	inline int32_t get_c_2() const { return ___c_2; }
	inline int32_t* get_address_of_c_2() { return &___c_2; }
	inline void set_c_2(int32_t value)
	{
		___c_2 = value;
	}
};


// UnityEngine.Rendering.BatchVisibility
struct BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE 
{
public:
	// System.Int32 UnityEngine.Rendering.BatchVisibility::offset
	int32_t ___offset_0;
	// System.Int32 UnityEngine.Rendering.BatchVisibility::instancesCount
	int32_t ___instancesCount_1;
	// System.Int32 UnityEngine.Rendering.BatchVisibility::visibleCount
	int32_t ___visibleCount_2;

public:
	inline static int32_t get_offset_of_offset_0() { return static_cast<int32_t>(offsetof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE, ___offset_0)); }
	inline int32_t get_offset_0() const { return ___offset_0; }
	inline int32_t* get_address_of_offset_0() { return &___offset_0; }
	inline void set_offset_0(int32_t value)
	{
		___offset_0 = value;
	}

	inline static int32_t get_offset_of_instancesCount_1() { return static_cast<int32_t>(offsetof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE, ___instancesCount_1)); }
	inline int32_t get_instancesCount_1() const { return ___instancesCount_1; }
	inline int32_t* get_address_of_instancesCount_1() { return &___instancesCount_1; }
	inline void set_instancesCount_1(int32_t value)
	{
		___instancesCount_1 = value;
	}

	inline static int32_t get_offset_of_visibleCount_2() { return static_cast<int32_t>(offsetof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE, ___visibleCount_2)); }
	inline int32_t get_visibleCount_2() const { return ___visibleCount_2; }
	inline int32_t* get_address_of_visibleCount_2() { return &___visibleCount_2; }
	inline void set_visibleCount_2(int32_t value)
	{
		___visibleCount_2 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// UnityEngine.InputSystem.Utilities.FourCC
struct FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.FourCC::m_Code
	int32_t ___m_Code_0;

public:
	inline static int32_t get_offset_of_m_Code_0() { return static_cast<int32_t>(offsetof(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D, ___m_Code_0)); }
	inline int32_t get_m_Code_0() const { return ___m_Code_0; }
	inline int32_t* get_address_of_m_Code_0() { return &___m_Code_0; }
	inline void set_m_Code_0(int32_t value)
	{
		___m_Code_0 = value;
	}
};


// System.Runtime.InteropServices.GCHandle
struct GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};


// System.Guid
struct Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// UnityEngine.InputSystem.InputControlScheme
struct InputControlScheme_tEA1C7C6A6509E7AE956DDBBA6C2E288AD437ED9A 
{
public:
	// System.String UnityEngine.InputSystem.InputControlScheme::m_Name
	String_t* ___m_Name_0;
	// System.String UnityEngine.InputSystem.InputControlScheme::m_BindingGroup
	String_t* ___m_BindingGroup_1;
	// UnityEngine.InputSystem.InputControlScheme/DeviceRequirement[] UnityEngine.InputSystem.InputControlScheme::m_DeviceRequirements
	DeviceRequirementU5BU5D_t78146FB21A5C410CBC1F66A8D380D1E95EB2C045* ___m_DeviceRequirements_2;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(InputControlScheme_tEA1C7C6A6509E7AE956DDBBA6C2E288AD437ED9A, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_BindingGroup_1() { return static_cast<int32_t>(offsetof(InputControlScheme_tEA1C7C6A6509E7AE956DDBBA6C2E288AD437ED9A, ___m_BindingGroup_1)); }
	inline String_t* get_m_BindingGroup_1() const { return ___m_BindingGroup_1; }
	inline String_t** get_address_of_m_BindingGroup_1() { return &___m_BindingGroup_1; }
	inline void set_m_BindingGroup_1(String_t* value)
	{
		___m_BindingGroup_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BindingGroup_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeviceRequirements_2() { return static_cast<int32_t>(offsetof(InputControlScheme_tEA1C7C6A6509E7AE956DDBBA6C2E288AD437ED9A, ___m_DeviceRequirements_2)); }
	inline DeviceRequirementU5BU5D_t78146FB21A5C410CBC1F66A8D380D1E95EB2C045* get_m_DeviceRequirements_2() const { return ___m_DeviceRequirements_2; }
	inline DeviceRequirementU5BU5D_t78146FB21A5C410CBC1F66A8D380D1E95EB2C045** get_address_of_m_DeviceRequirements_2() { return &___m_DeviceRequirements_2; }
	inline void set_m_DeviceRequirements_2(DeviceRequirementU5BU5D_t78146FB21A5C410CBC1F66A8D380D1E95EB2C045* value)
	{
		___m_DeviceRequirements_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeviceRequirements_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputControlScheme
struct InputControlScheme_tEA1C7C6A6509E7AE956DDBBA6C2E288AD437ED9A_marshaled_pinvoke
{
	char* ___m_Name_0;
	char* ___m_BindingGroup_1;
	DeviceRequirement_t81B74F0AB5D81F4F19AB7A30E422908B6EF74ED3_marshaled_pinvoke* ___m_DeviceRequirements_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputControlScheme
struct InputControlScheme_tEA1C7C6A6509E7AE956DDBBA6C2E288AD437ED9A_marshaled_com
{
	Il2CppChar* ___m_Name_0;
	Il2CppChar* ___m_BindingGroup_1;
	DeviceRequirement_t81B74F0AB5D81F4F19AB7A30E422908B6EF74ED3_marshaled_com* ___m_DeviceRequirements_2;
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 
{
public:
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringOriginalCase
	String_t* ___m_StringOriginalCase_0;
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringLowerCase
	String_t* ___m_StringLowerCase_1;

public:
	inline static int32_t get_offset_of_m_StringOriginalCase_0() { return static_cast<int32_t>(offsetof(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8, ___m_StringOriginalCase_0)); }
	inline String_t* get_m_StringOriginalCase_0() const { return ___m_StringOriginalCase_0; }
	inline String_t** get_address_of_m_StringOriginalCase_0() { return &___m_StringOriginalCase_0; }
	inline void set_m_StringOriginalCase_0(String_t* value)
	{
		___m_StringOriginalCase_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StringOriginalCase_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StringLowerCase_1() { return static_cast<int32_t>(offsetof(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8, ___m_StringLowerCase_1)); }
	inline String_t* get_m_StringLowerCase_1() const { return ___m_StringLowerCase_1; }
	inline String_t** get_address_of_m_StringLowerCase_1() { return &___m_StringLowerCase_1; }
	inline void set_m_StringLowerCase_1(String_t* value)
	{
		___m_StringLowerCase_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StringLowerCase_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8_marshaled_pinvoke
{
	char* ___m_StringOriginalCase_0;
	char* ___m_StringLowerCase_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase_0;
	Il2CppChar* ___m_StringLowerCase_1;
};

// UnityEngine.Experimental.GlobalIllumination.LinearColor
struct LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 
{
public:
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_red
	float ___m_red_0;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_green
	float ___m_green_1;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_blue
	float ___m_blue_2;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_intensity
	float ___m_intensity_3;

public:
	inline static int32_t get_offset_of_m_red_0() { return static_cast<int32_t>(offsetof(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2, ___m_red_0)); }
	inline float get_m_red_0() const { return ___m_red_0; }
	inline float* get_address_of_m_red_0() { return &___m_red_0; }
	inline void set_m_red_0(float value)
	{
		___m_red_0 = value;
	}

	inline static int32_t get_offset_of_m_green_1() { return static_cast<int32_t>(offsetof(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2, ___m_green_1)); }
	inline float get_m_green_1() const { return ___m_green_1; }
	inline float* get_address_of_m_green_1() { return &___m_green_1; }
	inline void set_m_green_1(float value)
	{
		___m_green_1 = value;
	}

	inline static int32_t get_offset_of_m_blue_2() { return static_cast<int32_t>(offsetof(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2, ___m_blue_2)); }
	inline float get_m_blue_2() const { return ___m_blue_2; }
	inline float* get_address_of_m_blue_2() { return &___m_blue_2; }
	inline void set_m_blue_2(float value)
	{
		___m_blue_2 = value;
	}

	inline static int32_t get_offset_of_m_intensity_3() { return static_cast<int32_t>(offsetof(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2, ___m_intensity_3)); }
	inline float get_m_intensity_3() const { return ___m_intensity_3; }
	inline float* get_address_of_m_intensity_3() { return &___m_intensity_3; }
	inline void set_m_intensity_3(float value)
	{
		___m_intensity_3 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.XR.ARSubsystems.SerializableGuid
struct SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC 
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.SerializableGuid::m_GuidLow
	uint64_t ___m_GuidLow_1;
	// System.UInt64 UnityEngine.XR.ARSubsystems.SerializableGuid::m_GuidHigh
	uint64_t ___m_GuidHigh_2;

public:
	inline static int32_t get_offset_of_m_GuidLow_1() { return static_cast<int32_t>(offsetof(SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC, ___m_GuidLow_1)); }
	inline uint64_t get_m_GuidLow_1() const { return ___m_GuidLow_1; }
	inline uint64_t* get_address_of_m_GuidLow_1() { return &___m_GuidLow_1; }
	inline void set_m_GuidLow_1(uint64_t value)
	{
		___m_GuidLow_1 = value;
	}

	inline static int32_t get_offset_of_m_GuidHigh_2() { return static_cast<int32_t>(offsetof(SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC, ___m_GuidHigh_2)); }
	inline uint64_t get_m_GuidHigh_2() const { return ___m_GuidHigh_2; }
	inline uint64_t* get_address_of_m_GuidHigh_2() { return &___m_GuidHigh_2; }
	inline void set_m_GuidHigh_2(uint64_t value)
	{
		___m_GuidHigh_2 = value;
	}
};

struct SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.SerializableGuid UnityEngine.XR.ARSubsystems.SerializableGuid::k_Empty
	SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  ___k_Empty_0;

public:
	inline static int32_t get_offset_of_k_Empty_0() { return static_cast<int32_t>(offsetof(SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC_StaticFields, ___k_Empty_0)); }
	inline SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  get_k_Empty_0() const { return ___k_Empty_0; }
	inline SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC * get_address_of_k_Empty_0() { return &___k_Empty_0; }
	inline void set_k_Empty_0(SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  value)
	{
		___k_Empty_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.InputSystem.Utilities.Substring
struct Substring_tC798908C326D8A08CE2F8548E24B412BAF86CDAB 
{
public:
	// System.String UnityEngine.InputSystem.Utilities.Substring::m_String
	String_t* ___m_String_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.Substring::m_Index
	int32_t ___m_Index_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.Substring::m_Length
	int32_t ___m_Length_2;

public:
	inline static int32_t get_offset_of_m_String_0() { return static_cast<int32_t>(offsetof(Substring_tC798908C326D8A08CE2F8548E24B412BAF86CDAB, ___m_String_0)); }
	inline String_t* get_m_String_0() const { return ___m_String_0; }
	inline String_t** get_address_of_m_String_0() { return &___m_String_0; }
	inline void set_m_String_0(String_t* value)
	{
		___m_String_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_String_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(Substring_tC798908C326D8A08CE2F8548E24B412BAF86CDAB, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Length_2() { return static_cast<int32_t>(offsetof(Substring_tC798908C326D8A08CE2F8548E24B412BAF86CDAB, ___m_Length_2)); }
	inline int32_t get_m_Length_2() const { return ___m_Length_2; }
	inline int32_t* get_address_of_m_Length_2() { return &___m_Length_2; }
	inline void set_m_Length_2(int32_t value)
	{
		___m_Length_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.Substring
struct Substring_tC798908C326D8A08CE2F8548E24B412BAF86CDAB_marshaled_pinvoke
{
	char* ___m_String_0;
	int32_t ___m_Index_1;
	int32_t ___m_Length_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.Substring
struct Substring_tC798908C326D8A08CE2F8548E24B412BAF86CDAB_marshaled_com
{
	Il2CppChar* ___m_String_0;
	int32_t ___m_Index_1;
	int32_t ___m_Length_2;
};

// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B 
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;

public:
	inline static int32_t get_offset_of_m_SubId1_2() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B, ___m_SubId1_2)); }
	inline uint64_t get_m_SubId1_2() const { return ___m_SubId1_2; }
	inline uint64_t* get_address_of_m_SubId1_2() { return &___m_SubId1_2; }
	inline void set_m_SubId1_2(uint64_t value)
	{
		___m_SubId1_2 = value;
	}

	inline static int32_t get_offset_of_m_SubId2_3() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B, ___m_SubId2_3)); }
	inline uint64_t get_m_SubId2_3() const { return ___m_SubId2_3; }
	inline uint64_t* get_address_of_m_SubId2_3() { return &___m_SubId2_3; }
	inline void set_m_SubId2_3(uint64_t value)
	{
		___m_SubId2_3 = value;
	}
};

struct TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex UnityEngine.XR.ARSubsystems.TrackableId::s_TrackableIdRegex
	Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ___s_TrackableIdRegex_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___s_InvalidId_1;

public:
	inline static int32_t get_offset_of_s_TrackableIdRegex_0() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields, ___s_TrackableIdRegex_0)); }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * get_s_TrackableIdRegex_0() const { return ___s_TrackableIdRegex_0; }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F ** get_address_of_s_TrackableIdRegex_0() { return &___s_TrackableIdRegex_0; }
	inline void set_s_TrackableIdRegex_0(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * value)
	{
		___s_TrackableIdRegex_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TrackableIdRegex_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_InvalidId_1() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields, ___s_InvalidId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_s_InvalidId_1() const { return ___s_InvalidId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_s_InvalidId_1() { return &___s_InvalidId_1; }
	inline void set_s_InvalidId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___s_InvalidId_1 = value;
	}
};


// UnityEngine.InputSystem.Utilities.TypeTable
struct TypeTable_tE58155618A277C8EB10C9B8FB3040A6731E46BFA 
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type> UnityEngine.InputSystem.Utilities.TypeTable::table
	Dictionary_2_t9AFCC08689B78B2E9999C1E77045DE7FE2E38939 * ___table_0;

public:
	inline static int32_t get_offset_of_table_0() { return static_cast<int32_t>(offsetof(TypeTable_tE58155618A277C8EB10C9B8FB3040A6731E46BFA, ___table_0)); }
	inline Dictionary_2_t9AFCC08689B78B2E9999C1E77045DE7FE2E38939 * get_table_0() const { return ___table_0; }
	inline Dictionary_2_t9AFCC08689B78B2E9999C1E77045DE7FE2E38939 ** get_address_of_table_0() { return &___table_0; }
	inline void set_table_0(Dictionary_2_t9AFCC08689B78B2E9999C1E77045DE7FE2E38939 * value)
	{
		___table_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___table_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.TypeTable
struct TypeTable_tE58155618A277C8EB10C9B8FB3040A6731E46BFA_marshaled_pinvoke
{
	Dictionary_2_t9AFCC08689B78B2E9999C1E77045DE7FE2E38939 * ___table_0;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.TypeTable
struct TypeTable_tE58155618A277C8EB10C9B8FB3040A6731E46BFA_marshaled_com
{
	Dictionary_2_t9AFCC08689B78B2E9999C1E77045DE7FE2E38939 * ___table_0;
};

// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.InputSystem.XR.UsageHint
struct UsageHint_tE375CE378CF92C755D6271265615EE19F0CBF0FB 
{
public:
	// System.String UnityEngine.InputSystem.XR.UsageHint::content
	String_t* ___content_0;

public:
	inline static int32_t get_offset_of_content_0() { return static_cast<int32_t>(offsetof(UsageHint_tE375CE378CF92C755D6271265615EE19F0CBF0FB, ___content_0)); }
	inline String_t* get_content_0() const { return ___content_0; }
	inline String_t** get_address_of_content_0() { return &___content_0; }
	inline void set_content_0(String_t* value)
	{
		___content_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___content_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.XR.UsageHint
struct UsageHint_tE375CE378CF92C755D6271265615EE19F0CBF0FB_marshaled_pinvoke
{
	char* ___content_0;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.XR.UsageHint
struct UsageHint_tE375CE378CF92C755D6271265615EE19F0CBF0FB_marshaled_com
{
	Il2CppChar* ___content_0;
};

// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector2Int
struct Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 
{
public:
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}
};

struct Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields
{
public:
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Right_7;

public:
	inline static int32_t get_offset_of_s_Zero_2() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Zero_2)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Zero_2() const { return ___s_Zero_2; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Zero_2() { return &___s_Zero_2; }
	inline void set_s_Zero_2(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Zero_2 = value;
	}

	inline static int32_t get_offset_of_s_One_3() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_One_3)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_One_3() const { return ___s_One_3; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_One_3() { return &___s_One_3; }
	inline void set_s_One_3(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_One_3 = value;
	}

	inline static int32_t get_offset_of_s_Up_4() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Up_4)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Up_4() const { return ___s_Up_4; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Up_4() { return &___s_Up_4; }
	inline void set_s_Up_4(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Up_4 = value;
	}

	inline static int32_t get_offset_of_s_Down_5() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Down_5)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Down_5() const { return ___s_Down_5; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Down_5() { return &___s_Down_5; }
	inline void set_s_Down_5(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Down_5 = value;
	}

	inline static int32_t get_offset_of_s_Left_6() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Left_6)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Left_6() const { return ___s_Left_6; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Left_6() { return &___s_Left_6; }
	inline void set_s_Left_6(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Left_6 = value;
	}

	inline static int32_t get_offset_of_s_Right_7() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Right_7)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Right_7() const { return ___s_Right_7; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Right_7() { return &___s_Right_7; }
	inline void set_s_Right_7(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Right_7 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.XR.ARSubsystems.XRReferenceObject
struct XRReferenceObject_t18877E1C9F50FF11192A86805D881349020032AE 
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.XRReferenceObject::m_GuidLow
	uint64_t ___m_GuidLow_0;
	// System.UInt64 UnityEngine.XR.ARSubsystems.XRReferenceObject::m_GuidHigh
	uint64_t ___m_GuidHigh_1;
	// System.String UnityEngine.XR.ARSubsystems.XRReferenceObject::m_Name
	String_t* ___m_Name_2;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRReferenceObjectEntry> UnityEngine.XR.ARSubsystems.XRReferenceObject::m_Entries
	List_1_tB23AEDE769BF4EA511C93F224596EF58939F8E5A * ___m_Entries_3;

public:
	inline static int32_t get_offset_of_m_GuidLow_0() { return static_cast<int32_t>(offsetof(XRReferenceObject_t18877E1C9F50FF11192A86805D881349020032AE, ___m_GuidLow_0)); }
	inline uint64_t get_m_GuidLow_0() const { return ___m_GuidLow_0; }
	inline uint64_t* get_address_of_m_GuidLow_0() { return &___m_GuidLow_0; }
	inline void set_m_GuidLow_0(uint64_t value)
	{
		___m_GuidLow_0 = value;
	}

	inline static int32_t get_offset_of_m_GuidHigh_1() { return static_cast<int32_t>(offsetof(XRReferenceObject_t18877E1C9F50FF11192A86805D881349020032AE, ___m_GuidHigh_1)); }
	inline uint64_t get_m_GuidHigh_1() const { return ___m_GuidHigh_1; }
	inline uint64_t* get_address_of_m_GuidHigh_1() { return &___m_GuidHigh_1; }
	inline void set_m_GuidHigh_1(uint64_t value)
	{
		___m_GuidHigh_1 = value;
	}

	inline static int32_t get_offset_of_m_Name_2() { return static_cast<int32_t>(offsetof(XRReferenceObject_t18877E1C9F50FF11192A86805D881349020032AE, ___m_Name_2)); }
	inline String_t* get_m_Name_2() const { return ___m_Name_2; }
	inline String_t** get_address_of_m_Name_2() { return &___m_Name_2; }
	inline void set_m_Name_2(String_t* value)
	{
		___m_Name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Entries_3() { return static_cast<int32_t>(offsetof(XRReferenceObject_t18877E1C9F50FF11192A86805D881349020032AE, ___m_Entries_3)); }
	inline List_1_tB23AEDE769BF4EA511C93F224596EF58939F8E5A * get_m_Entries_3() const { return ___m_Entries_3; }
	inline List_1_tB23AEDE769BF4EA511C93F224596EF58939F8E5A ** get_address_of_m_Entries_3() { return &___m_Entries_3; }
	inline void set_m_Entries_3(List_1_tB23AEDE769BF4EA511C93F224596EF58939F8E5A * value)
	{
		___m_Entries_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Entries_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRReferenceObject
struct XRReferenceObject_t18877E1C9F50FF11192A86805D881349020032AE_marshaled_pinvoke
{
	uint64_t ___m_GuidLow_0;
	uint64_t ___m_GuidHigh_1;
	char* ___m_Name_2;
	List_1_tB23AEDE769BF4EA511C93F224596EF58939F8E5A * ___m_Entries_3;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRReferenceObject
struct XRReferenceObject_t18877E1C9F50FF11192A86805D881349020032AE_marshaled_com
{
	uint64_t ___m_GuidLow_0;
	uint64_t ___m_GuidHigh_1;
	Il2CppChar* ___m_Name_2;
	List_1_tB23AEDE769BF4EA511C93F224596EF58939F8E5A * ___m_Entries_3;
};

// UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastInfo
struct PointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1 
{
public:
	// System.Single UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastInfo::distance
	float ___distance_0;
	// System.Single UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastInfo::cosineAngleWithRay
	float ___cosineAngleWithRay_1;

public:
	inline static int32_t get_offset_of_distance_0() { return static_cast<int32_t>(offsetof(PointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1, ___distance_0)); }
	inline float get_distance_0() const { return ___distance_0; }
	inline float* get_address_of_distance_0() { return &___distance_0; }
	inline void set_distance_0(float value)
	{
		___distance_0 = value;
	}

	inline static int32_t get_offset_of_cosineAngleWithRay_1() { return static_cast<int32_t>(offsetof(PointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1, ___cosineAngleWithRay_1)); }
	inline float get_cosineAngleWithRay_1() const { return ___cosineAngleWithRay_1; }
	inline float* get_address_of_cosineAngleWithRay_1() { return &___cosineAngleWithRay_1; }
	inline void set_cosineAngleWithRay_1(float value)
	{
		___cosineAngleWithRay_1 = value;
	}
};


// UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2 
{
public:
	// System.Int32 UnityEngine.BeforeRenderHelper/OrderBlock::order
	int32_t ___order_0;
	// UnityEngine.Events.UnityAction UnityEngine.BeforeRenderHelper/OrderBlock::callback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___callback_1;

public:
	inline static int32_t get_offset_of_order_0() { return static_cast<int32_t>(offsetof(OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2, ___order_0)); }
	inline int32_t get_order_0() const { return ___order_0; }
	inline int32_t* get_address_of_order_0() { return &___order_0; }
	inline void set_order_0(int32_t value)
	{
		___order_0 = value;
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2, ___callback_1)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_callback_1() const { return ___callback_1; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_marshaled_pinvoke
{
	int32_t ___order_0;
	Il2CppMethodPointer ___callback_1;
};
// Native definition for COM marshalling of UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_marshaled_com
{
	int32_t ___order_0;
	Il2CppMethodPointer ___callback_1;
};

// UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B 
{
public:
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputAction/CallbackContext::m_State
	InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::m_ActionIndex
	int32_t ___m_ActionIndex_1;

public:
	inline static int32_t get_offset_of_m_State_0() { return static_cast<int32_t>(offsetof(CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B, ___m_State_0)); }
	inline InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * get_m_State_0() const { return ___m_State_0; }
	inline InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C ** get_address_of_m_State_0() { return &___m_State_0; }
	inline void set_m_State_0(InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * value)
	{
		___m_State_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_State_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionIndex_1() { return static_cast<int32_t>(offsetof(CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B, ___m_ActionIndex_1)); }
	inline int32_t get_m_ActionIndex_1() const { return ___m_ActionIndex_1; }
	inline int32_t* get_address_of_m_ActionIndex_1() { return &___m_ActionIndex_1; }
	inline void set_m_ActionIndex_1(int32_t value)
	{
		___m_ActionIndex_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B_marshaled_pinvoke
{
	InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B_marshaled_com
{
	InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * ___m_State_0;
	int32_t ___m_ActionIndex_1;
};

// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax
struct BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1 
{
public:
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::m_ActionMap
	InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * ___m_ActionMap_0;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::m_Action
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___m_Action_1;
	// System.Int32 UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::m_BindingIndex
	int32_t ___m_BindingIndex_2;

public:
	inline static int32_t get_offset_of_m_ActionMap_0() { return static_cast<int32_t>(offsetof(BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1, ___m_ActionMap_0)); }
	inline InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * get_m_ActionMap_0() const { return ___m_ActionMap_0; }
	inline InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 ** get_address_of_m_ActionMap_0() { return &___m_ActionMap_0; }
	inline void set_m_ActionMap_0(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * value)
	{
		___m_ActionMap_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionMap_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Action_1() { return static_cast<int32_t>(offsetof(BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1, ___m_Action_1)); }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * get_m_Action_1() const { return ___m_Action_1; }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 ** get_address_of_m_Action_1() { return &___m_Action_1; }
	inline void set_m_Action_1(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * value)
	{
		___m_Action_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Action_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_BindingIndex_2() { return static_cast<int32_t>(offsetof(BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1, ___m_BindingIndex_2)); }
	inline int32_t get_m_BindingIndex_2() const { return ___m_BindingIndex_2; }
	inline int32_t* get_address_of_m_BindingIndex_2() { return &___m_BindingIndex_2; }
	inline void set_m_BindingIndex_2(int32_t value)
	{
		___m_BindingIndex_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax
struct BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1_marshaled_pinvoke
{
	InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * ___m_ActionMap_0;
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___m_Action_1;
	int32_t ___m_BindingIndex_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax
struct BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1_marshaled_com
{
	InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * ___m_ActionMap_0;
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___m_Action_1;
	int32_t ___m_BindingIndex_2;
};

// UnityEngine.InputSystem.InputActionState/UnmanagedMemory
struct UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16 
{
public:
	// System.Void* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::basePtr
	void* ___basePtr_0;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::mapCount
	int32_t ___mapCount_1;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::actionCount
	int32_t ___actionCount_2;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::interactionCount
	int32_t ___interactionCount_3;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::bindingCount
	int32_t ___bindingCount_4;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::controlCount
	int32_t ___controlCount_5;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::compositeCount
	int32_t ___compositeCount_6;
	// UnityEngine.InputSystem.InputActionState/TriggerState* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::actionStates
	TriggerState_tD1D00F0DE77AE9CA21DE7A2CEDA8D93EED009CBE * ___actionStates_7;
	// UnityEngine.InputSystem.InputActionState/BindingState* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::bindingStates
	BindingState_tE715A30188652BA114CEB7CD0E12A25CFCEF8FC7 * ___bindingStates_8;
	// UnityEngine.InputSystem.InputActionState/InteractionState* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::interactionStates
	InteractionState_tC8A885CD98436B1609B0988EFDCCD6BBBCFDD6B7 * ___interactionStates_9;
	// System.Single* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::controlMagnitudes
	float* ___controlMagnitudes_10;
	// System.Single* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::compositeMagnitudes
	float* ___compositeMagnitudes_11;
	// System.Int32* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::enabledControls
	int32_t* ___enabledControls_12;
	// System.UInt16* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::actionBindingIndicesAndCounts
	uint16_t* ___actionBindingIndicesAndCounts_13;
	// System.UInt16* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::actionBindingIndices
	uint16_t* ___actionBindingIndices_14;
	// System.Int32* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::controlIndexToBindingIndex
	int32_t* ___controlIndexToBindingIndex_15;
	// UnityEngine.InputSystem.InputActionState/ActionMapIndices* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::mapIndices
	ActionMapIndices_t70234E0132647DCE386300AED2C964F629609245 * ___mapIndices_16;

public:
	inline static int32_t get_offset_of_basePtr_0() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16, ___basePtr_0)); }
	inline void* get_basePtr_0() const { return ___basePtr_0; }
	inline void** get_address_of_basePtr_0() { return &___basePtr_0; }
	inline void set_basePtr_0(void* value)
	{
		___basePtr_0 = value;
	}

	inline static int32_t get_offset_of_mapCount_1() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16, ___mapCount_1)); }
	inline int32_t get_mapCount_1() const { return ___mapCount_1; }
	inline int32_t* get_address_of_mapCount_1() { return &___mapCount_1; }
	inline void set_mapCount_1(int32_t value)
	{
		___mapCount_1 = value;
	}

	inline static int32_t get_offset_of_actionCount_2() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16, ___actionCount_2)); }
	inline int32_t get_actionCount_2() const { return ___actionCount_2; }
	inline int32_t* get_address_of_actionCount_2() { return &___actionCount_2; }
	inline void set_actionCount_2(int32_t value)
	{
		___actionCount_2 = value;
	}

	inline static int32_t get_offset_of_interactionCount_3() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16, ___interactionCount_3)); }
	inline int32_t get_interactionCount_3() const { return ___interactionCount_3; }
	inline int32_t* get_address_of_interactionCount_3() { return &___interactionCount_3; }
	inline void set_interactionCount_3(int32_t value)
	{
		___interactionCount_3 = value;
	}

	inline static int32_t get_offset_of_bindingCount_4() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16, ___bindingCount_4)); }
	inline int32_t get_bindingCount_4() const { return ___bindingCount_4; }
	inline int32_t* get_address_of_bindingCount_4() { return &___bindingCount_4; }
	inline void set_bindingCount_4(int32_t value)
	{
		___bindingCount_4 = value;
	}

	inline static int32_t get_offset_of_controlCount_5() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16, ___controlCount_5)); }
	inline int32_t get_controlCount_5() const { return ___controlCount_5; }
	inline int32_t* get_address_of_controlCount_5() { return &___controlCount_5; }
	inline void set_controlCount_5(int32_t value)
	{
		___controlCount_5 = value;
	}

	inline static int32_t get_offset_of_compositeCount_6() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16, ___compositeCount_6)); }
	inline int32_t get_compositeCount_6() const { return ___compositeCount_6; }
	inline int32_t* get_address_of_compositeCount_6() { return &___compositeCount_6; }
	inline void set_compositeCount_6(int32_t value)
	{
		___compositeCount_6 = value;
	}

	inline static int32_t get_offset_of_actionStates_7() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16, ___actionStates_7)); }
	inline TriggerState_tD1D00F0DE77AE9CA21DE7A2CEDA8D93EED009CBE * get_actionStates_7() const { return ___actionStates_7; }
	inline TriggerState_tD1D00F0DE77AE9CA21DE7A2CEDA8D93EED009CBE ** get_address_of_actionStates_7() { return &___actionStates_7; }
	inline void set_actionStates_7(TriggerState_tD1D00F0DE77AE9CA21DE7A2CEDA8D93EED009CBE * value)
	{
		___actionStates_7 = value;
	}

	inline static int32_t get_offset_of_bindingStates_8() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16, ___bindingStates_8)); }
	inline BindingState_tE715A30188652BA114CEB7CD0E12A25CFCEF8FC7 * get_bindingStates_8() const { return ___bindingStates_8; }
	inline BindingState_tE715A30188652BA114CEB7CD0E12A25CFCEF8FC7 ** get_address_of_bindingStates_8() { return &___bindingStates_8; }
	inline void set_bindingStates_8(BindingState_tE715A30188652BA114CEB7CD0E12A25CFCEF8FC7 * value)
	{
		___bindingStates_8 = value;
	}

	inline static int32_t get_offset_of_interactionStates_9() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16, ___interactionStates_9)); }
	inline InteractionState_tC8A885CD98436B1609B0988EFDCCD6BBBCFDD6B7 * get_interactionStates_9() const { return ___interactionStates_9; }
	inline InteractionState_tC8A885CD98436B1609B0988EFDCCD6BBBCFDD6B7 ** get_address_of_interactionStates_9() { return &___interactionStates_9; }
	inline void set_interactionStates_9(InteractionState_tC8A885CD98436B1609B0988EFDCCD6BBBCFDD6B7 * value)
	{
		___interactionStates_9 = value;
	}

	inline static int32_t get_offset_of_controlMagnitudes_10() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16, ___controlMagnitudes_10)); }
	inline float* get_controlMagnitudes_10() const { return ___controlMagnitudes_10; }
	inline float** get_address_of_controlMagnitudes_10() { return &___controlMagnitudes_10; }
	inline void set_controlMagnitudes_10(float* value)
	{
		___controlMagnitudes_10 = value;
	}

	inline static int32_t get_offset_of_compositeMagnitudes_11() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16, ___compositeMagnitudes_11)); }
	inline float* get_compositeMagnitudes_11() const { return ___compositeMagnitudes_11; }
	inline float** get_address_of_compositeMagnitudes_11() { return &___compositeMagnitudes_11; }
	inline void set_compositeMagnitudes_11(float* value)
	{
		___compositeMagnitudes_11 = value;
	}

	inline static int32_t get_offset_of_enabledControls_12() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16, ___enabledControls_12)); }
	inline int32_t* get_enabledControls_12() const { return ___enabledControls_12; }
	inline int32_t** get_address_of_enabledControls_12() { return &___enabledControls_12; }
	inline void set_enabledControls_12(int32_t* value)
	{
		___enabledControls_12 = value;
	}

	inline static int32_t get_offset_of_actionBindingIndicesAndCounts_13() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16, ___actionBindingIndicesAndCounts_13)); }
	inline uint16_t* get_actionBindingIndicesAndCounts_13() const { return ___actionBindingIndicesAndCounts_13; }
	inline uint16_t** get_address_of_actionBindingIndicesAndCounts_13() { return &___actionBindingIndicesAndCounts_13; }
	inline void set_actionBindingIndicesAndCounts_13(uint16_t* value)
	{
		___actionBindingIndicesAndCounts_13 = value;
	}

	inline static int32_t get_offset_of_actionBindingIndices_14() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16, ___actionBindingIndices_14)); }
	inline uint16_t* get_actionBindingIndices_14() const { return ___actionBindingIndices_14; }
	inline uint16_t** get_address_of_actionBindingIndices_14() { return &___actionBindingIndices_14; }
	inline void set_actionBindingIndices_14(uint16_t* value)
	{
		___actionBindingIndices_14 = value;
	}

	inline static int32_t get_offset_of_controlIndexToBindingIndex_15() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16, ___controlIndexToBindingIndex_15)); }
	inline int32_t* get_controlIndexToBindingIndex_15() const { return ___controlIndexToBindingIndex_15; }
	inline int32_t** get_address_of_controlIndexToBindingIndex_15() { return &___controlIndexToBindingIndex_15; }
	inline void set_controlIndexToBindingIndex_15(int32_t* value)
	{
		___controlIndexToBindingIndex_15 = value;
	}

	inline static int32_t get_offset_of_mapIndices_16() { return static_cast<int32_t>(offsetof(UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16, ___mapIndices_16)); }
	inline ActionMapIndices_t70234E0132647DCE386300AED2C964F629609245 * get_mapIndices_16() const { return ___mapIndices_16; }
	inline ActionMapIndices_t70234E0132647DCE386300AED2C964F629609245 ** get_address_of_mapIndices_16() { return &___mapIndices_16; }
	inline void set_mapIndices_16(ActionMapIndices_t70234E0132647DCE386300AED2C964F629609245 * value)
	{
		___mapIndices_16 = value;
	}
};


// UnityEngine.InputSystem.Layouts.InputControlLayout/Cache
struct Cache_t9F49740128E8F04886120C99F392DC7CEBC6AA67 
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Layouts.InputControlLayout> UnityEngine.InputSystem.Layouts.InputControlLayout/Cache::table
	Dictionary_2_tDCF55C892C8E630B68A32A8B68C04B47E837C8A7 * ___table_0;

public:
	inline static int32_t get_offset_of_table_0() { return static_cast<int32_t>(offsetof(Cache_t9F49740128E8F04886120C99F392DC7CEBC6AA67, ___table_0)); }
	inline Dictionary_2_tDCF55C892C8E630B68A32A8B68C04B47E837C8A7 * get_table_0() const { return ___table_0; }
	inline Dictionary_2_tDCF55C892C8E630B68A32A8B68C04B47E837C8A7 ** get_address_of_table_0() { return &___table_0; }
	inline void set_table_0(Dictionary_2_tDCF55C892C8E630B68A32A8B68C04B47E837C8A7 * value)
	{
		___table_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___table_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Cache
struct Cache_t9F49740128E8F04886120C99F392DC7CEBC6AA67_marshaled_pinvoke
{
	Dictionary_2_tDCF55C892C8E630B68A32A8B68C04B47E837C8A7 * ___table_0;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Cache
struct Cache_t9F49740128E8F04886120C99F392DC7CEBC6AA67_marshaled_com
{
	Dictionary_2_tDCF55C892C8E630B68A32A8B68C04B47E837C8A7 * ___table_0;
};

// UnityEngine.InputSystem.Layouts.InputControlLayout/Collection
struct Collection_tDBA0BC36ACE448001ABFFED32EF785467D714D7B 
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutTypes
	Dictionary_2_t9AFCC08689B78B2E9999C1E77045DE7FE2E38939 * ___layoutTypes_1;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.String> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutStrings
	Dictionary_2_tDA5E5646D36E737D207FA28F7AB4CE457B42B367 * ___layoutStrings_2;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutBuilders
	Dictionary_2_t73E7A2CC7CD17B4CBC4DBC5B50FC3A085745875D * ___layoutBuilders_3;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::baseLayoutTable
	Dictionary_2_tBE5A6550789B79F0A18DA883DF48023D1D980096 * ___baseLayoutTable_4;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString[]> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutOverrides
	Dictionary_2_t6B8207956EB1FAAEB6DBD37E3FD84A30466F2BA8 * ___layoutOverrides_5;
	// System.Collections.Generic.HashSet`1<UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutOverrideNames
	HashSet_1_t68A0DBD19F3F3043FF8AC0D854B63BAA7BEB4064 * ___layoutOverrideNames_6;
	// System.Collections.Generic.List`1<UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/LayoutMatcher> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutMatchers
	List_1_tE0D0016948365B54865C0A62B95211A71F2FB9A6 * ___layoutMatchers_7;

public:
	inline static int32_t get_offset_of_layoutTypes_1() { return static_cast<int32_t>(offsetof(Collection_tDBA0BC36ACE448001ABFFED32EF785467D714D7B, ___layoutTypes_1)); }
	inline Dictionary_2_t9AFCC08689B78B2E9999C1E77045DE7FE2E38939 * get_layoutTypes_1() const { return ___layoutTypes_1; }
	inline Dictionary_2_t9AFCC08689B78B2E9999C1E77045DE7FE2E38939 ** get_address_of_layoutTypes_1() { return &___layoutTypes_1; }
	inline void set_layoutTypes_1(Dictionary_2_t9AFCC08689B78B2E9999C1E77045DE7FE2E38939 * value)
	{
		___layoutTypes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layoutTypes_1), (void*)value);
	}

	inline static int32_t get_offset_of_layoutStrings_2() { return static_cast<int32_t>(offsetof(Collection_tDBA0BC36ACE448001ABFFED32EF785467D714D7B, ___layoutStrings_2)); }
	inline Dictionary_2_tDA5E5646D36E737D207FA28F7AB4CE457B42B367 * get_layoutStrings_2() const { return ___layoutStrings_2; }
	inline Dictionary_2_tDA5E5646D36E737D207FA28F7AB4CE457B42B367 ** get_address_of_layoutStrings_2() { return &___layoutStrings_2; }
	inline void set_layoutStrings_2(Dictionary_2_tDA5E5646D36E737D207FA28F7AB4CE457B42B367 * value)
	{
		___layoutStrings_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layoutStrings_2), (void*)value);
	}

	inline static int32_t get_offset_of_layoutBuilders_3() { return static_cast<int32_t>(offsetof(Collection_tDBA0BC36ACE448001ABFFED32EF785467D714D7B, ___layoutBuilders_3)); }
	inline Dictionary_2_t73E7A2CC7CD17B4CBC4DBC5B50FC3A085745875D * get_layoutBuilders_3() const { return ___layoutBuilders_3; }
	inline Dictionary_2_t73E7A2CC7CD17B4CBC4DBC5B50FC3A085745875D ** get_address_of_layoutBuilders_3() { return &___layoutBuilders_3; }
	inline void set_layoutBuilders_3(Dictionary_2_t73E7A2CC7CD17B4CBC4DBC5B50FC3A085745875D * value)
	{
		___layoutBuilders_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layoutBuilders_3), (void*)value);
	}

	inline static int32_t get_offset_of_baseLayoutTable_4() { return static_cast<int32_t>(offsetof(Collection_tDBA0BC36ACE448001ABFFED32EF785467D714D7B, ___baseLayoutTable_4)); }
	inline Dictionary_2_tBE5A6550789B79F0A18DA883DF48023D1D980096 * get_baseLayoutTable_4() const { return ___baseLayoutTable_4; }
	inline Dictionary_2_tBE5A6550789B79F0A18DA883DF48023D1D980096 ** get_address_of_baseLayoutTable_4() { return &___baseLayoutTable_4; }
	inline void set_baseLayoutTable_4(Dictionary_2_tBE5A6550789B79F0A18DA883DF48023D1D980096 * value)
	{
		___baseLayoutTable_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___baseLayoutTable_4), (void*)value);
	}

	inline static int32_t get_offset_of_layoutOverrides_5() { return static_cast<int32_t>(offsetof(Collection_tDBA0BC36ACE448001ABFFED32EF785467D714D7B, ___layoutOverrides_5)); }
	inline Dictionary_2_t6B8207956EB1FAAEB6DBD37E3FD84A30466F2BA8 * get_layoutOverrides_5() const { return ___layoutOverrides_5; }
	inline Dictionary_2_t6B8207956EB1FAAEB6DBD37E3FD84A30466F2BA8 ** get_address_of_layoutOverrides_5() { return &___layoutOverrides_5; }
	inline void set_layoutOverrides_5(Dictionary_2_t6B8207956EB1FAAEB6DBD37E3FD84A30466F2BA8 * value)
	{
		___layoutOverrides_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layoutOverrides_5), (void*)value);
	}

	inline static int32_t get_offset_of_layoutOverrideNames_6() { return static_cast<int32_t>(offsetof(Collection_tDBA0BC36ACE448001ABFFED32EF785467D714D7B, ___layoutOverrideNames_6)); }
	inline HashSet_1_t68A0DBD19F3F3043FF8AC0D854B63BAA7BEB4064 * get_layoutOverrideNames_6() const { return ___layoutOverrideNames_6; }
	inline HashSet_1_t68A0DBD19F3F3043FF8AC0D854B63BAA7BEB4064 ** get_address_of_layoutOverrideNames_6() { return &___layoutOverrideNames_6; }
	inline void set_layoutOverrideNames_6(HashSet_1_t68A0DBD19F3F3043FF8AC0D854B63BAA7BEB4064 * value)
	{
		___layoutOverrideNames_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layoutOverrideNames_6), (void*)value);
	}

	inline static int32_t get_offset_of_layoutMatchers_7() { return static_cast<int32_t>(offsetof(Collection_tDBA0BC36ACE448001ABFFED32EF785467D714D7B, ___layoutMatchers_7)); }
	inline List_1_tE0D0016948365B54865C0A62B95211A71F2FB9A6 * get_layoutMatchers_7() const { return ___layoutMatchers_7; }
	inline List_1_tE0D0016948365B54865C0A62B95211A71F2FB9A6 ** get_address_of_layoutMatchers_7() { return &___layoutMatchers_7; }
	inline void set_layoutMatchers_7(List_1_tE0D0016948365B54865C0A62B95211A71F2FB9A6 * value)
	{
		___layoutMatchers_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layoutMatchers_7), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Collection
struct Collection_tDBA0BC36ACE448001ABFFED32EF785467D714D7B_marshaled_pinvoke
{
	Dictionary_2_t9AFCC08689B78B2E9999C1E77045DE7FE2E38939 * ___layoutTypes_1;
	Dictionary_2_tDA5E5646D36E737D207FA28F7AB4CE457B42B367 * ___layoutStrings_2;
	Dictionary_2_t73E7A2CC7CD17B4CBC4DBC5B50FC3A085745875D * ___layoutBuilders_3;
	Dictionary_2_tBE5A6550789B79F0A18DA883DF48023D1D980096 * ___baseLayoutTable_4;
	Dictionary_2_t6B8207956EB1FAAEB6DBD37E3FD84A30466F2BA8 * ___layoutOverrides_5;
	HashSet_1_t68A0DBD19F3F3043FF8AC0D854B63BAA7BEB4064 * ___layoutOverrideNames_6;
	List_1_tE0D0016948365B54865C0A62B95211A71F2FB9A6 * ___layoutMatchers_7;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Collection
struct Collection_tDBA0BC36ACE448001ABFFED32EF785467D714D7B_marshaled_com
{
	Dictionary_2_t9AFCC08689B78B2E9999C1E77045DE7FE2E38939 * ___layoutTypes_1;
	Dictionary_2_tDA5E5646D36E737D207FA28F7AB4CE457B42B367 * ___layoutStrings_2;
	Dictionary_2_t73E7A2CC7CD17B4CBC4DBC5B50FC3A085745875D * ___layoutBuilders_3;
	Dictionary_2_tBE5A6550789B79F0A18DA883DF48023D1D980096 * ___baseLayoutTable_4;
	Dictionary_2_t6B8207956EB1FAAEB6DBD37E3FD84A30466F2BA8 * ___layoutOverrides_5;
	HashSet_1_t68A0DBD19F3F3043FF8AC0D854B63BAA7BEB4064 * ___layoutOverrideNames_6;
	List_1_tE0D0016948365B54865C0A62B95211A71F2FB9A6 * ___layoutMatchers_7;
};

// UnityEngine.InputSystem.LowLevel.QueryKeyNameCommand/<nameBuffer>e__FixedBuffer
struct U3CnameBufferU3Ee__FixedBuffer_t13EE2E30E2BC77CDDB03C87B880185F18D68F290 
{
public:
	union
	{
		struct
		{
			// System.Byte UnityEngine.InputSystem.LowLevel.QueryKeyNameCommand/<nameBuffer>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CnameBufferU3Ee__FixedBuffer_t13EE2E30E2BC77CDDB03C87B880185F18D68F290__padding[256];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3CnameBufferU3Ee__FixedBuffer_t13EE2E30E2BC77CDDB03C87B880185F18D68F290, ___FixedElementField_0)); }
	inline uint8_t get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline uint8_t* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(uint8_t value)
	{
		___FixedElementField_0 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.QueryKeyboardLayoutCommand/<nameBuffer>e__FixedBuffer
struct U3CnameBufferU3Ee__FixedBuffer_t3D3674F36611E1EC72C60B066C053777C3FA4A58 
{
public:
	union
	{
		struct
		{
			// System.Byte UnityEngine.InputSystem.LowLevel.QueryKeyboardLayoutCommand/<nameBuffer>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CnameBufferU3Ee__FixedBuffer_t3D3674F36611E1EC72C60B066C053777C3FA4A58__padding[256];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3CnameBufferU3Ee__FixedBuffer_t3D3674F36611E1EC72C60B066C053777C3FA4A58, ___FixedElementField_0)); }
	inline uint8_t get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline uint8_t* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(uint8_t value)
	{
		___FixedElementField_0 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand/<idBuffer>e__FixedBuffer
struct U3CidBufferU3Ee__FixedBuffer_tFC6F6E35417A13005C29EAEAFCDBD7E984AA38B4 
{
public:
	union
	{
		struct
		{
			// System.Byte UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand/<idBuffer>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CidBufferU3Ee__FixedBuffer_tFC6F6E35417A13005C29EAEAFCDBD7E984AA38B4__padding[512];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3CidBufferU3Ee__FixedBuffer_tFC6F6E35417A13005C29EAEAFCDBD7E984AA38B4, ___FixedElementField_0)); }
	inline uint8_t get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline uint8_t* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(uint8_t value)
	{
		___FixedElementField_0 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand/<nameBuffer>e__FixedBuffer
struct U3CnameBufferU3Ee__FixedBuffer_tD9BF255EB57D237F741BDA41E2C5DA75788E04D8 
{
public:
	union
	{
		struct
		{
			// System.Byte UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand/<nameBuffer>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CnameBufferU3Ee__FixedBuffer_tD9BF255EB57D237F741BDA41E2C5DA75788E04D8__padding[512];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3CnameBufferU3Ee__FixedBuffer_tD9BF255EB57D237F741BDA41E2C5DA75788E04D8, ___FixedElementField_0)); }
	inline uint8_t get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline uint8_t* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(uint8_t value)
	{
		___FixedElementField_0 = value;
	}
};


// UnityEngine.InputSystem.XR.Haptics.SendBufferedHapticCommand/<buffer>e__FixedBuffer
struct U3CbufferU3Ee__FixedBuffer_t26BDAFA49EB5E0301FC1E93B3FB1B2D1814080AB 
{
public:
	union
	{
		struct
		{
			// System.Byte UnityEngine.InputSystem.XR.Haptics.SendBufferedHapticCommand/<buffer>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CbufferU3Ee__FixedBuffer_t26BDAFA49EB5E0301FC1E93B3FB1B2D1814080AB__padding[1024];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3CbufferU3Ee__FixedBuffer_t26BDAFA49EB5E0301FC1E93B3FB1B2D1814080AB, ___FixedElementField_0)); }
	inline uint8_t get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline uint8_t* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(uint8_t value)
	{
		___FixedElementField_0 = value;
	}
};


// UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
struct PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3 
{
public:
	// System.Collections.Generic.List`1<System.String> UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData::PoseNames
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___PoseNames_0;
	// System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose> UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData::Poses
	List_1_tA9A7E2A508B3146A7DE46E73A64E988FE4BD5248 * ___Poses_1;

public:
	inline static int32_t get_offset_of_PoseNames_0() { return static_cast<int32_t>(offsetof(PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3, ___PoseNames_0)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_PoseNames_0() const { return ___PoseNames_0; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_PoseNames_0() { return &___PoseNames_0; }
	inline void set_PoseNames_0(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___PoseNames_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PoseNames_0), (void*)value);
	}

	inline static int32_t get_offset_of_Poses_1() { return static_cast<int32_t>(offsetof(PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3, ___Poses_1)); }
	inline List_1_tA9A7E2A508B3146A7DE46E73A64E988FE4BD5248 * get_Poses_1() const { return ___Poses_1; }
	inline List_1_tA9A7E2A508B3146A7DE46E73A64E988FE4BD5248 ** get_address_of_Poses_1() { return &___Poses_1; }
	inline void set_Poses_1(List_1_tA9A7E2A508B3146A7DE46E73A64E988FE4BD5248 * value)
	{
		___Poses_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Poses_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
struct PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3_marshaled_pinvoke
{
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___PoseNames_0;
	List_1_tA9A7E2A508B3146A7DE46E73A64E988FE4BD5248 * ___Poses_1;
};
// Native definition for COM marshalling of UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
struct PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3_marshaled_com
{
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___PoseNames_0;
	List_1_tA9A7E2A508B3146A7DE46E73A64E988FE4BD5248 * ___Poses_1;
};

// UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393 
{
public:
	// System.Threading.SendOrPostCallback UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateCallback
	SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * ___m_DelagateCallback_0;
	// System.Object UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateState
	RuntimeObject * ___m_DelagateState_1;
	// System.Threading.ManualResetEvent UnityEngine.UnitySynchronizationContext/WorkRequest::m_WaitHandle
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___m_WaitHandle_2;

public:
	inline static int32_t get_offset_of_m_DelagateCallback_0() { return static_cast<int32_t>(offsetof(WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393, ___m_DelagateCallback_0)); }
	inline SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * get_m_DelagateCallback_0() const { return ___m_DelagateCallback_0; }
	inline SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C ** get_address_of_m_DelagateCallback_0() { return &___m_DelagateCallback_0; }
	inline void set_m_DelagateCallback_0(SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * value)
	{
		___m_DelagateCallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DelagateCallback_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_DelagateState_1() { return static_cast<int32_t>(offsetof(WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393, ___m_DelagateState_1)); }
	inline RuntimeObject * get_m_DelagateState_1() const { return ___m_DelagateState_1; }
	inline RuntimeObject ** get_address_of_m_DelagateState_1() { return &___m_DelagateState_1; }
	inline void set_m_DelagateState_1(RuntimeObject * value)
	{
		___m_DelagateState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DelagateState_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_WaitHandle_2() { return static_cast<int32_t>(offsetof(WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393, ___m_WaitHandle_2)); }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * get_m_WaitHandle_2() const { return ___m_WaitHandle_2; }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA ** get_address_of_m_WaitHandle_2() { return &___m_WaitHandle_2; }
	inline void set_m_WaitHandle_2(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * value)
	{
		___m_WaitHandle_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WaitHandle_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_marshaled_pinvoke
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___m_WaitHandle_2;
};
// Native definition for COM marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_marshaled_com
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___m_WaitHandle_2;
};

// UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor/Capabilities
struct Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685__padding[1];
	};

public:
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/Triangle`1<System.Int16>>
struct AlignOfHelper_1_tB81615D0F7CCFF9A78D687907797747BA1B6F984 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	Triangle_1_t5D70FED5A96E61ADDCC41F8B4CA3855BC7A98A11  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tB81615D0F7CCFF9A78D687907797747BA1B6F984, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tB81615D0F7CCFF9A78D687907797747BA1B6F984, ___data_1)); }
	inline Triangle_1_t5D70FED5A96E61ADDCC41F8B4CA3855BC7A98A11  get_data_1() const { return ___data_1; }
	inline Triangle_1_t5D70FED5A96E61ADDCC41F8B4CA3855BC7A98A11 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(Triangle_1_t5D70FED5A96E61ADDCC41F8B4CA3855BC7A98A11  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/Triangle`1<System.Int32>>
struct AlignOfHelper_1_t47B391DE1AEA8BCBC9950BC9914D8EE7C6944E00 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	Triangle_1_t23CE09469BEC0FFB6767EDDA20FAB85B0C3104C9  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t47B391DE1AEA8BCBC9950BC9914D8EE7C6944E00, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t47B391DE1AEA8BCBC9950BC9914D8EE7C6944E00, ___data_1)); }
	inline Triangle_1_t23CE09469BEC0FFB6767EDDA20FAB85B0C3104C9  get_data_1() const { return ___data_1; }
	inline Triangle_1_t23CE09469BEC0FFB6767EDDA20FAB85B0C3104C9 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(Triangle_1_t23CE09469BEC0FFB6767EDDA20FAB85B0C3104C9  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.BatchVisibility>
struct AlignOfHelper_1_t2FCEDE21F23B91BD30F8918F2014E815BB7A2D1F 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t2FCEDE21F23B91BD30F8918F2014E815BB7A2D1F, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t2FCEDE21F23B91BD30F8918F2014E815BB7A2D1F, ___data_1)); }
	inline BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  get_data_1() const { return ___data_1; }
	inline BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Quaternion>
struct AlignOfHelper_1_t2AB78F4DF3048147CBE36FD29469D568894FC3EA 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t2AB78F4DF3048147CBE36FD29469D568894FC3EA, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t2AB78F4DF3048147CBE36FD29469D568894FC3EA, ___data_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_data_1() const { return ___data_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.TrackableId>
struct AlignOfHelper_1_t9BE8E1D18E20FE75BA7BC58139F1C88E50083F59 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t9BE8E1D18E20FE75BA7BC58139F1C88E50083F59, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t9BE8E1D18E20FE75BA7BC58139F1C88E50083F59, ___data_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_data_1() const { return ___data_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Vector2>
struct AlignOfHelper_1_t271108605E168FCC3142F101EE2849302458C2EF 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t271108605E168FCC3142F101EE2849302458C2EF, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t271108605E168FCC3142F101EE2849302458C2EF, ___data_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_data_1() const { return ___data_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Vector3>
struct AlignOfHelper_1_tF2F4ACF834CFA6EE379A1392B0983B8E986CC67F 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tF2F4ACF834CFA6EE379A1392B0983B8E986CC67F, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tF2F4ACF834CFA6EE379A1392B0983B8E986CC67F, ___data_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_data_1() const { return ___data_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Vector4>
struct AlignOfHelper_1_t059CD7C810FA768D23B55CA7CC58BD22F4862D5F 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t059CD7C810FA768D23B55CA7CC58BD22F4862D5F, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t059CD7C810FA768D23B55CA7CC58BD22F4862D5F, ___data_1)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_data_1() const { return ___data_1; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastInfo>
struct AlignOfHelper_1_t8865AB33A564AA1551923637673E4DA1D3FF2B84 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	PointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t8865AB33A564AA1551923637673E4DA1D3FF2B84, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t8865AB33A564AA1551923637673E4DA1D3FF2B84, ___data_1)); }
	inline PointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1  get_data_1() const { return ___data_1; }
	inline PointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(PointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1  value)
	{
		___data_1 = value;
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Runtime.InteropServices.GCHandle>
struct InlinedArray_1_tA3967E760933F5DC1FD6C0934D223A5ACA0A2723 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	GCHandleU5BU5D_tE15D27927DA8B3D667EF2723192CDC34B763D2F3* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_tA3967E760933F5DC1FD6C0934D223A5ACA0A2723, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_tA3967E760933F5DC1FD6C0934D223A5ACA0A2723, ___firstValue_1)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get_firstValue_1() const { return ___firstValue_1; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		___firstValue_1 = value;
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_tA3967E760933F5DC1FD6C0934D223A5ACA0A2723, ___additionalValues_2)); }
	inline GCHandleU5BU5D_tE15D27927DA8B3D667EF2723192CDC34B763D2F3* get_additionalValues_2() const { return ___additionalValues_2; }
	inline GCHandleU5BU5D_tE15D27927DA8B3D667EF2723192CDC34B763D2F3** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(GCHandleU5BU5D_tE15D27927DA8B3D667EF2723192CDC34B763D2F3* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Utilities.InternedString>
struct InlinedArray_1_t7B73159E4B6A8AD12C99ED22A9138E32D7408FA0 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t7B73159E4B6A8AD12C99ED22A9138E32D7408FA0, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t7B73159E4B6A8AD12C99ED22A9138E32D7408FA0, ___firstValue_1)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_firstValue_1() const { return ___firstValue_1; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___firstValue_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___firstValue_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t7B73159E4B6A8AD12C99ED22A9138E32D7408FA0, ___additionalValues_2)); }
	inline InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRTrackedObject,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem/Provider>
struct TrackingSubsystem_4_t1E41FDFF37B1529EED554D89481040B067E300EB  : public SubsystemWithProvider_3_t2622D99FF6F2A6B95B2E82547A76A7E7712AA7DB
{
public:

public:
};


// Unity.Collections.Allocator
struct Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.AvailableTrackingData
struct AvailableTrackingData_tECF9F41E063E32F92AF43156E0C61190C82B47FC 
{
public:
	// System.Int32 UnityEngine.XR.AvailableTrackingData::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AvailableTrackingData_tECF9F41E063E32F92AF43156E0C61190C82B47FC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.XR.Bone
struct Bone_tD72F0CE1A7820B4119779DBDB579835CB9E9BA56 
{
public:
	// System.UInt32 UnityEngine.InputSystem.XR.Bone::<parentBoneIndex>k__BackingField
	uint32_t ___U3CparentBoneIndexU3Ek__BackingField_0;
	// UnityEngine.Vector3 UnityEngine.InputSystem.XR.Bone::<position>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CpositionU3Ek__BackingField_1;
	// UnityEngine.Quaternion UnityEngine.InputSystem.XR.Bone::<rotation>k__BackingField
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CrotationU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CparentBoneIndexU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Bone_tD72F0CE1A7820B4119779DBDB579835CB9E9BA56, ___U3CparentBoneIndexU3Ek__BackingField_0)); }
	inline uint32_t get_U3CparentBoneIndexU3Ek__BackingField_0() const { return ___U3CparentBoneIndexU3Ek__BackingField_0; }
	inline uint32_t* get_address_of_U3CparentBoneIndexU3Ek__BackingField_0() { return &___U3CparentBoneIndexU3Ek__BackingField_0; }
	inline void set_U3CparentBoneIndexU3Ek__BackingField_0(uint32_t value)
	{
		___U3CparentBoneIndexU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Bone_tD72F0CE1A7820B4119779DBDB579835CB9E9BA56, ___U3CpositionU3Ek__BackingField_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CpositionU3Ek__BackingField_1() const { return ___U3CpositionU3Ek__BackingField_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CpositionU3Ek__BackingField_1() { return &___U3CpositionU3Ek__BackingField_1; }
	inline void set_U3CpositionU3Ek__BackingField_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CpositionU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CrotationU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Bone_tD72F0CE1A7820B4119779DBDB579835CB9E9BA56, ___U3CrotationU3Ek__BackingField_2)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_U3CrotationU3Ek__BackingField_2() const { return ___U3CrotationU3Ek__BackingField_2; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_U3CrotationU3Ek__BackingField_2() { return &___U3CrotationU3Ek__BackingField_2; }
	inline void set_U3CrotationU3Ek__BackingField_2(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___U3CrotationU3Ek__BackingField_2 = value;
	}
};


// System.ByteEnum
struct ByteEnum_t39285A9D8C7F88982FF718C04A9FA1AE64827307 
{
public:
	// System.Byte System.ByteEnum::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ByteEnum_t39285A9D8C7F88982FF718C04A9FA1AE64827307, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.ExceptionArgument
struct ExceptionArgument_t750CCD4C657BCB2C185560CC68330BC0313B8737 
{
public:
	// System.Int32 System.ExceptionArgument::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExceptionArgument_t750CCD4C657BCB2C185560CC68330BC0313B8737, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.XR.Eyes
struct Eyes_t61C3F3A2F620E8B856BBFCB89DE49C81F7116318 
{
public:
	// UnityEngine.Vector3 UnityEngine.InputSystem.XR.Eyes::<leftEyePosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CleftEyePositionU3Ek__BackingField_0;
	// UnityEngine.Quaternion UnityEngine.InputSystem.XR.Eyes::<leftEyeRotation>k__BackingField
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CleftEyeRotationU3Ek__BackingField_1;
	// UnityEngine.Vector3 UnityEngine.InputSystem.XR.Eyes::<rightEyePosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CrightEyePositionU3Ek__BackingField_2;
	// UnityEngine.Quaternion UnityEngine.InputSystem.XR.Eyes::<rightEyeRotation>k__BackingField
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CrightEyeRotationU3Ek__BackingField_3;
	// UnityEngine.Vector3 UnityEngine.InputSystem.XR.Eyes::<fixationPoint>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CfixationPointU3Ek__BackingField_4;
	// System.Single UnityEngine.InputSystem.XR.Eyes::<leftEyeOpenAmount>k__BackingField
	float ___U3CleftEyeOpenAmountU3Ek__BackingField_5;
	// System.Single UnityEngine.InputSystem.XR.Eyes::<rightEyeOpenAmount>k__BackingField
	float ___U3CrightEyeOpenAmountU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CleftEyePositionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Eyes_t61C3F3A2F620E8B856BBFCB89DE49C81F7116318, ___U3CleftEyePositionU3Ek__BackingField_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CleftEyePositionU3Ek__BackingField_0() const { return ___U3CleftEyePositionU3Ek__BackingField_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CleftEyePositionU3Ek__BackingField_0() { return &___U3CleftEyePositionU3Ek__BackingField_0; }
	inline void set_U3CleftEyePositionU3Ek__BackingField_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CleftEyePositionU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CleftEyeRotationU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Eyes_t61C3F3A2F620E8B856BBFCB89DE49C81F7116318, ___U3CleftEyeRotationU3Ek__BackingField_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_U3CleftEyeRotationU3Ek__BackingField_1() const { return ___U3CleftEyeRotationU3Ek__BackingField_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_U3CleftEyeRotationU3Ek__BackingField_1() { return &___U3CleftEyeRotationU3Ek__BackingField_1; }
	inline void set_U3CleftEyeRotationU3Ek__BackingField_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___U3CleftEyeRotationU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CrightEyePositionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Eyes_t61C3F3A2F620E8B856BBFCB89DE49C81F7116318, ___U3CrightEyePositionU3Ek__BackingField_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CrightEyePositionU3Ek__BackingField_2() const { return ___U3CrightEyePositionU3Ek__BackingField_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CrightEyePositionU3Ek__BackingField_2() { return &___U3CrightEyePositionU3Ek__BackingField_2; }
	inline void set_U3CrightEyePositionU3Ek__BackingField_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CrightEyePositionU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CrightEyeRotationU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Eyes_t61C3F3A2F620E8B856BBFCB89DE49C81F7116318, ___U3CrightEyeRotationU3Ek__BackingField_3)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_U3CrightEyeRotationU3Ek__BackingField_3() const { return ___U3CrightEyeRotationU3Ek__BackingField_3; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_U3CrightEyeRotationU3Ek__BackingField_3() { return &___U3CrightEyeRotationU3Ek__BackingField_3; }
	inline void set_U3CrightEyeRotationU3Ek__BackingField_3(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___U3CrightEyeRotationU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CfixationPointU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Eyes_t61C3F3A2F620E8B856BBFCB89DE49C81F7116318, ___U3CfixationPointU3Ek__BackingField_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CfixationPointU3Ek__BackingField_4() const { return ___U3CfixationPointU3Ek__BackingField_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CfixationPointU3Ek__BackingField_4() { return &___U3CfixationPointU3Ek__BackingField_4; }
	inline void set_U3CfixationPointU3Ek__BackingField_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CfixationPointU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CleftEyeOpenAmountU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Eyes_t61C3F3A2F620E8B856BBFCB89DE49C81F7116318, ___U3CleftEyeOpenAmountU3Ek__BackingField_5)); }
	inline float get_U3CleftEyeOpenAmountU3Ek__BackingField_5() const { return ___U3CleftEyeOpenAmountU3Ek__BackingField_5; }
	inline float* get_address_of_U3CleftEyeOpenAmountU3Ek__BackingField_5() { return &___U3CleftEyeOpenAmountU3Ek__BackingField_5; }
	inline void set_U3CleftEyeOpenAmountU3Ek__BackingField_5(float value)
	{
		___U3CleftEyeOpenAmountU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CrightEyeOpenAmountU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Eyes_t61C3F3A2F620E8B856BBFCB89DE49C81F7116318, ___U3CrightEyeOpenAmountU3Ek__BackingField_6)); }
	inline float get_U3CrightEyeOpenAmountU3Ek__BackingField_6() const { return ___U3CrightEyeOpenAmountU3Ek__BackingField_6; }
	inline float* get_address_of_U3CrightEyeOpenAmountU3Ek__BackingField_6() { return &___U3CrightEyeOpenAmountU3Ek__BackingField_6; }
	inline void set_U3CrightEyeOpenAmountU3Ek__BackingField_6(float value)
	{
		___U3CrightEyeOpenAmountU3Ek__BackingField_6 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.FalloffType
struct FalloffType_t983DA2C11C909629E51BD1D4CF088C689C9863CB 
{
public:
	// System.Byte UnityEngine.Experimental.GlobalIllumination.FalloffType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FalloffType_t983DA2C11C909629E51BD1D4CF088C689C9863CB, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.Feature
struct Feature_t079F5923A4893A9E07B968C27F44AC5FCAC87C83 
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.Feature::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Feature_t079F5923A4893A9E07B968C27F44AC5FCAC87C83, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.XR.FeatureType
struct FeatureType_t97574B65C0A450C752C3AE6317A88D326AA6202C 
{
public:
	// System.Int32 UnityEngine.InputSystem.XR.FeatureType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FeatureType_t97574B65C0A450C752C3AE6317A88D326AA6202C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputActionPhase
struct InputActionPhase_t10B92A32A4518A0D9284B677640A971AB3C81BE4 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputActionPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputActionPhase_t10B92A32A4518A0D9284B677640A971AB3C81BE4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.InputDeviceCommand
struct InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputDeviceCommand::type
					FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___type_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___type_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___sizeInBytes_5_OffsetPadding[4];
					// System.Int32 UnityEngine.InputSystem.LowLevel.InputDeviceCommand::sizeInBytes
					int32_t ___sizeInBytes_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___sizeInBytes_5_OffsetPadding_forAlignmentOnly[4];
					int32_t ___sizeInBytes_5_forAlignmentOnly;
				};
			};
		};
		uint8_t InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6__padding[8];
	};

public:
	inline static int32_t get_offset_of_type_4() { return static_cast<int32_t>(offsetof(InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6, ___type_4)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_type_4() const { return ___type_4; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_type_4() { return &___type_4; }
	inline void set_type_4(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___type_4 = value;
	}

	inline static int32_t get_offset_of_sizeInBytes_5() { return static_cast<int32_t>(offsetof(InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6, ___sizeInBytes_5)); }
	inline int32_t get_sizeInBytes_5() const { return ___sizeInBytes_5; }
	inline int32_t* get_address_of_sizeInBytes_5() { return &___sizeInBytes_5; }
	inline void set_sizeInBytes_5(int32_t value)
	{
		___sizeInBytes_5 = value;
	}
};


// UnityEngine.InputSystem.Layouts.InputDeviceMatcher
struct InputDeviceMatcher_t74CE500431917B5FE759B4C26A267696A28875FC 
{
public:
	// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>[] UnityEngine.InputSystem.Layouts.InputDeviceMatcher::m_Patterns
	KeyValuePair_2U5BU5D_t5C04AE017D2E5ABB3B7D690F561546EFABE0DD7F* ___m_Patterns_0;

public:
	inline static int32_t get_offset_of_m_Patterns_0() { return static_cast<int32_t>(offsetof(InputDeviceMatcher_t74CE500431917B5FE759B4C26A267696A28875FC, ___m_Patterns_0)); }
	inline KeyValuePair_2U5BU5D_t5C04AE017D2E5ABB3B7D690F561546EFABE0DD7F* get_m_Patterns_0() const { return ___m_Patterns_0; }
	inline KeyValuePair_2U5BU5D_t5C04AE017D2E5ABB3B7D690F561546EFABE0DD7F** get_address_of_m_Patterns_0() { return &___m_Patterns_0; }
	inline void set_m_Patterns_0(KeyValuePair_2U5BU5D_t5C04AE017D2E5ABB3B7D690F561546EFABE0DD7F* value)
	{
		___m_Patterns_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Patterns_0), (void*)value);
	}
};

struct InputDeviceMatcher_t74CE500431917B5FE759B4C26A267696A28875FC_StaticFields
{
public:
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kInterfaceKey
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___kInterfaceKey_1;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kDeviceClassKey
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___kDeviceClassKey_2;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kManufacturerKey
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___kManufacturerKey_3;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kProductKey
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___kProductKey_4;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kVersionKey
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___kVersionKey_5;

public:
	inline static int32_t get_offset_of_kInterfaceKey_1() { return static_cast<int32_t>(offsetof(InputDeviceMatcher_t74CE500431917B5FE759B4C26A267696A28875FC_StaticFields, ___kInterfaceKey_1)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_kInterfaceKey_1() const { return ___kInterfaceKey_1; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_kInterfaceKey_1() { return &___kInterfaceKey_1; }
	inline void set_kInterfaceKey_1(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___kInterfaceKey_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___kInterfaceKey_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___kInterfaceKey_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_kDeviceClassKey_2() { return static_cast<int32_t>(offsetof(InputDeviceMatcher_t74CE500431917B5FE759B4C26A267696A28875FC_StaticFields, ___kDeviceClassKey_2)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_kDeviceClassKey_2() const { return ___kDeviceClassKey_2; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_kDeviceClassKey_2() { return &___kDeviceClassKey_2; }
	inline void set_kDeviceClassKey_2(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___kDeviceClassKey_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___kDeviceClassKey_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___kDeviceClassKey_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_kManufacturerKey_3() { return static_cast<int32_t>(offsetof(InputDeviceMatcher_t74CE500431917B5FE759B4C26A267696A28875FC_StaticFields, ___kManufacturerKey_3)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_kManufacturerKey_3() const { return ___kManufacturerKey_3; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_kManufacturerKey_3() { return &___kManufacturerKey_3; }
	inline void set_kManufacturerKey_3(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___kManufacturerKey_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___kManufacturerKey_3))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___kManufacturerKey_3))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_kProductKey_4() { return static_cast<int32_t>(offsetof(InputDeviceMatcher_t74CE500431917B5FE759B4C26A267696A28875FC_StaticFields, ___kProductKey_4)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_kProductKey_4() const { return ___kProductKey_4; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_kProductKey_4() { return &___kProductKey_4; }
	inline void set_kProductKey_4(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___kProductKey_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___kProductKey_4))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___kProductKey_4))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_kVersionKey_5() { return static_cast<int32_t>(offsetof(InputDeviceMatcher_t74CE500431917B5FE759B4C26A267696A28875FC_StaticFields, ___kVersionKey_5)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_kVersionKey_5() const { return ___kVersionKey_5; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_kVersionKey_5() { return &___kVersionKey_5; }
	inline void set_kVersionKey_5(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___kVersionKey_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___kVersionKey_5))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___kVersionKey_5))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputDeviceMatcher
struct InputDeviceMatcher_t74CE500431917B5FE759B4C26A267696A28875FC_marshaled_pinvoke
{
	KeyValuePair_2_tA4DF5ECAE9C383B045BDF7D84EA71747D26A2AD5 * ___m_Patterns_0;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputDeviceMatcher
struct InputDeviceMatcher_t74CE500431917B5FE759B4C26A267696A28875FC_marshaled_com
{
	KeyValuePair_2_tA4DF5ECAE9C383B045BDF7D84EA71747D26A2AD5 * ___m_Patterns_0;
};

// UnityEngine.InputSystem.InputProcessor
struct InputProcessor_tAC24832406A406286CE4B162D9D2EF5E2E08765A  : public RuntimeObject
{
public:

public:
};

struct InputProcessor_tAC24832406A406286CE4B162D9D2EF5E2E08765A_StaticFields
{
public:
	// UnityEngine.InputSystem.Utilities.TypeTable UnityEngine.InputSystem.InputProcessor::s_Processors
	TypeTable_tE58155618A277C8EB10C9B8FB3040A6731E46BFA  ___s_Processors_0;

public:
	inline static int32_t get_offset_of_s_Processors_0() { return static_cast<int32_t>(offsetof(InputProcessor_tAC24832406A406286CE4B162D9D2EF5E2E08765A_StaticFields, ___s_Processors_0)); }
	inline TypeTable_tE58155618A277C8EB10C9B8FB3040A6731E46BFA  get_s_Processors_0() const { return ___s_Processors_0; }
	inline TypeTable_tE58155618A277C8EB10C9B8FB3040A6731E46BFA * get_address_of_s_Processors_0() { return &___s_Processors_0; }
	inline void set_s_Processors_0(TypeTable_tE58155618A277C8EB10C9B8FB3040A6731E46BFA  value)
	{
		___s_Processors_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Processors_0))->___table_0), (void*)NULL);
	}
};


// UnityEngine.XR.InputTrackingState
struct InputTrackingState_t787D19F40F78D57D589D01C27945FD614A426DA9 
{
public:
	// System.UInt32 UnityEngine.XR.InputTrackingState::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputTrackingState_t787D19F40F78D57D589D01C27945FD614A426DA9, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.LightMode
struct LightMode_t9D89979F39C1DBB9CD1E275BDD77C7EA1B506491 
{
public:
	// System.Byte UnityEngine.Experimental.GlobalIllumination.LightMode::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightMode_t9D89979F39C1DBB9CD1E275BDD77C7EA1B506491, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.LightType
struct LightType_t4205DE4BEF130CE507C87172DAB60E5B1EB05552 
{
public:
	// System.Byte UnityEngine.Experimental.GlobalIllumination.LightType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightType_t4205DE4BEF130CE507C87172DAB60E5B1EB05552, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARKit.ManagedReferenceImage
struct ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1 
{
public:
	// System.Guid UnityEngine.XR.ARKit.ManagedReferenceImage::guid
	Guid_t  ___guid_0;
	// System.Guid UnityEngine.XR.ARKit.ManagedReferenceImage::textureGuid
	Guid_t  ___textureGuid_1;
	// UnityEngine.Vector2 UnityEngine.XR.ARKit.ManagedReferenceImage::size
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___size_2;
	// System.IntPtr UnityEngine.XR.ARKit.ManagedReferenceImage::name
	intptr_t ___name_3;
	// System.IntPtr UnityEngine.XR.ARKit.ManagedReferenceImage::texture
	intptr_t ___texture_4;

public:
	inline static int32_t get_offset_of_guid_0() { return static_cast<int32_t>(offsetof(ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1, ___guid_0)); }
	inline Guid_t  get_guid_0() const { return ___guid_0; }
	inline Guid_t * get_address_of_guid_0() { return &___guid_0; }
	inline void set_guid_0(Guid_t  value)
	{
		___guid_0 = value;
	}

	inline static int32_t get_offset_of_textureGuid_1() { return static_cast<int32_t>(offsetof(ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1, ___textureGuid_1)); }
	inline Guid_t  get_textureGuid_1() const { return ___textureGuid_1; }
	inline Guid_t * get_address_of_textureGuid_1() { return &___textureGuid_1; }
	inline void set_textureGuid_1(Guid_t  value)
	{
		___textureGuid_1 = value;
	}

	inline static int32_t get_offset_of_size_2() { return static_cast<int32_t>(offsetof(ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1, ___size_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_size_2() const { return ___size_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_size_2() { return &___size_2; }
	inline void set_size_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___size_2 = value;
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1, ___name_3)); }
	inline intptr_t get_name_3() const { return ___name_3; }
	inline intptr_t* get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(intptr_t value)
	{
		___name_3 = value;
	}

	inline static int32_t get_offset_of_texture_4() { return static_cast<int32_t>(offsetof(ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1, ___texture_4)); }
	inline intptr_t get_texture_4() const { return ___texture_4; }
	inline intptr_t* get_address_of_texture_4() { return &___texture_4; }
	inline void set_texture_4(intptr_t value)
	{
		___texture_4 = value;
	}
};


// Unity.Collections.NativeArrayOptions
struct NativeArrayOptions_t181E2A9B49F6D62868DE6428E4CDF148AEF558E3 
{
public:
	// System.Int32 Unity.Collections.NativeArrayOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NativeArrayOptions_t181E2A9B49F6D62868DE6428E4CDF148AEF558E3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngineInternal.Input.NativeInputEventType
struct NativeInputEventType_tB3CDF49B057A87E6CBA3EB8C551A971D2B70C9E9 
{
public:
	// System.Int32 UnityEngineInternal.Input.NativeInputEventType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NativeInputEventType_tB3CDF49B057A87E6CBA3EB8C551A971D2B70C9E9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Plane
struct Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 
{
public:
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_0;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_1;

public:
	inline static int32_t get_offset_of_m_Normal_0() { return static_cast<int32_t>(offsetof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7, ___m_Normal_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_0() const { return ___m_Normal_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_0() { return &___m_Normal_0; }
	inline void set_m_Normal_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_0 = value;
	}

	inline static int32_t get_offset_of_m_Distance_1() { return static_cast<int32_t>(offsetof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7, ___m_Distance_1)); }
	inline float get_m_Distance_1() const { return ___m_Distance_1; }
	inline float* get_address_of_m_Distance_1() { return &___m_Distance_1; }
	inline void set_m_Distance_1(float value)
	{
		___m_Distance_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.PlaneAlignment
struct PlaneAlignment_t1BB7048E3969913434FB1B3BCBCA2E81D4E71ADA 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.PlaneAlignment::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlaneAlignment_t1BB7048E3969913434FB1B3BCBCA2E81D4E71ADA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.PlaneClassification
struct PlaneClassification_tAC2E2E9609D4396BC311E2987CA3EFA5115EDD10 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.PlaneClassification::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlaneClassification_tAC2E2E9609D4396BC311E2987CA3EFA5115EDD10, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Pose
struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___rotation_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields, ___k_Identity_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___k_Identity_2 = value;
	}
};


// UnityEngine.Ray
struct Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Origin_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Direction_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Direction_1 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.Rendering.TextureDimension
struct TextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC 
{
public:
	// System.Int32 UnityEngine.Rendering.TextureDimension::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextureFormat
struct TextureFormat_tBED5388A0445FE978F97B41D247275B036407932 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_tBED5388A0445FE978F97B41D247275B036407932, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.TouchState
struct TouchState_t83BF8A46038EF445074F008746EA36DC95EA139F 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// System.Int32 UnityEngine.InputSystem.LowLevel.TouchState::touchId
					int32_t ___touchId_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					int32_t ___touchId_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___position_2_OffsetPadding[4];
					// UnityEngine.Vector2 UnityEngine.InputSystem.LowLevel.TouchState::position
					Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___position_2_OffsetPadding_forAlignmentOnly[4];
					Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___delta_3_OffsetPadding[12];
					// UnityEngine.Vector2 UnityEngine.InputSystem.LowLevel.TouchState::delta
					Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___delta_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___delta_3_OffsetPadding_forAlignmentOnly[12];
					Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___delta_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___pressure_4_OffsetPadding[20];
					// System.Single UnityEngine.InputSystem.LowLevel.TouchState::pressure
					float ___pressure_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___pressure_4_OffsetPadding_forAlignmentOnly[20];
					float ___pressure_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___radius_5_OffsetPadding[24];
					// UnityEngine.Vector2 UnityEngine.InputSystem.LowLevel.TouchState::radius
					Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___radius_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___radius_5_OffsetPadding_forAlignmentOnly[24];
					Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___radius_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___phaseId_6_OffsetPadding[32];
					// System.Byte UnityEngine.InputSystem.LowLevel.TouchState::phaseId
					uint8_t ___phaseId_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___phaseId_6_OffsetPadding_forAlignmentOnly[32];
					uint8_t ___phaseId_6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___tapCount_7_OffsetPadding[33];
					// System.Byte UnityEngine.InputSystem.LowLevel.TouchState::tapCount
					uint8_t ___tapCount_7;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___tapCount_7_OffsetPadding_forAlignmentOnly[33];
					uint8_t ___tapCount_7_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___displayIndex_8_OffsetPadding[34];
					// System.Byte UnityEngine.InputSystem.LowLevel.TouchState::displayIndex
					uint8_t ___displayIndex_8;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___displayIndex_8_OffsetPadding_forAlignmentOnly[34];
					uint8_t ___displayIndex_8_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___flags_9_OffsetPadding[35];
					// System.Byte UnityEngine.InputSystem.LowLevel.TouchState::flags
					uint8_t ___flags_9;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___flags_9_OffsetPadding_forAlignmentOnly[35];
					uint8_t ___flags_9_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___padding_10_OffsetPadding[36];
					// System.Int32 UnityEngine.InputSystem.LowLevel.TouchState::padding
					int32_t ___padding_10;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___padding_10_OffsetPadding_forAlignmentOnly[36];
					int32_t ___padding_10_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___startTime_11_OffsetPadding[40];
					// System.Double UnityEngine.InputSystem.LowLevel.TouchState::startTime
					double ___startTime_11;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___startTime_11_OffsetPadding_forAlignmentOnly[40];
					double ___startTime_11_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___startPosition_12_OffsetPadding[48];
					// UnityEngine.Vector2 UnityEngine.InputSystem.LowLevel.TouchState::startPosition
					Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___startPosition_12;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___startPosition_12_OffsetPadding_forAlignmentOnly[48];
					Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___startPosition_12_forAlignmentOnly;
				};
			};
		};
		uint8_t TouchState_t83BF8A46038EF445074F008746EA36DC95EA139F__padding[56];
	};

public:
	inline static int32_t get_offset_of_touchId_1() { return static_cast<int32_t>(offsetof(TouchState_t83BF8A46038EF445074F008746EA36DC95EA139F, ___touchId_1)); }
	inline int32_t get_touchId_1() const { return ___touchId_1; }
	inline int32_t* get_address_of_touchId_1() { return &___touchId_1; }
	inline void set_touchId_1(int32_t value)
	{
		___touchId_1 = value;
	}

	inline static int32_t get_offset_of_position_2() { return static_cast<int32_t>(offsetof(TouchState_t83BF8A46038EF445074F008746EA36DC95EA139F, ___position_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_position_2() const { return ___position_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_position_2() { return &___position_2; }
	inline void set_position_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___position_2 = value;
	}

	inline static int32_t get_offset_of_delta_3() { return static_cast<int32_t>(offsetof(TouchState_t83BF8A46038EF445074F008746EA36DC95EA139F, ___delta_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_delta_3() const { return ___delta_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_delta_3() { return &___delta_3; }
	inline void set_delta_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___delta_3 = value;
	}

	inline static int32_t get_offset_of_pressure_4() { return static_cast<int32_t>(offsetof(TouchState_t83BF8A46038EF445074F008746EA36DC95EA139F, ___pressure_4)); }
	inline float get_pressure_4() const { return ___pressure_4; }
	inline float* get_address_of_pressure_4() { return &___pressure_4; }
	inline void set_pressure_4(float value)
	{
		___pressure_4 = value;
	}

	inline static int32_t get_offset_of_radius_5() { return static_cast<int32_t>(offsetof(TouchState_t83BF8A46038EF445074F008746EA36DC95EA139F, ___radius_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_radius_5() const { return ___radius_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_radius_5() { return &___radius_5; }
	inline void set_radius_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___radius_5 = value;
	}

	inline static int32_t get_offset_of_phaseId_6() { return static_cast<int32_t>(offsetof(TouchState_t83BF8A46038EF445074F008746EA36DC95EA139F, ___phaseId_6)); }
	inline uint8_t get_phaseId_6() const { return ___phaseId_6; }
	inline uint8_t* get_address_of_phaseId_6() { return &___phaseId_6; }
	inline void set_phaseId_6(uint8_t value)
	{
		___phaseId_6 = value;
	}

	inline static int32_t get_offset_of_tapCount_7() { return static_cast<int32_t>(offsetof(TouchState_t83BF8A46038EF445074F008746EA36DC95EA139F, ___tapCount_7)); }
	inline uint8_t get_tapCount_7() const { return ___tapCount_7; }
	inline uint8_t* get_address_of_tapCount_7() { return &___tapCount_7; }
	inline void set_tapCount_7(uint8_t value)
	{
		___tapCount_7 = value;
	}

	inline static int32_t get_offset_of_displayIndex_8() { return static_cast<int32_t>(offsetof(TouchState_t83BF8A46038EF445074F008746EA36DC95EA139F, ___displayIndex_8)); }
	inline uint8_t get_displayIndex_8() const { return ___displayIndex_8; }
	inline uint8_t* get_address_of_displayIndex_8() { return &___displayIndex_8; }
	inline void set_displayIndex_8(uint8_t value)
	{
		___displayIndex_8 = value;
	}

	inline static int32_t get_offset_of_flags_9() { return static_cast<int32_t>(offsetof(TouchState_t83BF8A46038EF445074F008746EA36DC95EA139F, ___flags_9)); }
	inline uint8_t get_flags_9() const { return ___flags_9; }
	inline uint8_t* get_address_of_flags_9() { return &___flags_9; }
	inline void set_flags_9(uint8_t value)
	{
		___flags_9 = value;
	}

	inline static int32_t get_offset_of_padding_10() { return static_cast<int32_t>(offsetof(TouchState_t83BF8A46038EF445074F008746EA36DC95EA139F, ___padding_10)); }
	inline int32_t get_padding_10() const { return ___padding_10; }
	inline int32_t* get_address_of_padding_10() { return &___padding_10; }
	inline void set_padding_10(int32_t value)
	{
		___padding_10 = value;
	}

	inline static int32_t get_offset_of_startTime_11() { return static_cast<int32_t>(offsetof(TouchState_t83BF8A46038EF445074F008746EA36DC95EA139F, ___startTime_11)); }
	inline double get_startTime_11() const { return ___startTime_11; }
	inline double* get_address_of_startTime_11() { return &___startTime_11; }
	inline void set_startTime_11(double value)
	{
		___startTime_11 = value;
	}

	inline static int32_t get_offset_of_startPosition_12() { return static_cast<int32_t>(offsetof(TouchState_t83BF8A46038EF445074F008746EA36DC95EA139F, ___startPosition_12)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_startPosition_12() const { return ___startPosition_12; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_startPosition_12() { return &___startPosition_12; }
	inline void set_startPosition_12(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___startPosition_12 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableType
struct TrackableType_t2352F7091A5BE0192C8D908019BA7481A347C85F 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackableType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackableType_t2352F7091A5BE0192C8D908019BA7481A347C85F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingState
struct TrackingState_tB6996ED0D52D2A17DFACC90800705B81D370FC38 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_tB6996ED0D52D2A17DFACC90800705B81D370FC38, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TypeCode
struct TypeCode_tCB39BAB5CFB7A1E0BCB521413E3C46B81C31AA7C 
{
public:
	// System.Int32 System.TypeCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeCode_tCB39BAB5CFB7A1E0BCB521413E3C46B81C31AA7C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRCameraConfiguration
struct XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A 
{
public:
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCameraConfiguration::m_Resolution
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___m_Resolution_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraConfiguration::m_Framerate
	int32_t ___m_Framerate_1;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRCameraConfiguration::m_NativeConfigurationHandle
	intptr_t ___m_NativeConfigurationHandle_2;

public:
	inline static int32_t get_offset_of_m_Resolution_0() { return static_cast<int32_t>(offsetof(XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A, ___m_Resolution_0)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_m_Resolution_0() const { return ___m_Resolution_0; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_m_Resolution_0() { return &___m_Resolution_0; }
	inline void set_m_Resolution_0(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___m_Resolution_0 = value;
	}

	inline static int32_t get_offset_of_m_Framerate_1() { return static_cast<int32_t>(offsetof(XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A, ___m_Framerate_1)); }
	inline int32_t get_m_Framerate_1() const { return ___m_Framerate_1; }
	inline int32_t* get_address_of_m_Framerate_1() { return &___m_Framerate_1; }
	inline void set_m_Framerate_1(int32_t value)
	{
		___m_Framerate_1 = value;
	}

	inline static int32_t get_offset_of_m_NativeConfigurationHandle_2() { return static_cast<int32_t>(offsetof(XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A, ___m_NativeConfigurationHandle_2)); }
	inline intptr_t get_m_NativeConfigurationHandle_2() const { return ___m_NativeConfigurationHandle_2; }
	inline intptr_t* get_address_of_m_NativeConfigurationHandle_2() { return &___m_NativeConfigurationHandle_2; }
	inline void set_m_NativeConfigurationHandle_2(intptr_t value)
	{
		___m_NativeConfigurationHandle_2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint
struct XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint::m_Index
	int32_t ___m_Index_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint::m_ParentIndex
	int32_t ___m_ParentIndex_1;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint::m_Position
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Position_2;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint::m_Tracked
	int32_t ___m_Tracked_3;

public:
	inline static int32_t get_offset_of_m_Index_0() { return static_cast<int32_t>(offsetof(XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4, ___m_Index_0)); }
	inline int32_t get_m_Index_0() const { return ___m_Index_0; }
	inline int32_t* get_address_of_m_Index_0() { return &___m_Index_0; }
	inline void set_m_Index_0(int32_t value)
	{
		___m_Index_0 = value;
	}

	inline static int32_t get_offset_of_m_ParentIndex_1() { return static_cast<int32_t>(offsetof(XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4, ___m_ParentIndex_1)); }
	inline int32_t get_m_ParentIndex_1() const { return ___m_ParentIndex_1; }
	inline int32_t* get_address_of_m_ParentIndex_1() { return &___m_ParentIndex_1; }
	inline void set_m_ParentIndex_1(int32_t value)
	{
		___m_ParentIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_Position_2() { return static_cast<int32_t>(offsetof(XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4, ___m_Position_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Position_2() const { return ___m_Position_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Position_2() { return &___m_Position_2; }
	inline void set_m_Position_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Position_2 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_3() { return static_cast<int32_t>(offsetof(XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4, ___m_Tracked_3)); }
	inline int32_t get_m_Tracked_3() const { return ___m_Tracked_3; }
	inline int32_t* get_address_of_m_Tracked_3() { return &___m_Tracked_3; }
	inline void set_m_Tracked_3(int32_t value)
	{
		___m_Tracked_3 = value;
	}
};


// UnityEngine.XR.XRNode
struct XRNode_t07B789D60F5B3A4F0E4A169143881ABCA4176DBD 
{
public:
	// System.Int32 UnityEngine.XR.XRNode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XRNode_t07B789D60F5B3A4F0E4A169143881ABCA4176DBD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor
struct XRObjectTrackingSubsystemDescriptor_t831B568A9BE175A6A79BB87E25DEFAC519A6C472  : public SubsystemDescriptorWithProvider_2_tB30A449BCFE0FA82C8183709FCA73609BEF8497F
{
public:
	// UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor/Capabilities UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor::<capabilities>k__BackingField
	Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685  ___U3CcapabilitiesU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CcapabilitiesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(XRObjectTrackingSubsystemDescriptor_t831B568A9BE175A6A79BB87E25DEFAC519A6C472, ___U3CcapabilitiesU3Ek__BackingField_3)); }
	inline Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685  get_U3CcapabilitiesU3Ek__BackingField_3() const { return ___U3CcapabilitiesU3Ek__BackingField_3; }
	inline Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685 * get_address_of_U3CcapabilitiesU3Ek__BackingField_3() { return &___U3CcapabilitiesU3Ek__BackingField_3; }
	inline void set_U3CcapabilitiesU3Ek__BackingField_3(Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685  value)
	{
		___U3CcapabilitiesU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRReferenceImage
struct XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467 
{
public:
	// UnityEngine.XR.ARSubsystems.SerializableGuid UnityEngine.XR.ARSubsystems.XRReferenceImage::m_SerializedGuid
	SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  ___m_SerializedGuid_0;
	// UnityEngine.XR.ARSubsystems.SerializableGuid UnityEngine.XR.ARSubsystems.XRReferenceImage::m_SerializedTextureGuid
	SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  ___m_SerializedTextureGuid_1;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRReferenceImage::m_Size
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Size_2;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRReferenceImage::m_SpecifySize
	bool ___m_SpecifySize_3;
	// System.String UnityEngine.XR.ARSubsystems.XRReferenceImage::m_Name
	String_t* ___m_Name_4;
	// UnityEngine.Texture2D UnityEngine.XR.ARSubsystems.XRReferenceImage::m_Texture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___m_Texture_5;

public:
	inline static int32_t get_offset_of_m_SerializedGuid_0() { return static_cast<int32_t>(offsetof(XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467, ___m_SerializedGuid_0)); }
	inline SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  get_m_SerializedGuid_0() const { return ___m_SerializedGuid_0; }
	inline SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC * get_address_of_m_SerializedGuid_0() { return &___m_SerializedGuid_0; }
	inline void set_m_SerializedGuid_0(SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  value)
	{
		___m_SerializedGuid_0 = value;
	}

	inline static int32_t get_offset_of_m_SerializedTextureGuid_1() { return static_cast<int32_t>(offsetof(XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467, ___m_SerializedTextureGuid_1)); }
	inline SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  get_m_SerializedTextureGuid_1() const { return ___m_SerializedTextureGuid_1; }
	inline SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC * get_address_of_m_SerializedTextureGuid_1() { return &___m_SerializedTextureGuid_1; }
	inline void set_m_SerializedTextureGuid_1(SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  value)
	{
		___m_SerializedTextureGuid_1 = value;
	}

	inline static int32_t get_offset_of_m_Size_2() { return static_cast<int32_t>(offsetof(XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467, ___m_Size_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Size_2() const { return ___m_Size_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Size_2() { return &___m_Size_2; }
	inline void set_m_Size_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Size_2 = value;
	}

	inline static int32_t get_offset_of_m_SpecifySize_3() { return static_cast<int32_t>(offsetof(XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467, ___m_SpecifySize_3)); }
	inline bool get_m_SpecifySize_3() const { return ___m_SpecifySize_3; }
	inline bool* get_address_of_m_SpecifySize_3() { return &___m_SpecifySize_3; }
	inline void set_m_SpecifySize_3(bool value)
	{
		___m_SpecifySize_3 = value;
	}

	inline static int32_t get_offset_of_m_Name_4() { return static_cast<int32_t>(offsetof(XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467, ___m_Name_4)); }
	inline String_t* get_m_Name_4() const { return ___m_Name_4; }
	inline String_t** get_address_of_m_Name_4() { return &___m_Name_4; }
	inline void set_m_Name_4(String_t* value)
	{
		___m_Name_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Texture_5() { return static_cast<int32_t>(offsetof(XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467, ___m_Texture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_m_Texture_5() const { return ___m_Texture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_m_Texture_5() { return &___m_Texture_5; }
	inline void set_m_Texture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___m_Texture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Texture_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRReferenceImage
struct XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467_marshaled_pinvoke
{
	SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  ___m_SerializedGuid_0;
	SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  ___m_SerializedTextureGuid_1;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Size_2;
	int32_t ___m_SpecifySize_3;
	char* ___m_Name_4;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___m_Texture_5;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRReferenceImage
struct XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467_marshaled_com
{
	SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  ___m_SerializedGuid_0;
	SerializableGuid_t5F8E8B4FF33F91AF9B16C6CC3F75AE00014505CC  ___m_SerializedTextureGuid_1;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Size_2;
	int32_t ___m_SpecifySize_3;
	Il2CppChar* ___m_Name_4;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___m_Texture_5;
};

// UnityEngine.XR.ARKit.ARKitImageDatabase/ConvertRGBA32ToARGB32Job
struct ConvertRGBA32ToARGB32Job_t993F9DEAC7565A1537923428323E86A8B0506D78 
{
public:
	// Unity.Collections.NativeSlice`1<System.UInt32> UnityEngine.XR.ARKit.ARKitImageDatabase/ConvertRGBA32ToARGB32Job::rgbaImage
	NativeSlice_1_t2093A56F394B534880A6F90CD910C6FCA0F9958A  ___rgbaImage_0;
	// Unity.Collections.NativeSlice`1<System.UInt32> UnityEngine.XR.ARKit.ARKitImageDatabase/ConvertRGBA32ToARGB32Job::argbImage
	NativeSlice_1_t2093A56F394B534880A6F90CD910C6FCA0F9958A  ___argbImage_1;

public:
	inline static int32_t get_offset_of_rgbaImage_0() { return static_cast<int32_t>(offsetof(ConvertRGBA32ToARGB32Job_t993F9DEAC7565A1537923428323E86A8B0506D78, ___rgbaImage_0)); }
	inline NativeSlice_1_t2093A56F394B534880A6F90CD910C6FCA0F9958A  get_rgbaImage_0() const { return ___rgbaImage_0; }
	inline NativeSlice_1_t2093A56F394B534880A6F90CD910C6FCA0F9958A * get_address_of_rgbaImage_0() { return &___rgbaImage_0; }
	inline void set_rgbaImage_0(NativeSlice_1_t2093A56F394B534880A6F90CD910C6FCA0F9958A  value)
	{
		___rgbaImage_0 = value;
	}

	inline static int32_t get_offset_of_argbImage_1() { return static_cast<int32_t>(offsetof(ConvertRGBA32ToARGB32Job_t993F9DEAC7565A1537923428323E86A8B0506D78, ___argbImage_1)); }
	inline NativeSlice_1_t2093A56F394B534880A6F90CD910C6FCA0F9958A  get_argbImage_1() const { return ___argbImage_1; }
	inline NativeSlice_1_t2093A56F394B534880A6F90CD910C6FCA0F9958A * get_address_of_argbImage_1() { return &___argbImage_1; }
	inline void set_argbImage_1(NativeSlice_1_t2093A56F394B534880A6F90CD910C6FCA0F9958A  value)
	{
		___argbImage_1 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitImageDatabase/ReleaseDatabaseJob
struct ReleaseDatabaseJob_t2712527A976BD231EF32DCEAAAF276FC834E8DA1 
{
public:
	// System.IntPtr UnityEngine.XR.ARKit.ARKitImageDatabase/ReleaseDatabaseJob::database
	intptr_t ___database_0;

public:
	inline static int32_t get_offset_of_database_0() { return static_cast<int32_t>(offsetof(ReleaseDatabaseJob_t2712527A976BD231EF32DCEAAAF276FC834E8DA1, ___database_0)); }
	inline intptr_t get_database_0() const { return ___database_0; }
	inline intptr_t* get_address_of_database_0() { return &___database_0; }
	inline void set_database_0(intptr_t value)
	{
		___database_0 = value;
	}
};


// UnityEngine.Camera/RenderRequestMode
struct RenderRequestMode_tCB120B82DED523ADBA2D6093A1A8ABF17D94A313 
{
public:
	// System.Int32 UnityEngine.Camera/RenderRequestMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderRequestMode_tCB120B82DED523ADBA2D6093A1A8ABF17D94A313, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Camera/RenderRequestOutputSpace
struct RenderRequestOutputSpace_t8EB93E4720B2D1BAB624A04ADB473C37C7F3D6A5 
{
public:
	// System.Int32 UnityEngine.Camera/RenderRequestOutputSpace::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderRequestOutputSpace_t8EB93E4720B2D1BAB624A04ADB473C37C7F3D6A5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.HID.HID/HIDCollectionType
struct HIDCollectionType_t4FB314AA63C1BEA7465AB78E897C9B1A035B86D6 
{
public:
	// System.Int32 UnityEngine.InputSystem.HID.HID/HIDCollectionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HIDCollectionType_t4FB314AA63C1BEA7465AB78E897C9B1A035B86D6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.HID.HID/HIDElementFlags
struct HIDElementFlags_t4F1C163FAC6DA4246D60567DA2C886BE2B512669 
{
public:
	// System.Int32 UnityEngine.InputSystem.HID.HID/HIDElementFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HIDElementFlags_t4F1C163FAC6DA4246D60567DA2C886BE2B512669, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.HID.HID/HIDReportType
struct HIDReportType_tBA3AF88D5F56C5A42F1D32709EB4FDE73A991E84 
{
public:
	// System.Int32 UnityEngine.InputSystem.HID.HID/HIDReportType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HIDReportType_tBA3AF88D5F56C5A42F1D32709EB4FDE73A991E84, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.HID.HID/UsagePage
struct UsagePage_t32C4EBF697A38F5575DA5F31BACDCA10550B3509 
{
public:
	// System.Int32 UnityEngine.InputSystem.HID.HID/UsagePage::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UsagePage_t32C4EBF697A38F5575DA5F31BACDCA10550B3509, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax
struct ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 
{
public:
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::m_Asset
	InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * ___m_Asset_0;
	// System.Int32 UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::m_ControlSchemeIndex
	int32_t ___m_ControlSchemeIndex_1;
	// UnityEngine.InputSystem.InputControlScheme UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::m_ControlScheme
	InputControlScheme_tEA1C7C6A6509E7AE956DDBBA6C2E288AD437ED9A  ___m_ControlScheme_2;

public:
	inline static int32_t get_offset_of_m_Asset_0() { return static_cast<int32_t>(offsetof(ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214, ___m_Asset_0)); }
	inline InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * get_m_Asset_0() const { return ___m_Asset_0; }
	inline InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E ** get_address_of_m_Asset_0() { return &___m_Asset_0; }
	inline void set_m_Asset_0(InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * value)
	{
		___m_Asset_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Asset_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ControlSchemeIndex_1() { return static_cast<int32_t>(offsetof(ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214, ___m_ControlSchemeIndex_1)); }
	inline int32_t get_m_ControlSchemeIndex_1() const { return ___m_ControlSchemeIndex_1; }
	inline int32_t* get_address_of_m_ControlSchemeIndex_1() { return &___m_ControlSchemeIndex_1; }
	inline void set_m_ControlSchemeIndex_1(int32_t value)
	{
		___m_ControlSchemeIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_ControlScheme_2() { return static_cast<int32_t>(offsetof(ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214, ___m_ControlScheme_2)); }
	inline InputControlScheme_tEA1C7C6A6509E7AE956DDBBA6C2E288AD437ED9A  get_m_ControlScheme_2() const { return ___m_ControlScheme_2; }
	inline InputControlScheme_tEA1C7C6A6509E7AE956DDBBA6C2E288AD437ED9A * get_address_of_m_ControlScheme_2() { return &___m_ControlScheme_2; }
	inline void set_m_ControlScheme_2(InputControlScheme_tEA1C7C6A6509E7AE956DDBBA6C2E288AD437ED9A  value)
	{
		___m_ControlScheme_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ControlScheme_2))->___m_Name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ControlScheme_2))->___m_BindingGroup_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ControlScheme_2))->___m_DeviceRequirements_2), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax
struct ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214_marshaled_pinvoke
{
	InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * ___m_Asset_0;
	int32_t ___m_ControlSchemeIndex_1;
	InputControlScheme_tEA1C7C6A6509E7AE956DDBBA6C2E288AD437ED9A_marshaled_pinvoke ___m_ControlScheme_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax
struct ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214_marshaled_com
{
	InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * ___m_Asset_0;
	int32_t ___m_ControlSchemeIndex_1;
	InputControlScheme_tEA1C7C6A6509E7AE956DDBBA6C2E288AD437ED9A_marshaled_com ___m_ControlScheme_2;
};

// UnityEngine.InputSystem.InputBinding/Flags
struct Flags_t96BD9B15406A59FB60DE4A1F11DF96FB70426BF5 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputBinding/Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t96BD9B15406A59FB60DE4A1F11DF96FB70426BF5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.Layouts.InputControlLayout/Builder
struct Builder_t4C196179CE57554255EBFB4ECD4D6499ADA974FB  : public RuntimeObject
{
public:
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::<displayName>k__BackingField
	String_t* ___U3CdisplayNameU3Ek__BackingField_1;
	// System.Type UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::<type>k__BackingField
	Type_t * ___U3CtypeU3Ek__BackingField_2;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::<stateFormat>k__BackingField
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___U3CstateFormatU3Ek__BackingField_3;
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::<stateSizeInBytes>k__BackingField
	int32_t ___U3CstateSizeInBytesU3Ek__BackingField_4;
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::<extendsLayout>k__BackingField
	String_t* ___U3CextendsLayoutU3Ek__BackingField_5;
	// System.Nullable`1<System.Boolean> UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::<updateBeforeRender>k__BackingField
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___U3CupdateBeforeRenderU3Ek__BackingField_6;
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::m_ControlCount
	int32_t ___m_ControlCount_7;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem[] UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::m_Controls
	ControlItemU5BU5D_t5AFF1520667DFF9AA06E17887A3D0B77BEB173BB* ___m_Controls_8;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Builder_t4C196179CE57554255EBFB4ECD4D6499ADA974FB, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisplayNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Builder_t4C196179CE57554255EBFB4ECD4D6499ADA974FB, ___U3CdisplayNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CdisplayNameU3Ek__BackingField_1() const { return ___U3CdisplayNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CdisplayNameU3Ek__BackingField_1() { return &___U3CdisplayNameU3Ek__BackingField_1; }
	inline void set_U3CdisplayNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CdisplayNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdisplayNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtypeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Builder_t4C196179CE57554255EBFB4ECD4D6499ADA974FB, ___U3CtypeU3Ek__BackingField_2)); }
	inline Type_t * get_U3CtypeU3Ek__BackingField_2() const { return ___U3CtypeU3Ek__BackingField_2; }
	inline Type_t ** get_address_of_U3CtypeU3Ek__BackingField_2() { return &___U3CtypeU3Ek__BackingField_2; }
	inline void set_U3CtypeU3Ek__BackingField_2(Type_t * value)
	{
		___U3CtypeU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtypeU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstateFormatU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Builder_t4C196179CE57554255EBFB4ECD4D6499ADA974FB, ___U3CstateFormatU3Ek__BackingField_3)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_U3CstateFormatU3Ek__BackingField_3() const { return ___U3CstateFormatU3Ek__BackingField_3; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_U3CstateFormatU3Ek__BackingField_3() { return &___U3CstateFormatU3Ek__BackingField_3; }
	inline void set_U3CstateFormatU3Ek__BackingField_3(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___U3CstateFormatU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CstateSizeInBytesU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Builder_t4C196179CE57554255EBFB4ECD4D6499ADA974FB, ___U3CstateSizeInBytesU3Ek__BackingField_4)); }
	inline int32_t get_U3CstateSizeInBytesU3Ek__BackingField_4() const { return ___U3CstateSizeInBytesU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CstateSizeInBytesU3Ek__BackingField_4() { return &___U3CstateSizeInBytesU3Ek__BackingField_4; }
	inline void set_U3CstateSizeInBytesU3Ek__BackingField_4(int32_t value)
	{
		___U3CstateSizeInBytesU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CextendsLayoutU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Builder_t4C196179CE57554255EBFB4ECD4D6499ADA974FB, ___U3CextendsLayoutU3Ek__BackingField_5)); }
	inline String_t* get_U3CextendsLayoutU3Ek__BackingField_5() const { return ___U3CextendsLayoutU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CextendsLayoutU3Ek__BackingField_5() { return &___U3CextendsLayoutU3Ek__BackingField_5; }
	inline void set_U3CextendsLayoutU3Ek__BackingField_5(String_t* value)
	{
		___U3CextendsLayoutU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CextendsLayoutU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CupdateBeforeRenderU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Builder_t4C196179CE57554255EBFB4ECD4D6499ADA974FB, ___U3CupdateBeforeRenderU3Ek__BackingField_6)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_U3CupdateBeforeRenderU3Ek__BackingField_6() const { return ___U3CupdateBeforeRenderU3Ek__BackingField_6; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_U3CupdateBeforeRenderU3Ek__BackingField_6() { return &___U3CupdateBeforeRenderU3Ek__BackingField_6; }
	inline void set_U3CupdateBeforeRenderU3Ek__BackingField_6(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___U3CupdateBeforeRenderU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_m_ControlCount_7() { return static_cast<int32_t>(offsetof(Builder_t4C196179CE57554255EBFB4ECD4D6499ADA974FB, ___m_ControlCount_7)); }
	inline int32_t get_m_ControlCount_7() const { return ___m_ControlCount_7; }
	inline int32_t* get_address_of_m_ControlCount_7() { return &___m_ControlCount_7; }
	inline void set_m_ControlCount_7(int32_t value)
	{
		___m_ControlCount_7 = value;
	}

	inline static int32_t get_offset_of_m_Controls_8() { return static_cast<int32_t>(offsetof(Builder_t4C196179CE57554255EBFB4ECD4D6499ADA974FB, ___m_Controls_8)); }
	inline ControlItemU5BU5D_t5AFF1520667DFF9AA06E17887A3D0B77BEB173BB* get_m_Controls_8() const { return ___m_Controls_8; }
	inline ControlItemU5BU5D_t5AFF1520667DFF9AA06E17887A3D0B77BEB173BB** get_address_of_m_Controls_8() { return &___m_Controls_8; }
	inline void set_m_Controls_8(ControlItemU5BU5D_t5AFF1520667DFF9AA06E17887A3D0B77BEB173BB* value)
	{
		___m_Controls_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Controls_8), (void*)value);
	}
};


// UnityEngine.InputSystem.Layouts.InputControlLayout/Flags
struct Flags_tAEF279DC7A9D86C63534C8EB1562B90382307466 
{
public:
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout/Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_tAEF279DC7A9D86C63534C8EB1562B90382307466, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.Utilities.JsonParser/JsonString
struct JsonString_tEB3FF93EA08A825F8684D53BA78E3AE4B2D81FFE 
{
public:
	// UnityEngine.InputSystem.Utilities.Substring UnityEngine.InputSystem.Utilities.JsonParser/JsonString::text
	Substring_tC798908C326D8A08CE2F8548E24B412BAF86CDAB  ___text_0;
	// System.Boolean UnityEngine.InputSystem.Utilities.JsonParser/JsonString::hasEscapes
	bool ___hasEscapes_1;

public:
	inline static int32_t get_offset_of_text_0() { return static_cast<int32_t>(offsetof(JsonString_tEB3FF93EA08A825F8684D53BA78E3AE4B2D81FFE, ___text_0)); }
	inline Substring_tC798908C326D8A08CE2F8548E24B412BAF86CDAB  get_text_0() const { return ___text_0; }
	inline Substring_tC798908C326D8A08CE2F8548E24B412BAF86CDAB * get_address_of_text_0() { return &___text_0; }
	inline void set_text_0(Substring_tC798908C326D8A08CE2F8548E24B412BAF86CDAB  value)
	{
		___text_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___text_0))->___m_String_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_hasEscapes_1() { return static_cast<int32_t>(offsetof(JsonString_tEB3FF93EA08A825F8684D53BA78E3AE4B2D81FFE, ___hasEscapes_1)); }
	inline bool get_hasEscapes_1() const { return ___hasEscapes_1; }
	inline bool* get_address_of_hasEscapes_1() { return &___hasEscapes_1; }
	inline void set_hasEscapes_1(bool value)
	{
		___hasEscapes_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.JsonParser/JsonString
struct JsonString_tEB3FF93EA08A825F8684D53BA78E3AE4B2D81FFE_marshaled_pinvoke
{
	Substring_tC798908C326D8A08CE2F8548E24B412BAF86CDAB_marshaled_pinvoke ___text_0;
	int32_t ___hasEscapes_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.JsonParser/JsonString
struct JsonString_tEB3FF93EA08A825F8684D53BA78E3AE4B2D81FFE_marshaled_com
{
	Substring_tC798908C326D8A08CE2F8548E24B412BAF86CDAB_marshaled_com ___text_0;
	int32_t ___hasEscapes_1;
};

// UnityEngine.InputSystem.Utilities.JsonParser/JsonValueType
struct JsonValueType_tF204C8AED80AF83025D4286F2AE7C2E74201C1A9 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.JsonParser/JsonValueType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JsonValueType_tF204C8AED80AF83025D4286F2AE7C2E74201C1A9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.EnhancedTouch.Touch/ExtraDataPerTouchState
struct ExtraDataPerTouchState_tA964B217654F57C798B8DF5F37B74C9F702AF502 
{
public:
	// UnityEngine.Vector2 UnityEngine.InputSystem.EnhancedTouch.Touch/ExtraDataPerTouchState::accumulatedDelta
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___accumulatedDelta_0;
	// System.UInt32 UnityEngine.InputSystem.EnhancedTouch.Touch/ExtraDataPerTouchState::updateStepCount
	uint32_t ___updateStepCount_1;
	// System.UInt32 UnityEngine.InputSystem.EnhancedTouch.Touch/ExtraDataPerTouchState::uniqueId
	uint32_t ___uniqueId_2;

public:
	inline static int32_t get_offset_of_accumulatedDelta_0() { return static_cast<int32_t>(offsetof(ExtraDataPerTouchState_tA964B217654F57C798B8DF5F37B74C9F702AF502, ___accumulatedDelta_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_accumulatedDelta_0() const { return ___accumulatedDelta_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_accumulatedDelta_0() { return &___accumulatedDelta_0; }
	inline void set_accumulatedDelta_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___accumulatedDelta_0 = value;
	}

	inline static int32_t get_offset_of_updateStepCount_1() { return static_cast<int32_t>(offsetof(ExtraDataPerTouchState_tA964B217654F57C798B8DF5F37B74C9F702AF502, ___updateStepCount_1)); }
	inline uint32_t get_updateStepCount_1() const { return ___updateStepCount_1; }
	inline uint32_t* get_address_of_updateStepCount_1() { return &___updateStepCount_1; }
	inline void set_updateStepCount_1(uint32_t value)
	{
		___updateStepCount_1 = value;
	}

	inline static int32_t get_offset_of_uniqueId_2() { return static_cast<int32_t>(offsetof(ExtraDataPerTouchState_tA964B217654F57C798B8DF5F37B74C9F702AF502, ___uniqueId_2)); }
	inline uint32_t get_uniqueId_2() const { return ___uniqueId_2; }
	inline uint32_t* get_address_of_uniqueId_2() { return &___uniqueId_2; }
	inline void set_uniqueId_2(uint32_t value)
	{
		___uniqueId_2 = value;
	}
};


// UnityEngine.InputSystem.UI.TrackedDeviceRaycaster/RaycastHitData
struct RaycastHitData_t16F7BBA0199F2C5E2EEDDC84C9ED6A707891A1F4 
{
public:
	// UnityEngine.UI.Graphic UnityEngine.InputSystem.UI.TrackedDeviceRaycaster/RaycastHitData::<graphic>k__BackingField
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___U3CgraphicU3Ek__BackingField_0;
	// UnityEngine.Vector3 UnityEngine.InputSystem.UI.TrackedDeviceRaycaster/RaycastHitData::<worldHitPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldHitPositionU3Ek__BackingField_1;
	// UnityEngine.Vector2 UnityEngine.InputSystem.UI.TrackedDeviceRaycaster/RaycastHitData::<screenPosition>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CscreenPositionU3Ek__BackingField_2;
	// System.Single UnityEngine.InputSystem.UI.TrackedDeviceRaycaster/RaycastHitData::<distance>k__BackingField
	float ___U3CdistanceU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CgraphicU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RaycastHitData_t16F7BBA0199F2C5E2EEDDC84C9ED6A707891A1F4, ___U3CgraphicU3Ek__BackingField_0)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_U3CgraphicU3Ek__BackingField_0() const { return ___U3CgraphicU3Ek__BackingField_0; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_U3CgraphicU3Ek__BackingField_0() { return &___U3CgraphicU3Ek__BackingField_0; }
	inline void set_U3CgraphicU3Ek__BackingField_0(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___U3CgraphicU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CgraphicU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CworldHitPositionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RaycastHitData_t16F7BBA0199F2C5E2EEDDC84C9ED6A707891A1F4, ___U3CworldHitPositionU3Ek__BackingField_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldHitPositionU3Ek__BackingField_1() const { return ___U3CworldHitPositionU3Ek__BackingField_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldHitPositionU3Ek__BackingField_1() { return &___U3CworldHitPositionU3Ek__BackingField_1; }
	inline void set_U3CworldHitPositionU3Ek__BackingField_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldHitPositionU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CscreenPositionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RaycastHitData_t16F7BBA0199F2C5E2EEDDC84C9ED6A707891A1F4, ___U3CscreenPositionU3Ek__BackingField_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CscreenPositionU3Ek__BackingField_2() const { return ___U3CscreenPositionU3Ek__BackingField_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CscreenPositionU3Ek__BackingField_2() { return &___U3CscreenPositionU3Ek__BackingField_2; }
	inline void set_U3CscreenPositionU3Ek__BackingField_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CscreenPositionU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CdistanceU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RaycastHitData_t16F7BBA0199F2C5E2EEDDC84C9ED6A707891A1F4, ___U3CdistanceU3Ek__BackingField_3)); }
	inline float get_U3CdistanceU3Ek__BackingField_3() const { return ___U3CdistanceU3Ek__BackingField_3; }
	inline float* get_address_of_U3CdistanceU3Ek__BackingField_3() { return &___U3CdistanceU3Ek__BackingField_3; }
	inline void set_U3CdistanceU3Ek__BackingField_3(float value)
	{
		___U3CdistanceU3Ek__BackingField_3 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.UI.TrackedDeviceRaycaster/RaycastHitData
struct RaycastHitData_t16F7BBA0199F2C5E2EEDDC84C9ED6A707891A1F4_marshaled_pinvoke
{
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___U3CgraphicU3Ek__BackingField_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldHitPositionU3Ek__BackingField_1;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CscreenPositionU3Ek__BackingField_2;
	float ___U3CdistanceU3Ek__BackingField_3;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.UI.TrackedDeviceRaycaster/RaycastHitData
struct RaycastHitData_t16F7BBA0199F2C5E2EEDDC84C9ED6A707891A1F4_marshaled_com
{
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___U3CgraphicU3Ek__BackingField_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldHitPositionU3Ek__BackingField_1;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CscreenPositionU3Ek__BackingField_2;
	float ___U3CdistanceU3Ek__BackingField_3;
};

// UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor/Capabilities
struct Capabilities_t9DF0D3D327C4E491811A4DFCF21EBD355596C4D0 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor/Capabilities::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Capabilities_t9DF0D3D327C4E491811A4DFCF21EBD355596C4D0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider
struct Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12  : public SubsystemProvider_1_tF2F3B0C041BDD07A00CD49B25AE6016B61F24816
{
public:

public:
};


// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation/Flags
struct Flags_tBAEC42444F14751378E9D7B2009867CBBBEF3FE9 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation/Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_tBAEC42444F14751378E9D7B2009867CBBBEF3FE9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem/Flags
struct Flags_tA6E2326F59CEB54963A3B54003607A85415FD47A 
{
public:
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem/Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_tA6E2326F59CEB54963A3B54003607A85415FD47A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.ByteEnum>
struct AlignOfHelper_1_t6E937DB22E0805E2622759CA1FA9371A992DBA58 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	uint8_t ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t6E937DB22E0805E2622759CA1FA9371A992DBA58, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t6E937DB22E0805E2622759CA1FA9371A992DBA58, ___data_1)); }
	inline uint8_t get_data_1() const { return ___data_1; }
	inline uint8_t* get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(uint8_t value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARKit.ManagedReferenceImage>
struct AlignOfHelper_1_t09B3D6D7E9255D96B7427666F50BA340DCF589CE 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t09B3D6D7E9255D96B7427666F50BA340DCF589CE, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t09B3D6D7E9255D96B7427666F50BA340DCF589CE, ___data_1)); }
	inline ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1  get_data_1() const { return ___data_1; }
	inline ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Plane>
struct AlignOfHelper_1_t844B26E46E7279186C852FA310311C251B480893 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t844B26E46E7279186C852FA310311C251B480893, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t844B26E46E7279186C852FA310311C251B480893, ___data_1)); }
	inline Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  get_data_1() const { return ___data_1; }
	inline Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>
struct AlignOfHelper_1_tD5FB129B0FE56F873354763E74C4CA9603CF0FBF 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tD5FB129B0FE56F873354763E74C4CA9603CF0FBF, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tD5FB129B0FE56F873354763E74C4CA9603CF0FBF, ___data_1)); }
	inline XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  get_data_1() const { return ___data_1; }
	inline XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint>
struct AlignOfHelper_1_t66A51797B02768C7E37EE191A6A41DFD76986B93 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t66A51797B02768C7E37EE191A6A41DFD76986B93, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t66A51797B02768C7E37EE191A6A41DFD76986B93, ___data_1)); }
	inline XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4  get_data_1() const { return ___data_1; }
	inline XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/Triangle`1<System.Int16>>
struct NativeArray_1_tE10EA3995F906F16A488A42FE362A2EFA0A4D197 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tE10EA3995F906F16A488A42FE362A2EFA0A4D197, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tE10EA3995F906F16A488A42FE362A2EFA0A4D197, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tE10EA3995F906F16A488A42FE362A2EFA0A4D197, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/Triangle`1<System.Int32>>
struct NativeArray_1_t61ABCFB5F1A9FF2864A2760E1E84A5E656715219 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t61ABCFB5F1A9FF2864A2760E1E84A5E656715219, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t61ABCFB5F1A9FF2864A2760E1E84A5E656715219, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t61ABCFB5F1A9FF2864A2760E1E84A5E656715219, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.Byte>
struct NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.Int32>
struct NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Quaternion>
struct NativeArray_1_t2672EA3A09E3FE76419439DC581905D460584A60 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t2672EA3A09E3FE76419439DC581905D460584A60, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t2672EA3A09E3FE76419439DC581905D460584A60, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t2672EA3A09E3FE76419439DC581905D460584A60, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.UInt64>
struct NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Vector2>
struct NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Vector3>
struct NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Vector4>
struct NativeArray_1_t381CA7D92591F9C96DB84965C31AF8713A546156 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t381CA7D92591F9C96DB84965C31AF8713A546156, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t381CA7D92591F9C96DB84965C31AF8713A546156, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t381CA7D92591F9C96DB84965C31AF8713A546156, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>
struct NativeArray_1_t35F2E89DF840C06C68595E9289A07A26CBB07FCB 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t35F2E89DF840C06C68595E9289A07A26CBB07FCB, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t35F2E89DF840C06C68595E9289A07A26CBB07FCB, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t35F2E89DF840C06C68595E9289A07A26CBB07FCB, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastInfo>
struct NativeArray_1_tB6E97581BF5878BBE04DA5C6C7173C33D56114DD 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tB6E97581BF5878BBE04DA5C6C7173C33D56114DD, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tB6E97581BF5878BBE04DA5C6C7173C33D56114DD, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tB6E97581BF5878BBE04DA5C6C7173C33D56114DD, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.BoundedPlane
struct BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_1;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_SubsumedById
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_SubsumedById_2;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Center
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Center_3;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.BoundedPlane::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_4;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Size
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Size_5;
	// UnityEngine.XR.ARSubsystems.PlaneAlignment UnityEngine.XR.ARSubsystems.BoundedPlane::m_Alignment
	int32_t ___m_Alignment_6;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackingState
	int32_t ___m_TrackingState_7;
	// System.IntPtr UnityEngine.XR.ARSubsystems.BoundedPlane::m_NativePtr
	intptr_t ___m_NativePtr_8;
	// UnityEngine.XR.ARSubsystems.PlaneClassification UnityEngine.XR.ARSubsystems.BoundedPlane::m_Classification
	int32_t ___m_Classification_9;

public:
	inline static int32_t get_offset_of_m_TrackableId_1() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_TrackableId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_1() const { return ___m_TrackableId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_1() { return &___m_TrackableId_1; }
	inline void set_m_TrackableId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_1 = value;
	}

	inline static int32_t get_offset_of_m_SubsumedById_2() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_SubsumedById_2)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_SubsumedById_2() const { return ___m_SubsumedById_2; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_SubsumedById_2() { return &___m_SubsumedById_2; }
	inline void set_m_SubsumedById_2(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_SubsumedById_2 = value;
	}

	inline static int32_t get_offset_of_m_Center_3() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Center_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Center_3() const { return ___m_Center_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Center_3() { return &___m_Center_3; }
	inline void set_m_Center_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Center_3 = value;
	}

	inline static int32_t get_offset_of_m_Pose_4() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Pose_4)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_4() const { return ___m_Pose_4; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_4() { return &___m_Pose_4; }
	inline void set_m_Pose_4(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_4 = value;
	}

	inline static int32_t get_offset_of_m_Size_5() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Size_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Size_5() const { return ___m_Size_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Size_5() { return &___m_Size_5; }
	inline void set_m_Size_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Size_5 = value;
	}

	inline static int32_t get_offset_of_m_Alignment_6() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Alignment_6)); }
	inline int32_t get_m_Alignment_6() const { return ___m_Alignment_6; }
	inline int32_t* get_address_of_m_Alignment_6() { return &___m_Alignment_6; }
	inline void set_m_Alignment_6(int32_t value)
	{
		___m_Alignment_6 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_7() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_TrackingState_7)); }
	inline int32_t get_m_TrackingState_7() const { return ___m_TrackingState_7; }
	inline int32_t* get_address_of_m_TrackingState_7() { return &___m_TrackingState_7; }
	inline void set_m_TrackingState_7(int32_t value)
	{
		___m_TrackingState_7 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_8() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_NativePtr_8)); }
	inline intptr_t get_m_NativePtr_8() const { return ___m_NativePtr_8; }
	inline intptr_t* get_address_of_m_NativePtr_8() { return &___m_NativePtr_8; }
	inline void set_m_NativePtr_8(intptr_t value)
	{
		___m_NativePtr_8 = value;
	}

	inline static int32_t get_offset_of_m_Classification_9() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Classification_9)); }
	inline int32_t get_m_Classification_9() const { return ___m_Classification_9; }
	inline int32_t* get_address_of_m_Classification_9() { return &___m_Classification_9; }
	inline void set_m_Classification_9(int32_t value)
	{
		___m_Classification_9 = value;
	}
};

struct BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.BoundedPlane UnityEngine.XR.ARSubsystems.BoundedPlane::s_Default
	BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_StaticFields, ___s_Default_0)); }
	inline BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  get_s_Default_0() const { return ___s_Default_0; }
	inline BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.ConfigurationDescriptor
struct ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 
{
public:
	// System.IntPtr UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::m_Identifier
	intptr_t ___m_Identifier_0;
	// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::m_Capabilities
	uint64_t ___m_Capabilities_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::m_Rank
	int32_t ___m_Rank_2;

public:
	inline static int32_t get_offset_of_m_Identifier_0() { return static_cast<int32_t>(offsetof(ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78, ___m_Identifier_0)); }
	inline intptr_t get_m_Identifier_0() const { return ___m_Identifier_0; }
	inline intptr_t* get_address_of_m_Identifier_0() { return &___m_Identifier_0; }
	inline void set_m_Identifier_0(intptr_t value)
	{
		___m_Identifier_0 = value;
	}

	inline static int32_t get_offset_of_m_Capabilities_1() { return static_cast<int32_t>(offsetof(ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78, ___m_Capabilities_1)); }
	inline uint64_t get_m_Capabilities_1() const { return ___m_Capabilities_1; }
	inline uint64_t* get_address_of_m_Capabilities_1() { return &___m_Capabilities_1; }
	inline void set_m_Capabilities_1(uint64_t value)
	{
		___m_Capabilities_1 = value;
	}

	inline static int32_t get_offset_of_m_Rank_2() { return static_cast<int32_t>(offsetof(ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78, ___m_Rank_2)); }
	inline int32_t get_m_Rank_2() const { return ___m_Rank_2; }
	inline int32_t* get_address_of_m_Rank_2() { return &___m_Rank_2; }
	inline void set_m_Rank_2(int32_t value)
	{
		___m_Rank_2 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.DisableDeviceCommand
struct DisableDeviceCommand_t497E71F7D12C6D866FA590587FFE6CF95B1249D5 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngine.InputSystem.LowLevel.InputDeviceCommand UnityEngine.InputSystem.LowLevel.DisableDeviceCommand::baseCommand
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1_forAlignmentOnly;
				};
			};
		};
		uint8_t DisableDeviceCommand_t497E71F7D12C6D866FA590587FFE6CF95B1249D5__padding[8];
	};

public:
	inline static int32_t get_offset_of_baseCommand_1() { return static_cast<int32_t>(offsetof(DisableDeviceCommand_t497E71F7D12C6D866FA590587FFE6CF95B1249D5, ___baseCommand_1)); }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  get_baseCommand_1() const { return ___baseCommand_1; }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6 * get_address_of_baseCommand_1() { return &___baseCommand_1; }
	inline void set_baseCommand_1(InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  value)
	{
		___baseCommand_1 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.DualMotorRumbleCommand
struct DualMotorRumbleCommand_t5009DECA97708128341E4748EF1324D4F760FBE2 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngine.InputSystem.LowLevel.InputDeviceCommand UnityEngine.InputSystem.LowLevel.DualMotorRumbleCommand::baseCommand
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___lowFrequencyMotorSpeed_2_OffsetPadding[8];
					// System.Single UnityEngine.InputSystem.LowLevel.DualMotorRumbleCommand::lowFrequencyMotorSpeed
					float ___lowFrequencyMotorSpeed_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___lowFrequencyMotorSpeed_2_OffsetPadding_forAlignmentOnly[8];
					float ___lowFrequencyMotorSpeed_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___highFrequencyMotorSpeed_3_OffsetPadding[12];
					// System.Single UnityEngine.InputSystem.LowLevel.DualMotorRumbleCommand::highFrequencyMotorSpeed
					float ___highFrequencyMotorSpeed_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___highFrequencyMotorSpeed_3_OffsetPadding_forAlignmentOnly[12];
					float ___highFrequencyMotorSpeed_3_forAlignmentOnly;
				};
			};
		};
		uint8_t DualMotorRumbleCommand_t5009DECA97708128341E4748EF1324D4F760FBE2__padding[16];
	};

public:
	inline static int32_t get_offset_of_baseCommand_1() { return static_cast<int32_t>(offsetof(DualMotorRumbleCommand_t5009DECA97708128341E4748EF1324D4F760FBE2, ___baseCommand_1)); }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  get_baseCommand_1() const { return ___baseCommand_1; }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6 * get_address_of_baseCommand_1() { return &___baseCommand_1; }
	inline void set_baseCommand_1(InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  value)
	{
		___baseCommand_1 = value;
	}

	inline static int32_t get_offset_of_lowFrequencyMotorSpeed_2() { return static_cast<int32_t>(offsetof(DualMotorRumbleCommand_t5009DECA97708128341E4748EF1324D4F760FBE2, ___lowFrequencyMotorSpeed_2)); }
	inline float get_lowFrequencyMotorSpeed_2() const { return ___lowFrequencyMotorSpeed_2; }
	inline float* get_address_of_lowFrequencyMotorSpeed_2() { return &___lowFrequencyMotorSpeed_2; }
	inline void set_lowFrequencyMotorSpeed_2(float value)
	{
		___lowFrequencyMotorSpeed_2 = value;
	}

	inline static int32_t get_offset_of_highFrequencyMotorSpeed_3() { return static_cast<int32_t>(offsetof(DualMotorRumbleCommand_t5009DECA97708128341E4748EF1324D4F760FBE2, ___highFrequencyMotorSpeed_3)); }
	inline float get_highFrequencyMotorSpeed_3() const { return ___highFrequencyMotorSpeed_3; }
	inline float* get_address_of_highFrequencyMotorSpeed_3() { return &___highFrequencyMotorSpeed_3; }
	inline void set_highFrequencyMotorSpeed_3(float value)
	{
		___highFrequencyMotorSpeed_3 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.EnableDeviceCommand
struct EnableDeviceCommand_t83C70E81C7F64FB6BCEE3B3D12FD3756D8D6589E 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngine.InputSystem.LowLevel.InputDeviceCommand UnityEngine.InputSystem.LowLevel.EnableDeviceCommand::baseCommand
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1_forAlignmentOnly;
				};
			};
		};
		uint8_t EnableDeviceCommand_t83C70E81C7F64FB6BCEE3B3D12FD3756D8D6589E__padding[8];
	};

public:
	inline static int32_t get_offset_of_baseCommand_1() { return static_cast<int32_t>(offsetof(EnableDeviceCommand_t83C70E81C7F64FB6BCEE3B3D12FD3756D8D6589E, ___baseCommand_1)); }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  get_baseCommand_1() const { return ___baseCommand_1; }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6 * get_address_of_baseCommand_1() { return &___baseCommand_1; }
	inline void set_baseCommand_1(InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  value)
	{
		___baseCommand_1 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.EnableIMECompositionCommand
struct EnableIMECompositionCommand_tC79D0C8B469962BE1CC6ACFC91D2B12D7DD95DA0 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngine.InputSystem.LowLevel.InputDeviceCommand UnityEngine.InputSystem.LowLevel.EnableIMECompositionCommand::baseCommand
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_ImeEnabled_2_OffsetPadding[8];
					// System.Byte UnityEngine.InputSystem.LowLevel.EnableIMECompositionCommand::m_ImeEnabled
					uint8_t ___m_ImeEnabled_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_ImeEnabled_2_OffsetPadding_forAlignmentOnly[8];
					uint8_t ___m_ImeEnabled_2_forAlignmentOnly;
				};
			};
		};
		uint8_t EnableIMECompositionCommand_tC79D0C8B469962BE1CC6ACFC91D2B12D7DD95DA0__padding[9];
	};

public:
	inline static int32_t get_offset_of_baseCommand_1() { return static_cast<int32_t>(offsetof(EnableIMECompositionCommand_tC79D0C8B469962BE1CC6ACFC91D2B12D7DD95DA0, ___baseCommand_1)); }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  get_baseCommand_1() const { return ___baseCommand_1; }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6 * get_address_of_baseCommand_1() { return &___baseCommand_1; }
	inline void set_baseCommand_1(InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  value)
	{
		___baseCommand_1 = value;
	}

	inline static int32_t get_offset_of_m_ImeEnabled_2() { return static_cast<int32_t>(offsetof(EnableIMECompositionCommand_tC79D0C8B469962BE1CC6ACFC91D2B12D7DD95DA0, ___m_ImeEnabled_2)); }
	inline uint8_t get_m_ImeEnabled_2() const { return ___m_ImeEnabled_2; }
	inline uint8_t* get_address_of_m_ImeEnabled_2() { return &___m_ImeEnabled_2; }
	inline void set_m_ImeEnabled_2(uint8_t value)
	{
		___m_ImeEnabled_2 = value;
	}
};


// UnityEngine.InputSystem.XR.Haptics.GetHapticCapabilitiesCommand
struct GetHapticCapabilitiesCommand_t4B5EE9AC22975D873E128304EA66EF0CEA0BA1E6 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngine.InputSystem.LowLevel.InputDeviceCommand UnityEngine.InputSystem.XR.Haptics.GetHapticCapabilitiesCommand::baseCommand
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___numChannels_2_OffsetPadding[8];
					// System.UInt32 UnityEngine.InputSystem.XR.Haptics.GetHapticCapabilitiesCommand::numChannels
					uint32_t ___numChannels_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___numChannels_2_OffsetPadding_forAlignmentOnly[8];
					uint32_t ___numChannels_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___frequencyHz_3_OffsetPadding[12];
					// System.UInt32 UnityEngine.InputSystem.XR.Haptics.GetHapticCapabilitiesCommand::frequencyHz
					uint32_t ___frequencyHz_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___frequencyHz_3_OffsetPadding_forAlignmentOnly[12];
					uint32_t ___frequencyHz_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___maxBufferSize_4_OffsetPadding[16];
					// System.UInt32 UnityEngine.InputSystem.XR.Haptics.GetHapticCapabilitiesCommand::maxBufferSize
					uint32_t ___maxBufferSize_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___maxBufferSize_4_OffsetPadding_forAlignmentOnly[16];
					uint32_t ___maxBufferSize_4_forAlignmentOnly;
				};
			};
		};
		uint8_t GetHapticCapabilitiesCommand_t4B5EE9AC22975D873E128304EA66EF0CEA0BA1E6__padding[20];
	};

public:
	inline static int32_t get_offset_of_baseCommand_1() { return static_cast<int32_t>(offsetof(GetHapticCapabilitiesCommand_t4B5EE9AC22975D873E128304EA66EF0CEA0BA1E6, ___baseCommand_1)); }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  get_baseCommand_1() const { return ___baseCommand_1; }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6 * get_address_of_baseCommand_1() { return &___baseCommand_1; }
	inline void set_baseCommand_1(InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  value)
	{
		___baseCommand_1 = value;
	}

	inline static int32_t get_offset_of_numChannels_2() { return static_cast<int32_t>(offsetof(GetHapticCapabilitiesCommand_t4B5EE9AC22975D873E128304EA66EF0CEA0BA1E6, ___numChannels_2)); }
	inline uint32_t get_numChannels_2() const { return ___numChannels_2; }
	inline uint32_t* get_address_of_numChannels_2() { return &___numChannels_2; }
	inline void set_numChannels_2(uint32_t value)
	{
		___numChannels_2 = value;
	}

	inline static int32_t get_offset_of_frequencyHz_3() { return static_cast<int32_t>(offsetof(GetHapticCapabilitiesCommand_t4B5EE9AC22975D873E128304EA66EF0CEA0BA1E6, ___frequencyHz_3)); }
	inline uint32_t get_frequencyHz_3() const { return ___frequencyHz_3; }
	inline uint32_t* get_address_of_frequencyHz_3() { return &___frequencyHz_3; }
	inline void set_frequencyHz_3(uint32_t value)
	{
		___frequencyHz_3 = value;
	}

	inline static int32_t get_offset_of_maxBufferSize_4() { return static_cast<int32_t>(offsetof(GetHapticCapabilitiesCommand_t4B5EE9AC22975D873E128304EA66EF0CEA0BA1E6, ___maxBufferSize_4)); }
	inline uint32_t get_maxBufferSize_4() const { return ___maxBufferSize_4; }
	inline uint32_t* get_address_of_maxBufferSize_4() { return &___maxBufferSize_4; }
	inline void set_maxBufferSize_4(uint32_t value)
	{
		___maxBufferSize_4 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.InitiateUserAccountPairingCommand
struct InitiateUserAccountPairingCommand_t81C2404F6F038F170F469E4A717AEE44A3B016F2 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngine.InputSystem.LowLevel.InputDeviceCommand UnityEngine.InputSystem.LowLevel.InitiateUserAccountPairingCommand::baseCommand
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1_forAlignmentOnly;
				};
			};
		};
		uint8_t InitiateUserAccountPairingCommand_t81C2404F6F038F170F469E4A717AEE44A3B016F2__padding[8];
	};

public:
	inline static int32_t get_offset_of_baseCommand_1() { return static_cast<int32_t>(offsetof(InitiateUserAccountPairingCommand_t81C2404F6F038F170F469E4A717AEE44A3B016F2, ___baseCommand_1)); }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  get_baseCommand_1() const { return ___baseCommand_1; }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6 * get_address_of_baseCommand_1() { return &___baseCommand_1; }
	inline void set_baseCommand_1(InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  value)
	{
		___baseCommand_1 = value;
	}
};


// UnityEngine.InputSystem.InputActionState
struct InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.InputActionMap[] UnityEngine.InputSystem.InputActionState::maps
	InputActionMapU5BU5D_tEE6F572B03BE03B28C7B701C19AE4FD4D5D2E580* ___maps_1;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputActionState::controls
	InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* ___controls_2;
	// UnityEngine.InputSystem.IInputInteraction[] UnityEngine.InputSystem.InputActionState::interactions
	IInputInteractionU5BU5D_tC7710034CF7D51B96E7C1E12F3C7E64AB0B6C3E8* ___interactions_3;
	// UnityEngine.InputSystem.InputProcessor[] UnityEngine.InputSystem.InputActionState::processors
	InputProcessorU5BU5D_tC2B97EE395F9CFBD17046BD90DB5A0A3B46EB9D3* ___processors_4;
	// UnityEngine.InputSystem.InputBindingComposite[] UnityEngine.InputSystem.InputActionState::composites
	InputBindingCompositeU5BU5D_tC0DEE76C22B9127A27E52487A6F2F5F9CCF483B6* ___composites_5;
	// System.Int32 UnityEngine.InputSystem.InputActionState::totalProcessorCount
	int32_t ___totalProcessorCount_6;
	// UnityEngine.InputSystem.InputActionState/UnmanagedMemory UnityEngine.InputSystem.InputActionState::memory
	UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16  ___memory_7;
	// System.Boolean UnityEngine.InputSystem.InputActionState::m_OnBeforeUpdateHooked
	bool ___m_OnBeforeUpdateHooked_8;
	// System.Boolean UnityEngine.InputSystem.InputActionState::m_OnAfterUpdateHooked
	bool ___m_OnAfterUpdateHooked_9;
	// System.Action UnityEngine.InputSystem.InputActionState::m_OnBeforeUpdateDelegate
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_OnBeforeUpdateDelegate_10;
	// System.Action UnityEngine.InputSystem.InputActionState::m_OnAfterUpdateDelegate
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_OnAfterUpdateDelegate_11;

public:
	inline static int32_t get_offset_of_maps_1() { return static_cast<int32_t>(offsetof(InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C, ___maps_1)); }
	inline InputActionMapU5BU5D_tEE6F572B03BE03B28C7B701C19AE4FD4D5D2E580* get_maps_1() const { return ___maps_1; }
	inline InputActionMapU5BU5D_tEE6F572B03BE03B28C7B701C19AE4FD4D5D2E580** get_address_of_maps_1() { return &___maps_1; }
	inline void set_maps_1(InputActionMapU5BU5D_tEE6F572B03BE03B28C7B701C19AE4FD4D5D2E580* value)
	{
		___maps_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___maps_1), (void*)value);
	}

	inline static int32_t get_offset_of_controls_2() { return static_cast<int32_t>(offsetof(InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C, ___controls_2)); }
	inline InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* get_controls_2() const { return ___controls_2; }
	inline InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67** get_address_of_controls_2() { return &___controls_2; }
	inline void set_controls_2(InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* value)
	{
		___controls_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controls_2), (void*)value);
	}

	inline static int32_t get_offset_of_interactions_3() { return static_cast<int32_t>(offsetof(InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C, ___interactions_3)); }
	inline IInputInteractionU5BU5D_tC7710034CF7D51B96E7C1E12F3C7E64AB0B6C3E8* get_interactions_3() const { return ___interactions_3; }
	inline IInputInteractionU5BU5D_tC7710034CF7D51B96E7C1E12F3C7E64AB0B6C3E8** get_address_of_interactions_3() { return &___interactions_3; }
	inline void set_interactions_3(IInputInteractionU5BU5D_tC7710034CF7D51B96E7C1E12F3C7E64AB0B6C3E8* value)
	{
		___interactions_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___interactions_3), (void*)value);
	}

	inline static int32_t get_offset_of_processors_4() { return static_cast<int32_t>(offsetof(InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C, ___processors_4)); }
	inline InputProcessorU5BU5D_tC2B97EE395F9CFBD17046BD90DB5A0A3B46EB9D3* get_processors_4() const { return ___processors_4; }
	inline InputProcessorU5BU5D_tC2B97EE395F9CFBD17046BD90DB5A0A3B46EB9D3** get_address_of_processors_4() { return &___processors_4; }
	inline void set_processors_4(InputProcessorU5BU5D_tC2B97EE395F9CFBD17046BD90DB5A0A3B46EB9D3* value)
	{
		___processors_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___processors_4), (void*)value);
	}

	inline static int32_t get_offset_of_composites_5() { return static_cast<int32_t>(offsetof(InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C, ___composites_5)); }
	inline InputBindingCompositeU5BU5D_tC0DEE76C22B9127A27E52487A6F2F5F9CCF483B6* get_composites_5() const { return ___composites_5; }
	inline InputBindingCompositeU5BU5D_tC0DEE76C22B9127A27E52487A6F2F5F9CCF483B6** get_address_of_composites_5() { return &___composites_5; }
	inline void set_composites_5(InputBindingCompositeU5BU5D_tC0DEE76C22B9127A27E52487A6F2F5F9CCF483B6* value)
	{
		___composites_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___composites_5), (void*)value);
	}

	inline static int32_t get_offset_of_totalProcessorCount_6() { return static_cast<int32_t>(offsetof(InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C, ___totalProcessorCount_6)); }
	inline int32_t get_totalProcessorCount_6() const { return ___totalProcessorCount_6; }
	inline int32_t* get_address_of_totalProcessorCount_6() { return &___totalProcessorCount_6; }
	inline void set_totalProcessorCount_6(int32_t value)
	{
		___totalProcessorCount_6 = value;
	}

	inline static int32_t get_offset_of_memory_7() { return static_cast<int32_t>(offsetof(InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C, ___memory_7)); }
	inline UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16  get_memory_7() const { return ___memory_7; }
	inline UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16 * get_address_of_memory_7() { return &___memory_7; }
	inline void set_memory_7(UnmanagedMemory_t5E2A7F3AF355F7A20E8D8B3D7BE388511DD17C16  value)
	{
		___memory_7 = value;
	}

	inline static int32_t get_offset_of_m_OnBeforeUpdateHooked_8() { return static_cast<int32_t>(offsetof(InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C, ___m_OnBeforeUpdateHooked_8)); }
	inline bool get_m_OnBeforeUpdateHooked_8() const { return ___m_OnBeforeUpdateHooked_8; }
	inline bool* get_address_of_m_OnBeforeUpdateHooked_8() { return &___m_OnBeforeUpdateHooked_8; }
	inline void set_m_OnBeforeUpdateHooked_8(bool value)
	{
		___m_OnBeforeUpdateHooked_8 = value;
	}

	inline static int32_t get_offset_of_m_OnAfterUpdateHooked_9() { return static_cast<int32_t>(offsetof(InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C, ___m_OnAfterUpdateHooked_9)); }
	inline bool get_m_OnAfterUpdateHooked_9() const { return ___m_OnAfterUpdateHooked_9; }
	inline bool* get_address_of_m_OnAfterUpdateHooked_9() { return &___m_OnAfterUpdateHooked_9; }
	inline void set_m_OnAfterUpdateHooked_9(bool value)
	{
		___m_OnAfterUpdateHooked_9 = value;
	}

	inline static int32_t get_offset_of_m_OnBeforeUpdateDelegate_10() { return static_cast<int32_t>(offsetof(InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C, ___m_OnBeforeUpdateDelegate_10)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_OnBeforeUpdateDelegate_10() const { return ___m_OnBeforeUpdateDelegate_10; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_OnBeforeUpdateDelegate_10() { return &___m_OnBeforeUpdateDelegate_10; }
	inline void set_m_OnBeforeUpdateDelegate_10(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_OnBeforeUpdateDelegate_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnBeforeUpdateDelegate_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnAfterUpdateDelegate_11() { return static_cast<int32_t>(offsetof(InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C, ___m_OnAfterUpdateDelegate_11)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_OnAfterUpdateDelegate_11() const { return ___m_OnAfterUpdateDelegate_11; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_OnAfterUpdateDelegate_11() { return &___m_OnAfterUpdateDelegate_11; }
	inline void set_m_OnAfterUpdateDelegate_11(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_OnAfterUpdateDelegate_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnAfterUpdateDelegate_11), (void*)value);
	}
};

struct InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C_StaticFields
{
public:
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Runtime.InteropServices.GCHandle> UnityEngine.InputSystem.InputActionState::s_GlobalList
	InlinedArray_1_tA3967E760933F5DC1FD6C0934D223A5ACA0A2723  ___s_GlobalList_12;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>> UnityEngine.InputSystem.InputActionState::s_OnActionChange
	InlinedArray_1_t6ABF81F82684BB96455201090C17BCA8242E85BD  ___s_OnActionChange_13;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<System.Object>> UnityEngine.InputSystem.InputActionState::s_OnActionControlsChanged
	InlinedArray_1_tCA120CEA444FAF14E58313503668909AB8450BB2  ___s_OnActionControlsChanged_14;

public:
	inline static int32_t get_offset_of_s_GlobalList_12() { return static_cast<int32_t>(offsetof(InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C_StaticFields, ___s_GlobalList_12)); }
	inline InlinedArray_1_tA3967E760933F5DC1FD6C0934D223A5ACA0A2723  get_s_GlobalList_12() const { return ___s_GlobalList_12; }
	inline InlinedArray_1_tA3967E760933F5DC1FD6C0934D223A5ACA0A2723 * get_address_of_s_GlobalList_12() { return &___s_GlobalList_12; }
	inline void set_s_GlobalList_12(InlinedArray_1_tA3967E760933F5DC1FD6C0934D223A5ACA0A2723  value)
	{
		___s_GlobalList_12 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_GlobalList_12))->___additionalValues_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_s_OnActionChange_13() { return static_cast<int32_t>(offsetof(InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C_StaticFields, ___s_OnActionChange_13)); }
	inline InlinedArray_1_t6ABF81F82684BB96455201090C17BCA8242E85BD  get_s_OnActionChange_13() const { return ___s_OnActionChange_13; }
	inline InlinedArray_1_t6ABF81F82684BB96455201090C17BCA8242E85BD * get_address_of_s_OnActionChange_13() { return &___s_OnActionChange_13; }
	inline void set_s_OnActionChange_13(InlinedArray_1_t6ABF81F82684BB96455201090C17BCA8242E85BD  value)
	{
		___s_OnActionChange_13 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_OnActionChange_13))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_OnActionChange_13))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_s_OnActionControlsChanged_14() { return static_cast<int32_t>(offsetof(InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C_StaticFields, ___s_OnActionControlsChanged_14)); }
	inline InlinedArray_1_tCA120CEA444FAF14E58313503668909AB8450BB2  get_s_OnActionControlsChanged_14() const { return ___s_OnActionControlsChanged_14; }
	inline InlinedArray_1_tCA120CEA444FAF14E58313503668909AB8450BB2 * get_address_of_s_OnActionControlsChanged_14() { return &___s_OnActionControlsChanged_14; }
	inline void set_s_OnActionControlsChanged_14(InlinedArray_1_tCA120CEA444FAF14E58313503668909AB8450BB2  value)
	{
		___s_OnActionControlsChanged_14 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_OnActionControlsChanged_14))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_OnActionControlsChanged_14))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.InputBinding
struct InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD 
{
public:
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;

public:
	inline static int32_t get_offset_of_m_Name_2() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Name_2)); }
	inline String_t* get_m_Name_2() const { return ___m_Name_2; }
	inline String_t** get_address_of_m_Name_2() { return &___m_Name_2; }
	inline void set_m_Name_2(String_t* value)
	{
		___m_Name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Id_3() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Id_3)); }
	inline String_t* get_m_Id_3() const { return ___m_Id_3; }
	inline String_t** get_address_of_m_Id_3() { return &___m_Id_3; }
	inline void set_m_Id_3(String_t* value)
	{
		___m_Id_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Id_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Path_4() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Path_4)); }
	inline String_t* get_m_Path_4() const { return ___m_Path_4; }
	inline String_t** get_address_of_m_Path_4() { return &___m_Path_4; }
	inline void set_m_Path_4(String_t* value)
	{
		___m_Path_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Path_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactions_5() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Interactions_5)); }
	inline String_t* get_m_Interactions_5() const { return ___m_Interactions_5; }
	inline String_t** get_address_of_m_Interactions_5() { return &___m_Interactions_5; }
	inline void set_m_Interactions_5(String_t* value)
	{
		___m_Interactions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Interactions_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Processors_6() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Processors_6)); }
	inline String_t* get_m_Processors_6() const { return ___m_Processors_6; }
	inline String_t** get_address_of_m_Processors_6() { return &___m_Processors_6; }
	inline void set_m_Processors_6(String_t* value)
	{
		___m_Processors_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Processors_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Groups_7() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Groups_7)); }
	inline String_t* get_m_Groups_7() const { return ___m_Groups_7; }
	inline String_t** get_address_of_m_Groups_7() { return &___m_Groups_7; }
	inline void set_m_Groups_7(String_t* value)
	{
		___m_Groups_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Groups_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_Action_8() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Action_8)); }
	inline String_t* get_m_Action_8() const { return ___m_Action_8; }
	inline String_t** get_address_of_m_Action_8() { return &___m_Action_8; }
	inline void set_m_Action_8(String_t* value)
	{
		___m_Action_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Action_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_9() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Flags_9)); }
	inline int32_t get_m_Flags_9() const { return ___m_Flags_9; }
	inline int32_t* get_address_of_m_Flags_9() { return &___m_Flags_9; }
	inline void set_m_Flags_9(int32_t value)
	{
		___m_Flags_9 = value;
	}

	inline static int32_t get_offset_of_m_OverridePath_10() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_OverridePath_10)); }
	inline String_t* get_m_OverridePath_10() const { return ___m_OverridePath_10; }
	inline String_t** get_address_of_m_OverridePath_10() { return &___m_OverridePath_10; }
	inline void set_m_OverridePath_10(String_t* value)
	{
		___m_OverridePath_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverridePath_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideInteractions_11() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_OverrideInteractions_11)); }
	inline String_t* get_m_OverrideInteractions_11() const { return ___m_OverrideInteractions_11; }
	inline String_t** get_address_of_m_OverrideInteractions_11() { return &___m_OverrideInteractions_11; }
	inline void set_m_OverrideInteractions_11(String_t* value)
	{
		___m_OverrideInteractions_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideInteractions_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideProcessors_12() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_OverrideProcessors_12)); }
	inline String_t* get_m_OverrideProcessors_12() const { return ___m_OverrideProcessors_12; }
	inline String_t** get_address_of_m_OverrideProcessors_12() { return &___m_OverrideProcessors_12; }
	inline void set_m_OverrideProcessors_12(String_t* value)
	{
		___m_OverrideProcessors_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideProcessors_12), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
};

// UnityEngine.InputSystem.Layouts.InputControlLayout
struct InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputControlLayout::m_Name
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___m_Name_2;
	// System.Type UnityEngine.InputSystem.Layouts.InputControlLayout::m_Type
	Type_t * ___m_Type_3;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputControlLayout::m_Variants
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___m_Variants_4;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.Layouts.InputControlLayout::m_StateFormat
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___m_StateFormat_5;
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout::m_StateSizeInBytes
	int32_t ___m_StateSizeInBytes_6;
	// System.Nullable`1<System.Boolean> UnityEngine.InputSystem.Layouts.InputControlLayout::m_UpdateBeforeRender
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___m_UpdateBeforeRender_7;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.Layouts.InputControlLayout::m_BaseLayouts
	InlinedArray_1_t7B73159E4B6A8AD12C99ED22A9138E32D7408FA0  ___m_BaseLayouts_8;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.Layouts.InputControlLayout::m_AppliedOverrides
	InlinedArray_1_t7B73159E4B6A8AD12C99ED22A9138E32D7408FA0  ___m_AppliedOverrides_9;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.Layouts.InputControlLayout::m_CommonUsages
	InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* ___m_CommonUsages_10;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem[] UnityEngine.InputSystem.Layouts.InputControlLayout::m_Controls
	ControlItemU5BU5D_t5AFF1520667DFF9AA06E17887A3D0B77BEB173BB* ___m_Controls_11;
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayout::m_DisplayName
	String_t* ___m_DisplayName_12;
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayout::m_Description
	String_t* ___m_Description_13;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/Flags UnityEngine.InputSystem.Layouts.InputControlLayout::m_Flags
	int32_t ___m_Flags_14;

public:
	inline static int32_t get_offset_of_m_Name_2() { return static_cast<int32_t>(offsetof(InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917, ___m_Name_2)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_m_Name_2() const { return ___m_Name_2; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_m_Name_2() { return &___m_Name_2; }
	inline void set_m_Name_2(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___m_Name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Name_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Name_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Type_3() { return static_cast<int32_t>(offsetof(InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917, ___m_Type_3)); }
	inline Type_t * get_m_Type_3() const { return ___m_Type_3; }
	inline Type_t ** get_address_of_m_Type_3() { return &___m_Type_3; }
	inline void set_m_Type_3(Type_t * value)
	{
		___m_Type_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Type_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Variants_4() { return static_cast<int32_t>(offsetof(InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917, ___m_Variants_4)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_m_Variants_4() const { return ___m_Variants_4; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_m_Variants_4() { return &___m_Variants_4; }
	inline void set_m_Variants_4(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___m_Variants_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Variants_4))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Variants_4))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_StateFormat_5() { return static_cast<int32_t>(offsetof(InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917, ___m_StateFormat_5)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_m_StateFormat_5() const { return ___m_StateFormat_5; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_m_StateFormat_5() { return &___m_StateFormat_5; }
	inline void set_m_StateFormat_5(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___m_StateFormat_5 = value;
	}

	inline static int32_t get_offset_of_m_StateSizeInBytes_6() { return static_cast<int32_t>(offsetof(InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917, ___m_StateSizeInBytes_6)); }
	inline int32_t get_m_StateSizeInBytes_6() const { return ___m_StateSizeInBytes_6; }
	inline int32_t* get_address_of_m_StateSizeInBytes_6() { return &___m_StateSizeInBytes_6; }
	inline void set_m_StateSizeInBytes_6(int32_t value)
	{
		___m_StateSizeInBytes_6 = value;
	}

	inline static int32_t get_offset_of_m_UpdateBeforeRender_7() { return static_cast<int32_t>(offsetof(InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917, ___m_UpdateBeforeRender_7)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_m_UpdateBeforeRender_7() const { return ___m_UpdateBeforeRender_7; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_m_UpdateBeforeRender_7() { return &___m_UpdateBeforeRender_7; }
	inline void set_m_UpdateBeforeRender_7(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___m_UpdateBeforeRender_7 = value;
	}

	inline static int32_t get_offset_of_m_BaseLayouts_8() { return static_cast<int32_t>(offsetof(InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917, ___m_BaseLayouts_8)); }
	inline InlinedArray_1_t7B73159E4B6A8AD12C99ED22A9138E32D7408FA0  get_m_BaseLayouts_8() const { return ___m_BaseLayouts_8; }
	inline InlinedArray_1_t7B73159E4B6A8AD12C99ED22A9138E32D7408FA0 * get_address_of_m_BaseLayouts_8() { return &___m_BaseLayouts_8; }
	inline void set_m_BaseLayouts_8(InlinedArray_1_t7B73159E4B6A8AD12C99ED22A9138E32D7408FA0  value)
	{
		___m_BaseLayouts_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BaseLayouts_8))->___firstValue_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BaseLayouts_8))->___firstValue_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_BaseLayouts_8))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AppliedOverrides_9() { return static_cast<int32_t>(offsetof(InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917, ___m_AppliedOverrides_9)); }
	inline InlinedArray_1_t7B73159E4B6A8AD12C99ED22A9138E32D7408FA0  get_m_AppliedOverrides_9() const { return ___m_AppliedOverrides_9; }
	inline InlinedArray_1_t7B73159E4B6A8AD12C99ED22A9138E32D7408FA0 * get_address_of_m_AppliedOverrides_9() { return &___m_AppliedOverrides_9; }
	inline void set_m_AppliedOverrides_9(InlinedArray_1_t7B73159E4B6A8AD12C99ED22A9138E32D7408FA0  value)
	{
		___m_AppliedOverrides_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_AppliedOverrides_9))->___firstValue_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_AppliedOverrides_9))->___firstValue_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_AppliedOverrides_9))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_CommonUsages_10() { return static_cast<int32_t>(offsetof(InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917, ___m_CommonUsages_10)); }
	inline InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* get_m_CommonUsages_10() const { return ___m_CommonUsages_10; }
	inline InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648** get_address_of_m_CommonUsages_10() { return &___m_CommonUsages_10; }
	inline void set_m_CommonUsages_10(InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* value)
	{
		___m_CommonUsages_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CommonUsages_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_Controls_11() { return static_cast<int32_t>(offsetof(InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917, ___m_Controls_11)); }
	inline ControlItemU5BU5D_t5AFF1520667DFF9AA06E17887A3D0B77BEB173BB* get_m_Controls_11() const { return ___m_Controls_11; }
	inline ControlItemU5BU5D_t5AFF1520667DFF9AA06E17887A3D0B77BEB173BB** get_address_of_m_Controls_11() { return &___m_Controls_11; }
	inline void set_m_Controls_11(ControlItemU5BU5D_t5AFF1520667DFF9AA06E17887A3D0B77BEB173BB* value)
	{
		___m_Controls_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Controls_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisplayName_12() { return static_cast<int32_t>(offsetof(InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917, ___m_DisplayName_12)); }
	inline String_t* get_m_DisplayName_12() const { return ___m_DisplayName_12; }
	inline String_t** get_address_of_m_DisplayName_12() { return &___m_DisplayName_12; }
	inline void set_m_DisplayName_12(String_t* value)
	{
		___m_DisplayName_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisplayName_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Description_13() { return static_cast<int32_t>(offsetof(InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917, ___m_Description_13)); }
	inline String_t* get_m_Description_13() const { return ___m_Description_13; }
	inline String_t** get_address_of_m_Description_13() { return &___m_Description_13; }
	inline void set_m_Description_13(String_t* value)
	{
		___m_Description_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Description_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_14() { return static_cast<int32_t>(offsetof(InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917, ___m_Flags_14)); }
	inline int32_t get_m_Flags_14() const { return ___m_Flags_14; }
	inline int32_t* get_address_of_m_Flags_14() { return &___m_Flags_14; }
	inline void set_m_Flags_14(int32_t value)
	{
		___m_Flags_14 = value;
	}
};

struct InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917_StaticFields
{
public:
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputControlLayout::s_DefaultVariant
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___s_DefaultVariant_0;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/Collection UnityEngine.InputSystem.Layouts.InputControlLayout::s_Layouts
	Collection_tDBA0BC36ACE448001ABFFED32EF785467D714D7B  ___s_Layouts_15;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/Cache UnityEngine.InputSystem.Layouts.InputControlLayout::s_CacheInstance
	Cache_t9F49740128E8F04886120C99F392DC7CEBC6AA67  ___s_CacheInstance_16;
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout::s_CacheInstanceRef
	int32_t ___s_CacheInstanceRef_17;

public:
	inline static int32_t get_offset_of_s_DefaultVariant_0() { return static_cast<int32_t>(offsetof(InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917_StaticFields, ___s_DefaultVariant_0)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_s_DefaultVariant_0() const { return ___s_DefaultVariant_0; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_s_DefaultVariant_0() { return &___s_DefaultVariant_0; }
	inline void set_s_DefaultVariant_0(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___s_DefaultVariant_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_DefaultVariant_0))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_DefaultVariant_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_s_Layouts_15() { return static_cast<int32_t>(offsetof(InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917_StaticFields, ___s_Layouts_15)); }
	inline Collection_tDBA0BC36ACE448001ABFFED32EF785467D714D7B  get_s_Layouts_15() const { return ___s_Layouts_15; }
	inline Collection_tDBA0BC36ACE448001ABFFED32EF785467D714D7B * get_address_of_s_Layouts_15() { return &___s_Layouts_15; }
	inline void set_s_Layouts_15(Collection_tDBA0BC36ACE448001ABFFED32EF785467D714D7B  value)
	{
		___s_Layouts_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Layouts_15))->___layoutTypes_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Layouts_15))->___layoutStrings_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Layouts_15))->___layoutBuilders_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Layouts_15))->___baseLayoutTable_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Layouts_15))->___layoutOverrides_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Layouts_15))->___layoutOverrideNames_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_Layouts_15))->___layoutMatchers_7), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_s_CacheInstance_16() { return static_cast<int32_t>(offsetof(InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917_StaticFields, ___s_CacheInstance_16)); }
	inline Cache_t9F49740128E8F04886120C99F392DC7CEBC6AA67  get_s_CacheInstance_16() const { return ___s_CacheInstance_16; }
	inline Cache_t9F49740128E8F04886120C99F392DC7CEBC6AA67 * get_address_of_s_CacheInstance_16() { return &___s_CacheInstance_16; }
	inline void set_s_CacheInstance_16(Cache_t9F49740128E8F04886120C99F392DC7CEBC6AA67  value)
	{
		___s_CacheInstance_16 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_CacheInstance_16))->___table_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_s_CacheInstanceRef_17() { return static_cast<int32_t>(offsetof(InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917_StaticFields, ___s_CacheInstanceRef_17)); }
	inline int32_t get_s_CacheInstanceRef_17() const { return ___s_CacheInstanceRef_17; }
	inline int32_t* get_address_of_s_CacheInstanceRef_17() { return &___s_CacheInstanceRef_17; }
	inline void set_s_CacheInstanceRef_17(int32_t value)
	{
		___s_CacheInstanceRef_17 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.LightDataGI
struct LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 
{
public:
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.LightDataGI::instanceID
	int32_t ___instanceID_0;
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.LightDataGI::cookieID
	int32_t ___cookieID_1;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::cookieScale
	float ___cookieScale_2;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightDataGI::color
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___color_3;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightDataGI::indirectColor
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___indirectColor_4;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.LightDataGI::orientation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___orientation_5;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.LightDataGI::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::range
	float ___range_7;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::coneAngle
	float ___coneAngle_8;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::innerConeAngle
	float ___innerConeAngle_9;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::shape0
	float ___shape0_10;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::shape1
	float ___shape1_11;
	// UnityEngine.Experimental.GlobalIllumination.LightType UnityEngine.Experimental.GlobalIllumination.LightDataGI::type
	uint8_t ___type_12;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.LightDataGI::mode
	uint8_t ___mode_13;
	// System.Byte UnityEngine.Experimental.GlobalIllumination.LightDataGI::shadow
	uint8_t ___shadow_14;
	// UnityEngine.Experimental.GlobalIllumination.FalloffType UnityEngine.Experimental.GlobalIllumination.LightDataGI::falloff
	uint8_t ___falloff_15;

public:
	inline static int32_t get_offset_of_instanceID_0() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___instanceID_0)); }
	inline int32_t get_instanceID_0() const { return ___instanceID_0; }
	inline int32_t* get_address_of_instanceID_0() { return &___instanceID_0; }
	inline void set_instanceID_0(int32_t value)
	{
		___instanceID_0 = value;
	}

	inline static int32_t get_offset_of_cookieID_1() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___cookieID_1)); }
	inline int32_t get_cookieID_1() const { return ___cookieID_1; }
	inline int32_t* get_address_of_cookieID_1() { return &___cookieID_1; }
	inline void set_cookieID_1(int32_t value)
	{
		___cookieID_1 = value;
	}

	inline static int32_t get_offset_of_cookieScale_2() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___cookieScale_2)); }
	inline float get_cookieScale_2() const { return ___cookieScale_2; }
	inline float* get_address_of_cookieScale_2() { return &___cookieScale_2; }
	inline void set_cookieScale_2(float value)
	{
		___cookieScale_2 = value;
	}

	inline static int32_t get_offset_of_color_3() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___color_3)); }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  get_color_3() const { return ___color_3; }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 * get_address_of_color_3() { return &___color_3; }
	inline void set_color_3(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  value)
	{
		___color_3 = value;
	}

	inline static int32_t get_offset_of_indirectColor_4() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___indirectColor_4)); }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  get_indirectColor_4() const { return ___indirectColor_4; }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 * get_address_of_indirectColor_4() { return &___indirectColor_4; }
	inline void set_indirectColor_4(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  value)
	{
		___indirectColor_4 = value;
	}

	inline static int32_t get_offset_of_orientation_5() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___orientation_5)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_orientation_5() const { return ___orientation_5; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_orientation_5() { return &___orientation_5; }
	inline void set_orientation_5(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___orientation_5 = value;
	}

	inline static int32_t get_offset_of_position_6() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___position_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_6() const { return ___position_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_6() { return &___position_6; }
	inline void set_position_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_6 = value;
	}

	inline static int32_t get_offset_of_range_7() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___range_7)); }
	inline float get_range_7() const { return ___range_7; }
	inline float* get_address_of_range_7() { return &___range_7; }
	inline void set_range_7(float value)
	{
		___range_7 = value;
	}

	inline static int32_t get_offset_of_coneAngle_8() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___coneAngle_8)); }
	inline float get_coneAngle_8() const { return ___coneAngle_8; }
	inline float* get_address_of_coneAngle_8() { return &___coneAngle_8; }
	inline void set_coneAngle_8(float value)
	{
		___coneAngle_8 = value;
	}

	inline static int32_t get_offset_of_innerConeAngle_9() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___innerConeAngle_9)); }
	inline float get_innerConeAngle_9() const { return ___innerConeAngle_9; }
	inline float* get_address_of_innerConeAngle_9() { return &___innerConeAngle_9; }
	inline void set_innerConeAngle_9(float value)
	{
		___innerConeAngle_9 = value;
	}

	inline static int32_t get_offset_of_shape0_10() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___shape0_10)); }
	inline float get_shape0_10() const { return ___shape0_10; }
	inline float* get_address_of_shape0_10() { return &___shape0_10; }
	inline void set_shape0_10(float value)
	{
		___shape0_10 = value;
	}

	inline static int32_t get_offset_of_shape1_11() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___shape1_11)); }
	inline float get_shape1_11() const { return ___shape1_11; }
	inline float* get_address_of_shape1_11() { return &___shape1_11; }
	inline void set_shape1_11(float value)
	{
		___shape1_11 = value;
	}

	inline static int32_t get_offset_of_type_12() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___type_12)); }
	inline uint8_t get_type_12() const { return ___type_12; }
	inline uint8_t* get_address_of_type_12() { return &___type_12; }
	inline void set_type_12(uint8_t value)
	{
		___type_12 = value;
	}

	inline static int32_t get_offset_of_mode_13() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___mode_13)); }
	inline uint8_t get_mode_13() const { return ___mode_13; }
	inline uint8_t* get_address_of_mode_13() { return &___mode_13; }
	inline void set_mode_13(uint8_t value)
	{
		___mode_13 = value;
	}

	inline static int32_t get_offset_of_shadow_14() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___shadow_14)); }
	inline uint8_t get_shadow_14() const { return ___shadow_14; }
	inline uint8_t* get_address_of_shadow_14() { return &___shadow_14; }
	inline void set_shadow_14(uint8_t value)
	{
		___shadow_14 = value;
	}

	inline static int32_t get_offset_of_falloff_15() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___falloff_15)); }
	inline uint8_t get_falloff_15() const { return ___falloff_15; }
	inline uint8_t* get_address_of_falloff_15() { return &___falloff_15; }
	inline void set_falloff_15(uint8_t value)
	{
		___falloff_15 = value;
	}
};


// UnityEngineInternal.Input.NativeInputEvent
struct NativeInputEvent_t21B4AB4BC38B4E147E82E91E29CE8877CF035FCD 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngineInternal.Input.NativeInputEventType UnityEngineInternal.Input.NativeInputEvent::type
					int32_t ___type_1;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					int32_t ___type_1_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___sizeInBytes_2_OffsetPadding[4];
					// System.UInt16 UnityEngineInternal.Input.NativeInputEvent::sizeInBytes
					uint16_t ___sizeInBytes_2;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___sizeInBytes_2_OffsetPadding_forAlignmentOnly[4];
					uint16_t ___sizeInBytes_2_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___deviceId_3_OffsetPadding[6];
					// System.UInt16 UnityEngineInternal.Input.NativeInputEvent::deviceId
					uint16_t ___deviceId_3;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___deviceId_3_OffsetPadding_forAlignmentOnly[6];
					uint16_t ___deviceId_3_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___time_4_OffsetPadding[8];
					// System.Double UnityEngineInternal.Input.NativeInputEvent::time
					double ___time_4;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___time_4_OffsetPadding_forAlignmentOnly[8];
					double ___time_4_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___eventId_5_OffsetPadding[16];
					// System.Int32 UnityEngineInternal.Input.NativeInputEvent::eventId
					int32_t ___eventId_5;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___eventId_5_OffsetPadding_forAlignmentOnly[16];
					int32_t ___eventId_5_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
			};
		};
		uint8_t NativeInputEvent_t21B4AB4BC38B4E147E82E91E29CE8877CF035FCD__padding[20];
	};

public:
	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(NativeInputEvent_t21B4AB4BC38B4E147E82E91E29CE8877CF035FCD, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_sizeInBytes_2() { return static_cast<int32_t>(offsetof(NativeInputEvent_t21B4AB4BC38B4E147E82E91E29CE8877CF035FCD, ___sizeInBytes_2)); }
	inline uint16_t get_sizeInBytes_2() const { return ___sizeInBytes_2; }
	inline uint16_t* get_address_of_sizeInBytes_2() { return &___sizeInBytes_2; }
	inline void set_sizeInBytes_2(uint16_t value)
	{
		___sizeInBytes_2 = value;
	}

	inline static int32_t get_offset_of_deviceId_3() { return static_cast<int32_t>(offsetof(NativeInputEvent_t21B4AB4BC38B4E147E82E91E29CE8877CF035FCD, ___deviceId_3)); }
	inline uint16_t get_deviceId_3() const { return ___deviceId_3; }
	inline uint16_t* get_address_of_deviceId_3() { return &___deviceId_3; }
	inline void set_deviceId_3(uint16_t value)
	{
		___deviceId_3 = value;
	}

	inline static int32_t get_offset_of_time_4() { return static_cast<int32_t>(offsetof(NativeInputEvent_t21B4AB4BC38B4E147E82E91E29CE8877CF035FCD, ___time_4)); }
	inline double get_time_4() const { return ___time_4; }
	inline double* get_address_of_time_4() { return &___time_4; }
	inline void set_time_4(double value)
	{
		___time_4 = value;
	}

	inline static int32_t get_offset_of_eventId_5() { return static_cast<int32_t>(offsetof(NativeInputEvent_t21B4AB4BC38B4E147E82E91E29CE8877CF035FCD, ___eventId_5)); }
	inline int32_t get_eventId_5() const { return ___eventId_5; }
	inline int32_t* get_address_of_eventId_5() { return &___eventId_5; }
	inline void set_eventId_5(int32_t value)
	{
		___eventId_5 = value;
	}
};


// UnityEngine.XR.OpenXR.Input.Pose
struct Pose_t066D8D46ADA938D52C66EE071A37B17E71685B5C 
{
public:
	// System.Boolean UnityEngine.XR.OpenXR.Input.Pose::<isTracked>k__BackingField
	bool ___U3CisTrackedU3Ek__BackingField_0;
	// UnityEngine.XR.InputTrackingState UnityEngine.XR.OpenXR.Input.Pose::<trackingState>k__BackingField
	uint32_t ___U3CtrackingStateU3Ek__BackingField_1;
	// UnityEngine.Vector3 UnityEngine.XR.OpenXR.Input.Pose::<position>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CpositionU3Ek__BackingField_2;
	// UnityEngine.Quaternion UnityEngine.XR.OpenXR.Input.Pose::<rotation>k__BackingField
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CrotationU3Ek__BackingField_3;
	// UnityEngine.Vector3 UnityEngine.XR.OpenXR.Input.Pose::<velocity>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CvelocityU3Ek__BackingField_4;
	// UnityEngine.Vector3 UnityEngine.XR.OpenXR.Input.Pose::<angularVelocity>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CangularVelocityU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CisTrackedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Pose_t066D8D46ADA938D52C66EE071A37B17E71685B5C, ___U3CisTrackedU3Ek__BackingField_0)); }
	inline bool get_U3CisTrackedU3Ek__BackingField_0() const { return ___U3CisTrackedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisTrackedU3Ek__BackingField_0() { return &___U3CisTrackedU3Ek__BackingField_0; }
	inline void set_U3CisTrackedU3Ek__BackingField_0(bool value)
	{
		___U3CisTrackedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CtrackingStateU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Pose_t066D8D46ADA938D52C66EE071A37B17E71685B5C, ___U3CtrackingStateU3Ek__BackingField_1)); }
	inline uint32_t get_U3CtrackingStateU3Ek__BackingField_1() const { return ___U3CtrackingStateU3Ek__BackingField_1; }
	inline uint32_t* get_address_of_U3CtrackingStateU3Ek__BackingField_1() { return &___U3CtrackingStateU3Ek__BackingField_1; }
	inline void set_U3CtrackingStateU3Ek__BackingField_1(uint32_t value)
	{
		___U3CtrackingStateU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Pose_t066D8D46ADA938D52C66EE071A37B17E71685B5C, ___U3CpositionU3Ek__BackingField_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CpositionU3Ek__BackingField_2() const { return ___U3CpositionU3Ek__BackingField_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CpositionU3Ek__BackingField_2() { return &___U3CpositionU3Ek__BackingField_2; }
	inline void set_U3CpositionU3Ek__BackingField_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CpositionU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CrotationU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Pose_t066D8D46ADA938D52C66EE071A37B17E71685B5C, ___U3CrotationU3Ek__BackingField_3)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_U3CrotationU3Ek__BackingField_3() const { return ___U3CrotationU3Ek__BackingField_3; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_U3CrotationU3Ek__BackingField_3() { return &___U3CrotationU3Ek__BackingField_3; }
	inline void set_U3CrotationU3Ek__BackingField_3(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___U3CrotationU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CvelocityU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Pose_t066D8D46ADA938D52C66EE071A37B17E71685B5C, ___U3CvelocityU3Ek__BackingField_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CvelocityU3Ek__BackingField_4() const { return ___U3CvelocityU3Ek__BackingField_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CvelocityU3Ek__BackingField_4() { return &___U3CvelocityU3Ek__BackingField_4; }
	inline void set_U3CvelocityU3Ek__BackingField_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CvelocityU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CangularVelocityU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Pose_t066D8D46ADA938D52C66EE071A37B17E71685B5C, ___U3CangularVelocityU3Ek__BackingField_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CangularVelocityU3Ek__BackingField_5() const { return ___U3CangularVelocityU3Ek__BackingField_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CangularVelocityU3Ek__BackingField_5() { return &___U3CangularVelocityU3Ek__BackingField_5; }
	inline void set_U3CangularVelocityU3Ek__BackingField_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CangularVelocityU3Ek__BackingField_5 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.OpenXR.Input.Pose
struct Pose_t066D8D46ADA938D52C66EE071A37B17E71685B5C_marshaled_pinvoke
{
	int32_t ___U3CisTrackedU3Ek__BackingField_0;
	uint32_t ___U3CtrackingStateU3Ek__BackingField_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CpositionU3Ek__BackingField_2;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CrotationU3Ek__BackingField_3;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CvelocityU3Ek__BackingField_4;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CangularVelocityU3Ek__BackingField_5;
};
// Native definition for COM marshalling of UnityEngine.XR.OpenXR.Input.Pose
struct Pose_t066D8D46ADA938D52C66EE071A37B17E71685B5C_marshaled_com
{
	int32_t ___U3CisTrackedU3Ek__BackingField_0;
	uint32_t ___U3CtrackingStateU3Ek__BackingField_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CpositionU3Ek__BackingField_2;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CrotationU3Ek__BackingField_3;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CvelocityU3Ek__BackingField_4;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CangularVelocityU3Ek__BackingField_5;
};

// UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.TypeCode UnityEngine.InputSystem.Utilities.PrimitiveValue::m_Type
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			// System.Boolean UnityEngine.InputSystem.Utilities.PrimitiveValue::m_BoolValue
			bool ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			// System.Char UnityEngine.InputSystem.Utilities.PrimitiveValue::m_CharValue
			Il2CppChar ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			// System.Byte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ByteValue
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			// System.SByte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_SByteValue
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			// System.Int16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ShortValue
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			// System.UInt16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UShortValue
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			// System.Int32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_IntValue
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			// System.UInt32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UIntValue
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			// System.Int64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_LongValue
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			// System.UInt64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ULongValue
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			// System.Single UnityEngine.InputSystem.Utilities.PrimitiveValue::m_FloatValue
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			// System.Double UnityEngine.InputSystem.Utilities.PrimitiveValue::m_DoubleValue
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_BoolValue_1() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_BoolValue_1)); }
	inline bool get_m_BoolValue_1() const { return ___m_BoolValue_1; }
	inline bool* get_address_of_m_BoolValue_1() { return &___m_BoolValue_1; }
	inline void set_m_BoolValue_1(bool value)
	{
		___m_BoolValue_1 = value;
	}

	inline static int32_t get_offset_of_m_CharValue_2() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_CharValue_2)); }
	inline Il2CppChar get_m_CharValue_2() const { return ___m_CharValue_2; }
	inline Il2CppChar* get_address_of_m_CharValue_2() { return &___m_CharValue_2; }
	inline void set_m_CharValue_2(Il2CppChar value)
	{
		___m_CharValue_2 = value;
	}

	inline static int32_t get_offset_of_m_ByteValue_3() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_ByteValue_3)); }
	inline uint8_t get_m_ByteValue_3() const { return ___m_ByteValue_3; }
	inline uint8_t* get_address_of_m_ByteValue_3() { return &___m_ByteValue_3; }
	inline void set_m_ByteValue_3(uint8_t value)
	{
		___m_ByteValue_3 = value;
	}

	inline static int32_t get_offset_of_m_SByteValue_4() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_SByteValue_4)); }
	inline int8_t get_m_SByteValue_4() const { return ___m_SByteValue_4; }
	inline int8_t* get_address_of_m_SByteValue_4() { return &___m_SByteValue_4; }
	inline void set_m_SByteValue_4(int8_t value)
	{
		___m_SByteValue_4 = value;
	}

	inline static int32_t get_offset_of_m_ShortValue_5() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_ShortValue_5)); }
	inline int16_t get_m_ShortValue_5() const { return ___m_ShortValue_5; }
	inline int16_t* get_address_of_m_ShortValue_5() { return &___m_ShortValue_5; }
	inline void set_m_ShortValue_5(int16_t value)
	{
		___m_ShortValue_5 = value;
	}

	inline static int32_t get_offset_of_m_UShortValue_6() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_UShortValue_6)); }
	inline uint16_t get_m_UShortValue_6() const { return ___m_UShortValue_6; }
	inline uint16_t* get_address_of_m_UShortValue_6() { return &___m_UShortValue_6; }
	inline void set_m_UShortValue_6(uint16_t value)
	{
		___m_UShortValue_6 = value;
	}

	inline static int32_t get_offset_of_m_IntValue_7() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_IntValue_7)); }
	inline int32_t get_m_IntValue_7() const { return ___m_IntValue_7; }
	inline int32_t* get_address_of_m_IntValue_7() { return &___m_IntValue_7; }
	inline void set_m_IntValue_7(int32_t value)
	{
		___m_IntValue_7 = value;
	}

	inline static int32_t get_offset_of_m_UIntValue_8() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_UIntValue_8)); }
	inline uint32_t get_m_UIntValue_8() const { return ___m_UIntValue_8; }
	inline uint32_t* get_address_of_m_UIntValue_8() { return &___m_UIntValue_8; }
	inline void set_m_UIntValue_8(uint32_t value)
	{
		___m_UIntValue_8 = value;
	}

	inline static int32_t get_offset_of_m_LongValue_9() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_LongValue_9)); }
	inline int64_t get_m_LongValue_9() const { return ___m_LongValue_9; }
	inline int64_t* get_address_of_m_LongValue_9() { return &___m_LongValue_9; }
	inline void set_m_LongValue_9(int64_t value)
	{
		___m_LongValue_9 = value;
	}

	inline static int32_t get_offset_of_m_ULongValue_10() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_ULongValue_10)); }
	inline uint64_t get_m_ULongValue_10() const { return ___m_ULongValue_10; }
	inline uint64_t* get_address_of_m_ULongValue_10() { return &___m_ULongValue_10; }
	inline void set_m_ULongValue_10(uint64_t value)
	{
		___m_ULongValue_10 = value;
	}

	inline static int32_t get_offset_of_m_FloatValue_11() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_FloatValue_11)); }
	inline float get_m_FloatValue_11() const { return ___m_FloatValue_11; }
	inline float* get_address_of_m_FloatValue_11() { return &___m_FloatValue_11; }
	inline void set_m_FloatValue_11(float value)
	{
		___m_FloatValue_11 = value;
	}

	inline static int32_t get_offset_of_m_DoubleValue_12() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_DoubleValue_12)); }
	inline double get_m_DoubleValue_12() const { return ___m_DoubleValue_12; }
	inline double* get_address_of_m_DoubleValue_12() { return &___m_DoubleValue_12; }
	inline void set_m_DoubleValue_12(double value)
	{
		___m_DoubleValue_12 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};

// UnityEngine.InputSystem.LowLevel.QueryCanRunInBackground
struct QueryCanRunInBackground_t058D173B884B9422BA30A52BA16CD58ED1BB1279 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngine.InputSystem.LowLevel.InputDeviceCommand UnityEngine.InputSystem.LowLevel.QueryCanRunInBackground::baseCommand
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___canRunInBackground_2_OffsetPadding[8];
					// System.Boolean UnityEngine.InputSystem.LowLevel.QueryCanRunInBackground::canRunInBackground
					bool ___canRunInBackground_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___canRunInBackground_2_OffsetPadding_forAlignmentOnly[8];
					bool ___canRunInBackground_2_forAlignmentOnly;
				};
			};
		};
		uint8_t QueryCanRunInBackground_t058D173B884B9422BA30A52BA16CD58ED1BB1279__padding[9];
	};

public:
	inline static int32_t get_offset_of_baseCommand_1() { return static_cast<int32_t>(offsetof(QueryCanRunInBackground_t058D173B884B9422BA30A52BA16CD58ED1BB1279, ___baseCommand_1)); }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  get_baseCommand_1() const { return ___baseCommand_1; }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6 * get_address_of_baseCommand_1() { return &___baseCommand_1; }
	inline void set_baseCommand_1(InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  value)
	{
		___baseCommand_1 = value;
	}

	inline static int32_t get_offset_of_canRunInBackground_2() { return static_cast<int32_t>(offsetof(QueryCanRunInBackground_t058D173B884B9422BA30A52BA16CD58ED1BB1279, ___canRunInBackground_2)); }
	inline bool get_canRunInBackground_2() const { return ___canRunInBackground_2; }
	inline bool* get_address_of_canRunInBackground_2() { return &___canRunInBackground_2; }
	inline void set_canRunInBackground_2(bool value)
	{
		___canRunInBackground_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.LowLevel.QueryCanRunInBackground
struct QueryCanRunInBackground_t058D173B884B9422BA30A52BA16CD58ED1BB1279_marshaled_pinvoke
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___canRunInBackground_2_OffsetPadding[8];
					int32_t ___canRunInBackground_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___canRunInBackground_2_OffsetPadding_forAlignmentOnly[8];
					int32_t ___canRunInBackground_2_forAlignmentOnly;
				};
			};
		};
		uint8_t QueryCanRunInBackground_t058D173B884B9422BA30A52BA16CD58ED1BB1279__padding[9];
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.LowLevel.QueryCanRunInBackground
struct QueryCanRunInBackground_t058D173B884B9422BA30A52BA16CD58ED1BB1279_marshaled_com
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___canRunInBackground_2_OffsetPadding[8];
					int32_t ___canRunInBackground_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___canRunInBackground_2_OffsetPadding_forAlignmentOnly[8];
					int32_t ___canRunInBackground_2_forAlignmentOnly;
				};
			};
		};
		uint8_t QueryCanRunInBackground_t058D173B884B9422BA30A52BA16CD58ED1BB1279__padding[9];
	};
};

// UnityEngine.InputSystem.LowLevel.QueryEnabledStateCommand
struct QueryEnabledStateCommand_tBF19A45DBC338D4E1C25D9C0E32F19ACD661B865 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngine.InputSystem.LowLevel.InputDeviceCommand UnityEngine.InputSystem.LowLevel.QueryEnabledStateCommand::baseCommand
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___isEnabled_2_OffsetPadding[8];
					// System.Boolean UnityEngine.InputSystem.LowLevel.QueryEnabledStateCommand::isEnabled
					bool ___isEnabled_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___isEnabled_2_OffsetPadding_forAlignmentOnly[8];
					bool ___isEnabled_2_forAlignmentOnly;
				};
			};
		};
		uint8_t QueryEnabledStateCommand_tBF19A45DBC338D4E1C25D9C0E32F19ACD661B865__padding[9];
	};

public:
	inline static int32_t get_offset_of_baseCommand_1() { return static_cast<int32_t>(offsetof(QueryEnabledStateCommand_tBF19A45DBC338D4E1C25D9C0E32F19ACD661B865, ___baseCommand_1)); }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  get_baseCommand_1() const { return ___baseCommand_1; }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6 * get_address_of_baseCommand_1() { return &___baseCommand_1; }
	inline void set_baseCommand_1(InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  value)
	{
		___baseCommand_1 = value;
	}

	inline static int32_t get_offset_of_isEnabled_2() { return static_cast<int32_t>(offsetof(QueryEnabledStateCommand_tBF19A45DBC338D4E1C25D9C0E32F19ACD661B865, ___isEnabled_2)); }
	inline bool get_isEnabled_2() const { return ___isEnabled_2; }
	inline bool* get_address_of_isEnabled_2() { return &___isEnabled_2; }
	inline void set_isEnabled_2(bool value)
	{
		___isEnabled_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.LowLevel.QueryEnabledStateCommand
struct QueryEnabledStateCommand_tBF19A45DBC338D4E1C25D9C0E32F19ACD661B865_marshaled_pinvoke
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___isEnabled_2_OffsetPadding[8];
					int32_t ___isEnabled_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___isEnabled_2_OffsetPadding_forAlignmentOnly[8];
					int32_t ___isEnabled_2_forAlignmentOnly;
				};
			};
		};
		uint8_t QueryEnabledStateCommand_tBF19A45DBC338D4E1C25D9C0E32F19ACD661B865__padding[9];
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.LowLevel.QueryEnabledStateCommand
struct QueryEnabledStateCommand_tBF19A45DBC338D4E1C25D9C0E32F19ACD661B865_marshaled_com
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___isEnabled_2_OffsetPadding[8];
					int32_t ___isEnabled_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___isEnabled_2_OffsetPadding_forAlignmentOnly[8];
					int32_t ___isEnabled_2_forAlignmentOnly;
				};
			};
		};
		uint8_t QueryEnabledStateCommand_tBF19A45DBC338D4E1C25D9C0E32F19ACD661B865__padding[9];
	};
};

// UnityEngine.InputSystem.LowLevel.QueryKeyNameCommand
struct QueryKeyNameCommand_tD64E71A741E2830ED4B754EA6FE35C38E2E1C575 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngine.InputSystem.LowLevel.InputDeviceCommand UnityEngine.InputSystem.LowLevel.QueryKeyNameCommand::baseCommand
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___scanOrKeyCode_3_OffsetPadding[8];
					// System.Int32 UnityEngine.InputSystem.LowLevel.QueryKeyNameCommand::scanOrKeyCode
					int32_t ___scanOrKeyCode_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___scanOrKeyCode_3_OffsetPadding_forAlignmentOnly[8];
					int32_t ___scanOrKeyCode_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___nameBuffer_4_OffsetPadding[12];
					// UnityEngine.InputSystem.LowLevel.QueryKeyNameCommand/<nameBuffer>e__FixedBuffer UnityEngine.InputSystem.LowLevel.QueryKeyNameCommand::nameBuffer
					U3CnameBufferU3Ee__FixedBuffer_t13EE2E30E2BC77CDDB03C87B880185F18D68F290  ___nameBuffer_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___nameBuffer_4_OffsetPadding_forAlignmentOnly[12];
					U3CnameBufferU3Ee__FixedBuffer_t13EE2E30E2BC77CDDB03C87B880185F18D68F290  ___nameBuffer_4_forAlignmentOnly;
				};
			};
		};
		uint8_t QueryKeyNameCommand_tD64E71A741E2830ED4B754EA6FE35C38E2E1C575__padding[268];
	};

public:
	inline static int32_t get_offset_of_baseCommand_2() { return static_cast<int32_t>(offsetof(QueryKeyNameCommand_tD64E71A741E2830ED4B754EA6FE35C38E2E1C575, ___baseCommand_2)); }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  get_baseCommand_2() const { return ___baseCommand_2; }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6 * get_address_of_baseCommand_2() { return &___baseCommand_2; }
	inline void set_baseCommand_2(InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  value)
	{
		___baseCommand_2 = value;
	}

	inline static int32_t get_offset_of_scanOrKeyCode_3() { return static_cast<int32_t>(offsetof(QueryKeyNameCommand_tD64E71A741E2830ED4B754EA6FE35C38E2E1C575, ___scanOrKeyCode_3)); }
	inline int32_t get_scanOrKeyCode_3() const { return ___scanOrKeyCode_3; }
	inline int32_t* get_address_of_scanOrKeyCode_3() { return &___scanOrKeyCode_3; }
	inline void set_scanOrKeyCode_3(int32_t value)
	{
		___scanOrKeyCode_3 = value;
	}

	inline static int32_t get_offset_of_nameBuffer_4() { return static_cast<int32_t>(offsetof(QueryKeyNameCommand_tD64E71A741E2830ED4B754EA6FE35C38E2E1C575, ___nameBuffer_4)); }
	inline U3CnameBufferU3Ee__FixedBuffer_t13EE2E30E2BC77CDDB03C87B880185F18D68F290  get_nameBuffer_4() const { return ___nameBuffer_4; }
	inline U3CnameBufferU3Ee__FixedBuffer_t13EE2E30E2BC77CDDB03C87B880185F18D68F290 * get_address_of_nameBuffer_4() { return &___nameBuffer_4; }
	inline void set_nameBuffer_4(U3CnameBufferU3Ee__FixedBuffer_t13EE2E30E2BC77CDDB03C87B880185F18D68F290  value)
	{
		___nameBuffer_4 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.QueryKeyboardLayoutCommand
struct QueryKeyboardLayoutCommand_t4D0372BEF388EAF51A5489DFE36E230EB9E25E34 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngine.InputSystem.LowLevel.InputDeviceCommand UnityEngine.InputSystem.LowLevel.QueryKeyboardLayoutCommand::baseCommand
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___nameBuffer_2_OffsetPadding[8];
					// UnityEngine.InputSystem.LowLevel.QueryKeyboardLayoutCommand/<nameBuffer>e__FixedBuffer UnityEngine.InputSystem.LowLevel.QueryKeyboardLayoutCommand::nameBuffer
					U3CnameBufferU3Ee__FixedBuffer_t3D3674F36611E1EC72C60B066C053777C3FA4A58  ___nameBuffer_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___nameBuffer_2_OffsetPadding_forAlignmentOnly[8];
					U3CnameBufferU3Ee__FixedBuffer_t3D3674F36611E1EC72C60B066C053777C3FA4A58  ___nameBuffer_2_forAlignmentOnly;
				};
			};
		};
		uint8_t QueryKeyboardLayoutCommand_t4D0372BEF388EAF51A5489DFE36E230EB9E25E34__padding[264];
	};

public:
	inline static int32_t get_offset_of_baseCommand_1() { return static_cast<int32_t>(offsetof(QueryKeyboardLayoutCommand_t4D0372BEF388EAF51A5489DFE36E230EB9E25E34, ___baseCommand_1)); }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  get_baseCommand_1() const { return ___baseCommand_1; }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6 * get_address_of_baseCommand_1() { return &___baseCommand_1; }
	inline void set_baseCommand_1(InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  value)
	{
		___baseCommand_1 = value;
	}

	inline static int32_t get_offset_of_nameBuffer_2() { return static_cast<int32_t>(offsetof(QueryKeyboardLayoutCommand_t4D0372BEF388EAF51A5489DFE36E230EB9E25E34, ___nameBuffer_2)); }
	inline U3CnameBufferU3Ee__FixedBuffer_t3D3674F36611E1EC72C60B066C053777C3FA4A58  get_nameBuffer_2() const { return ___nameBuffer_2; }
	inline U3CnameBufferU3Ee__FixedBuffer_t3D3674F36611E1EC72C60B066C053777C3FA4A58 * get_address_of_nameBuffer_2() { return &___nameBuffer_2; }
	inline void set_nameBuffer_2(U3CnameBufferU3Ee__FixedBuffer_t3D3674F36611E1EC72C60B066C053777C3FA4A58  value)
	{
		___nameBuffer_2 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand
struct QueryPairedUserAccountCommand_t76A9DA797460B51A0218A3E0C7CCD51904EA0BF2 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngine.InputSystem.LowLevel.InputDeviceCommand UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand::baseCommand
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___handle_4_OffsetPadding[8];
					// System.UInt64 UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand::handle
					uint64_t ___handle_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___handle_4_OffsetPadding_forAlignmentOnly[8];
					uint64_t ___handle_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___nameBuffer_5_OffsetPadding[16];
					// UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand/<nameBuffer>e__FixedBuffer UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand::nameBuffer
					U3CnameBufferU3Ee__FixedBuffer_tD9BF255EB57D237F741BDA41E2C5DA75788E04D8  ___nameBuffer_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___nameBuffer_5_OffsetPadding_forAlignmentOnly[16];
					U3CnameBufferU3Ee__FixedBuffer_tD9BF255EB57D237F741BDA41E2C5DA75788E04D8  ___nameBuffer_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___idBuffer_6_OffsetPadding[528];
					// UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand/<idBuffer>e__FixedBuffer UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand::idBuffer
					U3CidBufferU3Ee__FixedBuffer_tFC6F6E35417A13005C29EAEAFCDBD7E984AA38B4  ___idBuffer_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___idBuffer_6_OffsetPadding_forAlignmentOnly[528];
					U3CidBufferU3Ee__FixedBuffer_tFC6F6E35417A13005C29EAEAFCDBD7E984AA38B4  ___idBuffer_6_forAlignmentOnly;
				};
			};
		};
		uint8_t QueryPairedUserAccountCommand_t76A9DA797460B51A0218A3E0C7CCD51904EA0BF2__padding[1040];
	};

public:
	inline static int32_t get_offset_of_baseCommand_3() { return static_cast<int32_t>(offsetof(QueryPairedUserAccountCommand_t76A9DA797460B51A0218A3E0C7CCD51904EA0BF2, ___baseCommand_3)); }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  get_baseCommand_3() const { return ___baseCommand_3; }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6 * get_address_of_baseCommand_3() { return &___baseCommand_3; }
	inline void set_baseCommand_3(InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  value)
	{
		___baseCommand_3 = value;
	}

	inline static int32_t get_offset_of_handle_4() { return static_cast<int32_t>(offsetof(QueryPairedUserAccountCommand_t76A9DA797460B51A0218A3E0C7CCD51904EA0BF2, ___handle_4)); }
	inline uint64_t get_handle_4() const { return ___handle_4; }
	inline uint64_t* get_address_of_handle_4() { return &___handle_4; }
	inline void set_handle_4(uint64_t value)
	{
		___handle_4 = value;
	}

	inline static int32_t get_offset_of_nameBuffer_5() { return static_cast<int32_t>(offsetof(QueryPairedUserAccountCommand_t76A9DA797460B51A0218A3E0C7CCD51904EA0BF2, ___nameBuffer_5)); }
	inline U3CnameBufferU3Ee__FixedBuffer_tD9BF255EB57D237F741BDA41E2C5DA75788E04D8  get_nameBuffer_5() const { return ___nameBuffer_5; }
	inline U3CnameBufferU3Ee__FixedBuffer_tD9BF255EB57D237F741BDA41E2C5DA75788E04D8 * get_address_of_nameBuffer_5() { return &___nameBuffer_5; }
	inline void set_nameBuffer_5(U3CnameBufferU3Ee__FixedBuffer_tD9BF255EB57D237F741BDA41E2C5DA75788E04D8  value)
	{
		___nameBuffer_5 = value;
	}

	inline static int32_t get_offset_of_idBuffer_6() { return static_cast<int32_t>(offsetof(QueryPairedUserAccountCommand_t76A9DA797460B51A0218A3E0C7CCD51904EA0BF2, ___idBuffer_6)); }
	inline U3CidBufferU3Ee__FixedBuffer_tFC6F6E35417A13005C29EAEAFCDBD7E984AA38B4  get_idBuffer_6() const { return ___idBuffer_6; }
	inline U3CidBufferU3Ee__FixedBuffer_tFC6F6E35417A13005C29EAEAFCDBD7E984AA38B4 * get_address_of_idBuffer_6() { return &___idBuffer_6; }
	inline void set_idBuffer_6(U3CidBufferU3Ee__FixedBuffer_tFC6F6E35417A13005C29EAEAFCDBD7E984AA38B4  value)
	{
		___idBuffer_6 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.QuerySamplingFrequencyCommand
struct QuerySamplingFrequencyCommand_tAEF128EE401D6A8B73ADEA86810A9DFEDF599625 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngine.InputSystem.LowLevel.InputDeviceCommand UnityEngine.InputSystem.LowLevel.QuerySamplingFrequencyCommand::baseCommand
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___frequency_2_OffsetPadding[8];
					// System.Single UnityEngine.InputSystem.LowLevel.QuerySamplingFrequencyCommand::frequency
					float ___frequency_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___frequency_2_OffsetPadding_forAlignmentOnly[8];
					float ___frequency_2_forAlignmentOnly;
				};
			};
		};
		uint8_t QuerySamplingFrequencyCommand_tAEF128EE401D6A8B73ADEA86810A9DFEDF599625__padding[12];
	};

public:
	inline static int32_t get_offset_of_baseCommand_1() { return static_cast<int32_t>(offsetof(QuerySamplingFrequencyCommand_tAEF128EE401D6A8B73ADEA86810A9DFEDF599625, ___baseCommand_1)); }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  get_baseCommand_1() const { return ___baseCommand_1; }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6 * get_address_of_baseCommand_1() { return &___baseCommand_1; }
	inline void set_baseCommand_1(InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  value)
	{
		___baseCommand_1 = value;
	}

	inline static int32_t get_offset_of_frequency_2() { return static_cast<int32_t>(offsetof(QuerySamplingFrequencyCommand_tAEF128EE401D6A8B73ADEA86810A9DFEDF599625, ___frequency_2)); }
	inline float get_frequency_2() const { return ___frequency_2; }
	inline float* get_address_of_frequency_2() { return &___frequency_2; }
	inline void set_frequency_2(float value)
	{
		___frequency_2 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.RequestResetCommand
struct RequestResetCommand_t40BBC49476A629DDB5CA63C605F09C0E35F8A72B 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngine.InputSystem.LowLevel.InputDeviceCommand UnityEngine.InputSystem.LowLevel.RequestResetCommand::baseCommand
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1_forAlignmentOnly;
				};
			};
		};
		uint8_t RequestResetCommand_t40BBC49476A629DDB5CA63C605F09C0E35F8A72B__padding[8];
	};

public:
	inline static int32_t get_offset_of_baseCommand_1() { return static_cast<int32_t>(offsetof(RequestResetCommand_t40BBC49476A629DDB5CA63C605F09C0E35F8A72B, ___baseCommand_1)); }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  get_baseCommand_1() const { return ___baseCommand_1; }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6 * get_address_of_baseCommand_1() { return &___baseCommand_1; }
	inline void set_baseCommand_1(InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  value)
	{
		___baseCommand_1 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.RequestSyncCommand
struct RequestSyncCommand_tCC9D7315E8DCF44E5451DE4A8A93805C0D3EF56D 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngine.InputSystem.LowLevel.InputDeviceCommand UnityEngine.InputSystem.LowLevel.RequestSyncCommand::baseCommand
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1_forAlignmentOnly;
				};
			};
		};
		uint8_t RequestSyncCommand_tCC9D7315E8DCF44E5451DE4A8A93805C0D3EF56D__padding[8];
	};

public:
	inline static int32_t get_offset_of_baseCommand_1() { return static_cast<int32_t>(offsetof(RequestSyncCommand_tCC9D7315E8DCF44E5451DE4A8A93805C0D3EF56D, ___baseCommand_1)); }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  get_baseCommand_1() const { return ___baseCommand_1; }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6 * get_address_of_baseCommand_1() { return &___baseCommand_1; }
	inline void set_baseCommand_1(InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  value)
	{
		___baseCommand_1 = value;
	}
};


// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// UnityEngine.InputSystem.XR.Haptics.SendBufferedHapticCommand
struct SendBufferedHapticCommand_tA63D8418EFBE9DC3F28D0AC23D42CD4525A869F8 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngine.InputSystem.LowLevel.InputDeviceCommand UnityEngine.InputSystem.XR.Haptics.SendBufferedHapticCommand::baseCommand
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___channel_3_OffsetPadding[8];
					// System.Int32 UnityEngine.InputSystem.XR.Haptics.SendBufferedHapticCommand::channel
					int32_t ___channel_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___channel_3_OffsetPadding_forAlignmentOnly[8];
					int32_t ___channel_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___bufferSize_4_OffsetPadding[12];
					// System.Int32 UnityEngine.InputSystem.XR.Haptics.SendBufferedHapticCommand::bufferSize
					int32_t ___bufferSize_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___bufferSize_4_OffsetPadding_forAlignmentOnly[12];
					int32_t ___bufferSize_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___buffer_5_OffsetPadding[16];
					// UnityEngine.InputSystem.XR.Haptics.SendBufferedHapticCommand/<buffer>e__FixedBuffer UnityEngine.InputSystem.XR.Haptics.SendBufferedHapticCommand::buffer
					U3CbufferU3Ee__FixedBuffer_t26BDAFA49EB5E0301FC1E93B3FB1B2D1814080AB  ___buffer_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___buffer_5_OffsetPadding_forAlignmentOnly[16];
					U3CbufferU3Ee__FixedBuffer_t26BDAFA49EB5E0301FC1E93B3FB1B2D1814080AB  ___buffer_5_forAlignmentOnly;
				};
			};
		};
		uint8_t SendBufferedHapticCommand_tA63D8418EFBE9DC3F28D0AC23D42CD4525A869F8__padding[1040];
	};

public:
	inline static int32_t get_offset_of_baseCommand_2() { return static_cast<int32_t>(offsetof(SendBufferedHapticCommand_tA63D8418EFBE9DC3F28D0AC23D42CD4525A869F8, ___baseCommand_2)); }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  get_baseCommand_2() const { return ___baseCommand_2; }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6 * get_address_of_baseCommand_2() { return &___baseCommand_2; }
	inline void set_baseCommand_2(InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  value)
	{
		___baseCommand_2 = value;
	}

	inline static int32_t get_offset_of_channel_3() { return static_cast<int32_t>(offsetof(SendBufferedHapticCommand_tA63D8418EFBE9DC3F28D0AC23D42CD4525A869F8, ___channel_3)); }
	inline int32_t get_channel_3() const { return ___channel_3; }
	inline int32_t* get_address_of_channel_3() { return &___channel_3; }
	inline void set_channel_3(int32_t value)
	{
		___channel_3 = value;
	}

	inline static int32_t get_offset_of_bufferSize_4() { return static_cast<int32_t>(offsetof(SendBufferedHapticCommand_tA63D8418EFBE9DC3F28D0AC23D42CD4525A869F8, ___bufferSize_4)); }
	inline int32_t get_bufferSize_4() const { return ___bufferSize_4; }
	inline int32_t* get_address_of_bufferSize_4() { return &___bufferSize_4; }
	inline void set_bufferSize_4(int32_t value)
	{
		___bufferSize_4 = value;
	}

	inline static int32_t get_offset_of_buffer_5() { return static_cast<int32_t>(offsetof(SendBufferedHapticCommand_tA63D8418EFBE9DC3F28D0AC23D42CD4525A869F8, ___buffer_5)); }
	inline U3CbufferU3Ee__FixedBuffer_t26BDAFA49EB5E0301FC1E93B3FB1B2D1814080AB  get_buffer_5() const { return ___buffer_5; }
	inline U3CbufferU3Ee__FixedBuffer_t26BDAFA49EB5E0301FC1E93B3FB1B2D1814080AB * get_address_of_buffer_5() { return &___buffer_5; }
	inline void set_buffer_5(U3CbufferU3Ee__FixedBuffer_t26BDAFA49EB5E0301FC1E93B3FB1B2D1814080AB  value)
	{
		___buffer_5 = value;
	}
};


// UnityEngine.InputSystem.XR.Haptics.SendHapticImpulseCommand
struct SendHapticImpulseCommand_t522F98AD1BEC67B5765077DE8F1CE91EAF1959DD 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngine.InputSystem.LowLevel.InputDeviceCommand UnityEngine.InputSystem.XR.Haptics.SendHapticImpulseCommand::baseCommand
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___channel_2_OffsetPadding[8];
					// System.Int32 UnityEngine.InputSystem.XR.Haptics.SendHapticImpulseCommand::channel
					int32_t ___channel_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___channel_2_OffsetPadding_forAlignmentOnly[8];
					int32_t ___channel_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___amplitude_3_OffsetPadding[12];
					// System.Single UnityEngine.InputSystem.XR.Haptics.SendHapticImpulseCommand::amplitude
					float ___amplitude_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___amplitude_3_OffsetPadding_forAlignmentOnly[12];
					float ___amplitude_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___duration_4_OffsetPadding[16];
					// System.Single UnityEngine.InputSystem.XR.Haptics.SendHapticImpulseCommand::duration
					float ___duration_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___duration_4_OffsetPadding_forAlignmentOnly[16];
					float ___duration_4_forAlignmentOnly;
				};
			};
		};
		uint8_t SendHapticImpulseCommand_t522F98AD1BEC67B5765077DE8F1CE91EAF1959DD__padding[20];
	};

public:
	inline static int32_t get_offset_of_baseCommand_1() { return static_cast<int32_t>(offsetof(SendHapticImpulseCommand_t522F98AD1BEC67B5765077DE8F1CE91EAF1959DD, ___baseCommand_1)); }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  get_baseCommand_1() const { return ___baseCommand_1; }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6 * get_address_of_baseCommand_1() { return &___baseCommand_1; }
	inline void set_baseCommand_1(InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  value)
	{
		___baseCommand_1 = value;
	}

	inline static int32_t get_offset_of_channel_2() { return static_cast<int32_t>(offsetof(SendHapticImpulseCommand_t522F98AD1BEC67B5765077DE8F1CE91EAF1959DD, ___channel_2)); }
	inline int32_t get_channel_2() const { return ___channel_2; }
	inline int32_t* get_address_of_channel_2() { return &___channel_2; }
	inline void set_channel_2(int32_t value)
	{
		___channel_2 = value;
	}

	inline static int32_t get_offset_of_amplitude_3() { return static_cast<int32_t>(offsetof(SendHapticImpulseCommand_t522F98AD1BEC67B5765077DE8F1CE91EAF1959DD, ___amplitude_3)); }
	inline float get_amplitude_3() const { return ___amplitude_3; }
	inline float* get_address_of_amplitude_3() { return &___amplitude_3; }
	inline void set_amplitude_3(float value)
	{
		___amplitude_3 = value;
	}

	inline static int32_t get_offset_of_duration_4() { return static_cast<int32_t>(offsetof(SendHapticImpulseCommand_t522F98AD1BEC67B5765077DE8F1CE91EAF1959DD, ___duration_4)); }
	inline float get_duration_4() const { return ___duration_4; }
	inline float* get_address_of_duration_4() { return &___duration_4; }
	inline void set_duration_4(float value)
	{
		___duration_4 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.SetIMECursorPositionCommand
struct SetIMECursorPositionCommand_t0BFEFBE0E5BA47C5992F49357D7B0A21BD210F9E 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngine.InputSystem.LowLevel.InputDeviceCommand UnityEngine.InputSystem.LowLevel.SetIMECursorPositionCommand::baseCommand
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_Position_2_OffsetPadding[8];
					// UnityEngine.Vector2 UnityEngine.InputSystem.LowLevel.SetIMECursorPositionCommand::m_Position
					Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Position_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_Position_2_OffsetPadding_forAlignmentOnly[8];
					Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Position_2_forAlignmentOnly;
				};
			};
		};
		uint8_t SetIMECursorPositionCommand_t0BFEFBE0E5BA47C5992F49357D7B0A21BD210F9E__padding[16];
	};

public:
	inline static int32_t get_offset_of_baseCommand_1() { return static_cast<int32_t>(offsetof(SetIMECursorPositionCommand_t0BFEFBE0E5BA47C5992F49357D7B0A21BD210F9E, ___baseCommand_1)); }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  get_baseCommand_1() const { return ___baseCommand_1; }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6 * get_address_of_baseCommand_1() { return &___baseCommand_1; }
	inline void set_baseCommand_1(InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  value)
	{
		___baseCommand_1 = value;
	}

	inline static int32_t get_offset_of_m_Position_2() { return static_cast<int32_t>(offsetof(SetIMECursorPositionCommand_t0BFEFBE0E5BA47C5992F49357D7B0A21BD210F9E, ___m_Position_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Position_2() const { return ___m_Position_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Position_2() { return &___m_Position_2; }
	inline void set_m_Position_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Position_2 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.SetSamplingFrequencyCommand
struct SetSamplingFrequencyCommand_t8C7DABD34E6D5D9C153C98CEA81CFB0066C8AE20 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngine.InputSystem.LowLevel.InputDeviceCommand UnityEngine.InputSystem.LowLevel.SetSamplingFrequencyCommand::baseCommand
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___frequency_2_OffsetPadding[8];
					// System.Single UnityEngine.InputSystem.LowLevel.SetSamplingFrequencyCommand::frequency
					float ___frequency_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___frequency_2_OffsetPadding_forAlignmentOnly[8];
					float ___frequency_2_forAlignmentOnly;
				};
			};
		};
		uint8_t SetSamplingFrequencyCommand_t8C7DABD34E6D5D9C153C98CEA81CFB0066C8AE20__padding[12];
	};

public:
	inline static int32_t get_offset_of_baseCommand_1() { return static_cast<int32_t>(offsetof(SetSamplingFrequencyCommand_t8C7DABD34E6D5D9C153C98CEA81CFB0066C8AE20, ___baseCommand_1)); }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  get_baseCommand_1() const { return ___baseCommand_1; }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6 * get_address_of_baseCommand_1() { return &___baseCommand_1; }
	inline void set_baseCommand_1(InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  value)
	{
		___baseCommand_1 = value;
	}

	inline static int32_t get_offset_of_frequency_2() { return static_cast<int32_t>(offsetof(SetSamplingFrequencyCommand_t8C7DABD34E6D5D9C153C98CEA81CFB0066C8AE20, ___frequency_2)); }
	inline float get_frequency_2() const { return ___frequency_2; }
	inline float* get_address_of_frequency_2() { return &___frequency_2; }
	inline void set_frequency_2(float value)
	{
		___frequency_2 = value;
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.InputSystem.LowLevel.WarpMousePositionCommand
struct WarpMousePositionCommand_tF0D42DD7CBF72B973B68CF867E5E7EE41FA70AA5 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngine.InputSystem.LowLevel.InputDeviceCommand UnityEngine.InputSystem.LowLevel.WarpMousePositionCommand::baseCommand
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___warpPositionInPlayerDisplaySpace_2_OffsetPadding[8];
					// UnityEngine.Vector2 UnityEngine.InputSystem.LowLevel.WarpMousePositionCommand::warpPositionInPlayerDisplaySpace
					Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___warpPositionInPlayerDisplaySpace_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___warpPositionInPlayerDisplaySpace_2_OffsetPadding_forAlignmentOnly[8];
					Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___warpPositionInPlayerDisplaySpace_2_forAlignmentOnly;
				};
			};
		};
		uint8_t WarpMousePositionCommand_tF0D42DD7CBF72B973B68CF867E5E7EE41FA70AA5__padding[16];
	};

public:
	inline static int32_t get_offset_of_baseCommand_1() { return static_cast<int32_t>(offsetof(WarpMousePositionCommand_tF0D42DD7CBF72B973B68CF867E5E7EE41FA70AA5, ___baseCommand_1)); }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  get_baseCommand_1() const { return ___baseCommand_1; }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6 * get_address_of_baseCommand_1() { return &___baseCommand_1; }
	inline void set_baseCommand_1(InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  value)
	{
		___baseCommand_1 = value;
	}

	inline static int32_t get_offset_of_warpPositionInPlayerDisplaySpace_2() { return static_cast<int32_t>(offsetof(WarpMousePositionCommand_tF0D42DD7CBF72B973B68CF867E5E7EE41FA70AA5, ___warpPositionInPlayerDisplaySpace_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_warpPositionInPlayerDisplaySpace_2() const { return ___warpPositionInPlayerDisplaySpace_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_warpPositionInPlayerDisplaySpace_2() { return &___warpPositionInPlayerDisplaySpace_2; }
	inline void set_warpPositionInPlayerDisplaySpace_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___warpPositionInPlayerDisplaySpace_2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRAnchor
struct XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRAnchor::m_Id
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_Id_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRAnchor::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRAnchor::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRAnchor::m_NativePtr
	intptr_t ___m_NativePtr_4;
	// System.Guid UnityEngine.XR.ARSubsystems.XRAnchor::m_SessionId
	Guid_t  ___m_SessionId_5;

public:
	inline static int32_t get_offset_of_m_Id_1() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_Id_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_Id_1() const { return ___m_Id_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_Id_1() { return &___m_Id_1; }
	inline void set_m_Id_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_Id_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_Pose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_3() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_TrackingState_3)); }
	inline int32_t get_m_TrackingState_3() const { return ___m_TrackingState_3; }
	inline int32_t* get_address_of_m_TrackingState_3() { return &___m_TrackingState_3; }
	inline void set_m_TrackingState_3(int32_t value)
	{
		___m_TrackingState_3 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_4() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_NativePtr_4)); }
	inline intptr_t get_m_NativePtr_4() const { return ___m_NativePtr_4; }
	inline intptr_t* get_address_of_m_NativePtr_4() { return &___m_NativePtr_4; }
	inline void set_m_NativePtr_4(intptr_t value)
	{
		___m_NativePtr_4 = value;
	}

	inline static int32_t get_offset_of_m_SessionId_5() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_SessionId_5)); }
	inline Guid_t  get_m_SessionId_5() const { return ___m_SessionId_5; }
	inline Guid_t * get_address_of_m_SessionId_5() { return &___m_SessionId_5; }
	inline void set_m_SessionId_5(Guid_t  value)
	{
		___m_SessionId_5 = value;
	}
};

struct XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRAnchor UnityEngine.XR.ARSubsystems.XRAnchor::s_Default
	XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_StaticFields, ___s_Default_0)); }
	inline XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  get_s_Default_0() const { return ___s_Default_0; }
	inline XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRFace
struct XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRFace::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRFace::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_1;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRFace::m_TrackingState
	int32_t ___m_TrackingState_2;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRFace::m_NativePtr
	intptr_t ___m_NativePtr_3;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRFace::m_LeftEyePose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_LeftEyePose_4;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRFace::m_RightEyePose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_RightEyePose_5;
	// UnityEngine.Vector3 UnityEngine.XR.ARSubsystems.XRFace::m_FixationPoint
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_FixationPoint_6;

public:
	inline static int32_t get_offset_of_m_TrackableId_0() { return static_cast<int32_t>(offsetof(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599, ___m_TrackableId_0)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_0() const { return ___m_TrackableId_0; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_0() { return &___m_TrackableId_0; }
	inline void set_m_TrackableId_0(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_m_Pose_1() { return static_cast<int32_t>(offsetof(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599, ___m_Pose_1)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_1() const { return ___m_Pose_1; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_1() { return &___m_Pose_1; }
	inline void set_m_Pose_1(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_1 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_2() { return static_cast<int32_t>(offsetof(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599, ___m_TrackingState_2)); }
	inline int32_t get_m_TrackingState_2() const { return ___m_TrackingState_2; }
	inline int32_t* get_address_of_m_TrackingState_2() { return &___m_TrackingState_2; }
	inline void set_m_TrackingState_2(int32_t value)
	{
		___m_TrackingState_2 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_3() { return static_cast<int32_t>(offsetof(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599, ___m_NativePtr_3)); }
	inline intptr_t get_m_NativePtr_3() const { return ___m_NativePtr_3; }
	inline intptr_t* get_address_of_m_NativePtr_3() { return &___m_NativePtr_3; }
	inline void set_m_NativePtr_3(intptr_t value)
	{
		___m_NativePtr_3 = value;
	}

	inline static int32_t get_offset_of_m_LeftEyePose_4() { return static_cast<int32_t>(offsetof(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599, ___m_LeftEyePose_4)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_LeftEyePose_4() const { return ___m_LeftEyePose_4; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_LeftEyePose_4() { return &___m_LeftEyePose_4; }
	inline void set_m_LeftEyePose_4(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_LeftEyePose_4 = value;
	}

	inline static int32_t get_offset_of_m_RightEyePose_5() { return static_cast<int32_t>(offsetof(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599, ___m_RightEyePose_5)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_RightEyePose_5() const { return ___m_RightEyePose_5; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_RightEyePose_5() { return &___m_RightEyePose_5; }
	inline void set_m_RightEyePose_5(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_RightEyePose_5 = value;
	}

	inline static int32_t get_offset_of_m_FixationPoint_6() { return static_cast<int32_t>(offsetof(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599, ___m_FixationPoint_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_FixationPoint_6() const { return ___m_FixationPoint_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_FixationPoint_6() { return &___m_FixationPoint_6; }
	inline void set_m_FixationPoint_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_FixationPoint_6 = value;
	}
};

struct XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRFace UnityEngine.XR.ARSubsystems.XRFace::s_Default
	XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599  ___s_Default_7;

public:
	inline static int32_t get_offset_of_s_Default_7() { return static_cast<int32_t>(offsetof(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599_StaticFields, ___s_Default_7)); }
	inline XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599  get_s_Default_7() const { return ___s_Default_7; }
	inline XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599 * get_address_of_s_Default_7() { return &___s_Default_7; }
	inline void set_s_Default_7(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599  value)
	{
		___s_Default_7 = value;
	}
};


// UnityEngine.InputSystem.XR.XRFeatureDescriptor
struct XRFeatureDescriptor_t03C6C68EB127721DF9DED1F4FDD72344625544D8 
{
public:
	// System.String UnityEngine.InputSystem.XR.XRFeatureDescriptor::name
	String_t* ___name_0;
	// System.Collections.Generic.List`1<UnityEngine.InputSystem.XR.UsageHint> UnityEngine.InputSystem.XR.XRFeatureDescriptor::usageHints
	List_1_t4CDCC087E13A6B3A7AEEB086AB0496DA6CAB31E5 * ___usageHints_1;
	// UnityEngine.InputSystem.XR.FeatureType UnityEngine.InputSystem.XR.XRFeatureDescriptor::featureType
	int32_t ___featureType_2;
	// System.UInt32 UnityEngine.InputSystem.XR.XRFeatureDescriptor::customSize
	uint32_t ___customSize_3;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(XRFeatureDescriptor_t03C6C68EB127721DF9DED1F4FDD72344625544D8, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_usageHints_1() { return static_cast<int32_t>(offsetof(XRFeatureDescriptor_t03C6C68EB127721DF9DED1F4FDD72344625544D8, ___usageHints_1)); }
	inline List_1_t4CDCC087E13A6B3A7AEEB086AB0496DA6CAB31E5 * get_usageHints_1() const { return ___usageHints_1; }
	inline List_1_t4CDCC087E13A6B3A7AEEB086AB0496DA6CAB31E5 ** get_address_of_usageHints_1() { return &___usageHints_1; }
	inline void set_usageHints_1(List_1_t4CDCC087E13A6B3A7AEEB086AB0496DA6CAB31E5 * value)
	{
		___usageHints_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___usageHints_1), (void*)value);
	}

	inline static int32_t get_offset_of_featureType_2() { return static_cast<int32_t>(offsetof(XRFeatureDescriptor_t03C6C68EB127721DF9DED1F4FDD72344625544D8, ___featureType_2)); }
	inline int32_t get_featureType_2() const { return ___featureType_2; }
	inline int32_t* get_address_of_featureType_2() { return &___featureType_2; }
	inline void set_featureType_2(int32_t value)
	{
		___featureType_2 = value;
	}

	inline static int32_t get_offset_of_customSize_3() { return static_cast<int32_t>(offsetof(XRFeatureDescriptor_t03C6C68EB127721DF9DED1F4FDD72344625544D8, ___customSize_3)); }
	inline uint32_t get_customSize_3() const { return ___customSize_3; }
	inline uint32_t* get_address_of_customSize_3() { return &___customSize_3; }
	inline void set_customSize_3(uint32_t value)
	{
		___customSize_3 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.XR.XRFeatureDescriptor
struct XRFeatureDescriptor_t03C6C68EB127721DF9DED1F4FDD72344625544D8_marshaled_pinvoke
{
	char* ___name_0;
	List_1_t4CDCC087E13A6B3A7AEEB086AB0496DA6CAB31E5 * ___usageHints_1;
	int32_t ___featureType_2;
	uint32_t ___customSize_3;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.XR.XRFeatureDescriptor
struct XRFeatureDescriptor_t03C6C68EB127721DF9DED1F4FDD72344625544D8_marshaled_com
{
	Il2CppChar* ___name_0;
	List_1_t4CDCC087E13A6B3A7AEEB086AB0496DA6CAB31E5 * ___usageHints_1;
	int32_t ___featureType_2;
	uint32_t ___customSize_3;
};

// UnityEngine.XR.ARSubsystems.XRHumanBody
struct XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRHumanBody::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRHumanBody::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_1;
	// System.Single UnityEngine.XR.ARSubsystems.XRHumanBody::m_EstimatedHeightScaleFactor
	float ___m_EstimatedHeightScaleFactor_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRHumanBody::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRHumanBody::m_NativePtr
	intptr_t ___m_NativePtr_4;

public:
	inline static int32_t get_offset_of_m_TrackableId_0() { return static_cast<int32_t>(offsetof(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B, ___m_TrackableId_0)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_0() const { return ___m_TrackableId_0; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_0() { return &___m_TrackableId_0; }
	inline void set_m_TrackableId_0(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_m_Pose_1() { return static_cast<int32_t>(offsetof(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B, ___m_Pose_1)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_1() const { return ___m_Pose_1; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_1() { return &___m_Pose_1; }
	inline void set_m_Pose_1(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_1 = value;
	}

	inline static int32_t get_offset_of_m_EstimatedHeightScaleFactor_2() { return static_cast<int32_t>(offsetof(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B, ___m_EstimatedHeightScaleFactor_2)); }
	inline float get_m_EstimatedHeightScaleFactor_2() const { return ___m_EstimatedHeightScaleFactor_2; }
	inline float* get_address_of_m_EstimatedHeightScaleFactor_2() { return &___m_EstimatedHeightScaleFactor_2; }
	inline void set_m_EstimatedHeightScaleFactor_2(float value)
	{
		___m_EstimatedHeightScaleFactor_2 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_3() { return static_cast<int32_t>(offsetof(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B, ___m_TrackingState_3)); }
	inline int32_t get_m_TrackingState_3() const { return ___m_TrackingState_3; }
	inline int32_t* get_address_of_m_TrackingState_3() { return &___m_TrackingState_3; }
	inline void set_m_TrackingState_3(int32_t value)
	{
		___m_TrackingState_3 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_4() { return static_cast<int32_t>(offsetof(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B, ___m_NativePtr_4)); }
	inline intptr_t get_m_NativePtr_4() const { return ___m_NativePtr_4; }
	inline intptr_t* get_address_of_m_NativePtr_4() { return &___m_NativePtr_4; }
	inline void set_m_NativePtr_4(intptr_t value)
	{
		___m_NativePtr_4 = value;
	}
};

struct XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRHumanBody UnityEngine.XR.ARSubsystems.XRHumanBody::s_Default
	XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  ___s_Default_5;

public:
	inline static int32_t get_offset_of_s_Default_5() { return static_cast<int32_t>(offsetof(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B_StaticFields, ___s_Default_5)); }
	inline XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  get_s_Default_5() const { return ___s_Default_5; }
	inline XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B * get_address_of_s_Default_5() { return &___s_Default_5; }
	inline void set_s_Default_5(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  value)
	{
		___s_Default_5 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRHumanBodyJoint
struct XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::m_Index
	int32_t ___m_Index_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::m_ParentIndex
	int32_t ___m_ParentIndex_1;
	// UnityEngine.Vector3 UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::m_LocalScale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_LocalScale_2;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::m_LocalPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_LocalPose_3;
	// UnityEngine.Vector3 UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::m_AnchorScale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_AnchorScale_4;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::m_AnchorPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_AnchorPose_5;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::m_Tracked
	int32_t ___m_Tracked_6;

public:
	inline static int32_t get_offset_of_m_Index_0() { return static_cast<int32_t>(offsetof(XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4, ___m_Index_0)); }
	inline int32_t get_m_Index_0() const { return ___m_Index_0; }
	inline int32_t* get_address_of_m_Index_0() { return &___m_Index_0; }
	inline void set_m_Index_0(int32_t value)
	{
		___m_Index_0 = value;
	}

	inline static int32_t get_offset_of_m_ParentIndex_1() { return static_cast<int32_t>(offsetof(XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4, ___m_ParentIndex_1)); }
	inline int32_t get_m_ParentIndex_1() const { return ___m_ParentIndex_1; }
	inline int32_t* get_address_of_m_ParentIndex_1() { return &___m_ParentIndex_1; }
	inline void set_m_ParentIndex_1(int32_t value)
	{
		___m_ParentIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_LocalScale_2() { return static_cast<int32_t>(offsetof(XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4, ___m_LocalScale_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_LocalScale_2() const { return ___m_LocalScale_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_LocalScale_2() { return &___m_LocalScale_2; }
	inline void set_m_LocalScale_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_LocalScale_2 = value;
	}

	inline static int32_t get_offset_of_m_LocalPose_3() { return static_cast<int32_t>(offsetof(XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4, ___m_LocalPose_3)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_LocalPose_3() const { return ___m_LocalPose_3; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_LocalPose_3() { return &___m_LocalPose_3; }
	inline void set_m_LocalPose_3(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_LocalPose_3 = value;
	}

	inline static int32_t get_offset_of_m_AnchorScale_4() { return static_cast<int32_t>(offsetof(XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4, ___m_AnchorScale_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_AnchorScale_4() const { return ___m_AnchorScale_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_AnchorScale_4() { return &___m_AnchorScale_4; }
	inline void set_m_AnchorScale_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_AnchorScale_4 = value;
	}

	inline static int32_t get_offset_of_m_AnchorPose_5() { return static_cast<int32_t>(offsetof(XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4, ___m_AnchorPose_5)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_AnchorPose_5() const { return ___m_AnchorPose_5; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_AnchorPose_5() { return &___m_AnchorPose_5; }
	inline void set_m_AnchorPose_5(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_AnchorPose_5 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_6() { return static_cast<int32_t>(offsetof(XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4, ___m_Tracked_6)); }
	inline int32_t get_m_Tracked_6() const { return ___m_Tracked_6; }
	inline int32_t* get_address_of_m_Tracked_6() { return &___m_Tracked_6; }
	inline void set_m_Tracked_6(int32_t value)
	{
		___m_Tracked_6 = value;
	}
};


// UnityEngine.XR.XRNodeState
struct XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 
{
public:
	// UnityEngine.XR.XRNode UnityEngine.XR.XRNodeState::m_Type
	int32_t ___m_Type_0;
	// UnityEngine.XR.AvailableTrackingData UnityEngine.XR.XRNodeState::m_AvailableFields
	int32_t ___m_AvailableFields_1;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_Position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Position_2;
	// UnityEngine.Quaternion UnityEngine.XR.XRNodeState::m_Rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___m_Rotation_3;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_Velocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Velocity_4;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_AngularVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_AngularVelocity_5;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_Acceleration
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Acceleration_6;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_AngularAcceleration
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_AngularAcceleration_7;
	// System.Int32 UnityEngine.XR.XRNodeState::m_Tracked
	int32_t ___m_Tracked_8;
	// System.UInt64 UnityEngine.XR.XRNodeState::m_UniqueID
	uint64_t ___m_UniqueID_9;

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_AvailableFields_1() { return static_cast<int32_t>(offsetof(XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33, ___m_AvailableFields_1)); }
	inline int32_t get_m_AvailableFields_1() const { return ___m_AvailableFields_1; }
	inline int32_t* get_address_of_m_AvailableFields_1() { return &___m_AvailableFields_1; }
	inline void set_m_AvailableFields_1(int32_t value)
	{
		___m_AvailableFields_1 = value;
	}

	inline static int32_t get_offset_of_m_Position_2() { return static_cast<int32_t>(offsetof(XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33, ___m_Position_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Position_2() const { return ___m_Position_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Position_2() { return &___m_Position_2; }
	inline void set_m_Position_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Position_2 = value;
	}

	inline static int32_t get_offset_of_m_Rotation_3() { return static_cast<int32_t>(offsetof(XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33, ___m_Rotation_3)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_m_Rotation_3() const { return ___m_Rotation_3; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_m_Rotation_3() { return &___m_Rotation_3; }
	inline void set_m_Rotation_3(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___m_Rotation_3 = value;
	}

	inline static int32_t get_offset_of_m_Velocity_4() { return static_cast<int32_t>(offsetof(XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33, ___m_Velocity_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Velocity_4() const { return ___m_Velocity_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Velocity_4() { return &___m_Velocity_4; }
	inline void set_m_Velocity_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Velocity_4 = value;
	}

	inline static int32_t get_offset_of_m_AngularVelocity_5() { return static_cast<int32_t>(offsetof(XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33, ___m_AngularVelocity_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_AngularVelocity_5() const { return ___m_AngularVelocity_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_AngularVelocity_5() { return &___m_AngularVelocity_5; }
	inline void set_m_AngularVelocity_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_AngularVelocity_5 = value;
	}

	inline static int32_t get_offset_of_m_Acceleration_6() { return static_cast<int32_t>(offsetof(XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33, ___m_Acceleration_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Acceleration_6() const { return ___m_Acceleration_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Acceleration_6() { return &___m_Acceleration_6; }
	inline void set_m_Acceleration_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Acceleration_6 = value;
	}

	inline static int32_t get_offset_of_m_AngularAcceleration_7() { return static_cast<int32_t>(offsetof(XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33, ___m_AngularAcceleration_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_AngularAcceleration_7() const { return ___m_AngularAcceleration_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_AngularAcceleration_7() { return &___m_AngularAcceleration_7; }
	inline void set_m_AngularAcceleration_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_AngularAcceleration_7 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_8() { return static_cast<int32_t>(offsetof(XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33, ___m_Tracked_8)); }
	inline int32_t get_m_Tracked_8() const { return ___m_Tracked_8; }
	inline int32_t* get_address_of_m_Tracked_8() { return &___m_Tracked_8; }
	inline void set_m_Tracked_8(int32_t value)
	{
		___m_Tracked_8 = value;
	}

	inline static int32_t get_offset_of_m_UniqueID_9() { return static_cast<int32_t>(offsetof(XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33, ___m_UniqueID_9)); }
	inline uint64_t get_m_UniqueID_9() const { return ___m_UniqueID_9; }
	inline uint64_t* get_address_of_m_UniqueID_9() { return &___m_UniqueID_9; }
	inline void set_m_UniqueID_9(uint64_t value)
	{
		___m_UniqueID_9 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem
struct XRObjectTrackingSubsystem_t3F31F4C8BCA868FE69BD8EC75BA5A1116026C881  : public TrackingSubsystem_4_t1E41FDFF37B1529EED554D89481040B067E300EB
{
public:
	// UnityEngine.XR.ARSubsystems.XRReferenceObjectLibrary UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem::m_Library
	XRReferenceObjectLibrary_t07704B2996E507F23EE3C99CFC3BB73A83C99A7C * ___m_Library_4;

public:
	inline static int32_t get_offset_of_m_Library_4() { return static_cast<int32_t>(offsetof(XRObjectTrackingSubsystem_t3F31F4C8BCA868FE69BD8EC75BA5A1116026C881, ___m_Library_4)); }
	inline XRReferenceObjectLibrary_t07704B2996E507F23EE3C99CFC3BB73A83C99A7C * get_m_Library_4() const { return ___m_Library_4; }
	inline XRReferenceObjectLibrary_t07704B2996E507F23EE3C99CFC3BB73A83C99A7C ** get_address_of_m_Library_4() { return &___m_Library_4; }
	inline void set_m_Library_4(XRReferenceObjectLibrary_t07704B2996E507F23EE3C99CFC3BB73A83C99A7C * value)
	{
		___m_Library_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Library_4), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.XRParticipant
struct XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRParticipant::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRParticipant::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_1;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRParticipant::m_TrackingState
	int32_t ___m_TrackingState_2;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRParticipant::m_NativePtr
	intptr_t ___m_NativePtr_3;
	// System.Guid UnityEngine.XR.ARSubsystems.XRParticipant::m_SessionId
	Guid_t  ___m_SessionId_4;

public:
	inline static int32_t get_offset_of_m_TrackableId_0() { return static_cast<int32_t>(offsetof(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F, ___m_TrackableId_0)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_0() const { return ___m_TrackableId_0; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_0() { return &___m_TrackableId_0; }
	inline void set_m_TrackableId_0(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_m_Pose_1() { return static_cast<int32_t>(offsetof(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F, ___m_Pose_1)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_1() const { return ___m_Pose_1; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_1() { return &___m_Pose_1; }
	inline void set_m_Pose_1(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_1 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_2() { return static_cast<int32_t>(offsetof(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F, ___m_TrackingState_2)); }
	inline int32_t get_m_TrackingState_2() const { return ___m_TrackingState_2; }
	inline int32_t* get_address_of_m_TrackingState_2() { return &___m_TrackingState_2; }
	inline void set_m_TrackingState_2(int32_t value)
	{
		___m_TrackingState_2 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_3() { return static_cast<int32_t>(offsetof(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F, ___m_NativePtr_3)); }
	inline intptr_t get_m_NativePtr_3() const { return ___m_NativePtr_3; }
	inline intptr_t* get_address_of_m_NativePtr_3() { return &___m_NativePtr_3; }
	inline void set_m_NativePtr_3(intptr_t value)
	{
		___m_NativePtr_3 = value;
	}

	inline static int32_t get_offset_of_m_SessionId_4() { return static_cast<int32_t>(offsetof(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F, ___m_SessionId_4)); }
	inline Guid_t  get_m_SessionId_4() const { return ___m_SessionId_4; }
	inline Guid_t * get_address_of_m_SessionId_4() { return &___m_SessionId_4; }
	inline void set_m_SessionId_4(Guid_t  value)
	{
		___m_SessionId_4 = value;
	}
};

struct XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRParticipant UnityEngine.XR.ARSubsystems.XRParticipant::k_Default
	XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  ___k_Default_5;

public:
	inline static int32_t get_offset_of_k_Default_5() { return static_cast<int32_t>(offsetof(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F_StaticFields, ___k_Default_5)); }
	inline XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  get_k_Default_5() const { return ___k_Default_5; }
	inline XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F * get_address_of_k_Default_5() { return &___k_Default_5; }
	inline void set_k_Default_5(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  value)
	{
		___k_Default_5 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor
struct XRParticipantSubsystemDescriptor_t533EE70DC8D4B105B9C87B76D35A7D59A84BCA55  : public SubsystemDescriptorWithProvider_2_t43C05E9C3928E04822F2DA791FFAC4C140DF10A5
{
public:
	// UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor/Capabilities UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor::<capabilities>k__BackingField
	int32_t ___U3CcapabilitiesU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CcapabilitiesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(XRParticipantSubsystemDescriptor_t533EE70DC8D4B105B9C87B76D35A7D59A84BCA55, ___U3CcapabilitiesU3Ek__BackingField_3)); }
	inline int32_t get_U3CcapabilitiesU3Ek__BackingField_3() const { return ___U3CcapabilitiesU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcapabilitiesU3Ek__BackingField_3() { return &___U3CcapabilitiesU3Ek__BackingField_3; }
	inline void set_U3CcapabilitiesU3Ek__BackingField_3(int32_t value)
	{
		___U3CcapabilitiesU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRPointCloud
struct XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRPointCloud::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRPointCloud::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRPointCloud::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRPointCloud::m_NativePtr
	intptr_t ___m_NativePtr_4;

public:
	inline static int32_t get_offset_of_m_TrackableId_1() { return static_cast<int32_t>(offsetof(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2, ___m_TrackableId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_1() const { return ___m_TrackableId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_1() { return &___m_TrackableId_1; }
	inline void set_m_TrackableId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2, ___m_Pose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_3() { return static_cast<int32_t>(offsetof(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2, ___m_TrackingState_3)); }
	inline int32_t get_m_TrackingState_3() const { return ___m_TrackingState_3; }
	inline int32_t* get_address_of_m_TrackingState_3() { return &___m_TrackingState_3; }
	inline void set_m_TrackingState_3(int32_t value)
	{
		___m_TrackingState_3 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_4() { return static_cast<int32_t>(offsetof(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2, ___m_NativePtr_4)); }
	inline intptr_t get_m_NativePtr_4() const { return ___m_NativePtr_4; }
	inline intptr_t* get_address_of_m_NativePtr_4() { return &___m_NativePtr_4; }
	inline void set_m_NativePtr_4(intptr_t value)
	{
		___m_NativePtr_4 = value;
	}
};

struct XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRPointCloud UnityEngine.XR.ARSubsystems.XRPointCloud::s_Default
	XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2_StaticFields, ___s_Default_0)); }
	inline XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  get_s_Default_0() const { return ___s_Default_0; }
	inline XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRRaycast
struct XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycast::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycast::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRRaycast::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRRaycast::m_NativePtr
	intptr_t ___m_NativePtr_4;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycast::m_Distance
	float ___m_Distance_5;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycast::m_HitTrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_HitTrackableId_6;

public:
	inline static int32_t get_offset_of_m_TrackableId_1() { return static_cast<int32_t>(offsetof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55, ___m_TrackableId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_1() const { return ___m_TrackableId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_1() { return &___m_TrackableId_1; }
	inline void set_m_TrackableId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55, ___m_Pose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_3() { return static_cast<int32_t>(offsetof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55, ___m_TrackingState_3)); }
	inline int32_t get_m_TrackingState_3() const { return ___m_TrackingState_3; }
	inline int32_t* get_address_of_m_TrackingState_3() { return &___m_TrackingState_3; }
	inline void set_m_TrackingState_3(int32_t value)
	{
		___m_TrackingState_3 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_4() { return static_cast<int32_t>(offsetof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55, ___m_NativePtr_4)); }
	inline intptr_t get_m_NativePtr_4() const { return ___m_NativePtr_4; }
	inline intptr_t* get_address_of_m_NativePtr_4() { return &___m_NativePtr_4; }
	inline void set_m_NativePtr_4(intptr_t value)
	{
		___m_NativePtr_4 = value;
	}

	inline static int32_t get_offset_of_m_Distance_5() { return static_cast<int32_t>(offsetof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55, ___m_Distance_5)); }
	inline float get_m_Distance_5() const { return ___m_Distance_5; }
	inline float* get_address_of_m_Distance_5() { return &___m_Distance_5; }
	inline void set_m_Distance_5(float value)
	{
		___m_Distance_5 = value;
	}

	inline static int32_t get_offset_of_m_HitTrackableId_6() { return static_cast<int32_t>(offsetof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55, ___m_HitTrackableId_6)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_HitTrackableId_6() const { return ___m_HitTrackableId_6; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_HitTrackableId_6() { return &___m_HitTrackableId_6; }
	inline void set_m_HitTrackableId_6(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_HitTrackableId_6 = value;
	}
};

struct XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRRaycast UnityEngine.XR.ARSubsystems.XRRaycast::s_Default
	XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_StaticFields, ___s_Default_0)); }
	inline XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  get_s_Default_0() const { return ___s_Default_0; }
	inline XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRRaycastHit
struct XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycastHit::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_2;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastHit::m_HitType
	int32_t ___m_HitType_4;

public:
	inline static int32_t get_offset_of_m_TrackableId_1() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB, ___m_TrackableId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_1() const { return ___m_TrackableId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_1() { return &___m_TrackableId_1; }
	inline void set_m_TrackableId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB, ___m_Pose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_HitType_4() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB, ___m_HitType_4)); }
	inline int32_t get_m_HitType_4() const { return ___m_HitType_4; }
	inline int32_t* get_address_of_m_HitType_4() { return &___m_HitType_4; }
	inline void set_m_HitType_4(int32_t value)
	{
		___m_HitType_4 = value;
	}
};

struct XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARSubsystems.XRRaycastHit::s_Default
	XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_StaticFields, ___s_Default_0)); }
	inline XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  get_s_Default_0() const { return ___s_Default_0; }
	inline XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRReferencePoint
struct XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRReferencePoint::m_Id
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_Id_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRReferencePoint::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRReferencePoint::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRReferencePoint::m_NativePtr
	intptr_t ___m_NativePtr_4;
	// System.Guid UnityEngine.XR.ARSubsystems.XRReferencePoint::m_SessionId
	Guid_t  ___m_SessionId_5;

public:
	inline static int32_t get_offset_of_m_Id_1() { return static_cast<int32_t>(offsetof(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634, ___m_Id_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_Id_1() const { return ___m_Id_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_Id_1() { return &___m_Id_1; }
	inline void set_m_Id_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_Id_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634, ___m_Pose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_3() { return static_cast<int32_t>(offsetof(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634, ___m_TrackingState_3)); }
	inline int32_t get_m_TrackingState_3() const { return ___m_TrackingState_3; }
	inline int32_t* get_address_of_m_TrackingState_3() { return &___m_TrackingState_3; }
	inline void set_m_TrackingState_3(int32_t value)
	{
		___m_TrackingState_3 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_4() { return static_cast<int32_t>(offsetof(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634, ___m_NativePtr_4)); }
	inline intptr_t get_m_NativePtr_4() const { return ___m_NativePtr_4; }
	inline intptr_t* get_address_of_m_NativePtr_4() { return &___m_NativePtr_4; }
	inline void set_m_NativePtr_4(intptr_t value)
	{
		___m_NativePtr_4 = value;
	}

	inline static int32_t get_offset_of_m_SessionId_5() { return static_cast<int32_t>(offsetof(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634, ___m_SessionId_5)); }
	inline Guid_t  get_m_SessionId_5() const { return ___m_SessionId_5; }
	inline Guid_t * get_address_of_m_SessionId_5() { return &___m_SessionId_5; }
	inline void set_m_SessionId_5(Guid_t  value)
	{
		___m_SessionId_5 = value;
	}
};

struct XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRReferencePoint UnityEngine.XR.ARSubsystems.XRReferencePoint::s_Default
	XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634_StaticFields, ___s_Default_0)); }
	inline XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634  get_s_Default_0() const { return ___s_Default_0; }
	inline XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRTextureDescriptor
struct XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 
{
public:
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_NativeTexture
	intptr_t ___m_NativeTexture_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Width
	int32_t ___m_Width_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Height
	int32_t ___m_Height_2;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_MipmapCount
	int32_t ___m_MipmapCount_3;
	// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Format
	int32_t ___m_Format_4;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_PropertyNameId
	int32_t ___m_PropertyNameId_5;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Depth
	int32_t ___m_Depth_6;
	// UnityEngine.Rendering.TextureDimension UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Dimension
	int32_t ___m_Dimension_7;

public:
	inline static int32_t get_offset_of_m_NativeTexture_0() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_NativeTexture_0)); }
	inline intptr_t get_m_NativeTexture_0() const { return ___m_NativeTexture_0; }
	inline intptr_t* get_address_of_m_NativeTexture_0() { return &___m_NativeTexture_0; }
	inline void set_m_NativeTexture_0(intptr_t value)
	{
		___m_NativeTexture_0 = value;
	}

	inline static int32_t get_offset_of_m_Width_1() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_Width_1)); }
	inline int32_t get_m_Width_1() const { return ___m_Width_1; }
	inline int32_t* get_address_of_m_Width_1() { return &___m_Width_1; }
	inline void set_m_Width_1(int32_t value)
	{
		___m_Width_1 = value;
	}

	inline static int32_t get_offset_of_m_Height_2() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_Height_2)); }
	inline int32_t get_m_Height_2() const { return ___m_Height_2; }
	inline int32_t* get_address_of_m_Height_2() { return &___m_Height_2; }
	inline void set_m_Height_2(int32_t value)
	{
		___m_Height_2 = value;
	}

	inline static int32_t get_offset_of_m_MipmapCount_3() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_MipmapCount_3)); }
	inline int32_t get_m_MipmapCount_3() const { return ___m_MipmapCount_3; }
	inline int32_t* get_address_of_m_MipmapCount_3() { return &___m_MipmapCount_3; }
	inline void set_m_MipmapCount_3(int32_t value)
	{
		___m_MipmapCount_3 = value;
	}

	inline static int32_t get_offset_of_m_Format_4() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_Format_4)); }
	inline int32_t get_m_Format_4() const { return ___m_Format_4; }
	inline int32_t* get_address_of_m_Format_4() { return &___m_Format_4; }
	inline void set_m_Format_4(int32_t value)
	{
		___m_Format_4 = value;
	}

	inline static int32_t get_offset_of_m_PropertyNameId_5() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_PropertyNameId_5)); }
	inline int32_t get_m_PropertyNameId_5() const { return ___m_PropertyNameId_5; }
	inline int32_t* get_address_of_m_PropertyNameId_5() { return &___m_PropertyNameId_5; }
	inline void set_m_PropertyNameId_5(int32_t value)
	{
		___m_PropertyNameId_5 = value;
	}

	inline static int32_t get_offset_of_m_Depth_6() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_Depth_6)); }
	inline int32_t get_m_Depth_6() const { return ___m_Depth_6; }
	inline int32_t* get_address_of_m_Depth_6() { return &___m_Depth_6; }
	inline void set_m_Depth_6(int32_t value)
	{
		___m_Depth_6 = value;
	}

	inline static int32_t get_offset_of_m_Dimension_7() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_Dimension_7)); }
	inline int32_t get_m_Dimension_7() const { return ___m_Dimension_7; }
	inline int32_t* get_address_of_m_Dimension_7() { return &___m_Dimension_7; }
	inline void set_m_Dimension_7(int32_t value)
	{
		___m_Dimension_7 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRTrackedImage
struct XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Id
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_Id_1;
	// System.Guid UnityEngine.XR.ARSubsystems.XRTrackedImage::m_SourceImageId
	Guid_t  ___m_SourceImageId_2;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_3;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Size
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Size_4;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRTrackedImage::m_TrackingState
	int32_t ___m_TrackingState_5;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTrackedImage::m_NativePtr
	intptr_t ___m_NativePtr_6;

public:
	inline static int32_t get_offset_of_m_Id_1() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F, ___m_Id_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_Id_1() const { return ___m_Id_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_Id_1() { return &___m_Id_1; }
	inline void set_m_Id_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_Id_1 = value;
	}

	inline static int32_t get_offset_of_m_SourceImageId_2() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F, ___m_SourceImageId_2)); }
	inline Guid_t  get_m_SourceImageId_2() const { return ___m_SourceImageId_2; }
	inline Guid_t * get_address_of_m_SourceImageId_2() { return &___m_SourceImageId_2; }
	inline void set_m_SourceImageId_2(Guid_t  value)
	{
		___m_SourceImageId_2 = value;
	}

	inline static int32_t get_offset_of_m_Pose_3() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F, ___m_Pose_3)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_3() const { return ___m_Pose_3; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_3() { return &___m_Pose_3; }
	inline void set_m_Pose_3(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_3 = value;
	}

	inline static int32_t get_offset_of_m_Size_4() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F, ___m_Size_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Size_4() const { return ___m_Size_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Size_4() { return &___m_Size_4; }
	inline void set_m_Size_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Size_4 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_5() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F, ___m_TrackingState_5)); }
	inline int32_t get_m_TrackingState_5() const { return ___m_TrackingState_5; }
	inline int32_t* get_address_of_m_TrackingState_5() { return &___m_TrackingState_5; }
	inline void set_m_TrackingState_5(int32_t value)
	{
		___m_TrackingState_5 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_6() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F, ___m_NativePtr_6)); }
	inline intptr_t get_m_NativePtr_6() const { return ___m_NativePtr_6; }
	inline intptr_t* get_address_of_m_NativePtr_6() { return &___m_NativePtr_6; }
	inline void set_m_NativePtr_6(intptr_t value)
	{
		___m_NativePtr_6 = value;
	}
};

struct XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRTrackedImage UnityEngine.XR.ARSubsystems.XRTrackedImage::s_Default
	XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F_StaticFields, ___s_Default_0)); }
	inline XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  get_s_Default_0() const { return ___s_Default_0; }
	inline XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRTrackedObject
struct XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRTrackedObject::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRTrackedObject::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_1;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRTrackedObject::m_TrackingState
	int32_t ___m_TrackingState_2;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTrackedObject::m_NativePtr
	intptr_t ___m_NativePtr_3;
	// System.Guid UnityEngine.XR.ARSubsystems.XRTrackedObject::m_ReferenceObjectGuid
	Guid_t  ___m_ReferenceObjectGuid_4;

public:
	inline static int32_t get_offset_of_m_TrackableId_0() { return static_cast<int32_t>(offsetof(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58, ___m_TrackableId_0)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_0() const { return ___m_TrackableId_0; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_0() { return &___m_TrackableId_0; }
	inline void set_m_TrackableId_0(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_m_Pose_1() { return static_cast<int32_t>(offsetof(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58, ___m_Pose_1)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_1() const { return ___m_Pose_1; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_1() { return &___m_Pose_1; }
	inline void set_m_Pose_1(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_1 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_2() { return static_cast<int32_t>(offsetof(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58, ___m_TrackingState_2)); }
	inline int32_t get_m_TrackingState_2() const { return ___m_TrackingState_2; }
	inline int32_t* get_address_of_m_TrackingState_2() { return &___m_TrackingState_2; }
	inline void set_m_TrackingState_2(int32_t value)
	{
		___m_TrackingState_2 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_3() { return static_cast<int32_t>(offsetof(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58, ___m_NativePtr_3)); }
	inline intptr_t get_m_NativePtr_3() const { return ___m_NativePtr_3; }
	inline intptr_t* get_address_of_m_NativePtr_3() { return &___m_NativePtr_3; }
	inline void set_m_NativePtr_3(intptr_t value)
	{
		___m_NativePtr_3 = value;
	}

	inline static int32_t get_offset_of_m_ReferenceObjectGuid_4() { return static_cast<int32_t>(offsetof(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58, ___m_ReferenceObjectGuid_4)); }
	inline Guid_t  get_m_ReferenceObjectGuid_4() const { return ___m_ReferenceObjectGuid_4; }
	inline Guid_t * get_address_of_m_ReferenceObjectGuid_4() { return &___m_ReferenceObjectGuid_4; }
	inline void set_m_ReferenceObjectGuid_4(Guid_t  value)
	{
		___m_ReferenceObjectGuid_4 = value;
	}
};

struct XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRTrackedObject UnityEngine.XR.ARSubsystems.XRTrackedObject::s_Default
	XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58  ___s_Default_5;

public:
	inline static int32_t get_offset_of_s_Default_5() { return static_cast<int32_t>(offsetof(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58_StaticFields, ___s_Default_5)); }
	inline XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58  get_s_Default_5() const { return ___s_Default_5; }
	inline XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58 * get_address_of_s_Default_5() { return &___s_Default_5; }
	inline void set_s_Default_5(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58  value)
	{
		___s_Default_5 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitImageDatabase/AddImageJob
struct AddImageJob_t8EC95C9EA777B31823D128D52F383B45EF7F3AA5 
{
public:
	// Unity.Collections.NativeSlice`1<System.Byte> UnityEngine.XR.ARKit.ARKitImageDatabase/AddImageJob::image
	NativeSlice_1_tA05D3BC7EB042685CBFD3369ECB6140D114C911B  ___image_0;
	// System.IntPtr UnityEngine.XR.ARKit.ARKitImageDatabase/AddImageJob::database
	intptr_t ___database_1;
	// System.IntPtr UnityEngine.XR.ARKit.ARKitImageDatabase/AddImageJob::validator
	intptr_t ___validator_2;
	// System.Int32 UnityEngine.XR.ARKit.ARKitImageDatabase/AddImageJob::width
	int32_t ___width_3;
	// System.Int32 UnityEngine.XR.ARKit.ARKitImageDatabase/AddImageJob::height
	int32_t ___height_4;
	// System.Single UnityEngine.XR.ARKit.ARKitImageDatabase/AddImageJob::physicalWidth
	float ___physicalWidth_5;
	// UnityEngine.TextureFormat UnityEngine.XR.ARKit.ARKitImageDatabase/AddImageJob::format
	int32_t ___format_6;
	// UnityEngine.XR.ARKit.ManagedReferenceImage UnityEngine.XR.ARKit.ARKitImageDatabase/AddImageJob::managedReferenceImage
	ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1  ___managedReferenceImage_7;

public:
	inline static int32_t get_offset_of_image_0() { return static_cast<int32_t>(offsetof(AddImageJob_t8EC95C9EA777B31823D128D52F383B45EF7F3AA5, ___image_0)); }
	inline NativeSlice_1_tA05D3BC7EB042685CBFD3369ECB6140D114C911B  get_image_0() const { return ___image_0; }
	inline NativeSlice_1_tA05D3BC7EB042685CBFD3369ECB6140D114C911B * get_address_of_image_0() { return &___image_0; }
	inline void set_image_0(NativeSlice_1_tA05D3BC7EB042685CBFD3369ECB6140D114C911B  value)
	{
		___image_0 = value;
	}

	inline static int32_t get_offset_of_database_1() { return static_cast<int32_t>(offsetof(AddImageJob_t8EC95C9EA777B31823D128D52F383B45EF7F3AA5, ___database_1)); }
	inline intptr_t get_database_1() const { return ___database_1; }
	inline intptr_t* get_address_of_database_1() { return &___database_1; }
	inline void set_database_1(intptr_t value)
	{
		___database_1 = value;
	}

	inline static int32_t get_offset_of_validator_2() { return static_cast<int32_t>(offsetof(AddImageJob_t8EC95C9EA777B31823D128D52F383B45EF7F3AA5, ___validator_2)); }
	inline intptr_t get_validator_2() const { return ___validator_2; }
	inline intptr_t* get_address_of_validator_2() { return &___validator_2; }
	inline void set_validator_2(intptr_t value)
	{
		___validator_2 = value;
	}

	inline static int32_t get_offset_of_width_3() { return static_cast<int32_t>(offsetof(AddImageJob_t8EC95C9EA777B31823D128D52F383B45EF7F3AA5, ___width_3)); }
	inline int32_t get_width_3() const { return ___width_3; }
	inline int32_t* get_address_of_width_3() { return &___width_3; }
	inline void set_width_3(int32_t value)
	{
		___width_3 = value;
	}

	inline static int32_t get_offset_of_height_4() { return static_cast<int32_t>(offsetof(AddImageJob_t8EC95C9EA777B31823D128D52F383B45EF7F3AA5, ___height_4)); }
	inline int32_t get_height_4() const { return ___height_4; }
	inline int32_t* get_address_of_height_4() { return &___height_4; }
	inline void set_height_4(int32_t value)
	{
		___height_4 = value;
	}

	inline static int32_t get_offset_of_physicalWidth_5() { return static_cast<int32_t>(offsetof(AddImageJob_t8EC95C9EA777B31823D128D52F383B45EF7F3AA5, ___physicalWidth_5)); }
	inline float get_physicalWidth_5() const { return ___physicalWidth_5; }
	inline float* get_address_of_physicalWidth_5() { return &___physicalWidth_5; }
	inline void set_physicalWidth_5(float value)
	{
		___physicalWidth_5 = value;
	}

	inline static int32_t get_offset_of_format_6() { return static_cast<int32_t>(offsetof(AddImageJob_t8EC95C9EA777B31823D128D52F383B45EF7F3AA5, ___format_6)); }
	inline int32_t get_format_6() const { return ___format_6; }
	inline int32_t* get_address_of_format_6() { return &___format_6; }
	inline void set_format_6(int32_t value)
	{
		___format_6 = value;
	}

	inline static int32_t get_offset_of_managedReferenceImage_7() { return static_cast<int32_t>(offsetof(AddImageJob_t8EC95C9EA777B31823D128D52F383B45EF7F3AA5, ___managedReferenceImage_7)); }
	inline ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1  get_managedReferenceImage_7() const { return ___managedReferenceImage_7; }
	inline ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1 * get_address_of_managedReferenceImage_7() { return &___managedReferenceImage_7; }
	inline void set_managedReferenceImage_7(ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1  value)
	{
		___managedReferenceImage_7 = value;
	}
};


// UnityEngine.Camera/RenderRequest
struct RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94 
{
public:
	// UnityEngine.Camera/RenderRequestMode UnityEngine.Camera/RenderRequest::m_CameraRenderMode
	int32_t ___m_CameraRenderMode_0;
	// UnityEngine.RenderTexture UnityEngine.Camera/RenderRequest::m_ResultRT
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___m_ResultRT_1;
	// UnityEngine.Camera/RenderRequestOutputSpace UnityEngine.Camera/RenderRequest::m_OutputSpace
	int32_t ___m_OutputSpace_2;

public:
	inline static int32_t get_offset_of_m_CameraRenderMode_0() { return static_cast<int32_t>(offsetof(RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94, ___m_CameraRenderMode_0)); }
	inline int32_t get_m_CameraRenderMode_0() const { return ___m_CameraRenderMode_0; }
	inline int32_t* get_address_of_m_CameraRenderMode_0() { return &___m_CameraRenderMode_0; }
	inline void set_m_CameraRenderMode_0(int32_t value)
	{
		___m_CameraRenderMode_0 = value;
	}

	inline static int32_t get_offset_of_m_ResultRT_1() { return static_cast<int32_t>(offsetof(RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94, ___m_ResultRT_1)); }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * get_m_ResultRT_1() const { return ___m_ResultRT_1; }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** get_address_of_m_ResultRT_1() { return &___m_ResultRT_1; }
	inline void set_m_ResultRT_1(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		___m_ResultRT_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ResultRT_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_OutputSpace_2() { return static_cast<int32_t>(offsetof(RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94, ___m_OutputSpace_2)); }
	inline int32_t get_m_OutputSpace_2() const { return ___m_OutputSpace_2; }
	inline int32_t* get_address_of_m_OutputSpace_2() { return &___m_OutputSpace_2; }
	inline void set_m_OutputSpace_2(int32_t value)
	{
		___m_OutputSpace_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Camera/RenderRequest
struct RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94_marshaled_pinvoke
{
	int32_t ___m_CameraRenderMode_0;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___m_ResultRT_1;
	int32_t ___m_OutputSpace_2;
};
// Native definition for COM marshalling of UnityEngine.Camera/RenderRequest
struct RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94_marshaled_com
{
	int32_t ___m_CameraRenderMode_0;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___m_ResultRT_1;
	int32_t ___m_OutputSpace_2;
};

// UnityEngine.InputSystem.HID.HID/HIDCollectionDescriptor
struct HIDCollectionDescriptor_tE3258D5D340FBDFF06E499D451B3B76CF5E5BB7A 
{
public:
	// UnityEngine.InputSystem.HID.HID/HIDCollectionType UnityEngine.InputSystem.HID.HID/HIDCollectionDescriptor::type
	int32_t ___type_0;
	// System.Int32 UnityEngine.InputSystem.HID.HID/HIDCollectionDescriptor::usage
	int32_t ___usage_1;
	// UnityEngine.InputSystem.HID.HID/UsagePage UnityEngine.InputSystem.HID.HID/HIDCollectionDescriptor::usagePage
	int32_t ___usagePage_2;
	// System.Int32 UnityEngine.InputSystem.HID.HID/HIDCollectionDescriptor::parent
	int32_t ___parent_3;
	// System.Int32 UnityEngine.InputSystem.HID.HID/HIDCollectionDescriptor::childCount
	int32_t ___childCount_4;
	// System.Int32 UnityEngine.InputSystem.HID.HID/HIDCollectionDescriptor::firstChild
	int32_t ___firstChild_5;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(HIDCollectionDescriptor_tE3258D5D340FBDFF06E499D451B3B76CF5E5BB7A, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_usage_1() { return static_cast<int32_t>(offsetof(HIDCollectionDescriptor_tE3258D5D340FBDFF06E499D451B3B76CF5E5BB7A, ___usage_1)); }
	inline int32_t get_usage_1() const { return ___usage_1; }
	inline int32_t* get_address_of_usage_1() { return &___usage_1; }
	inline void set_usage_1(int32_t value)
	{
		___usage_1 = value;
	}

	inline static int32_t get_offset_of_usagePage_2() { return static_cast<int32_t>(offsetof(HIDCollectionDescriptor_tE3258D5D340FBDFF06E499D451B3B76CF5E5BB7A, ___usagePage_2)); }
	inline int32_t get_usagePage_2() const { return ___usagePage_2; }
	inline int32_t* get_address_of_usagePage_2() { return &___usagePage_2; }
	inline void set_usagePage_2(int32_t value)
	{
		___usagePage_2 = value;
	}

	inline static int32_t get_offset_of_parent_3() { return static_cast<int32_t>(offsetof(HIDCollectionDescriptor_tE3258D5D340FBDFF06E499D451B3B76CF5E5BB7A, ___parent_3)); }
	inline int32_t get_parent_3() const { return ___parent_3; }
	inline int32_t* get_address_of_parent_3() { return &___parent_3; }
	inline void set_parent_3(int32_t value)
	{
		___parent_3 = value;
	}

	inline static int32_t get_offset_of_childCount_4() { return static_cast<int32_t>(offsetof(HIDCollectionDescriptor_tE3258D5D340FBDFF06E499D451B3B76CF5E5BB7A, ___childCount_4)); }
	inline int32_t get_childCount_4() const { return ___childCount_4; }
	inline int32_t* get_address_of_childCount_4() { return &___childCount_4; }
	inline void set_childCount_4(int32_t value)
	{
		___childCount_4 = value;
	}

	inline static int32_t get_offset_of_firstChild_5() { return static_cast<int32_t>(offsetof(HIDCollectionDescriptor_tE3258D5D340FBDFF06E499D451B3B76CF5E5BB7A, ___firstChild_5)); }
	inline int32_t get_firstChild_5() const { return ___firstChild_5; }
	inline int32_t* get_address_of_firstChild_5() { return &___firstChild_5; }
	inline void set_firstChild_5(int32_t value)
	{
		___firstChild_5 = value;
	}
};


// UnityEngine.InputSystem.HID.HID/HIDElementDescriptor
struct HIDElementDescriptor_t9231CCE0267FB42FBCF668A3D06F536558400259 
{
public:
	// System.Int32 UnityEngine.InputSystem.HID.HID/HIDElementDescriptor::usage
	int32_t ___usage_0;
	// UnityEngine.InputSystem.HID.HID/UsagePage UnityEngine.InputSystem.HID.HID/HIDElementDescriptor::usagePage
	int32_t ___usagePage_1;
	// System.Int32 UnityEngine.InputSystem.HID.HID/HIDElementDescriptor::unit
	int32_t ___unit_2;
	// System.Int32 UnityEngine.InputSystem.HID.HID/HIDElementDescriptor::unitExponent
	int32_t ___unitExponent_3;
	// System.Int32 UnityEngine.InputSystem.HID.HID/HIDElementDescriptor::logicalMin
	int32_t ___logicalMin_4;
	// System.Int32 UnityEngine.InputSystem.HID.HID/HIDElementDescriptor::logicalMax
	int32_t ___logicalMax_5;
	// System.Int32 UnityEngine.InputSystem.HID.HID/HIDElementDescriptor::physicalMin
	int32_t ___physicalMin_6;
	// System.Int32 UnityEngine.InputSystem.HID.HID/HIDElementDescriptor::physicalMax
	int32_t ___physicalMax_7;
	// UnityEngine.InputSystem.HID.HID/HIDReportType UnityEngine.InputSystem.HID.HID/HIDElementDescriptor::reportType
	int32_t ___reportType_8;
	// System.Int32 UnityEngine.InputSystem.HID.HID/HIDElementDescriptor::collectionIndex
	int32_t ___collectionIndex_9;
	// System.Int32 UnityEngine.InputSystem.HID.HID/HIDElementDescriptor::reportId
	int32_t ___reportId_10;
	// System.Int32 UnityEngine.InputSystem.HID.HID/HIDElementDescriptor::reportSizeInBits
	int32_t ___reportSizeInBits_11;
	// System.Int32 UnityEngine.InputSystem.HID.HID/HIDElementDescriptor::reportOffsetInBits
	int32_t ___reportOffsetInBits_12;
	// UnityEngine.InputSystem.HID.HID/HIDElementFlags UnityEngine.InputSystem.HID.HID/HIDElementDescriptor::flags
	int32_t ___flags_13;
	// System.Nullable`1<System.Int32> UnityEngine.InputSystem.HID.HID/HIDElementDescriptor::usageMin
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___usageMin_14;
	// System.Nullable`1<System.Int32> UnityEngine.InputSystem.HID.HID/HIDElementDescriptor::usageMax
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___usageMax_15;

public:
	inline static int32_t get_offset_of_usage_0() { return static_cast<int32_t>(offsetof(HIDElementDescriptor_t9231CCE0267FB42FBCF668A3D06F536558400259, ___usage_0)); }
	inline int32_t get_usage_0() const { return ___usage_0; }
	inline int32_t* get_address_of_usage_0() { return &___usage_0; }
	inline void set_usage_0(int32_t value)
	{
		___usage_0 = value;
	}

	inline static int32_t get_offset_of_usagePage_1() { return static_cast<int32_t>(offsetof(HIDElementDescriptor_t9231CCE0267FB42FBCF668A3D06F536558400259, ___usagePage_1)); }
	inline int32_t get_usagePage_1() const { return ___usagePage_1; }
	inline int32_t* get_address_of_usagePage_1() { return &___usagePage_1; }
	inline void set_usagePage_1(int32_t value)
	{
		___usagePage_1 = value;
	}

	inline static int32_t get_offset_of_unit_2() { return static_cast<int32_t>(offsetof(HIDElementDescriptor_t9231CCE0267FB42FBCF668A3D06F536558400259, ___unit_2)); }
	inline int32_t get_unit_2() const { return ___unit_2; }
	inline int32_t* get_address_of_unit_2() { return &___unit_2; }
	inline void set_unit_2(int32_t value)
	{
		___unit_2 = value;
	}

	inline static int32_t get_offset_of_unitExponent_3() { return static_cast<int32_t>(offsetof(HIDElementDescriptor_t9231CCE0267FB42FBCF668A3D06F536558400259, ___unitExponent_3)); }
	inline int32_t get_unitExponent_3() const { return ___unitExponent_3; }
	inline int32_t* get_address_of_unitExponent_3() { return &___unitExponent_3; }
	inline void set_unitExponent_3(int32_t value)
	{
		___unitExponent_3 = value;
	}

	inline static int32_t get_offset_of_logicalMin_4() { return static_cast<int32_t>(offsetof(HIDElementDescriptor_t9231CCE0267FB42FBCF668A3D06F536558400259, ___logicalMin_4)); }
	inline int32_t get_logicalMin_4() const { return ___logicalMin_4; }
	inline int32_t* get_address_of_logicalMin_4() { return &___logicalMin_4; }
	inline void set_logicalMin_4(int32_t value)
	{
		___logicalMin_4 = value;
	}

	inline static int32_t get_offset_of_logicalMax_5() { return static_cast<int32_t>(offsetof(HIDElementDescriptor_t9231CCE0267FB42FBCF668A3D06F536558400259, ___logicalMax_5)); }
	inline int32_t get_logicalMax_5() const { return ___logicalMax_5; }
	inline int32_t* get_address_of_logicalMax_5() { return &___logicalMax_5; }
	inline void set_logicalMax_5(int32_t value)
	{
		___logicalMax_5 = value;
	}

	inline static int32_t get_offset_of_physicalMin_6() { return static_cast<int32_t>(offsetof(HIDElementDescriptor_t9231CCE0267FB42FBCF668A3D06F536558400259, ___physicalMin_6)); }
	inline int32_t get_physicalMin_6() const { return ___physicalMin_6; }
	inline int32_t* get_address_of_physicalMin_6() { return &___physicalMin_6; }
	inline void set_physicalMin_6(int32_t value)
	{
		___physicalMin_6 = value;
	}

	inline static int32_t get_offset_of_physicalMax_7() { return static_cast<int32_t>(offsetof(HIDElementDescriptor_t9231CCE0267FB42FBCF668A3D06F536558400259, ___physicalMax_7)); }
	inline int32_t get_physicalMax_7() const { return ___physicalMax_7; }
	inline int32_t* get_address_of_physicalMax_7() { return &___physicalMax_7; }
	inline void set_physicalMax_7(int32_t value)
	{
		___physicalMax_7 = value;
	}

	inline static int32_t get_offset_of_reportType_8() { return static_cast<int32_t>(offsetof(HIDElementDescriptor_t9231CCE0267FB42FBCF668A3D06F536558400259, ___reportType_8)); }
	inline int32_t get_reportType_8() const { return ___reportType_8; }
	inline int32_t* get_address_of_reportType_8() { return &___reportType_8; }
	inline void set_reportType_8(int32_t value)
	{
		___reportType_8 = value;
	}

	inline static int32_t get_offset_of_collectionIndex_9() { return static_cast<int32_t>(offsetof(HIDElementDescriptor_t9231CCE0267FB42FBCF668A3D06F536558400259, ___collectionIndex_9)); }
	inline int32_t get_collectionIndex_9() const { return ___collectionIndex_9; }
	inline int32_t* get_address_of_collectionIndex_9() { return &___collectionIndex_9; }
	inline void set_collectionIndex_9(int32_t value)
	{
		___collectionIndex_9 = value;
	}

	inline static int32_t get_offset_of_reportId_10() { return static_cast<int32_t>(offsetof(HIDElementDescriptor_t9231CCE0267FB42FBCF668A3D06F536558400259, ___reportId_10)); }
	inline int32_t get_reportId_10() const { return ___reportId_10; }
	inline int32_t* get_address_of_reportId_10() { return &___reportId_10; }
	inline void set_reportId_10(int32_t value)
	{
		___reportId_10 = value;
	}

	inline static int32_t get_offset_of_reportSizeInBits_11() { return static_cast<int32_t>(offsetof(HIDElementDescriptor_t9231CCE0267FB42FBCF668A3D06F536558400259, ___reportSizeInBits_11)); }
	inline int32_t get_reportSizeInBits_11() const { return ___reportSizeInBits_11; }
	inline int32_t* get_address_of_reportSizeInBits_11() { return &___reportSizeInBits_11; }
	inline void set_reportSizeInBits_11(int32_t value)
	{
		___reportSizeInBits_11 = value;
	}

	inline static int32_t get_offset_of_reportOffsetInBits_12() { return static_cast<int32_t>(offsetof(HIDElementDescriptor_t9231CCE0267FB42FBCF668A3D06F536558400259, ___reportOffsetInBits_12)); }
	inline int32_t get_reportOffsetInBits_12() const { return ___reportOffsetInBits_12; }
	inline int32_t* get_address_of_reportOffsetInBits_12() { return &___reportOffsetInBits_12; }
	inline void set_reportOffsetInBits_12(int32_t value)
	{
		___reportOffsetInBits_12 = value;
	}

	inline static int32_t get_offset_of_flags_13() { return static_cast<int32_t>(offsetof(HIDElementDescriptor_t9231CCE0267FB42FBCF668A3D06F536558400259, ___flags_13)); }
	inline int32_t get_flags_13() const { return ___flags_13; }
	inline int32_t* get_address_of_flags_13() { return &___flags_13; }
	inline void set_flags_13(int32_t value)
	{
		___flags_13 = value;
	}

	inline static int32_t get_offset_of_usageMin_14() { return static_cast<int32_t>(offsetof(HIDElementDescriptor_t9231CCE0267FB42FBCF668A3D06F536558400259, ___usageMin_14)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_usageMin_14() const { return ___usageMin_14; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_usageMin_14() { return &___usageMin_14; }
	inline void set_usageMin_14(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___usageMin_14 = value;
	}

	inline static int32_t get_offset_of_usageMax_15() { return static_cast<int32_t>(offsetof(HIDElementDescriptor_t9231CCE0267FB42FBCF668A3D06F536558400259, ___usageMax_15)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_usageMax_15() const { return ___usageMax_15; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_usageMax_15() { return &___usageMax_15; }
	inline void set_usageMax_15(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___usageMax_15 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.HID.HID/HIDElementDescriptor
struct HIDElementDescriptor_t9231CCE0267FB42FBCF668A3D06F536558400259_marshaled_pinvoke
{
	int32_t ___usage_0;
	int32_t ___usagePage_1;
	int32_t ___unit_2;
	int32_t ___unitExponent_3;
	int32_t ___logicalMin_4;
	int32_t ___logicalMax_5;
	int32_t ___physicalMin_6;
	int32_t ___physicalMax_7;
	int32_t ___reportType_8;
	int32_t ___collectionIndex_9;
	int32_t ___reportId_10;
	int32_t ___reportSizeInBits_11;
	int32_t ___reportOffsetInBits_12;
	int32_t ___flags_13;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___usageMin_14;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___usageMax_15;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.HID.HID/HIDElementDescriptor
struct HIDElementDescriptor_t9231CCE0267FB42FBCF668A3D06F536558400259_marshaled_com
{
	int32_t ___usage_0;
	int32_t ___usagePage_1;
	int32_t ___unit_2;
	int32_t ___unitExponent_3;
	int32_t ___logicalMin_4;
	int32_t ___logicalMax_5;
	int32_t ___physicalMin_6;
	int32_t ___physicalMax_7;
	int32_t ___reportType_8;
	int32_t ___collectionIndex_9;
	int32_t ___reportId_10;
	int32_t ___reportSizeInBits_11;
	int32_t ___reportOffsetInBits_12;
	int32_t ___flags_13;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___usageMin_14;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___usageMax_15;
};

// UnityEngine.InputSystem.HID.HIDParser/HIDReportData
struct HIDReportData_tF944E3DB3C90B96B785F6E2844CB36D3BE70EE5F 
{
public:
	// System.Int32 UnityEngine.InputSystem.HID.HIDParser/HIDReportData::reportId
	int32_t ___reportId_0;
	// UnityEngine.InputSystem.HID.HID/HIDReportType UnityEngine.InputSystem.HID.HIDParser/HIDReportData::reportType
	int32_t ___reportType_1;
	// System.Int32 UnityEngine.InputSystem.HID.HIDParser/HIDReportData::currentBitOffset
	int32_t ___currentBitOffset_2;

public:
	inline static int32_t get_offset_of_reportId_0() { return static_cast<int32_t>(offsetof(HIDReportData_tF944E3DB3C90B96B785F6E2844CB36D3BE70EE5F, ___reportId_0)); }
	inline int32_t get_reportId_0() const { return ___reportId_0; }
	inline int32_t* get_address_of_reportId_0() { return &___reportId_0; }
	inline void set_reportId_0(int32_t value)
	{
		___reportId_0 = value;
	}

	inline static int32_t get_offset_of_reportType_1() { return static_cast<int32_t>(offsetof(HIDReportData_tF944E3DB3C90B96B785F6E2844CB36D3BE70EE5F, ___reportType_1)); }
	inline int32_t get_reportType_1() const { return ___reportType_1; }
	inline int32_t* get_address_of_reportType_1() { return &___reportType_1; }
	inline void set_reportType_1(int32_t value)
	{
		___reportType_1 = value;
	}

	inline static int32_t get_offset_of_currentBitOffset_2() { return static_cast<int32_t>(offsetof(HIDReportData_tF944E3DB3C90B96B785F6E2844CB36D3BE70EE5F, ___currentBitOffset_2)); }
	inline int32_t get_currentBitOffset_2() const { return ___currentBitOffset_2; }
	inline int32_t* get_address_of_currentBitOffset_2() { return &___currentBitOffset_2; }
	inline void set_currentBitOffset_2(int32_t value)
	{
		___currentBitOffset_2 = value;
	}
};


// UnityEngine.InputSystem.Utilities.JsonParser/JsonValue
struct JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6 
{
public:
	// UnityEngine.InputSystem.Utilities.JsonParser/JsonValueType UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::type
	int32_t ___type_0;
	// System.Boolean UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::boolValue
	bool ___boolValue_1;
	// System.Double UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::realValue
	double ___realValue_2;
	// System.Int64 UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::integerValue
	int64_t ___integerValue_3;
	// UnityEngine.InputSystem.Utilities.JsonParser/JsonString UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::stringValue
	JsonString_tEB3FF93EA08A825F8684D53BA78E3AE4B2D81FFE  ___stringValue_4;
	// System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue> UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::arrayValue
	List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013 * ___arrayValue_5;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue> UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::objectValue
	Dictionary_2_tEDC3A3E73C894B8EF1BB6DB89A4CB172AFB85667 * ___objectValue_6;
	// System.Object UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::anyValue
	RuntimeObject * ___anyValue_7;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_boolValue_1() { return static_cast<int32_t>(offsetof(JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6, ___boolValue_1)); }
	inline bool get_boolValue_1() const { return ___boolValue_1; }
	inline bool* get_address_of_boolValue_1() { return &___boolValue_1; }
	inline void set_boolValue_1(bool value)
	{
		___boolValue_1 = value;
	}

	inline static int32_t get_offset_of_realValue_2() { return static_cast<int32_t>(offsetof(JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6, ___realValue_2)); }
	inline double get_realValue_2() const { return ___realValue_2; }
	inline double* get_address_of_realValue_2() { return &___realValue_2; }
	inline void set_realValue_2(double value)
	{
		___realValue_2 = value;
	}

	inline static int32_t get_offset_of_integerValue_3() { return static_cast<int32_t>(offsetof(JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6, ___integerValue_3)); }
	inline int64_t get_integerValue_3() const { return ___integerValue_3; }
	inline int64_t* get_address_of_integerValue_3() { return &___integerValue_3; }
	inline void set_integerValue_3(int64_t value)
	{
		___integerValue_3 = value;
	}

	inline static int32_t get_offset_of_stringValue_4() { return static_cast<int32_t>(offsetof(JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6, ___stringValue_4)); }
	inline JsonString_tEB3FF93EA08A825F8684D53BA78E3AE4B2D81FFE  get_stringValue_4() const { return ___stringValue_4; }
	inline JsonString_tEB3FF93EA08A825F8684D53BA78E3AE4B2D81FFE * get_address_of_stringValue_4() { return &___stringValue_4; }
	inline void set_stringValue_4(JsonString_tEB3FF93EA08A825F8684D53BA78E3AE4B2D81FFE  value)
	{
		___stringValue_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___stringValue_4))->___text_0))->___m_String_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_arrayValue_5() { return static_cast<int32_t>(offsetof(JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6, ___arrayValue_5)); }
	inline List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013 * get_arrayValue_5() const { return ___arrayValue_5; }
	inline List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013 ** get_address_of_arrayValue_5() { return &___arrayValue_5; }
	inline void set_arrayValue_5(List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013 * value)
	{
		___arrayValue_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arrayValue_5), (void*)value);
	}

	inline static int32_t get_offset_of_objectValue_6() { return static_cast<int32_t>(offsetof(JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6, ___objectValue_6)); }
	inline Dictionary_2_tEDC3A3E73C894B8EF1BB6DB89A4CB172AFB85667 * get_objectValue_6() const { return ___objectValue_6; }
	inline Dictionary_2_tEDC3A3E73C894B8EF1BB6DB89A4CB172AFB85667 ** get_address_of_objectValue_6() { return &___objectValue_6; }
	inline void set_objectValue_6(Dictionary_2_tEDC3A3E73C894B8EF1BB6DB89A4CB172AFB85667 * value)
	{
		___objectValue_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectValue_6), (void*)value);
	}

	inline static int32_t get_offset_of_anyValue_7() { return static_cast<int32_t>(offsetof(JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6, ___anyValue_7)); }
	inline RuntimeObject * get_anyValue_7() const { return ___anyValue_7; }
	inline RuntimeObject ** get_address_of_anyValue_7() { return &___anyValue_7; }
	inline void set_anyValue_7(RuntimeObject * value)
	{
		___anyValue_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anyValue_7), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.JsonParser/JsonValue
struct JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6_marshaled_pinvoke
{
	int32_t ___type_0;
	int32_t ___boolValue_1;
	double ___realValue_2;
	int64_t ___integerValue_3;
	JsonString_tEB3FF93EA08A825F8684D53BA78E3AE4B2D81FFE_marshaled_pinvoke ___stringValue_4;
	List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013 * ___arrayValue_5;
	Dictionary_2_tEDC3A3E73C894B8EF1BB6DB89A4CB172AFB85667 * ___objectValue_6;
	Il2CppIUnknown* ___anyValue_7;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.JsonParser/JsonValue
struct JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6_marshaled_com
{
	int32_t ___type_0;
	int32_t ___boolValue_1;
	double ___realValue_2;
	int64_t ___integerValue_3;
	JsonString_tEB3FF93EA08A825F8684D53BA78E3AE4B2D81FFE_marshaled_com ___stringValue_4;
	List_1_t45A6795B3DDCD2B84E748F3B155AFBE7EE998013 * ___arrayValue_5;
	Dictionary_2_tEDC3A3E73C894B8EF1BB6DB89A4CB172AFB85667 * ___objectValue_6;
	Il2CppIUnknown* ___anyValue_7;
};

// UnityEngine.XR.OpenXR.Features.OpenXRFeature/GetInternalDeviceIdCommand
struct GetInternalDeviceIdCommand_tC0FCCFCCA2C300E73BA92F885525F879ABEAD57E 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngine.InputSystem.LowLevel.InputDeviceCommand UnityEngine.XR.OpenXR.Features.OpenXRFeature/GetInternalDeviceIdCommand::baseCommand
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  ___baseCommand_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___deviceId_2_OffsetPadding[8];
					// System.UInt32 UnityEngine.XR.OpenXR.Features.OpenXRFeature/GetInternalDeviceIdCommand::deviceId
					uint32_t ___deviceId_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___deviceId_2_OffsetPadding_forAlignmentOnly[8];
					uint32_t ___deviceId_2_forAlignmentOnly;
				};
			};
		};
		uint8_t GetInternalDeviceIdCommand_tC0FCCFCCA2C300E73BA92F885525F879ABEAD57E__padding[12];
	};

public:
	inline static int32_t get_offset_of_baseCommand_1() { return static_cast<int32_t>(offsetof(GetInternalDeviceIdCommand_tC0FCCFCCA2C300E73BA92F885525F879ABEAD57E, ___baseCommand_1)); }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  get_baseCommand_1() const { return ___baseCommand_1; }
	inline InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6 * get_address_of_baseCommand_1() { return &___baseCommand_1; }
	inline void set_baseCommand_1(InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6  value)
	{
		___baseCommand_1 = value;
	}

	inline static int32_t get_offset_of_deviceId_2() { return static_cast<int32_t>(offsetof(GetInternalDeviceIdCommand_tC0FCCFCCA2C300E73BA92F885525F879ABEAD57E, ___deviceId_2)); }
	inline uint32_t get_deviceId_2() const { return ___deviceId_2; }
	inline uint32_t* get_address_of_deviceId_2() { return &___deviceId_2; }
	inline void set_deviceId_2(uint32_t value)
	{
		___deviceId_2 = value;
	}
};


// UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/LayoutMatcher
struct LayoutMatcher_t08F547BB7D9E01B19DD908C7C21EB6B9323FCD8E 
{
public:
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/LayoutMatcher::layoutName
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___layoutName_0;
	// UnityEngine.InputSystem.Layouts.InputDeviceMatcher UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/LayoutMatcher::deviceMatcher
	InputDeviceMatcher_t74CE500431917B5FE759B4C26A267696A28875FC  ___deviceMatcher_1;

public:
	inline static int32_t get_offset_of_layoutName_0() { return static_cast<int32_t>(offsetof(LayoutMatcher_t08F547BB7D9E01B19DD908C7C21EB6B9323FCD8E, ___layoutName_0)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_layoutName_0() const { return ___layoutName_0; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_layoutName_0() { return &___layoutName_0; }
	inline void set_layoutName_0(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___layoutName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___layoutName_0))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___layoutName_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_deviceMatcher_1() { return static_cast<int32_t>(offsetof(LayoutMatcher_t08F547BB7D9E01B19DD908C7C21EB6B9323FCD8E, ___deviceMatcher_1)); }
	inline InputDeviceMatcher_t74CE500431917B5FE759B4C26A267696A28875FC  get_deviceMatcher_1() const { return ___deviceMatcher_1; }
	inline InputDeviceMatcher_t74CE500431917B5FE759B4C26A267696A28875FC * get_address_of_deviceMatcher_1() { return &___deviceMatcher_1; }
	inline void set_deviceMatcher_1(InputDeviceMatcher_t74CE500431917B5FE759B4C26A267696A28875FC  value)
	{
		___deviceMatcher_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceMatcher_1))->___m_Patterns_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/LayoutMatcher
struct LayoutMatcher_t08F547BB7D9E01B19DD908C7C21EB6B9323FCD8E_marshaled_pinvoke
{
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8_marshaled_pinvoke ___layoutName_0;
	InputDeviceMatcher_t74CE500431917B5FE759B4C26A267696A28875FC_marshaled_pinvoke ___deviceMatcher_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/LayoutMatcher
struct LayoutMatcher_t08F547BB7D9E01B19DD908C7C21EB6B9323FCD8E_marshaled_com
{
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8_marshaled_com ___layoutName_0;
	InputDeviceMatcher_t74CE500431917B5FE759B4C26A267696A28875FC_marshaled_com ___deviceMatcher_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.BoundedPlane>
struct AlignOfHelper_1_tC25886536082C6025800F4A3A7F21B393DEC283C 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tC25886536082C6025800F4A3A7F21B393DEC283C, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tC25886536082C6025800F4A3A7F21B393DEC283C, ___data_1)); }
	inline BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  get_data_1() const { return ___data_1; }
	inline BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>
struct AlignOfHelper_1_t2F36EC542314916EC28FC5C072A5BD2BD7FCF768 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t2F36EC542314916EC28FC5C072A5BD2BD7FCF768, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t2F36EC542314916EC28FC5C072A5BD2BD7FCF768, ___data_1)); }
	inline ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  get_data_1() const { return ___data_1; }
	inline ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>
struct AlignOfHelper_1_tB73C2380111688DFF4CDA578F1D646B893208D17 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tB73C2380111688DFF4CDA578F1D646B893208D17, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tB73C2380111688DFF4CDA578F1D646B893208D17, ___data_1)); }
	inline LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  get_data_1() const { return ___data_1; }
	inline LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRAnchor>
struct AlignOfHelper_1_t257C1F128C719DA8903D1D43DDF2FCDF1C186843 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t257C1F128C719DA8903D1D43DDF2FCDF1C186843, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t257C1F128C719DA8903D1D43DDF2FCDF1C186843, ___data_1)); }
	inline XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  get_data_1() const { return ___data_1; }
	inline XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRFace>
struct AlignOfHelper_1_tDC746396BD4C3DEDEFD7BCA4F2FB927A7C9B23D6 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tDC746396BD4C3DEDEFD7BCA4F2FB927A7C9B23D6, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tDC746396BD4C3DEDEFD7BCA4F2FB927A7C9B23D6, ___data_1)); }
	inline XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599  get_data_1() const { return ___data_1; }
	inline XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRHumanBody>
struct AlignOfHelper_1_tED912FC6AED4BF992E7A399B4C07FDA8DB72C4B7 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tED912FC6AED4BF992E7A399B4C07FDA8DB72C4B7, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tED912FC6AED4BF992E7A399B4C07FDA8DB72C4B7, ___data_1)); }
	inline XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  get_data_1() const { return ___data_1; }
	inline XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint>
struct AlignOfHelper_1_tAEC9107335C3ACB0D1EC024C5A16EE34DD04DBB7 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tAEC9107335C3ACB0D1EC024C5A16EE34DD04DBB7, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tAEC9107335C3ACB0D1EC024C5A16EE34DD04DBB7, ___data_1)); }
	inline XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4  get_data_1() const { return ___data_1; }
	inline XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRParticipant>
struct AlignOfHelper_1_tF269397DB58F83DB2A25F4B8690D15E87B5629CD 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tF269397DB58F83DB2A25F4B8690D15E87B5629CD, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tF269397DB58F83DB2A25F4B8690D15E87B5629CD, ___data_1)); }
	inline XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  get_data_1() const { return ___data_1; }
	inline XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRPointCloud>
struct AlignOfHelper_1_t78096416E3ABFE26E4039FC6FD89EDA08E585800 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t78096416E3ABFE26E4039FC6FD89EDA08E585800, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t78096416E3ABFE26E4039FC6FD89EDA08E585800, ___data_1)); }
	inline XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  get_data_1() const { return ___data_1; }
	inline XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRRaycast>
struct AlignOfHelper_1_t6FF262161D1834575CD49D01F0D3995FEA992D62 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t6FF262161D1834575CD49D01F0D3995FEA992D62, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t6FF262161D1834575CD49D01F0D3995FEA992D62, ___data_1)); }
	inline XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  get_data_1() const { return ___data_1; }
	inline XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>
struct AlignOfHelper_1_t8345D25D596B0A21206B48C487BA031919DC4310 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t8345D25D596B0A21206B48C487BA031919DC4310, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t8345D25D596B0A21206B48C487BA031919DC4310, ___data_1)); }
	inline XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  get_data_1() const { return ___data_1; }
	inline XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>
struct AlignOfHelper_1_t9D657DBA4E89FCD23C31C660D77E9638F5B3E728 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t9D657DBA4E89FCD23C31C660D77E9638F5B3E728, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t9D657DBA4E89FCD23C31C660D77E9638F5B3E728, ___data_1)); }
	inline XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634  get_data_1() const { return ___data_1; }
	inline XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>
struct AlignOfHelper_1_t0B1F22AE74CDD2B893FAE250B9DF71D66F0AC180 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t0B1F22AE74CDD2B893FAE250B9DF71D66F0AC180, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t0B1F22AE74CDD2B893FAE250B9DF71D66F0AC180, ___data_1)); }
	inline XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  get_data_1() const { return ___data_1; }
	inline XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>
struct AlignOfHelper_1_t109C90BE24A2EE7ACC0193AA9E8ECB0C36CDC372 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t109C90BE24A2EE7ACC0193AA9E8ECB0C36CDC372, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t109C90BE24A2EE7ACC0193AA9E8ECB0C36CDC372, ___data_1)); }
	inline XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  get_data_1() const { return ___data_1; }
	inline XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>
struct AlignOfHelper_1_tE95ABAB4F1E81E2D7BCA8662A0445AB784FB952E 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tE95ABAB4F1E81E2D7BCA8662A0445AB784FB952E, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tE95ABAB4F1E81E2D7BCA8662A0445AB784FB952E, ___data_1)); }
	inline XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58  get_data_1() const { return ___data_1; }
	inline XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58  value)
	{
		___data_1 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitImageDatabase/DeallocateNativeArrayJob`1<System.Byte>
struct DeallocateNativeArrayJob_1_t2A6BBDEB793D693B1E240D595DD0217524A5092C 
{
public:
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARKit.ARKitImageDatabase/DeallocateNativeArrayJob`1::array
	NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  ___array_0;

public:
	inline static int32_t get_offset_of_array_0() { return static_cast<int32_t>(offsetof(DeallocateNativeArrayJob_1_t2A6BBDEB793D693B1E240D595DD0217524A5092C, ___array_0)); }
	inline NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  get_array_0() const { return ___array_0; }
	inline NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 * get_address_of_array_0() { return &___array_0; }
	inline void set_array_0(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  value)
	{
		___array_0 = value;
	}
};


// UnityEngine.InputSystem.InputControlList`1<UnityEngine.InputSystem.InputControl>
struct InputControlList_1_tC251485A8EBE20F32C1828D6F68B450DAB732E96 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputControlList`1::m_Count
	int32_t ___m_Count_0;
	// Unity.Collections.NativeArray`1<System.UInt64> UnityEngine.InputSystem.InputControlList`1::m_Indices
	NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  ___m_Indices_1;
	// Unity.Collections.Allocator UnityEngine.InputSystem.InputControlList`1::m_Allocator
	int32_t ___m_Allocator_2;

public:
	inline static int32_t get_offset_of_m_Count_0() { return static_cast<int32_t>(offsetof(InputControlList_1_tC251485A8EBE20F32C1828D6F68B450DAB732E96, ___m_Count_0)); }
	inline int32_t get_m_Count_0() const { return ___m_Count_0; }
	inline int32_t* get_address_of_m_Count_0() { return &___m_Count_0; }
	inline void set_m_Count_0(int32_t value)
	{
		___m_Count_0 = value;
	}

	inline static int32_t get_offset_of_m_Indices_1() { return static_cast<int32_t>(offsetof(InputControlList_1_tC251485A8EBE20F32C1828D6F68B450DAB732E96, ___m_Indices_1)); }
	inline NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  get_m_Indices_1() const { return ___m_Indices_1; }
	inline NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B * get_address_of_m_Indices_1() { return &___m_Indices_1; }
	inline void set_m_Indices_1(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  value)
	{
		___m_Indices_1 = value;
	}

	inline static int32_t get_offset_of_m_Allocator_2() { return static_cast<int32_t>(offsetof(InputControlList_1_tC251485A8EBE20F32C1828D6F68B450DAB732E96, ___m_Allocator_2)); }
	inline int32_t get_m_Allocator_2() const { return ___m_Allocator_2; }
	inline int32_t* get_address_of_m_Allocator_2() { return &___m_Allocator_2; }
	inline void set_m_Allocator_2(int32_t value)
	{
		___m_Allocator_2 = value;
	}
};


// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104 
{
public:
	// T System.Nullable`1::value
	InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104, ___value_0)); }
	inline InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD  get_value_0() const { return ___value_0; }
	inline InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// UnityEngine.InputSystem.LowLevel.InputEvent
struct InputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngineInternal.Input.NativeInputEvent UnityEngine.InputSystem.LowLevel.InputEvent::m_Event
					NativeInputEvent_t21B4AB4BC38B4E147E82E91E29CE8877CF035FCD  ___m_Event_5;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					NativeInputEvent_t21B4AB4BC38B4E147E82E91E29CE8877CF035FCD  ___m_Event_5_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
			};
		};
		uint8_t InputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92__padding[20];
	};

public:
	inline static int32_t get_offset_of_m_Event_5() { return static_cast<int32_t>(offsetof(InputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92, ___m_Event_5)); }
	inline NativeInputEvent_t21B4AB4BC38B4E147E82E91E29CE8877CF035FCD  get_m_Event_5() const { return ___m_Event_5; }
	inline NativeInputEvent_t21B4AB4BC38B4E147E82E91E29CE8877CF035FCD * get_address_of_m_Event_5() { return &___m_Event_5; }
	inline void set_m_Event_5(NativeInputEvent_t21B4AB4BC38B4E147E82E91E29CE8877CF035FCD  value)
	{
		___m_Event_5 = value;
	}
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XREnvironmentProbe
struct XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_1;
	// UnityEngine.Vector3 UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_Scale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Scale_2;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_3;
	// UnityEngine.Vector3 UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_Size
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Size_4;
	// UnityEngine.XR.ARSubsystems.XRTextureDescriptor UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_TextureDescriptor
	XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  ___m_TextureDescriptor_5;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_TrackingState
	int32_t ___m_TrackingState_6;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_NativePtr
	intptr_t ___m_NativePtr_7;

public:
	inline static int32_t get_offset_of_m_TrackableId_1() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C, ___m_TrackableId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_1() const { return ___m_TrackableId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_1() { return &___m_TrackableId_1; }
	inline void set_m_TrackableId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_1 = value;
	}

	inline static int32_t get_offset_of_m_Scale_2() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C, ___m_Scale_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Scale_2() const { return ___m_Scale_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Scale_2() { return &___m_Scale_2; }
	inline void set_m_Scale_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Scale_2 = value;
	}

	inline static int32_t get_offset_of_m_Pose_3() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C, ___m_Pose_3)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_3() const { return ___m_Pose_3; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_3() { return &___m_Pose_3; }
	inline void set_m_Pose_3(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_3 = value;
	}

	inline static int32_t get_offset_of_m_Size_4() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C, ___m_Size_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Size_4() const { return ___m_Size_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Size_4() { return &___m_Size_4; }
	inline void set_m_Size_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Size_4 = value;
	}

	inline static int32_t get_offset_of_m_TextureDescriptor_5() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C, ___m_TextureDescriptor_5)); }
	inline XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  get_m_TextureDescriptor_5() const { return ___m_TextureDescriptor_5; }
	inline XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 * get_address_of_m_TextureDescriptor_5() { return &___m_TextureDescriptor_5; }
	inline void set_m_TextureDescriptor_5(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  value)
	{
		___m_TextureDescriptor_5 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_6() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C, ___m_TrackingState_6)); }
	inline int32_t get_m_TrackingState_6() const { return ___m_TrackingState_6; }
	inline int32_t* get_address_of_m_TrackingState_6() { return &___m_TrackingState_6; }
	inline void set_m_TrackingState_6(int32_t value)
	{
		___m_TrackingState_6 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_7() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C, ___m_NativePtr_7)); }
	inline intptr_t get_m_NativePtr_7() const { return ___m_NativePtr_7; }
	inline intptr_t* get_address_of_m_NativePtr_7() { return &___m_NativePtr_7; }
	inline void set_m_NativePtr_7(intptr_t value)
	{
		___m_NativePtr_7 = value;
	}
};

struct XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XREnvironmentProbe UnityEngine.XR.ARSubsystems.XREnvironmentProbe::s_Default
	XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C_StaticFields, ___s_Default_0)); }
	inline XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C  get_s_Default_0() const { return ___s_Default_0; }
	inline XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRFaceMesh
struct XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.Vector3> UnityEngine.XR.ARSubsystems.XRFaceMesh::m_Vertices
	NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  ___m_Vertices_0;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector3> UnityEngine.XR.ARSubsystems.XRFaceMesh::m_Normals
	NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  ___m_Normals_1;
	// Unity.Collections.NativeArray`1<System.Int32> UnityEngine.XR.ARSubsystems.XRFaceMesh::m_Indices
	NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  ___m_Indices_2;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARSubsystems.XRFaceMesh::m_UVs
	NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  ___m_UVs_3;

public:
	inline static int32_t get_offset_of_m_Vertices_0() { return static_cast<int32_t>(offsetof(XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0, ___m_Vertices_0)); }
	inline NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  get_m_Vertices_0() const { return ___m_Vertices_0; }
	inline NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 * get_address_of_m_Vertices_0() { return &___m_Vertices_0; }
	inline void set_m_Vertices_0(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  value)
	{
		___m_Vertices_0 = value;
	}

	inline static int32_t get_offset_of_m_Normals_1() { return static_cast<int32_t>(offsetof(XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0, ___m_Normals_1)); }
	inline NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  get_m_Normals_1() const { return ___m_Normals_1; }
	inline NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 * get_address_of_m_Normals_1() { return &___m_Normals_1; }
	inline void set_m_Normals_1(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  value)
	{
		___m_Normals_1 = value;
	}

	inline static int32_t get_offset_of_m_Indices_2() { return static_cast<int32_t>(offsetof(XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0, ___m_Indices_2)); }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  get_m_Indices_2() const { return ___m_Indices_2; }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * get_address_of_m_Indices_2() { return &___m_Indices_2; }
	inline void set_m_Indices_2(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  value)
	{
		___m_Indices_2 = value;
	}

	inline static int32_t get_offset_of_m_UVs_3() { return static_cast<int32_t>(offsetof(XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0, ___m_UVs_3)); }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  get_m_UVs_3() const { return ___m_UVs_3; }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * get_address_of_m_UVs_3() { return &___m_UVs_3; }
	inline void set_m_UVs_3(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  value)
	{
		___m_UVs_3 = value;
	}
};


// UnityEngine.XR.Management.XRLoader
struct XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:

public:
};


// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_InitializationComplete
	bool ___m_InitializationComplete_4;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_RequiresSettingsUpdate
	bool ___m_RequiresSettingsUpdate_5;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticLoading
	bool ___m_AutomaticLoading_6;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticRunning
	bool ___m_AutomaticRunning_7;
	// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_Loaders
	List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 * ___m_Loaders_8;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_RegisteredLoaders
	HashSet_1_t0BB7AD0707F32BD77A251670A64E2F9355AC13F6 * ___m_RegisteredLoaders_9;
	// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::<activeLoader>k__BackingField
	XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * ___U3CactiveLoaderU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_m_InitializationComplete_4() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_InitializationComplete_4)); }
	inline bool get_m_InitializationComplete_4() const { return ___m_InitializationComplete_4; }
	inline bool* get_address_of_m_InitializationComplete_4() { return &___m_InitializationComplete_4; }
	inline void set_m_InitializationComplete_4(bool value)
	{
		___m_InitializationComplete_4 = value;
	}

	inline static int32_t get_offset_of_m_RequiresSettingsUpdate_5() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_RequiresSettingsUpdate_5)); }
	inline bool get_m_RequiresSettingsUpdate_5() const { return ___m_RequiresSettingsUpdate_5; }
	inline bool* get_address_of_m_RequiresSettingsUpdate_5() { return &___m_RequiresSettingsUpdate_5; }
	inline void set_m_RequiresSettingsUpdate_5(bool value)
	{
		___m_RequiresSettingsUpdate_5 = value;
	}

	inline static int32_t get_offset_of_m_AutomaticLoading_6() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_AutomaticLoading_6)); }
	inline bool get_m_AutomaticLoading_6() const { return ___m_AutomaticLoading_6; }
	inline bool* get_address_of_m_AutomaticLoading_6() { return &___m_AutomaticLoading_6; }
	inline void set_m_AutomaticLoading_6(bool value)
	{
		___m_AutomaticLoading_6 = value;
	}

	inline static int32_t get_offset_of_m_AutomaticRunning_7() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_AutomaticRunning_7)); }
	inline bool get_m_AutomaticRunning_7() const { return ___m_AutomaticRunning_7; }
	inline bool* get_address_of_m_AutomaticRunning_7() { return &___m_AutomaticRunning_7; }
	inline void set_m_AutomaticRunning_7(bool value)
	{
		___m_AutomaticRunning_7 = value;
	}

	inline static int32_t get_offset_of_m_Loaders_8() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_Loaders_8)); }
	inline List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 * get_m_Loaders_8() const { return ___m_Loaders_8; }
	inline List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 ** get_address_of_m_Loaders_8() { return &___m_Loaders_8; }
	inline void set_m_Loaders_8(List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 * value)
	{
		___m_Loaders_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Loaders_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_RegisteredLoaders_9() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_RegisteredLoaders_9)); }
	inline HashSet_1_t0BB7AD0707F32BD77A251670A64E2F9355AC13F6 * get_m_RegisteredLoaders_9() const { return ___m_RegisteredLoaders_9; }
	inline HashSet_1_t0BB7AD0707F32BD77A251670A64E2F9355AC13F6 ** get_address_of_m_RegisteredLoaders_9() { return &___m_RegisteredLoaders_9; }
	inline void set_m_RegisteredLoaders_9(HashSet_1_t0BB7AD0707F32BD77A251670A64E2F9355AC13F6 * value)
	{
		___m_RegisteredLoaders_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RegisteredLoaders_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CactiveLoaderU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___U3CactiveLoaderU3Ek__BackingField_10)); }
	inline XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * get_U3CactiveLoaderU3Ek__BackingField_10() const { return ___U3CactiveLoaderU3Ek__BackingField_10; }
	inline XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B ** get_address_of_U3CactiveLoaderU3Ek__BackingField_10() { return &___U3CactiveLoaderU3Ek__BackingField_10; }
	inline void set_U3CactiveLoaderU3Ek__BackingField_10(XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * value)
	{
		___U3CactiveLoaderU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CactiveLoaderU3Ek__BackingField_10), (void*)value);
	}
};


// UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/TransformPositionsJob
struct TransformPositionsJob_t76836F51EABF9ECE4503F3ECAC1DA2C32D0DA468 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.Quaternion> UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/TransformPositionsJob::positionsIn
	NativeArray_1_t2672EA3A09E3FE76419439DC581905D460584A60  ___positionsIn_0;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector3> UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/TransformPositionsJob::positionsOut
	NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  ___positionsOut_1;

public:
	inline static int32_t get_offset_of_positionsIn_0() { return static_cast<int32_t>(offsetof(TransformPositionsJob_t76836F51EABF9ECE4503F3ECAC1DA2C32D0DA468, ___positionsIn_0)); }
	inline NativeArray_1_t2672EA3A09E3FE76419439DC581905D460584A60  get_positionsIn_0() const { return ___positionsIn_0; }
	inline NativeArray_1_t2672EA3A09E3FE76419439DC581905D460584A60 * get_address_of_positionsIn_0() { return &___positionsIn_0; }
	inline void set_positionsIn_0(NativeArray_1_t2672EA3A09E3FE76419439DC581905D460584A60  value)
	{
		___positionsIn_0 = value;
	}

	inline static int32_t get_offset_of_positionsOut_1() { return static_cast<int32_t>(offsetof(TransformPositionsJob_t76836F51EABF9ECE4503F3ECAC1DA2C32D0DA468, ___positionsOut_1)); }
	inline NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  get_positionsOut_1() const { return ___positionsOut_1; }
	inline NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 * get_address_of_positionsOut_1() { return &___positionsOut_1; }
	inline void set_positionsOut_1(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  value)
	{
		___positionsOut_1 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastCollectResultsJob
struct PointCloudRaycastCollectResultsJob_t5BFBE359542CF027CBCCAA334BA76CF64F29627D 
{
public:
	// Unity.Collections.NativeSlice`1<UnityEngine.Vector3> UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastCollectResultsJob::points
	NativeSlice_1_tCD0AC77C2E3CDA052D42479FF29B6F9F6454B125  ___points_0;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastInfo> UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastCollectResultsJob::infos
	NativeArray_1_tB6E97581BF5878BBE04DA5C6C7173C33D56114DD  ___infos_1;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit> UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastCollectResultsJob::hits
	NativeArray_1_t35F2E89DF840C06C68595E9289A07A26CBB07FCB  ___hits_2;
	// Unity.Collections.NativeArray`1<System.Int32> UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastCollectResultsJob::count
	NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  ___count_3;
	// System.Single UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastCollectResultsJob::cosineThreshold
	float ___cosineThreshold_4;
	// UnityEngine.Pose UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastCollectResultsJob::pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___pose_5;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastCollectResultsJob::trackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___trackableId_6;

public:
	inline static int32_t get_offset_of_points_0() { return static_cast<int32_t>(offsetof(PointCloudRaycastCollectResultsJob_t5BFBE359542CF027CBCCAA334BA76CF64F29627D, ___points_0)); }
	inline NativeSlice_1_tCD0AC77C2E3CDA052D42479FF29B6F9F6454B125  get_points_0() const { return ___points_0; }
	inline NativeSlice_1_tCD0AC77C2E3CDA052D42479FF29B6F9F6454B125 * get_address_of_points_0() { return &___points_0; }
	inline void set_points_0(NativeSlice_1_tCD0AC77C2E3CDA052D42479FF29B6F9F6454B125  value)
	{
		___points_0 = value;
	}

	inline static int32_t get_offset_of_infos_1() { return static_cast<int32_t>(offsetof(PointCloudRaycastCollectResultsJob_t5BFBE359542CF027CBCCAA334BA76CF64F29627D, ___infos_1)); }
	inline NativeArray_1_tB6E97581BF5878BBE04DA5C6C7173C33D56114DD  get_infos_1() const { return ___infos_1; }
	inline NativeArray_1_tB6E97581BF5878BBE04DA5C6C7173C33D56114DD * get_address_of_infos_1() { return &___infos_1; }
	inline void set_infos_1(NativeArray_1_tB6E97581BF5878BBE04DA5C6C7173C33D56114DD  value)
	{
		___infos_1 = value;
	}

	inline static int32_t get_offset_of_hits_2() { return static_cast<int32_t>(offsetof(PointCloudRaycastCollectResultsJob_t5BFBE359542CF027CBCCAA334BA76CF64F29627D, ___hits_2)); }
	inline NativeArray_1_t35F2E89DF840C06C68595E9289A07A26CBB07FCB  get_hits_2() const { return ___hits_2; }
	inline NativeArray_1_t35F2E89DF840C06C68595E9289A07A26CBB07FCB * get_address_of_hits_2() { return &___hits_2; }
	inline void set_hits_2(NativeArray_1_t35F2E89DF840C06C68595E9289A07A26CBB07FCB  value)
	{
		___hits_2 = value;
	}

	inline static int32_t get_offset_of_count_3() { return static_cast<int32_t>(offsetof(PointCloudRaycastCollectResultsJob_t5BFBE359542CF027CBCCAA334BA76CF64F29627D, ___count_3)); }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  get_count_3() const { return ___count_3; }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * get_address_of_count_3() { return &___count_3; }
	inline void set_count_3(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  value)
	{
		___count_3 = value;
	}

	inline static int32_t get_offset_of_cosineThreshold_4() { return static_cast<int32_t>(offsetof(PointCloudRaycastCollectResultsJob_t5BFBE359542CF027CBCCAA334BA76CF64F29627D, ___cosineThreshold_4)); }
	inline float get_cosineThreshold_4() const { return ___cosineThreshold_4; }
	inline float* get_address_of_cosineThreshold_4() { return &___cosineThreshold_4; }
	inline void set_cosineThreshold_4(float value)
	{
		___cosineThreshold_4 = value;
	}

	inline static int32_t get_offset_of_pose_5() { return static_cast<int32_t>(offsetof(PointCloudRaycastCollectResultsJob_t5BFBE359542CF027CBCCAA334BA76CF64F29627D, ___pose_5)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_pose_5() const { return ___pose_5; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_pose_5() { return &___pose_5; }
	inline void set_pose_5(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___pose_5 = value;
	}

	inline static int32_t get_offset_of_trackableId_6() { return static_cast<int32_t>(offsetof(PointCloudRaycastCollectResultsJob_t5BFBE359542CF027CBCCAA334BA76CF64F29627D, ___trackableId_6)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_trackableId_6() const { return ___trackableId_6; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_trackableId_6() { return &___trackableId_6; }
	inline void set_trackableId_6(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___trackableId_6 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastJob
struct PointCloudRaycastJob_t097E5071568968353900E36DD9110FEC04135270 
{
public:
	// Unity.Collections.NativeSlice`1<UnityEngine.Vector3> UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastJob::points
	NativeSlice_1_tCD0AC77C2E3CDA052D42479FF29B6F9F6454B125  ___points_0;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastInfo> UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastJob::infoOut
	NativeArray_1_tB6E97581BF5878BBE04DA5C6C7173C33D56114DD  ___infoOut_1;
	// UnityEngine.Ray UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastJob::ray
	Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___ray_2;

public:
	inline static int32_t get_offset_of_points_0() { return static_cast<int32_t>(offsetof(PointCloudRaycastJob_t097E5071568968353900E36DD9110FEC04135270, ___points_0)); }
	inline NativeSlice_1_tCD0AC77C2E3CDA052D42479FF29B6F9F6454B125  get_points_0() const { return ___points_0; }
	inline NativeSlice_1_tCD0AC77C2E3CDA052D42479FF29B6F9F6454B125 * get_address_of_points_0() { return &___points_0; }
	inline void set_points_0(NativeSlice_1_tCD0AC77C2E3CDA052D42479FF29B6F9F6454B125  value)
	{
		___points_0 = value;
	}

	inline static int32_t get_offset_of_infoOut_1() { return static_cast<int32_t>(offsetof(PointCloudRaycastJob_t097E5071568968353900E36DD9110FEC04135270, ___infoOut_1)); }
	inline NativeArray_1_tB6E97581BF5878BBE04DA5C6C7173C33D56114DD  get_infoOut_1() const { return ___infoOut_1; }
	inline NativeArray_1_tB6E97581BF5878BBE04DA5C6C7173C33D56114DD * get_address_of_infoOut_1() { return &___infoOut_1; }
	inline void set_infoOut_1(NativeArray_1_tB6E97581BF5878BBE04DA5C6C7173C33D56114DD  value)
	{
		___infoOut_1 = value;
	}

	inline static int32_t get_offset_of_ray_2() { return static_cast<int32_t>(offsetof(PointCloudRaycastJob_t097E5071568968353900E36DD9110FEC04135270, ___ray_2)); }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  get_ray_2() const { return ___ray_2; }
	inline Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 * get_address_of_ray_2() { return &___ray_2; }
	inline void set_ray_2(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  value)
	{
		___ray_2 = value;
	}
};


// UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem
struct ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA 
{
public:
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem::<name>k__BackingField
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___U3CnameU3Ek__BackingField_0;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem::<layout>k__BackingField
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___U3ClayoutU3Ek__BackingField_1;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem::<variants>k__BackingField
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___U3CvariantsU3Ek__BackingField_2;
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem::<useStateFrom>k__BackingField
	String_t* ___U3CuseStateFromU3Ek__BackingField_3;
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem::<displayName>k__BackingField
	String_t* ___U3CdisplayNameU3Ek__BackingField_4;
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem::<shortDisplayName>k__BackingField
	String_t* ___U3CshortDisplayNameU3Ek__BackingField_5;
	// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem::<usages>k__BackingField
	ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E  ___U3CusagesU3Ek__BackingField_6;
	// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem::<aliases>k__BackingField
	ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E  ___U3CaliasesU3Ek__BackingField_7;
	// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.Utilities.NamedValue> UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem::<parameters>k__BackingField
	ReadOnlyArray_1_t6FE717AFD2F26F2DEB5FED5B30524738781C25CE  ___U3CparametersU3Ek__BackingField_8;
	// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.Utilities.NameAndParameters> UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem::<processors>k__BackingField
	ReadOnlyArray_1_tFDE28AEF065032FD07DBD63327E0E166901BA3ED  ___U3CprocessorsU3Ek__BackingField_9;
	// System.UInt32 UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem::<offset>k__BackingField
	uint32_t ___U3CoffsetU3Ek__BackingField_10;
	// System.UInt32 UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem::<bit>k__BackingField
	uint32_t ___U3CbitU3Ek__BackingField_11;
	// System.UInt32 UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem::<sizeInBits>k__BackingField
	uint32_t ___U3CsizeInBitsU3Ek__BackingField_12;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem::<format>k__BackingField
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___U3CformatU3Ek__BackingField_13;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem/Flags UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem::<flags>k__BackingField
	int32_t ___U3CflagsU3Ek__BackingField_14;
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem::<arraySize>k__BackingField
	int32_t ___U3CarraySizeU3Ek__BackingField_15;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem::<defaultState>k__BackingField
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  ___U3CdefaultStateU3Ek__BackingField_16;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem::<minValue>k__BackingField
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  ___U3CminValueU3Ek__BackingField_17;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem::<maxValue>k__BackingField
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  ___U3CmaxValueU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA, ___U3CnameU3Ek__BackingField_0)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CnameU3Ek__BackingField_0))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CnameU3Ek__BackingField_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3ClayoutU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA, ___U3ClayoutU3Ek__BackingField_1)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_U3ClayoutU3Ek__BackingField_1() const { return ___U3ClayoutU3Ek__BackingField_1; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_U3ClayoutU3Ek__BackingField_1() { return &___U3ClayoutU3Ek__BackingField_1; }
	inline void set_U3ClayoutU3Ek__BackingField_1(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___U3ClayoutU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3ClayoutU3Ek__BackingField_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3ClayoutU3Ek__BackingField_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CvariantsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA, ___U3CvariantsU3Ek__BackingField_2)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_U3CvariantsU3Ek__BackingField_2() const { return ___U3CvariantsU3Ek__BackingField_2; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_U3CvariantsU3Ek__BackingField_2() { return &___U3CvariantsU3Ek__BackingField_2; }
	inline void set_U3CvariantsU3Ek__BackingField_2(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___U3CvariantsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CvariantsU3Ek__BackingField_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CvariantsU3Ek__BackingField_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CuseStateFromU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA, ___U3CuseStateFromU3Ek__BackingField_3)); }
	inline String_t* get_U3CuseStateFromU3Ek__BackingField_3() const { return ___U3CuseStateFromU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CuseStateFromU3Ek__BackingField_3() { return &___U3CuseStateFromU3Ek__BackingField_3; }
	inline void set_U3CuseStateFromU3Ek__BackingField_3(String_t* value)
	{
		___U3CuseStateFromU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CuseStateFromU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisplayNameU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA, ___U3CdisplayNameU3Ek__BackingField_4)); }
	inline String_t* get_U3CdisplayNameU3Ek__BackingField_4() const { return ___U3CdisplayNameU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CdisplayNameU3Ek__BackingField_4() { return &___U3CdisplayNameU3Ek__BackingField_4; }
	inline void set_U3CdisplayNameU3Ek__BackingField_4(String_t* value)
	{
		___U3CdisplayNameU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdisplayNameU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CshortDisplayNameU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA, ___U3CshortDisplayNameU3Ek__BackingField_5)); }
	inline String_t* get_U3CshortDisplayNameU3Ek__BackingField_5() const { return ___U3CshortDisplayNameU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CshortDisplayNameU3Ek__BackingField_5() { return &___U3CshortDisplayNameU3Ek__BackingField_5; }
	inline void set_U3CshortDisplayNameU3Ek__BackingField_5(String_t* value)
	{
		___U3CshortDisplayNameU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CshortDisplayNameU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CusagesU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA, ___U3CusagesU3Ek__BackingField_6)); }
	inline ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E  get_U3CusagesU3Ek__BackingField_6() const { return ___U3CusagesU3Ek__BackingField_6; }
	inline ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E * get_address_of_U3CusagesU3Ek__BackingField_6() { return &___U3CusagesU3Ek__BackingField_6; }
	inline void set_U3CusagesU3Ek__BackingField_6(ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E  value)
	{
		___U3CusagesU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CusagesU3Ek__BackingField_6))->___m_Array_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CaliasesU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA, ___U3CaliasesU3Ek__BackingField_7)); }
	inline ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E  get_U3CaliasesU3Ek__BackingField_7() const { return ___U3CaliasesU3Ek__BackingField_7; }
	inline ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E * get_address_of_U3CaliasesU3Ek__BackingField_7() { return &___U3CaliasesU3Ek__BackingField_7; }
	inline void set_U3CaliasesU3Ek__BackingField_7(ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E  value)
	{
		___U3CaliasesU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CaliasesU3Ek__BackingField_7))->___m_Array_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CparametersU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA, ___U3CparametersU3Ek__BackingField_8)); }
	inline ReadOnlyArray_1_t6FE717AFD2F26F2DEB5FED5B30524738781C25CE  get_U3CparametersU3Ek__BackingField_8() const { return ___U3CparametersU3Ek__BackingField_8; }
	inline ReadOnlyArray_1_t6FE717AFD2F26F2DEB5FED5B30524738781C25CE * get_address_of_U3CparametersU3Ek__BackingField_8() { return &___U3CparametersU3Ek__BackingField_8; }
	inline void set_U3CparametersU3Ek__BackingField_8(ReadOnlyArray_1_t6FE717AFD2F26F2DEB5FED5B30524738781C25CE  value)
	{
		___U3CparametersU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CparametersU3Ek__BackingField_8))->___m_Array_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CprocessorsU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA, ___U3CprocessorsU3Ek__BackingField_9)); }
	inline ReadOnlyArray_1_tFDE28AEF065032FD07DBD63327E0E166901BA3ED  get_U3CprocessorsU3Ek__BackingField_9() const { return ___U3CprocessorsU3Ek__BackingField_9; }
	inline ReadOnlyArray_1_tFDE28AEF065032FD07DBD63327E0E166901BA3ED * get_address_of_U3CprocessorsU3Ek__BackingField_9() { return &___U3CprocessorsU3Ek__BackingField_9; }
	inline void set_U3CprocessorsU3Ek__BackingField_9(ReadOnlyArray_1_tFDE28AEF065032FD07DBD63327E0E166901BA3ED  value)
	{
		___U3CprocessorsU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CprocessorsU3Ek__BackingField_9))->___m_Array_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CoffsetU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA, ___U3CoffsetU3Ek__BackingField_10)); }
	inline uint32_t get_U3CoffsetU3Ek__BackingField_10() const { return ___U3CoffsetU3Ek__BackingField_10; }
	inline uint32_t* get_address_of_U3CoffsetU3Ek__BackingField_10() { return &___U3CoffsetU3Ek__BackingField_10; }
	inline void set_U3CoffsetU3Ek__BackingField_10(uint32_t value)
	{
		___U3CoffsetU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CbitU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA, ___U3CbitU3Ek__BackingField_11)); }
	inline uint32_t get_U3CbitU3Ek__BackingField_11() const { return ___U3CbitU3Ek__BackingField_11; }
	inline uint32_t* get_address_of_U3CbitU3Ek__BackingField_11() { return &___U3CbitU3Ek__BackingField_11; }
	inline void set_U3CbitU3Ek__BackingField_11(uint32_t value)
	{
		___U3CbitU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CsizeInBitsU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA, ___U3CsizeInBitsU3Ek__BackingField_12)); }
	inline uint32_t get_U3CsizeInBitsU3Ek__BackingField_12() const { return ___U3CsizeInBitsU3Ek__BackingField_12; }
	inline uint32_t* get_address_of_U3CsizeInBitsU3Ek__BackingField_12() { return &___U3CsizeInBitsU3Ek__BackingField_12; }
	inline void set_U3CsizeInBitsU3Ek__BackingField_12(uint32_t value)
	{
		___U3CsizeInBitsU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CformatU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA, ___U3CformatU3Ek__BackingField_13)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_U3CformatU3Ek__BackingField_13() const { return ___U3CformatU3Ek__BackingField_13; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_U3CformatU3Ek__BackingField_13() { return &___U3CformatU3Ek__BackingField_13; }
	inline void set_U3CformatU3Ek__BackingField_13(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___U3CformatU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CflagsU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA, ___U3CflagsU3Ek__BackingField_14)); }
	inline int32_t get_U3CflagsU3Ek__BackingField_14() const { return ___U3CflagsU3Ek__BackingField_14; }
	inline int32_t* get_address_of_U3CflagsU3Ek__BackingField_14() { return &___U3CflagsU3Ek__BackingField_14; }
	inline void set_U3CflagsU3Ek__BackingField_14(int32_t value)
	{
		___U3CflagsU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CarraySizeU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA, ___U3CarraySizeU3Ek__BackingField_15)); }
	inline int32_t get_U3CarraySizeU3Ek__BackingField_15() const { return ___U3CarraySizeU3Ek__BackingField_15; }
	inline int32_t* get_address_of_U3CarraySizeU3Ek__BackingField_15() { return &___U3CarraySizeU3Ek__BackingField_15; }
	inline void set_U3CarraySizeU3Ek__BackingField_15(int32_t value)
	{
		___U3CarraySizeU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CdefaultStateU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA, ___U3CdefaultStateU3Ek__BackingField_16)); }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  get_U3CdefaultStateU3Ek__BackingField_16() const { return ___U3CdefaultStateU3Ek__BackingField_16; }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 * get_address_of_U3CdefaultStateU3Ek__BackingField_16() { return &___U3CdefaultStateU3Ek__BackingField_16; }
	inline void set_U3CdefaultStateU3Ek__BackingField_16(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  value)
	{
		___U3CdefaultStateU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CminValueU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA, ___U3CminValueU3Ek__BackingField_17)); }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  get_U3CminValueU3Ek__BackingField_17() const { return ___U3CminValueU3Ek__BackingField_17; }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 * get_address_of_U3CminValueU3Ek__BackingField_17() { return &___U3CminValueU3Ek__BackingField_17; }
	inline void set_U3CminValueU3Ek__BackingField_17(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  value)
	{
		___U3CminValueU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CmaxValueU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA, ___U3CmaxValueU3Ek__BackingField_18)); }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  get_U3CmaxValueU3Ek__BackingField_18() const { return ___U3CmaxValueU3Ek__BackingField_18; }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 * get_address_of_U3CmaxValueU3Ek__BackingField_18() { return &___U3CmaxValueU3Ek__BackingField_18; }
	inline void set_U3CmaxValueU3Ek__BackingField_18(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  value)
	{
		___U3CmaxValueU3Ek__BackingField_18 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem
struct ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA_marshaled_pinvoke
{
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8_marshaled_pinvoke ___U3CnameU3Ek__BackingField_0;
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8_marshaled_pinvoke ___U3ClayoutU3Ek__BackingField_1;
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8_marshaled_pinvoke ___U3CvariantsU3Ek__BackingField_2;
	char* ___U3CuseStateFromU3Ek__BackingField_3;
	char* ___U3CdisplayNameU3Ek__BackingField_4;
	char* ___U3CshortDisplayNameU3Ek__BackingField_5;
	ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E  ___U3CusagesU3Ek__BackingField_6;
	ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E  ___U3CaliasesU3Ek__BackingField_7;
	ReadOnlyArray_1_t6FE717AFD2F26F2DEB5FED5B30524738781C25CE  ___U3CparametersU3Ek__BackingField_8;
	ReadOnlyArray_1_tFDE28AEF065032FD07DBD63327E0E166901BA3ED  ___U3CprocessorsU3Ek__BackingField_9;
	uint32_t ___U3CoffsetU3Ek__BackingField_10;
	uint32_t ___U3CbitU3Ek__BackingField_11;
	uint32_t ___U3CsizeInBitsU3Ek__BackingField_12;
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___U3CformatU3Ek__BackingField_13;
	int32_t ___U3CflagsU3Ek__BackingField_14;
	int32_t ___U3CarraySizeU3Ek__BackingField_15;
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshaled_pinvoke ___U3CdefaultStateU3Ek__BackingField_16;
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshaled_pinvoke ___U3CminValueU3Ek__BackingField_17;
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshaled_pinvoke ___U3CmaxValueU3Ek__BackingField_18;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem
struct ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA_marshaled_com
{
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8_marshaled_com ___U3CnameU3Ek__BackingField_0;
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8_marshaled_com ___U3ClayoutU3Ek__BackingField_1;
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8_marshaled_com ___U3CvariantsU3Ek__BackingField_2;
	Il2CppChar* ___U3CuseStateFromU3Ek__BackingField_3;
	Il2CppChar* ___U3CdisplayNameU3Ek__BackingField_4;
	Il2CppChar* ___U3CshortDisplayNameU3Ek__BackingField_5;
	ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E  ___U3CusagesU3Ek__BackingField_6;
	ReadOnlyArray_1_t8C9848EB895D25E13E9D523CEDBB5580000CF14E  ___U3CaliasesU3Ek__BackingField_7;
	ReadOnlyArray_1_t6FE717AFD2F26F2DEB5FED5B30524738781C25CE  ___U3CparametersU3Ek__BackingField_8;
	ReadOnlyArray_1_tFDE28AEF065032FD07DBD63327E0E166901BA3ED  ___U3CprocessorsU3Ek__BackingField_9;
	uint32_t ___U3CoffsetU3Ek__BackingField_10;
	uint32_t ___U3CbitU3Ek__BackingField_11;
	uint32_t ___U3CsizeInBitsU3Ek__BackingField_12;
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___U3CformatU3Ek__BackingField_13;
	int32_t ___U3CflagsU3Ek__BackingField_14;
	int32_t ___U3CarraySizeU3Ek__BackingField_15;
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshaled_com ___U3CdefaultStateU3Ek__BackingField_16;
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshaled_com ___U3CminValueU3Ek__BackingField_17;
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshaled_com ___U3CmaxValueU3Ek__BackingField_18;
};

// UnityEngine.XR.ARFoundation.MutableRuntimeReferenceImageLibraryExtensions/DeallocateJob
struct DeallocateJob_tF0BF8A44A01B3EF170E51703A5B2977021DD76CF 
{
public:
	// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.XR.ARFoundation.MutableRuntimeReferenceImageLibraryExtensions/DeallocateJob::data
	NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  ___data_0;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(DeallocateJob_tF0BF8A44A01B3EF170E51703A5B2977021DD76CF, ___data_0)); }
	inline NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  get_data_0() const { return ___data_0; }
	inline NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 * get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  value)
	{
		___data_0 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/TransformIndicesJob
struct TransformIndicesJob_tFF87C2E297015EECA6853BA147171FF78D123302 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/Triangle`1<System.Int16>> UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/TransformIndicesJob::triangleIndicesIn
	NativeArray_1_tE10EA3995F906F16A488A42FE362A2EFA0A4D197  ___triangleIndicesIn_0;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/Triangle`1<System.Int32>> UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/TransformIndicesJob::triangleIndicesOut
	NativeArray_1_t61ABCFB5F1A9FF2864A2760E1E84A5E656715219  ___triangleIndicesOut_1;

public:
	inline static int32_t get_offset_of_triangleIndicesIn_0() { return static_cast<int32_t>(offsetof(TransformIndicesJob_tFF87C2E297015EECA6853BA147171FF78D123302, ___triangleIndicesIn_0)); }
	inline NativeArray_1_tE10EA3995F906F16A488A42FE362A2EFA0A4D197  get_triangleIndicesIn_0() const { return ___triangleIndicesIn_0; }
	inline NativeArray_1_tE10EA3995F906F16A488A42FE362A2EFA0A4D197 * get_address_of_triangleIndicesIn_0() { return &___triangleIndicesIn_0; }
	inline void set_triangleIndicesIn_0(NativeArray_1_tE10EA3995F906F16A488A42FE362A2EFA0A4D197  value)
	{
		___triangleIndicesIn_0 = value;
	}

	inline static int32_t get_offset_of_triangleIndicesOut_1() { return static_cast<int32_t>(offsetof(TransformIndicesJob_tFF87C2E297015EECA6853BA147171FF78D123302, ___triangleIndicesOut_1)); }
	inline NativeArray_1_t61ABCFB5F1A9FF2864A2760E1E84A5E656715219  get_triangleIndicesOut_1() const { return ___triangleIndicesOut_1; }
	inline NativeArray_1_t61ABCFB5F1A9FF2864A2760E1E84A5E656715219 * get_address_of_triangleIndicesOut_1() { return &___triangleIndicesOut_1; }
	inline void set_triangleIndicesOut_1(NativeArray_1_t61ABCFB5F1A9FF2864A2760E1E84A5E656715219  value)
	{
		___triangleIndicesOut_1 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/TransformUVsJob
struct TransformUVsJob_tCABA7AB1790251392EC9FCA81A3EBD0E579F3E0A 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/TransformUVsJob::uvsIn
	NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  ___uvsIn_0;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/TransformUVsJob::uvsOut
	NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  ___uvsOut_1;

public:
	inline static int32_t get_offset_of_uvsIn_0() { return static_cast<int32_t>(offsetof(TransformUVsJob_tCABA7AB1790251392EC9FCA81A3EBD0E579F3E0A, ___uvsIn_0)); }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  get_uvsIn_0() const { return ___uvsIn_0; }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * get_address_of_uvsIn_0() { return &___uvsIn_0; }
	inline void set_uvsIn_0(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  value)
	{
		___uvsIn_0 = value;
	}

	inline static int32_t get_offset_of_uvsOut_1() { return static_cast<int32_t>(offsetof(TransformUVsJob_tCABA7AB1790251392EC9FCA81A3EBD0E579F3E0A, ___uvsOut_1)); }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  get_uvsOut_1() const { return ___uvsOut_1; }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * get_address_of_uvsOut_1() { return &___uvsOut_1; }
	inline void set_uvsOut_1(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  value)
	{
		___uvsOut_1 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/TransformVerticesJob
struct TransformVerticesJob_t2238CFDB87B56D80881834E0BEDBFE25D9133239 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.Vector4> UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/TransformVerticesJob::verticesIn
	NativeArray_1_t381CA7D92591F9C96DB84965C31AF8713A546156  ___verticesIn_0;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector3> UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/TransformVerticesJob::verticesOut
	NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  ___verticesOut_1;

public:
	inline static int32_t get_offset_of_verticesIn_0() { return static_cast<int32_t>(offsetof(TransformVerticesJob_t2238CFDB87B56D80881834E0BEDBFE25D9133239, ___verticesIn_0)); }
	inline NativeArray_1_t381CA7D92591F9C96DB84965C31AF8713A546156  get_verticesIn_0() const { return ___verticesIn_0; }
	inline NativeArray_1_t381CA7D92591F9C96DB84965C31AF8713A546156 * get_address_of_verticesIn_0() { return &___verticesIn_0; }
	inline void set_verticesIn_0(NativeArray_1_t381CA7D92591F9C96DB84965C31AF8713A546156  value)
	{
		___verticesIn_0 = value;
	}

	inline static int32_t get_offset_of_verticesOut_1() { return static_cast<int32_t>(offsetof(TransformVerticesJob_t2238CFDB87B56D80881834E0BEDBFE25D9133239, ___verticesOut_1)); }
	inline NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  get_verticesOut_1() const { return ___verticesOut_1; }
	inline NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 * get_address_of_verticesOut_1() { return &___verticesOut_1; }
	inline void set_verticesOut_1(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  value)
	{
		___verticesOut_1 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/ARKitProvider/FlipBoundaryWindingJob
struct FlipBoundaryWindingJob_t726CFFAB953CC7C841EE74365C27322E57A2A5DA 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/ARKitProvider/FlipBoundaryWindingJob::positions
	NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  ___positions_0;

public:
	inline static int32_t get_offset_of_positions_0() { return static_cast<int32_t>(offsetof(FlipBoundaryWindingJob_t726CFFAB953CC7C841EE74365C27322E57A2A5DA, ___positions_0)); }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  get_positions_0() const { return ___positions_0; }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * get_address_of_positions_0() { return &___positions_0; }
	inline void set_positions_0(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  value)
	{
		___positions_0 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/ARKitProvider/TransformBoundaryPositionsJob
struct TransformBoundaryPositionsJob_t538BF69F9F744EBC94AA0487075746AD113A64FE 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.Vector4> UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/ARKitProvider/TransformBoundaryPositionsJob::positionsIn
	NativeArray_1_t381CA7D92591F9C96DB84965C31AF8713A546156  ___positionsIn_0;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/ARKitProvider/TransformBoundaryPositionsJob::positionsOut
	NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  ___positionsOut_1;

public:
	inline static int32_t get_offset_of_positionsIn_0() { return static_cast<int32_t>(offsetof(TransformBoundaryPositionsJob_t538BF69F9F744EBC94AA0487075746AD113A64FE, ___positionsIn_0)); }
	inline NativeArray_1_t381CA7D92591F9C96DB84965C31AF8713A546156  get_positionsIn_0() const { return ___positionsIn_0; }
	inline NativeArray_1_t381CA7D92591F9C96DB84965C31AF8713A546156 * get_address_of_positionsIn_0() { return &___positionsIn_0; }
	inline void set_positionsIn_0(NativeArray_1_t381CA7D92591F9C96DB84965C31AF8713A546156  value)
	{
		___positionsIn_0 = value;
	}

	inline static int32_t get_offset_of_positionsOut_1() { return static_cast<int32_t>(offsetof(TransformBoundaryPositionsJob_t538BF69F9F744EBC94AA0487075746AD113A64FE, ___positionsOut_1)); }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  get_positionsOut_1() const { return ___positionsOut_1; }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * get_address_of_positionsOut_1() { return &___positionsOut_1; }
	inline void set_positionsOut_1(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  value)
	{
		___positionsOut_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>
struct AlignOfHelper_1_tA3E84084F2481EAEB679B679FC3DB35961106690 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tA3E84084F2481EAEB679B679FC3DB35961106690, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tA3E84084F2481EAEB679B679FC3DB35961106690, ___data_1)); }
	inline XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C  get_data_1() const { return ___data_1; }
	inline XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C  value)
	{
		___data_1 = value;
	}
};


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// UnityEngine.InputSystem.LowLevel.DeviceConfigurationEvent
struct DeviceConfigurationEvent_t51EE5A7A8F7809D82FA5C1982C745D41368819F4 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngine.InputSystem.LowLevel.InputEvent UnityEngine.InputSystem.LowLevel.DeviceConfigurationEvent::baseEvent
					InputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92  ___baseEvent_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					InputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92  ___baseEvent_1_forAlignmentOnly;
				};
			};
		};
		uint8_t DeviceConfigurationEvent_t51EE5A7A8F7809D82FA5C1982C745D41368819F4__padding[20];
	};

public:
	inline static int32_t get_offset_of_baseEvent_1() { return static_cast<int32_t>(offsetof(DeviceConfigurationEvent_t51EE5A7A8F7809D82FA5C1982C745D41368819F4, ___baseEvent_1)); }
	inline InputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92  get_baseEvent_1() const { return ___baseEvent_1; }
	inline InputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92 * get_address_of_baseEvent_1() { return &___baseEvent_1; }
	inline void set_baseEvent_1(InputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92  value)
	{
		___baseEvent_1 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.TextEvent
struct TextEvent_t3E243B8BC402EA8DCA52D37062B4CCAE7D60E9A5 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngine.InputSystem.LowLevel.InputEvent UnityEngine.InputSystem.LowLevel.TextEvent::baseEvent
					InputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92  ___baseEvent_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					InputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92  ___baseEvent_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___character_2_OffsetPadding[20];
					// System.Int32 UnityEngine.InputSystem.LowLevel.TextEvent::character
					int32_t ___character_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___character_2_OffsetPadding_forAlignmentOnly[20];
					int32_t ___character_2_forAlignmentOnly;
				};
			};
		};
		uint8_t TextEvent_t3E243B8BC402EA8DCA52D37062B4CCAE7D60E9A5__padding[24];
	};

public:
	inline static int32_t get_offset_of_baseEvent_1() { return static_cast<int32_t>(offsetof(TextEvent_t3E243B8BC402EA8DCA52D37062B4CCAE7D60E9A5, ___baseEvent_1)); }
	inline InputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92  get_baseEvent_1() const { return ___baseEvent_1; }
	inline InputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92 * get_address_of_baseEvent_1() { return &___baseEvent_1; }
	inline void set_baseEvent_1(InputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92  value)
	{
		___baseEvent_1 = value;
	}

	inline static int32_t get_offset_of_character_2() { return static_cast<int32_t>(offsetof(TextEvent_t3E243B8BC402EA8DCA52D37062B4CCAE7D60E9A5, ___character_2)); }
	inline int32_t get_character_2() const { return ___character_2; }
	inline int32_t* get_address_of_character_2() { return &___character_2; }
	inline void set_character_2(int32_t value)
	{
		___character_2 = value;
	}
};


// UnityEngine.XR.Management.XRLoaderHelper
struct XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013  : public XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem> UnityEngine.XR.Management.XRLoaderHelper::m_SubsystemInstanceMap
	Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B * ___m_SubsystemInstanceMap_4;

public:
	inline static int32_t get_offset_of_m_SubsystemInstanceMap_4() { return static_cast<int32_t>(offsetof(XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013, ___m_SubsystemInstanceMap_4)); }
	inline Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B * get_m_SubsystemInstanceMap_4() const { return ___m_SubsystemInstanceMap_4; }
	inline Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B ** get_address_of_m_SubsystemInstanceMap_4() { return &___m_SubsystemInstanceMap_4; }
	inline void set_m_SubsystemInstanceMap_4(Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B * value)
	{
		___m_SubsystemInstanceMap_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SubsystemInstanceMap_4), (void*)value);
	}
};


// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation
struct RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ActionToRebind
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___m_ActionToRebind_1;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_BindingMask
	Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  ___m_BindingMask_2;
	// System.Type UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ControlType
	Type_t * ___m_ControlType_3;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ExpectedLayout
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___m_ExpectedLayout_4;
	// System.Int32 UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_IncludePathCount
	int32_t ___m_IncludePathCount_5;
	// System.String[] UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_IncludePaths
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_IncludePaths_6;
	// System.Int32 UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ExcludePathCount
	int32_t ___m_ExcludePathCount_7;
	// System.String[] UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ExcludePaths
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_ExcludePaths_8;
	// System.Int32 UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_TargetBindingIndex
	int32_t ___m_TargetBindingIndex_9;
	// System.String UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_BindingGroupForNewBinding
	String_t* ___m_BindingGroupForNewBinding_10;
	// System.String UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_CancelBinding
	String_t* ___m_CancelBinding_11;
	// System.Single UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_MagnitudeThreshold
	float ___m_MagnitudeThreshold_12;
	// System.Single[] UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Scores
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___m_Scores_13;
	// System.Single[] UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Magnitudes
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___m_Magnitudes_14;
	// System.Double UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_LastMatchTime
	double ___m_LastMatchTime_15;
	// System.Double UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_StartTime
	double ___m_StartTime_16;
	// System.Single UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Timeout
	float ___m_Timeout_17;
	// System.Single UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_WaitSecondsAfterMatch
	float ___m_WaitSecondsAfterMatch_18;
	// UnityEngine.InputSystem.InputControlList`1<UnityEngine.InputSystem.InputControl> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Candidates
	InputControlList_1_tC251485A8EBE20F32C1828D6F68B450DAB732E96  ___m_Candidates_19;
	// System.Action`1<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnComplete
	Action_1_t712E64B2FB6B72A4E947CBB2975DABB73A06E663 * ___m_OnComplete_20;
	// System.Action`1<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnCancel
	Action_1_t712E64B2FB6B72A4E947CBB2975DABB73A06E663 * ___m_OnCancel_21;
	// System.Action`1<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnPotentialMatch
	Action_1_t712E64B2FB6B72A4E947CBB2975DABB73A06E663 * ___m_OnPotentialMatch_22;
	// System.Func`2<UnityEngine.InputSystem.InputControl,System.String> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnGeneratePath
	Func_2_t256D379297E9972A2E59B56A5D0276E9ED789181 * ___m_OnGeneratePath_23;
	// System.Func`3<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Single> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnComputeScore
	Func_3_tB2180AFDCB89ECEDE3ED8A30CA81B8E923416ADC * ___m_OnComputeScore_24;
	// System.Action`2<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation,System.String> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnApplyBinding
	Action_2_t1C13FAA0BE04A7EFAC5DDD87B23307535BE59B56 * ___m_OnApplyBinding_25;
	// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnEventDelegate
	Action_2_t83E2B2D05A16B14F487969D4D187AEC66413E199 * ___m_OnEventDelegate_26;
	// System.Action UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnAfterUpdateDelegate
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_OnAfterUpdateDelegate_27;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/Cache UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_LayoutCache
	Cache_t9F49740128E8F04886120C99F392DC7CEBC6AA67  ___m_LayoutCache_28;
	// System.Text.StringBuilder UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_PathBuilder
	StringBuilder_t * ___m_PathBuilder_29;
	// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation/Flags UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Flags
	int32_t ___m_Flags_30;
	// System.Int32 UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_StartingActuationsCount
	int32_t ___m_StartingActuationsCount_31;
	// System.Single[] UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_StaringActuationMagnitudes
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___m_StaringActuationMagnitudes_32;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_StartingActuationControls
	InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* ___m_StartingActuationControls_33;

public:
	inline static int32_t get_offset_of_m_ActionToRebind_1() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_ActionToRebind_1)); }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * get_m_ActionToRebind_1() const { return ___m_ActionToRebind_1; }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 ** get_address_of_m_ActionToRebind_1() { return &___m_ActionToRebind_1; }
	inline void set_m_ActionToRebind_1(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * value)
	{
		___m_ActionToRebind_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionToRebind_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_BindingMask_2() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_BindingMask_2)); }
	inline Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  get_m_BindingMask_2() const { return ___m_BindingMask_2; }
	inline Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104 * get_address_of_m_BindingMask_2() { return &___m_BindingMask_2; }
	inline void set_m_BindingMask_2(Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  value)
	{
		___m_BindingMask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_ControlType_3() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_ControlType_3)); }
	inline Type_t * get_m_ControlType_3() const { return ___m_ControlType_3; }
	inline Type_t ** get_address_of_m_ControlType_3() { return &___m_ControlType_3; }
	inline void set_m_ControlType_3(Type_t * value)
	{
		___m_ControlType_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ControlType_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExpectedLayout_4() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_ExpectedLayout_4)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_m_ExpectedLayout_4() const { return ___m_ExpectedLayout_4; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_m_ExpectedLayout_4() { return &___m_ExpectedLayout_4; }
	inline void set_m_ExpectedLayout_4(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___m_ExpectedLayout_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ExpectedLayout_4))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ExpectedLayout_4))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_IncludePathCount_5() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_IncludePathCount_5)); }
	inline int32_t get_m_IncludePathCount_5() const { return ___m_IncludePathCount_5; }
	inline int32_t* get_address_of_m_IncludePathCount_5() { return &___m_IncludePathCount_5; }
	inline void set_m_IncludePathCount_5(int32_t value)
	{
		___m_IncludePathCount_5 = value;
	}

	inline static int32_t get_offset_of_m_IncludePaths_6() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_IncludePaths_6)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_IncludePaths_6() const { return ___m_IncludePaths_6; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_IncludePaths_6() { return &___m_IncludePaths_6; }
	inline void set_m_IncludePaths_6(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_IncludePaths_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_IncludePaths_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExcludePathCount_7() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_ExcludePathCount_7)); }
	inline int32_t get_m_ExcludePathCount_7() const { return ___m_ExcludePathCount_7; }
	inline int32_t* get_address_of_m_ExcludePathCount_7() { return &___m_ExcludePathCount_7; }
	inline void set_m_ExcludePathCount_7(int32_t value)
	{
		___m_ExcludePathCount_7 = value;
	}

	inline static int32_t get_offset_of_m_ExcludePaths_8() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_ExcludePaths_8)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_ExcludePaths_8() const { return ___m_ExcludePaths_8; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_ExcludePaths_8() { return &___m_ExcludePaths_8; }
	inline void set_m_ExcludePaths_8(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_ExcludePaths_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExcludePaths_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_TargetBindingIndex_9() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_TargetBindingIndex_9)); }
	inline int32_t get_m_TargetBindingIndex_9() const { return ___m_TargetBindingIndex_9; }
	inline int32_t* get_address_of_m_TargetBindingIndex_9() { return &___m_TargetBindingIndex_9; }
	inline void set_m_TargetBindingIndex_9(int32_t value)
	{
		___m_TargetBindingIndex_9 = value;
	}

	inline static int32_t get_offset_of_m_BindingGroupForNewBinding_10() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_BindingGroupForNewBinding_10)); }
	inline String_t* get_m_BindingGroupForNewBinding_10() const { return ___m_BindingGroupForNewBinding_10; }
	inline String_t** get_address_of_m_BindingGroupForNewBinding_10() { return &___m_BindingGroupForNewBinding_10; }
	inline void set_m_BindingGroupForNewBinding_10(String_t* value)
	{
		___m_BindingGroupForNewBinding_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BindingGroupForNewBinding_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_CancelBinding_11() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_CancelBinding_11)); }
	inline String_t* get_m_CancelBinding_11() const { return ___m_CancelBinding_11; }
	inline String_t** get_address_of_m_CancelBinding_11() { return &___m_CancelBinding_11; }
	inline void set_m_CancelBinding_11(String_t* value)
	{
		___m_CancelBinding_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CancelBinding_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_MagnitudeThreshold_12() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_MagnitudeThreshold_12)); }
	inline float get_m_MagnitudeThreshold_12() const { return ___m_MagnitudeThreshold_12; }
	inline float* get_address_of_m_MagnitudeThreshold_12() { return &___m_MagnitudeThreshold_12; }
	inline void set_m_MagnitudeThreshold_12(float value)
	{
		___m_MagnitudeThreshold_12 = value;
	}

	inline static int32_t get_offset_of_m_Scores_13() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_Scores_13)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_m_Scores_13() const { return ___m_Scores_13; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_m_Scores_13() { return &___m_Scores_13; }
	inline void set_m_Scores_13(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___m_Scores_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Scores_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Magnitudes_14() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_Magnitudes_14)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_m_Magnitudes_14() const { return ___m_Magnitudes_14; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_m_Magnitudes_14() { return &___m_Magnitudes_14; }
	inline void set_m_Magnitudes_14(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___m_Magnitudes_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Magnitudes_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_LastMatchTime_15() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_LastMatchTime_15)); }
	inline double get_m_LastMatchTime_15() const { return ___m_LastMatchTime_15; }
	inline double* get_address_of_m_LastMatchTime_15() { return &___m_LastMatchTime_15; }
	inline void set_m_LastMatchTime_15(double value)
	{
		___m_LastMatchTime_15 = value;
	}

	inline static int32_t get_offset_of_m_StartTime_16() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_StartTime_16)); }
	inline double get_m_StartTime_16() const { return ___m_StartTime_16; }
	inline double* get_address_of_m_StartTime_16() { return &___m_StartTime_16; }
	inline void set_m_StartTime_16(double value)
	{
		___m_StartTime_16 = value;
	}

	inline static int32_t get_offset_of_m_Timeout_17() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_Timeout_17)); }
	inline float get_m_Timeout_17() const { return ___m_Timeout_17; }
	inline float* get_address_of_m_Timeout_17() { return &___m_Timeout_17; }
	inline void set_m_Timeout_17(float value)
	{
		___m_Timeout_17 = value;
	}

	inline static int32_t get_offset_of_m_WaitSecondsAfterMatch_18() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_WaitSecondsAfterMatch_18)); }
	inline float get_m_WaitSecondsAfterMatch_18() const { return ___m_WaitSecondsAfterMatch_18; }
	inline float* get_address_of_m_WaitSecondsAfterMatch_18() { return &___m_WaitSecondsAfterMatch_18; }
	inline void set_m_WaitSecondsAfterMatch_18(float value)
	{
		___m_WaitSecondsAfterMatch_18 = value;
	}

	inline static int32_t get_offset_of_m_Candidates_19() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_Candidates_19)); }
	inline InputControlList_1_tC251485A8EBE20F32C1828D6F68B450DAB732E96  get_m_Candidates_19() const { return ___m_Candidates_19; }
	inline InputControlList_1_tC251485A8EBE20F32C1828D6F68B450DAB732E96 * get_address_of_m_Candidates_19() { return &___m_Candidates_19; }
	inline void set_m_Candidates_19(InputControlList_1_tC251485A8EBE20F32C1828D6F68B450DAB732E96  value)
	{
		___m_Candidates_19 = value;
	}

	inline static int32_t get_offset_of_m_OnComplete_20() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_OnComplete_20)); }
	inline Action_1_t712E64B2FB6B72A4E947CBB2975DABB73A06E663 * get_m_OnComplete_20() const { return ___m_OnComplete_20; }
	inline Action_1_t712E64B2FB6B72A4E947CBB2975DABB73A06E663 ** get_address_of_m_OnComplete_20() { return &___m_OnComplete_20; }
	inline void set_m_OnComplete_20(Action_1_t712E64B2FB6B72A4E947CBB2975DABB73A06E663 * value)
	{
		___m_OnComplete_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnComplete_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnCancel_21() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_OnCancel_21)); }
	inline Action_1_t712E64B2FB6B72A4E947CBB2975DABB73A06E663 * get_m_OnCancel_21() const { return ___m_OnCancel_21; }
	inline Action_1_t712E64B2FB6B72A4E947CBB2975DABB73A06E663 ** get_address_of_m_OnCancel_21() { return &___m_OnCancel_21; }
	inline void set_m_OnCancel_21(Action_1_t712E64B2FB6B72A4E947CBB2975DABB73A06E663 * value)
	{
		___m_OnCancel_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCancel_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnPotentialMatch_22() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_OnPotentialMatch_22)); }
	inline Action_1_t712E64B2FB6B72A4E947CBB2975DABB73A06E663 * get_m_OnPotentialMatch_22() const { return ___m_OnPotentialMatch_22; }
	inline Action_1_t712E64B2FB6B72A4E947CBB2975DABB73A06E663 ** get_address_of_m_OnPotentialMatch_22() { return &___m_OnPotentialMatch_22; }
	inline void set_m_OnPotentialMatch_22(Action_1_t712E64B2FB6B72A4E947CBB2975DABB73A06E663 * value)
	{
		___m_OnPotentialMatch_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnPotentialMatch_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnGeneratePath_23() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_OnGeneratePath_23)); }
	inline Func_2_t256D379297E9972A2E59B56A5D0276E9ED789181 * get_m_OnGeneratePath_23() const { return ___m_OnGeneratePath_23; }
	inline Func_2_t256D379297E9972A2E59B56A5D0276E9ED789181 ** get_address_of_m_OnGeneratePath_23() { return &___m_OnGeneratePath_23; }
	inline void set_m_OnGeneratePath_23(Func_2_t256D379297E9972A2E59B56A5D0276E9ED789181 * value)
	{
		___m_OnGeneratePath_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnGeneratePath_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnComputeScore_24() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_OnComputeScore_24)); }
	inline Func_3_tB2180AFDCB89ECEDE3ED8A30CA81B8E923416ADC * get_m_OnComputeScore_24() const { return ___m_OnComputeScore_24; }
	inline Func_3_tB2180AFDCB89ECEDE3ED8A30CA81B8E923416ADC ** get_address_of_m_OnComputeScore_24() { return &___m_OnComputeScore_24; }
	inline void set_m_OnComputeScore_24(Func_3_tB2180AFDCB89ECEDE3ED8A30CA81B8E923416ADC * value)
	{
		___m_OnComputeScore_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnComputeScore_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnApplyBinding_25() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_OnApplyBinding_25)); }
	inline Action_2_t1C13FAA0BE04A7EFAC5DDD87B23307535BE59B56 * get_m_OnApplyBinding_25() const { return ___m_OnApplyBinding_25; }
	inline Action_2_t1C13FAA0BE04A7EFAC5DDD87B23307535BE59B56 ** get_address_of_m_OnApplyBinding_25() { return &___m_OnApplyBinding_25; }
	inline void set_m_OnApplyBinding_25(Action_2_t1C13FAA0BE04A7EFAC5DDD87B23307535BE59B56 * value)
	{
		___m_OnApplyBinding_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnApplyBinding_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnEventDelegate_26() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_OnEventDelegate_26)); }
	inline Action_2_t83E2B2D05A16B14F487969D4D187AEC66413E199 * get_m_OnEventDelegate_26() const { return ___m_OnEventDelegate_26; }
	inline Action_2_t83E2B2D05A16B14F487969D4D187AEC66413E199 ** get_address_of_m_OnEventDelegate_26() { return &___m_OnEventDelegate_26; }
	inline void set_m_OnEventDelegate_26(Action_2_t83E2B2D05A16B14F487969D4D187AEC66413E199 * value)
	{
		___m_OnEventDelegate_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnEventDelegate_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnAfterUpdateDelegate_27() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_OnAfterUpdateDelegate_27)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_OnAfterUpdateDelegate_27() const { return ___m_OnAfterUpdateDelegate_27; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_OnAfterUpdateDelegate_27() { return &___m_OnAfterUpdateDelegate_27; }
	inline void set_m_OnAfterUpdateDelegate_27(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_OnAfterUpdateDelegate_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnAfterUpdateDelegate_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_LayoutCache_28() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_LayoutCache_28)); }
	inline Cache_t9F49740128E8F04886120C99F392DC7CEBC6AA67  get_m_LayoutCache_28() const { return ___m_LayoutCache_28; }
	inline Cache_t9F49740128E8F04886120C99F392DC7CEBC6AA67 * get_address_of_m_LayoutCache_28() { return &___m_LayoutCache_28; }
	inline void set_m_LayoutCache_28(Cache_t9F49740128E8F04886120C99F392DC7CEBC6AA67  value)
	{
		___m_LayoutCache_28 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_LayoutCache_28))->___table_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_PathBuilder_29() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_PathBuilder_29)); }
	inline StringBuilder_t * get_m_PathBuilder_29() const { return ___m_PathBuilder_29; }
	inline StringBuilder_t ** get_address_of_m_PathBuilder_29() { return &___m_PathBuilder_29; }
	inline void set_m_PathBuilder_29(StringBuilder_t * value)
	{
		___m_PathBuilder_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PathBuilder_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_30() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_Flags_30)); }
	inline int32_t get_m_Flags_30() const { return ___m_Flags_30; }
	inline int32_t* get_address_of_m_Flags_30() { return &___m_Flags_30; }
	inline void set_m_Flags_30(int32_t value)
	{
		___m_Flags_30 = value;
	}

	inline static int32_t get_offset_of_m_StartingActuationsCount_31() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_StartingActuationsCount_31)); }
	inline int32_t get_m_StartingActuationsCount_31() const { return ___m_StartingActuationsCount_31; }
	inline int32_t* get_address_of_m_StartingActuationsCount_31() { return &___m_StartingActuationsCount_31; }
	inline void set_m_StartingActuationsCount_31(int32_t value)
	{
		___m_StartingActuationsCount_31 = value;
	}

	inline static int32_t get_offset_of_m_StaringActuationMagnitudes_32() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_StaringActuationMagnitudes_32)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_m_StaringActuationMagnitudes_32() const { return ___m_StaringActuationMagnitudes_32; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_m_StaringActuationMagnitudes_32() { return &___m_StaringActuationMagnitudes_32; }
	inline void set_m_StaringActuationMagnitudes_32(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___m_StaringActuationMagnitudes_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StaringActuationMagnitudes_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartingActuationControls_33() { return static_cast<int32_t>(offsetof(RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970, ___m_StartingActuationControls_33)); }
	inline InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* get_m_StartingActuationControls_33() const { return ___m_StartingActuationControls_33; }
	inline InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67** get_address_of_m_StartingActuationControls_33() { return &___m_StartingActuationControls_33; }
	inline void set_m_StartingActuationControls_33(InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* value)
	{
		___m_StartingActuationControls_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StartingActuationControls_33), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Boolean Unity.Collections.NativeArray`1<System.Int32>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m0B7EB9CC11FCECCC0480F589775E99828F222AE5_gshared (NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m69DBDA47FE3991A47E9CFCBFB3292676D22D7655_gshared (NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<System.Int32>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m001FCAD07C1100FAA1AA3C38CA5C493FC25B2292_gshared (NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Vector2>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mF82CF064C6050394DEAC11047A6308998101A4AE_gshared (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector2>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mE737DADB8C5E4B02C2FB6CB36E86AC6371D806BF_gshared (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector2>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m53A2E0E5DDF506B8508EAC444CAF3DB70F874729_gshared (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Vector3>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mCD60B11F9FB036F65310E83275A1632E57AAC29C_gshared (NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector3>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m867A382096AF527E2B854ADC9ED75ED6BF95D76B_gshared (NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector3>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m81F8DAA326ED23278BEBD3D0193CC74C93608DF6_gshared (NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Quaternion>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  CallbackContext_ReadValue_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_mF53E1946C30BB3E3B3216A0F7B7286B3DDBCC9E4_gshared (CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B * __this, const RuntimeMethod* method);
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CallbackContext_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB90BADA81518D0AC7F01020365AB88F9F0211166_gshared (CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B * __this, const RuntimeMethod* method);
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m8C82319841B3BE1EE406AE1A8FE628CA4E2D250F_gshared (CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B * __this, const RuntimeMethod* method);
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Vector3>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  CallbackContext_ReadValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m512A9B1FFD4204F5B090FEB009793B9866665AC0_gshared (CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithInteraction<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1  BindingSyntax_WithInteraction_TisRuntimeObject_mF004EAD1BEFB97AAECF7B3AD3C9856304B302EDC_gshared (BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithProcessor<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1  BindingSyntax_WithProcessor_TisRuntimeObject_mE7F31DB067FE1D0D8B6CAE2F3A869BB60B4E15ED_gshared (BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1 * __this, const RuntimeMethod* method);
// System.String UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::DeviceTypeToControlPath<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mB700493B60AC1EDE0CA6A7C5B54091F0B1343D4F_gshared (ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::OrWithOptionalDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mA966529367FEAF671DF7725154538CB7312C1D2F_gshared (ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::OrWithRequiredDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m0F28425B0D706D1C1C43B7A30024ACBFC00A3518_gshared (ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithOptionalDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_mEEDD90A8BFEDAC21FF0B67F8F3BC50208F09D015_gshared (ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithRequiredDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mC0CB0D601DCB446ACF2E02BAE15CDAAD58DAED10_gshared (ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 * __this, const RuntimeMethod* method);

// System.Void System.ThrowHelper::ThrowArgumentNullException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5 (int32_t ___argument0, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<System.Int32>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_m0B7EB9CC11FCECCC0480F589775E99828F222AE5 (NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 *, const RuntimeMethod*))NativeArray_1_get_IsCreated_m0B7EB9CC11FCECCC0480F589775E99828F222AE5_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<System.Int32>::Dispose()
inline void NativeArray_1_Dispose_m69DBDA47FE3991A47E9CFCBFB3292676D22D7655 (NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 *, const RuntimeMethod*))NativeArray_1_Dispose_m69DBDA47FE3991A47E9CFCBFB3292676D22D7655_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<System.Int32>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m001FCAD07C1100FAA1AA3C38CA5C493FC25B2292 (NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m001FCAD07C1100FAA1AA3C38CA5C493FC25B2292_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Vector2>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_mF82CF064C6050394DEAC11047A6308998101A4AE (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *, const RuntimeMethod*))NativeArray_1_get_IsCreated_mF82CF064C6050394DEAC11047A6308998101A4AE_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector2>::Dispose()
inline void NativeArray_1_Dispose_mE737DADB8C5E4B02C2FB6CB36E86AC6371D806BF (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *, const RuntimeMethod*))NativeArray_1_Dispose_mE737DADB8C5E4B02C2FB6CB36E86AC6371D806BF_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector2>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m53A2E0E5DDF506B8508EAC444CAF3DB70F874729 (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m53A2E0E5DDF506B8508EAC444CAF3DB70F874729_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Vector3>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_mCD60B11F9FB036F65310E83275A1632E57AAC29C (NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 *, const RuntimeMethod*))NativeArray_1_get_IsCreated_mCD60B11F9FB036F65310E83275A1632E57AAC29C_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector3>::Dispose()
inline void NativeArray_1_Dispose_m867A382096AF527E2B854ADC9ED75ED6BF95D76B (NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 *, const RuntimeMethod*))NativeArray_1_Dispose_m867A382096AF527E2B854ADC9ED75ED6BF95D76B_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector3>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m81F8DAA326ED23278BEBD3D0193CC74C93608DF6 (NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m81F8DAA326ED23278BEBD3D0193CC74C93608DF6_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Int32 System.String::Compare(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_Compare_m3B98D489EF23605CC97E9907AAF1E5E99BBF6A62 (String_t* ___strA0, String_t* ___strB1, bool ___ignoreCase2, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mF9CF6659FF9290D0399AE9BAB022F7F806AF1610 (Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B * __this, Type_t * ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B *, Type_t *, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0 (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m9E74E9D949738C4D713E2CBBB913F1802FC81EC5 (Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B * __this, Type_t * ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B *, Type_t *, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>::Remove(!0)
inline bool Dictionary_2_Remove_m5937D6874DDC30F39BB9C214C475213227C16F22 (Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B * __this, Type_t * ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B *, Type_t *, const RuntimeMethod*))Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m0439232C1973145EACAE3AF316075FAE865873D6 (Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B * __this, Type_t * ___key0, RuntimeObject** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B *, Type_t *, RuntimeObject**, const RuntimeMethod*))Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::get_activeLoader()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * XRManagerSettings_get_activeLoader_mB1950E58B1DD1774EB2798CEBA6D3C371CE8F1D8_inline (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor::.ctor(System.String,System.Type,System.Type,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor/Capabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRObjectTrackingSubsystemDescriptor__ctor_mE44B346A0A5A035B7DFC7430336DDADED7A4F6A5 (XRObjectTrackingSubsystemDescriptor_t831B568A9BE175A6A79BB87E25DEFAC519A6C472 * __this, String_t* ___id0, Type_t * ___providerType1, Type_t * ___subsystemTypeOverride2, Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685  ___capabilities3, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::RegisterDescriptor(UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorStore_RegisterDescriptor_m5586866BB233EF26B98640851816DD1764657688 (SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E * ___descriptor0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor::.ctor(System.String,System.Type,System.Type,UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor/Capabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRParticipantSubsystemDescriptor__ctor_m83A6821A71C68D58354ACE8289E8F621F2E183DC (XRParticipantSubsystemDescriptor_t533EE70DC8D4B105B9C87B76D35A7D59A84BCA55 * __this, String_t* ___subsystemId0, Type_t * ___providerType1, Type_t * ___subsystemTypeOverride2, int32_t ___capabilities3, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionPhase UnityEngine.InputSystem.InputAction/CallbackContext::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CallbackContext_get_phase_m1AA786B2FBD617BD9061126BF7442F08484F76E7 (CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::get_bindingIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CallbackContext_get_bindingIndex_mD26C42B8D97073283D42CB129F00E58AAF63C6EB (CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::get_controlIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CallbackContext_get_controlIndex_m56E2618DEAD8E55474756DFDCC261CCE1A4EF776 (CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B * __this, const RuntimeMethod* method);
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Quaternion>()
inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  CallbackContext_ReadValue_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_mF53E1946C30BB3E3B3216A0F7B7286B3DDBCC9E4 (CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B * __this, const RuntimeMethod* method)
{
	return ((  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  (*) (CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *, const RuntimeMethod*))CallbackContext_ReadValue_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_mF53E1946C30BB3E3B3216A0F7B7286B3DDBCC9E4_gshared)(__this, method);
}
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<System.Single>()
inline float CallbackContext_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB90BADA81518D0AC7F01020365AB88F9F0211166 (CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B * __this, const RuntimeMethod* method)
{
	return ((  float (*) (CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *, const RuntimeMethod*))CallbackContext_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB90BADA81518D0AC7F01020365AB88F9F0211166_gshared)(__this, method);
}
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Vector2>()
inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m8C82319841B3BE1EE406AE1A8FE628CA4E2D250F (CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B * __this, const RuntimeMethod* method)
{
	return ((  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  (*) (CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *, const RuntimeMethod*))CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m8C82319841B3BE1EE406AE1A8FE628CA4E2D250F_gshared)(__this, method);
}
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Vector3>()
inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  CallbackContext_ReadValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m512A9B1FFD4204F5B090FEB009793B9866665AC0 (CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B * __this, const RuntimeMethod* method)
{
	return ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *, const RuntimeMethod*))CallbackContext_ReadValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m512A9B1FFD4204F5B090FEB009793B9866665AC0_gshared)(__this, method);
}
// System.Void UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::ThrowIfRebindInProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RebindingOperation_ThrowIfRebindInProgress_m28D12CF785947DD24FACB7DAE3E7B887C03F4908 (RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970 * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::WithExpectedControlType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970 * RebindingOperation_WithExpectedControlType_m705AE6A47C8C1CA4F3E240985B5D1B96A8AAD012 (RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970 * __this, Type_t * ___type0, const RuntimeMethod* method);
// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Utilities.TypeTable::FindNameForType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  TypeTable_FindNameForType_m70022A55F8ADA2D7F33B9262F7F926145B4B6E4D (TypeTable_tE58155618A277C8EB10C9B8FB3040A6731E46BFA * __this, Type_t * ___type0, const RuntimeMethod* method);
// System.Boolean UnityEngine.InputSystem.Utilities.InternedString::IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternedString_IsEmpty_mD8617A5FDADD3E05A5F6253D42EFCB8BDAD11EE8 (InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90 (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.String UnityEngine.InputSystem.Utilities.InternedString::op_Implicit(UnityEngine.InputSystem.Utilities.InternedString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternedString_op_Implicit_mFA680218C45365E7ED57EA5EAA6ED59F15D8DFC6 (InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___str0, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithInteraction(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1  BindingSyntax_WithInteraction_m5B7B398C4193415876B4C31BAFDCDD9EE5107576 (BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1 * __this, String_t* ___interaction0, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithInteraction<System.Object>()
inline BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1  BindingSyntax_WithInteraction_TisRuntimeObject_mF004EAD1BEFB97AAECF7B3AD3C9856304B302EDC (BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1 * __this, const RuntimeMethod* method)
{
	return ((  BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1  (*) (BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1 *, const RuntimeMethod*))BindingSyntax_WithInteraction_TisRuntimeObject_mF004EAD1BEFB97AAECF7B3AD3C9856304B302EDC_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithProcessor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1  BindingSyntax_WithProcessor_m0A13729474D2C44C0646703F5543B891132D6484 (BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1 * __this, String_t* ___processor0, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithProcessor<System.Object>()
inline BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1  BindingSyntax_WithProcessor_TisRuntimeObject_mE7F31DB067FE1D0D8B6CAE2F3A869BB60B4E15ED (BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1 * __this, const RuntimeMethod* method)
{
	return ((  BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1  (*) (BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1 *, const RuntimeMethod*))BindingSyntax_WithProcessor_TisRuntimeObject_mE7F31DB067FE1D0D8B6CAE2F3A869BB60B4E15ED_gshared)(__this, method);
}
// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::TryFindLayoutForType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  Collection_TryFindLayoutForType_mA1BA2AB384A930262B5B405EBA6136861A0D6A5E (Collection_tDBA0BC36ACE448001ABFFED32EF785467D714D7B * __this, Type_t * ___layoutType0, const RuntimeMethod* method);
// System.String UnityEngine.InputSystem.Utilities.InternedString::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternedString_ToString_m2FF8E64B30FADEBCC623E0EFF944C3EDA244F6D7 (InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.String UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::DeviceTypeToControlPath<System.Object>()
inline String_t* ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mB700493B60AC1EDE0CA6A7C5B54091F0B1343D4F (ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 *, const RuntimeMethod*))ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mB700493B60AC1EDE0CA6A7C5B54091F0B1343D4F_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithOptionalDevice(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  ControlSchemeSyntax_WithOptionalDevice_m1EEB8035CC62D2A78AC932A7CA0440AF94126C39 (ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 * __this, String_t* ___controlPath0, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::OrWithOptionalDevice<System.Object>()
inline ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mA966529367FEAF671DF7725154538CB7312C1D2F (ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 * __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  (*) (ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 *, const RuntimeMethod*))ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mA966529367FEAF671DF7725154538CB7312C1D2F_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithRequiredDevice(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  ControlSchemeSyntax_WithRequiredDevice_m7D612CC028141089F3AB419967A9A7F1D9FC3353 (ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 * __this, String_t* ___controlPath0, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::OrWithRequiredDevice<System.Object>()
inline ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m0F28425B0D706D1C1C43B7A30024ACBFC00A3518 (ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 * __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  (*) (ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 *, const RuntimeMethod*))ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m0F28425B0D706D1C1C43B7A30024ACBFC00A3518_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithOptionalDevice<System.Object>()
inline ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_mEEDD90A8BFEDAC21FF0B67F8F3BC50208F09D015 (ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 * __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  (*) (ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 *, const RuntimeMethod*))ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_mEEDD90A8BFEDAC21FF0B67F8F3BC50208F09D015_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithRequiredDevice<System.Object>()
inline ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mC0CB0D601DCB446ACF2E02BAE15CDAAD58DAED10 (ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 * __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  (*) (ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 *, const RuntimeMethod*))ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mC0CB0D601DCB446ACF2E02BAE15CDAAD58DAED10_gshared)(__this, method);
}
// System.Void UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::set_type(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_type_m31E443E368751EC60EBA1A39D670313269E50B74_inline (Builder_t4C196179CE57554255EBFB4ECD4D6499ADA974FB * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.UInt64>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m0E6CA329D38368376166EA8A57A241DE4AE5EEE7_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint64_t));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.InputSystem.XR.UsageHint>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisUsageHint_tE375CE378CF92C755D6271265615EE19F0CBF0FB_m3BB04240D7FE2823B9E7D2373EADE4C939C965B1_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	UsageHint_tE375CE378CF92C755D6271265615EE19F0CBF0FB  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UsageHint_tE375CE378CF92C755D6271265615EE19F0CBF0FB ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Vector2>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mC42556DEFBEF6FFAD69BEF457B15E484D2A3855D_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Vector3>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mE2606512887650500549E97A027D886C84CBF61C_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Vector4>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_mA932D671F9BE87E641DB0FCC8E2DB6C52EA4A76D_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.InputSystem.XR.XRFeatureDescriptor>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisXRFeatureDescriptor_t03C6C68EB127721DF9DED1F4FDD72344625544D8_m66D28C3981BCF223D0A25590BEAD1158B81E6D7C_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	XRFeatureDescriptor_t03C6C68EB127721DF9DED1F4FDD72344625544D8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(XRFeatureDescriptor_t03C6C68EB127721DF9DED1F4FDD72344625544D8 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.XR.XRNodeState>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisXRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33_m9721EE6AB51926BB4E60490D608359DC6B3A4B41_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(XRNodeState_t6DC58D0C1BF2C4323D16B3905FDBEE7C03E27D33 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.XR.ARSubsystems.XRReferenceImage>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisXRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467_mCCBDCBAA0634D3FB48550FEF08BA31F8DA411774_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(XRReferenceImage_tB1803A72EB581FB35B2CA944973679132A1D4467 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.XR.ARSubsystems.XRReferenceObject>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisXRReferenceObject_t18877E1C9F50FF11192A86805D881349020032AE_m37141F8EC79D2458F30CD53EC4A7B416BD427614_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	XRReferenceObject_t18877E1C9F50FF11192A86805D881349020032AE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(XRReferenceObject_t18877E1C9F50FF11192A86805D881349020032AE ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.BeforeRenderHelper/OrderBlock>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisOrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_m524E3CF7C698B1C70A686928AF4E31E0FB01FD6D_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Camera/RenderRequest>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94_m8CC8BBE8B343B5710C3AA0F32012D23AC131AFFD_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.InputSystem.HID.HID/HIDCollectionDescriptor>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisHIDCollectionDescriptor_tE3258D5D340FBDFF06E499D451B3B76CF5E5BB7A_m43BCD1FCC4C76269CA75D9D01A632E814CA4BB04_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	HIDCollectionDescriptor_tE3258D5D340FBDFF06E499D451B3B76CF5E5BB7A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(HIDCollectionDescriptor_tE3258D5D340FBDFF06E499D451B3B76CF5E5BB7A ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.InputSystem.HID.HID/HIDElementDescriptor>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisHIDElementDescriptor_t9231CCE0267FB42FBCF668A3D06F536558400259_mA09401008011CF212F46D4D9A65B7FDBFAA1652D_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	HIDElementDescriptor_t9231CCE0267FB42FBCF668A3D06F536558400259  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(HIDElementDescriptor_t9231CCE0267FB42FBCF668A3D06F536558400259 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.InputSystem.HID.HIDParser/HIDReportData>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisHIDReportData_tF944E3DB3C90B96B785F6E2844CB36D3BE70EE5F_m01EC1EE0416F8D17596DF9C521C336EA93824602_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	HIDReportData_tF944E3DB3C90B96B785F6E2844CB36D3BE70EE5F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(HIDReportData_tF944E3DB3C90B96B785F6E2844CB36D3BE70EE5F ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA_m82A5FB73454EB2DB660D2F991B0B0E116A99FA07_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ControlItem_tA5E79D17F7DBE693407F7BD96A76ACFAF093A5EA ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisJsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6_m3D16F1B6E616978662710D5F1E08A4E916CC005B_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(JsonValue_t0D64859EFEB742EE8EA30FF060FD5E5FCC6578A6 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.InputSystem.UI.TrackedDeviceRaycaster/RaycastHitData>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRaycastHitData_t16F7BBA0199F2C5E2EEDDC84C9ED6A707891A1F4_m416B3A4C83FEB893C3A67A550818BAB4A9486207_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	RaycastHitData_t16F7BBA0199F2C5E2EEDDC84C9ED6A707891A1F4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RaycastHitData_t16F7BBA0199F2C5E2EEDDC84C9ED6A707891A1F4 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisPoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3_mF1626B5F534FA4F2EA1360451FE46E976EA66FE7_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(PoseData_t3F5C8C74C50A6ECAE42890BBEF683882DB4E97C3 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.UnitySynchronizationContext/WorkRequest>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisWorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_mAA66AF0A6DC5C07BA4B170C83C4E741F47BDED75_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/LayoutMatcher>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisLayoutMatcher_t08F547BB7D9E01B19DD908C7C21EB6B9323FCD8E_mBC4973E5CF3A644A1BBA96C0BB4EF5074C55C4D4_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	LayoutMatcher_t08F547BB7D9E01B19DD908C7C21EB6B9323FCD8E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(LayoutMatcher_t08F547BB7D9E01B19DD908C7C21EB6B9323FCD8E ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Tuple`2<T1,T2> System.Tuple::Create<System.Object,System.Object>(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * Tuple_Create_TisRuntimeObject_TisRuntimeObject_mF386334EA2E5B5781A35A5D57F090EF2A1C6BAD0_gshared (RuntimeObject * ___item10, RuntimeObject * ___item21, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___item10;
		RuntimeObject * L_1 = ___item21;
		Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * L_2 = (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_2, (RuntimeObject *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 *)L_2;
	}
}
// TObject UnityEngine.InputSystem.Utilities.TypeHelpers::As<System.Object>(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TypeHelpers_As_TisRuntimeObject_m29CCF3427F7A294B290EE3862A4036BCD960124D_gshared (RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		// return (TObject)obj;
		RuntimeObject * L_0 = ___obj0;
		return (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARKit.ARKitImageDatabase/DeallocateNativeArrayJob`1<System.Byte>>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisDeallocateNativeArrayJob_1_t2A6BBDEB793D693B1E240D595DD0217524A5092C_m459ED93034F71C90200E56A908137F31AF278DE5_gshared (DeallocateNativeArrayJob_1_t2A6BBDEB793D693B1E240D595DD0217524A5092C * ___output0, const RuntimeMethod* method)
{
	{
		DeallocateNativeArrayJob_1_t2A6BBDEB793D693B1E240D595DD0217524A5092C * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.InputSystem.XR.Bone>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisBone_tD72F0CE1A7820B4119779DBDB579835CB9E9BA56_m0B8D66B5E6A331E9A320F793AD5784A24A85C65F_gshared (Bone_tD72F0CE1A7820B4119779DBDB579835CB9E9BA56 * ___output0, const RuntimeMethod* method)
{
	{
		Bone_tD72F0CE1A7820B4119779DBDB579835CB9E9BA56 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<System.Boolean>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mAA69BBE799380340BC86E323743EA2104CEA2367_gshared (bool* ___output0, const RuntimeMethod* method)
{
	{
		bool* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.BoundedPlane>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisBoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_mC9A858BF185278EC562A6F9D8E8458B327DFCAEF_gshared (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * ___output0, const RuntimeMethod* method)
{
	{
		BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<System.Byte>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m90178B8C0262856D36BA720BE83861C3B15C5E9E_gshared (uint8_t* ___output0, const RuntimeMethod* method)
{
	{
		uint8_t* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.InputSystem.LowLevel.DeviceConfigurationEvent>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisDeviceConfigurationEvent_t51EE5A7A8F7809D82FA5C1982C745D41368819F4_m961B43C5836FCFE43A9B98536880C013CEA341DF_gshared (DeviceConfigurationEvent_t51EE5A7A8F7809D82FA5C1982C745D41368819F4 * ___output0, const RuntimeMethod* method)
{
	{
		DeviceConfigurationEvent_t51EE5A7A8F7809D82FA5C1982C745D41368819F4 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.InputSystem.LowLevel.DisableDeviceCommand>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisDisableDeviceCommand_t497E71F7D12C6D866FA590587FFE6CF95B1249D5_mB8C29FF2AB4AE757E519534BF9FCB440F7E75478_gshared (DisableDeviceCommand_t497E71F7D12C6D866FA590587FFE6CF95B1249D5 * ___output0, const RuntimeMethod* method)
{
	{
		DisableDeviceCommand_t497E71F7D12C6D866FA590587FFE6CF95B1249D5 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<System.Double>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_mB7306827840D6A524BDA621C614204B9E5194158_gshared (double* ___output0, const RuntimeMethod* method)
{
	{
		double* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.InputSystem.LowLevel.DualMotorRumbleCommand>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisDualMotorRumbleCommand_t5009DECA97708128341E4748EF1324D4F760FBE2_m27625B0855E4EED6D9772A04E365D4E99D063E23_gshared (DualMotorRumbleCommand_t5009DECA97708128341E4748EF1324D4F760FBE2 * ___output0, const RuntimeMethod* method)
{
	{
		DualMotorRumbleCommand_t5009DECA97708128341E4748EF1324D4F760FBE2 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.InputSystem.LowLevel.EnableDeviceCommand>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisEnableDeviceCommand_t83C70E81C7F64FB6BCEE3B3D12FD3756D8D6589E_mD8B3748D00A287D103B54D24CE1CED95B4B6FA22_gshared (EnableDeviceCommand_t83C70E81C7F64FB6BCEE3B3D12FD3756D8D6589E * ___output0, const RuntimeMethod* method)
{
	{
		EnableDeviceCommand_t83C70E81C7F64FB6BCEE3B3D12FD3756D8D6589E * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.InputSystem.LowLevel.EnableIMECompositionCommand>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisEnableIMECompositionCommand_tC79D0C8B469962BE1CC6ACFC91D2B12D7DD95DA0_mCEA32443851DD7FB7B3BE6ED6450BF0E80F90DB7_gshared (EnableIMECompositionCommand_tC79D0C8B469962BE1CC6ACFC91D2B12D7DD95DA0 * ___output0, const RuntimeMethod* method)
{
	{
		EnableIMECompositionCommand_tC79D0C8B469962BE1CC6ACFC91D2B12D7DD95DA0 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.InputSystem.XR.Eyes>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisEyes_t61C3F3A2F620E8B856BBFCB89DE49C81F7116318_mAE3BE9DF9E3A80279F50668203DC625D1C0D3A85_gshared (Eyes_t61C3F3A2F620E8B856BBFCB89DE49C81F7116318 * ___output0, const RuntimeMethod* method)
{
	{
		Eyes_t61C3F3A2F620E8B856BBFCB89DE49C81F7116318 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.InputSystem.XR.Haptics.GetHapticCapabilitiesCommand>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisGetHapticCapabilitiesCommand_t4B5EE9AC22975D873E128304EA66EF0CEA0BA1E6_mDC919FB18BBA52E6977B50AFD2A06DB78F371B3D_gshared (GetHapticCapabilitiesCommand_t4B5EE9AC22975D873E128304EA66EF0CEA0BA1E6 * ___output0, const RuntimeMethod* method)
{
	{
		GetHapticCapabilitiesCommand_t4B5EE9AC22975D873E128304EA66EF0CEA0BA1E6 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.InputSystem.LowLevel.InitiateUserAccountPairingCommand>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisInitiateUserAccountPairingCommand_t81C2404F6F038F170F469E4A717AEE44A3B016F2_mB1E715807A48492F68CD79D217B9E9D48D62DE0F_gshared (InitiateUserAccountPairingCommand_t81C2404F6F038F170F469E4A717AEE44A3B016F2 * ___output0, const RuntimeMethod* method)
{
	{
		InitiateUserAccountPairingCommand_t81C2404F6F038F170F469E4A717AEE44A3B016F2 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.InputSystem.LowLevel.InputDeviceCommand>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisInputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6_mBC10AA5EE08DED2356334F1CD6DD3C10DBA4EDE0_gshared (InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6 * ___output0, const RuntimeMethod* method)
{
	{
		InputDeviceCommand_t2366E3DB9E5FB8ABDD77707A3B58C68CEC23B3A6 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.InputSystem.LowLevel.InputEvent>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisInputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92_mD830CADB344C89A03F3360DF66C40EDF92E4F268_gshared (InputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92 * ___output0, const RuntimeMethod* method)
{
	{
		InputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<System.Int32>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m5DF44744D2EB3E065218D40347A044EE040E6757_gshared (int32_t* ___output0, const RuntimeMethod* method)
{
	{
		int32_t* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<System.Int32Enum>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_m2DBEBF846C10471A0B0FA71D80E45833F22AF9D5_gshared (int32_t* ___output0, const RuntimeMethod* method)
{
	{
		int32_t* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.OpenXR.Input.Pose>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisPose_t066D8D46ADA938D52C66EE071A37B17E71685B5C_m66CC13D8800F586D4B4EF1E56B172C7434CF9FC0_gshared (Pose_t066D8D46ADA938D52C66EE071A37B17E71685B5C * ___output0, const RuntimeMethod* method)
{
	{
		Pose_t066D8D46ADA938D52C66EE071A37B17E71685B5C * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.Quaternion>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_mB8194F4AE31E4FA4E2C35D30612DDF181E303B20_gshared (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___output0, const RuntimeMethod* method)
{
	{
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.InputSystem.LowLevel.QueryCanRunInBackground>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisQueryCanRunInBackground_t058D173B884B9422BA30A52BA16CD58ED1BB1279_m8E9FDE8F947489CD9A914983EB60660CB4AE32A7_gshared (QueryCanRunInBackground_t058D173B884B9422BA30A52BA16CD58ED1BB1279 * ___output0, const RuntimeMethod* method)
{
	{
		QueryCanRunInBackground_t058D173B884B9422BA30A52BA16CD58ED1BB1279 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.InputSystem.LowLevel.QueryEnabledStateCommand>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisQueryEnabledStateCommand_tBF19A45DBC338D4E1C25D9C0E32F19ACD661B865_m661109EE5F769807D70D7557877303C662D0D41B_gshared (QueryEnabledStateCommand_tBF19A45DBC338D4E1C25D9C0E32F19ACD661B865 * ___output0, const RuntimeMethod* method)
{
	{
		QueryEnabledStateCommand_tBF19A45DBC338D4E1C25D9C0E32F19ACD661B865 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.InputSystem.LowLevel.QueryKeyNameCommand>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisQueryKeyNameCommand_tD64E71A741E2830ED4B754EA6FE35C38E2E1C575_m2D9A3C045D7F7158FC7B3D5376AE1DDAD6F99ABB_gshared (QueryKeyNameCommand_tD64E71A741E2830ED4B754EA6FE35C38E2E1C575 * ___output0, const RuntimeMethod* method)
{
	{
		QueryKeyNameCommand_tD64E71A741E2830ED4B754EA6FE35C38E2E1C575 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.InputSystem.LowLevel.QueryKeyboardLayoutCommand>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisQueryKeyboardLayoutCommand_t4D0372BEF388EAF51A5489DFE36E230EB9E25E34_m2D5C0E01758CD2B14782AC22E09F269C7ACE20BB_gshared (QueryKeyboardLayoutCommand_t4D0372BEF388EAF51A5489DFE36E230EB9E25E34 * ___output0, const RuntimeMethod* method)
{
	{
		QueryKeyboardLayoutCommand_t4D0372BEF388EAF51A5489DFE36E230EB9E25E34 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisQueryPairedUserAccountCommand_t76A9DA797460B51A0218A3E0C7CCD51904EA0BF2_mC65EA2E23756CC9901DDFC43CF11AD5C74892A6F_gshared (QueryPairedUserAccountCommand_t76A9DA797460B51A0218A3E0C7CCD51904EA0BF2 * ___output0, const RuntimeMethod* method)
{
	{
		QueryPairedUserAccountCommand_t76A9DA797460B51A0218A3E0C7CCD51904EA0BF2 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.InputSystem.LowLevel.QuerySamplingFrequencyCommand>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisQuerySamplingFrequencyCommand_tAEF128EE401D6A8B73ADEA86810A9DFEDF599625_m322789A15942F8C69C4B40645B8928914B134831_gshared (QuerySamplingFrequencyCommand_tAEF128EE401D6A8B73ADEA86810A9DFEDF599625 * ___output0, const RuntimeMethod* method)
{
	{
		QuerySamplingFrequencyCommand_tAEF128EE401D6A8B73ADEA86810A9DFEDF599625 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.InputSystem.LowLevel.RequestResetCommand>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisRequestResetCommand_t40BBC49476A629DDB5CA63C605F09C0E35F8A72B_mFE9956F7B4E3B3B167D1B2F21570CA18D21D287A_gshared (RequestResetCommand_t40BBC49476A629DDB5CA63C605F09C0E35F8A72B * ___output0, const RuntimeMethod* method)
{
	{
		RequestResetCommand_t40BBC49476A629DDB5CA63C605F09C0E35F8A72B * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.InputSystem.LowLevel.RequestSyncCommand>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisRequestSyncCommand_tCC9D7315E8DCF44E5451DE4A8A93805C0D3EF56D_m037461DAA2136E09D02061331B577299E1F8DDAD_gshared (RequestSyncCommand_tCC9D7315E8DCF44E5451DE4A8A93805C0D3EF56D * ___output0, const RuntimeMethod* method)
{
	{
		RequestSyncCommand_tCC9D7315E8DCF44E5451DE4A8A93805C0D3EF56D * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.InputSystem.XR.Haptics.SendBufferedHapticCommand>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisSendBufferedHapticCommand_tA63D8418EFBE9DC3F28D0AC23D42CD4525A869F8_m462354CC71C51B20AA3FD732912059EE13370537_gshared (SendBufferedHapticCommand_tA63D8418EFBE9DC3F28D0AC23D42CD4525A869F8 * ___output0, const RuntimeMethod* method)
{
	{
		SendBufferedHapticCommand_tA63D8418EFBE9DC3F28D0AC23D42CD4525A869F8 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.InputSystem.XR.Haptics.SendHapticImpulseCommand>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisSendHapticImpulseCommand_t522F98AD1BEC67B5765077DE8F1CE91EAF1959DD_m59487FDCB1B999869D2765BF7C4E143ADA69912C_gshared (SendHapticImpulseCommand_t522F98AD1BEC67B5765077DE8F1CE91EAF1959DD * ___output0, const RuntimeMethod* method)
{
	{
		SendHapticImpulseCommand_t522F98AD1BEC67B5765077DE8F1CE91EAF1959DD * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.InputSystem.LowLevel.SetIMECursorPositionCommand>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisSetIMECursorPositionCommand_t0BFEFBE0E5BA47C5992F49357D7B0A21BD210F9E_mD08811E522462095A9B31FCA6EB314AA68FB26F5_gshared (SetIMECursorPositionCommand_t0BFEFBE0E5BA47C5992F49357D7B0A21BD210F9E * ___output0, const RuntimeMethod* method)
{
	{
		SetIMECursorPositionCommand_t0BFEFBE0E5BA47C5992F49357D7B0A21BD210F9E * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.InputSystem.LowLevel.SetSamplingFrequencyCommand>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisSetSamplingFrequencyCommand_t8C7DABD34E6D5D9C153C98CEA81CFB0066C8AE20_m00DBA41BA9C8742A6061F01F8E2738B034AC8EE1_gshared (SetSamplingFrequencyCommand_t8C7DABD34E6D5D9C153C98CEA81CFB0066C8AE20 * ___output0, const RuntimeMethod* method)
{
	{
		SetSamplingFrequencyCommand_t8C7DABD34E6D5D9C153C98CEA81CFB0066C8AE20 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<System.Single>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m78C28ACFA9499DEBC6D2B4919F2D90AB379806E9_gshared (float* ___output0, const RuntimeMethod* method)
{
	{
		float* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.InputSystem.LowLevel.TextEvent>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisTextEvent_t3E243B8BC402EA8DCA52D37062B4CCAE7D60E9A5_m72BA77424D5B6AF67AC2249AACA2581A7F1A5D2B_gshared (TextEvent_t3E243B8BC402EA8DCA52D37062B4CCAE7D60E9A5 * ___output0, const RuntimeMethod* method)
{
	{
		TextEvent_t3E243B8BC402EA8DCA52D37062B4CCAE7D60E9A5 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.InputSystem.LowLevel.TouchState>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisTouchState_t83BF8A46038EF445074F008746EA36DC95EA139F_m9FB54C08481E453A67BDD2A74E1613C0A52288A2_gshared (TouchState_t83BF8A46038EF445074F008746EA36DC95EA139F * ___output0, const RuntimeMethod* method)
{
	{
		TouchState_t83BF8A46038EF445074F008746EA36DC95EA139F * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<System.UInt32>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mC25A5C9A8E9F91EE63190F51C3658F7D4A299306_gshared (uint32_t* ___output0, const RuntimeMethod* method)
{
	{
		uint32_t* L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.Vector2>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m1B0E8237D96B63D8D163846EB65DA4E83A1E3505_gshared (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___output0, const RuntimeMethod* method)
{
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.Vector3>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m77C533DB8019B7456463381CFE64179CEEBE3A2C_gshared (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___output0, const RuntimeMethod* method)
{
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.InputSystem.LowLevel.WarpMousePositionCommand>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisWarpMousePositionCommand_tF0D42DD7CBF72B973B68CF867E5E7EE41FA70AA5_m581A9F750F9CC2365340D6FE5D4DCBB1ECCA0973_gshared (WarpMousePositionCommand_tF0D42DD7CBF72B973B68CF867E5E7EE41FA70AA5 * ___output0, const RuntimeMethod* method)
{
	{
		WarpMousePositionCommand_tF0D42DD7CBF72B973B68CF867E5E7EE41FA70AA5 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XRAnchor>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_m5CD1B8A7CD124A610853D0B5E27D1B11E5E65124_gshared (XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * ___output0, const RuntimeMethod* method)
{
	{
		XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A_m8564FEA1891F71988A4C9BC5B6AF5BEDE36E932A_gshared (XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A * ___output0, const RuntimeMethod* method)
{
	{
		XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C_m4A1CE6780AB9CE4CB3805E6DF2490A7162DF791F_gshared (XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C * ___output0, const RuntimeMethod* method)
{
	{
		XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XRFace>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599_mEF6151572AEAA88081C547929522D3E71C052BB1_gshared (XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599 * ___output0, const RuntimeMethod* method)
{
	{
		XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XRHumanBody>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B_m2EB00BF995546AE7DA776F4482FA126C8246511F_gshared (XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B * ___output0, const RuntimeMethod* method)
{
	{
		XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4_m802134CFA101318D44F3FAC460C835D85E83AA0D_gshared (XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4 * ___output0, const RuntimeMethod* method)
{
	{
		XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XRParticipant>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F_mF5070241EDCF2DD95B8DFC20D33962C0CF4FD3C4_gshared (XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F * ___output0, const RuntimeMethod* method)
{
	{
		XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XRPointCloud>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2_m856282CB715153235C61D5465C1DDD4F968D3CE0_gshared (XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 * ___output0, const RuntimeMethod* method)
{
	{
		XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XRRaycast>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_mABBF9CBA24FC9A983C2B5E569D8471E0D6AE04B6_gshared (XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * ___output0, const RuntimeMethod* method)
{
	{
		XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XRRaycastHit>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_mCFB5A27460535DA449EA9CD73BE6BE4955FEC37B_gshared (XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB * ___output0, const RuntimeMethod* method)
{
	{
		XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XRReferencePoint>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634_mCACD12B6E806B0DE04B21B602E71C2A1213AEF89_gshared (XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 * ___output0, const RuntimeMethod* method)
{
	{
		XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57_mC71B261BC3F757C64DE114C09D05E687F228F01E_gshared (XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 * ___output0, const RuntimeMethod* method)
{
	{
		XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XRTrackedImage>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F_m8CA1B165C8C749BB981880D4C3EC96C4404E70BE_gshared (XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F * ___output0, const RuntimeMethod* method)
{
	{
		XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARSubsystems.XRTrackedObject>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisXRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58_mBF0311A39B5E64EADA0A15B610596C556A31CEEF_gshared (XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58 * ___output0, const RuntimeMethod* method)
{
	{
		XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARKit.ARKitImageDatabase/AddImageJob>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisAddImageJob_t8EC95C9EA777B31823D128D52F383B45EF7F3AA5_mFC482211FD04BCD49084DA80DFC89D1CD8C586F4_gshared (AddImageJob_t8EC95C9EA777B31823D128D52F383B45EF7F3AA5 * ___output0, const RuntimeMethod* method)
{
	{
		AddImageJob_t8EC95C9EA777B31823D128D52F383B45EF7F3AA5 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARKit.ARKitImageDatabase/ConvertRGBA32ToARGB32Job>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisConvertRGBA32ToARGB32Job_t993F9DEAC7565A1537923428323E86A8B0506D78_m1DB814CB7334A55FA9835A189AF849876121A24B_gshared (ConvertRGBA32ToARGB32Job_t993F9DEAC7565A1537923428323E86A8B0506D78 * ___output0, const RuntimeMethod* method)
{
	{
		ConvertRGBA32ToARGB32Job_t993F9DEAC7565A1537923428323E86A8B0506D78 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARKit.ARKitImageDatabase/ReleaseDatabaseJob>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisReleaseDatabaseJob_t2712527A976BD231EF32DCEAAAF276FC834E8DA1_m95B5281A60708C7DE5DC2FB16087C0E5764951CD_gshared (ReleaseDatabaseJob_t2712527A976BD231EF32DCEAAAF276FC834E8DA1 * ___output0, const RuntimeMethod* method)
{
	{
		ReleaseDatabaseJob_t2712527A976BD231EF32DCEAAAF276FC834E8DA1 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARKit.ARKitXRDepthSubsystem/TransformPositionsJob>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisTransformPositionsJob_t76836F51EABF9ECE4503F3ECAC1DA2C32D0DA468_m1B898A2AD63AAB5F3EC6DAD8197B1C47C37C0DA3_gshared (TransformPositionsJob_t76836F51EABF9ECE4503F3ECAC1DA2C32D0DA468 * ___output0, const RuntimeMethod* method)
{
	{
		TransformPositionsJob_t76836F51EABF9ECE4503F3ECAC1DA2C32D0DA468 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastCollectResultsJob>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisPointCloudRaycastCollectResultsJob_t5BFBE359542CF027CBCCAA334BA76CF64F29627D_m68F3E158496B9C8A949017325F128E76BBFD0238_gshared (PointCloudRaycastCollectResultsJob_t5BFBE359542CF027CBCCAA334BA76CF64F29627D * ___output0, const RuntimeMethod* method)
{
	{
		PointCloudRaycastCollectResultsJob_t5BFBE359542CF027CBCCAA334BA76CF64F29627D * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastJob>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisPointCloudRaycastJob_t097E5071568968353900E36DD9110FEC04135270_mB52C7F259B11B928D05729315A0A999AA91D9351_gshared (PointCloudRaycastJob_t097E5071568968353900E36DD9110FEC04135270 * ___output0, const RuntimeMethod* method)
{
	{
		PointCloudRaycastJob_t097E5071568968353900E36DD9110FEC04135270 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARFoundation.MutableRuntimeReferenceImageLibraryExtensions/DeallocateJob>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisDeallocateJob_tF0BF8A44A01B3EF170E51703A5B2977021DD76CF_m3747F1E684B7FDFED0EE0408A9B52C672656F525_gshared (DeallocateJob_tF0BF8A44A01B3EF170E51703A5B2977021DD76CF * ___output0, const RuntimeMethod* method)
{
	{
		DeallocateJob_tF0BF8A44A01B3EF170E51703A5B2977021DD76CF * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.OpenXR.Features.OpenXRFeature/GetInternalDeviceIdCommand>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisGetInternalDeviceIdCommand_tC0FCCFCCA2C300E73BA92F885525F879ABEAD57E_m46520FEB6180724F90A7B3CB12248083728DF896_gshared (GetInternalDeviceIdCommand_tC0FCCFCCA2C300E73BA92F885525F879ABEAD57E * ___output0, const RuntimeMethod* method)
{
	{
		GetInternalDeviceIdCommand_tC0FCCFCCA2C300E73BA92F885525F879ABEAD57E * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/TransformIndicesJob>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisTransformIndicesJob_tFF87C2E297015EECA6853BA147171FF78D123302_mEC4522442496AE4073E9BF146577DEF6EAEB6DBB_gshared (TransformIndicesJob_tFF87C2E297015EECA6853BA147171FF78D123302 * ___output0, const RuntimeMethod* method)
{
	{
		TransformIndicesJob_tFF87C2E297015EECA6853BA147171FF78D123302 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/TransformUVsJob>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisTransformUVsJob_tCABA7AB1790251392EC9FCA81A3EBD0E579F3E0A_m71023F093F9B86F37950005746D083D4A9CB2EEA_gshared (TransformUVsJob_tCABA7AB1790251392EC9FCA81A3EBD0E579F3E0A * ___output0, const RuntimeMethod* method)
{
	{
		TransformUVsJob_tCABA7AB1790251392EC9FCA81A3EBD0E579F3E0A * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/TransformVerticesJob>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisTransformVerticesJob_t2238CFDB87B56D80881834E0BEDBFE25D9133239_mECFD6D683AF6DF2981FE6D7C48A8D3E62151C68C_gshared (TransformVerticesJob_t2238CFDB87B56D80881834E0BEDBFE25D9133239 * ___output0, const RuntimeMethod* method)
{
	{
		TransformVerticesJob_t2238CFDB87B56D80881834E0BEDBFE25D9133239 * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/ARKitProvider/FlipBoundaryWindingJob>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisFlipBoundaryWindingJob_t726CFFAB953CC7C841EE74365C27322E57A2A5DA_mEADA6CB2FAA2D28F5741C3C3379A7F1656C72AD7_gshared (FlipBoundaryWindingJob_t726CFFAB953CC7C841EE74365C27322E57A2A5DA * ___output0, const RuntimeMethod* method)
{
	{
		FlipBoundaryWindingJob_t726CFFAB953CC7C841EE74365C27322E57A2A5DA * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AddressOf<UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem/ARKitProvider/TransformBoundaryPositionsJob>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisTransformBoundaryPositionsJob_t538BF69F9F744EBC94AA0487075746AD113A64FE_mB11D34D65978696E615E52CA75F7671DE935BCCF_gshared (TransformBoundaryPositionsJob_t538BF69F9F744EBC94AA0487075746AD113A64FE * ___output0, const RuntimeMethod* method)
{
	{
		TransformBoundaryPositionsJob_t538BF69F9F744EBC94AA0487075746AD113A64FE * L_0 = ___output0;
		return (void*)(L_0);
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/Triangle`1<System.Int16>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisTriangle_1_t5D70FED5A96E61ADDCC41F8B4CA3855BC7A98A11_mCCFE5987362C12F6775B650CE345315A171466C6_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/Triangle`1<System.Int32>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisTriangle_1_t23CE09469BEC0FFB6767EDDA20FAB85B0C3104C9_m0D52EF00DF679B1D718E30566C072D2D87B4C361_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.Rendering.BatchVisibility>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisBatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE_m64B7496928323FC31813F990FE5AC06057213ABD_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.BoundedPlane>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisBoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_mC8164B56E6D8C6801E9B52E1AD031767699C7AC3_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<System.Byte>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mB20DF48ED17C5C1B91F7B365DA01C9D9883CE22D_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<System.ByteEnum>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisByteEnum_t39285A9D8C7F88982FF718C04A9FA1AE64827307_mC0311816FE1BEEF9D25339C81F10A0F3A9D1B608_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78_m02D937C4B17C1F7CCA0192EBCCD7F32A3B178678_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<System.Int32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m4DA9BD8ABD57EA456BBBF0DB0A9917AE7A67806D_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.Experimental.GlobalIllumination.LightDataGI>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisLightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2_mD39AE841C76B62A720795E45A9CAB847804CDBD2_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARKit.ManagedReferenceImage>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1_m3D645D41465377C7404BAAE297F7A38BADECA58D_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.Plane>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisPlane_t80844BF2332EAFC1DDEDD616A950242031A115C7_mF71D0A0AD3A01326E5D0D9C4D78FFE82E985A28E_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.Quaternion>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_m95584A51D5993FC51974EAA74C464A18C7B7F934_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mE315887DE03400FCE9403368BCED5BE94F438E8B_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.TrackableId>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_mB00562AFC649C09061CC751E3CD0123509583D9D_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<System.UInt32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m09F25FBB56E0C6D47B13ED9CC53D648A87BE56E3_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<System.UInt64>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m6600143AD86280DD50C787F98E3B3DD98A429D39_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mA85A5A1241E310F0593062E0BA89FADD1417702E_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.Vector3>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m37A5C2CAF53990153CF7045B3AFD5E037FE1CFB0_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.Vector4>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_m7E2F75DBB01FF25E5793D08AACB3A92F8F0561D5_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRAnchor>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_m54029F5B0FEF960F2B7AF74CB0D27821D1835298_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A_mEC4710E8D43B94CFD03A6F510D2B96CD362EB13B_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C_m6A6A58846290D55F17BCED404CFE38C487840D06_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRFace>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599_m89962646B7C5B59B1C9D5C4C2412C5B6285EE589_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRHumanBody>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B_mFC3B17E6F77101F9DEFDA56E6FD26266593DF55B_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4_mB883FBA5A6DFB61E881CF4E94F03E780E58B9CB6_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4_mFB38B27CD813036134BD7582A348E0CCA9E39327_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRParticipant>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F_m5C965E69BAA831916EA628929AF83517C29CEB50_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRPointCloud>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2_m40904FD9E865920D7DBD9E8877B730A17A2F6905_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRRaycast>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_m5B8EA96775DCE01BCC4CD55FD34E2B45A0708B45_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRRaycastHit>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_m77658C06116FC1925F12808CD94B42C74296C78F_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRReferencePoint>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634_m66E11B84ED5A3379F959BDE194177DC7B2EAF3BE_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57_mE3DD666AF9235E7CDE1726888159E12A81914DA9_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRTrackedImage>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F_m9B806FEB65F8C39EDB94F207AA8F3212C0F33E49_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRTrackedObject>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58_mDBAC049417B78C4EE62A04CDA695D936F1E7F0EE_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastInfo>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisPointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1_m329A06B7212770880375D68FDFC58FEB58094C67_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/Triangle`1<System.Int16>>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Triangle_1_t5D70FED5A96E61ADDCC41F8B4CA3855BC7A98A11  UnsafeUtility_ReadArrayElement_TisTriangle_1_t5D70FED5A96E61ADDCC41F8B4CA3855BC7A98A11_m06B5A5404CBE3E9979635E9FE6CDDB4F96C72BBD_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Triangle_1_t5D70FED5A96E61ADDCC41F8B4CA3855BC7A98A11 );
		Triangle_1_t5D70FED5A96E61ADDCC41F8B4CA3855BC7A98A11  L_3 = (*(Triangle_1_t5D70FED5A96E61ADDCC41F8B4CA3855BC7A98A11 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (Triangle_1_t5D70FED5A96E61ADDCC41F8B4CA3855BC7A98A11 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/Triangle`1<System.Int32>>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Triangle_1_t23CE09469BEC0FFB6767EDDA20FAB85B0C3104C9  UnsafeUtility_ReadArrayElement_TisTriangle_1_t23CE09469BEC0FFB6767EDDA20FAB85B0C3104C9_m039949BEA8522A2C10CAEE9B0BF44E61B876931A_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Triangle_1_t23CE09469BEC0FFB6767EDDA20FAB85B0C3104C9 );
		Triangle_1_t23CE09469BEC0FFB6767EDDA20FAB85B0C3104C9  L_3 = (*(Triangle_1_t23CE09469BEC0FFB6767EDDA20FAB85B0C3104C9 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (Triangle_1_t23CE09469BEC0FFB6767EDDA20FAB85B0C3104C9 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Rendering.BatchVisibility>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  UnsafeUtility_ReadArrayElement_TisBatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE_mF1E1FA0E9424F2F320E9B0339FC687ADF10BCBA9_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE );
		BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  L_3 = (*(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.BoundedPlane>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  UnsafeUtility_ReadArrayElement_TisBoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_m534964C998AA9A86387E0AED392964D80BCFB37D_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 );
		BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  L_3 = (*(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.Byte>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t UnsafeUtility_ReadArrayElement_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m3A787297B1A91CA14E1AA3B0034A681D407C2C6F_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = (*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (uint8_t)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.ByteEnum>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t UnsafeUtility_ReadArrayElement_TisByteEnum_t39285A9D8C7F88982FF718C04A9FA1AE64827307_mA9111A70DA24105AE68CEF4912F4419C06E177BA_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = (*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (uint8_t)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  UnsafeUtility_ReadArrayElement_TisConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78_m7A844C2AC0AC03BCB2EFE0E432323DB691903C24_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 );
		ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  L_3 = (*(ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.Int32>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElement_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mB96EA425698FAC912FBF9F171D49A9115BBC6D3B_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(int32_t);
		int32_t L_3 = (*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (int32_t)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Experimental.GlobalIllumination.LightDataGI>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  UnsafeUtility_ReadArrayElement_TisLightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2_m4E2C63FA44B1C28449F8F4BB7905B51D78AE236D_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 );
		LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  L_3 = (*(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARKit.ManagedReferenceImage>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1  UnsafeUtility_ReadArrayElement_TisManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1_mEC5718769208BF3BFC74DE7F574175DAB81CCC0A_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1 );
		ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1  L_3 = (*(ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.Object>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * UnsafeUtility_ReadArrayElement_TisRuntimeObject_mF01BC97D058E55A4713C93F8CB551700296191ED_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(RuntimeObject *);
		RuntimeObject * L_3 = (*(RuntimeObject **)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (RuntimeObject *)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Plane>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  UnsafeUtility_ReadArrayElement_TisPlane_t80844BF2332EAFC1DDEDD616A950242031A115C7_mEECC8D753A2ECD36000F48387C6A2D1D4E564F62_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 );
		Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  L_3 = (*(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Quaternion>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  UnsafeUtility_ReadArrayElement_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_m13EED3AD1F56E82EA4EDC48D2FF36F64BAE09E22_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 );
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3 = (*(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.Single>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnsafeUtility_ReadArrayElement_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m8B2A0C00FBC036E8B110BF77197B74EB86CDCD78_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(float);
		float L_3 = (*(float*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (float)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.TrackableId>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  UnsafeUtility_ReadArrayElement_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m4540A81E5C9B6696C7A03B208B964E9A245E314B_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B );
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_3 = (*(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.UInt32>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UnsafeUtility_ReadArrayElement_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mE811E8D32BDD37FAA30D65CCC1FCD5CF752FC61D_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint32_t);
		uint32_t L_3 = (*(uint32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (uint32_t)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.UInt64>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UnsafeUtility_ReadArrayElement_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m31B60AC4311A7041BA0F9FEDD78EEFBD66E26E3D_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint64_t);
		uint64_t L_3 = (*(uint64_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (uint64_t)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Vector2>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  UnsafeUtility_ReadArrayElement_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m01A0E46439C1E898A9249C556A7372F93A369167_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 );
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = (*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Vector3>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  UnsafeUtility_ReadArrayElement_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m19B2467463C1EB03064DF2F7CDBC81F62901E0E1_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E );
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Vector4>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  UnsafeUtility_ReadArrayElement_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_mD12908659FA08F8E3CEFF115DDD57C374F0A0641_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 );
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_3 = (*(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRAnchor>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  UnsafeUtility_ReadArrayElement_TisXRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_m64D5D8ACC532B8BE51A3C3E4B9BFFCACB2D1D8C5_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C );
		XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  L_3 = (*(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  UnsafeUtility_ReadArrayElement_TisXRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A_m1AE452F7C55400C380FCECFC216A078B09EA96F1_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A );
		XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  L_3 = (*(XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C  UnsafeUtility_ReadArrayElement_TisXREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C_mDA35AFD0F29DCC4B766B7B3613C2885603C4F314_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C );
		XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C  L_3 = (*(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRFace>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599  UnsafeUtility_ReadArrayElement_TisXRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599_m4033736941460E97FE9A1AEAF3D235AE0A5C3638_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599 );
		XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599  L_3 = (*(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRHumanBody>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  UnsafeUtility_ReadArrayElement_TisXRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B_m4A9A83E42604AF14FB9B3FD786F746258144B16D_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B );
		XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  L_3 = (*(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4  UnsafeUtility_ReadArrayElement_TisXRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4_mA71F70344B6D02F9508CC7707D69B13EF524F1B8_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4 );
		XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4  L_3 = (*(XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4  UnsafeUtility_ReadArrayElement_TisXRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4_mBEE9AD82F562AAD80C542E051D5DCCAAFE9F1F1D_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4 );
		XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4  L_3 = (*(XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRParticipant>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  UnsafeUtility_ReadArrayElement_TisXRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F_m4CAD859F3DBF6140C0015F055E97F141DF6F1062_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F );
		XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  L_3 = (*(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRPointCloud>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  UnsafeUtility_ReadArrayElement_TisXRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2_m480F925856704EE38D7E6EBEED0BE9858C872500_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 );
		XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  L_3 = (*(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRRaycast>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  UnsafeUtility_ReadArrayElement_TisXRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_mE11DAD7493FB277991DB430FEAC04601EA8647D5_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 );
		XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  L_3 = (*(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRRaycastHit>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  UnsafeUtility_ReadArrayElement_TisXRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_m22DB79C445532F42531A8BF23921A045510B4752_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB );
		XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  L_3 = (*(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRReferencePoint>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634  UnsafeUtility_ReadArrayElement_TisXRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634_m9ABD3615E83E8850E63002767B641FA4C6CD276A_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 );
		XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634  L_3 = (*(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  UnsafeUtility_ReadArrayElement_TisXRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57_mF1632477894E09DBD51B2D6FEAA00D5A92EC2034_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 );
		XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  L_3 = (*(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRTrackedImage>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  UnsafeUtility_ReadArrayElement_TisXRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F_m0B522CE8CABAB7E68B30917D8CC1F4F274C03FA0_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F );
		XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  L_3 = (*(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRTrackedObject>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58  UnsafeUtility_ReadArrayElement_TisXRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58_mB0C402BE0144FE101D9E107CA6478EFDF64A6DE9_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58 );
		XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58  L_3 = (*(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastInfo>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1  UnsafeUtility_ReadArrayElement_TisPointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1_mD8970F506C3F72ED972C1DBADD25172A9C78465D_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(PointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1 );
		PointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1  L_3 = (*(PointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (PointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElementWithStride<System.Byte>(System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t UnsafeUtility_ReadArrayElementWithStride_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m84D9D467BD22B76776D4D25F8BD2D8DB6FADBAEC_gshared (void* ___source0, int32_t ___index1, int32_t ___stride2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		uint8_t L_3 = (*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)L_2))))))));
		return (uint8_t)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElementWithStride<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>(System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  UnsafeUtility_ReadArrayElementWithStride_TisConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78_m9365BDEA16B0DA4FC9662B1E10A91374B55A30B3_gshared (void* ___source0, int32_t ___index1, int32_t ___stride2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  L_3 = (*(ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)L_2))))))));
		return (ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElementWithStride<System.Object>(System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * UnsafeUtility_ReadArrayElementWithStride_TisRuntimeObject_mF8EABB0D4879066BA75A629F50475A868FFD74DE_gshared (void* ___source0, int32_t ___index1, int32_t ___stride2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		RuntimeObject * L_3 = (*(RuntimeObject **)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)L_2))))))));
		return (RuntimeObject *)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElementWithStride<System.UInt32>(System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UnsafeUtility_ReadArrayElementWithStride_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mD7585D80F075413E17211308ED32CD0671992BC3_gshared (void* ___source0, int32_t ___index1, int32_t ___stride2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		uint32_t L_3 = (*(uint32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)L_2))))))));
		return (uint32_t)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElementWithStride<System.UInt64>(System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UnsafeUtility_ReadArrayElementWithStride_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_mA347F306B7E702FB8FEA4ED68ED64795192B7D65_gshared (void* ___source0, int32_t ___index1, int32_t ___stride2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		uint64_t L_3 = (*(uint64_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)L_2))))))));
		return (uint64_t)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElementWithStride<UnityEngine.Vector3>(System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  UnsafeUtility_ReadArrayElementWithStride_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m603AFD29C1F76DAAE7C65D53BBD207AA4E1C9CD3_gshared (void* ___source0, int32_t ___index1, int32_t ___stride2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)L_2))))))));
		return (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_3;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/Triangle`1<System.Int16>>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tB81615D0F7CCFF9A78D687907797747BA1B6F984_mC8DB7FCF2B257F0A7881C713963FE94DA62B98CD_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tB81615D0F7CCFF9A78D687907797747BA1B6F984 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/Triangle`1<System.Int32>>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t47B391DE1AEA8BCBC9950BC9914D8EE7C6944E00_m3863487D516F0ADEB79EBFFE66DFBA18C46380F6_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t47B391DE1AEA8BCBC9950BC9914D8EE7C6944E00 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.BatchVisibility>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t2FCEDE21F23B91BD30F8918F2014E815BB7A2D1F_m4F09A05D3DD170DFA1F796E0A8FA0B313C65725B_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t2FCEDE21F23B91BD30F8918F2014E815BB7A2D1F );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.BoundedPlane>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tC25886536082C6025800F4A3A7F21B393DEC283C_mA64E3CCD92517DB285018B2C95FE3C5C3768B2D9_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tC25886536082C6025800F4A3A7F21B393DEC283C );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Byte>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t030625109E9AAAF4D093DC2F7FAA2BEC2000FA0A_m483AA7FC51E6A112FC0A4D06D38B11D37DFEF879_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t030625109E9AAAF4D093DC2F7FAA2BEC2000FA0A );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.ByteEnum>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t6E937DB22E0805E2622759CA1FA9371A992DBA58_mD9F6A2CB4A46FD7B82AA05D7197BEDE69C405754_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t6E937DB22E0805E2622759CA1FA9371A992DBA58 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t2F36EC542314916EC28FC5C072A5BD2BD7FCF768_m7D53536259B12A47029CBB9483C4DDE72004C4CB_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t2F36EC542314916EC28FC5C072A5BD2BD7FCF768 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Int32>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t2D37A63A0766FF4D4D0AA3CCD8879D66AC006FF1_mDA545781E7F1E51EA4B8806FE9681D3A0680C2BF_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t2D37A63A0766FF4D4D0AA3CCD8879D66AC006FF1 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tB73C2380111688DFF4CDA578F1D646B893208D17_m78DEA1E58B4D9D6E271BFF9B14011D45ED34B031_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tB73C2380111688DFF4CDA578F1D646B893208D17 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARKit.ManagedReferenceImage>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t09B3D6D7E9255D96B7427666F50BA340DCF589CE_m47C80949673574FFDC0715CC25CA1665E15B03C8_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t09B3D6D7E9255D96B7427666F50BA340DCF589CE );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Plane>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t844B26E46E7279186C852FA310311C251B480893_m7C04B3AA1BAA024C62459AAFF0C635C222310A16_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t844B26E46E7279186C852FA310311C251B480893 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Quaternion>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t2AB78F4DF3048147CBE36FD29469D568894FC3EA_m7A2454EEDB5DE110EBD417432FD26467F92598EC_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t2AB78F4DF3048147CBE36FD29469D568894FC3EA );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Single>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t71968306CCF214CB31392EA30096E5F1D1566E97_m2A6A36BAEBCA035917F5792AFD65A42AD49D730E_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t71968306CCF214CB31392EA30096E5F1D1566E97 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.TrackableId>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t9BE8E1D18E20FE75BA7BC58139F1C88E50083F59_mA7B11AB04F014A55CC6FFA4457454187CE470D15_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t9BE8E1D18E20FE75BA7BC58139F1C88E50083F59 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.UInt32>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t5566EA2E593CB8248CE5949452A1803A03E3AEE0_m63AA9F73125758E2B2AE66DB1D84431649E73D40_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t5566EA2E593CB8248CE5949452A1803A03E3AEE0 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.UInt64>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t4841EA6819270C98FCF241417AE852035FAD295D_mDC03CB15A108E86CF91BE61A0D5DD966741B6F0D_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t4841EA6819270C98FCF241417AE852035FAD295D );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Vector2>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t271108605E168FCC3142F101EE2849302458C2EF_m2A6D4614157CA5FEC4539AFBC5CA2D801D56C40F_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t271108605E168FCC3142F101EE2849302458C2EF );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Vector3>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tF2F4ACF834CFA6EE379A1392B0983B8E986CC67F_m60083E9F92A736196324FA983CE4F4A61CDC71BC_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tF2F4ACF834CFA6EE379A1392B0983B8E986CC67F );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Vector4>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t059CD7C810FA768D23B55CA7CC58BD22F4862D5F_m439A38DEF378CB03DBCA2BCBE18927753E8A2C85_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t059CD7C810FA768D23B55CA7CC58BD22F4862D5F );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRAnchor>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t257C1F128C719DA8903D1D43DDF2FCDF1C186843_m05A6DEEA3D1D58D4AE1FB691C66BED3BBFB0F6AE_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t257C1F128C719DA8903D1D43DDF2FCDF1C186843 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tD5FB129B0FE56F873354763E74C4CA9603CF0FBF_mA13F6109B6FA1C99D9DEEAB354342753651A5FDA_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tD5FB129B0FE56F873354763E74C4CA9603CF0FBF );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tA3E84084F2481EAEB679B679FC3DB35961106690_mF0636F3AD1B53A5074F2AA6EF7BE0878FDE6314D_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tA3E84084F2481EAEB679B679FC3DB35961106690 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRFace>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tDC746396BD4C3DEDEFD7BCA4F2FB927A7C9B23D6_m01DAB809A1C73F2A1C8D0B4D039B44A723A4DAD6_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tDC746396BD4C3DEDEFD7BCA4F2FB927A7C9B23D6 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRHumanBody>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tED912FC6AED4BF992E7A399B4C07FDA8DB72C4B7_m84384054B4D4FFA84A4BDECD0BF6063C5CE3852B_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tED912FC6AED4BF992E7A399B4C07FDA8DB72C4B7 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tAEC9107335C3ACB0D1EC024C5A16EE34DD04DBB7_m79C653217E17BD7509955AFFDB74FA383DE09007_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tAEC9107335C3ACB0D1EC024C5A16EE34DD04DBB7 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t66A51797B02768C7E37EE191A6A41DFD76986B93_mCFE622E1C528733548274EA4919CC9BFAF73F855_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t66A51797B02768C7E37EE191A6A41DFD76986B93 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRParticipant>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tF269397DB58F83DB2A25F4B8690D15E87B5629CD_mAFC4872F555B724057B9427660070C5BBF15CF0B_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tF269397DB58F83DB2A25F4B8690D15E87B5629CD );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRPointCloud>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t78096416E3ABFE26E4039FC6FD89EDA08E585800_mFB28FE12CB4E30C6E853F91D5ED172B05377DC46_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t78096416E3ABFE26E4039FC6FD89EDA08E585800 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRRaycast>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t6FF262161D1834575CD49D01F0D3995FEA992D62_m864E71C1868B063F1B4003D49C02F13215067048_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t6FF262161D1834575CD49D01F0D3995FEA992D62 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t8345D25D596B0A21206B48C487BA031919DC4310_m758AEB002D445E212D55AA2EF491A2A0592EC96F_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t8345D25D596B0A21206B48C487BA031919DC4310 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t9D657DBA4E89FCD23C31C660D77E9638F5B3E728_m0EC216D4CB0391551CCA5C1B2B4DF80B67F45931_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t9D657DBA4E89FCD23C31C660D77E9638F5B3E728 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t0B1F22AE74CDD2B893FAE250B9DF71D66F0AC180_mF765BBDFBB2A5013BC0DAE7D4AE9E18471167449_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t0B1F22AE74CDD2B893FAE250B9DF71D66F0AC180 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t109C90BE24A2EE7ACC0193AA9E8ECB0C36CDC372_m15AB926960198E0D74115D992395C2F213E80C45_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t109C90BE24A2EE7ACC0193AA9E8ECB0C36CDC372 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tE95ABAB4F1E81E2D7BCA8662A0445AB784FB952E_m74EE532469B6962BD204CCFDB8754CBDDB2DFAE5_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tE95ABAB4F1E81E2D7BCA8662A0445AB784FB952E );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastInfo>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t8865AB33A564AA1551923637673E4DA1D3FF2B84_m6E923C741770063B5E7B03A3C016D5316A0FC1DA_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t8865AB33A564AA1551923637673E4DA1D3FF2B84 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/Triangle`1<System.Int16>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisTriangle_1_t5D70FED5A96E61ADDCC41F8B4CA3855BC7A98A11_m648DBD577CDDD351DC23C2059E58C892B2B4A74F_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(Triangle_1_t5D70FED5A96E61ADDCC41F8B4CA3855BC7A98A11 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/Triangle`1<System.Int32>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisTriangle_1_t23CE09469BEC0FFB6767EDDA20FAB85B0C3104C9_m070EC017EF5DE3CF34CA506EAFDFA4EEEE191421_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(Triangle_1_t23CE09469BEC0FFB6767EDDA20FAB85B0C3104C9 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Rendering.BatchVisibility>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE_m59EADA64485304CCC918007EE51D37E128AB411D_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.InputSystem.XR.Bone>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBone_tD72F0CE1A7820B4119779DBDB579835CB9E9BA56_mE9B36DDF7ABCCA7F5F4D81AD87799577044AB649_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(Bone_tD72F0CE1A7820B4119779DBDB579835CB9E9BA56 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.Boolean>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m8E37105D34D8996C085A798CAD56FF6C2F1D2CA6_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(bool);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.BoundedPlane>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_m192B25183D0B9501F76EA99217C064F648F6B1F3_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.Byte>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mC38689A53E959AC0D3F9C9BF89F277C4A1D23BBF_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(uint8_t);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.ByteEnum>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisByteEnum_t39285A9D8C7F88982FF718C04A9FA1AE64827307_m3F6ED40E476C50572652C4C043A96A2405F6678C_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(uint8_t);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78_mD1FC31D13212054222438A163DB26F8D6BFB3A5C_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.Double>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_m14E2C57CE3AE941D4E5A541BF22D1A5C7AADEF05_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(double);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.InputSystem.XR.Eyes>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisEyes_t61C3F3A2F620E8B856BBFCB89DE49C81F7116318_m598D376666D8D19E246792AF20FF9B065CA737DF_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(Eyes_t61C3F3A2F620E8B856BBFCB89DE49C81F7116318 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.InputSystem.LowLevel.InputEvent>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92_mE85A693FE3B5FA8A5305B4C79465F5EF5853418E_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(InputEvent_t501FCA2333E787A4DA3C7FF85383FBA452091C92 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.Int32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mC154751B6ED1926446C432F482791D0C5D3F663A_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(int32_t);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.Int32Enum>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_mFC3373190B3BE1CF7E7594D8E6A3FBC6251EA6DB_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(int32_t);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Experimental.GlobalIllumination.LightDataGI>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisLightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2_mBBB6CBF143991B044213D375125D1E6F3352FF81_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARKit.ManagedReferenceImage>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1_m2A727E794855FD1178EE52363D8306959B217286_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Plane>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPlane_t80844BF2332EAFC1DDEDD616A950242031A115C7_m223C8A2842490CA74E75B2180AEE83873D0A4696_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.OpenXR.Input.Pose>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPose_t066D8D46ADA938D52C66EE071A37B17E71685B5C_mE0C3D82E5576230950FFE530E42D06D1D54415E9_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(Pose_t066D8D46ADA938D52C66EE071A37B17E71685B5C );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Quaternion>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_mAC8905497A863AD87BFE65762297003BA81AB81F_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m62538C9CC88C24C00F26BFEDEFDDF192DF3D7074_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(float);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.InputSystem.LowLevel.TouchState>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisTouchState_t83BF8A46038EF445074F008746EA36DC95EA139F_mE40E6AD721B08F00ACB1314F1FA32B4A57151F3D_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(TouchState_t83BF8A46038EF445074F008746EA36DC95EA139F );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.TrackableId>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_mF697624F82B05F48FEBCA43CAC7120F74662F09B_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.UInt32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mF52F526110B94ADBF53DDE17836AA18E0295A75B_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(uint32_t);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.UInt64>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_mDBC64421AD01832F8501B6A63808B500603B0428_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(uint64_t);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mB0BA7AC549DE2A13AFD6C8FAF906DFABF03C148D_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Vector3>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m8508D752DDCACDDA57921C7B14C2ABAB9E07C134_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Vector4>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_mFA1DB8F130AAD9A5A0EAA97B9F2CCA33EFDF55FA_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRAnchor>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_m5694802E457D329AED739F913B78C59EA39212DC_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A_m598EC6E91AC0754DAC422344E0C8158EDC7032CD_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C_mF943BAC56EED045786692CD920E8EAD14B260C08_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRFace>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599_mC5134E039EBB8AC07E8A42A3A0DEFAE4D14BAC4A_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRHumanBody>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B_mA9742BC88C2B0F89C00F4A400F83FDFB4B921651_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4_m9695C40EEE8B447D5298BEF655C0BEC376A94729_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4_m17445EC9BA2AF840DBA4F74645589F0991414309_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRParticipant>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F_m00E843B9705969489FCA43AAF5B4BDF0DAE674C9_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRPointCloud>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2_m49A388008D2C378ACD6453EDC658C82BBE51FA72_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRRaycast>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_mCE9C5E920BABDE0E31F29FA16BCA806F7FE5CE04_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRRaycastHit>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_m51E2C6221DC8163F580478B984D0562A95A715BA_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRReferencePoint>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634_mB974E1B31017770FEFBFEA1C4BED09DD79AA0FBA_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57_mB4D6CFBA997B6392985F8F34935536E547A6A928_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRTrackedImage>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F_mB89CD595084C74E9E0110166B3F14FBE349D9006_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRTrackedObject>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58_m0EE2A462A71CC22147609194E7FC01E8F60A5144_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastInfo>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1_m6DB7D8796FC1D3CE8F96532B9D69B9AB7205D8AD_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(PointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.InputSystem.EnhancedTouch.Touch/ExtraDataPerTouchState>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisExtraDataPerTouchState_tA964B217654F57C798B8DF5F37B74C9F702AF502_mF0B12FBB200377CE2A0E32FD9E71C45461349140_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(ExtraDataPerTouchState_tA964B217654F57C798B8DF5F37B74C9F702AF502 );
		return (int32_t)L_0;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/Triangle`1<System.Int16>>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisTriangle_1_t5D70FED5A96E61ADDCC41F8B4CA3855BC7A98A11_m883314402AE1E04A0E5F46687B4304E9A1A2429E_gshared (void* ___destination0, int32_t ___index1, Triangle_1_t5D70FED5A96E61ADDCC41F8B4CA3855BC7A98A11  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Triangle_1_t5D70FED5A96E61ADDCC41F8B4CA3855BC7A98A11 );
		Triangle_1_t5D70FED5A96E61ADDCC41F8B4CA3855BC7A98A11  L_3 = ___value2;
		*(Triangle_1_t5D70FED5A96E61ADDCC41F8B4CA3855BC7A98A11 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/Triangle`1<System.Int32>>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisTriangle_1_t23CE09469BEC0FFB6767EDDA20FAB85B0C3104C9_mAF0236AEFE6BC68C85F0B5B47C474F07FAC082C7_gshared (void* ___destination0, int32_t ___index1, Triangle_1_t23CE09469BEC0FFB6767EDDA20FAB85B0C3104C9  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Triangle_1_t23CE09469BEC0FFB6767EDDA20FAB85B0C3104C9 );
		Triangle_1_t23CE09469BEC0FFB6767EDDA20FAB85B0C3104C9  L_3 = ___value2;
		*(Triangle_1_t23CE09469BEC0FFB6767EDDA20FAB85B0C3104C9 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Rendering.BatchVisibility>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisBatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE_mC2658E4BCDD5CB7B35E546FAE518CF3C4102626E_gshared (void* ___destination0, int32_t ___index1, BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE );
		BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  L_3 = ___value2;
		*(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.BoundedPlane>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisBoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_m0EA199B728F342780D5FF3360AA535EBC3F81F80_gshared (void* ___destination0, int32_t ___index1, BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 );
		BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  L_3 = ___value2;
		*(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Byte>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mB82F9E11B8FEC9E090AEA6C9C2C8A611682E7825_gshared (void* ___destination0, int32_t ___index1, uint8_t ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = ___value2;
		*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.ByteEnum>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisByteEnum_t39285A9D8C7F88982FF718C04A9FA1AE64827307_mBCD9E52F8A417B917B35F56980EA4C003A440A96_gshared (void* ___destination0, int32_t ___index1, uint8_t ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = ___value2;
		*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78_m66A11A0D0EEDB9BAD04ED17211374B91A938CC5D_gshared (void* ___destination0, int32_t ___index1, ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 );
		ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  L_3 = ___value2;
		*(ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Int32>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m7710B9BDDE46DE6C314C3D8D60C4F93C0BD57392_gshared (void* ___destination0, int32_t ___index1, int32_t ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(int32_t);
		int32_t L_3 = ___value2;
		*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Experimental.GlobalIllumination.LightDataGI>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisLightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2_mB7E008D6D4C2008C47D4D71528F6AE7AFCF0B7CB_gshared (void* ___destination0, int32_t ___index1, LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 );
		LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  L_3 = ___value2;
		*(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARKit.ManagedReferenceImage>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1_m5FC5B5ACE8413D4FE8CD2BA161269005F890C539_gshared (void* ___destination0, int32_t ___index1, ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1 );
		ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1  L_3 = ___value2;
		*(ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Object>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisRuntimeObject_mA6478546A0D6B20061E1DAF0862A895CF5D8C044_gshared (void* ___destination0, int32_t ___index1, RuntimeObject * ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(RuntimeObject *);
		RuntimeObject * L_3 = ___value2;
		*(RuntimeObject **)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))), (void*)L_3);
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Plane>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisPlane_t80844BF2332EAFC1DDEDD616A950242031A115C7_mB75E0A57B03F72BC1744169D7F4F8CF73AD98915_gshared (void* ___destination0, int32_t ___index1, Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 );
		Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  L_3 = ___value2;
		*(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Quaternion>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_mFEA1EE338AAC863BEA2AF2134D3D22ED93E013BB_gshared (void* ___destination0, int32_t ___index1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 );
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3 = ___value2;
		*(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Single>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m969E836808A695805FE4C069301FD551A8F1B01E_gshared (void* ___destination0, int32_t ___index1, float ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(float);
		float L_3 = ___value2;
		*(float*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.TrackableId>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m8C51761306DE70EA0C6A7660F9128F7E981F6927_gshared (void* ___destination0, int32_t ___index1, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B );
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_3 = ___value2;
		*(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.UInt32>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mD0CF58950EF1EBF39DB359EBC77FF0DC6582778F_gshared (void* ___destination0, int32_t ___index1, uint32_t ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint32_t);
		uint32_t L_3 = ___value2;
		*(uint32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.UInt64>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m108F557D18F2F5C93557B2FED6ABADA10061283C_gshared (void* ___destination0, int32_t ___index1, uint64_t ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint64_t);
		uint64_t L_3 = ___value2;
		*(uint64_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Vector2>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mBFF73AAEB90319D383F131CB86FCA21CF7D1B7F2_gshared (void* ___destination0, int32_t ___index1, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 );
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___value2;
		*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Vector3>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m0236C8B08D58538865ACC8B7EE0340EBD16B4C28_gshared (void* ___destination0, int32_t ___index1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E );
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___value2;
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Vector4>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_mA54583EE7B17CB1CE1F1E15C0E4BF37FD832DAED_gshared (void* ___destination0, int32_t ___index1, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 );
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_3 = ___value2;
		*(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRAnchor>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_m08AB8CBC42639026E724CDF29FC91B40F7BBAD1A_gshared (void* ___destination0, int32_t ___index1, XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C );
		XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  L_3 = ___value2;
		*(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A_mFB4DA713B013D3E2AF58EFAFC41E5ABA84F8EA52_gshared (void* ___destination0, int32_t ___index1, XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A );
		XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  L_3 = ___value2;
		*(XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C_m329166067149C70014E219272B24DD2840E00A42_gshared (void* ___destination0, int32_t ___index1, XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C );
		XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C  L_3 = ___value2;
		*(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRFace>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599_m00375AE9882AF97AB80C4727C635FA220E86A9E7_gshared (void* ___destination0, int32_t ___index1, XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599 );
		XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599  L_3 = ___value2;
		*(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRHumanBody>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B_m0C0CB49C2DB8B431F3695D780A110DFBAEA942A6_gshared (void* ___destination0, int32_t ___index1, XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B );
		XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  L_3 = ___value2;
		*(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4_mE19E4A84AC4D223278D9D9BA308B91BED6487530_gshared (void* ___destination0, int32_t ___index1, XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4 );
		XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4  L_3 = ___value2;
		*(XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4_mF6DF2A567603B19D05A548044E8114AF0225C16B_gshared (void* ___destination0, int32_t ___index1, XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4 );
		XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4  L_3 = ___value2;
		*(XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRParticipant>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F_mB8BB0897B5B47E1455974276FB5EAE29E8DC0A0F_gshared (void* ___destination0, int32_t ___index1, XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F );
		XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  L_3 = ___value2;
		*(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRPointCloud>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2_m2CEE2DC3D3C26CC00857D772EBB9D6E52502C201_gshared (void* ___destination0, int32_t ___index1, XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 );
		XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  L_3 = ___value2;
		*(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRRaycast>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_mD93BEBBABA5176F89C09EE0552F18F8DEF208136_gshared (void* ___destination0, int32_t ___index1, XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 );
		XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  L_3 = ___value2;
		*(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRRaycastHit>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_mFA6C745BE6AE995172B636D1D95228F3A7C02D65_gshared (void* ___destination0, int32_t ___index1, XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB );
		XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  L_3 = ___value2;
		*(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRReferencePoint>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634_m47646223E229C369B4496607B3CE71D9E54C5115_gshared (void* ___destination0, int32_t ___index1, XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 );
		XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634  L_3 = ___value2;
		*(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57_m5BAD03709BF4D17F6E0A3F7420B5FFD56E888299_gshared (void* ___destination0, int32_t ___index1, XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 );
		XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  L_3 = ___value2;
		*(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRTrackedImage>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F_m715899D3134DF4C3443F563160F867B1CA94E0C1_gshared (void* ___destination0, int32_t ___index1, XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F );
		XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  L_3 = ___value2;
		*(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRTrackedObject>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58_m59B714FE0669A026C08B8F912F99BAF850ADA405_gshared (void* ___destination0, int32_t ___index1, XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58 );
		XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58  L_3 = ___value2;
		*(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastInfo>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisPointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1_m5037A3832D0DC667BD9E0DB275381DCDCC3455DA_gshared (void* ___destination0, int32_t ___index1, PointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(PointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1 );
		PointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1  L_3 = ___value2;
		*(PointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElementWithStride<System.Byte>(System.Void*,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m157CC165ACC8F56460E95DB6D992377A023BB576_gshared (void* ___destination0, int32_t ___index1, int32_t ___stride2, uint8_t ___value3, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		uint8_t L_3 = ___value3;
		*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElementWithStride<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>(System.Void*,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78_m6ADF9908AA103A6BBAC6D056FC0AB67752FD3154_gshared (void* ___destination0, int32_t ___index1, int32_t ___stride2, ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  ___value3, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  L_3 = ___value3;
		*(ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElementWithStride<System.Object>(System.Void*,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisRuntimeObject_m182506AFA387937C398582D7CBE0188587DB7958_gshared (void* ___destination0, int32_t ___index1, int32_t ___stride2, RuntimeObject * ___value3, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		RuntimeObject * L_3 = ___value3;
		*(RuntimeObject **)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)L_2))))))) = L_3;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)L_2))))))), (void*)L_3);
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElementWithStride<System.UInt32>(System.Void*,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m2885227038FEBBD4418A596B3A29673C8B82F775_gshared (void* ___destination0, int32_t ___index1, int32_t ___stride2, uint32_t ___value3, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		uint32_t L_3 = ___value3;
		*(uint32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElementWithStride<System.UInt64>(System.Void*,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_mB4D919C75E1B8674DB63205106D46C6B0CC06677_gshared (void* ___destination0, int32_t ___index1, int32_t ___stride2, uint64_t ___value3, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		uint64_t L_3 = ___value3;
		*(uint64_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElementWithStride<UnityEngine.Vector3>(System.Void*,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m4CD1706941D9FEC400F23BE4BA6A7F489F7F1AC6_gshared (void* ___destination0, int32_t ___index1, int32_t ___stride2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value3, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___value3;
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)L_2))))))) = L_3;
		return;
	}
}
// T System.Threading.Volatile::Read<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Volatile_Read_TisRuntimeObject_m34EC4B420E3B86C8B06957C02A3FDD87D674E50E_gshared (RuntimeObject ** ___location0, const RuntimeMethod* method)
{
	return VolatileRead(___location0);
}
// System.Void System.Threading.Volatile::Write<System.Object>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Volatile_Write_TisRuntimeObject_m3392CE290ADB37963BB566664A63096AF6DABAE4_gshared (RuntimeObject ** ___location0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	VolatileWrite(___location0, ___value1);
}
// System.Void UnityEngine.XR.ARSubsystems.XRFaceMesh::Resize<System.Int32>(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<T>&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRFaceMesh_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m5B83C85C35F45CB8227D3224A679C093AF2EA5C9_gshared (int32_t ___length0, int32_t ___allocator1, NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * ___array2, bool ___shouldExist3, const RuntimeMethod* method)
{
	{
		// if (shouldExist)
		bool L_0 = ___shouldExist3;
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		// if (array.IsCreated)
		NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * L_1 = ___array2;
		bool L_2;
		L_2 = NativeArray_1_get_IsCreated_m0B7EB9CC11FCECCC0480F589775E99828F222AE5((NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 *)(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		// if (array.Length != length)
		NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * L_3 = ___array2;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 *)(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 *)L_3)->___m_Length_1);
		int32_t L_5 = ___length0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0046;
		}
	}
	{
		// array.Dispose();
		NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * L_6 = ___array2;
		NativeArray_1_Dispose_m69DBDA47FE3991A47E9CFCBFB3292676D22D7655((NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 *)(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		// array = new NativeArray<T>(length, allocator);
		NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * L_7 = ___array2;
		int32_t L_8 = ___length0;
		int32_t L_9 = ___allocator1;
		NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  L_10;
		memset((&L_10), 0, sizeof(L_10));
		NativeArray_1__ctor_m001FCAD07C1100FAA1AA3C38CA5C493FC25B2292((&L_10), (int32_t)L_8, (int32_t)L_9, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		*(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 *)L_7 = L_10;
		// }
		return;
	}

IL_0029:
	{
		// array = new NativeArray<T>(length, allocator);
		NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * L_11 = ___array2;
		int32_t L_12 = ___length0;
		int32_t L_13 = ___allocator1;
		NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  L_14;
		memset((&L_14), 0, sizeof(L_14));
		NativeArray_1__ctor_m001FCAD07C1100FAA1AA3C38CA5C493FC25B2292((&L_14), (int32_t)L_12, (int32_t)L_13, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		*(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 *)L_11 = L_14;
		// }
		return;
	}

IL_0038:
	{
		// else if (array.IsCreated)
		NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * L_15 = ___array2;
		bool L_16;
		L_16 = NativeArray_1_get_IsCreated_m0B7EB9CC11FCECCC0480F589775E99828F222AE5((NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 *)(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 *)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_16)
		{
			goto IL_0046;
		}
	}
	{
		// array.Dispose();
		NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * L_17 = ___array2;
		NativeArray_1_Dispose_m69DBDA47FE3991A47E9CFCBFB3292676D22D7655((NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 *)(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRFaceMesh::Resize<UnityEngine.Vector2>(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<T>&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRFaceMesh_Resize_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m34FD67D3535DEE8ED75734178572549C85ED2FBC_gshared (int32_t ___length0, int32_t ___allocator1, NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * ___array2, bool ___shouldExist3, const RuntimeMethod* method)
{
	{
		// if (shouldExist)
		bool L_0 = ___shouldExist3;
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		// if (array.IsCreated)
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_1 = ___array2;
		bool L_2;
		L_2 = NativeArray_1_get_IsCreated_mF82CF064C6050394DEAC11047A6308998101A4AE((NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		// if (array.Length != length)
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_3 = ___array2;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_3)->___m_Length_1);
		int32_t L_5 = ___length0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0046;
		}
	}
	{
		// array.Dispose();
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_6 = ___array2;
		NativeArray_1_Dispose_mE737DADB8C5E4B02C2FB6CB36E86AC6371D806BF((NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		// array = new NativeArray<T>(length, allocator);
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_7 = ___array2;
		int32_t L_8 = ___length0;
		int32_t L_9 = ___allocator1;
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  L_10;
		memset((&L_10), 0, sizeof(L_10));
		NativeArray_1__ctor_m53A2E0E5DDF506B8508EAC444CAF3DB70F874729((&L_10), (int32_t)L_8, (int32_t)L_9, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		*(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_7 = L_10;
		// }
		return;
	}

IL_0029:
	{
		// array = new NativeArray<T>(length, allocator);
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_11 = ___array2;
		int32_t L_12 = ___length0;
		int32_t L_13 = ___allocator1;
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  L_14;
		memset((&L_14), 0, sizeof(L_14));
		NativeArray_1__ctor_m53A2E0E5DDF506B8508EAC444CAF3DB70F874729((&L_14), (int32_t)L_12, (int32_t)L_13, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		*(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_11 = L_14;
		// }
		return;
	}

IL_0038:
	{
		// else if (array.IsCreated)
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_15 = ___array2;
		bool L_16;
		L_16 = NativeArray_1_get_IsCreated_mF82CF064C6050394DEAC11047A6308998101A4AE((NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_16)
		{
			goto IL_0046;
		}
	}
	{
		// array.Dispose();
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_17 = ___array2;
		NativeArray_1_Dispose_mE737DADB8C5E4B02C2FB6CB36E86AC6371D806BF((NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRFaceMesh::Resize<UnityEngine.Vector3>(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<T>&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRFaceMesh_Resize_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m3A74464DC489CB6AE118138DC9735384D7AD8366_gshared (int32_t ___length0, int32_t ___allocator1, NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 * ___array2, bool ___shouldExist3, const RuntimeMethod* method)
{
	{
		// if (shouldExist)
		bool L_0 = ___shouldExist3;
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		// if (array.IsCreated)
		NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 * L_1 = ___array2;
		bool L_2;
		L_2 = NativeArray_1_get_IsCreated_mCD60B11F9FB036F65310E83275A1632E57AAC29C((NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 *)(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		// if (array.Length != length)
		NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 * L_3 = ___array2;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 *)(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 *)L_3)->___m_Length_1);
		int32_t L_5 = ___length0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0046;
		}
	}
	{
		// array.Dispose();
		NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 * L_6 = ___array2;
		NativeArray_1_Dispose_m867A382096AF527E2B854ADC9ED75ED6BF95D76B((NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 *)(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		// array = new NativeArray<T>(length, allocator);
		NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 * L_7 = ___array2;
		int32_t L_8 = ___length0;
		int32_t L_9 = ___allocator1;
		NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  L_10;
		memset((&L_10), 0, sizeof(L_10));
		NativeArray_1__ctor_m81F8DAA326ED23278BEBD3D0193CC74C93608DF6((&L_10), (int32_t)L_8, (int32_t)L_9, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		*(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 *)L_7 = L_10;
		// }
		return;
	}

IL_0029:
	{
		// array = new NativeArray<T>(length, allocator);
		NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 * L_11 = ___array2;
		int32_t L_12 = ___length0;
		int32_t L_13 = ___allocator1;
		NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  L_14;
		memset((&L_14), 0, sizeof(L_14));
		NativeArray_1__ctor_m81F8DAA326ED23278BEBD3D0193CC74C93608DF6((&L_14), (int32_t)L_12, (int32_t)L_13, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		*(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 *)L_11 = L_14;
		// }
		return;
	}

IL_0038:
	{
		// else if (array.IsCreated)
		NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 * L_15 = ___array2;
		bool L_16;
		L_16 = NativeArray_1_get_IsCreated_mCD60B11F9FB036F65310E83275A1632E57AAC29C((NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 *)(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 *)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_16)
		{
			goto IL_0046;
		}
	}
	{
		// array.Dispose();
		NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 * L_17 = ___array2;
		NativeArray_1_Dispose_m867A382096AF527E2B854ADC9ED75ED6BF95D76B((NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 *)(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateIntegratedSubsystem<System.Object,System.Object>(System.Collections.Generic.List`1<TDescriptor>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_CreateIntegratedSubsystem_TisRuntimeObject_TisRuntimeObject_m672A1EDBF16B4851FBD595CA8F87AFD098F5FD86_gshared (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___descriptors0, String_t* ___id1, const RuntimeMethod* method)
{
	{
		// CreateSubsystem<TDescriptor, TSubsystem>(descriptors, id);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___descriptors0;
		String_t* L_1 = ___id1;
		NullCheck((XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 *)__this);
		((  void (*) (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 *)__this, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (String_t*)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateStandaloneSubsystem<System.Object,System.Object>(System.Collections.Generic.List`1<TDescriptor>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_CreateStandaloneSubsystem_TisRuntimeObject_TisRuntimeObject_m62F75FC416AB1701E6DEBDC00F95AB1AA2A9CA95_gshared (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___descriptors0, String_t* ___id1, const RuntimeMethod* method)
{
	{
		// CreateSubsystem<TDescriptor, TSubsystem>(descriptors, id);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___descriptors0;
		String_t* L_1 = ___id1;
		NullCheck((XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 *)__this);
		((  void (*) (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 *)__this, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (String_t*)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateSubsystem<System.Object,System.Object>(System.Collections.Generic.List`1<TDescriptor>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m3E52F1FFE137D3A16050805AB648F726394436DC_gshared (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___descriptors0, String_t* ___id1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mF9CF6659FF9290D0399AE9BAB022F7F806AF1610_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystemDescriptor_tEB935323042076ECFC076435FBD756B1E7953A14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// if (descriptors == null)
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___descriptors0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException("descriptors");
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4484D73E5D13E98119AFD8332CD8BC78758E004F)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m3E52F1FFE137D3A16050805AB648F726394436DC_RuntimeMethod_var)));
	}

IL_000e:
	{
		// SubsystemManager.GetSubsystemDescriptors<TDescriptor>(descriptors);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_2 = ___descriptors0;
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var);
		((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		// if (descriptors.Count > 0)
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = ___descriptors0;
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3);
		int32_t L_4;
		L_4 = ((  int32_t (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0088;
		}
	}
	{
		// foreach (var descriptor in descriptors)
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_5 = ___descriptors0;
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_5);
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  L_6;
		L_6 = ((  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		V_0 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 )L_6;
	}

IL_0024:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006f;
		}

IL_0026:
		{
			// foreach (var descriptor in descriptors)
			RuntimeObject * L_7;
			L_7 = Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
			V_1 = (RuntimeObject *)L_7;
			// ISubsystem subsys = null;
			V_2 = (RuntimeObject*)NULL;
			// if (String.Compare(descriptor.id, id, true) == 0)
			NullCheck((RuntimeObject*)(V_1));
			String_t* L_8;
			L_8 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.ISubsystemDescriptor::get_id() */, ISubsystemDescriptor_tEB935323042076ECFC076435FBD756B1E7953A14_il2cpp_TypeInfo_var, (RuntimeObject*)(V_1));
			String_t* L_9 = ___id1;
			int32_t L_10;
			L_10 = String_Compare_m3B98D489EF23605CC97E9907AAF1E5E99BBF6A62((String_t*)L_8, (String_t*)L_9, (bool)1, /*hidden argument*/NULL);
			if (L_10)
			{
				goto IL_0054;
			}
		}

IL_0046:
		{
			// subsys = descriptor.Create();
			NullCheck((RuntimeObject*)(V_1));
			RuntimeObject* L_11;
			L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* UnityEngine.ISubsystem UnityEngine.ISubsystemDescriptor::Create() */, ISubsystemDescriptor_tEB935323042076ECFC076435FBD756B1E7953A14_il2cpp_TypeInfo_var, (RuntimeObject*)(V_1));
			V_2 = (RuntimeObject*)L_11;
		}

IL_0054:
		{
			// if (subsys != null)
			RuntimeObject* L_12 = V_2;
			if (!L_12)
			{
				goto IL_006f;
			}
		}

IL_0057:
		{
			// m_SubsystemInstanceMap[typeof(TSubsystem)] = subsys;
			Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B * L_13 = (Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B *)__this->get_m_SubsystemInstanceMap_4();
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_14 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 5)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_15;
			L_15 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_14, /*hidden argument*/NULL);
			RuntimeObject* L_16 = V_2;
			NullCheck((Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B *)L_13);
			Dictionary_2_set_Item_mF9CF6659FF9290D0399AE9BAB022F7F806AF1610((Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B *)L_13, (Type_t *)L_15, (RuntimeObject*)L_16, /*hidden argument*/Dictionary_2_set_Item_mF9CF6659FF9290D0399AE9BAB022F7F806AF1610_RuntimeMethod_var);
			// break;
			IL2CPP_LEAVE(0x88, FINALLY_007a);
		}

IL_006f:
		{
			// foreach (var descriptor in descriptors)
			bool L_17;
			L_17 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
			if (L_17)
			{
				goto IL_0026;
			}
		}

IL_0078:
		{
			IL2CPP_LEAVE(0x88, FINALLY_007a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007a;
	}

FINALLY_007a:
	{ // begin finally (depth: 1)
		Il2CppFakeBox<Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 > L_18(IL2CPP_RGCTX_DATA(method->rgctx_data, 7), (&V_0));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__130 = il2cpp_codegen_get_interface_invoke_data(0, (&L_18), IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__130.methodPtr)((RuntimeObject*)(&L_18), /*hidden argument*/il2cpp_virtual_invoke_data__130.method);
		V_0 = L_18.m_Value;
		IL2CPP_END_FINALLY(122)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(122)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x88, IL_0088)
	}

IL_0088:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::DestroySubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_DestroySubsystem_TisRuntimeObject_m43760686D2E4C1FBCE4BD18489E767F294A68E8A_gshared (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m9E74E9D949738C4D713E2CBBB913F1802FC81EC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m5937D6874DDC30F39BB9C214C475213227C16F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystem_t64464AB5EA37383499172853FA932A96C7841789_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Type_t * V_1 = NULL;
	{
		// T subsystem = GetLoadedSubsystem<T>();
		NullCheck((XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B *)__this);
		RuntimeObject * L_0;
		L_0 = GenericVirtFuncInvoker0< RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B *)__this);
		V_0 = (RuntimeObject *)L_0;
		// if (subsystem != null)
		RuntimeObject * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0040;
		}
	}
	{
		// var subsystemType = typeof(T);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_2, /*hidden argument*/NULL);
		V_1 = (Type_t *)L_3;
		// if (m_SubsystemInstanceMap.ContainsKey(subsystemType))
		Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B * L_4 = (Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B *)__this->get_m_SubsystemInstanceMap_4();
		Type_t * L_5 = V_1;
		NullCheck((Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B *)L_4);
		bool L_6;
		L_6 = Dictionary_2_ContainsKey_m9E74E9D949738C4D713E2CBBB913F1802FC81EC5((Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B *)L_4, (Type_t *)L_5, /*hidden argument*/Dictionary_2_ContainsKey_m9E74E9D949738C4D713E2CBBB913F1802FC81EC5_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		// m_SubsystemInstanceMap.Remove(subsystemType);
		Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B * L_7 = (Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B *)__this->get_m_SubsystemInstanceMap_4();
		Type_t * L_8 = V_1;
		NullCheck((Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B *)L_7);
		bool L_9;
		L_9 = Dictionary_2_Remove_m5937D6874DDC30F39BB9C214C475213227C16F22((Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B *)L_7, (Type_t *)L_8, /*hidden argument*/Dictionary_2_Remove_m5937D6874DDC30F39BB9C214C475213227C16F22_RuntimeMethod_var);
	}

IL_0035:
	{
		// subsystem.Destroy();
		RuntimeObject * L_10 = V_0;
		NullCheck((RuntimeObject*)L_10);
		InterfaceActionInvoker0::Invoke(2 /* System.Void UnityEngine.ISubsystem::Destroy() */, ISubsystem_t64464AB5EA37383499172853FA932A96C7841789_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
	}

IL_0040:
	{
		// }
		return;
	}
}
// T UnityEngine.XR.Management.XRLoaderHelper::GetLoadedSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * XRLoaderHelper_GetLoadedSubsystem_TisRuntimeObject_mBD860AFFF9C98273DF11CF62C6A588FBA4429779_gshared (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m0439232C1973145EACAE3AF316075FAE865873D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// Type subsystemType = typeof(T);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_1;
		// m_SubsystemInstanceMap.TryGetValue(subsystemType, out subsystem);
		Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B * L_2 = (Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B *)__this->get_m_SubsystemInstanceMap_4();
		Type_t * L_3 = V_0;
		NullCheck((Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B *)L_2);
		bool L_4;
		L_4 = Dictionary_2_TryGetValue_m0439232C1973145EACAE3AF316075FAE865873D6((Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B *)L_2, (Type_t *)L_3, (RuntimeObject**)(RuntimeObject**)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_m0439232C1973145EACAE3AF316075FAE865873D6_RuntimeMethod_var);
		// return subsystem as T;
		RuntimeObject* L_5 = V_1;
		return (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))), IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StartSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_StartSubsystem_TisRuntimeObject_m5FFD6719D8FE560199B25C5D3AF8D0D40DFD038E_gshared (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystem_t64464AB5EA37383499172853FA932A96C7841789_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		// T subsystem = GetLoadedSubsystem<T>();
		NullCheck((XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B *)__this);
		RuntimeObject * L_0;
		L_0 = GenericVirtFuncInvoker0< RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B *)__this);
		V_0 = (RuntimeObject *)L_0;
		// if (subsystem != null)
		RuntimeObject * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// subsystem.Start();
		RuntimeObject * L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		InterfaceActionInvoker0::Invoke(0 /* System.Void UnityEngine.ISubsystem::Start() */, ISubsystem_t64464AB5EA37383499172853FA932A96C7841789_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StopSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_StopSubsystem_TisRuntimeObject_m5700EB064085C2D3E817458AD01E0C97624102A7_gshared (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystem_t64464AB5EA37383499172853FA932A96C7841789_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		// T subsystem = GetLoadedSubsystem<T>();
		NullCheck((XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B *)__this);
		RuntimeObject * L_0;
		L_0 = GenericVirtFuncInvoker0< RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B *)__this);
		V_0 = (RuntimeObject *)L_0;
		// if (subsystem != null)
		RuntimeObject * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// subsystem.Stop();
		RuntimeObject * L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		InterfaceActionInvoker0::Invoke(1 /* System.Void UnityEngine.ISubsystem::Stop() */, ISubsystem_t64464AB5EA37383499172853FA932A96C7841789_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
	}

IL_001a:
	{
		// }
		return;
	}
}
// T UnityEngine.XR.Management.XRManagerSettings::ActiveLoaderAs<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * XRManagerSettings_ActiveLoaderAs_TisRuntimeObject_m85FCC9024CB82ED7C4E28EFC4DE4F14484ADAB8F_gshared (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method)
{
	{
		// return activeLoader as T;
		NullCheck((XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F *)__this);
		XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * L_0;
		L_0 = XRManagerSettings_get_activeLoader_mB1950E58B1DD1774EB2798CEBA6D3C371CE8F1D8_inline((XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F *)__this, /*hidden argument*/NULL);
		return (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))), IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem::Register<System.Object,System.Object>(System.String,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor/Capabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRObjectTrackingSubsystem_Register_TisRuntimeObject_TisRuntimeObject_mAD339CA933DF8B8D705E23C725E78FF7599EC36F_gshared (String_t* ___id0, Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685  ___capabilities1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tE5D99C3159868DE6506269CB6B830621F8BC31A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRObjectTrackingSubsystemDescriptor_t831B568A9BE175A6A79BB87E25DEFAC519A6C472_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (id == null)
		String_t* L_0 = ___id0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException(nameof(id));
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XRObjectTrackingSubsystem_Register_TisRuntimeObject_TisRuntimeObject_mAD339CA933DF8B8D705E23C725E78FF7599EC36F_RuntimeMethod_var)));
	}

IL_000e:
	{
		// SubsystemDescriptorStore.RegisterDescriptor(new XRObjectTrackingSubsystemDescriptor(id, typeof(TProvider), typeof(TSubsystemOverride), capabilities));
		String_t* L_2 = ___id0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_3, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		Type_t * L_6;
		L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_5, /*hidden argument*/NULL);
		Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685  L_7 = ___capabilities1;
		XRObjectTrackingSubsystemDescriptor_t831B568A9BE175A6A79BB87E25DEFAC519A6C472 * L_8 = (XRObjectTrackingSubsystemDescriptor_t831B568A9BE175A6A79BB87E25DEFAC519A6C472 *)il2cpp_codegen_object_new(XRObjectTrackingSubsystemDescriptor_t831B568A9BE175A6A79BB87E25DEFAC519A6C472_il2cpp_TypeInfo_var);
		XRObjectTrackingSubsystemDescriptor__ctor_mE44B346A0A5A035B7DFC7430336DDADED7A4F6A5(L_8, (String_t*)L_2, (Type_t *)L_4, (Type_t *)L_6, (Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685 )L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemDescriptorStore_tE5D99C3159868DE6506269CB6B830621F8BC31A6_il2cpp_TypeInfo_var);
		SubsystemDescriptorStore_RegisterDescriptor_m5586866BB233EF26B98640851816DD1764657688((SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E *)L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor::Register<System.Object,System.Object>(System.String,UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor/Capabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRParticipantSubsystemDescriptor_Register_TisRuntimeObject_TisRuntimeObject_m77779CD44165EB52B7D758C6A46D010D3BCCB1FA_gshared (String_t* ___subsystemId0, int32_t ___capabilities1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tE5D99C3159868DE6506269CB6B830621F8BC31A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRParticipantSubsystemDescriptor_t533EE70DC8D4B105B9C87B76D35A7D59A84BCA55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SubsystemDescriptorStore.RegisterDescriptor(new XRParticipantSubsystemDescriptor(subsystemId, typeof(TProvider), typeof(TSubsystemOverride), capabilities));
		String_t* L_0 = ___subsystemId0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_3, /*hidden argument*/NULL);
		int32_t L_5 = ___capabilities1;
		XRParticipantSubsystemDescriptor_t533EE70DC8D4B105B9C87B76D35A7D59A84BCA55 * L_6 = (XRParticipantSubsystemDescriptor_t533EE70DC8D4B105B9C87B76D35A7D59A84BCA55 *)il2cpp_codegen_object_new(XRParticipantSubsystemDescriptor_t533EE70DC8D4B105B9C87B76D35A7D59A84BCA55_il2cpp_TypeInfo_var);
		XRParticipantSubsystemDescriptor__ctor_m83A6821A71C68D58354ACE8289E8F621F2E183DC(L_6, (String_t*)L_0, (Type_t *)L_2, (Type_t *)L_4, (int32_t)L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemDescriptorStore_tE5D99C3159868DE6506269CB6B830621F8BC31A6_il2cpp_TypeInfo_var);
		SubsystemDescriptorStore_RegisterDescriptor_m5586866BB233EF26B98640851816DD1764657688((SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E *)L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Quaternion>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  CallbackContext_ReadValue_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_mF53E1946C30BB3E3B3216A0F7B7286B3DDBCC9E4_gshared (CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B * __this, const RuntimeMethod* method)
{
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var value = default(TValue);
		il2cpp_codegen_initobj((&V_0), sizeof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 ));
		// if (m_State != null && phase != InputActionPhase.Canceled)
		InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * L_0 = (InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C *)__this->get_m_State_0();
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_1;
		L_1 = CallbackContext_get_phase_m1AA786B2FBD617BD9061126BF7442F08484F76E7((CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)(CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)4)))
		{
			goto IL_0032;
		}
	}
	{
		// value = m_State.ReadValue<TValue>(bindingIndex, controlIndex);
		InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * L_2 = (InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C *)__this->get_m_State_0();
		int32_t L_3;
		L_3 = CallbackContext_get_bindingIndex_mD26C42B8D97073283D42CB129F00E58AAF63C6EB((CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)(CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)__this, /*hidden argument*/NULL);
		int32_t L_4;
		L_4 = CallbackContext_get_controlIndex_m56E2618DEAD8E55474756DFDCC261CCE1A4EF776((CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)(CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)__this, /*hidden argument*/NULL);
		NullCheck((InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C *)L_2);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_5;
		L_5 = ((  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  (*) (InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C *, int32_t, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C *)L_2, (int32_t)L_3, (int32_t)L_4, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 )L_5;
	}

IL_0032:
	{
		// return value;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6 = V_0;
		return (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 )L_6;
	}
}
IL2CPP_EXTERN_C  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  CallbackContext_ReadValue_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_mF53E1946C30BB3E3B3216A0F7B7286B3DDBCC9E4_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B * _thisAdjusted = reinterpret_cast<CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *>(__this + _offset);
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  _returnValue;
	_returnValue = CallbackContext_ReadValue_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_mF53E1946C30BB3E3B3216A0F7B7286B3DDBCC9E4(_thisAdjusted, method);
	return _returnValue;
}
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CallbackContext_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB90BADA81518D0AC7F01020365AB88F9F0211166_gshared (CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// var value = default(TValue);
		il2cpp_codegen_initobj((&V_0), sizeof(float));
		// if (m_State != null && phase != InputActionPhase.Canceled)
		InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * L_0 = (InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C *)__this->get_m_State_0();
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_1;
		L_1 = CallbackContext_get_phase_m1AA786B2FBD617BD9061126BF7442F08484F76E7((CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)(CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)4)))
		{
			goto IL_0032;
		}
	}
	{
		// value = m_State.ReadValue<TValue>(bindingIndex, controlIndex);
		InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * L_2 = (InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C *)__this->get_m_State_0();
		int32_t L_3;
		L_3 = CallbackContext_get_bindingIndex_mD26C42B8D97073283D42CB129F00E58AAF63C6EB((CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)(CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)__this, /*hidden argument*/NULL);
		int32_t L_4;
		L_4 = CallbackContext_get_controlIndex_m56E2618DEAD8E55474756DFDCC261CCE1A4EF776((CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)(CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)__this, /*hidden argument*/NULL);
		NullCheck((InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C *)L_2);
		float L_5;
		L_5 = ((  float (*) (InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C *, int32_t, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C *)L_2, (int32_t)L_3, (int32_t)L_4, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (float)L_5;
	}

IL_0032:
	{
		// return value;
		float L_6 = V_0;
		return (float)L_6;
	}
}
IL2CPP_EXTERN_C  float CallbackContext_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB90BADA81518D0AC7F01020365AB88F9F0211166_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B * _thisAdjusted = reinterpret_cast<CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *>(__this + _offset);
	float _returnValue;
	_returnValue = CallbackContext_ReadValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mB90BADA81518D0AC7F01020365AB88F9F0211166(_thisAdjusted, method);
	return _returnValue;
}
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m8C82319841B3BE1EE406AE1A8FE628CA4E2D250F_gshared (CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B * __this, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var value = default(TValue);
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 ));
		// if (m_State != null && phase != InputActionPhase.Canceled)
		InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * L_0 = (InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C *)__this->get_m_State_0();
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_1;
		L_1 = CallbackContext_get_phase_m1AA786B2FBD617BD9061126BF7442F08484F76E7((CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)(CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)4)))
		{
			goto IL_0032;
		}
	}
	{
		// value = m_State.ReadValue<TValue>(bindingIndex, controlIndex);
		InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * L_2 = (InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C *)__this->get_m_State_0();
		int32_t L_3;
		L_3 = CallbackContext_get_bindingIndex_mD26C42B8D97073283D42CB129F00E58AAF63C6EB((CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)(CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)__this, /*hidden argument*/NULL);
		int32_t L_4;
		L_4 = CallbackContext_get_controlIndex_m56E2618DEAD8E55474756DFDCC261CCE1A4EF776((CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)(CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)__this, /*hidden argument*/NULL);
		NullCheck((InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C *)L_2);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = ((  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  (*) (InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C *, int32_t, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C *)L_2, (int32_t)L_3, (int32_t)L_4, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_5;
	}

IL_0032:
	{
		// return value;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = V_0;
		return (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_6;
	}
}
IL2CPP_EXTERN_C  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m8C82319841B3BE1EE406AE1A8FE628CA4E2D250F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B * _thisAdjusted = reinterpret_cast<CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *>(__this + _offset);
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  _returnValue;
	_returnValue = CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m8C82319841B3BE1EE406AE1A8FE628CA4E2D250F(_thisAdjusted, method);
	return _returnValue;
}
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Vector3>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  CallbackContext_ReadValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m512A9B1FFD4204F5B090FEB009793B9866665AC0_gshared (CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var value = default(TValue);
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ));
		// if (m_State != null && phase != InputActionPhase.Canceled)
		InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * L_0 = (InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C *)__this->get_m_State_0();
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_1;
		L_1 = CallbackContext_get_phase_m1AA786B2FBD617BD9061126BF7442F08484F76E7((CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)(CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)4)))
		{
			goto IL_0032;
		}
	}
	{
		// value = m_State.ReadValue<TValue>(bindingIndex, controlIndex);
		InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * L_2 = (InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C *)__this->get_m_State_0();
		int32_t L_3;
		L_3 = CallbackContext_get_bindingIndex_mD26C42B8D97073283D42CB129F00E58AAF63C6EB((CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)(CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)__this, /*hidden argument*/NULL);
		int32_t L_4;
		L_4 = CallbackContext_get_controlIndex_m56E2618DEAD8E55474756DFDCC261CCE1A4EF776((CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)(CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)__this, /*hidden argument*/NULL);
		NullCheck((InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C *)L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = ((  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  (*) (InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C *, int32_t, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C *)L_2, (int32_t)L_3, (int32_t)L_4, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_5;
	}

IL_0032:
	{
		// return value;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = V_0;
		return (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_6;
	}
}
IL2CPP_EXTERN_C  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  CallbackContext_ReadValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m512A9B1FFD4204F5B090FEB009793B9866665AC0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B * _thisAdjusted = reinterpret_cast<CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *>(__this + _offset);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  _returnValue;
	_returnValue = CallbackContext_ReadValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m512A9B1FFD4204F5B090FEB009793B9866665AC0(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::WithExpectedControlType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970 * RebindingOperation_WithExpectedControlType_TisRuntimeObject_m04CD217329B40A5260B4520D5F17E7A9E04CC927_gshared (RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ThrowIfRebindInProgress();
		NullCheck((RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970 *)__this);
		RebindingOperation_ThrowIfRebindInProgress_m28D12CF785947DD24FACB7DAE3E7B887C03F4908((RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970 *)__this, /*hidden argument*/NULL);
		// return WithExpectedControlType(typeof(TControl));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		NullCheck((RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970 *)__this);
		RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970 * L_2;
		L_2 = RebindingOperation_WithExpectedControlType_m705AE6A47C8C1CA4F3E240985B5D1B96A8AAD012((RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970 *)__this, (Type_t *)L_1, /*hidden argument*/NULL);
		return (RebindingOperation_t5DA0F3263991E7BED360B8A1ADE014B9B451F970 *)L_2;
	}
}
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithInteraction<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1  BindingSyntax_WithInteraction_TisRuntimeObject_mF004EAD1BEFB97AAECF7B3AD3C9856304B302EDC_gshared (BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputProcessor_tAC24832406A406286CE4B162D9D2EF5E2E08765A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var interactionName = InputProcessor.s_Processors.FindNameForType(typeof(TInteraction));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  L_2;
		L_2 = TypeTable_FindNameForType_m70022A55F8ADA2D7F33B9262F7F926145B4B6E4D((TypeTable_tE58155618A277C8EB10C9B8FB3040A6731E46BFA *)(TypeTable_tE58155618A277C8EB10C9B8FB3040A6731E46BFA *)(((InputProcessor_tAC24832406A406286CE4B162D9D2EF5E2E08765A_StaticFields*)il2cpp_codegen_static_fields_for(InputProcessor_tAC24832406A406286CE4B162D9D2EF5E2E08765A_il2cpp_TypeInfo_var))->get_address_of_s_Processors_0()), (Type_t *)L_1, /*hidden argument*/NULL);
		V_0 = (InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 )L_2;
		// if (interactionName.IsEmpty())
		bool L_3;
		L_3 = InternedString_IsEmpty_mD8617A5FDADD3E05A5F6253D42EFCB8BDAD11EE8((InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 *)(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 *)(&V_0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		// throw new NotSupportedException($"Type '{typeof(TInteraction)}' has not been registered as a processor");
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_4, /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAFCE96C2E9CB5FEF65576BADEA096873577F2BF6)), (RuntimeObject *)L_5, /*hidden argument*/NULL);
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_7 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_7, (String_t*)L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BindingSyntax_WithInteraction_TisRuntimeObject_mF004EAD1BEFB97AAECF7B3AD3C9856304B302EDC_RuntimeMethod_var)));
	}

IL_0038:
	{
		// return WithInteraction(interactionName);
		InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  L_8 = V_0;
		String_t* L_9;
		L_9 = InternedString_op_Implicit_mFA680218C45365E7ED57EA5EAA6ED59F15D8DFC6((InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 )L_8, /*hidden argument*/NULL);
		BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1  L_10;
		L_10 = BindingSyntax_WithInteraction_m5B7B398C4193415876B4C31BAFDCDD9EE5107576((BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1 *)(BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1 *)__this, (String_t*)L_9, /*hidden argument*/NULL);
		return (BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1 )L_10;
	}
}
IL2CPP_EXTERN_C  BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1  BindingSyntax_WithInteraction_TisRuntimeObject_mF004EAD1BEFB97AAECF7B3AD3C9856304B302EDC_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1 * _thisAdjusted = reinterpret_cast<BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1 *>(__this + _offset);
	BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1  _returnValue;
	_returnValue = BindingSyntax_WithInteraction_TisRuntimeObject_mF004EAD1BEFB97AAECF7B3AD3C9856304B302EDC(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax UnityEngine.InputSystem.InputActionSetupExtensions/BindingSyntax::WithProcessor<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1  BindingSyntax_WithProcessor_TisRuntimeObject_mE7F31DB067FE1D0D8B6CAE2F3A869BB60B4E15ED_gshared (BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputProcessor_tAC24832406A406286CE4B162D9D2EF5E2E08765A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var processorName = InputProcessor.s_Processors.FindNameForType(typeof(TProcessor));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  L_2;
		L_2 = TypeTable_FindNameForType_m70022A55F8ADA2D7F33B9262F7F926145B4B6E4D((TypeTable_tE58155618A277C8EB10C9B8FB3040A6731E46BFA *)(TypeTable_tE58155618A277C8EB10C9B8FB3040A6731E46BFA *)(((InputProcessor_tAC24832406A406286CE4B162D9D2EF5E2E08765A_StaticFields*)il2cpp_codegen_static_fields_for(InputProcessor_tAC24832406A406286CE4B162D9D2EF5E2E08765A_il2cpp_TypeInfo_var))->get_address_of_s_Processors_0()), (Type_t *)L_1, /*hidden argument*/NULL);
		V_0 = (InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 )L_2;
		// if (processorName.IsEmpty())
		bool L_3;
		L_3 = InternedString_IsEmpty_mD8617A5FDADD3E05A5F6253D42EFCB8BDAD11EE8((InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 *)(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 *)(&V_0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		// throw new NotSupportedException($"Type '{typeof(TProcessor)}' has not been registered as a processor");
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_4, /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAFCE96C2E9CB5FEF65576BADEA096873577F2BF6)), (RuntimeObject *)L_5, /*hidden argument*/NULL);
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_7 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m40BC57BDA6E0E119B73700CC809A14B57DC65A90(L_7, (String_t*)L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BindingSyntax_WithProcessor_TisRuntimeObject_mE7F31DB067FE1D0D8B6CAE2F3A869BB60B4E15ED_RuntimeMethod_var)));
	}

IL_0038:
	{
		// return WithProcessor(processorName);
		InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  L_8 = V_0;
		String_t* L_9;
		L_9 = InternedString_op_Implicit_mFA680218C45365E7ED57EA5EAA6ED59F15D8DFC6((InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 )L_8, /*hidden argument*/NULL);
		BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1  L_10;
		L_10 = BindingSyntax_WithProcessor_m0A13729474D2C44C0646703F5543B891132D6484((BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1 *)(BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1 *)__this, (String_t*)L_9, /*hidden argument*/NULL);
		return (BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1 )L_10;
	}
}
IL2CPP_EXTERN_C  BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1  BindingSyntax_WithProcessor_TisRuntimeObject_mE7F31DB067FE1D0D8B6CAE2F3A869BB60B4E15ED_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1 * _thisAdjusted = reinterpret_cast<BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1 *>(__this + _offset);
	BindingSyntax_tEF6F07812AAB1AF06B3D36C9B1570C01997C8BF1  _returnValue;
	_returnValue = BindingSyntax_WithProcessor_TisRuntimeObject_mE7F31DB067FE1D0D8B6CAE2F3A869BB60B4E15ED(_thisAdjusted, method);
	return _returnValue;
}
// System.String UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::DeviceTypeToControlPath<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mB700493B60AC1EDE0CA6A7C5B54091F0B1343D4F_gshared (ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var layoutName = InputControlLayout.s_Layouts.TryFindLayoutForType(typeof(TDevice)).ToString();
		IL2CPP_RUNTIME_CLASS_INIT(InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  L_2;
		L_2 = Collection_TryFindLayoutForType_mA1BA2AB384A930262B5B405EBA6136861A0D6A5E((Collection_tDBA0BC36ACE448001ABFFED32EF785467D714D7B *)(Collection_tDBA0BC36ACE448001ABFFED32EF785467D714D7B *)(((InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917_StaticFields*)il2cpp_codegen_static_fields_for(InputControlLayout_t012E8BC3C93CE8A2A35BFC6A70C52530FFB55917_il2cpp_TypeInfo_var))->get_address_of_s_Layouts_15()), (Type_t *)L_1, /*hidden argument*/NULL);
		V_1 = (InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 )L_2;
		String_t* L_3;
		L_3 = InternedString_ToString_m2FF8E64B30FADEBCC623E0EFF944C3EDA244F6D7((InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 *)(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 *)(&V_1), /*hidden argument*/NULL);
		V_0 = (String_t*)L_3;
		// if (string.IsNullOrEmpty(layoutName))
		String_t* L_4 = V_0;
		bool L_5;
		L_5 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C((String_t*)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		// layoutName = typeof(TDevice).Name;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7;
		L_7 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_6, /*hidden argument*/NULL);
		NullCheck((MemberInfo_t *)L_7);
		String_t* L_8;
		L_8 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_7);
		V_0 = (String_t*)L_8;
	}

IL_003b:
	{
		// return $"<{layoutName}>";
		String_t* L_9 = V_0;
		String_t* L_10;
		L_10 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44((String_t*)_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11, (String_t*)L_9, (String_t*)_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5, /*hidden argument*/NULL);
		return (String_t*)L_10;
	}
}
IL2CPP_EXTERN_C  String_t* ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mB700493B60AC1EDE0CA6A7C5B54091F0B1343D4F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 * _thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mB700493B60AC1EDE0CA6A7C5B54091F0B1343D4F(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::OrWithOptionalDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mA966529367FEAF671DF7725154538CB7312C1D2F_gshared (ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 * __this, const RuntimeMethod* method)
{
	{
		// return WithOptionalDevice(DeviceTypeToControlPath<TDevice>());
		String_t* L_0;
		L_0 = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mB700493B60AC1EDE0CA6A7C5B54091F0B1343D4F((ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 *)(ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  L_1;
		L_1 = ControlSchemeSyntax_WithOptionalDevice_m1EEB8035CC62D2A78AC932A7CA0440AF94126C39((ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 *)(ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 *)__this, (String_t*)L_0, /*hidden argument*/NULL);
		return (ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 )L_1;
	}
}
IL2CPP_EXTERN_C  ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mA966529367FEAF671DF7725154538CB7312C1D2F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 * _thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 *>(__this + _offset);
	ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  _returnValue;
	_returnValue = ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mA966529367FEAF671DF7725154538CB7312C1D2F(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::OrWithRequiredDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m0F28425B0D706D1C1C43B7A30024ACBFC00A3518_gshared (ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 * __this, const RuntimeMethod* method)
{
	{
		// return WithRequiredDevice(DeviceTypeToControlPath<TDevice>());
		String_t* L_0;
		L_0 = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mB700493B60AC1EDE0CA6A7C5B54091F0B1343D4F((ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 *)(ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  L_1;
		L_1 = ControlSchemeSyntax_WithRequiredDevice_m7D612CC028141089F3AB419967A9A7F1D9FC3353((ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 *)(ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 *)__this, (String_t*)L_0, /*hidden argument*/NULL);
		return (ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 )L_1;
	}
}
IL2CPP_EXTERN_C  ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m0F28425B0D706D1C1C43B7A30024ACBFC00A3518_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 * _thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 *>(__this + _offset);
	ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  _returnValue;
	_returnValue = ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m0F28425B0D706D1C1C43B7A30024ACBFC00A3518(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithOptionalDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_mEEDD90A8BFEDAC21FF0B67F8F3BC50208F09D015_gshared (ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 * __this, const RuntimeMethod* method)
{
	{
		// return WithOptionalDevice(DeviceTypeToControlPath<TDevice>());
		String_t* L_0;
		L_0 = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mB700493B60AC1EDE0CA6A7C5B54091F0B1343D4F((ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 *)(ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  L_1;
		L_1 = ControlSchemeSyntax_WithOptionalDevice_m1EEB8035CC62D2A78AC932A7CA0440AF94126C39((ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 *)(ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 *)__this, (String_t*)L_0, /*hidden argument*/NULL);
		return (ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 )L_1;
	}
}
IL2CPP_EXTERN_C  ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_mEEDD90A8BFEDAC21FF0B67F8F3BC50208F09D015_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 * _thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 *>(__this + _offset);
	ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  _returnValue;
	_returnValue = ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_mEEDD90A8BFEDAC21FF0B67F8F3BC50208F09D015(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithRequiredDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mC0CB0D601DCB446ACF2E02BAE15CDAAD58DAED10_gshared (ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 * __this, const RuntimeMethod* method)
{
	{
		// return WithRequiredDevice(DeviceTypeToControlPath<TDevice>());
		String_t* L_0;
		L_0 = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mB700493B60AC1EDE0CA6A7C5B54091F0B1343D4F((ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 *)(ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  L_1;
		L_1 = ControlSchemeSyntax_WithRequiredDevice_m7D612CC028141089F3AB419967A9A7F1D9FC3353((ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 *)(ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 *)__this, (String_t*)L_0, /*hidden argument*/NULL);
		return (ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 )L_1;
	}
}
IL2CPP_EXTERN_C  ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mC0CB0D601DCB446ACF2E02BAE15CDAAD58DAED10_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 * _thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214 *>(__this + _offset);
	ControlSchemeSyntax_t8268F41B7394AFA87007DA20E920E39A975DA214  _returnValue;
	_returnValue = ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mC0CB0D601DCB446ACF2E02BAE15CDAAD58DAED10(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.Layouts.InputControlLayout/Builder UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::WithType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t4C196179CE57554255EBFB4ECD4D6499ADA974FB * Builder_WithType_TisRuntimeObject_m83FE280551024B58C685344F4FDB38F91DA78443_gshared (Builder_t4C196179CE57554255EBFB4ECD4D6499ADA974FB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// type = typeof(T);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		NullCheck((Builder_t4C196179CE57554255EBFB4ECD4D6499ADA974FB *)__this);
		Builder_set_type_m31E443E368751EC60EBA1A39D670313269E50B74_inline((Builder_t4C196179CE57554255EBFB4ECD4D6499ADA974FB *)__this, (Type_t *)L_1, /*hidden argument*/NULL);
		// return this;
		return (Builder_t4C196179CE57554255EBFB4ECD4D6499ADA974FB *)__this;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider::CreateOrResizeNativeArrayIfNecessary<UnityEngine.Vector2>(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_CreateOrResizeNativeArrayIfNecessary_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m2DB299A15665775F0B5BDFF92CF4FA10166B614A_gshared (int32_t ___length0, int32_t ___allocator1, NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * ___array2, const RuntimeMethod* method)
{
	{
		// if (array.IsCreated)
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_0 = ___array2;
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_mF82CF064C6050394DEAC11047A6308998101A4AE((NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// if (array.Length != length)
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_2 = ___array2;
		int32_t L_3;
		L_3 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_2)->___m_Length_1);
		int32_t L_4 = ___length0;
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0034;
		}
	}
	{
		// array.Dispose();
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_5 = ___array2;
		NativeArray_1_Dispose_mE737DADB8C5E4B02C2FB6CB36E86AC6371D806BF((NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		// array = new NativeArray<T>(length, allocator);
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_6 = ___array2;
		int32_t L_7 = ___length0;
		int32_t L_8 = ___allocator1;
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  L_9;
		memset((&L_9), 0, sizeof(L_9));
		NativeArray_1__ctor_m53A2E0E5DDF506B8508EAC444CAF3DB70F874729((&L_9), (int32_t)L_7, (int32_t)L_8, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		*(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_6 = L_9;
		// }
		return;
	}

IL_0026:
	{
		// array = new NativeArray<T>(length, allocator);
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_10 = ___array2;
		int32_t L_11 = ___length0;
		int32_t L_12 = ___allocator1;
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  L_13;
		memset((&L_13), 0, sizeof(L_13));
		NativeArray_1__ctor_m53A2E0E5DDF506B8508EAC444CAF3DB70F874729((&L_13), (int32_t)L_11, (int32_t)L_12, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		*(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_10 = L_13;
	}

IL_0034:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * XRManagerSettings_get_activeLoader_mB1950E58B1DD1774EB2798CEBA6D3C371CE8F1D8_inline (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method)
{
	{
		// public XRLoader activeLoader { get; private set; }
		XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * L_0 = __this->get_U3CactiveLoaderU3Ek__BackingField_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_type_m31E443E368751EC60EBA1A39D670313269E50B74_inline (Builder_t4C196179CE57554255EBFB4ECD4D6499ADA974FB * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// public Type type { get; set; }
		Type_t * L_0 = ___value0;
		__this->set_U3CtypeU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
