#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
		method->invoker_method(methodPtr, method, obj, params, NULL);
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
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<System.Object,System.Object,System.Object,UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>
struct ARTrackableManager_5_tCF3716950AB6E762DC60917DB4A4A6214010074D;
// UnityEngine.XR.ARFoundation.ARTrackableManager`5<System.Object,System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRFace,System.Object>
struct ARTrackableManager_5_t909CD904167EAD233803A6A9DB279E94219E1A0C;
// UnityEngine.XR.ARFoundation.ARTrackableManager`5<System.Object,System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRHumanBody,System.Object>
struct ARTrackableManager_5_tAFB0AD849260B6C33E8F815788CCACE8E5D66AD8;
// UnityEngine.XR.ARFoundation.ARTrackableManager`5<System.Object,System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>
struct ARTrackableManager_5_t2A93ECAB1D6B15321FBA6CB85604DC3895F98E92;
// UnityEngine.XR.ARFoundation.ARTrackableManager`5<System.Object,System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>
struct ARTrackableManager_5_t781ED5020888538CF6FC3405034BBF27F05FA2C2;
// UnityEngine.XR.ARFoundation.ARTrackableManager`5<System.Object,System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRTrackedObject,System.Object>
struct ARTrackableManager_5_tED5068383CE6A1188850AE038754D6CF77999A53;
// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRDepthSubsystem,UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRDepthSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRPointCloud,UnityEngine.XR.ARFoundation.ARPointCloud>
struct ARTrackableManager_5_t9382BDA66FCF0DFF37645936368C21E5C47EB352;
// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRFaceSubsystem,UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRFaceSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRFace,UnityEngine.XR.ARFoundation.ARFace>
struct ARTrackableManager_5_t2D42FCFDD2D69C41D2C2951F731A4F489A8605A4;
// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem,UnityEngine.XR.ARSubsystems.XRHumanBodySubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem/Provider,UnityEngine.XR.ARSubsystems.XRHumanBody,UnityEngine.XR.ARFoundation.ARHumanBody>
struct ARTrackableManager_5_t66B444EEF0E5B63A8B668B882FED811E693A0EC7;
// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRTrackedImage,UnityEngine.XR.ARFoundation.ARTrackedImage>
struct ARTrackableManager_5_t1395957883D0FA3B96AA1B31F7D9D15573DA46F5;
// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRTrackedObject,UnityEngine.XR.ARFoundation.ARTrackedObject>
struct ARTrackableManager_5_t956DB46580AD764FF0CA6A96A175FDDEC57D74A5;
// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider,UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARFoundation.ARPlane>
struct ARTrackableManager_5_t1F9F85442D84B92DE0BC4C518768C0154AB69103;
// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,UnityEngine.XR.ARFoundation.ARTrackedImage>
struct ARTrackable_2_tB125D99BD46AD90D0AF463ECF67D57A69801B14A;
// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>
struct ARTrackable_2_t3FCE71296784BB45D99340B5EAD5E6F7740DFA47;
// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Object>>
struct Action_1_t0A01E63A4339ABF30BF7C175CF376F7CE2BAC1A8;
// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.Localization.Tables.StringTable>>
struct Action_1_t647506099BF0E618A47E824F311932EBCB1B5994;
// System.Action`1<UnityEngine.XR.ARFoundation.ARFacesChangedEventArgs>
struct Action_1_t0A16CC637B74FE43A20D2784BCA3172E7D13789C;
// System.Action`1<UnityEngine.XR.ARFoundation.ARHumanBodiesChangedEventArgs>
struct Action_1_t78DC7DD8CB74A1B21E4419996B784C6E51821247;
// System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>
struct Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074;
// System.Action`1<UnityEngine.XR.ARFoundation.ARPlanesChangedEventArgs>
struct Action_1_t009680BF19017ECA60753C7F605CBD85C56C6560;
// System.Action`1<UnityEngine.XR.ARFoundation.ARPointCloudChangedEventArgs>
struct Action_1_t053CCF2809F9B0B61EA8298154533C5FACB724F0;
// System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs>
struct Action_1_t325C602D999E964DB72210E493635E83F8D6CE68;
// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs>
struct Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB;
// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>
struct Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F;
// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedObjectsChangedEventArgs>
struct Action_1_t34AAB95B35DF66496184F8421A8AC5F317B7D8AB;
// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle>
struct Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF;
// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<UnityEngine.Localization.Settings.LocalizationSettings>
struct AsyncOperationBase_1_tB882B04817F69BD874341E5A35527CE97B20BDB6;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<System.Object>
struct AsyncOperationBase_1_t777EC3ACED7579A0B8EFE3EEE605D824516B3C13;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<UnityEngine.Localization.Tables.StringTable>
struct AsyncOperationBase_1_tFF1A8E4B11E398C71300A03CE60BF6755C857D70;
// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct Comparison_1_t0E0A9C99A8D29FBC5FA5ED9B9B2175A13C6578C0;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// UnityEngine.Localization.Tables.DetailedLocalizationTable`1<System.Object>
struct DetailedLocalizationTable_1_tCC6C4C5BE6B1D44E1A283D50CA8E76F96E674A9C;
// UnityEngine.Localization.Tables.DetailedLocalizationTable`1<UnityEngine.Localization.Tables.StringTableEntry>
struct DetailedLocalizationTable_1_t7452A24D1BB260F6AA42A101F4967D4910B3A6D9;
// System.Collections.Generic.Dictionary`2<System.ValueTuple`2<UnityEngine.Localization.LocaleIdentifier,System.String>,UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.Localization.Tables.StringTable>>
struct Dictionary_2_tF94BD601DE43C446456A931B753B8A155754D16D;
// System.Collections.Generic.Dictionary`2<System.Guid,UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.Localization.Tables.SharedTableData>>
struct Dictionary_2_t25206733F6347B0891CD546B44211E9F2D368D7B;
// System.Collections.Generic.Dictionary`2<System.Guid,System.String>
struct Dictionary_2_t1237B68284D10128976C2AEC3CB7849642DCBF0C;
// System.Collections.Generic.Dictionary`2<System.Guid,UnityEngine.XR.ARSubsystems.XRReferenceImage>
struct Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49;
// System.Collections.Generic.Dictionary`2<System.Guid,UnityEngine.XR.ARSubsystems.XRReferenceObject>
struct Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Int64,UnityEngine.Localization.Tables.StringTableEntry>
struct Dictionary_2_t1388C9171D04049C910DDDAA907276DA7F0ADCE2;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE;
// System.Collections.Generic.Dictionary`2<System.String,System.Guid>
struct Dictionary_2_tA80F509096B4D8D9900583577EAA0036147FD60E;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARFace>
struct Dictionary_2_t24DD0A560FD522E53E9814CD1A0AD91C3AD5FCCC;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARHumanBody>
struct Dictionary_2_t26E20BE1EB8A93CA83F951C6E2C3E93D20E1EA30;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARPlane>
struct Dictionary_2_t26A4820BA6F451105138232941B7A9466E583A6C;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARPointCloud>
struct Dictionary_2_t9647896A9433E05337C4FDD2755A5C5C81C52F6C;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARRaycast>
struct Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARTrackedImage>
struct Dictionary_2_t13B80190D7DD5A74B43A63EC63B97E079A0B2FC2;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARTrackedObject>
struct Dictionary_2_t7DA79BD2AB092CBEF953D24BF7B5C6154A0F04D2;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>
struct Dictionary_2_t96E118783FA125640B6CD73897A2FE2B787E0AB4;
// System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.Glyph>
struct Dictionary_2_tC61348D10610A6B3D7B65102D82AC3467D59EAA7;
// System.Collections.Generic.Dictionary`2<System.UInt32,TMPro.TMP_Character>
struct Dictionary_2_tCB5FEF8D6CEA1557D9B9BA25946AD6BF3E6C14D0;
// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_t917A5E0B468B7C0436CA84D065BEB6FC43C9B906;
// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_t0755A61145E99905AC47DF85416091FB30758B8A;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2;
// System.Collections.Generic.HashSet`1<System.UInt32>
struct HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.GameObject>
struct KeyCollection_tB57CC90FD7461471159C351E10C1C4C745284454;
// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct List_1_t554F70DABEBFEED67B5400AB73777A6D987F0D36;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARFace>
struct List_1_tA11EBED64210DD13BB4303415D948E6CD964AAF9;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARHumanBody>
struct List_1_t64B1B4ABB789350AE017F3EAF4D3647AF59244C7;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARPlane>
struct List_1_t10BA05B555C92BD54800DFF82DCAAFC9DE44A077;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARPointCloud>
struct List_1_tB9CD639EB4FE5EA0A8B417168BB9BD2D29AEE271;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycast>
struct List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>
struct List_1_tFA730335FF46512E4245B2F46892CA318B394FAE;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedObject>
struct List_1_tF1201F2F725A8AE529D436F38A4771FB6790F3C6;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<UnityEngine.TextCore.Glyph>
struct List_1_t95DB74B8EE315F8F92B7B96D93C901C8C3F6FE2C;
// System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect>
struct List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster>
struct List_1_t50405350B03FC84D28784364F500CB08B82435B5;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<UnityEngine.Localization.Locale>
struct List_1_tBD0AC994E5F9C7F539E0378F0CBB119065136548;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<TMPro.TMP_Character>
struct List_1_tCE1ACAA0C2736A7797B2C134895298CAB10BEB5E;
// System.Collections.Generic.List`1<TMPro.TMP_FontAsset>
struct List_1_t06C3ABB0C6F2347B32881E33D154431EADAE3ECF;
// System.Collections.Generic.List`1<TMPro.TMP_Glyph>
struct List_1_tAB7976FADCF872E418770E60783056C23394843D;
// System.Collections.Generic.List`1<UnityEngine.Localization.Tables.TableEntryData>
struct List_1_tD91CF3CA44AF959D498943CF326E2E8EDFB81C49;
// System.Collections.Generic.List`1<System.UInt32>
struct List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRDepthSubsystem>
struct List_1_t9571C1546EE44CC37CE2FDEB3E36C298B943B164;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor>
struct List_1_tF88289A219854A2C4D0D098CCAD2A4CAD4DA0A5C;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRFaceSubsystem>
struct List_1_t0C2BEA4603C8A892F136360A713FE07EBC51A010;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor>
struct List_1_t5E8878D20C1B753B569DF68C6CCE3159D9AB04A6;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem>
struct List_1_t647C6DA33EBE425BA395C4BBB09B4494DD875198;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRHumanBodySubsystemDescriptor>
struct List_1_t5EDD6B438D214F2BE1FEC4BEBC8341CA330D7512;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem>
struct List_1_t447913E715E9E298A8BBACADFBAA1CB629A73DD1;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor>
struct List_1_tFAD70D497835B4EB99F6C04DFD87EA9406E796ED;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem>
struct List_1_tF236FF325A33D8570EBBBEC67532DE39F1E3F98A;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor>
struct List_1_tCD3E505D75F3A61FA85FC4FBBAE146ACC1A844AA;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem>
struct List_1_t6630EC2D13FD2DC6D86447667371501266C9B3E8;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor>
struct List_1_tD705D57B270C006E488F9C9B55BA0768A11125D0;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem>
struct List_1_tD793A24512B84D46F925E4CE4DBD30955A42C94C;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor>
struct List_1_t97C3D1A8E80E095D7CE223BC4D02400F78DA063F;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct List_1_t3903923EFB501C3A0672A0E60558673B85435D8E;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>
struct List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34;
// System.Collections.Generic.List`1<TMPro.TMP_Dropdown/DropdownItem>
struct List_1_tA7EEECF976A6B4957450A4D235070C9324ED1A97;
// System.Collections.Generic.List`1<TMPro.TMP_Dropdown/OptionData>
struct List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52;
// System.Collections.Generic.Queue`1<UXHandle>
struct Queue_1_tBB833A4AC695DF02307E93FAAED0C78E3BD64A1D;
// TMPro.TweenRunner`1<TMPro.FloatTween>
struct TweenRunner_1_tF277B20625C8B1939DC85508C4679C690757395E;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GameObject>
struct ValueCollection_tAA4B91D1FC6E3150E12FB777D5C1A8530004C5D1;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.GameObject>[]
struct EntryU5BU5D_tBC8769FFC7ECC10C2740A220C39736B63B151E29;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// UnityEngine.XR.ARFoundation.ARRaycastHit[]
struct ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E;
// UnityEngine.XR.ARFoundation.ARTrackedImage[]
struct ARTrackedImageU5BU5D_tD227987C766F9B880B8EF0E9ADF5918CDFB72367;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Destination[]
struct DestinationU5BU5D_t329EC9350AEAB9CAAA3F6A174EB2081F19C72D31;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Localization.Locale[]
struct LocaleU5BU5D_tA72D83EF0A860CBFEFDD5F8CE268C3E7B09C1A12;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_FontWeightPair[]
struct TMP_FontWeightPairU5BU5D_t0A3A5955F13FEB2F7329D81BA157110DB99F9F37;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UXHandle[]
struct UXHandleU5BU5D_tC2FEDC21A6AE89F7808C803D66325F1EF65A2B9C;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Dropdown/OptionData[]
struct OptionDataU5BU5D_tEB78063B7582A72D41E99569EB93D519AC75F615;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// ARCursor
struct ARCursor_t8AAA875642042CDB3704727B8397F2676759BF0C;
// UnityEngine.XR.ARFoundation.ARFaceManager
struct ARFaceManager_tE5955187C9D7C9C4C4139F522DA0DEA69EFCFD8F;
// ARFeatheredPlaneMeshVisualizer
struct ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955;
// UnityEngine.XR.ARFoundation.ARHumanBodyManager
struct ARHumanBodyManager_tA5246205B817A3D4A87BFC54FC018FB513867BFB;
// ARKitCoachingOverlay
struct ARKitCoachingOverlay_t36497D45FFD0ECB9ADA3238540945D2305076A62;
// ARPlacement
struct ARPlacement_tA1308C1A97DE34EB044FD63BB22F99D72F2A60E7;
// UnityEngine.XR.ARFoundation.ARPlane
struct ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0;
// UnityEngine.XR.ARFoundation.ARPlaneManager
struct ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928;
// UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer
struct ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F;
// UnityEngine.XR.ARFoundation.ARPointCloudManager
struct ARPointCloudManager_t28D1833BCE1A48657E504109A89A3B75D0AD7D9F;
// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3;
// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0;
// UnityEngine.XR.ARFoundation.ARTrackedImage
struct ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2;
// UnityEngine.XR.ARFoundation.ARTrackedImageManager
struct ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4;
// UnityEngine.XR.ARFoundation.ARTrackedObjectManager
struct ARTrackedObjectManager_tD667E7CCD95E9D25449BD578F256F728D8619FC7;
// ARUXAnimationManager
struct ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966;
// ARUXReasonsManager
struct ARUXReasonsManager_t7DE4754765B780C9987FC05832DE0F5447F2E7EE;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// Board
struct Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A;
// Building
struct Building_t950D5394E080624D7E96B158EF852EA16ADB3650;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A;
// Cinemachine.CinemachineImpulseDefinition
struct CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705;
// Cinemachine.CinemachineImpulseSource
struct CinemachineImpulseSource_t48D0DCECD3CD8432BF4442EB45399BBD383A1B83;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// DemoPlayerLogic
struct DemoPlayerLogic_t41B19E2787D0BDDE54FA3FB7162E4254068A2549;
// Destination
struct Destination_t336101C9D43A1813C8DD5375BBEE228C8B09873F;
// DetectDistance
struct DetectDistance_t9FAB2A22AF4A39E12CA18E1C6A38640C5464AC50;
// DisableTrackedVisuals
struct DisableTrackedVisuals_t52589209FFC6682E859627672C2A5E7C3D8E963A;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// TMPro.FaceInfo_Legacy
struct FaceInfo_Legacy_t23B118EFD5AB7162515ABF18C0212DF155CCF7B8;
// Floor
struct Floor_t8880897F1802E67C7738331BDEFCBDBC6FA8B04C;
// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.Localization.SmartFormat.Core.Formatting.FormatCache
struct FormatCache_tCEC272C82C2AED273DEE6F00BA89C327269F934D;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation
struct IAsyncOperation_tAA751C850291C1C50151BE8313DE52B2A894023C;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// UnityEngine.Localization.Settings.ILocalesProvider
struct ILocalesProvider_t61A5B94D50A769527BFEF945350EA16D17BAFBB0;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// ImageTracking
struct ImageTracking_t1AC7FA07584DA88ECCD67B79C21A12B615A4DAAC;
// InformationManager
struct InformationManager_tAF28A07274ECBF7093F42C4DFBF9925B8C5AACC8;
// ItemData
struct ItemData_t7FB0F9911AFA201D097B2B0D2353002ECE882538;
// ItemObject
struct ItemObject_t755B394AFC69522A556F5EBA9AD67B1D4E2D90C0;
// JsonHander
struct JsonHander_tF07AB89128AEFD1B804324FDC3B8C1D92907870D;
// JsonReader
struct JsonReader_t1271C2DA1700C99E7C67FB6BD5FEE6030BAB5FC4;
// TMPro.KerningTable
struct KerningTable_t040C3FE3B519B12AADE1C5B00628581551D5AB6B;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D;
// UnityEngine.Localization.Locale
struct Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9;
// LocalizationManager
struct LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA;
// UnityEngine.Localization.Tables.LocalizationTable
struct LocalizationTable_tFE5F77A2528CA506A718E692737CB6F2A1BA9E84;
// UnityEngine.Localization.Settings.LocalizedStringDatabase
struct LocalizedStringDatabase_tACE9FD9021269D20788D130D96F7B2244DD67406;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// UnityEngine.Localization.Metadata.MetadataCollection
struct MetadataCollection_t79AF57BE506FF84FEF50E610C73ED4CA6D015CE0;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// ModularBillBoard
struct ModularBillBoard_t5C2BFA11672ED08924996A3126DF7684C94B7DE5;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.AI.NavMeshPath
struct NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// ObjectPlacement
struct ObjectPlacement_t5A26C0CE7778C6C3F0DD9BC07EA4A6D4BC11D057;
// Orientation
struct Orientation_t002F5D617F6ACAEA24D962B1D599B05CD988C373;
// PlaceObjectsOnPlane
struct PlaceObjectsOnPlane_t8CCA4A0919CFB134BDC1CFFED9EC2F23DCEB1933;
// UnityEngine.UI.RawImage
struct RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// SetNavigation
struct SetNavigation_t3B30AAEB2ECE7AAD37EE8197ACB96E7772680782;
// UnityEngine.Localization.Tables.SharedTableData
struct SharedTableData_t49C6D9963F9F443E275A7258BB8BD54876F295F5;
// UnityEngine.Localization.SmartFormat.SmartFormatter
struct SmartFormatter_tF96E08EAA9077966A9C2A10ABA44ED9BF37E58B1;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.Localization.Tables.StringTable
struct StringTable_tDCAFD2558506AB46374D3CB6479C9F5B5F6591E1;
// UnityEngine.Localization.Tables.StringTableEntry
struct StringTableEntry_tEB17D923B5599B343F7E00DA6C4333AE8F38723C;
// SyncPose
struct SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_Dropdown
struct TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_FontFeatureTable
struct TMP_FontFeatureTable_t726A09E64FDF682A8FFE294BB6CFE7747F6C40EA;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// UnityEngine.Localization.Tables.TableEntryData
struct TableEntryData_t204A2480346BCEF79D01B3D7E8D534AA2B822FD1;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UIManager
struct UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// UnityEngine.Video.VideoClip
struct VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE;
// UnityEngine.Video.VideoPlayer
struct VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.ARSubsystems.XRDepthSubsystem
struct XRDepthSubsystem_t61DE8363378DC9991027C95E31303A3F1BC32E48;
// UnityEngine.XR.ARSubsystems.XRFaceSubsystem
struct XRFaceSubsystem_t93DD9DDD21C06E5A591BB0094512BC8FD8A890D3;
// UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem
struct XRHumanBodySubsystem_tF7BE6EF91D4B632389B2F818E516F94213281526;
// UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem
struct XRImageTrackingSubsystem_t5EEEA714F4273F686F836517EE4957AEDFFD7BEB;
// UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem
struct XRObjectTrackingSubsystem_t0094478B41F73E26F73943C09ECD134874B68ED5;
// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem
struct XRPlaneSubsystem_t6FC18D5B1FF10EE9B4A751977B526F44A16EDB62;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem
struct XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7;
// UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary
struct XRReferenceImageLibrary_t039233790C16E76ED95AABD95D9A35014081EA42;
// UnityEngine.XR.ARSubsystems.XRReferenceObjectLibrary
struct XRReferenceObjectLibrary_t035F7FE264C24BC98A58CA2F24D047BB99BC8487;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// InformationManager/OnItemAdded
struct OnItemAdded_t2402AA9BA550CBE1A1C889D8AB22EAF722C7CB47;
// LocalizationManager/<Start>d__55
struct U3CStartU3Ed__55_tDA4619B76EF3AD96E8F2A1702B0A7AE8D9718513;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Orientation/ImageChanged
struct ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// UnityEngine.Localization.Tables.SharedTableData/SharedTableEntry
struct SharedTableEntry_tDFA6DAF3FA745D2D5B3CCD6BA8C879354B795BA7;
// TMPro.TMP_Dropdown/DropdownEvent
struct DropdownEvent_tFD4609E80240BC887A6D31F9F3C252A8A6843E91;
// TMPro.TMP_Dropdown/OptionData
struct OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E;
// TMPro.TMP_Dropdown/OptionDataList
struct OptionDataList_tF66EA4801BFA499F010E6EFF89ED760BF4F0BEE1;
// UIManager/<>c
struct U3CU3Ec_tE0F140AB3A3D2C049850DEC15500CB19953B3761;
// UnityEngine.Video.VideoPlayer/ErrorEventHandler
struct ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462;
// UnityEngine.Video.VideoPlayer/EventHandler
struct EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411;
// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler
struct FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8;
// UnityEngine.Video.VideoPlayer/TimeEventHandler
struct TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E;

IL2CPP_EXTERN_C RuntimeClass* ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t325C602D999E964DB72210E493635E83F8D6CE68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t647506099BF0E618A47E824F311932EBCB1B5994_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncOperationHandle_1_t942B32DFBF2792F48E49169E2A65A5E46162395C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Building_t950D5394E080624D7E96B158EF852EA16ADB3650_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DetectDistance_t9FAB2A22AF4A39E12CA18E1C6A38640C5464AC50_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILocalesProvider_t61A5B94D50A769527BFEF945350EA16D17BAFBB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InfoType_tA6A0FA94B862D105858AD537B942E67C0068B205_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InformationManager_tAF28A07274ECBF7093F42C4DFBF9925B8C5AACC8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnItemAdded_t2402AA9BA550CBE1A1C889D8AB22EAF722C7CB47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Orientation_t002F5D617F6ACAEA24D962B1D599B05CD988C373_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlaceObjectsOnPlane_t8CCA4A0919CFB134BDC1CFFED9EC2F23DCEB1933_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tBB833A4AC695DF02307E93FAAED0C78E3BD64A1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TableReference_t96A5F0161FDA37E187436FC17A3B6D7AB676A147_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackingState_t5487241B6888BB15D8448EBBC640835A011DBBC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartU3Ed__55_tDA4619B76EF3AD96E8F2A1702B0A7AE8D9718513_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tE0F140AB3A3D2C049850DEC15500CB19953B3761_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral053E4DD968FAF51ADBE4B872464B1097BE4EE164;
IL2CPP_EXTERN_C String_t* _stringLiteral06048574684685FB24628AE570BB15BA2D62FD8B;
IL2CPP_EXTERN_C String_t* _stringLiteral0868B6EEB5C07A22C7809AD8FE88FD279C564AAE;
IL2CPP_EXTERN_C String_t* _stringLiteral131018280018B48DB9FF86A96C7535E6FA339C24;
IL2CPP_EXTERN_C String_t* _stringLiteral167829821AF361E5A33D479888579DC26EAFE4EC;
IL2CPP_EXTERN_C String_t* _stringLiteral16CDB511D09802498D436CB3132D02AF04FA9184;
IL2CPP_EXTERN_C String_t* _stringLiteral1FC98656B2789037B2682120B8E7CC32487D487C;
IL2CPP_EXTERN_C String_t* _stringLiteral207145E3DEE9F7CF5FE328A1AD2BB4C895272A3F;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral28DD212AA407A7128B35B2B453F30CBE0AFC97C1;
IL2CPP_EXTERN_C String_t* _stringLiteral297E73D24970417514FEA0205BE7C709E8EDD3E6;
IL2CPP_EXTERN_C String_t* _stringLiteral314ABC39F91F3CBA77A054ABAB1CFDB2FB46DA49;
IL2CPP_EXTERN_C String_t* _stringLiteral31DFEC3AAF8399F4A57C15C0E0BA057632928757;
IL2CPP_EXTERN_C String_t* _stringLiteral3831A01F6FD64D34E80AC7FCB3F4A00F1632C13A;
IL2CPP_EXTERN_C String_t* _stringLiteral3864F889F73C2EC7E66324ADB4DD8430201EB358;
IL2CPP_EXTERN_C String_t* _stringLiteral3A2067EF4A0B8314242B9B69B47FC3FC7C16AADE;
IL2CPP_EXTERN_C String_t* _stringLiteral40B158F640CBA2E2AB3602F309E0A68328A0F0E6;
IL2CPP_EXTERN_C String_t* _stringLiteral46A89B070AD49E79E5B5154D70BE82D0B21DFB18;
IL2CPP_EXTERN_C String_t* _stringLiteral5020B70F700523C1BDBCC05D65D6CCAD7E93034F;
IL2CPP_EXTERN_C String_t* _stringLiteral522D69D7511DEF4E9056A5CD08321CDF1F223645;
IL2CPP_EXTERN_C String_t* _stringLiteral5DF6C8C28E677594CC027AAA63ECF6572E4A2B0C;
IL2CPP_EXTERN_C String_t* _stringLiteral641EF5511F3E345E85EE823A85C31FD112C032D7;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral842B9D0D0439077EB405F99EAA6151E70A87AA88;
IL2CPP_EXTERN_C String_t* _stringLiteral8A445CF9031C5EB08E9F1F3A129AFAC4742E5741;
IL2CPP_EXTERN_C String_t* _stringLiteral8D7ADDD4ED9BDE655390C5E91A22E0740323A108;
IL2CPP_EXTERN_C String_t* _stringLiteral8FB8A7A301D90F7E275845734A684262F7C34948;
IL2CPP_EXTERN_C String_t* _stringLiteral90F78828DE86E0F2C865B501DDD5EDB7C693AA9E;
IL2CPP_EXTERN_C String_t* _stringLiteral9561D7D49F858DA1C28EBE8E9DC1FBBC0F1A9967;
IL2CPP_EXTERN_C String_t* _stringLiteral96B551056328BC3E6CCD4561BA9294766F2DCB25;
IL2CPP_EXTERN_C String_t* _stringLiteralB085872D5D9FF8D1C10C0723C4ACAA1215446ADC;
IL2CPP_EXTERN_C String_t* _stringLiteralC2B4BD1826B71D1E13C8A0571DDBBB249AE415D3;
IL2CPP_EXTERN_C String_t* _stringLiteralCBBABAACA97A11A1C06EAE2B85EC0909B12FF439;
IL2CPP_EXTERN_C String_t* _stringLiteralD24C15C9650F88A0DB8FB78FB698613BCA295C61;
IL2CPP_EXTERN_C String_t* _stringLiteralD4FF15F0C367172440AA7A961D856E09E93C8108;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDECF7DA3857B85AB60DE713DFBD9FA17A1F89586;
IL2CPP_EXTERN_C String_t* _stringLiteralDF26C296172EB4CDA885AC7FCCE21754CB55B9E7;
IL2CPP_EXTERN_C String_t* _stringLiteralE1AC99A0886CFC97047B2F4D6BBDE551C1BC8F44;
IL2CPP_EXTERN_C String_t* _stringLiteralE505C9DA36C255C4B5E99336F74ECA8B1B465677;
IL2CPP_EXTERN_C String_t* _stringLiteralE75BEA9B5CC469128FC66D90EAA3937E05217B3F;
IL2CPP_EXTERN_C String_t* _stringLiteralEFFC96C6589746DC30E1FF0192E17B6DC7305E74;
IL2CPP_EXTERN_C const RuntimeMethod* ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_mB3D9BBD14EA1FE3ECDBACC2DB89C1B110B8B6B5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARKitCoachingOverlay_ActivateCoaching_m37C38E140603D61E3AD3B66BFCDEF08CADB6FA29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARKitCoachingOverlay_DisableCoaching_m1F3FF03DF675DF154E4662927078A7F4497FA5EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARTrackableManager_5_SetTrackablesActive_m99BB57C262918F8CF69D96238A992FF84E23E14F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARTrackableManager_5_SetTrackablesActive_mA9156D2D519E56D0AC7D9936DC844885876860D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARTrackableManager_5_get_trackables_m05EA665E785FD12BBFEB6DF9C2208B4222217CF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARTrackableManager_5_get_trackables_m32440CFD7C68D75BB3FB2ED84A6DEE060390FBD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARTrackableManager_5_get_trackables_m37D9FF777E3321940E7AF3D0EA8204124475649C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARTrackableManager_5_get_trackables_m550D26D672377AA9685A9EFEE2D959525E51800B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARTrackableManager_5_get_trackables_mCFD12DF808EC0CE5E99FED3EDF5BFEAB24155F6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARTrackable_2_get_trackingState_m7A60B7D905DBE9E2541B4087F0E6D56C8E4849CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARUXReasonsManager_ARSessionOnstateChanged_m68CF984A6D30DBBD5C031D248504EC2F9DDE4748_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationHandle_1_add_Completed_m46D0F374C09483CA0A67CA39BF255BADD676B6EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationHandle_1_get_Result_m087C948BD99A2DCBD9C529FF2FCDE8985A9CF1A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationHandle_1_get_Status_mFCA04DFB2CE7D7919F2578FA192B8517836E9680_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m287ADF5F07E86A6244D9ECA16D1D0E5D6EE8EC18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m668A6CC15F573ABC389E612A2423599B5ADDC2EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F_m41229EDC62D1149A73F81E7B0BE27B4C1C293A01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0_m8005DAC7F65600404981B996A714B5C7D29A359F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4_m3C5338CF883CA97951B07D446FEA5FC76D1FB683_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCinemachineImpulseSource_t48D0DCECD3CD8432BF4442EB45399BBD383A1B83_m0C6F2D42D616B2110B3882733B14B88735BB4E89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_TryGetComponent_TisARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966_m26092B601237205F719FF7A32C50CC6736EAB153_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_TryGetComponent_TisARUXReasonsManager_t7DE4754765B780C9987FC05832DE0F5447F2E7EE_mC0B706DD877710609E8D1D413D08B5823604D13E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DetailedLocalizationTable_1_GetEntry_m8B5E2D9865475803BFA283F7DA7BDF130E4F33E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mE5ED48EAB67073C645CD87B5E6ACA2E6BF7975AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m85AB837A51705B9DF96923F388345B9461B9882B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m5A8F8BCAC50C5D5AB2722BBD41A340E4F6E47586_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_mCCC41FF246D656F5F707EF1522F1C279DAA5343F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DisableTrackedVisuals_OnPlacedObject_m44634C72C9D42E81604C899F32810964723D570E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m045DD6390BC35283CF0F0F6260FCDBC5C88190A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m696B5831B239FA49B7C6E9E829D5C2BA96B0E1AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m82EA4A043BD1FC4DB303D820966EBFBD9916A134_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mC8FCE26C6AC5FEC78CEAE18F477FCE8FCFAC8E80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m8CC28190A4AC93DDE1B4FBD06D314A89D89291E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mD7296BB33D16F06FD06E6077D093543842DCAE4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m25C454992279B47B682946D9EAE5386D11B05730_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mA0B8F1113E349AEE09127AE5E71A48872B7AC750_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_TryGetComponent_TisARFaceManager_tE5955187C9D7C9C4C4139F522DA0DEA69EFCFD8F_m171029C1135CD52E50BB3152E3A811E8DA0B657D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_TryGetComponent_TisARHumanBodyManager_tA5246205B817A3D4A87BFC54FC018FB513867BFB_m3BC6CC456D6FA8BAA9CF6A7BA0D981F5FDC69B58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_TryGetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m2F2B53460F4F0075DD0B84E2C557F2BD8D245889_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_TryGetComponent_TisARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4_mF40FD520A7B1A8609A8EF8A348EE210211617F27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_TryGetComponent_TisARTrackedObjectManager_tD667E7CCD95E9D25449BD578F256F728D8619FC7_m28846BD4038C6535F4D387B31595E84AC54E3278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImageTracking_ShowDebug_m57B1965B8D7CFAEF9A70380E092D257BAE5B6343_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImageTracking_TrackedImageManager_trackedImagesChanged_m62EC9643FF9B6F7166FE51B814241C8B8E623620_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisBuilding_t950D5394E080624D7E96B158EF852EA16ADB3650_mB3612C3A0AF9AD0EAA3E70C2B5DBDD41143D186C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mC2DFE4EA31DDAB2DBBC626D816D4A43A3C07543C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mF07727D454FABD5EF479AEDE1687BAB0A7458F4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Sort_m418B8FEB7F84DBF0E75C53C6F16173EDCD7D25DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m371BFB123C54FBBA612036D55FABF370481EFB71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LocalizationManager_OnCompletedReasonsUX_m98F7EF76EB5C1F7E261857DBBBEA786B7132D875_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3_mEEB662CEA43CB4E61FD53EDF4E687BEC8087F5BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Orientation_OnTrackedImagesChanged_m74F08355EF44F855D5B0EF4E79682EDF4CA3D709_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m252F413FCB9BC2AB33C58E442A51680EC2F9260B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m61E54D86D92BB85774BB35079316A552509D7DA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mB2870787C283872067414EBF51344C30B8002818_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mC7231F573C4B3893A8E7B13375E854626F4AC12E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncPose_OnImageChanged_m1C045750F8B0D4D52A6697F553A10CD9D8769A73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableCollection_1_get_count_m0AD877E10C80F187B55A2BC66780A27C8EACFD6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableCollection_1_get_count_m2E0B3CEAD4F15634A14B04AB37111B2198856924_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableCollection_1_get_count_m86E3BD44E96A35AD25951109B6A96002FBDFFFC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableCollection_1_get_count_mD34B737B789B30D939E0D23745BC5881B8225892_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableCollection_1_get_count_mEF7A466B4BE37C1A7FA849C29FD752B69076DE98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__55_System_Collections_IEnumerator_Reset_m39DE37D104ACED7716E76B902D3A6BF21645CB16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetGoalU3Eb__73_0_m0CE4DB463620B870AC3C53045A6F3F9E64658991_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetGoalU3Eb__73_1_m96273E03C6A6D9011864D36314C58E2BCDE076ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIManager_BodyFound_m77AECC1EB365B4162C6A3A3437C88C658E37E539_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIManager_FaceFound_m9306A6196BACFF5C0F5C878C6D131C0197525D7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIManager_FadeComplete_m388D31590ADA632BDD049810F27555391487C903_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIManager_ImageFound_m9A00E02D9D25F34A2875C6522F78BEF796BCFAEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIManager_MultiplePlanesFound_mE9C98A297544EF733C326D9222A3FD44D3B558DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIManager_ObjectFound_mDB6C498F581C435BBD2FE7B120117151D75A0B21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIManager_PlacedObject_m1BADA2E6DD9F3EADDB2ABA4DBDDBECC84D544F65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIManager_PlanesFound_m679513F406EA920B7226602C82E4297361029F66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIManager_U3COnEnableU3Eb__69_0_mEE32206664358615DF236D2C79A1366EDF170733_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_mBEBB5769586D6C240A83E6E9457137C4DD2C3921_RuntimeMethod_var;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct DestinationU5BU5D_t329EC9350AEAB9CAAA3F6A174EB2081F19C72D31;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tBC8769FFC7ECC10C2740A220C39736B63B151E29* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tB57CC90FD7461471159C351E10C1C4C745284454* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tAA4B91D1FC6E3150E12FB777D5C1A8530004C5D1* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>
struct List_1_tFA730335FF46512E4245B2F46892CA318B394FAE  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ARTrackedImageU5BU5D_tD227987C766F9B880B8EF0E9ADF5918CDFB72367* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tFA730335FF46512E4245B2F46892CA318B394FAE_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ARTrackedImageU5BU5D_tD227987C766F9B880B8EF0E9ADF5918CDFB72367* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Localization.Locale>
struct List_1_tBD0AC994E5F9C7F539E0378F0CBB119065136548  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	LocaleU5BU5D_tA72D83EF0A860CBFEFDD5F8CE268C3E7B09C1A12* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tBD0AC994E5F9C7F539E0378F0CBB119065136548_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	LocaleU5BU5D_tA72D83EF0A860CBFEFDD5F8CE268C3E7B09C1A12* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<TMPro.TMP_Dropdown/OptionData>
struct List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	OptionDataU5BU5D_tEB78063B7582A72D41E99569EB93D519AC75F615* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	OptionDataU5BU5D_tEB78063B7582A72D41E99569EB93D519AC75F615* ___s_emptyArray_5;
};

// System.Collections.Generic.Queue`1<UXHandle>
struct Queue_1_tBB833A4AC695DF02307E93FAAED0C78E3BD64A1D  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	UXHandleU5BU5D_tC2FEDC21A6AE89F7808C803D66325F1EF65A2B9C* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GameObject>
struct ValueCollection_tAA4B91D1FC6E3150E12FB777D5C1A8530004C5D1  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE* ____dictionary_0;
};
struct Il2CppArrayBounds;

// Board
struct Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A  : public RuntimeObject
{
	// System.String Board::title
	String_t* ___title_0;
	// System.String Board::content
	String_t* ___content_1;
	// Board/InfoType Board::TypeInfo
	int32_t ___TypeInfo_2;
};

// Building
struct Building_t950D5394E080624D7E96B158EF852EA16ADB3650  : public RuntimeObject
{
	// System.String Building::Title
	String_t* ___Title_0;
	// System.String Building::Adress
	String_t* ___Adress_1;
	// System.Int32 Building::FloorNumber
	int32_t ___FloorNumber_2;
	// Floor Building::BasementOne
	Floor_t8880897F1802E67C7738331BDEFCBDBC6FA8B04C* ___BasementOne_3;
	// Floor Building::Mezzanine
	Floor_t8880897F1802E67C7738331BDEFCBDBC6FA8B04C* ___Mezzanine_4;
	// Floor Building::SecondFloor
	Floor_t8880897F1802E67C7738331BDEFCBDBC6FA8B04C* ___SecondFloor_5;
	// Floor Building::ThirdFloor
	Floor_t8880897F1802E67C7738331BDEFCBDBC6FA8B04C* ___ThirdFloor_6;
	// Floor Building::FourthFloor
	Floor_t8880897F1802E67C7738331BDEFCBDBC6FA8B04C* ___FourthFloor_7;
};

// Destination
struct Destination_t336101C9D43A1813C8DD5375BBEE228C8B09873F  : public RuntimeObject
{
	// UnityEngine.GameObject Destination::stuff
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___stuff_0;
	// System.String Destination::title
	String_t* ___title_1;
	// Board Destination::board
	Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* ___board_2;
	// System.Boolean Destination::isGoal
	bool ___isGoal_3;
	// Destination/DestinationType Destination::type
	int32_t ___type_4;
};

// Floor
struct Floor_t8880897F1802E67C7738331BDEFCBDBC6FA8B04C  : public RuntimeObject
{
	// Destination[] Floor::destinations
	DestinationU5BU5D_t329EC9350AEAB9CAAA3F6A174EB2081F19C72D31* ___destinations_0;
	// System.String Floor::title
	String_t* ___title_1;
	// System.Int32 Floor::floorLevel
	int32_t ___floorLevel_2;
};

// ItemData
struct ItemData_t7FB0F9911AFA201D097B2B0D2353002ECE882538  : public RuntimeObject
{
	// System.String ItemData::Name
	String_t* ___Name_0;
	// System.String ItemData::Title
	String_t* ___Title_1;
	// System.String ItemData::Content
	String_t* ___Content_2;
	// ItemData/InfoType ItemData::TypeInfo
	int32_t ___TypeInfo_3;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.Localization.Tables.TableEntry
struct TableEntry_t2C684B41D2E75FDE51952FDD917B192D3C3B1DB6  : public RuntimeObject
{
	// UnityEngine.Localization.Tables.SharedTableData/SharedTableEntry UnityEngine.Localization.Tables.TableEntry::m_SharedTableEntry
	SharedTableEntry_tDFA6DAF3FA745D2D5B3CCD6BA8C879354B795BA7* ___m_SharedTableEntry_0;
	// UnityEngine.Localization.Tables.LocalizationTable UnityEngine.Localization.Tables.TableEntry::<Table>k__BackingField
	LocalizationTable_tFE5F77A2528CA506A718E692737CB6F2A1BA9E84* ___U3CTableU3Ek__BackingField_1;
	// UnityEngine.Localization.Tables.TableEntryData UnityEngine.Localization.Tables.TableEntry::<Data>k__BackingField
	TableEntryData_t204A2480346BCEF79D01B3D7E8D534AA2B822FD1* ___U3CDataU3Ek__BackingField_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// LocalizationManager/<Start>d__55
struct U3CStartU3Ed__55_tDA4619B76EF3AD96E8F2A1702B0A7AE8D9718513  : public RuntimeObject
{
	// System.Int32 LocalizationManager/<Start>d__55::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object LocalizationManager/<Start>d__55::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// LocalizationManager LocalizationManager/<Start>d__55::<>4__this
	LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* ___U3CU3E4__this_2;
};

// UIManager/<>c
struct U3CU3Ec_tE0F140AB3A3D2C049850DEC15500CB19953B3761  : public RuntimeObject
{
};

struct U3CU3Ec_tE0F140AB3A3D2C049850DEC15500CB19953B3761_StaticFields
{
	// UIManager/<>c UIManager/<>c::<>9
	U3CU3Ec_tE0F140AB3A3D2C049850DEC15500CB19953B3761* ___U3CU3E9_0;
	// System.Func`1<System.Boolean> UIManager/<>c::<>9__73_0
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___U3CU3E9__73_0_1;
	// System.Func`1<System.Boolean> UIManager/<>c::<>9__73_1
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___U3CU3E9__73_1_2;
};

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.Localization.Settings.LocalizationSettings>
struct AsyncOperationHandle_1_t942B32DFBF2792F48E49169E2A65A5E46162395C 
{
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<TObject> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_InternalOp
	AsyncOperationBase_1_tB882B04817F69BD874341E5A35527CE97B20BDB6* ___m_InternalOp_0;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_Version
	int32_t ___m_Version_1;
	// System.String UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_LocationName
	String_t* ___m_LocationName_2;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_UnloadSceneOpExcludeReleaseCallback
	bool ___m_UnloadSceneOpExcludeReleaseCallback_3;
};

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Object>
struct AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74 
{
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<TObject> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_InternalOp
	AsyncOperationBase_1_t777EC3ACED7579A0B8EFE3EEE605D824516B3C13* ___m_InternalOp_0;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_Version
	int32_t ___m_Version_1;
	// System.String UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_LocationName
	String_t* ___m_LocationName_2;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_UnloadSceneOpExcludeReleaseCallback
	bool ___m_UnloadSceneOpExcludeReleaseCallback_3;
};

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.Localization.Tables.StringTable>
struct AsyncOperationHandle_1_tC737C3B1E3DD319BBC38072DFCBF5B0369708A6D 
{
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<TObject> UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_InternalOp
	AsyncOperationBase_1_tFF1A8E4B11E398C71300A03CE60BF6755C857D70* ___m_InternalOp_0;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_Version
	int32_t ___m_Version_1;
	// System.String UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_LocationName
	String_t* ___m_LocationName_2;
	// System.Boolean UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1::m_UnloadSceneOpExcludeReleaseCallback
	bool ___m_UnloadSceneOpExcludeReleaseCallback_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARTrackedImage>
struct Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>
struct Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	RuntimeObject* ____currentValue_3;
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,UnityEngine.GameObject>
struct Enumerator_t44F706C297E7C39CC8E9C45CF3D7CF388A1A9A05 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____currentValue_3;
};

// Unity.Collections.NativeArray`1<UnityEngine.Vector2>
struct NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// System.Nullable`1<System.Single>
struct Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	float ___value_1;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.XR.ARFoundation.TrackableCollection`1<UnityEngine.XR.ARFoundation.ARFace>
struct TrackableCollection_1_t7F8F18DAEBAC38B9CA739A30AD2C21CCE8F8B305 
{
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.TrackableCollection`1::m_Trackables
	Dictionary_2_t24DD0A560FD522E53E9814CD1A0AD91C3AD5FCCC* ___m_Trackables_0;
};

// UnityEngine.XR.ARFoundation.TrackableCollection`1<UnityEngine.XR.ARFoundation.ARHumanBody>
struct TrackableCollection_1_t4C7AEC8C8EF02A76185BC5E4DA2437F818E51CEF 
{
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.TrackableCollection`1::m_Trackables
	Dictionary_2_t26E20BE1EB8A93CA83F951C6E2C3E93D20E1EA30* ___m_Trackables_0;
};

// UnityEngine.XR.ARFoundation.TrackableCollection`1<UnityEngine.XR.ARFoundation.ARPlane>
struct TrackableCollection_1_t020ABE893108AA7BEFF830BE31295402EFBDDCA7 
{
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.TrackableCollection`1::m_Trackables
	Dictionary_2_t26A4820BA6F451105138232941B7A9466E583A6C* ___m_Trackables_0;
};

// UnityEngine.XR.ARFoundation.TrackableCollection`1<UnityEngine.XR.ARFoundation.ARTrackedImage>
struct TrackableCollection_1_tA2C9F7D20A5C25A17E7623BC171A9D4359876D2C 
{
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.TrackableCollection`1::m_Trackables
	Dictionary_2_t13B80190D7DD5A74B43A63EC63B97E079A0B2FC2* ___m_Trackables_0;
};

// UnityEngine.XR.ARFoundation.TrackableCollection`1<UnityEngine.XR.ARFoundation.ARTrackedObject>
struct TrackableCollection_1_tCA8C6AEE4E81BA18A7079CA0E9C9612C9095EBD0 
{
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.TrackableCollection`1::m_Trackables
	Dictionary_2_t7DA79BD2AB092CBEF953D24BF7B5C6154A0F04D2* ___m_Trackables_0;
};

// UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>
struct TrackableCollection_1_tFCC29DC30D1D7BF9DF5F84F8DF60BD67C7832EDB 
{
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.TrackableCollection`1::m_Trackables
	Dictionary_2_t96E118783FA125640B6CD73897A2FE2B787E0AB4* ___m_Trackables_0;
};

// UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs
struct ARPlaneBoundaryChangedEventArgs_tE59EDE94575C8947AD3F1F8DA1370D0A426A5FFC 
{
	// UnityEngine.XR.ARFoundation.ARPlane UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs::<plane>k__BackingField
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___U3CplaneU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs
struct ARPlaneBoundaryChangedEventArgs_tE59EDE94575C8947AD3F1F8DA1370D0A426A5FFC_marshaled_pinvoke
{
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___U3CplaneU3Ek__BackingField_0;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs
struct ARPlaneBoundaryChangedEventArgs_tE59EDE94575C8947AD3F1F8DA1370D0A426A5FFC_marshaled_com
{
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___U3CplaneU3Ek__BackingField_0;
};

// UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs
struct ARSessionStateChangedEventArgs_tC31BD123D6B4F6168FB246762E79AB33962AE822 
{
	// UnityEngine.XR.ARFoundation.ARSessionState UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs::<state>k__BackingField
	int32_t ___U3CstateU3Ek__BackingField_0;
};

// UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs
struct ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F 
{
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::<added>k__BackingField
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___U3CaddedU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::<updated>k__BackingField
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___U3CupdatedU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::<removed>k__BackingField
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___U3CremovedU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs
struct ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F_marshaled_pinvoke
{
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___U3CaddedU3Ek__BackingField_0;
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___U3CupdatedU3Ek__BackingField_1;
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___U3CremovedU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs
struct ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F_marshaled_com
{
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___U3CaddedU3Ek__BackingField_0;
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___U3CupdatedU3Ek__BackingField_1;
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___U3CremovedU3Ek__BackingField_2;
};

// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
struct AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D 
{
	// UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::m_InternalOp
	RuntimeObject* ___m_InternalOp_0;
	// System.Int32 UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::m_Version
	int32_t ___m_Version_1;
	// System.String UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle::m_LocationName
	String_t* ___m_LocationName_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
struct AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_pinvoke
{
	RuntimeObject* ___m_InternalOp_0;
	int32_t ___m_Version_1;
	char* ___m_LocationName_2;
};
// Native definition for COM marshalling of UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
struct AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D_marshaled_com
{
	RuntimeObject* ___m_InternalOp_0;
	int32_t ___m_Version_1;
	Il2CppChar* ___m_LocationName_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// UnityEngine.TextCore.FaceInfo
struct FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756 
{
	// System.Int32 UnityEngine.TextCore.FaceInfo::m_FaceIndex
	int32_t ___m_FaceIndex_0;
	// System.String UnityEngine.TextCore.FaceInfo::m_FamilyName
	String_t* ___m_FamilyName_1;
	// System.String UnityEngine.TextCore.FaceInfo::m_StyleName
	String_t* ___m_StyleName_2;
	// System.Int32 UnityEngine.TextCore.FaceInfo::m_PointSize
	int32_t ___m_PointSize_3;
	// System.Single UnityEngine.TextCore.FaceInfo::m_Scale
	float ___m_Scale_4;
	// System.Single UnityEngine.TextCore.FaceInfo::m_LineHeight
	float ___m_LineHeight_5;
	// System.Single UnityEngine.TextCore.FaceInfo::m_AscentLine
	float ___m_AscentLine_6;
	// System.Single UnityEngine.TextCore.FaceInfo::m_CapLine
	float ___m_CapLine_7;
	// System.Single UnityEngine.TextCore.FaceInfo::m_MeanLine
	float ___m_MeanLine_8;
	// System.Single UnityEngine.TextCore.FaceInfo::m_Baseline
	float ___m_Baseline_9;
	// System.Single UnityEngine.TextCore.FaceInfo::m_DescentLine
	float ___m_DescentLine_10;
	// System.Single UnityEngine.TextCore.FaceInfo::m_SuperscriptOffset
	float ___m_SuperscriptOffset_11;
	// System.Single UnityEngine.TextCore.FaceInfo::m_SuperscriptSize
	float ___m_SuperscriptSize_12;
	// System.Single UnityEngine.TextCore.FaceInfo::m_SubscriptOffset
	float ___m_SubscriptOffset_13;
	// System.Single UnityEngine.TextCore.FaceInfo::m_SubscriptSize
	float ___m_SubscriptSize_14;
	// System.Single UnityEngine.TextCore.FaceInfo::m_UnderlineOffset
	float ___m_UnderlineOffset_15;
	// System.Single UnityEngine.TextCore.FaceInfo::m_UnderlineThickness
	float ___m_UnderlineThickness_16;
	// System.Single UnityEngine.TextCore.FaceInfo::m_StrikethroughOffset
	float ___m_StrikethroughOffset_17;
	// System.Single UnityEngine.TextCore.FaceInfo::m_StrikethroughThickness
	float ___m_StrikethroughThickness_18;
	// System.Single UnityEngine.TextCore.FaceInfo::m_TabWidth
	float ___m_TabWidth_19;
};
// Native definition for P/Invoke marshalling of UnityEngine.TextCore.FaceInfo
struct FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_marshaled_pinvoke
{
	int32_t ___m_FaceIndex_0;
	char* ___m_FamilyName_1;
	char* ___m_StyleName_2;
	int32_t ___m_PointSize_3;
	float ___m_Scale_4;
	float ___m_LineHeight_5;
	float ___m_AscentLine_6;
	float ___m_CapLine_7;
	float ___m_MeanLine_8;
	float ___m_Baseline_9;
	float ___m_DescentLine_10;
	float ___m_SuperscriptOffset_11;
	float ___m_SuperscriptSize_12;
	float ___m_SubscriptOffset_13;
	float ___m_SubscriptSize_14;
	float ___m_UnderlineOffset_15;
	float ___m_UnderlineThickness_16;
	float ___m_StrikethroughOffset_17;
	float ___m_StrikethroughThickness_18;
	float ___m_TabWidth_19;
};
// Native definition for COM marshalling of UnityEngine.TextCore.FaceInfo
struct FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_marshaled_com
{
	int32_t ___m_FaceIndex_0;
	Il2CppChar* ___m_FamilyName_1;
	Il2CppChar* ___m_StyleName_2;
	int32_t ___m_PointSize_3;
	float ___m_Scale_4;
	float ___m_LineHeight_5;
	float ___m_AscentLine_6;
	float ___m_CapLine_7;
	float ___m_MeanLine_8;
	float ___m_Baseline_9;
	float ___m_DescentLine_10;
	float ___m_SuperscriptOffset_11;
	float ___m_SuperscriptSize_12;
	float ___m_SubscriptOffset_13;
	float ___m_SubscriptSize_14;
	float ___m_UnderlineOffset_15;
	float ___m_UnderlineThickness_16;
	float ___m_StrikethroughOffset_17;
	float ___m_StrikethroughThickness_18;
	float ___m_TabWidth_19;
};

// TMPro.FontAssetCreationSettings
struct FontAssetCreationSettings_t2B94078737A72F814E8BC2126F967B94231190DF 
{
	// System.String TMPro.FontAssetCreationSettings::sourceFontFileName
	String_t* ___sourceFontFileName_0;
	// System.String TMPro.FontAssetCreationSettings::sourceFontFileGUID
	String_t* ___sourceFontFileGUID_1;
	// System.Int32 TMPro.FontAssetCreationSettings::pointSizeSamplingMode
	int32_t ___pointSizeSamplingMode_2;
	// System.Int32 TMPro.FontAssetCreationSettings::pointSize
	int32_t ___pointSize_3;
	// System.Int32 TMPro.FontAssetCreationSettings::padding
	int32_t ___padding_4;
	// System.Int32 TMPro.FontAssetCreationSettings::packingMode
	int32_t ___packingMode_5;
	// System.Int32 TMPro.FontAssetCreationSettings::atlasWidth
	int32_t ___atlasWidth_6;
	// System.Int32 TMPro.FontAssetCreationSettings::atlasHeight
	int32_t ___atlasHeight_7;
	// System.Int32 TMPro.FontAssetCreationSettings::characterSetSelectionMode
	int32_t ___characterSetSelectionMode_8;
	// System.String TMPro.FontAssetCreationSettings::characterSequence
	String_t* ___characterSequence_9;
	// System.String TMPro.FontAssetCreationSettings::referencedFontAssetGUID
	String_t* ___referencedFontAssetGUID_10;
	// System.String TMPro.FontAssetCreationSettings::referencedTextAssetGUID
	String_t* ___referencedTextAssetGUID_11;
	// System.Int32 TMPro.FontAssetCreationSettings::fontStyle
	int32_t ___fontStyle_12;
	// System.Single TMPro.FontAssetCreationSettings::fontStyleModifier
	float ___fontStyleModifier_13;
	// System.Int32 TMPro.FontAssetCreationSettings::renderMode
	int32_t ___renderMode_14;
	// System.Boolean TMPro.FontAssetCreationSettings::includeFontFeatures
	bool ___includeFontFeatures_15;
};
// Native definition for P/Invoke marshalling of TMPro.FontAssetCreationSettings
struct FontAssetCreationSettings_t2B94078737A72F814E8BC2126F967B94231190DF_marshaled_pinvoke
{
	char* ___sourceFontFileName_0;
	char* ___sourceFontFileGUID_1;
	int32_t ___pointSizeSamplingMode_2;
	int32_t ___pointSize_3;
	int32_t ___padding_4;
	int32_t ___packingMode_5;
	int32_t ___atlasWidth_6;
	int32_t ___atlasHeight_7;
	int32_t ___characterSetSelectionMode_8;
	char* ___characterSequence_9;
	char* ___referencedFontAssetGUID_10;
	char* ___referencedTextAssetGUID_11;
	int32_t ___fontStyle_12;
	float ___fontStyleModifier_13;
	int32_t ___renderMode_14;
	int32_t ___includeFontFeatures_15;
};
// Native definition for COM marshalling of TMPro.FontAssetCreationSettings
struct FontAssetCreationSettings_t2B94078737A72F814E8BC2126F967B94231190DF_marshaled_com
{
	Il2CppChar* ___sourceFontFileName_0;
	Il2CppChar* ___sourceFontFileGUID_1;
	int32_t ___pointSizeSamplingMode_2;
	int32_t ___pointSize_3;
	int32_t ___padding_4;
	int32_t ___packingMode_5;
	int32_t ___atlasWidth_6;
	int32_t ___atlasHeight_7;
	int32_t ___characterSetSelectionMode_8;
	Il2CppChar* ___characterSequence_9;
	Il2CppChar* ___referencedFontAssetGUID_10;
	Il2CppChar* ___referencedTextAssetGUID_11;
	int32_t ___fontStyle_12;
	float ___fontStyleModifier_13;
	int32_t ___renderMode_14;
	int32_t ___includeFontFeatures_15;
};

// System.Guid
struct Guid_t 
{
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
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Localization.LocaleIdentifier
struct LocaleIdentifier_t1C6758D6E05D8D5DBCD7FFEC16E8E55547595C18 
{
	// System.String UnityEngine.Localization.LocaleIdentifier::m_Code
	String_t* ___m_Code_0;
	// System.Globalization.CultureInfo UnityEngine.Localization.LocaleIdentifier::m_CultureInfo
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CultureInfo_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Localization.LocaleIdentifier
struct LocaleIdentifier_t1C6758D6E05D8D5DBCD7FFEC16E8E55547595C18_marshaled_pinvoke
{
	char* ___m_Code_0;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___m_CultureInfo_1;
};
// Native definition for COM marshalling of UnityEngine.Localization.LocaleIdentifier
struct LocaleIdentifier_t1C6758D6E05D8D5DBCD7FFEC16E8E55547595C18_marshaled_com
{
	Il2CppChar* ___m_Code_0;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___m_CultureInfo_1;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// UnityEngine.XR.ARSubsystems.SerializableGuid
struct SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.SerializableGuid::m_GuidLow
	uint64_t ___m_GuidLow_1;
	// System.UInt64 UnityEngine.XR.ARSubsystems.SerializableGuid::m_GuidHigh
	uint64_t ___m_GuidHigh_2;
};

struct SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378_StaticFields
{
	// UnityEngine.XR.ARSubsystems.SerializableGuid UnityEngine.XR.ARSubsystems.SerializableGuid::k_Empty
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___k_Empty_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// UnityEngine.Localization.Tables.StringTableEntry
struct StringTableEntry_tEB17D923B5599B343F7E00DA6C4333AE8F38723C  : public TableEntry_t2C684B41D2E75FDE51952FDD917B192D3C3B1DB6
{
	// UnityEngine.Localization.SmartFormat.Core.Formatting.FormatCache UnityEngine.Localization.Tables.StringTableEntry::m_FormatCache
	FormatCache_tCEC272C82C2AED273DEE6F00BA89C327269F934D* ___m_FormatCache_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;
};

struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_StaticFields
{
	// System.Text.RegularExpressions.Regex UnityEngine.XR.ARSubsystems.TrackableId::s_TrackableIdRegex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_TrackableIdRegex_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___s_InvalidId_1;
};

// UXHandle
struct UXHandle_tC4DD5984B1181FA802AC5B288C7616225F9B147F 
{
	// UIManager/InstructionUI UXHandle::InstructionalUI
	int32_t ___InstructionalUI_0;
	// UIManager/InstructionGoals UXHandle::Goal
	int32_t ___Goal_1;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
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

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_pinvoke
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_com
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.AI.NavMeshPath
struct NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AI.NavMeshPath::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Vector3[] UnityEngine.AI.NavMeshPath::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AI.NavMeshPath
struct NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___m_Corners_1;
};
// Native definition for COM marshalling of UnityEngine.AI.NavMeshPath
struct NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___m_Corners_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Localization.Tables.TableReference
struct TableReference_t96A5F0161FDA37E187436FC17A3B6D7AB676A147 
{
	// System.String UnityEngine.Localization.Tables.TableReference::m_TableCollectionName
	String_t* ___m_TableCollectionName_2;
	// System.Boolean UnityEngine.Localization.Tables.TableReference::m_Valid
	bool ___m_Valid_3;
	// UnityEngine.Localization.Tables.TableReference/Type UnityEngine.Localization.Tables.TableReference::<ReferenceType>k__BackingField
	int32_t ___U3CReferenceTypeU3Ek__BackingField_5;
	// System.Guid UnityEngine.Localization.Tables.TableReference::<TableCollectionNameGuid>k__BackingField
	Guid_t ___U3CTableCollectionNameGuidU3Ek__BackingField_6;
};

struct TableReference_t96A5F0161FDA37E187436FC17A3B6D7AB676A147_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Guid,System.String> UnityEngine.Localization.Tables.TableReference::s_GuidToStringCache
	Dictionary_2_t1237B68284D10128976C2AEC3CB7849642DCBF0C* ___s_GuidToStringCache_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Guid> UnityEngine.Localization.Tables.TableReference::s_StringToGuidCache
	Dictionary_2_tA80F509096B4D8D9900583577EAA0036147FD60E* ___s_StringToGuidCache_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Localization.Tables.TableReference
struct TableReference_t96A5F0161FDA37E187436FC17A3B6D7AB676A147_marshaled_pinvoke
{
	char* ___m_TableCollectionName_2;
	int32_t ___m_Valid_3;
	int32_t ___U3CReferenceTypeU3Ek__BackingField_5;
	Guid_t ___U3CTableCollectionNameGuidU3Ek__BackingField_6;
};
// Native definition for COM marshalling of UnityEngine.Localization.Tables.TableReference
struct TableReference_t96A5F0161FDA37E187436FC17A3B6D7AB676A147_marshaled_com
{
	Il2CppChar* ___m_TableCollectionName_2;
	int32_t ___m_Valid_3;
	int32_t ___U3CReferenceTypeU3Ek__BackingField_5;
	Guid_t ___U3CTableCollectionNameGuidU3Ek__BackingField_6;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// UnityEngine.XR.ARSubsystems.XRReferenceImage
struct XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F 
{
	// UnityEngine.XR.ARSubsystems.SerializableGuid UnityEngine.XR.ARSubsystems.XRReferenceImage::m_SerializedGuid
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedGuid_0;
	// UnityEngine.XR.ARSubsystems.SerializableGuid UnityEngine.XR.ARSubsystems.XRReferenceImage::m_SerializedTextureGuid
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedTextureGuid_1;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRReferenceImage::m_Size
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size_2;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRReferenceImage::m_SpecifySize
	bool ___m_SpecifySize_3;
	// System.String UnityEngine.XR.ARSubsystems.XRReferenceImage::m_Name
	String_t* ___m_Name_4;
	// UnityEngine.Texture2D UnityEngine.XR.ARSubsystems.XRReferenceImage::m_Texture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRReferenceImage
struct XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F_marshaled_pinvoke
{
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedGuid_0;
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedTextureGuid_1;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size_2;
	int32_t ___m_SpecifySize_3;
	char* ___m_Name_4;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture_5;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRReferenceImage
struct XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F_marshaled_com
{
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedGuid_0;
	SerializableGuid_tCEABDCED6CD954AC100159BDEFC5D414049C0378 ___m_SerializedTextureGuid_1;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size_2;
	int32_t ___m_SpecifySize_3;
	Il2CppChar* ___m_Name_4;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture_5;
};

// UnityEngine.Localization.Settings.LocalizedDatabase`2<UnityEngine.Localization.Tables.StringTable,UnityEngine.Localization.Tables.StringTableEntry>
struct LocalizedDatabase_2_t8D5DC767A4C439C731B3423EFCB3D9BBACB75483  : public RuntimeObject
{
	// UnityEngine.Localization.Tables.TableReference UnityEngine.Localization.Settings.LocalizedDatabase`2::m_DefaultTableReference
	TableReference_t96A5F0161FDA37E187436FC17A3B6D7AB676A147 ___m_DefaultTableReference_0;
	// System.Boolean UnityEngine.Localization.Settings.LocalizedDatabase`2::m_UseFallback
	bool ___m_UseFallback_1;
	// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle UnityEngine.Localization.Settings.LocalizedDatabase`2::m_PreloadOperationHandle
	AsyncOperationHandle_t58B507DCAA6531B85FDBA6188D8E1F7DF89D3F5D ___m_PreloadOperationHandle_2;
	// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle> UnityEngine.Localization.Settings.LocalizedDatabase`2::m_ReleaseNextFrame
	Action_1_t84AF53BD4007CE3C0DE9F29034F579B456DC98DF* ___m_ReleaseNextFrame_3;
	// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TTable>> UnityEngine.Localization.Settings.LocalizedDatabase`2::m_RegisterSharedTableOperation
	Action_1_t647506099BF0E618A47E824F311932EBCB1B5994* ___m_RegisterSharedTableOperation_4;
	// System.Collections.Generic.Dictionary`2<System.ValueTuple`2<UnityEngine.Localization.LocaleIdentifier,System.String>,UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TTable>> UnityEngine.Localization.Settings.LocalizedDatabase`2::<TableOperations>k__BackingField
	Dictionary_2_tF94BD601DE43C446456A931B753B8A155754D16D* ___U3CTableOperationsU3Ek__BackingField_6;
	// System.Collections.Generic.Dictionary`2<System.Guid,UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.Localization.Tables.SharedTableData>> UnityEngine.Localization.Settings.LocalizedDatabase`2::<SharedTableDataOperations>k__BackingField
	Dictionary_2_t25206733F6347B0891CD546B44211E9F2D368D7B* ___U3CSharedTableDataOperationsU3Ek__BackingField_7;
};

struct LocalizedDatabase_2_t8D5DC767A4C439C731B3423EFCB3D9BBACB75483_StaticFields
{
	// UnityEngine.Localization.LocaleIdentifier UnityEngine.Localization.Settings.LocalizedDatabase`2::k_SelectedLocaleId
	LocaleIdentifier_t1C6758D6E05D8D5DBCD7FFEC16E8E55547595C18 ___k_SelectedLocaleId_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.XR.ARSubsystems.BoundedPlane
struct BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_1;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_SubsumedById
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_SubsumedById_2;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Center
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Center_3;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.BoundedPlane::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_4;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Size
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size_5;
	// UnityEngine.XR.ARSubsystems.PlaneAlignment UnityEngine.XR.ARSubsystems.BoundedPlane::m_Alignment
	int32_t ___m_Alignment_6;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackingState
	int32_t ___m_TrackingState_7;
	// System.IntPtr UnityEngine.XR.ARSubsystems.BoundedPlane::m_NativePtr
	intptr_t ___m_NativePtr_8;
	// UnityEngine.XR.ARSubsystems.PlaneClassification UnityEngine.XR.ARSubsystems.BoundedPlane::m_Classification
	int32_t ___m_Classification_9;
};

struct BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_StaticFields
{
	// UnityEngine.XR.ARSubsystems.BoundedPlane UnityEngine.XR.ARSubsystems.BoundedPlane::s_Default
	BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE ___s_Default_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Video.VideoClip
struct VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.XR.ARSubsystems.XRRaycastHit
struct XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycastHit::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_2;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastHit::m_HitType
	int32_t ___m_HitType_4;
};

struct XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARSubsystems.XRRaycastHit::s_Default
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___s_Default_0;
};

// UnityEngine.XR.ARSubsystems.XRTrackedImage
struct XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Id
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_Id_1;
	// System.Guid UnityEngine.XR.ARSubsystems.XRTrackedImage::m_SourceImageId
	Guid_t ___m_SourceImageId_2;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_3;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Size
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size_4;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRTrackedImage::m_TrackingState
	int32_t ___m_TrackingState_5;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTrackedImage::m_NativePtr
	intptr_t ___m_NativePtr_6;
};

struct XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRTrackedImage UnityEngine.XR.ARSubsystems.XRTrackedImage::s_Default
	XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD ___s_Default_0;
};

// System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.Localization.Tables.StringTable>>
struct Action_1_t647506099BF0E618A47E824F311932EBCB1B5994  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>
struct Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs>
struct Action_1_t325C602D999E964DB72210E493635E83F8D6CE68  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>
struct Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F  : public MulticastDelegate_t
{
};

// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457  : public MulticastDelegate_t
{
};

// UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 
{
	// System.Single UnityEngine.XR.ARFoundation.ARRaycastHit::<distance>k__BackingField
	float ___U3CdistanceU3Ek__BackingField_0;
	// UnityEngine.XR.ARFoundation.ARTrackable UnityEngine.XR.ARFoundation.ARRaycastHit::<trackable>k__BackingField
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARFoundation.ARRaycastHit::m_Hit
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARRaycastHit::m_Transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_marshaled_pinvoke
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_marshaled_com
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Localization.Locale
struct Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Localization.LocaleIdentifier UnityEngine.Localization.Locale::m_Identifier
	LocaleIdentifier_t1C6758D6E05D8D5DBCD7FFEC16E8E55547595C18 ___m_Identifier_4;
	// UnityEngine.Localization.Metadata.MetadataCollection UnityEngine.Localization.Locale::m_Metadata
	MetadataCollection_t79AF57BE506FF84FEF50E610C73ED4CA6D015CE0* ___m_Metadata_5;
	// System.String UnityEngine.Localization.Locale::m_LocaleName
	String_t* ___m_LocaleName_6;
	// System.String UnityEngine.Localization.Locale::m_CustomFormatCultureCode
	String_t* ___m_CustomFormatCultureCode_7;
	// System.Boolean UnityEngine.Localization.Locale::m_UseCustomFormatter
	bool ___m_UseCustomFormatter_8;
	// System.UInt16 UnityEngine.Localization.Locale::m_SortOrder
	uint16_t ___m_SortOrder_9;
	// System.IFormatProvider UnityEngine.Localization.Locale::m_Formatter
	RuntimeObject* ___m_Formatter_10;
};

// UnityEngine.Localization.Tables.LocalizationTable
struct LocalizationTable_tFE5F77A2528CA506A718E692737CB6F2A1BA9E84  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Localization.LocaleIdentifier UnityEngine.Localization.Tables.LocalizationTable::m_LocaleId
	LocaleIdentifier_t1C6758D6E05D8D5DBCD7FFEC16E8E55547595C18 ___m_LocaleId_4;
	// UnityEngine.Localization.Tables.SharedTableData UnityEngine.Localization.Tables.LocalizationTable::m_SharedData
	SharedTableData_t49C6D9963F9F443E275A7258BB8BD54876F295F5* ___m_SharedData_5;
	// UnityEngine.Localization.Metadata.MetadataCollection UnityEngine.Localization.Tables.LocalizationTable::m_Metadata
	MetadataCollection_t79AF57BE506FF84FEF50E610C73ED4CA6D015CE0* ___m_Metadata_6;
	// System.Collections.Generic.List`1<UnityEngine.Localization.Tables.TableEntryData> UnityEngine.Localization.Tables.LocalizationTable::m_TableData
	List_1_tD91CF3CA44AF959D498943CF326E2E8EDFB81C49* ___m_TableData_7;
};

// UnityEngine.Localization.Settings.LocalizedStringDatabase
struct LocalizedStringDatabase_tACE9FD9021269D20788D130D96F7B2244DD67406  : public LocalizedDatabase_2_t8D5DC767A4C439C731B3423EFCB3D9BBACB75483
{
	// UnityEngine.Localization.Settings.MissingTranslationBehavior UnityEngine.Localization.Settings.LocalizedStringDatabase::m_MissingTranslationState
	int32_t ___m_MissingTranslationState_8;
	// System.String UnityEngine.Localization.Settings.LocalizedStringDatabase::m_NoTranslationFoundMessage
	String_t* ___m_NoTranslationFoundMessage_10;
	// UnityEngine.Localization.SmartFormat.SmartFormatter UnityEngine.Localization.Settings.LocalizedStringDatabase::m_SmartFormat
	SmartFormatter_tF96E08EAA9077966A9C2A10ABA44ED9BF37E58B1* ___m_SmartFormat_11;
	// UnityEngine.Localization.Tables.StringTable UnityEngine.Localization.Settings.LocalizedStringDatabase::m_MissingTranslationTable
	StringTable_tDCAFD2558506AB46374D3CB6479C9F5B5F6591E1* ___m_MissingTranslationTable_12;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.TMP_Asset
struct TMP_Asset_t135A047D4F5CBBA9CD356B762B55AB164122B969  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Int32 TMPro.TMP_Asset::m_InstanceID
	int32_t ___m_InstanceID_4;
	// System.Int32 TMPro.TMP_Asset::hashCode
	int32_t ___hashCode_5;
	// UnityEngine.Material TMPro.TMP_Asset::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_6;
	// System.Int32 TMPro.TMP_Asset::materialHashCode
	int32_t ___materialHashCode_7;
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// InformationManager/OnItemAdded
struct OnItemAdded_t2402AA9BA550CBE1A1C889D8AB22EAF722C7CB47  : public MulticastDelegate_t
{
};

// Orientation/ImageChanged
struct ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2  : public MulticastDelegate_t
{
};

// UnityEngine.Localization.Tables.DetailedLocalizationTable`1<UnityEngine.Localization.Tables.StringTableEntry>
struct DetailedLocalizationTable_1_t7452A24D1BB260F6AA42A101F4967D4910B3A6D9  : public LocalizationTable_tFE5F77A2528CA506A718E692737CB6F2A1BA9E84
{
	// System.Collections.Generic.Dictionary`2<System.Int64,TEntry> UnityEngine.Localization.Tables.DetailedLocalizationTable`1::m_TableEntries
	Dictionary_2_t1388C9171D04049C910DDDAA907276DA7F0ADCE2* ___m_TableEntries_8;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
};

// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160  : public TMP_Asset_t135A047D4F5CBBA9CD356B762B55AB164122B969
{
	// System.String TMPro.TMP_FontAsset::m_Version
	String_t* ___m_Version_8;
	// System.String TMPro.TMP_FontAsset::m_SourceFontFileGUID
	String_t* ___m_SourceFontFileGUID_9;
	// UnityEngine.Font TMPro.TMP_FontAsset::m_SourceFontFile
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_SourceFontFile_10;
	// TMPro.AtlasPopulationMode TMPro.TMP_FontAsset::m_AtlasPopulationMode
	int32_t ___m_AtlasPopulationMode_11;
	// UnityEngine.TextCore.FaceInfo TMPro.TMP_FontAsset::m_FaceInfo
	FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756 ___m_FaceInfo_12;
	// System.Collections.Generic.List`1<UnityEngine.TextCore.Glyph> TMPro.TMP_FontAsset::m_GlyphTable
	List_1_t95DB74B8EE315F8F92B7B96D93C901C8C3F6FE2C* ___m_GlyphTable_13;
	// System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.Glyph> TMPro.TMP_FontAsset::m_GlyphLookupDictionary
	Dictionary_2_tC61348D10610A6B3D7B65102D82AC3467D59EAA7* ___m_GlyphLookupDictionary_14;
	// System.Collections.Generic.List`1<TMPro.TMP_Character> TMPro.TMP_FontAsset::m_CharacterTable
	List_1_tCE1ACAA0C2736A7797B2C134895298CAB10BEB5E* ___m_CharacterTable_15;
	// System.Collections.Generic.Dictionary`2<System.UInt32,TMPro.TMP_Character> TMPro.TMP_FontAsset::m_CharacterLookupDictionary
	Dictionary_2_tCB5FEF8D6CEA1557D9B9BA25946AD6BF3E6C14D0* ___m_CharacterLookupDictionary_16;
	// UnityEngine.Texture2D TMPro.TMP_FontAsset::m_AtlasTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_AtlasTexture_17;
	// UnityEngine.Texture2D[] TMPro.TMP_FontAsset::m_AtlasTextures
	Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* ___m_AtlasTextures_18;
	// System.Int32 TMPro.TMP_FontAsset::m_AtlasTextureIndex
	int32_t ___m_AtlasTextureIndex_19;
	// System.Boolean TMPro.TMP_FontAsset::m_IsMultiAtlasTexturesEnabled
	bool ___m_IsMultiAtlasTexturesEnabled_20;
	// System.Boolean TMPro.TMP_FontAsset::m_ClearDynamicDataOnBuild
	bool ___m_ClearDynamicDataOnBuild_21;
	// System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect> TMPro.TMP_FontAsset::m_UsedGlyphRects
	List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* ___m_UsedGlyphRects_22;
	// System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect> TMPro.TMP_FontAsset::m_FreeGlyphRects
	List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* ___m_FreeGlyphRects_23;
	// TMPro.FaceInfo_Legacy TMPro.TMP_FontAsset::m_fontInfo
	FaceInfo_Legacy_t23B118EFD5AB7162515ABF18C0212DF155CCF7B8* ___m_fontInfo_24;
	// UnityEngine.Texture2D TMPro.TMP_FontAsset::atlas
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___atlas_25;
	// System.Int32 TMPro.TMP_FontAsset::m_AtlasWidth
	int32_t ___m_AtlasWidth_26;
	// System.Int32 TMPro.TMP_FontAsset::m_AtlasHeight
	int32_t ___m_AtlasHeight_27;
	// System.Int32 TMPro.TMP_FontAsset::m_AtlasPadding
	int32_t ___m_AtlasPadding_28;
	// UnityEngine.TextCore.LowLevel.GlyphRenderMode TMPro.TMP_FontAsset::m_AtlasRenderMode
	int32_t ___m_AtlasRenderMode_29;
	// System.Collections.Generic.List`1<TMPro.TMP_Glyph> TMPro.TMP_FontAsset::m_glyphInfoList
	List_1_tAB7976FADCF872E418770E60783056C23394843D* ___m_glyphInfoList_30;
	// TMPro.KerningTable TMPro.TMP_FontAsset::m_KerningTable
	KerningTable_t040C3FE3B519B12AADE1C5B00628581551D5AB6B* ___m_KerningTable_31;
	// TMPro.TMP_FontFeatureTable TMPro.TMP_FontAsset::m_FontFeatureTable
	TMP_FontFeatureTable_t726A09E64FDF682A8FFE294BB6CFE7747F6C40EA* ___m_FontFeatureTable_32;
	// System.Collections.Generic.List`1<TMPro.TMP_FontAsset> TMPro.TMP_FontAsset::fallbackFontAssets
	List_1_t06C3ABB0C6F2347B32881E33D154431EADAE3ECF* ___fallbackFontAssets_33;
	// System.Collections.Generic.List`1<TMPro.TMP_FontAsset> TMPro.TMP_FontAsset::m_FallbackFontAssetTable
	List_1_t06C3ABB0C6F2347B32881E33D154431EADAE3ECF* ___m_FallbackFontAssetTable_34;
	// TMPro.FontAssetCreationSettings TMPro.TMP_FontAsset::m_CreationSettings
	FontAssetCreationSettings_t2B94078737A72F814E8BC2126F967B94231190DF ___m_CreationSettings_35;
	// TMPro.TMP_FontWeightPair[] TMPro.TMP_FontAsset::m_FontWeightTable
	TMP_FontWeightPairU5BU5D_t0A3A5955F13FEB2F7329D81BA157110DB99F9F37* ___m_FontWeightTable_36;
	// TMPro.TMP_FontWeightPair[] TMPro.TMP_FontAsset::fontWeights
	TMP_FontWeightPairU5BU5D_t0A3A5955F13FEB2F7329D81BA157110DB99F9F37* ___fontWeights_37;
	// System.Single TMPro.TMP_FontAsset::normalStyle
	float ___normalStyle_38;
	// System.Single TMPro.TMP_FontAsset::normalSpacingOffset
	float ___normalSpacingOffset_39;
	// System.Single TMPro.TMP_FontAsset::boldStyle
	float ___boldStyle_40;
	// System.Single TMPro.TMP_FontAsset::boldSpacing
	float ___boldSpacing_41;
	// System.Byte TMPro.TMP_FontAsset::italicStyle
	uint8_t ___italicStyle_42;
	// System.Byte TMPro.TMP_FontAsset::tabSize
	uint8_t ___tabSize_43;
	// System.Boolean TMPro.TMP_FontAsset::IsFontAssetLookupTablesDirty
	bool ___IsFontAssetLookupTablesDirty_44;
	// System.Collections.Generic.HashSet`1<System.Int32> TMPro.TMP_FontAsset::FallbackSearchQueryLookup
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___FallbackSearchQueryLookup_53;
	// System.Collections.Generic.List`1<UnityEngine.TextCore.Glyph> TMPro.TMP_FontAsset::m_GlyphsToRender
	List_1_t95DB74B8EE315F8F92B7B96D93C901C8C3F6FE2C* ___m_GlyphsToRender_59;
	// System.Collections.Generic.List`1<UnityEngine.TextCore.Glyph> TMPro.TMP_FontAsset::m_GlyphsRendered
	List_1_t95DB74B8EE315F8F92B7B96D93C901C8C3F6FE2C* ___m_GlyphsRendered_60;
	// System.Collections.Generic.List`1<System.UInt32> TMPro.TMP_FontAsset::m_GlyphIndexList
	List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* ___m_GlyphIndexList_61;
	// System.Collections.Generic.List`1<System.UInt32> TMPro.TMP_FontAsset::m_GlyphIndexListNewlyAdded
	List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* ___m_GlyphIndexListNewlyAdded_62;
	// System.Collections.Generic.List`1<System.UInt32> TMPro.TMP_FontAsset::m_GlyphsToAdd
	List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* ___m_GlyphsToAdd_63;
	// System.Collections.Generic.HashSet`1<System.UInt32> TMPro.TMP_FontAsset::m_GlyphsToAddLookup
	HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ___m_GlyphsToAddLookup_64;
	// System.Collections.Generic.List`1<TMPro.TMP_Character> TMPro.TMP_FontAsset::m_CharactersToAdd
	List_1_tCE1ACAA0C2736A7797B2C134895298CAB10BEB5E* ___m_CharactersToAdd_65;
	// System.Collections.Generic.HashSet`1<System.UInt32> TMPro.TMP_FontAsset::m_CharactersToAddLookup
	HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ___m_CharactersToAddLookup_66;
	// System.Collections.Generic.List`1<System.UInt32> TMPro.TMP_FontAsset::s_MissingCharacterList
	List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* ___s_MissingCharacterList_67;
	// System.Collections.Generic.HashSet`1<System.UInt32> TMPro.TMP_FontAsset::m_MissingUnicodesFromFontFile
	HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ___m_MissingUnicodesFromFontFile_68;
};

struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TMP_FontAsset::k_ReadFontAssetDefinitionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ReadFontAssetDefinitionMarker_45;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_FontAsset::k_AddSynthesizedCharactersMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_AddSynthesizedCharactersMarker_46;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_FontAsset::k_TryAddCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_TryAddCharacterMarker_47;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_FontAsset::k_TryAddCharactersMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_TryAddCharactersMarker_48;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_FontAsset::k_UpdateGlyphAdjustmentRecordsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_UpdateGlyphAdjustmentRecordsMarker_49;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_FontAsset::k_ClearFontAssetDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ClearFontAssetDataMarker_50;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_FontAsset::k_UpdateFontAssetDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_UpdateFontAssetDataMarker_51;
	// System.String TMPro.TMP_FontAsset::s_DefaultMaterialSuffix
	String_t* ___s_DefaultMaterialSuffix_52;
	// System.Collections.Generic.HashSet`1<System.Int32> TMPro.TMP_FontAsset::k_SearchedFontAssetLookup
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___k_SearchedFontAssetLookup_54;
	// System.Collections.Generic.List`1<TMPro.TMP_FontAsset> TMPro.TMP_FontAsset::k_FontAssets_FontFeaturesUpdateQueue
	List_1_t06C3ABB0C6F2347B32881E33D154431EADAE3ECF* ___k_FontAssets_FontFeaturesUpdateQueue_55;
	// System.Collections.Generic.HashSet`1<System.Int32> TMPro.TMP_FontAsset::k_FontAssets_FontFeaturesUpdateQueueLookup
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___k_FontAssets_FontFeaturesUpdateQueueLookup_56;
	// System.Collections.Generic.List`1<TMPro.TMP_FontAsset> TMPro.TMP_FontAsset::k_FontAssets_AtlasTexturesUpdateQueue
	List_1_t06C3ABB0C6F2347B32881E33D154431EADAE3ECF* ___k_FontAssets_AtlasTexturesUpdateQueue_57;
	// System.Collections.Generic.HashSet`1<System.Int32> TMPro.TMP_FontAsset::k_FontAssets_AtlasTexturesUpdateQueueLookup
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___k_FontAssets_AtlasTexturesUpdateQueueLookup_58;
	// System.UInt32[] TMPro.TMP_FontAsset::k_GlyphIndexArray
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___k_GlyphIndexArray_69;
};

// UnityEngine.Video.VideoPlayer
struct VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::prepareCompleted
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___prepareCompleted_4;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::loopPointReached
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___loopPointReached_5;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::started
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___started_6;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::frameDropped
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___frameDropped_7;
	// UnityEngine.Video.VideoPlayer/ErrorEventHandler UnityEngine.Video.VideoPlayer::errorReceived
	ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* ___errorReceived_8;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::seekCompleted
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___seekCompleted_9;
	// UnityEngine.Video.VideoPlayer/TimeEventHandler UnityEngine.Video.VideoPlayer::clockResyncOccurred
	TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* ___clockResyncOccurred_10;
	// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler UnityEngine.Video.VideoPlayer::frameReady
	FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* ___frameReady_11;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRDepthSubsystem,UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRDepthSubsystem/Provider>
struct SubsystemLifecycleManager_3_t599D09700175D38B75899618C2BECAD5C0D8ACF0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRDepthSubsystem_t61DE8363378DC9991027C95E31303A3F1BC32E48* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_t599D09700175D38B75899618C2BECAD5C0D8ACF0_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tF88289A219854A2C4D0D098CCAD2A4CAD4DA0A5C* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t9571C1546EE44CC37CE2FDEB3E36C298B943B164* ___s_SubsystemInstances_6;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRFaceSubsystem,UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRFaceSubsystem/Provider>
struct SubsystemLifecycleManager_3_tC55963016DDC47B71E344157D85359DBB408C9D1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRFaceSubsystem_t93DD9DDD21C06E5A591BB0094512BC8FD8A890D3* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_tC55963016DDC47B71E344157D85359DBB408C9D1_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_t5E8878D20C1B753B569DF68C6CCE3159D9AB04A6* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t0C2BEA4603C8A892F136360A713FE07EBC51A010* ___s_SubsystemInstances_6;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem,UnityEngine.XR.ARSubsystems.XRHumanBodySubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem/Provider>
struct SubsystemLifecycleManager_3_tE5D97BF0378EDE42C77E6F18C16B28F56C3E386E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRHumanBodySubsystem_tF7BE6EF91D4B632389B2F818E516F94213281526* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_tE5D97BF0378EDE42C77E6F18C16B28F56C3E386E_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_t5EDD6B438D214F2BE1FEC4BEBC8341CA330D7512* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t647C6DA33EBE425BA395C4BBB09B4494DD875198* ___s_SubsystemInstances_6;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider>
struct SubsystemLifecycleManager_3_t17DE984A5507806C3E89F7255F02922D8A7F6FD2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRImageTrackingSubsystem_t5EEEA714F4273F686F836517EE4957AEDFFD7BEB* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_t17DE984A5507806C3E89F7255F02922D8A7F6FD2_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tFAD70D497835B4EB99F6C04DFD87EA9406E796ED* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t447913E715E9E298A8BBACADFBAA1CB629A73DD1* ___s_SubsystemInstances_6;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem/Provider>
struct SubsystemLifecycleManager_3_tFFD3CACE2B7A53A40E40FA52D115A65CB0F93F2C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRObjectTrackingSubsystem_t0094478B41F73E26F73943C09ECD134874B68ED5* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_tFFD3CACE2B7A53A40E40FA52D115A65CB0F93F2C_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tCD3E505D75F3A61FA85FC4FBBAE146ACC1A844AA* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_tF236FF325A33D8570EBBBEC67532DE39F1E3F98A* ___s_SubsystemInstances_6;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>
struct SubsystemLifecycleManager_3_t7FE0F4D0E7C0B4044705703906B62335E93547A6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRPlaneSubsystem_t6FC18D5B1FF10EE9B4A751977B526F44A16EDB62* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_t7FE0F4D0E7C0B4044705703906B62335E93547A6_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tD705D57B270C006E488F9C9B55BA0768A11125D0* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t6630EC2D13FD2DC6D86447667371501266C9B3E8* ___s_SubsystemInstances_6;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>
struct SubsystemLifecycleManager_3_tF871EF43DE89B354DB5832CC545E7E0EEF19DC8C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_tF871EF43DE89B354DB5832CC545E7E0EEF19DC8C_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_t97C3D1A8E80E095D7CE223BC4D02400F78DA063F* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_tD793A24512B84D46F925E4CE4DBD30955A42C94C* ___s_SubsystemInstances_6;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct SubsystemLifecycleManager_3_t7AC7A0198786D712CE4FE49E3789EE14BCC2DFD5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_t7AC7A0198786D712CE4FE49E3789EE14BCC2DFD5_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t3903923EFB501C3A0672A0E60558673B85435D8E* ___s_SubsystemInstances_6;
};

// ARCursor
struct ARCursor_t8AAA875642042CDB3704727B8397F2676759BF0C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ARCursor::CursorChildObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___CursorChildObject_4;
	// UnityEngine.GameObject ARCursor::ObjectToPlace
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ObjectToPlace_5;
	// UnityEngine.XR.ARFoundation.ARRaycastManager ARCursor::RayCastManager
	ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* ___RayCastManager_6;
	// System.Boolean ARCursor::useCursor
	bool ___useCursor_7;
};

// ARFeatheredPlaneMeshVisualizer
struct ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single ARFeatheredPlaneMeshVisualizer::m_FeatheringWidth
	float ___m_FeatheringWidth_4;
	// UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer ARFeatheredPlaneMeshVisualizer::m_PlaneMeshVisualizer
	ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* ___m_PlaneMeshVisualizer_7;
	// UnityEngine.XR.ARFoundation.ARPlane ARFeatheredPlaneMeshVisualizer::m_Plane
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___m_Plane_8;
	// UnityEngine.Material ARFeatheredPlaneMeshVisualizer::m_FeatheredPlaneMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_FeatheredPlaneMaterial_9;
};

struct ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.Vector3> ARFeatheredPlaneMeshVisualizer::s_FeatheringUVs
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___s_FeatheringUVs_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> ARFeatheredPlaneMeshVisualizer::s_Vertices
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___s_Vertices_6;
};

// ARKitCoachingOverlay
struct ARKitCoachingOverlay_t36497D45FFD0ECB9ADA3238540945D2305076A62  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ARKitCoachingOverlay/CoachingGoal ARKitCoachingOverlay::m_Goal
	int32_t ___m_Goal_4;
	// System.Boolean ARKitCoachingOverlay::m_ActivatesAutomatically
	bool ___m_ActivatesAutomatically_5;
};

// ARPlacement
struct ARPlacement_tA1308C1A97DE34EB044FD63BB22F99D72F2A60E7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ARPlacement::arObjectToSpawn
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___arObjectToSpawn_4;
	// UnityEngine.GameObject ARPlacement::placementIndicator
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___placementIndicator_5;
	// UnityEngine.GameObject ARPlacement::spawnedObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___spawnedObject_6;
	// UnityEngine.Pose ARPlacement::PlacementPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___PlacementPose_7;
	// UnityEngine.XR.ARFoundation.ARRaycastManager ARPlacement::RayCastManager
	ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* ___RayCastManager_8;
	// System.Boolean ARPlacement::placementPoseIsValid
	bool ___placementPoseIsValid_9;
	// System.Boolean ARPlacement::useCursor
	bool ___useCursor_10;
};

// UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer
struct ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Mesh UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::<mesh>k__BackingField
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___U3CmeshU3Ek__BackingField_4;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::m_TrackingStateVisibilityThreshold
	int32_t ___m_TrackingStateVisibilityThreshold_5;
	// System.Boolean UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::m_HideSubsumed
	bool ___m_HideSubsumed_6;
	// System.Nullable`1<System.Single> UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::m_InitialLineWidthMultiplier
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___m_InitialLineWidthMultiplier_7;
	// UnityEngine.XR.ARFoundation.ARPlane UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::m_Plane
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___m_Plane_8;
};

// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera UnityEngine.XR.ARFoundation.ARSessionOrigin::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_4;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARSessionOrigin::<trackablesParent>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CtrackablesParentU3Ek__BackingField_5;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs> UnityEngine.XR.ARFoundation.ARSessionOrigin::trackablesParentTransformChanged
	Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB* ___trackablesParentTransformChanged_6;
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARSessionOrigin::m_ContentOffsetGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_ContentOffsetGameObject_7;
};

// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// ARUXAnimationManager
struct ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TMP_Text ARUXAnimationManager::m_InstructionText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_InstructionText_4;
	// UnityEngine.Video.VideoClip ARUXAnimationManager::m_FindAPlaneClip
	VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* ___m_FindAPlaneClip_5;
	// UnityEngine.Video.VideoClip ARUXAnimationManager::m_TapToPlaceClip
	VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* ___m_TapToPlaceClip_6;
	// UnityEngine.Video.VideoClip ARUXAnimationManager::m_FindImageClip
	VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* ___m_FindImageClip_7;
	// UnityEngine.Video.VideoClip ARUXAnimationManager::m_FindBodyClip
	VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* ___m_FindBodyClip_8;
	// UnityEngine.Video.VideoClip ARUXAnimationManager::m_FindObjectClip
	VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* ___m_FindObjectClip_9;
	// UnityEngine.Video.VideoClip ARUXAnimationManager::m_FindFaceClip
	VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* ___m_FindFaceClip_10;
	// ARKitCoachingOverlay ARUXAnimationManager::m_CoachingOverlay
	ARKitCoachingOverlay_t36497D45FFD0ECB9ADA3238540945D2305076A62* ___m_CoachingOverlay_11;
	// UnityEngine.Video.VideoPlayer ARUXAnimationManager::m_VideoPlayer
	VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___m_VideoPlayer_12;
	// UnityEngine.UI.RawImage ARUXAnimationManager::m_RawImage
	RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* ___m_RawImage_13;
	// System.Single ARUXAnimationManager::m_FadeOnDuration
	float ___m_FadeOnDuration_14;
	// System.Single ARUXAnimationManager::m_FadeOffDuration
	float ___m_FadeOffDuration_15;
	// UnityEngine.Color ARUXAnimationManager::m_AlphaWhite
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_AlphaWhite_16;
	// UnityEngine.Color ARUXAnimationManager::m_White
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_White_17;
	// UnityEngine.Color ARUXAnimationManager::m_TargetColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_TargetColor_18;
	// UnityEngine.Color ARUXAnimationManager::m_StartColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_StartColor_19;
	// UnityEngine.Color ARUXAnimationManager::m_LerpingColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_LerpingColor_20;
	// System.Boolean ARUXAnimationManager::m_FadeOn
	bool ___m_FadeOn_21;
	// System.Boolean ARUXAnimationManager::m_FadeOff
	bool ___m_FadeOff_22;
	// System.Boolean ARUXAnimationManager::m_Tweening
	bool ___m_Tweening_23;
	// System.Boolean ARUXAnimationManager::m_UsingARKitCoaching
	bool ___m_UsingARKitCoaching_24;
	// System.Single ARUXAnimationManager::m_TweenTime
	float ___m_TweenTime_25;
	// System.Single ARUXAnimationManager::m_TweenDuration
	float ___m_TweenDuration_26;
	// UnityEngine.Texture ARUXAnimationManager::m_Transparent
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Transparent_34;
	// UnityEngine.RenderTexture ARUXAnimationManager::m_RenderTexture
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_RenderTexture_35;
	// LocalizationManager ARUXAnimationManager::m_LocalizationManager
	LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* ___m_LocalizationManager_36;
	// System.Boolean ARUXAnimationManager::m_LocalizeText
	bool ___m_LocalizeText_37;
};

struct ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966_StaticFields
{
	// System.Action ARUXAnimationManager::onFadeOffComplete
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onFadeOffComplete_33;
};

// ARUXReasonsManager
struct ARUXReasonsManager_t7DE4754765B780C9987FC05832DE0F5447F2E7EE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean ARUXReasonsManager::m_ShowNotTrackingReasons
	bool ___m_ShowNotTrackingReasons_4;
	// TMPro.TMP_Text ARUXReasonsManager::m_ReasonDisplayText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_ReasonDisplayText_5;
	// UnityEngine.GameObject ARUXReasonsManager::m_ReasonParent
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_ReasonParent_6;
	// UnityEngine.UI.Image ARUXReasonsManager::m_ReasonIcon
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_ReasonIcon_7;
	// UnityEngine.Sprite ARUXReasonsManager::m_InitRelocalSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_InitRelocalSprite_8;
	// UnityEngine.Sprite ARUXReasonsManager::m_MotionSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_MotionSprite_9;
	// UnityEngine.Sprite ARUXReasonsManager::m_LightSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_LightSprite_10;
	// UnityEngine.Sprite ARUXReasonsManager::m_FeaturesSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_FeaturesSprite_11;
	// UnityEngine.Sprite ARUXReasonsManager::m_UnsupportedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_UnsupportedSprite_12;
	// UnityEngine.Sprite ARUXReasonsManager::m_NoneSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_NoneSprite_13;
	// LocalizationManager ARUXReasonsManager::m_LocalizationManager
	LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* ___m_LocalizationManager_14;
	// System.Boolean ARUXReasonsManager::m_LocalizeText
	bool ___m_LocalizeText_15;
	// UnityEngine.XR.ARSubsystems.NotTrackingReason ARUXReasonsManager::m_CurrentReason
	int32_t ___m_CurrentReason_16;
	// System.Boolean ARUXReasonsManager::m_SessionTracking
	bool ___m_SessionTracking_17;
};

// Cinemachine.CinemachineImpulseSource
struct CinemachineImpulseSource_t48D0DCECD3CD8432BF4442EB45399BBD383A1B83  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Cinemachine.CinemachineImpulseDefinition Cinemachine.CinemachineImpulseSource::m_ImpulseDefinition
	CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705* ___m_ImpulseDefinition_4;
	// UnityEngine.Vector3 Cinemachine.CinemachineImpulseSource::m_DefaultVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_DefaultVelocity_5;
};

// DemoPlayerLogic
struct DemoPlayerLogic_t41B19E2787D0BDDE54FA3FB7162E4254068A2549  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single DemoPlayerLogic::MOVEMENT_SPEED
	float ___MOVEMENT_SPEED_4;
	// System.Single DemoPlayerLogic::ROTATION_SPEED
	float ___ROTATION_SPEED_5;
	// System.Single DemoPlayerLogic::m_horizontalInput
	float ___m_horizontalInput_6;
	// System.Single DemoPlayerLogic::m_verticalInput
	float ___m_verticalInput_7;
	// UnityEngine.Vector3 DemoPlayerLogic::m_verticalMovement
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_verticalMovement_8;
	// UnityEngine.CharacterController DemoPlayerLogic::m_characterController
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___m_characterController_9;
	// UnityEngine.Animator DemoPlayerLogic::m_animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___m_animator_10;
	// Cinemachine.CinemachineImpulseSource DemoPlayerLogic::m_cinemachineImpulseSource
	CinemachineImpulseSource_t48D0DCECD3CD8432BF4442EB45399BBD383A1B83* ___m_cinemachineImpulseSource_11;
};

// DetectDistance
struct DetectDistance_t9FAB2A22AF4A39E12CA18E1C6A38640C5464AC50  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.ARFoundation.ARRaycastManager DetectDistance::m_RaycastManager
	ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* ___m_RaycastManager_4;
	// UnityEngine.Camera DetectDistance::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_6;
	// UnityEngine.Vector2 DetectDistance::m_Middle
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Middle_7;
	// UnityEngine.UI.Text DetectDistance::text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___text_9;
};

struct DetectDistance_t9FAB2A22AF4A39E12CA18E1C6A38640C5464AC50_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit> DetectDistance::s_Hits
	List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* ___s_Hits_5;
	// System.Single DetectDistance::m_PositionY
	float ___m_PositionY_8;
};

// DisableTrackedVisuals
struct DisableTrackedVisuals_t52589209FFC6682E859627672C2A5E7C3D8E963A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean DisableTrackedVisuals::m_DisableFeaturePoints
	bool ___m_DisableFeaturePoints_4;
	// System.Boolean DisableTrackedVisuals::m_DisablePlaneRendering
	bool ___m_DisablePlaneRendering_5;
	// UnityEngine.XR.ARFoundation.ARPointCloudManager DisableTrackedVisuals::m_PointCloudManager
	ARPointCloudManager_t28D1833BCE1A48657E504109A89A3B75D0AD7D9F* ___m_PointCloudManager_6;
	// UnityEngine.XR.ARFoundation.ARPlaneManager DisableTrackedVisuals::m_PlaneManager
	ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* ___m_PlaneManager_7;
};

// ImageTracking
struct ImageTracking_t1AC7FA07584DA88ECCD67B79C21A12B615A4DAAC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] ImageTracking::placeablePrefabs
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___placeablePrefabs_4;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject> ImageTracking::spawnedPrefabs
	Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE* ___spawnedPrefabs_5;
	// UnityEngine.XR.ARFoundation.ARTrackedImageManager ImageTracking::trackedImageManager
	ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* ___trackedImageManager_6;
	// TMPro.TextMeshProUGUI ImageTracking::text
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___text_7;
};

// InformationManager
struct InformationManager_tAF28A07274ECBF7093F42C4DFBF9925B8C5AACC8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct InformationManager_tAF28A07274ECBF7093F42C4DFBF9925B8C5AACC8_StaticFields
{
	// InformationManager InformationManager::m_instance
	InformationManager_tAF28A07274ECBF7093F42C4DFBF9925B8C5AACC8* ___m_instance_4;
	// InformationManager/OnItemAdded InformationManager::OnItemAddedEvent
	OnItemAdded_t2402AA9BA550CBE1A1C889D8AB22EAF722C7CB47* ___OnItemAddedEvent_5;
};

// ItemObject
struct ItemObject_t755B394AFC69522A556F5EBA9AD67B1D4E2D90C0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ItemData ItemObject::ItemData
	ItemData_t7FB0F9911AFA201D097B2B0D2353002ECE882538* ___ItemData_4;
};

// JsonHander
struct JsonHander_tF07AB89128AEFD1B804324FDC3B8C1D92907870D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject JsonHander::hander
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___hander_4;
	// JsonReader JsonHander::reader
	JsonReader_t1271C2DA1700C99E7C67FB6BD5FEE6030BAB5FC4* ___reader_5;
};

// JsonReader
struct JsonReader_t1271C2DA1700C99E7C67FB6BD5FEE6030BAB5FC4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.TextAsset JsonReader::TextJson
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___TextJson_4;
	// Building JsonReader::building
	Building_t950D5394E080624D7E96B158EF852EA16ADB3650* ___building_5;
};

// LocalizationManager
struct LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// LocalizationManager/SupportedLanguages LocalizationManager::CurrentLocalizedLanguage
	int32_t ___CurrentLocalizedLanguage_4;
	// System.String LocalizationManager::localizedInit
	String_t* ___localizedInit_18;
	// System.String LocalizationManager::localizedMotion
	String_t* ___localizedMotion_19;
	// System.String LocalizationManager::localizedLight
	String_t* ___localizedLight_20;
	// System.String LocalizationManager::localizedFeatures
	String_t* ___localizedFeatures_21;
	// System.String LocalizationManager::localizedUnsupported
	String_t* ___localizedUnsupported_22;
	// System.String LocalizationManager::localizedNone
	String_t* ___localizedNone_23;
	// System.String LocalizationManager::localizedMoveDevice
	String_t* ___localizedMoveDevice_24;
	// System.String LocalizationManager::localizedTapToPlace
	String_t* ___localizedTapToPlace_25;
	// System.String LocalizationManager::localizedBody
	String_t* ___localizedBody_26;
	// System.String LocalizationManager::localizedFace
	String_t* ___localizedFace_27;
	// System.String LocalizationManager::localizedImage
	String_t* ___localizedImage_28;
	// System.String LocalizationManager::localizedObject
	String_t* ___localizedObject_29;
	// System.Boolean LocalizationManager::m_ReasonsComplete
	bool ___m_ReasonsComplete_30;
	// TMPro.TMP_FontAsset LocalizationManager::m_SimplifiedChineseFont
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_SimplifiedChineseFont_31;
	// TMPro.TMP_FontAsset LocalizationManager::m_JapaneseFont
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_JapaneseFont_32;
	// TMPro.TMP_FontAsset LocalizationManager::m_KoreanFont
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_KoreanFont_33;
	// TMPro.TMP_FontAsset LocalizationManager::m_HindiFont
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_HindiFont_34;
	// TMPro.TMP_Text LocalizationManager::m_InstructionText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_InstructionText_35;
	// TMPro.TMP_Text LocalizationManager::m_ReasonText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_ReasonText_36;
};

// ModularBillBoard
struct ModularBillBoard_t5C2BFA11672ED08924996A3126DF7684C94B7DE5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform ModularBillBoard::ArCamera
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___ArCamera_4;
	// UnityEngine.GameObject ModularBillBoard::LandmarkIcon
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___LandmarkIcon_5;
	// UnityEngine.GameObject ModularBillBoard::LandmarkLeft
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___LandmarkLeft_6;
	// UnityEngine.GameObject ModularBillBoard::LandmarkRight
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___LandmarkRight_7;
	// UnityEngine.RectTransform ModularBillBoard::Mask
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___Mask_8;
	// UnityEngine.CanvasGroup ModularBillBoard::ContentCanvasGroup
	CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___ContentCanvasGroup_9;
	// UnityEngine.GameObject ModularBillBoard::Content
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Content_10;
	// System.Single ModularBillBoard::OpeningStarted
	float ___OpeningStarted_11;
	// System.Single ModularBillBoard::OpeningFinished
	float ___OpeningFinished_12;
	// ModularBillBoard/BillBoardState ModularBillBoard::mState
	int32_t ___mState_13;
	// System.Single ModularBillBoard::mCurrentRollOutTime
	float ___mCurrentRollOutTime_14;
	// System.Boolean ModularBillBoard::mHasBackgroundRolledOut
	bool ___mHasBackgroundRolledOut_15;
	// System.Single ModularBillBoard::mMinPositionY
	float ___mMinPositionY_16;
	// System.Single ModularBillBoard::mMaxPositionY
	float ___mMaxPositionY_17;
	// System.Single ModularBillBoard::mMinSizeY
	float ___mMinSizeY_18;
	// System.Single ModularBillBoard::mMaxSizeY
	float ___mMaxSizeY_19;
	// System.Single ModularBillBoard::mAlpha
	float ___mAlpha_21;
	// System.Single ModularBillBoard::mOpeningDistance
	float ___mOpeningDistance_22;
	// UnityEngine.Vector3 ModularBillBoard::mLandmarkLEnd
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___mLandmarkLEnd_23;
	// UnityEngine.Vector3 ModularBillBoard::mLandmarkLStart
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___mLandmarkLStart_24;
	// UnityEngine.Vector3 ModularBillBoard::mLandmarkREnd
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___mLandmarkREnd_25;
	// UnityEngine.Vector3 ModularBillBoard::mLandmarkRStart
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___mLandmarkRStart_26;
	// UnityEngine.Vector2 ModularBillBoard::mMaskStartSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___mMaskStartSize_27;
	// UnityEngine.Vector2 ModularBillBoard::mMaskEndSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___mMaskEndSize_28;
};

// ObjectPlacement
struct ObjectPlacement_t5A26C0CE7778C6C3F0DD9BC07EA4A6D4BC11D057  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 ObjectPlacement::objIndex
	int32_t ___objIndex_4;
	// UnityEngine.GameObject[] ObjectPlacement::virtual_objects
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___virtual_objects_5;
	// UnityEngine.GameObject[] ObjectPlacement::buttons
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___buttons_6;
	// UnityEngine.GameObject ObjectPlacement::placementIndicator
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___placementIndicator_7;
	// UnityEngine.XR.ARFoundation.ARSessionOrigin ObjectPlacement::arOrigin
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___arOrigin_8;
	// UnityEngine.Pose ObjectPlacement::placementPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___placementPose_9;
	// System.Boolean ObjectPlacement::placementPoseIsValid
	bool ___placementPoseIsValid_10;
	// System.Boolean ObjectPlacement::placementIndicatorEnabled
	bool ___placementIndicatorEnabled_11;
	// System.Boolean ObjectPlacement::isUIHidden
	bool ___isUIHidden_12;
};

// Orientation
struct Orientation_t002F5D617F6ACAEA24D962B1D599B05CD988C373  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera Orientation::m_WorldSpaceCanvasCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_WorldSpaceCanvasCamera_4;
	// UnityEngine.XR.ARFoundation.ARTrackedImage Orientation::m_Guid
	ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* ___m_Guid_5;
	// UnityEngine.Texture2D Orientation::m_DefaultTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_DefaultTexture_6;
	// UnityEngine.XR.ARFoundation.ARTrackedImageManager Orientation::m_TrackedImageManager
	ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* ___m_TrackedImageManager_7;
	// System.Boolean Orientation::markerTracked
	bool ___markerTracked_8;
};

struct Orientation_t002F5D617F6ACAEA24D962B1D599B05CD988C373_StaticFields
{
	// Orientation/ImageChanged Orientation::OnImageChangedEvent
	ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2* ___OnImageChangedEvent_9;
};

// PlaceObjectsOnPlane
struct PlaceObjectsOnPlane_t8CCA4A0919CFB134BDC1CFFED9EC2F23DCEB1933  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject PlaceObjectsOnPlane::m_PlacedPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PlacedPrefab_4;
	// UnityEngine.GameObject PlaceObjectsOnPlane::<spawnedObject>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CspawnedObjectU3Ek__BackingField_5;
	// UnityEngine.XR.ARFoundation.ARRaycastManager PlaceObjectsOnPlane::m_RaycastManager
	ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* ___m_RaycastManager_7;
	// System.Int32 PlaceObjectsOnPlane::m_MaxNumberOfObjectsToPlace
	int32_t ___m_MaxNumberOfObjectsToPlace_9;
	// System.Int32 PlaceObjectsOnPlane::m_NumberOfPlacedObjects
	int32_t ___m_NumberOfPlacedObjects_10;
	// System.Boolean PlaceObjectsOnPlane::m_CanReposition
	bool ___m_CanReposition_11;
};

struct PlaceObjectsOnPlane_t8CCA4A0919CFB134BDC1CFFED9EC2F23DCEB1933_StaticFields
{
	// System.Action PlaceObjectsOnPlane::onPlacedObject
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onPlacedObject_6;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit> PlaceObjectsOnPlane::s_Hits
	List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* ___s_Hits_8;
};

// SetNavigation
struct SetNavigation_t3B30AAEB2ECE7AAD37EE8197ACB96E7772680782  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera SetNavigation::TopDownCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___TopDownCamera_4;
	// UnityEngine.GameObject SetNavigation::NavTargetObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___NavTargetObject_5;
	// UnityEngine.AI.NavMeshPath SetNavigation::path
	NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* ___path_6;
	// UnityEngine.LineRenderer SetNavigation::line
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___line_7;
	// System.Boolean SetNavigation::lineToggle
	bool ___lineToggle_8;
	// TMPro.TMP_Dropdown SetNavigation::dropdown
	TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* ___dropdown_9;
	// UnityEngine.Transform SetNavigation::currDestination
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___currDestination_10;
	// UnityEngine.Transform[] SetNavigation::destinations
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___destinations_11;
	// UnityEngine.GameObject SetNavigation::indicator
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___indicator_12;
	// UnityEngine.UI.Text SetNavigation::text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___text_13;
	// System.Boolean SetNavigation::destinationSet
	bool ___destinationSet_14;
};

// UnityEngine.Localization.Tables.StringTable
struct StringTable_tDCAFD2558506AB46374D3CB6479C9F5B5F6591E1  : public DetailedLocalizationTable_1_t7452A24D1BB260F6AA42A101F4967D4910B3A6D9
{
};

// SyncPose
struct SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject SyncPose::m_ARSessionPosition
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_ARSessionPosition_4;
	// UnityEngine.Pose SyncPose::m_PhysicalOrigin
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_PhysicalOrigin_5;
	// UnityEngine.Pose SyncPose::m_PhysicalAnchor
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_PhysicalAnchor_6;
	// UnityEngine.Pose SyncPose::m_AROrigin
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_AROrigin_7;
	// UnityEngine.Pose SyncPose::m_ARAnchor
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_ARAnchor_8;
	// UnityEngine.GameObject SyncPose::testCube
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___testCube_9;
	// System.Boolean SyncPose::place
	bool ___place_10;
	// UnityEngine.GameObject SyncPose::PhysicalOrigin
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___PhysicalOrigin_11;
	// UnityEngine.GameObject SyncPose::PhysicalAnchor
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___PhysicalAnchor_12;
	// UnityEngine.XR.ARFoundation.ARTrackedImageManager SyncPose::m_TrackedImageManager
	ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* ___m_TrackedImageManager_13;
	// UnityEngine.XR.ARFoundation.ARPlaneManager SyncPose::m_PlaneManager
	ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* ___m_PlaneManager_14;
	// UnityEngine.UI.Text SyncPose::log
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___log_15;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UIManager
struct UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean UIManager::m_StartWithInstructionalUI
	bool ___m_StartWithInstructionalUI_4;
	// UIManager/InstructionUI UIManager::m_InstructionalUI
	int32_t ___m_InstructionalUI_5;
	// UIManager/InstructionGoals UIManager::m_InstructionalGoal
	int32_t ___m_InstructionalGoal_6;
	// System.Boolean UIManager::m_ShowSecondaryInstructionalUI
	bool ___m_ShowSecondaryInstructionalUI_7;
	// UIManager/InstructionUI UIManager::m_SecondaryInstructionUI
	int32_t ___m_SecondaryInstructionUI_8;
	// UIManager/InstructionGoals UIManager::m_SecondaryGoal
	int32_t ___m_SecondaryGoal_9;
	// System.Boolean UIManager::m_CoachingOverlayFallback
	bool ___m_CoachingOverlayFallback_10;
	// UnityEngine.GameObject UIManager::m_ARSessionOrigin
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_ARSessionOrigin_11;
	// System.Func`1<System.Boolean> UIManager::m_GoalReached
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___m_GoalReached_12;
	// System.Boolean UIManager::m_SecondaryGoalReached
	bool ___m_SecondaryGoalReached_13;
	// System.Collections.Generic.Queue`1<UXHandle> UIManager::m_UXOrderedQueue
	Queue_1_tBB833A4AC695DF02307E93FAAED0C78E3BD64A1D* ___m_UXOrderedQueue_14;
	// UXHandle UIManager::m_CurrentHandle
	UXHandle_tC4DD5984B1181FA802AC5B288C7616225F9B147F ___m_CurrentHandle_15;
	// System.Boolean UIManager::m_ProcessingInstructions
	bool ___m_ProcessingInstructions_16;
	// System.Boolean UIManager::m_PlacedObject
	bool ___m_PlacedObject_17;
	// UnityEngine.XR.ARFoundation.ARPlaneManager UIManager::m_PlaneManager
	ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* ___m_PlaneManager_18;
	// UnityEngine.XR.ARFoundation.ARFaceManager UIManager::m_FaceManager
	ARFaceManager_tE5955187C9D7C9C4C4139F522DA0DEA69EFCFD8F* ___m_FaceManager_19;
	// UnityEngine.XR.ARFoundation.ARHumanBodyManager UIManager::m_BodyManager
	ARHumanBodyManager_tA5246205B817A3D4A87BFC54FC018FB513867BFB* ___m_BodyManager_20;
	// UnityEngine.XR.ARFoundation.ARTrackedImageManager UIManager::m_ImageManager
	ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* ___m_ImageManager_21;
	// UnityEngine.XR.ARFoundation.ARTrackedObjectManager UIManager::m_ObjectManager
	ARTrackedObjectManager_tD667E7CCD95E9D25449BD578F256F728D8619FC7* ___m_ObjectManager_22;
	// ARUXAnimationManager UIManager::m_AnimationManager
	ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* ___m_AnimationManager_23;
	// System.Boolean UIManager::m_FadedOff
	bool ___m_FadedOff_24;
	// LocalizationManager UIManager::m_LocalizationManager
	LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* ___m_LocalizationManager_25;
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRDepthSubsystem,UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRDepthSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRPointCloud,UnityEngine.XR.ARFoundation.ARPointCloud>
struct ARTrackableManager_5_t9382BDA66FCF0DFF37645936368C21E5C47EB352  : public SubsystemLifecycleManager_3_t599D09700175D38B75899618C2BECAD5C0D8ACF0
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t9647896A9433E05337C4FDD2755A5C5C81C52F6C* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t9647896A9433E05337C4FDD2755A5C5C81C52F6C* ___m_PendingAdds_10;
};

struct ARTrackableManager_5_t9382BDA66FCF0DFF37645936368C21E5C47EB352_StaticFields
{
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_t9382BDA66FCF0DFF37645936368C21E5C47EB352* ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_tB9CD639EB4FE5EA0A8B417168BB9BD2D29AEE271* ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_tB9CD639EB4FE5EA0A8B417168BB9BD2D29AEE271* ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_tB9CD639EB4FE5EA0A8B417168BB9BD2D29AEE271* ___s_Removed_13;
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRFaceSubsystem,UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRFaceSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRFace,UnityEngine.XR.ARFoundation.ARFace>
struct ARTrackableManager_5_t2D42FCFDD2D69C41D2C2951F731A4F489A8605A4  : public SubsystemLifecycleManager_3_tC55963016DDC47B71E344157D85359DBB408C9D1
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t24DD0A560FD522E53E9814CD1A0AD91C3AD5FCCC* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t24DD0A560FD522E53E9814CD1A0AD91C3AD5FCCC* ___m_PendingAdds_10;
};

struct ARTrackableManager_5_t2D42FCFDD2D69C41D2C2951F731A4F489A8605A4_StaticFields
{
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_t2D42FCFDD2D69C41D2C2951F731A4F489A8605A4* ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_tA11EBED64210DD13BB4303415D948E6CD964AAF9* ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_tA11EBED64210DD13BB4303415D948E6CD964AAF9* ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_tA11EBED64210DD13BB4303415D948E6CD964AAF9* ___s_Removed_13;
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem,UnityEngine.XR.ARSubsystems.XRHumanBodySubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem/Provider,UnityEngine.XR.ARSubsystems.XRHumanBody,UnityEngine.XR.ARFoundation.ARHumanBody>
struct ARTrackableManager_5_t66B444EEF0E5B63A8B668B882FED811E693A0EC7  : public SubsystemLifecycleManager_3_tE5D97BF0378EDE42C77E6F18C16B28F56C3E386E
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t26E20BE1EB8A93CA83F951C6E2C3E93D20E1EA30* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t26E20BE1EB8A93CA83F951C6E2C3E93D20E1EA30* ___m_PendingAdds_10;
};

struct ARTrackableManager_5_t66B444EEF0E5B63A8B668B882FED811E693A0EC7_StaticFields
{
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_t66B444EEF0E5B63A8B668B882FED811E693A0EC7* ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_t64B1B4ABB789350AE017F3EAF4D3647AF59244C7* ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_t64B1B4ABB789350AE017F3EAF4D3647AF59244C7* ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_t64B1B4ABB789350AE017F3EAF4D3647AF59244C7* ___s_Removed_13;
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRTrackedImage,UnityEngine.XR.ARFoundation.ARTrackedImage>
struct ARTrackableManager_5_t1395957883D0FA3B96AA1B31F7D9D15573DA46F5  : public SubsystemLifecycleManager_3_t17DE984A5507806C3E89F7255F02922D8A7F6FD2
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t13B80190D7DD5A74B43A63EC63B97E079A0B2FC2* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t13B80190D7DD5A74B43A63EC63B97E079A0B2FC2* ___m_PendingAdds_10;
};

struct ARTrackableManager_5_t1395957883D0FA3B96AA1B31F7D9D15573DA46F5_StaticFields
{
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_t1395957883D0FA3B96AA1B31F7D9D15573DA46F5* ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ___s_Removed_13;
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRTrackedObject,UnityEngine.XR.ARFoundation.ARTrackedObject>
struct ARTrackableManager_5_t956DB46580AD764FF0CA6A96A175FDDEC57D74A5  : public SubsystemLifecycleManager_3_tFFD3CACE2B7A53A40E40FA52D115A65CB0F93F2C
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t7DA79BD2AB092CBEF953D24BF7B5C6154A0F04D2* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t7DA79BD2AB092CBEF953D24BF7B5C6154A0F04D2* ___m_PendingAdds_10;
};

struct ARTrackableManager_5_t956DB46580AD764FF0CA6A96A175FDDEC57D74A5_StaticFields
{
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_t956DB46580AD764FF0CA6A96A175FDDEC57D74A5* ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_tF1201F2F725A8AE529D436F38A4771FB6790F3C6* ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_tF1201F2F725A8AE529D436F38A4771FB6790F3C6* ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_tF1201F2F725A8AE529D436F38A4771FB6790F3C6* ___s_Removed_13;
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider,UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARFoundation.ARPlane>
struct ARTrackableManager_5_t1F9F85442D84B92DE0BC4C518768C0154AB69103  : public SubsystemLifecycleManager_3_t7FE0F4D0E7C0B4044705703906B62335E93547A6
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t26A4820BA6F451105138232941B7A9466E583A6C* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t26A4820BA6F451105138232941B7A9466E583A6C* ___m_PendingAdds_10;
};

struct ARTrackableManager_5_t1F9F85442D84B92DE0BC4C518768C0154AB69103_StaticFields
{
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_t1F9F85442D84B92DE0BC4C518768C0154AB69103* ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_t10BA05B555C92BD54800DFF82DCAAFC9DE44A077* ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_t10BA05B555C92BD54800DFF82DCAAFC9DE44A077* ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_t10BA05B555C92BD54800DFF82DCAAFC9DE44A077* ___s_Removed_13;
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRRaycast,UnityEngine.XR.ARFoundation.ARRaycast>
struct ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409  : public SubsystemLifecycleManager_3_tF871EF43DE89B354DB5832CC545E7E0EEF19DC8C
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD* ___m_PendingAdds_10;
};

struct ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409_StaticFields
{
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409* ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123* ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123* ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123* ___s_Removed_13;
};

// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARFoundation.ARPlane>
struct ARTrackable_2_t758FABA4E5998A283C2E8C792EE90E0FC3482341  : public ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0
{
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE ___U3CsessionRelativeDataU3Ek__BackingField_6;
};

// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,UnityEngine.XR.ARFoundation.ARTrackedImage>
struct ARTrackable_2_tB125D99BD46AD90D0AF463ECF67D57A69801B14A  : public ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0
{
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD ___U3CsessionRelativeDataU3Ek__BackingField_6;
};

// UnityEngine.XR.ARFoundation.ARSession
struct ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014  : public SubsystemLifecycleManager_3_t7AC7A0198786D712CE4FE49E3789EE14BCC2DFD5
{
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_AttemptUpdate
	bool ___m_AttemptUpdate_7;
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_MatchFrameRate
	bool ___m_MatchFrameRate_8;
	// UnityEngine.XR.ARFoundation.TrackingMode UnityEngine.XR.ARFoundation.ARSession::m_TrackingMode
	int32_t ___m_TrackingMode_9;
	// System.Int32 UnityEngine.XR.ARFoundation.ARSession::m_VSyncCount
	int32_t ___m_VSyncCount_11;
	// System.Int32 UnityEngine.XR.ARFoundation.ARSession::m_TargetFrameRate
	int32_t ___m_TargetFrameRate_12;
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_WasFrameRateSet
	bool ___m_WasFrameRateSet_13;
};

struct ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_StaticFields
{
	// System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs> UnityEngine.XR.ARFoundation.ARSession::stateChanged
	Action_1_t325C602D999E964DB72210E493635E83F8D6CE68* ___stateChanged_10;
	// UnityEngine.XR.ARFoundation.ARSessionState UnityEngine.XR.ARFoundation.ARSession::s_State
	int32_t ___s_State_14;
	// UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARFoundation.ARSession::s_NotTrackingReason
	int32_t ___s_NotTrackingReason_15;
	// UnityEngine.XR.ARSubsystems.SessionAvailability UnityEngine.XR.ARFoundation.ARSession::s_Availability
	int32_t ___s_Availability_16;
};

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F* ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_DummyData_13;
};

struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.XR.ARFoundation.ARFaceManager
struct ARFaceManager_tE5955187C9D7C9C4C4139F522DA0DEA69EFCFD8F  : public ARTrackableManager_5_t2D42FCFDD2D69C41D2C2951F731A4F489A8605A4
{
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARFaceManager::m_FacePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FacePrefab_14;
	// System.Int32 UnityEngine.XR.ARFoundation.ARFaceManager::m_MaximumFaceCount
	int32_t ___m_MaximumFaceCount_15;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARFacesChangedEventArgs> UnityEngine.XR.ARFoundation.ARFaceManager::facesChanged
	Action_1_t0A16CC637B74FE43A20D2784BCA3172E7D13789C* ___facesChanged_16;
};

// UnityEngine.XR.ARFoundation.ARHumanBodyManager
struct ARHumanBodyManager_tA5246205B817A3D4A87BFC54FC018FB513867BFB  : public ARTrackableManager_5_t66B444EEF0E5B63A8B668B882FED811E693A0EC7
{
	// System.Boolean UnityEngine.XR.ARFoundation.ARHumanBodyManager::m_Pose2D
	bool ___m_Pose2D_14;
	// System.Boolean UnityEngine.XR.ARFoundation.ARHumanBodyManager::m_Pose3D
	bool ___m_Pose3D_15;
	// System.Boolean UnityEngine.XR.ARFoundation.ARHumanBodyManager::m_Pose3DScaleEstimation
	bool ___m_Pose3DScaleEstimation_16;
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARHumanBodyManager::m_HumanBodyPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_HumanBodyPrefab_17;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARHumanBodiesChangedEventArgs> UnityEngine.XR.ARFoundation.ARHumanBodyManager::humanBodiesChanged
	Action_1_t78DC7DD8CB74A1B21E4419996B784C6E51821247* ___humanBodiesChanged_18;
};

// UnityEngine.XR.ARFoundation.ARPlane
struct ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0  : public ARTrackable_2_t758FABA4E5998A283C2E8C792EE90E0FC3482341
{
	// System.Single UnityEngine.XR.ARFoundation.ARPlane::m_VertexChangedThreshold
	float ___m_VertexChangedThreshold_7;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs> UnityEngine.XR.ARFoundation.ARPlane::boundaryChanged
	Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* ___boundaryChanged_8;
	// UnityEngine.XR.ARFoundation.ARPlane UnityEngine.XR.ARFoundation.ARPlane::<subsumedBy>k__BackingField
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___U3CsubsumedByU3Ek__BackingField_9;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARFoundation.ARPlane::m_Boundary
	NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 ___m_Boundary_10;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARFoundation.ARPlane::m_OldBoundary
	NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 ___m_OldBoundary_11;
	// System.Boolean UnityEngine.XR.ARFoundation.ARPlane::m_HasBoundaryChanged
	bool ___m_HasBoundaryChanged_12;
};

// UnityEngine.XR.ARFoundation.ARPlaneManager
struct ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928  : public ARTrackableManager_5_t1F9F85442D84B92DE0BC4C518768C0154AB69103
{
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARPlaneManager::m_PlanePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PlanePrefab_14;
	// UnityEngine.XR.ARSubsystems.PlaneDetectionMode UnityEngine.XR.ARFoundation.ARPlaneManager::m_DetectionMode
	int32_t ___m_DetectionMode_15;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARPlanesChangedEventArgs> UnityEngine.XR.ARFoundation.ARPlaneManager::planesChanged
	Action_1_t009680BF19017ECA60753C7F605CBD85C56C6560* ___planesChanged_16;
};

// UnityEngine.XR.ARFoundation.ARPointCloudManager
struct ARPointCloudManager_t28D1833BCE1A48657E504109A89A3B75D0AD7D9F  : public ARTrackableManager_5_t9382BDA66FCF0DFF37645936368C21E5C47EB352
{
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARPointCloudManager::m_PointCloudPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointCloudPrefab_14;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARPointCloudChangedEventArgs> UnityEngine.XR.ARFoundation.ARPointCloudManager::pointCloudsChanged
	Action_1_t053CCF2809F9B0B61EA8298154533C5FACB724F0* ___pointCloudsChanged_15;
};

// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44  : public ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409
{
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_RaycastPrefab_14;
	// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastViewportDelegate
	Func_4_t0755A61145E99905AC47DF85416091FB30758B8A* ___m_RaycastViewportDelegate_17;
	// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastRayDelegate
	Func_4_t917A5E0B468B7C0436CA84D065BEB6FC43C9B906* ___m_RaycastRayDelegate_18;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster> UnityEngine.XR.ARFoundation.ARRaycastManager::m_Raycasters
	List_1_t50405350B03FC84D28784364F500CB08B82435B5* ___m_Raycasters_19;
};

struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_StaticFields
{
	// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit> UnityEngine.XR.ARFoundation.ARRaycastManager::s_RaycastHitComparer
	Comparison_1_t0E0A9C99A8D29FBC5FA5ED9B9B2175A13C6578C0* ___s_RaycastHitComparer_15;
	// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::s_NativeRaycastHits
	List_1_t554F70DABEBFEED67B5400AB73777A6D987F0D36* ___s_NativeRaycastHits_16;
};

// UnityEngine.XR.ARFoundation.ARTrackedImage
struct ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2  : public ARTrackable_2_tB125D99BD46AD90D0AF463ECF67D57A69801B14A
{
	// UnityEngine.XR.ARSubsystems.XRReferenceImage UnityEngine.XR.ARFoundation.ARTrackedImage::<referenceImage>k__BackingField
	XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F ___U3CreferenceImageU3Ek__BackingField_7;
};

// UnityEngine.XR.ARFoundation.ARTrackedImageManager
struct ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4  : public ARTrackableManager_5_t1395957883D0FA3B96AA1B31F7D9D15573DA46F5
{
	// UnityEngine.XR.ARSubsystems.XRReferenceImageLibrary UnityEngine.XR.ARFoundation.ARTrackedImageManager::m_SerializedLibrary
	XRReferenceImageLibrary_t039233790C16E76ED95AABD95D9A35014081EA42* ___m_SerializedLibrary_14;
	// System.Int32 UnityEngine.XR.ARFoundation.ARTrackedImageManager::m_MaxNumberOfMovingImages
	int32_t ___m_MaxNumberOfMovingImages_15;
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARTrackedImageManager::m_TrackedImagePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_TrackedImagePrefab_16;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs> UnityEngine.XR.ARFoundation.ARTrackedImageManager::trackedImagesChanged
	Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* ___trackedImagesChanged_17;
	// System.Collections.Generic.Dictionary`2<System.Guid,UnityEngine.XR.ARSubsystems.XRReferenceImage> UnityEngine.XR.ARFoundation.ARTrackedImageManager::m_ReferenceImages
	Dictionary_2_t02017471B47A6BEB88F94FACE526F622A42AEE49* ___m_ReferenceImages_18;
};

// UnityEngine.XR.ARFoundation.ARTrackedObjectManager
struct ARTrackedObjectManager_tD667E7CCD95E9D25449BD578F256F728D8619FC7  : public ARTrackableManager_5_t956DB46580AD764FF0CA6A96A175FDDEC57D74A5
{
	// UnityEngine.XR.ARSubsystems.XRReferenceObjectLibrary UnityEngine.XR.ARFoundation.ARTrackedObjectManager::m_ReferenceLibrary
	XRReferenceObjectLibrary_t035F7FE264C24BC98A58CA2F24D047BB99BC8487* ___m_ReferenceLibrary_14;
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARTrackedObjectManager::m_TrackedObjectPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_TrackedObjectPrefab_15;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedObjectsChangedEventArgs> UnityEngine.XR.ARFoundation.ARTrackedObjectManager::trackedObjectsChanged
	Action_1_t34AAB95B35DF66496184F8421A8AC5F317B7D8AB* ___trackedObjectsChanged_16;
	// System.Int32 UnityEngine.XR.ARFoundation.ARTrackedObjectManager::m_ReferenceObjectCount
	int32_t ___m_ReferenceObjectCount_17;
	// System.Collections.Generic.Dictionary`2<System.Guid,UnityEngine.XR.ARSubsystems.XRReferenceObject> UnityEngine.XR.ARFoundation.ARTrackedObjectManager::m_ReferenceObjects
	Dictionary_2_t2A895F6D5510191F016166DBE21C821944195F02* ___m_ReferenceObjects_18;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// TMPro.TMP_Dropdown
struct TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform TMPro.TMP_Dropdown::m_Template
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Template_20;
	// TMPro.TMP_Text TMPro.TMP_Dropdown::m_CaptionText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_CaptionText_21;
	// UnityEngine.UI.Image TMPro.TMP_Dropdown::m_CaptionImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_CaptionImage_22;
	// UnityEngine.UI.Graphic TMPro.TMP_Dropdown::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_23;
	// TMPro.TMP_Text TMPro.TMP_Dropdown::m_ItemText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_ItemText_24;
	// UnityEngine.UI.Image TMPro.TMP_Dropdown::m_ItemImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_ItemImage_25;
	// System.Int32 TMPro.TMP_Dropdown::m_Value
	int32_t ___m_Value_26;
	// TMPro.TMP_Dropdown/OptionDataList TMPro.TMP_Dropdown::m_Options
	OptionDataList_tF66EA4801BFA499F010E6EFF89ED760BF4F0BEE1* ___m_Options_27;
	// TMPro.TMP_Dropdown/DropdownEvent TMPro.TMP_Dropdown::m_OnValueChanged
	DropdownEvent_tFD4609E80240BC887A6D31F9F3C252A8A6843E91* ___m_OnValueChanged_28;
	// System.Single TMPro.TMP_Dropdown::m_AlphaFadeSpeed
	float ___m_AlphaFadeSpeed_29;
	// UnityEngine.GameObject TMPro.TMP_Dropdown::m_Dropdown
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Dropdown_30;
	// UnityEngine.GameObject TMPro.TMP_Dropdown::m_Blocker
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Blocker_31;
	// System.Collections.Generic.List`1<TMPro.TMP_Dropdown/DropdownItem> TMPro.TMP_Dropdown::m_Items
	List_1_tA7EEECF976A6B4957450A4D235070C9324ED1A97* ___m_Items_32;
	// TMPro.TweenRunner`1<TMPro.FloatTween> TMPro.TMP_Dropdown::m_AlphaTweenRunner
	TweenRunner_1_tF277B20625C8B1939DC85508C4679C690757395E* ___m_AlphaTweenRunner_33;
	// System.Boolean TMPro.TMP_Dropdown::validTemplate
	bool ___validTemplate_34;
	// UnityEngine.Coroutine TMPro.TMP_Dropdown::m_Coroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_Coroutine_35;
};

struct TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504_StaticFields
{
	// TMPro.TMP_Dropdown/OptionData TMPro.TMP_Dropdown::s_NoOptionData
	OptionData_tFDFBCB4A5FB860E95AE46FDAC112DB4140A8525E* ___s_NoOptionData_36;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// UnityEngine.UI.RawImage
struct RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Texture UnityEngine.UI.RawImage::m_Texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_36;
	// UnityEngine.Rect UnityEngine.UI.RawImage::m_UVRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_UVRect_37;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_265;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_267;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_268;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_269;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_270;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_271;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_272;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_273;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_274;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_275;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_276;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_277;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_278;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_279;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_280;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_281;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_282;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_283;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_284;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_304;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Destination[]
struct DestinationU5BU5D_t329EC9350AEAB9CAAA3F6A174EB2081F19C72D31  : public RuntimeArray
{
	ALIGN_FIELD (8) Destination_t336101C9D43A1813C8DD5375BBEE228C8B09873F* m_Items[1];

	inline Destination_t336101C9D43A1813C8DD5375BBEE228C8B09873F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Destination_t336101C9D43A1813C8DD5375BBEE228C8B09873F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Destination_t336101C9D43A1813C8DD5375BBEE228C8B09873F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Destination_t336101C9D43A1813C8DD5375BBEE228C8B09873F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Destination_t336101C9D43A1813C8DD5375BBEE228C8B09873F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Destination_t336101C9D43A1813C8DD5375BBEE228C8B09873F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_gshared (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_gshared_inline (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_gshared (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m55BF5EC44D8DEC74D367B749B5B29C8F2A9CB957_gshared (Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB ValueCollection_GetEnumerator_m025EE28BE2F31676E08BC3D7C8E39D8232BDBBF8_gshared (ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFD8FAB8D9FF5EDF9AE3B14CF539A8A34AA9527A8_gshared (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_gshared_inline (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mBE11DA1DAFC756EB87E884AADC5EDC4BB72FB032_gshared (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonUtility_FromJson_TisRuntimeObject_m3A645CB2B6525E4A5835EA8A8CEBD39C7E2C444A_gshared (String_t* ___json0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARTrackable_2_get_trackingState_m1F2E7C7F4F841AC939EFBB154996C34E6A597CFD_gshared (ARTrackable_2_t3FCE71296784BB45D99340B5EAD5E6F7740DFA47* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m83B9B49A5CEF71BC8798C9C8B7989333626CF3E1_gshared (Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Capacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mC9CFD5CBE62E447D22A4A520EB27144DCD47BBDB_gshared (Action_1_t325C602D999E964DB72210E493635E83F8D6CE68* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`5<System.Object,System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::SetTrackablesActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_5_SetTrackablesActive_m3CE9DA89BBB624DFA1E99F45912A9DB75F036F67_gshared (ARTrackableManager_5_t2A93ECAB1D6B15321FBA6CB85604DC3895F98E92* __this, bool ___active0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`5<System.Object,System.Object,System.Object,UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::SetTrackablesActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackableManager_5_SetTrackablesActive_mD5DB5393ACA16C766508D8A44A2F604D9EE7D79D_gshared (ARTrackableManager_5_tCF3716950AB6E762DC60917DB4A4A6214010074D* __this, bool ___active0, const RuntimeMethod* method) ;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationStatus UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Object>::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AsyncOperationHandle_1_get_Status_m66615FF5C0E965DD89EC2878F815637D3D5C1672_gshared (AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74* __this, const RuntimeMethod* method) ;
// TObject UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Object>::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncOperationHandle_1_get_Result_m3BFABA5103704DD252ABCC2DDF622300E887773E_gshared (AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74* __this, const RuntimeMethod* method) ;
// TEntry UnityEngine.Localization.Tables.DetailedLocalizationTable`1<System.Object>::GetEntry(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DetailedLocalizationTable_1_GetEntry_m9DFC2F48FA24A49209C08302640AD5C9855081A8_gshared (DetailedLocalizationTable_1_tCC6C4C5BE6B1D44E1A283D50CA8E76F96E674A9C* __this, String_t* ___key0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, RuntimeObject** ___component0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m31071C3C6DF1FAD770119031BEA9315A2E3C1298_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Object>>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mCDB69DE3F4173FFB4DB9B58CCB99D53CA858AEB8_gshared (Action_1_t0A01E63A4339ABF30BF7C175CF376F7CE2BAC1A8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<System.Object>::add_Completed(System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationHandle_1_add_Completed_m0A29904183FF915F3F53B5A91D966447A51BA0D7_gshared (AsyncOperationHandle_1_tDD1D892D87C7A0C3189DD56DDB997AB1A2089A74* __this, Action_1_t0A01E63A4339ABF30BF7C175CF376F7CE2BAC1A8* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<UXHandle>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mB2870787C283872067414EBF51344C30B8002818_gshared (Queue_1_tBB833A4AC695DF02307E93FAAED0C78E3BD64A1D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<UXHandle>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m61E54D86D92BB85774BB35079316A552509D7DA9_gshared (Queue_1_tBB833A4AC695DF02307E93FAAED0C78E3BD64A1D* __this, UXHandle_tC4DD5984B1181FA802AC5B288C7616225F9B147F ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<UXHandle>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mC7231F573C4B3893A8E7B13375E854626F4AC12E_gshared_inline (Queue_1_tBB833A4AC695DF02307E93FAAED0C78E3BD64A1D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<UXHandle>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UXHandle_tC4DD5984B1181FA802AC5B288C7616225F9B147F Queue_1_Dequeue_m252F413FCB9BC2AB33C58E442A51680EC2F9260B_gshared (Queue_1_tBB833A4AC695DF02307E93FAAED0C78E3BD64A1D* __this, const RuntimeMethod* method) ;
// TResult System.Func`1<System.Boolean>::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_gshared_inline (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::TryGetComponent<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_TryGetComponent_TisRuntimeObject_m4D430300D2DFB9276DE980D78F60A05D271D3630_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, RuntimeObject** ___component0, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// UnityEngine.XR.ARFoundation.TrackableCollection`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5<System.Object,System.Object,System.Object,UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::get_trackables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableCollection_1_tFCC29DC30D1D7BF9DF5F84F8DF60BD67C7832EDB ARTrackableManager_5_get_trackables_m3F866C4F639EB2D24942998408E40FD24D2CF7B5_gshared (ARTrackableManager_5_tCF3716950AB6E762DC60917DB4A4A6214010074D* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.XR.ARFoundation.TrackableCollection`1<System.Object>::get_count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrackableCollection_1_get_count_mEC658F946B333A5D977CF8C07EF9918E35C6A288_gshared (TrackableCollection_1_tFCC29DC30D1D7BF9DF5F84F8DF60BD67C7832EDB* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARFoundation.TrackableCollection`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5<System.Object,System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRFace,System.Object>::get_trackables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableCollection_1_tFCC29DC30D1D7BF9DF5F84F8DF60BD67C7832EDB ARTrackableManager_5_get_trackables_m7AFA6F8E1DD9C80CB06BE955E8F797A8B086D96D_gshared (ARTrackableManager_5_t909CD904167EAD233803A6A9DB279E94219E1A0C* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARFoundation.TrackableCollection`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5<System.Object,System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRHumanBody,System.Object>::get_trackables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableCollection_1_tFCC29DC30D1D7BF9DF5F84F8DF60BD67C7832EDB ARTrackableManager_5_get_trackables_m199113B5B5248845FCA96D29641209AC2A51FFC6_gshared (ARTrackableManager_5_tAFB0AD849260B6C33E8F815788CCACE8E5D66AD8* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARFoundation.TrackableCollection`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5<System.Object,System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>::get_trackables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableCollection_1_tFCC29DC30D1D7BF9DF5F84F8DF60BD67C7832EDB ARTrackableManager_5_get_trackables_m37D539D7765C42FE95A740331D4DC34AD6EF8985_gshared (ARTrackableManager_5_t781ED5020888538CF6FC3405034BBF27F05FA2C2* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARFoundation.TrackableCollection`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5<System.Object,System.Object,System.Object,UnityEngine.XR.ARSubsystems.XRTrackedObject,System.Object>::get_trackables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableCollection_1_tFCC29DC30D1D7BF9DF5F84F8DF60BD67C7832EDB ARTrackableManager_5_get_trackables_m7392F2862EA8CA27F6F7D483F000472EDF65755E_gshared (ARTrackableManager_5_tED5068383CE6A1188850AE038754D6CF77999A53* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void ARCursor::UpdateCursor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCursor_UpdateCursor_mF10A97A53652C882FD9FFEE7DD963F3990861CDA (ARCursor_t8AAA875642042CDB3704727B8397F2676759BF0C* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::ViewportToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_ViewportToScreenPoint_m014E001B50C96CDE5AE5055B597DAA8DE7113023 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
inline void List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9 (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*, const RuntimeMethod*))List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.ARFoundation.ARRaycastManager::Raycast(UnityEngine.Vector2,System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>,UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC (ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPoint0, List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* ___hitResults1, int32_t ___trackableTypes2, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Count()
inline int32_t List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_inline (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*, const RuntimeMethod*))List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_gshared_inline)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
inline ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 (*) (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*, int32_t, const RuntimeMethod*))List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_gshared)(__this, ___index0, method);
}
// UnityEngine.Pose UnityEngine.XR.ARFoundation.ARRaycastHit::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD (ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void ARPlacement::UpdatePlacementPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlacement_UpdatePlacementPose_mAA1741FB6F809237598B63C2DA26C352D5937C38 (ARPlacement_tA1308C1A97DE34EB044FD63BB22F99D72F2A60E7* __this, const RuntimeMethod* method) ;
// System.Void ARPlacement::UpdatePlacementIndicator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlacement_UpdatePlacementIndicator_m40D712396478D71FB6A225F5A48A6722B48EF040 (ARPlacement_tA1308C1A97DE34EB044FD63BB22F99D72F2A60E7* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF (const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4 (int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Void ARPlacement::ARPlaceObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlacement_ARPlaceObject_m982B9B2F33AC4DDC2E37A83CD4C00D1CBC7CE76E (ARPlacement_tA1308C1A97DE34EB044FD63BB22F99D72F2A60E7* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetPositionAndRotation(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared)(___original0, ___position1, ___rotation2, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARTrackedImageManager>()
inline ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* Component_GetComponent_TisARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4_m3C5338CF883CA97951B07D446FEA5FC76D1FB683 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::Add(TKey,TValue)
inline void Dictionary_2_Add_mE5ED48EAB67073C645CD87B5E6ACA2E6BF7975AF (Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE* __this, String_t* ___key0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE*, String_t*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m55BF5EC44D8DEC74D367B749B5B29C8F2A9CB957 (Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m55BF5EC44D8DEC74D367B749B5B29C8F2A9CB957_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackedImageManager::add_trackedImagesChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackedImageManager_add_trackedImagesChanged_mB190015342B225144729100E0E38745CAFA7F438 (ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* __this, Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.ARTrackedImageManager::remove_trackedImagesChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackedImageManager_remove_trackedImagesChanged_mA754FAB732F3D5D803FA3A58A51E6487E75CCF34 (ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* __this, Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::get_added()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ARTrackedImagesChangedEventArgs_get_added_m2929CC85141D13AF05C1484AFB47E043C6D3EE35_inline (ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>::GetEnumerator()
inline Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B List_1_GetEnumerator_mC2DFE4EA31DDAB2DBBC626D816D4A43A3C07543C (List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B (*) (List_1_tFA730335FF46512E4245B2F46892CA318B394FAE*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARTrackedImage>::Dispose()
inline void Enumerator_Dispose_m045DD6390BC35283CF0F0F6260FCDBC5C88190A4 (Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARTrackedImage>::get_Current()
inline ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* Enumerator_get_Current_m8CC28190A4AC93DDE1B4FBD06D314A89D89291E9_inline (Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B* __this, const RuntimeMethod* method)
{
	return ((  ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* (*) (Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void ImageTracking::UpdateImage(UnityEngine.XR.ARFoundation.ARTrackedImage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTracking_UpdateImage_m34C65707C9429E72DDE79B5A2800710CF5750904 (ImageTracking_t1AC7FA07584DA88ECCD67B79C21A12B615A4DAAC* __this, ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* ___trackedImage0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARTrackedImage>::MoveNext()
inline bool Enumerator_MoveNext_mC8FCE26C6AC5FEC78CEAE18F477FCE8FCFAC8E80 (Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::get_updated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ARTrackedImagesChangedEventArgs_get_updated_m0C896E1C21EF35FF4B31B36563838EC2BA3CDFD1_inline (ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::get_removed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ARTrackedImagesChangedEventArgs_get_removed_m062CBBEF163BEE47A673F7B3BDC0DD1C6EAEA185_inline (ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::get_Item(TKey)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Dictionary_2_get_Item_m5A8F8BCAC50C5D5AB2722BBD41A340E4F6E47586 (Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// UnityEngine.XR.ARSubsystems.XRReferenceImage UnityEngine.XR.ARFoundation.ARTrackedImage::get_referenceImage()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline (ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.XR.ARSubsystems.XRReferenceImage::get_name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XRReferenceImage_get_name_mF1BE1E54AD911D48445B7DDEF2E27EA01E1E73BB_inline (XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::get_Values()
inline ValueCollection_tAA4B91D1FC6E3150E12FB777D5C1A8530004C5D1* Dictionary_2_get_Values_mCCC41FF246D656F5F707EF1522F1C279DAA5343F (Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_tAA4B91D1FC6E3150E12FB777D5C1A8530004C5D1* (*) (Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE*, const RuntimeMethod*))Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_t44F706C297E7C39CC8E9C45CF3D7CF388A1A9A05 ValueCollection_GetEnumerator_mBEBB5769586D6C240A83E6E9457137C4DD2C3921 (ValueCollection_tAA4B91D1FC6E3150E12FB777D5C1A8530004C5D1* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t44F706C297E7C39CC8E9C45CF3D7CF388A1A9A05 (*) (ValueCollection_tAA4B91D1FC6E3150E12FB777D5C1A8530004C5D1*, const RuntimeMethod*))ValueCollection_GetEnumerator_m025EE28BE2F31676E08BC3D7C8E39D8232BDBBF8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m696B5831B239FA49B7C6E9E829D5C2BA96B0E1AF (Enumerator_t44F706C297E7C39CC8E9C45CF3D7CF388A1A9A05* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t44F706C297E7C39CC8E9C45CF3D7CF388A1A9A05*, const RuntimeMethod*))Enumerator_Dispose_mFD8FAB8D9FF5EDF9AE3B14CF539A8A34AA9527A8_gshared)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,UnityEngine.GameObject>::get_Current()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Enumerator_get_Current_mD7296BB33D16F06FD06E6077D093543842DCAE4F_inline (Enumerator_t44F706C297E7C39CC8E9C45CF3D7CF388A1A9A05* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Enumerator_t44F706C297E7C39CC8E9C45CF3D7CF388A1A9A05*, const RuntimeMethod*))Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_gshared_inline)(__this, method);
}
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_m82EA4A043BD1FC4DB303D820966EBFBD9916A134 (Enumerator_t44F706C297E7C39CC8E9C45CF3D7CF388A1A9A05* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t44F706C297E7C39CC8E9C45CF3D7CF388A1A9A05*, const RuntimeMethod*))Enumerator_MoveNext_mBE11DA1DAFC756EB87E884AADC5EDC4BB72FB032_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>::.ctor()
inline void Dictionary_2__ctor_m85AB837A51705B9DF96923F388345B9461B9882B (Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Building::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Building__ctor_m1966393898763C921095D832800266FB5532893F (Building_t950D5394E080624D7E96B158EF852EA16ADB3650* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.TextAsset::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9 (TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* __this, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<Building>(System.String)
inline Building_t950D5394E080624D7E96B158EF852EA16ADB3650* JsonUtility_FromJson_TisBuilding_t950D5394E080624D7E96B158EF852EA16ADB3650_mB3612C3A0AF9AD0EAA3E70C2B5DBDD41143D186C (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  Building_t950D5394E080624D7E96B158EF852EA16ADB3650* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m3A645CB2B6525E4A5835EA8A8CEBD39C7E2C444A_gshared)(___json0, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void InformationManager::CreateSingleton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InformationManager_CreateSingleton_m72C2BF140262C8443F75A6D748CF76E2485F8166 (InformationManager_tAF28A07274ECBF7093F42C4DFBF9925B8C5AACC8* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void ModularBillBoard::CalculateDerivedValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModularBillBoard_CalculateDerivedValues_m304586089018E377063F464282F6F742413D23A4 (ModularBillBoard_t5C2BFA11672ED08924996A3126DF7684C94B7DE5* __this, const RuntimeMethod* method) ;
// System.Void ModularBillBoard::CalculateMaskSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModularBillBoard_CalculateMaskSize_m205ED3891CC3D928E62D739C5F22FD3318B3A725 (ModularBillBoard_t5C2BFA11672ED08924996A3126DF7684C94B7DE5* __this, const RuntimeMethod* method) ;
// System.Void ModularBillBoard::CalculateLandmarkPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModularBillBoard_CalculateLandmarkPosition_mF18B8B744648A58A46029E7EF14BDA8A7AAE1A88 (ModularBillBoard_t5C2BFA11672ED08924996A3126DF7684C94B7DE5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void ModularBillBoard::FullyOpened()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModularBillBoard_FullyOpened_mC5A097D00A64AACA7E211727111B547BB1B5E56F (ModularBillBoard_t5C2BFA11672ED08924996A3126DF7684C94B7DE5* __this, const RuntimeMethod* method) ;
// System.Void ModularBillBoard::Closed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModularBillBoard_Closed_m5F5017F6FA1664B16102CE6B33B2E178A7A4231B (ModularBillBoard_t5C2BFA11672ED08924996A3126DF7684C94B7DE5* __this, const RuntimeMethod* method) ;
// System.Void ModularBillBoard::Opening(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModularBillBoard_Opening_m89F36DB21F8B71B0248CDA19FEEDDF920A75BFDD (ModularBillBoard_t5C2BFA11672ED08924996A3126DF7684C94B7DE5* __this, float ___currentDistanceFromArCamera0, const RuntimeMethod* method) ;
// System.Void ModularBillBoard::SwitchtoOpening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModularBillBoard_SwitchtoOpening_m581BAED245A45CC90E55E1CF1F81F7052728353B (ModularBillBoard_t5C2BFA11672ED08924996A3126DF7684C94B7DE5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::Lerp(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Lerp_mF3BD6827807680A529E800FD027734D40A3597E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void ModularBillBoard::SwitchToClosed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModularBillBoard_SwitchToClosed_mBA4CA0822C9BEA0707399D099A2AD8A257D7F7DD (ModularBillBoard_t5C2BFA11672ED08924996A3126DF7684C94B7DE5* __this, const RuntimeMethod* method) ;
// System.Void ModularBillBoard::SwitchedToOpen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModularBillBoard_SwitchedToOpen_m840CA75958E7CA851E582EDF57625E0EE5902DE3 (ModularBillBoard_t5C2BFA11672ED08924996A3126DF7684C94B7DE5* __this, const RuntimeMethod* method) ;
// System.Void ModularBillBoard::RollOutTheBackgroundForContent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModularBillBoard_RollOutTheBackgroundForContent_m2C8A18BF0D68113A6DB6F9AAEC8C4E594E30C251 (ModularBillBoard_t5C2BFA11672ED08924996A3126DF7684C94B7DE5* __this, const RuntimeMethod* method) ;
// System.Void ModularBillBoard::TurnContentVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModularBillBoard_TurnContentVisible_mE6D2A6CB926227C3E05C1682760D1EE7494750CC (ModularBillBoard_t5C2BFA11672ED08924996A3126DF7684C94B7DE5* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Void UnityEngine.CanvasGroup::set_alpha(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<UnityEngine.XR.ARFoundation.ARSessionOrigin>()
inline ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* Object_FindObjectOfType_TisARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3_mEEB662CEA43CB4E61FD53EDF4E687BEC8087F5BC (const RuntimeMethod* method)
{
	return ((  ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// System.Void ObjectPlacement::UpdatePlacementPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPlacement_UpdatePlacementPose_mED4E6199C0762ACD2191133FCB74F91213A33C7D (ObjectPlacement_t5A26C0CE7778C6C3F0DD9BC07EA4A6D4BC11D057* __this, const RuntimeMethod* method) ;
// System.Void ObjectPlacement::UpdatePlacementIndicator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPlacement_UpdatePlacementIndicator_m4158AD46753A2C89C3624E27F1A93038C707E417 (ObjectPlacement_t5A26C0CE7778C6C3F0DD9BC07EA4A6D4BC11D057* __this, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* EventSystem_get_current_mD15EA86304E070D175EF359A051A7DB807CA26C0 (const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_currentSelectedGameObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_current_m6D76274A65CF75DD2AE6CAC2A1DDADB39C184C66 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARRaycastManager>()
inline ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8 (const RuntimeMethod* method) ;
// System.Void Orientation/ImageChanged::Invoke(UnityEngine.XR.ARFoundation.ARTrackedImage)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageChanged_Invoke_m6E37719628FCADA3B3B14F4FF3CE90A7B9FF43AF_inline (ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2* __this, ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* ___item0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void Orientation::UpdateInfo(UnityEngine.XR.ARFoundation.ARTrackedImage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Orientation_UpdateInfo_m4DBCC6A2B022FFB014CE32366B3FF0EF2DAE9510 (Orientation_t002F5D617F6ACAEA24D962B1D599B05CD988C373* __this, ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* ___trackedImage0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.Canvas>()
inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* Component_GetComponentInChildren_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m287ADF5F07E86A6244D9ECA16D1D0E5D6EE8EC18 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// UnityEngine.Camera Orientation::get_worldSpaceCanvasCamera()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Orientation_get_worldSpaceCanvasCamera_m0FAE5582CCE1F14386D58417BF0AB144AA38C5FC_inline (Orientation_t002F5D617F6ACAEA24D962B1D599B05CD988C373* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Canvas::set_worldCamera(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Canvas_set_worldCamera_m007F7DABDB5A3A6BFB043E3500DA82A4D936EDD4 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,UnityEngine.XR.ARFoundation.ARTrackedImage>::get_trackingState()
inline int32_t ARTrackable_2_get_trackingState_m7A60B7D905DBE9E2541B4087F0E6D56C8E4849CF (ARTrackable_2_tB125D99BD46AD90D0AF463ECF67D57A69801B14A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ARTrackable_2_tB125D99BD46AD90D0AF463ECF67D57A69801B14A*, const RuntimeMethod*))ARTrackable_2_get_trackingState_m1F2E7C7F4F841AC939EFBB154996C34E6A597CFD_gshared)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.XR.ARFoundation.ARTrackedImage::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ARTrackedImage_get_size_mAC20A0ECB99C7502138BA134686286B3C126D6F9 (ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* GameObject_GetComponentInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mA0B8F1113E349AEE09127AE5E71A48872B7AC750 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture2D UnityEngine.XR.ARSubsystems.XRReferenceImage::get_texture()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* XRReferenceImage_get_texture_mEC132411644C747C782F41A32A97C95B306D0891_inline (XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture2D Orientation::get_defaultTexture()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* Orientation_get_defaultTexture_m866CC0318D5AAA45F0D2BCCB8999FA3E43A378B8_inline (Orientation_t002F5D617F6ACAEA24D962B1D599B05CD988C373* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value0, const RuntimeMethod* method) ;
// System.Void Orientation::set_ImageGuid(UnityEngine.XR.ARFoundation.ARTrackedImage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Orientation_set_ImageGuid_m7D28CD36A256F3090D8428554930760EBBCF5B45 (Orientation_t002F5D617F6ACAEA24D962B1D599B05CD988C373* __this, ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARPlaneManager>()
inline ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* Component_GetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m668A6CC15F573ABC389E612A2423599B5ADDC2EF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void SyncPose::SetPhysicalOrigin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncPose_SetPhysicalOrigin_m1CC213AFC133135A5DC55625696835D15A88B7F7 (SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD* __this, const RuntimeMethod* method) ;
// System.Void SyncPose::SetPhysicalAnchor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncPose_SetPhysicalAnchor_m21A934670D3F46491079214CDFE340BE39E10577 (SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD* __this, const RuntimeMethod* method) ;
// System.Void SyncPose::SetAROrigin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncPose_SetAROrigin_mEF3524215DB97CD09D6F04220A983520F76195C7 (SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject SyncPose::get_ARSessionPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* SyncPose_get_ARSessionPosition_mB984B77604ADF6C1F07661D63A2CF49FAA1DE92F_inline (SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD* __this, const RuntimeMethod* method) ;
// System.Void Orientation/ImageChanged::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageChanged__ctor_mE62DECF7ADBE84C0201944714D72757042E9F660 (ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Orientation::add_OnImageChangedEvent(Orientation/ImageChanged)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Orientation_add_OnImageChangedEvent_m9D32EA8114D10B17CB33D9EB764F2573E365C974 (ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2* ___value0, const RuntimeMethod* method) ;
// System.Void Orientation::remove_OnImageChangedEvent(Orientation/ImageChanged)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Orientation_remove_OnImageChangedEvent_m4B05EE708C003F257CEC2B9A2EA187ABB04287DE (ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2* ___value0, const RuntimeMethod* method) ;
// System.Void SyncPose::UpdateInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncPose_UpdateInfo_mCE2ED161532C84D29D9F2A7CABBFC640DB0AA330 (SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* GameObject_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m25C454992279B47B682946D9EAE5386D11B05730 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// System.Void SyncPose::SyncOrientation(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncPose_SyncOrientation_m52DDB91E6172CEF9A99D5428850CD6A7E1FD329C (SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___offset_10, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___offset_21, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___anchor2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARPlaneManager::get_planePrefab()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ARPlaneManager_get_planePrefab_mD1AE647924733F69F5446087BF5BFD4EEB4EF2C2_inline (ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* __this, const RuntimeMethod* method) ;
// System.Void SyncPose::UpdateInfo(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncPose_UpdateInfo_m8E7F6D1B9CE9532E5CEF35EF39242CE875733C78 (SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___cube0, const RuntimeMethod* method) ;
// System.String UnityEngine.Vector3::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Quaternion::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Quaternion_ToString_mC5BD5DEF60FCA4A38924462A5C4440ECFCF934C4 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// System.Single DetectDistance::get_PositionY()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float DetectDistance_get_PositionY_m7DFF1181DA445651E498E07076FEB4F3DFBE722B_inline (const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.CharacterController>()
inline CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<Cinemachine.CinemachineImpulseSource>()
inline CinemachineImpulseSource_t48D0DCECD3CD8432BF4442EB45399BBD383A1B83* Component_GetComponent_TisCinemachineImpulseSource_t48D0DCECD3CD8432BF4442EB45399BBD383A1B83_m0C6F2D42D616B2110B3882733B14B88735BB4E89 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CinemachineImpulseSource_t48D0DCECD3CD8432BF4442EB45399BBD383A1B83* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisRaw_m86E17FE275E361C5DFB7CD42C3C404177B6689AA (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.CollisionFlags UnityEngine.CharacterController::Move(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4 (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___motion0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis0, float ___angle1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AI.NavMeshPath::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshPath__ctor_mEA40BFC2492814FFC97A71C3AEC2154A9415C37F (NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.LineRenderer>()
inline LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void SetNavigation::PopulateList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetNavigation_PopulateList_mC6DF1465815A7D09CA1C4946FA7FA663FF9BE7EA (SetNavigation_t3B30AAEB2ECE7AAD37EE8197ACB96E7772680782* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AI.NavMesh::CalculatePath(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32,UnityEngine.AI.NavMeshPath)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMesh_CalculatePath_m2D0FF786CDEA88E7490ABA4582967087006F6E5E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___sourcePosition0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition1, int32_t ___areaMask2, NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* ___path3, const RuntimeMethod* method) ;
// UnityEngine.Vector3[] UnityEngine.AI.NavMeshPath::get_corners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* NavMeshPath_get_corners_m469237DE430A001BE7050BEF5D05A20B94D76F3E (NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::set_positionCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::SetPositions(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPositions_m7F7B7B54428437D0BF5256D4C82F92180B577B02 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___positions0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void SetNavigation::RemoveArrowAndCollider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetNavigation_RemoveArrowAndCollider_m51745346B5407A28D8114EB4C0BB2B0FDA084750 (SetNavigation_t3B30AAEB2ECE7AAD37EE8197ACB96E7772680782* __this, const RuntimeMethod* method) ;
// System.Void SetNavigation::SetDestination(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetNavigation_SetDestination_m1C43808E7F990803A5D8F644ACE43454867F212F (SetNavigation_t3B30AAEB2ECE7AAD37EE8197ACB96E7772680782* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TMPro.TMP_Dropdown/OptionData> TMPro.TMP_Dropdown::get_options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5 (TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<TMPro.TMP_Dropdown/OptionData>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mF07727D454FABD5EF479AEDE1687BAB0A7458F4B (List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Void TMPro.TMP_Dropdown::SetValueWithoutNotify(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Dropdown_SetValueWithoutNotify_m619A7D38D1EBCCA60EB1F5891FAD9FD0FB4839FD (TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* __this, int32_t ___input0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void TMPro.TMP_Dropdown::AddOptions(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Dropdown_AddOptions_m6EB4E175FE6B5555BDC2C31EFBCC3B115DE85FF5 (TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___options0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Dropdown::ClearOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Dropdown_ClearOptions_m9888C23BC3033268E5C2D8613C0854661E7BDEB5 (TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer>()
inline ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* Component_GetComponent_TisARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F_m41229EDC62D1149A73F81E7B0BE27B4C1C293A01 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARPlane>()
inline ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* Component_GetComponent_TisARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0_m8005DAC7F65600404981B996A714B5C7D29A359F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m83B9B49A5CEF71BC8798C9C8B7989333626CF3E1 (Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m83B9B49A5CEF71BC8798C9C8B7989333626CF3E1_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.ARFoundation.ARPlane::add_boundaryChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlane_add_boundaryChanged_m6A9CA2ADF4742C004EF7BCFD48A7C820320616AA (ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* __this, Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.ARPlane::remove_boundaryChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlane_remove_boundaryChanged_m6F71EEF2CD3C71AF069C5FE6CD993906BD8A9A10 (ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* __this, Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Mesh UnityEngine.XR.ARFoundation.ARPlaneMeshVisualizer::get_mesh()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ARPlaneMeshVisualizer_get_mesh_m6C1A730CECE8AE0A0549ED615AB3B3D66E4A0FD8_inline (ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* __this, const RuntimeMethod* method) ;
// System.Void ARFeatheredPlaneMeshVisualizer::GenerateBoundaryUVs(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_GenerateBoundaryUVs_mF756D3C1F7925A69CD8C7C8CCE56209AB321FEF5 (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mesh::get_vertexCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh_get_vertexCount_mB7BE0340AAF272933068D830C8E711FC8978E12C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
inline void List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Capacity()
inline int32_t List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Capacity(System.Int32)
inline void List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, const RuntimeMethod*))List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE_gshared)(__this, ___value0, method);
}
// System.Void UnityEngine.Mesh::GetVertices(System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_GetVertices_m5BF8777074E383AD8C4B9974D27E4AB52963D92E (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___vertices0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, const RuntimeMethod*))List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared)(__this, ___index0, method);
}
// System.Single ARFeatheredPlaneMeshVisualizer::get_featheringWidth()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ARFeatheredPlaneMeshVisualizer_get_featheringWidth_m14D3A8BE3E9A745E6FD525B19ADDC892B8399B4D_inline (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
inline void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline)(__this, ___item0, method);
}
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::Set(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Set_m1C7E543216734FB513F9CEBA44C50E6FC2AFD49D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___newX0, float ___newY1, float ___newZ2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::SetUVs(System.Int32,System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetUVs_mFEE20B5977AA358DAFA31CF621BBC4B0247789B2 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, int32_t ___channel0, List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___uvs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::UploadMeshData(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_UploadMeshData_mE4C94F263DAA8CAC1641FE137E1CE7D3F09396EB (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, bool ___markNoLongerReadable0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Video.VideoPlayer::get_isPrepared()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_isPrepared_mF2F3AD27BE0FD06695EE9DEE762B68F431E15767 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mCE0CF50E59713C5A8F6AAC2C6648CF0EDBEEB27B_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Color::op_Equality(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Equality_m3A255F888F9300ABB36ED2BC0640CFFDAAEFED2F_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.Video.VideoPlayer::get_targetTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* VideoPlayer_get_targetTexture_m1022F791F3DD8FB6BE47E73C2DB25A5B4E768F8D (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::DiscardContents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_DiscardContents_m6C446FB1B7B57334FAD8847DB03E983975F38B32 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_Release_mE7399D6187A0E38945D2913D0FFB41247143AB1E (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m066854D684B6042B266D306E8E012D2C6C1787BE (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::set_clip(UnityEngine.Video.VideoClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_clip_m85C09C15E184E9AAE117C1A534D8AC25175C8DC9 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Play_m8E99607F39F1D214BDD704F3E130DD2418787ACE (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Boolean ARKitCoachingOverlay::get_supported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARKitCoachingOverlay_get_supported_m27AB80DB980F577354AB7CF467F79DADE310E7DB (ARKitCoachingOverlay_t36497D45FFD0ECB9ADA3238540945D2305076A62* __this, const RuntimeMethod* method) ;
// System.Void ARKitCoachingOverlay::ActivateCoaching(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitCoachingOverlay_ActivateCoaching_m37C38E140603D61E3AD3B66BFCDEF08CADB6FA29 (ARKitCoachingOverlay_t36497D45FFD0ECB9ADA3238540945D2305076A62* __this, bool ___animated0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Stop_m1F2DE73183E042998140A56FF69432A200430BF1 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void ARKitCoachingOverlay::DisableCoaching(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitCoachingOverlay_DisableCoaching_m1F3FF03DF675DF154E4662927078A7F4497FA5EE (ARKitCoachingOverlay_t36497D45FFD0ECB9ADA3238540945D2305076A62* __this, bool ___animated0, const RuntimeMethod* method) ;
// UnityEngine.Video.VideoClip UnityEngine.Video.VideoPlayer::get_clip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* VideoPlayer_get_clip_m08BCE17C4E685C87151B418AA3CE88294F6A96E9 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mC9CFD5CBE62E447D22A4A520EB27144DCD47BBDB (Action_1_t325C602D999E964DB72210E493635E83F8D6CE68* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t325C602D999E964DB72210E493635E83F8D6CE68*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mC9CFD5CBE62E447D22A4A520EB27144DCD47BBDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.ARFoundation.ARSession::add_stateChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSession_add_stateChanged_m0642A401BE75EA8B955A0001F4A1D39865D83993 (Action_1_t325C602D999E964DB72210E493635E83F8D6CE68* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.ARSession::remove_stateChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSession_remove_stateChanged_m7F02CE05D9391A517867FBAD816FEF069203B924 (Action_1_t325C602D999E964DB72210E493635E83F8D6CE68* ___value0, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARFoundation.ARSession::get_notTrackingReason()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ARSession_get_notTrackingReason_m9E98D9ED3B14D277DAE8A8B622556ED1C8F22A65_inline (const RuntimeMethod* method) ;
// System.Void ARUXReasonsManager::ShowReason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUXReasonsManager_ShowReason_m2B13F16D58D03FF837A718D7F458448DC8FF5474 (ARUXReasonsManager_t7DE4754765B780C9987FC05832DE0F5447F2E7EE* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARFoundation.ARSessionState UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs::get_state()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ARSessionStateChangedEventArgs_get_state_mC0A6FB4AF08C068BFD5D9730F60215BE662A950B_inline (ARSessionStateChangedEventArgs_tC31BD123D6B4F6168FB246762E79AB33962AE822* __this, const RuntimeMethod* method) ;
// System.Void ARUXReasonsManager::SetReason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUXReasonsManager_SetReason_m69E4CF60F692B697AE740A941D0D6D66F52FC2AD (ARUXReasonsManager_t7DE4754765B780C9987FC05832DE0F5447F2E7EE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void PlaceObjectsOnPlane::add_onPlacedObject(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceObjectsOnPlane_add_onPlacedObject_m9A0A86212A20C8995FED654E80DEDAAFCAFE16B8 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Void PlaceObjectsOnPlane::remove_onPlacedObject(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceObjectsOnPlane_remove_onPlacedObject_mB8DD945B1D3BD5188AFDFCA46798A0EF48B53C8B (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRDepthSubsystem,UnityEngine.XR.ARSubsystems.XRDepthSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRDepthSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRPointCloud,UnityEngine.XR.ARFoundation.ARPointCloud>::SetTrackablesActive(System.Boolean)
inline void ARTrackableManager_5_SetTrackablesActive_m99BB57C262918F8CF69D96238A992FF84E23E14F (ARTrackableManager_5_t9382BDA66FCF0DFF37645936368C21E5C47EB352* __this, bool ___active0, const RuntimeMethod* method)
{
	((  void (*) (ARTrackableManager_5_t9382BDA66FCF0DFF37645936368C21E5C47EB352*, bool, const RuntimeMethod*))ARTrackableManager_5_SetTrackablesActive_m3CE9DA89BBB624DFA1E99F45912A9DB75F036F67_gshared)(__this, ___active0, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider,UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARFoundation.ARPlane>::SetTrackablesActive(System.Boolean)
inline void ARTrackableManager_5_SetTrackablesActive_mA9156D2D519E56D0AC7D9936DC844885876860D1 (ARTrackableManager_5_t1F9F85442D84B92DE0BC4C518768C0154AB69103* __this, bool ___active0, const RuntimeMethod* method)
{
	((  void (*) (ARTrackableManager_5_t1F9F85442D84B92DE0BC4C518768C0154AB69103*, bool, const RuntimeMethod*))ARTrackableManager_5_SetTrackablesActive_mD5DB5393ACA16C766508D8A44A2F604D9EE7D79D_gshared)(__this, ___active0, method);
}
// System.Void LocalizationManager/<Start>d__55::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__55__ctor_m81821C4038CA594FE551B7B68BE950CDD386B475 (U3CStartU3Ed__55_tDA4619B76EF3AD96E8F2A1702B0A7AE8D9718513* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationStatus UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.Localization.Tables.StringTable>::get_Status()
inline int32_t AsyncOperationHandle_1_get_Status_mFCA04DFB2CE7D7919F2578FA192B8517836E9680 (AsyncOperationHandle_1_tC737C3B1E3DD319BBC38072DFCBF5B0369708A6D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AsyncOperationHandle_1_tC737C3B1E3DD319BBC38072DFCBF5B0369708A6D*, const RuntimeMethod*))AsyncOperationHandle_1_get_Status_m66615FF5C0E965DD89EC2878F815637D3D5C1672_gshared)(__this, method);
}
// TObject UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.Localization.Tables.StringTable>::get_Result()
inline StringTable_tDCAFD2558506AB46374D3CB6479C9F5B5F6591E1* AsyncOperationHandle_1_get_Result_m087C948BD99A2DCBD9C529FF2FCDE8985A9CF1A0 (AsyncOperationHandle_1_tC737C3B1E3DD319BBC38072DFCBF5B0369708A6D* __this, const RuntimeMethod* method)
{
	return ((  StringTable_tDCAFD2558506AB46374D3CB6479C9F5B5F6591E1* (*) (AsyncOperationHandle_1_tC737C3B1E3DD319BBC38072DFCBF5B0369708A6D*, const RuntimeMethod*))AsyncOperationHandle_1_get_Result_m3BFABA5103704DD252ABCC2DDF622300E887773E_gshared)(__this, method);
}
// TEntry UnityEngine.Localization.Tables.DetailedLocalizationTable`1<UnityEngine.Localization.Tables.StringTableEntry>::GetEntry(System.String)
inline StringTableEntry_tEB17D923B5599B343F7E00DA6C4333AE8F38723C* DetailedLocalizationTable_1_GetEntry_m8B5E2D9865475803BFA283F7DA7BDF130E4F33E1 (DetailedLocalizationTable_1_t7452A24D1BB260F6AA42A101F4967D4910B3A6D9* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  StringTableEntry_tEB17D923B5599B343F7E00DA6C4333AE8F38723C* (*) (DetailedLocalizationTable_1_t7452A24D1BB260F6AA42A101F4967D4910B3A6D9*, String_t*, const RuntimeMethod*))DetailedLocalizationTable_1_GetEntry_m9DFC2F48FA24A49209C08302640AD5C9855081A8_gshared)(__this, ___key0, method);
}
// System.String UnityEngine.Localization.Tables.StringTableEntry::GetLocalizedString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringTableEntry_GetLocalizedString_mBFE9A3389C1A6FD4FA56671804F526A478561E78 (StringTableEntry_tEB17D923B5599B343F7E00DA6C4333AE8F38723C* __this, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Text::set_fontSizeMax(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_set_fontSizeMax_mC84B7090F5CE69BA63556A71FD63ABD67C911750 (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Text::set_font(TMPro.TMP_FontAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_set_font_mC55E4A8C1C09595031384B35F2C2FB2FC3479E83 (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<ARUXAnimationManager>(T&)
inline bool Component_TryGetComponent_TisARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966_m26092B601237205F719FF7A32C50CC6736EAB153 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966** ___component0, const RuntimeMethod* method)
{
	return ((  bool (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966**, const RuntimeMethod*))Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared)(__this, ___component0, method);
}
// System.Boolean ARUXAnimationManager::get_localizeText()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ARUXAnimationManager_get_localizeText_m66AC1B057DB568FFE8E224FC2FF72F01DE62400D_inline (ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<ARUXReasonsManager>(T&)
inline bool Component_TryGetComponent_TisARUXReasonsManager_t7DE4754765B780C9987FC05832DE0F5447F2E7EE_mC0B706DD877710609E8D1D413D08B5823604D13E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, ARUXReasonsManager_t7DE4754765B780C9987FC05832DE0F5447F2E7EE** ___component0, const RuntimeMethod* method)
{
	return ((  bool (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, ARUXReasonsManager_t7DE4754765B780C9987FC05832DE0F5447F2E7EE**, const RuntimeMethod*))Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared)(__this, ___component0, method);
}
// System.Boolean ARUXReasonsManager::get_localizeText()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ARUXReasonsManager_get_localizeText_mB2F5CF0F7F3E72C57EFE80D3B9B98B80B0731CF8_inline (ARUXReasonsManager_t7DE4754765B780C9987FC05832DE0F5447F2E7EE* __this, const RuntimeMethod* method) ;
// UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.Localization.Settings.LocalizationSettings> UnityEngine.Localization.Settings.LocalizationSettings::get_InitializationOperation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationHandle_1_t942B32DFBF2792F48E49169E2A65A5E46162395C LocalizationSettings_get_InitializationOperation_m1688397DC53798623DAC83A31682950B8AFFC51A (const RuntimeMethod* method) ;
// UnityEngine.Localization.Settings.ILocalesProvider UnityEngine.Localization.Settings.LocalizationSettings::get_AvailableLocales()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LocalizationSettings_get_AvailableLocales_m17853F621C166707F3BC306A01B43877FCF6B206 (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Localization.Locale>::Sort()
inline void List_1_Sort_m418B8FEB7F84DBF0E75C53C6F16173EDCD7D25DA (List_1_tBD0AC994E5F9C7F539E0378F0CBB119065136548* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBD0AC994E5F9C7F539E0378F0CBB119065136548*, const RuntimeMethod*))List_1_Sort_m31071C3C6DF1FAD770119031BEA9315A2E3C1298_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Localization.Locale>::get_Item(System.Int32)
inline Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* List_1_get_Item_m371BFB123C54FBBA612036D55FABF370481EFB71 (List_1_tBD0AC994E5F9C7F539E0378F0CBB119065136548* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* (*) (List_1_tBD0AC994E5F9C7F539E0378F0CBB119065136548*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.Localization.Settings.LocalizationSettings::set_SelectedLocale(UnityEngine.Localization.Locale)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalizationSettings_set_SelectedLocale_mF57C48D4B5A390DE44E693DD649AE0E84DB7C39B (Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* ___value0, const RuntimeMethod* method) ;
// System.Void LocalizationManager::SwapFonts(LocalizationManager/SupportedLanguages)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalizationManager_SwapFonts_mF3A4990A03C3AE6859DAE6CFD892C4106B0D23C1 (LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* __this, int32_t ___selectedLanguage0, const RuntimeMethod* method) ;
// UnityEngine.Localization.Settings.LocalizedStringDatabase UnityEngine.Localization.Settings.LocalizationSettings::get_StringDatabase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocalizedStringDatabase_tACE9FD9021269D20788D130D96F7B2244DD67406* LocalizationSettings_get_StringDatabase_mE6BAA447716F40C608D6FAF3F33DBB446D8C8E61 (const RuntimeMethod* method) ;
// UnityEngine.Localization.Tables.TableReference UnityEngine.Localization.Tables.TableReference::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TableReference_t96A5F0161FDA37E187436FC17A3B6D7AB676A147 TableReference_op_Implicit_m583BDE75167BF8CC3AFA8B3F701E390A6B3D31DD (String_t* ___tableCollectionName0, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.Localization.Tables.StringTable>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mB1A6787420A078394CF713719148C670C71E367A (Action_1_t647506099BF0E618A47E824F311932EBCB1B5994* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t647506099BF0E618A47E824F311932EBCB1B5994*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mCDB69DE3F4173FFB4DB9B58CCB99D53CA858AEB8_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.Localization.Tables.StringTable>::add_Completed(System.Action`1<UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>>)
inline void AsyncOperationHandle_1_add_Completed_m46D0F374C09483CA0A67CA39BF255BADD676B6EC (AsyncOperationHandle_1_tC737C3B1E3DD319BBC38072DFCBF5B0369708A6D* __this, Action_1_t647506099BF0E618A47E824F311932EBCB1B5994* ___value0, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationHandle_1_tC737C3B1E3DD319BBC38072DFCBF5B0369708A6D*, Action_1_t647506099BF0E618A47E824F311932EBCB1B5994*, const RuntimeMethod*))AsyncOperationHandle_1_add_Completed_m0A29904183FF915F3F53B5A91D966447A51BA0D7_gshared)(__this, ___value0, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Void PlaceObjectsOnPlane::set_spawnedObject(UnityEngine.GameObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlaceObjectsOnPlane_set_spawnedObject_mEC67DCF79988E87D8D8A38BE01CA2D77F335B6CF_inline (PlaceObjectsOnPlane_t8CCA4A0919CFB134BDC1CFFED9EC2F23DCEB1933* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject PlaceObjectsOnPlane::get_spawnedObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PlaceObjectsOnPlane_get_spawnedObject_m5C323C2EB39FD35D6B5B777C78D3E6A5BC225D01_inline (PlaceObjectsOnPlane_t8CCA4A0919CFB134BDC1CFFED9EC2F23DCEB1933* __this, const RuntimeMethod* method) ;
// System.Void UXHandle::.ctor(UIManager/InstructionUI,UIManager/InstructionGoals)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UXHandle__ctor_m7DDE9F76ECECA474E79BC6A0AF82C9D31BC22F04 (UXHandle_tC4DD5984B1181FA802AC5B288C7616225F9B147F* __this, int32_t ___ui0, int32_t ___goal1, const RuntimeMethod* method) ;
// System.Void ARUXAnimationManager::add_onFadeOffComplete(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUXAnimationManager_add_onFadeOffComplete_m38528C701B7CA8DB1B51E93E20197FCC208DF349 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Void UIManager::GetManagers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_GetManagers_m27F270371610580DDA22351EAC8786AA1FDA0228 (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<UXHandle>::.ctor()
inline void Queue_1__ctor_mB2870787C283872067414EBF51344C30B8002818 (Queue_1_tBB833A4AC695DF02307E93FAAED0C78E3BD64A1D* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tBB833A4AC695DF02307E93FAAED0C78E3BD64A1D*, const RuntimeMethod*))Queue_1__ctor_mB2870787C283872067414EBF51344C30B8002818_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<UXHandle>::Enqueue(T)
inline void Queue_1_Enqueue_m61E54D86D92BB85774BB35079316A552509D7DA9 (Queue_1_tBB833A4AC695DF02307E93FAAED0C78E3BD64A1D* __this, UXHandle_tC4DD5984B1181FA802AC5B288C7616225F9B147F ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tBB833A4AC695DF02307E93FAAED0C78E3BD64A1D*, UXHandle_tC4DD5984B1181FA802AC5B288C7616225F9B147F, const RuntimeMethod*))Queue_1_Enqueue_m61E54D86D92BB85774BB35079316A552509D7DA9_gshared)(__this, ___item0, method);
}
// System.Void ARUXAnimationManager::remove_onFadeOffComplete(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUXAnimationManager_remove_onFadeOffComplete_mC89FA8BDBC5B43660675D5A01E25A10C042368B2 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Boolean LocalizationManager::get_localizationComplete()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool LocalizationManager_get_localizationComplete_m45666C705BD483A0E2CEC4496D3484F716C07C74_inline (LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<UXHandle>::get_Count()
inline int32_t Queue_1_get_Count_mC7231F573C4B3893A8E7B13375E854626F4AC12E_inline (Queue_1_tBB833A4AC695DF02307E93FAAED0C78E3BD64A1D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tBB833A4AC695DF02307E93FAAED0C78E3BD64A1D*, const RuntimeMethod*))Queue_1_get_Count_mC7231F573C4B3893A8E7B13375E854626F4AC12E_gshared_inline)(__this, method);
}
// T System.Collections.Generic.Queue`1<UXHandle>::Dequeue()
inline UXHandle_tC4DD5984B1181FA802AC5B288C7616225F9B147F Queue_1_Dequeue_m252F413FCB9BC2AB33C58E442A51680EC2F9260B (Queue_1_tBB833A4AC695DF02307E93FAAED0C78E3BD64A1D* __this, const RuntimeMethod* method)
{
	return ((  UXHandle_tC4DD5984B1181FA802AC5B288C7616225F9B147F (*) (Queue_1_tBB833A4AC695DF02307E93FAAED0C78E3BD64A1D*, const RuntimeMethod*))Queue_1_Dequeue_m252F413FCB9BC2AB33C58E442A51680EC2F9260B_gshared)(__this, method);
}
// System.Func`1<System.Boolean> UIManager::GetGoal(UIManager/InstructionGoals)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* UIManager_GetGoal_mB545CD806E0A1AE961E1704FC435E91BCAAA7478 (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, int32_t ___goal0, const RuntimeMethod* method) ;
// TResult System.Func`1<System.Boolean>::Invoke()
inline bool Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_inline (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, const RuntimeMethod*))Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_gshared_inline)(__this, method);
}
// System.Void UIManager::FadeOnInstructionalUI(UIManager/InstructionUI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_FadeOnInstructionalUI_mF405D85AF5B2FF70C45AACEB2FAAFED7D8957E0F (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, int32_t ___ui0, const RuntimeMethod* method) ;
// System.Void ARUXAnimationManager::FadeOffCurrentUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUXAnimationManager_FadeOffCurrentUI_m98281DEFFFE5ADDAEA682CA3BE0DDA5EA5D0F8F0 (ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::TryGetComponent<UnityEngine.XR.ARFoundation.ARPlaneManager>(T&)
inline bool GameObject_TryGetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m2F2B53460F4F0075DD0B84E2C557F2BD8D245889 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928** ___component0, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928**, const RuntimeMethod*))GameObject_TryGetComponent_TisRuntimeObject_m4D430300D2DFB9276DE980D78F60A05D271D3630_gshared)(__this, ___component0, method);
}
// System.Boolean UnityEngine.GameObject::TryGetComponent<UnityEngine.XR.ARFoundation.ARFaceManager>(T&)
inline bool GameObject_TryGetComponent_TisARFaceManager_tE5955187C9D7C9C4C4139F522DA0DEA69EFCFD8F_m171029C1135CD52E50BB3152E3A811E8DA0B657D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, ARFaceManager_tE5955187C9D7C9C4C4139F522DA0DEA69EFCFD8F** ___component0, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, ARFaceManager_tE5955187C9D7C9C4C4139F522DA0DEA69EFCFD8F**, const RuntimeMethod*))GameObject_TryGetComponent_TisRuntimeObject_m4D430300D2DFB9276DE980D78F60A05D271D3630_gshared)(__this, ___component0, method);
}
// System.Boolean UnityEngine.GameObject::TryGetComponent<UnityEngine.XR.ARFoundation.ARHumanBodyManager>(T&)
inline bool GameObject_TryGetComponent_TisARHumanBodyManager_tA5246205B817A3D4A87BFC54FC018FB513867BFB_m3BC6CC456D6FA8BAA9CF6A7BA0D981F5FDC69B58 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, ARHumanBodyManager_tA5246205B817A3D4A87BFC54FC018FB513867BFB** ___component0, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, ARHumanBodyManager_tA5246205B817A3D4A87BFC54FC018FB513867BFB**, const RuntimeMethod*))GameObject_TryGetComponent_TisRuntimeObject_m4D430300D2DFB9276DE980D78F60A05D271D3630_gshared)(__this, ___component0, method);
}
// System.Boolean UnityEngine.GameObject::TryGetComponent<UnityEngine.XR.ARFoundation.ARTrackedImageManager>(T&)
inline bool GameObject_TryGetComponent_TisARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4_mF40FD520A7B1A8609A8EF8A348EE210211617F27 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4** ___component0, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4**, const RuntimeMethod*))GameObject_TryGetComponent_TisRuntimeObject_m4D430300D2DFB9276DE980D78F60A05D271D3630_gshared)(__this, ___component0, method);
}
// System.Boolean UnityEngine.GameObject::TryGetComponent<UnityEngine.XR.ARFoundation.ARTrackedObjectManager>(T&)
inline bool GameObject_TryGetComponent_TisARTrackedObjectManager_tD667E7CCD95E9D25449BD578F256F728D8619FC7_m28846BD4038C6535F4D387B31595E84AC54E3278 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, ARTrackedObjectManager_tD667E7CCD95E9D25449BD578F256F728D8619FC7** ___component0, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, ARTrackedObjectManager_tD667E7CCD95E9D25449BD578F256F728D8619FC7**, const RuntimeMethod*))GameObject_TryGetComponent_TisRuntimeObject_m4D430300D2DFB9276DE980D78F60A05D271D3630_gshared)(__this, ___component0, method);
}
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22 (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared)(__this, ___object0, ___method1, method);
}
// System.Void ARUXAnimationManager::ShowCrossPlatformFindAPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUXAnimationManager_ShowCrossPlatformFindAPlane_m992125094A81A949474ED1A0919154FCFE0C5625 (ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* __this, const RuntimeMethod* method) ;
// System.Void ARUXAnimationManager::ShowFindFace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUXAnimationManager_ShowFindFace_mDA9BE5B57D0B465FB5B4BF01886AA5968DF8E44D (ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* __this, const RuntimeMethod* method) ;
// System.Void ARUXAnimationManager::ShowFindBody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUXAnimationManager_ShowFindBody_mFB3DE3E1471006BB1CF1B17AEEF72637E694FB28 (ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* __this, const RuntimeMethod* method) ;
// System.Void ARUXAnimationManager::ShowFindImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUXAnimationManager_ShowFindImage_mEC0A382E4703DA33EBB08A0D768CDF3F14F8A457 (ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* __this, const RuntimeMethod* method) ;
// System.Void ARUXAnimationManager::ShowFindObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUXAnimationManager_ShowFindObject_mFE5E88529692EA4068C52E4D943EDABACCBF2EDD (ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* __this, const RuntimeMethod* method) ;
// System.Boolean ARUXAnimationManager::ARKitCoachingOverlaySupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARUXAnimationManager_ARKitCoachingOverlaySupported_m5922D93ADF404969D81584B361C550317467637B (ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* __this, const RuntimeMethod* method) ;
// System.Void ARUXAnimationManager::ShowCoachingOverlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUXAnimationManager_ShowCoachingOverlay_mAB2D3D96B0A8AC5AFC88295A69678ACB2DA92BA9 (ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* __this, const RuntimeMethod* method) ;
// System.Void ARUXAnimationManager::ShowTapToPlace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUXAnimationManager_ShowTapToPlace_mF863ABE2C4A60806BF0316E2E15BE63821F5E775 (ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARFoundation.TrackableCollection`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider,UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARFoundation.ARPlane>::get_trackables()
inline TrackableCollection_1_t020ABE893108AA7BEFF830BE31295402EFBDDCA7 ARTrackableManager_5_get_trackables_m05EA665E785FD12BBFEB6DF9C2208B4222217CF7 (ARTrackableManager_5_t1F9F85442D84B92DE0BC4C518768C0154AB69103* __this, const RuntimeMethod* method)
{
	return ((  TrackableCollection_1_t020ABE893108AA7BEFF830BE31295402EFBDDCA7 (*) (ARTrackableManager_5_t1F9F85442D84B92DE0BC4C518768C0154AB69103*, const RuntimeMethod*))ARTrackableManager_5_get_trackables_m3F866C4F639EB2D24942998408E40FD24D2CF7B5_gshared)(__this, method);
}
// System.Int32 UnityEngine.XR.ARFoundation.TrackableCollection`1<UnityEngine.XR.ARFoundation.ARPlane>::get_count()
inline int32_t TrackableCollection_1_get_count_mEF7A466B4BE37C1A7FA849C29FD752B69076DE98 (TrackableCollection_1_t020ABE893108AA7BEFF830BE31295402EFBDDCA7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TrackableCollection_1_t020ABE893108AA7BEFF830BE31295402EFBDDCA7*, const RuntimeMethod*))TrackableCollection_1_get_count_mEC658F946B333A5D977CF8C07EF9918E35C6A288_gshared)(__this, method);
}
// UnityEngine.XR.ARFoundation.TrackableCollection`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRFaceSubsystem,UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRFaceSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRFace,UnityEngine.XR.ARFoundation.ARFace>::get_trackables()
inline TrackableCollection_1_t7F8F18DAEBAC38B9CA739A30AD2C21CCE8F8B305 ARTrackableManager_5_get_trackables_m32440CFD7C68D75BB3FB2ED84A6DEE060390FBD7 (ARTrackableManager_5_t2D42FCFDD2D69C41D2C2951F731A4F489A8605A4* __this, const RuntimeMethod* method)
{
	return ((  TrackableCollection_1_t7F8F18DAEBAC38B9CA739A30AD2C21CCE8F8B305 (*) (ARTrackableManager_5_t2D42FCFDD2D69C41D2C2951F731A4F489A8605A4*, const RuntimeMethod*))ARTrackableManager_5_get_trackables_m7AFA6F8E1DD9C80CB06BE955E8F797A8B086D96D_gshared)(__this, method);
}
// System.Int32 UnityEngine.XR.ARFoundation.TrackableCollection`1<UnityEngine.XR.ARFoundation.ARFace>::get_count()
inline int32_t TrackableCollection_1_get_count_m86E3BD44E96A35AD25951109B6A96002FBDFFFC3 (TrackableCollection_1_t7F8F18DAEBAC38B9CA739A30AD2C21CCE8F8B305* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TrackableCollection_1_t7F8F18DAEBAC38B9CA739A30AD2C21CCE8F8B305*, const RuntimeMethod*))TrackableCollection_1_get_count_mEC658F946B333A5D977CF8C07EF9918E35C6A288_gshared)(__this, method);
}
// UnityEngine.XR.ARFoundation.TrackableCollection`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem,UnityEngine.XR.ARSubsystems.XRHumanBodySubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem/Provider,UnityEngine.XR.ARSubsystems.XRHumanBody,UnityEngine.XR.ARFoundation.ARHumanBody>::get_trackables()
inline TrackableCollection_1_t4C7AEC8C8EF02A76185BC5E4DA2437F818E51CEF ARTrackableManager_5_get_trackables_m37D9FF777E3321940E7AF3D0EA8204124475649C (ARTrackableManager_5_t66B444EEF0E5B63A8B668B882FED811E693A0EC7* __this, const RuntimeMethod* method)
{
	return ((  TrackableCollection_1_t4C7AEC8C8EF02A76185BC5E4DA2437F818E51CEF (*) (ARTrackableManager_5_t66B444EEF0E5B63A8B668B882FED811E693A0EC7*, const RuntimeMethod*))ARTrackableManager_5_get_trackables_m199113B5B5248845FCA96D29641209AC2A51FFC6_gshared)(__this, method);
}
// System.Int32 UnityEngine.XR.ARFoundation.TrackableCollection`1<UnityEngine.XR.ARFoundation.ARHumanBody>::get_count()
inline int32_t TrackableCollection_1_get_count_mD34B737B789B30D939E0D23745BC5881B8225892 (TrackableCollection_1_t4C7AEC8C8EF02A76185BC5E4DA2437F818E51CEF* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TrackableCollection_1_t4C7AEC8C8EF02A76185BC5E4DA2437F818E51CEF*, const RuntimeMethod*))TrackableCollection_1_get_count_mEC658F946B333A5D977CF8C07EF9918E35C6A288_gshared)(__this, method);
}
// UnityEngine.XR.ARFoundation.TrackableCollection`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRImageTrackingSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRTrackedImage,UnityEngine.XR.ARFoundation.ARTrackedImage>::get_trackables()
inline TrackableCollection_1_tA2C9F7D20A5C25A17E7623BC171A9D4359876D2C ARTrackableManager_5_get_trackables_m550D26D672377AA9685A9EFEE2D959525E51800B (ARTrackableManager_5_t1395957883D0FA3B96AA1B31F7D9D15573DA46F5* __this, const RuntimeMethod* method)
{
	return ((  TrackableCollection_1_tA2C9F7D20A5C25A17E7623BC171A9D4359876D2C (*) (ARTrackableManager_5_t1395957883D0FA3B96AA1B31F7D9D15573DA46F5*, const RuntimeMethod*))ARTrackableManager_5_get_trackables_m37D539D7765C42FE95A740331D4DC34AD6EF8985_gshared)(__this, method);
}
// System.Int32 UnityEngine.XR.ARFoundation.TrackableCollection`1<UnityEngine.XR.ARFoundation.ARTrackedImage>::get_count()
inline int32_t TrackableCollection_1_get_count_m0AD877E10C80F187B55A2BC66780A27C8EACFD6C (TrackableCollection_1_tA2C9F7D20A5C25A17E7623BC171A9D4359876D2C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TrackableCollection_1_tA2C9F7D20A5C25A17E7623BC171A9D4359876D2C*, const RuntimeMethod*))TrackableCollection_1_get_count_mEC658F946B333A5D977CF8C07EF9918E35C6A288_gshared)(__this, method);
}
// UnityEngine.XR.ARFoundation.TrackableCollection`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRTrackedObject,UnityEngine.XR.ARFoundation.ARTrackedObject>::get_trackables()
inline TrackableCollection_1_tCA8C6AEE4E81BA18A7079CA0E9C9612C9095EBD0 ARTrackableManager_5_get_trackables_mCFD12DF808EC0CE5E99FED3EDF5BFEAB24155F6D (ARTrackableManager_5_t956DB46580AD764FF0CA6A96A175FDDEC57D74A5* __this, const RuntimeMethod* method)
{
	return ((  TrackableCollection_1_tCA8C6AEE4E81BA18A7079CA0E9C9612C9095EBD0 (*) (ARTrackableManager_5_t956DB46580AD764FF0CA6A96A175FDDEC57D74A5*, const RuntimeMethod*))ARTrackableManager_5_get_trackables_m7392F2862EA8CA27F6F7D483F000472EDF65755E_gshared)(__this, method);
}
// System.Int32 UnityEngine.XR.ARFoundation.TrackableCollection`1<UnityEngine.XR.ARFoundation.ARTrackedObject>::get_count()
inline int32_t TrackableCollection_1_get_count_m2E0B3CEAD4F15634A14B04AB37111B2198856924 (TrackableCollection_1_tCA8C6AEE4E81BA18A7079CA0E9C9612C9095EBD0* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TrackableCollection_1_tCA8C6AEE4E81BA18A7079CA0E9C9612C9095EBD0*, const RuntimeMethod*))TrackableCollection_1_get_count_mEC658F946B333A5D977CF8C07EF9918E35C6A288_gshared)(__this, method);
}
// System.Void UIManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8CFA49442D43B8180925F03EC1DB310352B1BE5B (U3CU3Ec_tE0F140AB3A3D2C049850DEC15500CB19953B3761* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector4::op_Equality(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_m80E2AA0626A70EF9DCC4F4C215F674A22D6DE937_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rhs1, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
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
// System.Void ARCursor::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCursor_Start_mF861EF07BBBDEA10481F7F4AC557740AE0B182B1 (ARCursor_t8AAA875642042CDB3704727B8397F2676759BF0C* __this, const RuntimeMethod* method) 
{
	{
		// CursorChildObject.SetActive(useCursor);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___CursorChildObject_4;
		bool L_1 = __this->___useCursor_7;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ARCursor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCursor_Update_m156A232086B1784C1125D3A9F1141FEE78055443 (ARCursor_t8AAA875642042CDB3704727B8397F2676759BF0C* __this, const RuntimeMethod* method) 
{
	{
		// if (useCursor)
		bool L_0 = __this->___useCursor_7;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// UpdateCursor();
		ARCursor_UpdateCursor_mF10A97A53652C882FD9FFEE7DD963F3990861CDA(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void ARCursor::UpdateCursor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCursor_UpdateCursor_mF10A97A53652C882FD9FFEE7DD963F3990861CDA (ARCursor_t8AAA875642042CDB3704727B8397F2676759BF0C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* V_1 = NULL;
	ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Vector2 screenPosition = Camera.main.ViewportToScreenPoint(new Vector2(0.5f, 0.5f));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_1), (0.5f), (0.5f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_1, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Camera_ViewportToScreenPoint_m014E001B50C96CDE5AE5055B597DAA8DE7113023(L_0, L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_3, NULL);
		V_0 = L_4;
		// List<ARRaycastHit> hits = new List<ARRaycastHit>();
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_5 = (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*)il2cpp_codegen_object_new(List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9(L_5, List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		V_1 = L_5;
		// RayCastManager.Raycast(screenPosition, hits, TrackableType.Planes);
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_6 = __this->___RayCastManager_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_8 = V_1;
		NullCheck(L_6);
		bool L_9;
		L_9 = ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC(L_6, L_7, L_8, ((int32_t)15), NULL);
		// if(hits.Count > 0)
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_inline(L_10, List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_RuntimeMethod_var);
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_0081;
		}
	}
	{
		// transform.position = hits[0].pose.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_13 = V_1;
		NullCheck(L_13);
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_14;
		L_14 = List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F(L_13, 0, List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		V_2 = L_14;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_15;
		L_15 = ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD((&V_2), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = L_15.___position_0;
		NullCheck(L_12);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_12, L_16, NULL);
		// transform.rotation = hits[0].pose.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_18 = V_1;
		NullCheck(L_18);
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_19;
		L_19 = List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F(L_18, 0, List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		V_2 = L_19;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_20;
		L_20 = ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD((&V_2), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21 = L_20.___rotation_1;
		NullCheck(L_17);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_17, L_21, NULL);
	}

IL_0081:
	{
		// }
		return;
	}
}
// System.Void ARCursor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCursor__ctor_m137F0AE7E4CBAB2E1D72B1ED04AEC5E1315980EB (ARCursor_t8AAA875642042CDB3704727B8397F2676759BF0C* __this, const RuntimeMethod* method) 
{
	{
		// public bool useCursor = true;
		__this->___useCursor_7 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ARPlacement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlacement_Start_m099846CB7B1B39875015FF83B916977F512F31F7 (ARPlacement_tA1308C1A97DE34EB044FD63BB22F99D72F2A60E7* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ARPlacement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlacement_Update_m4BB8A6904F5A09FB2A46E231A8E323BE54B50034 (ARPlacement_tA1308C1A97DE34EB044FD63BB22F99D72F2A60E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// UpdatePlacementPose();
		ARPlacement_UpdatePlacementPose_mAA1741FB6F809237598B63C2DA26C352D5937C38(__this, NULL);
		// UpdatePlacementIndicator();
		ARPlacement_UpdatePlacementIndicator_m40D712396478D71FB6A225F5A48A6722B48EF040(__this, NULL);
		// if (spawnedObject == null && placementPoseIsValid && Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___spawnedObject_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0040;
		}
	}
	{
		bool L_2 = __this->___placementPoseIsValid_9;
		if (!L_2)
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_3;
		L_3 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_4;
		L_4 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if (L_5)
		{
			goto IL_0040;
		}
	}
	{
		// ARPlaceObject();
		ARPlacement_ARPlaceObject_m982B9B2F33AC4DDC2E37A83CD4C00D1CBC7CE76E(__this, NULL);
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void ARPlacement::UpdatePlacementIndicator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlacement_UpdatePlacementIndicator_m40D712396478D71FB6A225F5A48A6722B48EF040 (ARPlacement_tA1308C1A97DE34EB044FD63BB22F99D72F2A60E7* __this, const RuntimeMethod* method) 
{
	{
		// if (placementPoseIsValid)
		bool L_0 = __this->___placementPoseIsValid_9;
		if (!L_0)
		{
			goto IL_003b;
		}
	}
	{
		// placementIndicator.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___placementIndicator_5;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// placementIndicator.transform.SetPositionAndRotation(PlacementPose.position, PlacementPose.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___placementIndicator_5;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_4 = (&__this->___PlacementPose_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = L_4->___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_6 = (&__this->___PlacementPose_7);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = L_6->___rotation_1;
		NullCheck(L_3);
		Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_3, L_5, L_7, NULL);
		return;
	}

IL_003b:
	{
		// placementIndicator.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___placementIndicator_5;
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ARPlacement::UpdatePlacementPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlacement_UpdatePlacementPose_mAA1741FB6F809237598B63C2DA26C352D5937C38 (ARPlacement_tA1308C1A97DE34EB044FD63BB22F99D72F2A60E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* V_1 = NULL;
	ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Vector2 screenPosition = Camera.main.ViewportToScreenPoint(new Vector2(0.5f, 0.5f));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_1), (0.5f), (0.5f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_1, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Camera_ViewportToScreenPoint_m014E001B50C96CDE5AE5055B597DAA8DE7113023(L_0, L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_3, NULL);
		V_0 = L_4;
		// var hits = new List<ARRaycastHit>();
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_5 = (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*)il2cpp_codegen_object_new(List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9(L_5, List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		V_1 = L_5;
		// RayCastManager.Raycast(screenPosition, hits, TrackableType.Planes);
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_6 = __this->___RayCastManager_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_8 = V_1;
		NullCheck(L_6);
		bool L_9;
		L_9 = ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC(L_6, L_7, L_8, ((int32_t)15), NULL);
		// placementPoseIsValid = hits.Count > 0;
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_inline(L_10, List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_RuntimeMethod_var);
		__this->___placementPoseIsValid_9 = (bool)((((int32_t)L_11) > ((int32_t)0))? 1 : 0);
		// if (placementPoseIsValid)
		bool L_12 = __this->___placementPoseIsValid_9;
		if (!L_12)
		{
			goto IL_0066;
		}
	}
	{
		// PlacementPose = hits[0].pose;
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_13 = V_1;
		NullCheck(L_13);
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_14;
		L_14 = List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F(L_13, 0, List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		V_2 = L_14;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_15;
		L_15 = ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD((&V_2), NULL);
		__this->___PlacementPose_7 = L_15;
	}

IL_0066:
	{
		// }
		return;
	}
}
// System.Void ARPlacement::ARPlaceObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlacement_ARPlaceObject_m982B9B2F33AC4DDC2E37A83CD4C00D1CBC7CE76E (ARPlacement_tA1308C1A97DE34EB044FD63BB22F99D72F2A60E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// spawnedObject = Instantiate(arObjectToSpawn, PlacementPose.position, PlacementPose.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___arObjectToSpawn_4;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_1 = (&__this->___PlacementPose_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = L_1->___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_3 = (&__this->___PlacementPose_7);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = L_3->___rotation_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_0, L_2, L_4, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		__this->___spawnedObject_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnedObject_6), (void*)L_5);
		// }
		return;
	}
}
// System.Void ARPlacement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlacement__ctor_m13D40B9A26B154DDB1ABAC3D5E6CF03F7EE3F9ED (ARPlacement_tA1308C1A97DE34EB044FD63BB22F99D72F2A60E7* __this, const RuntimeMethod* method) 
{
	{
		// private bool placementPoseIsValid = true;
		__this->___placementPoseIsValid_9 = (bool)1;
		// public bool useCursor = true;
		__this->___useCursor_10 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ImageTracking::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTracking_Awake_m45163218D2F5CE540465973D9A41DCBC31050A45 (ImageTracking_t1AC7FA07584DA88ECCD67B79C21A12B615A4DAAC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4_m3C5338CF883CA97951B07D446FEA5FC76D1FB683_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mE5ED48EAB67073C645CD87B5E6ACA2E6BF7975AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	{
		// trackedImageManager = GetComponent<ARTrackedImageManager>();
		ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* L_0;
		L_0 = Component_GetComponent_TisARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4_m3C5338CF883CA97951B07D446FEA5FC76D1FB683(__this, Component_GetComponent_TisARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4_m3C5338CF883CA97951B07D446FEA5FC76D1FB683_RuntimeMethod_var);
		__this->___trackedImageManager_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___trackedImageManager_6), (void*)L_0);
		// foreach(GameObject prefab in placeablePrefabs)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___placeablePrefabs_4;
		V_0 = L_1;
		V_1 = 0;
		goto IL_004e;
	}

IL_0017:
	{
		// foreach(GameObject prefab in placeablePrefabs)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// GameObject newPrefab = Instantiate(prefab, Vector3.zero, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_6, L_7, L_8, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		V_3 = L_9;
		// newPrefab.name = prefab.name;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_2;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_11, NULL);
		NullCheck(L_10);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_10, L_12, NULL);
		// spawnedPrefabs.Add(prefab.name, newPrefab);
		Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE* L_13 = __this->___spawnedPrefabs_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = V_2;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_14, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = V_3;
		NullCheck(L_13);
		Dictionary_2_Add_mE5ED48EAB67073C645CD87B5E6ACA2E6BF7975AF(L_13, L_15, L_16, Dictionary_2_Add_mE5ED48EAB67073C645CD87B5E6ACA2E6BF7975AF_RuntimeMethod_var);
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_004e:
	{
		// foreach(GameObject prefab in placeablePrefabs)
		int32_t L_18 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_19 = V_0;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ImageTracking::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTracking_OnEnable_m6DEDEE1663EC7AA2AB1000CF58776EC231A744B7 (ImageTracking_t1AC7FA07584DA88ECCD67B79C21A12B615A4DAAC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageTracking_ShowDebug_m57B1965B8D7CFAEF9A70380E092D257BAE5B6343_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageTracking_TrackedImageManager_trackedImagesChanged_m62EC9643FF9B6F7166FE51B814241C8B8E623620_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// trackedImageManager.trackedImagesChanged += TrackedImageManager_trackedImagesChanged;
		ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* L_0 = __this->___trackedImageManager_6;
		Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* L_1 = (Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F*)il2cpp_codegen_object_new(Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m55BF5EC44D8DEC74D367B749B5B29C8F2A9CB957(L_1, __this, (intptr_t)((void*)ImageTracking_TrackedImageManager_trackedImagesChanged_m62EC9643FF9B6F7166FE51B814241C8B8E623620_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		ARTrackedImageManager_add_trackedImagesChanged_mB190015342B225144729100E0E38745CAFA7F438(L_0, L_1, NULL);
		// trackedImageManager.trackedImagesChanged += ShowDebug;
		ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* L_2 = __this->___trackedImageManager_6;
		Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* L_3 = (Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F*)il2cpp_codegen_object_new(Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_m55BF5EC44D8DEC74D367B749B5B29C8F2A9CB957(L_3, __this, (intptr_t)((void*)ImageTracking_ShowDebug_m57B1965B8D7CFAEF9A70380E092D257BAE5B6343_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		ARTrackedImageManager_add_trackedImagesChanged_mB190015342B225144729100E0E38745CAFA7F438(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void ImageTracking::ShowDebug(UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTracking_ShowDebug_m57B1965B8D7CFAEF9A70380E092D257BAE5B6343 (ImageTracking_t1AC7FA07584DA88ECCD67B79C21A12B615A4DAAC* __this, ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9561D7D49F858DA1C28EBE8E9DC1FBBC0F1A9967);
		s_Il2CppMethodInitialized = true;
	}
	{
		// text.text = "" + "detected!";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___text_7;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, _stringLiteral9561D7D49F858DA1C28EBE8E9DC1FBBC0F1A9967);
		// }
		return;
	}
}
// System.Void ImageTracking::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTracking_OnDisable_m62F1D5572FB9F965AE9E9D881D14D2747FFEE797 (ImageTracking_t1AC7FA07584DA88ECCD67B79C21A12B615A4DAAC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageTracking_ShowDebug_m57B1965B8D7CFAEF9A70380E092D257BAE5B6343_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageTracking_TrackedImageManager_trackedImagesChanged_m62EC9643FF9B6F7166FE51B814241C8B8E623620_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// trackedImageManager.trackedImagesChanged -= TrackedImageManager_trackedImagesChanged;
		ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* L_0 = __this->___trackedImageManager_6;
		Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* L_1 = (Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F*)il2cpp_codegen_object_new(Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m55BF5EC44D8DEC74D367B749B5B29C8F2A9CB957(L_1, __this, (intptr_t)((void*)ImageTracking_TrackedImageManager_trackedImagesChanged_m62EC9643FF9B6F7166FE51B814241C8B8E623620_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		ARTrackedImageManager_remove_trackedImagesChanged_mA754FAB732F3D5D803FA3A58A51E6487E75CCF34(L_0, L_1, NULL);
		// trackedImageManager.trackedImagesChanged -= ShowDebug;
		ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* L_2 = __this->___trackedImageManager_6;
		Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* L_3 = (Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F*)il2cpp_codegen_object_new(Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_m55BF5EC44D8DEC74D367B749B5B29C8F2A9CB957(L_3, __this, (intptr_t)((void*)ImageTracking_ShowDebug_m57B1965B8D7CFAEF9A70380E092D257BAE5B6343_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		ARTrackedImageManager_remove_trackedImagesChanged_mA754FAB732F3D5D803FA3A58A51E6487E75CCF34(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void ImageTracking::TrackedImageManager_trackedImagesChanged(UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTracking_TrackedImageManager_trackedImagesChanged_m62EC9643FF9B6F7166FE51B814241C8B8E623620 (ImageTracking_t1AC7FA07584DA88ECCD67B79C21A12B615A4DAAC* __this, ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m5A8F8BCAC50C5D5AB2722BBD41A340E4F6E47586_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m045DD6390BC35283CF0F0F6260FCDBC5C88190A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mC8FCE26C6AC5FEC78CEAE18F477FCE8FCFAC8E80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8CC28190A4AC93DDE1B4FBD06D314A89D89291E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mC2DFE4EA31DDAB2DBBC626D816D4A43A3C07543C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B V_0;
	memset((&V_0), 0, sizeof(V_0));
	ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* V_1 = NULL;
	ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* V_2 = NULL;
	ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* V_3 = NULL;
	{
		// foreach (ARTrackedImage item in obj.added)
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_0;
		L_0 = ARTrackedImagesChangedEventArgs_get_added_m2929CC85141D13AF05C1484AFB47E043C6D3EE35_inline((&___obj0), NULL);
		NullCheck(L_0);
		Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B L_1;
		L_1 = List_1_GetEnumerator_mC2DFE4EA31DDAB2DBBC626D816D4A43A3C07543C(L_0, List_1_GetEnumerator_mC2DFE4EA31DDAB2DBBC626D816D4A43A3C07543C_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0029:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m045DD6390BC35283CF0F0F6260FCDBC5C88190A4((&V_0), Enumerator_Dispose_m045DD6390BC35283CF0F0F6260FCDBC5C88190A4_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001e_1;
			}

IL_000f_1:
			{
				// foreach (ARTrackedImage item in obj.added)
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_2;
				L_2 = Enumerator_get_Current_m8CC28190A4AC93DDE1B4FBD06D314A89D89291E9_inline((&V_0), Enumerator_get_Current_m8CC28190A4AC93DDE1B4FBD06D314A89D89291E9_RuntimeMethod_var);
				V_1 = L_2;
				// UpdateImage(item);
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_3 = V_1;
				ImageTracking_UpdateImage_m34C65707C9429E72DDE79B5A2800710CF5750904(__this, L_3, NULL);
			}

IL_001e_1:
			{
				// foreach (ARTrackedImage item in obj.added)
				bool L_4;
				L_4 = Enumerator_MoveNext_mC8FCE26C6AC5FEC78CEAE18F477FCE8FCFAC8E80((&V_0), Enumerator_MoveNext_mC8FCE26C6AC5FEC78CEAE18F477FCE8FCFAC8E80_RuntimeMethod_var);
				if (L_4)
				{
					goto IL_000f_1;
				}
			}
			{
				goto IL_0037;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0037:
	{
		// foreach (ARTrackedImage item in obj.updated)
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_5;
		L_5 = ARTrackedImagesChangedEventArgs_get_updated_m0C896E1C21EF35FF4B31B36563838EC2BA3CDFD1_inline((&___obj0), NULL);
		NullCheck(L_5);
		Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B L_6;
		L_6 = List_1_GetEnumerator_mC2DFE4EA31DDAB2DBBC626D816D4A43A3C07543C(L_5, List_1_GetEnumerator_mC2DFE4EA31DDAB2DBBC626D816D4A43A3C07543C_RuntimeMethod_var);
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0060:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m045DD6390BC35283CF0F0F6260FCDBC5C88190A4((&V_0), Enumerator_Dispose_m045DD6390BC35283CF0F0F6260FCDBC5C88190A4_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0055_1;
			}

IL_0046_1:
			{
				// foreach (ARTrackedImage item in obj.updated)
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_7;
				L_7 = Enumerator_get_Current_m8CC28190A4AC93DDE1B4FBD06D314A89D89291E9_inline((&V_0), Enumerator_get_Current_m8CC28190A4AC93DDE1B4FBD06D314A89D89291E9_RuntimeMethod_var);
				V_2 = L_7;
				// UpdateImage(item);
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_8 = V_2;
				ImageTracking_UpdateImage_m34C65707C9429E72DDE79B5A2800710CF5750904(__this, L_8, NULL);
			}

IL_0055_1:
			{
				// foreach (ARTrackedImage item in obj.updated)
				bool L_9;
				L_9 = Enumerator_MoveNext_mC8FCE26C6AC5FEC78CEAE18F477FCE8FCFAC8E80((&V_0), Enumerator_MoveNext_mC8FCE26C6AC5FEC78CEAE18F477FCE8FCFAC8E80_RuntimeMethod_var);
				if (L_9)
				{
					goto IL_0046_1;
				}
			}
			{
				goto IL_006e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006e:
	{
		// foreach (ARTrackedImage item in obj.removed)
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_10;
		L_10 = ARTrackedImagesChangedEventArgs_get_removed_m062CBBEF163BEE47A673F7B3BDC0DD1C6EAEA185_inline((&___obj0), NULL);
		NullCheck(L_10);
		Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B L_11;
		L_11 = List_1_GetEnumerator_mC2DFE4EA31DDAB2DBBC626D816D4A43A3C07543C(L_10, List_1_GetEnumerator_mC2DFE4EA31DDAB2DBBC626D816D4A43A3C07543C_RuntimeMethod_var);
		V_0 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a7:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m045DD6390BC35283CF0F0F6260FCDBC5C88190A4((&V_0), Enumerator_Dispose_m045DD6390BC35283CF0F0F6260FCDBC5C88190A4_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_009c_1;
			}

IL_007d_1:
			{
				// foreach (ARTrackedImage item in obj.removed)
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_12;
				L_12 = Enumerator_get_Current_m8CC28190A4AC93DDE1B4FBD06D314A89D89291E9_inline((&V_0), Enumerator_get_Current_m8CC28190A4AC93DDE1B4FBD06D314A89D89291E9_RuntimeMethod_var);
				V_3 = L_12;
				// spawnedPrefabs[item.name].SetActive(false);
				Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE* L_13 = __this->___spawnedPrefabs_5;
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_14 = V_3;
				NullCheck(L_14);
				String_t* L_15;
				L_15 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_14, NULL);
				NullCheck(L_13);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
				L_16 = Dictionary_2_get_Item_m5A8F8BCAC50C5D5AB2722BBD41A340E4F6E47586(L_13, L_15, Dictionary_2_get_Item_m5A8F8BCAC50C5D5AB2722BBD41A340E4F6E47586_RuntimeMethod_var);
				NullCheck(L_16);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, (bool)0, NULL);
			}

IL_009c_1:
			{
				// foreach (ARTrackedImage item in obj.removed)
				bool L_17;
				L_17 = Enumerator_MoveNext_mC8FCE26C6AC5FEC78CEAE18F477FCE8FCFAC8E80((&V_0), Enumerator_MoveNext_mC8FCE26C6AC5FEC78CEAE18F477FCE8FCFAC8E80_RuntimeMethod_var);
				if (L_17)
				{
					goto IL_007d_1;
				}
			}
			{
				goto IL_00b5;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b5:
	{
		// }
		return;
	}
}
// System.Void ImageTracking::UpdateImage(UnityEngine.XR.ARFoundation.ARTrackedImage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTracking_UpdateImage_m34C65707C9429E72DDE79B5A2800710CF5750904 (ImageTracking_t1AC7FA07584DA88ECCD67B79C21A12B615A4DAAC* __this, ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* ___trackedImage0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m5A8F8BCAC50C5D5AB2722BBD41A340E4F6E47586_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_mCCC41FF246D656F5F707EF1522F1C279DAA5343F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m696B5831B239FA49B7C6E9E829D5C2BA96B0E1AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m82EA4A043BD1FC4DB303D820966EBFBD9916A134_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD7296BB33D16F06FD06E6077D093543842DCAE4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_mBEBB5769586D6C240A83E6E9457137C4DD2C3921_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F V_2;
	memset((&V_2), 0, sizeof(V_2));
	Enumerator_t44F706C297E7C39CC8E9C45CF3D7CF388A1A9A05 V_3;
	memset((&V_3), 0, sizeof(V_3));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_4 = NULL;
	{
		// string name = trackedImage.referenceImage.name;
		ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_0 = ___trackedImage0;
		NullCheck(L_0);
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_1;
		L_1 = ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline(L_0, NULL);
		V_2 = L_1;
		String_t* L_2;
		L_2 = XRReferenceImage_get_name_mF1BE1E54AD911D48445B7DDEF2E27EA01E1E73BB_inline((&V_2), NULL);
		V_0 = L_2;
		// Vector3 position = trackedImage.transform.position;
		ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_3 = ___trackedImage0;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		V_1 = L_5;
		// GameObject prefab = spawnedPrefabs[name];
		Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE* L_6 = __this->___spawnedPrefabs_5;
		String_t* L_7 = V_0;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Dictionary_2_get_Item_m5A8F8BCAC50C5D5AB2722BBD41A340E4F6E47586(L_6, L_7, Dictionary_2_get_Item_m5A8F8BCAC50C5D5AB2722BBD41A340E4F6E47586_RuntimeMethod_var);
		// prefab.transform.position = position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = L_8;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_1;
		NullCheck(L_10);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_10, L_11, NULL);
		// prefab.SetActive(true);
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)1, NULL);
		// foreach (var item in spawnedPrefabs.Values)
		Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE* L_12 = __this->___spawnedPrefabs_5;
		NullCheck(L_12);
		ValueCollection_tAA4B91D1FC6E3150E12FB777D5C1A8530004C5D1* L_13;
		L_13 = Dictionary_2_get_Values_mCCC41FF246D656F5F707EF1522F1C279DAA5343F(L_12, Dictionary_2_get_Values_mCCC41FF246D656F5F707EF1522F1C279DAA5343F_RuntimeMethod_var);
		NullCheck(L_13);
		Enumerator_t44F706C297E7C39CC8E9C45CF3D7CF388A1A9A05 L_14;
		L_14 = ValueCollection_GetEnumerator_mBEBB5769586D6C240A83E6E9457137C4DD2C3921(L_13, ValueCollection_GetEnumerator_mBEBB5769586D6C240A83E6E9457137C4DD2C3921_RuntimeMethod_var);
		V_3 = L_14;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0077:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m696B5831B239FA49B7C6E9E829D5C2BA96B0E1AF((&V_3), Enumerator_Dispose_m696B5831B239FA49B7C6E9E829D5C2BA96B0E1AF_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_006c_1;
			}

IL_004c_1:
			{
				// foreach (var item in spawnedPrefabs.Values)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
				L_15 = Enumerator_get_Current_mD7296BB33D16F06FD06E6077D093543842DCAE4F_inline((&V_3), Enumerator_get_Current_mD7296BB33D16F06FD06E6077D093543842DCAE4F_RuntimeMethod_var);
				V_4 = L_15;
				// if (item.name != name)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = V_4;
				NullCheck(L_16);
				String_t* L_17;
				L_17 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_16, NULL);
				String_t* L_18 = V_0;
				bool L_19;
				L_19 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_17, L_18, NULL);
				if (!L_19)
				{
					goto IL_006c_1;
				}
			}
			{
				// item.SetActive(false);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = V_4;
				NullCheck(L_20);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_20, (bool)0, NULL);
			}

IL_006c_1:
			{
				// foreach (var item in spawnedPrefabs.Values)
				bool L_21;
				L_21 = Enumerator_MoveNext_m82EA4A043BD1FC4DB303D820966EBFBD9916A134((&V_3), Enumerator_MoveNext_m82EA4A043BD1FC4DB303D820966EBFBD9916A134_RuntimeMethod_var);
				if (L_21)
				{
					goto IL_004c_1;
				}
			}
			{
				goto IL_0085;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0085:
	{
		// }
		return;
	}
}
// System.Void ImageTracking::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTracking_Start_m69798125C8053F64CE387194226F7AB27B6DA97C (ImageTracking_t1AC7FA07584DA88ECCD67B79C21A12B615A4DAAC* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ImageTracking::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTracking_Update_mA59D4E582DFDD86F405CC2CEE31CAA8DC58E998E (ImageTracking_t1AC7FA07584DA88ECCD67B79C21A12B615A4DAAC* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ImageTracking::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTracking__ctor_m88C12006AC3BAED3DAA4F0E0544DAA5294D96A5A (ImageTracking_t1AC7FA07584DA88ECCD67B79C21A12B615A4DAAC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m85AB837A51705B9DF96923F388345B9461B9882B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Dictionary<string, GameObject> spawnedPrefabs = new Dictionary<string, GameObject>();
		Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE* L_0 = (Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE*)il2cpp_codegen_object_new(Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m85AB837A51705B9DF96923F388345B9461B9882B(L_0, Dictionary_2__ctor_m85AB837A51705B9DF96923F388345B9461B9882B_RuntimeMethod_var);
		__this->___spawnedPrefabs_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnedPrefabs_5), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Board::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board__ctor_mD7649814C6B9E7EF83936BA430C66B0824FE3B5E (Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Building::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Building__ctor_m1966393898763C921095D832800266FB5532893F (Building_t950D5394E080624D7E96B158EF852EA16ADB3650* __this, const RuntimeMethod* method) 
{
	{
		// public int FloorNumber = 5;
		__this->___FloorNumber_2 = 5;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Destination::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Destination__ctor_mD311041C59D38BAA86F53F99FD0A8158F0421CB7 (Destination_t336101C9D43A1813C8DD5375BBEE228C8B09873F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Floor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Floor__ctor_mC6DD1BA9604B35FFF0346F67AA3D390F4C2439BF (Floor_t8880897F1802E67C7738331BDEFCBDBC6FA8B04C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void JsonReader::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_Awake_m4AF4AB63F85406051971389AA024D0F4470666F8 (JsonReader_t1271C2DA1700C99E7C67FB6BD5FEE6030BAB5FC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Building_t950D5394E080624D7E96B158EF852EA16ADB3650_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisBuilding_t950D5394E080624D7E96B158EF852EA16ADB3650_mB3612C3A0AF9AD0EAA3E70C2B5DBDD41143D186C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// building = new Building();
		Building_t950D5394E080624D7E96B158EF852EA16ADB3650* L_0 = (Building_t950D5394E080624D7E96B158EF852EA16ADB3650*)il2cpp_codegen_object_new(Building_t950D5394E080624D7E96B158EF852EA16ADB3650_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Building__ctor_m1966393898763C921095D832800266FB5532893F(L_0, NULL);
		__this->___building_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___building_5), (void*)L_0);
		// building = JsonUtility.FromJson<Building>(TextJson.text);
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_1 = __this->___TextJson_4;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9(L_1, NULL);
		Building_t950D5394E080624D7E96B158EF852EA16ADB3650* L_3;
		L_3 = JsonUtility_FromJson_TisBuilding_t950D5394E080624D7E96B158EF852EA16ADB3650_mB3612C3A0AF9AD0EAA3E70C2B5DBDD41143D186C(L_2, JsonUtility_FromJson_TisBuilding_t950D5394E080624D7E96B158EF852EA16ADB3650_mB3612C3A0AF9AD0EAA3E70C2B5DBDD41143D186C_RuntimeMethod_var);
		__this->___building_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___building_5), (void*)L_3);
		// }
		return;
	}
}
// System.Void JsonReader::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_Start_m38AE840ED5D2CB235A6D76DC9D2C9307F5F0439D (JsonReader_t1271C2DA1700C99E7C67FB6BD5FEE6030BAB5FC4* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void JsonReader::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_Update_mC24CC04C22594419559029255F07B56C557C4831 (JsonReader_t1271C2DA1700C99E7C67FB6BD5FEE6030BAB5FC4* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void JsonReader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader__ctor_m06A868F72E1F82C94E09163D308C07F9AFB6601E (JsonReader_t1271C2DA1700C99E7C67FB6BD5FEE6030BAB5FC4* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// InformationManager InformationManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InformationManager_tAF28A07274ECBF7093F42C4DFBF9925B8C5AACC8* InformationManager_get_Instance_m72C3009FC61E161E285750A2C1146AB314E801FC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InformationManager_tAF28A07274ECBF7093F42C4DFBF9925B8C5AACC8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static InformationManager Instance => m_instance;
		InformationManager_tAF28A07274ECBF7093F42C4DFBF9925B8C5AACC8* L_0 = ((InformationManager_tAF28A07274ECBF7093F42C4DFBF9925B8C5AACC8_StaticFields*)il2cpp_codegen_static_fields_for(InformationManager_tAF28A07274ECBF7093F42C4DFBF9925B8C5AACC8_il2cpp_TypeInfo_var))->___m_instance_4;
		return L_0;
	}
}
// System.Void InformationManager::add_OnItemAddedEvent(InformationManager/OnItemAdded)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InformationManager_add_OnItemAddedEvent_mB79967F0B36484F9E31A19ADB39A387B048C7C10 (OnItemAdded_t2402AA9BA550CBE1A1C889D8AB22EAF722C7CB47* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InformationManager_tAF28A07274ECBF7093F42C4DFBF9925B8C5AACC8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnItemAdded_t2402AA9BA550CBE1A1C889D8AB22EAF722C7CB47_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnItemAdded_t2402AA9BA550CBE1A1C889D8AB22EAF722C7CB47* V_0 = NULL;
	OnItemAdded_t2402AA9BA550CBE1A1C889D8AB22EAF722C7CB47* V_1 = NULL;
	OnItemAdded_t2402AA9BA550CBE1A1C889D8AB22EAF722C7CB47* V_2 = NULL;
	{
		OnItemAdded_t2402AA9BA550CBE1A1C889D8AB22EAF722C7CB47* L_0 = ((InformationManager_tAF28A07274ECBF7093F42C4DFBF9925B8C5AACC8_StaticFields*)il2cpp_codegen_static_fields_for(InformationManager_tAF28A07274ECBF7093F42C4DFBF9925B8C5AACC8_il2cpp_TypeInfo_var))->___OnItemAddedEvent_5;
		V_0 = L_0;
	}

IL_0006:
	{
		OnItemAdded_t2402AA9BA550CBE1A1C889D8AB22EAF722C7CB47* L_1 = V_0;
		V_1 = L_1;
		OnItemAdded_t2402AA9BA550CBE1A1C889D8AB22EAF722C7CB47* L_2 = V_1;
		OnItemAdded_t2402AA9BA550CBE1A1C889D8AB22EAF722C7CB47* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((OnItemAdded_t2402AA9BA550CBE1A1C889D8AB22EAF722C7CB47*)CastclassSealed((RuntimeObject*)L_4, OnItemAdded_t2402AA9BA550CBE1A1C889D8AB22EAF722C7CB47_il2cpp_TypeInfo_var));
		OnItemAdded_t2402AA9BA550CBE1A1C889D8AB22EAF722C7CB47* L_5 = V_2;
		OnItemAdded_t2402AA9BA550CBE1A1C889D8AB22EAF722C7CB47* L_6 = V_1;
		OnItemAdded_t2402AA9BA550CBE1A1C889D8AB22EAF722C7CB47* L_7;
		L_7 = InterlockedCompareExchangeImpl<OnItemAdded_t2402AA9BA550CBE1A1C889D8AB22EAF722C7CB47*>((&((InformationManager_tAF28A07274ECBF7093F42C4DFBF9925B8C5AACC8_StaticFields*)il2cpp_codegen_static_fields_for(InformationManager_tAF28A07274ECBF7093F42C4DFBF9925B8C5AACC8_il2cpp_TypeInfo_var))->___OnItemAddedEvent_5), L_5, L_6);
		V_0 = L_7;
		OnItemAdded_t2402AA9BA550CBE1A1C889D8AB22EAF722C7CB47* L_8 = V_0;
		OnItemAdded_t2402AA9BA550CBE1A1C889D8AB22EAF722C7CB47* L_9 = V_1;
		if ((!(((RuntimeObject*)(OnItemAdded_t2402AA9BA550CBE1A1C889D8AB22EAF722C7CB47*)L_8) == ((RuntimeObject*)(OnItemAdded_t2402AA9BA550CBE1A1C889D8AB22EAF722C7CB47*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void InformationManager::remove_OnItemAddedEvent(InformationManager/OnItemAdded)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InformationManager_remove_OnItemAddedEvent_mB5F97754405E3E6DA96CEFE05BD8E7154F066371 (OnItemAdded_t2402AA9BA550CBE1A1C889D8AB22EAF722C7CB47* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InformationManager_tAF28A07274ECBF7093F42C4DFBF9925B8C5AACC8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnItemAdded_t2402AA9BA550CBE1A1C889D8AB22EAF722C7CB47_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnItemAdded_t2402AA9BA550CBE1A1C889D8AB22EAF722C7CB47* V_0 = NULL;
	OnItemAdded_t2402AA9BA550CBE1A1C889D8AB22EAF722C7CB47* V_1 = NULL;
	OnItemAdded_t2402AA9BA550CBE1A1C889D8AB22EAF722C7CB47* V_2 = NULL;
	{
		OnItemAdded_t2402AA9BA550CBE1A1C889D8AB22EAF722C7CB47* L_0 = ((InformationManager_tAF28A07274ECBF7093F42C4DFBF9925B8C5AACC8_StaticFields*)il2cpp_codegen_static_fields_for(InformationManager_tAF28A07274ECBF7093F42C4DFBF9925B8C5AACC8_il2cpp_TypeInfo_var))->___OnItemAddedEvent_5;
		V_0 = L_0;
	}

IL_0006:
	{
		OnItemAdded_t2402AA9BA550CBE1A1C889D8AB22EAF722C7CB47* L_1 = V_0;
		V_1 = L_1;
		OnItemAdded_t2402AA9BA550CBE1A1C889D8AB22EAF722C7CB47* L_2 = V_1;
		OnItemAdded_t2402AA9BA550CBE1A1C889D8AB22EAF722C7CB47* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((OnItemAdded_t2402AA9BA550CBE1A1C889D8AB22EAF722C7CB47*)CastclassSealed((RuntimeObject*)L_4, OnItemAdded_t2402AA9BA550CBE1A1C889D8AB22EAF722C7CB47_il2cpp_TypeInfo_var));
		OnItemAdded_t2402AA9BA550CBE1A1C889D8AB22EAF722C7CB47* L_5 = V_2;
		OnItemAdded_t2402AA9BA550CBE1A1C889D8AB22EAF722C7CB47* L_6 = V_1;
		OnItemAdded_t2402AA9BA550CBE1A1C889D8AB22EAF722C7CB47* L_7;
		L_7 = InterlockedCompareExchangeImpl<OnItemAdded_t2402AA9BA550CBE1A1C889D8AB22EAF722C7CB47*>((&((InformationManager_tAF28A07274ECBF7093F42C4DFBF9925B8C5AACC8_StaticFields*)il2cpp_codegen_static_fields_for(InformationManager_tAF28A07274ECBF7093F42C4DFBF9925B8C5AACC8_il2cpp_TypeInfo_var))->___OnItemAddedEvent_5), L_5, L_6);
		V_0 = L_7;
		OnItemAdded_t2402AA9BA550CBE1A1C889D8AB22EAF722C7CB47* L_8 = V_0;
		OnItemAdded_t2402AA9BA550CBE1A1C889D8AB22EAF722C7CB47* L_9 = V_1;
		if ((!(((RuntimeObject*)(OnItemAdded_t2402AA9BA550CBE1A1C889D8AB22EAF722C7CB47*)L_8) == ((RuntimeObject*)(OnItemAdded_t2402AA9BA550CBE1A1C889D8AB22EAF722C7CB47*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void InformationManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InformationManager_Awake_mD723AB45BF982F289EDDCA38B4CC768641251B4B (InformationManager_tAF28A07274ECBF7093F42C4DFBF9925B8C5AACC8* __this, const RuntimeMethod* method) 
{
	{
		// CreateSingleton();
		InformationManager_CreateSingleton_m72C2BF140262C8443F75A6D748CF76E2485F8166(__this, NULL);
		// }
		return;
	}
}
// System.Void InformationManager::CreateSingleton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InformationManager_CreateSingleton_m72C2BF140262C8443F75A6D748CF76E2485F8166 (InformationManager_tAF28A07274ECBF7093F42C4DFBF9925B8C5AACC8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InformationManager_tAF28A07274ECBF7093F42C4DFBF9925B8C5AACC8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_instance == null)
		InformationManager_tAF28A07274ECBF7093F42C4DFBF9925B8C5AACC8* L_0 = ((InformationManager_tAF28A07274ECBF7093F42C4DFBF9925B8C5AACC8_StaticFields*)il2cpp_codegen_static_fields_for(InformationManager_tAF28A07274ECBF7093F42C4DFBF9925B8C5AACC8_il2cpp_TypeInfo_var))->___m_instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// m_instance = this;
		((InformationManager_tAF28A07274ECBF7093F42C4DFBF9925B8C5AACC8_StaticFields*)il2cpp_codegen_static_fields_for(InformationManager_tAF28A07274ECBF7093F42C4DFBF9925B8C5AACC8_il2cpp_TypeInfo_var))->___m_instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((InformationManager_tAF28A07274ECBF7093F42C4DFBF9925B8C5AACC8_StaticFields*)il2cpp_codegen_static_fields_for(InformationManager_tAF28A07274ECBF7093F42C4DFBF9925B8C5AACC8_il2cpp_TypeInfo_var))->___m_instance_4), (void*)__this);
		return;
	}

IL_0014:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_2, NULL);
		// }
		return;
	}
}
// System.Void InformationManager::AddItem(ItemData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InformationManager_AddItem_mA55148DA01DB77CCF31BC20E31D602665F59FB5E (InformationManager_tAF28A07274ECBF7093F42C4DFBF9925B8C5AACC8* __this, ItemData_t7FB0F9911AFA201D097B2B0D2353002ECE882538* ___itemData0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void InformationManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InformationManager_Start_m9D2838F60EF812E4EA3F10C3FC2C30C503FA21EE (InformationManager_tAF28A07274ECBF7093F42C4DFBF9925B8C5AACC8* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void InformationManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InformationManager_Update_m255E25243A6203463E50E8CF08127B93D1CDBB81 (InformationManager_tAF28A07274ECBF7093F42C4DFBF9925B8C5AACC8* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void InformationManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InformationManager__ctor_m2B86C3F72C808A4C5DD6B414B9E3D18D75A30EF0 (InformationManager_tAF28A07274ECBF7093F42C4DFBF9925B8C5AACC8* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
void OnItemAdded_Invoke_m6B43FEAF8E272A7C35C2CFAF348AF77CA0A43830_Multicast(OnItemAdded_t2402AA9BA550CBE1A1C889D8AB22EAF722C7CB47* __this, ItemData_t7FB0F9911AFA201D097B2B0D2353002ECE882538* ___item0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnItemAdded_t2402AA9BA550CBE1A1C889D8AB22EAF722C7CB47* currentDelegate = reinterpret_cast<OnItemAdded_t2402AA9BA550CBE1A1C889D8AB22EAF722C7CB47*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, ItemData_t7FB0F9911AFA201D097B2B0D2353002ECE882538*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___item0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnItemAdded_Invoke_m6B43FEAF8E272A7C35C2CFAF348AF77CA0A43830_OpenInst(OnItemAdded_t2402AA9BA550CBE1A1C889D8AB22EAF722C7CB47* __this, ItemData_t7FB0F9911AFA201D097B2B0D2353002ECE882538* ___item0, const RuntimeMethod* method)
{
	NullCheck(___item0);
	typedef void (*FunctionPointerType) (ItemData_t7FB0F9911AFA201D097B2B0D2353002ECE882538*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___item0, method);
}
void OnItemAdded_Invoke_m6B43FEAF8E272A7C35C2CFAF348AF77CA0A43830_OpenStatic(OnItemAdded_t2402AA9BA550CBE1A1C889D8AB22EAF722C7CB47* __this, ItemData_t7FB0F9911AFA201D097B2B0D2353002ECE882538* ___item0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (ItemData_t7FB0F9911AFA201D097B2B0D2353002ECE882538*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___item0, method);
}
void OnItemAdded_Invoke_m6B43FEAF8E272A7C35C2CFAF348AF77CA0A43830_OpenStaticInvoker(OnItemAdded_t2402AA9BA550CBE1A1C889D8AB22EAF722C7CB47* __this, ItemData_t7FB0F9911AFA201D097B2B0D2353002ECE882538* ___item0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< ItemData_t7FB0F9911AFA201D097B2B0D2353002ECE882538* >::Invoke(__this->___method_ptr_0, method, NULL, ___item0);
}
void OnItemAdded_Invoke_m6B43FEAF8E272A7C35C2CFAF348AF77CA0A43830_ClosedStaticInvoker(OnItemAdded_t2402AA9BA550CBE1A1C889D8AB22EAF722C7CB47* __this, ItemData_t7FB0F9911AFA201D097B2B0D2353002ECE882538* ___item0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, ItemData_t7FB0F9911AFA201D097B2B0D2353002ECE882538* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___item0);
}
void OnItemAdded_Invoke_m6B43FEAF8E272A7C35C2CFAF348AF77CA0A43830_OpenVirtual(OnItemAdded_t2402AA9BA550CBE1A1C889D8AB22EAF722C7CB47* __this, ItemData_t7FB0F9911AFA201D097B2B0D2353002ECE882538* ___item0, const RuntimeMethod* method)
{
	NullCheck(___item0);
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___item0);
}
void OnItemAdded_Invoke_m6B43FEAF8E272A7C35C2CFAF348AF77CA0A43830_OpenInterface(OnItemAdded_t2402AA9BA550CBE1A1C889D8AB22EAF722C7CB47* __this, ItemData_t7FB0F9911AFA201D097B2B0D2353002ECE882538* ___item0, const RuntimeMethod* method)
{
	NullCheck(___item0);
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___item0);
}
void OnItemAdded_Invoke_m6B43FEAF8E272A7C35C2CFAF348AF77CA0A43830_OpenGenericVirtual(OnItemAdded_t2402AA9BA550CBE1A1C889D8AB22EAF722C7CB47* __this, ItemData_t7FB0F9911AFA201D097B2B0D2353002ECE882538* ___item0, const RuntimeMethod* method)
{
	NullCheck(___item0);
	GenericVirtualActionInvoker0::Invoke(method, ___item0);
}
void OnItemAdded_Invoke_m6B43FEAF8E272A7C35C2CFAF348AF77CA0A43830_OpenGenericInterface(OnItemAdded_t2402AA9BA550CBE1A1C889D8AB22EAF722C7CB47* __this, ItemData_t7FB0F9911AFA201D097B2B0D2353002ECE882538* ___item0, const RuntimeMethod* method)
{
	NullCheck(___item0);
	GenericInterfaceActionInvoker0::Invoke(method, ___item0);
}
// System.Void InformationManager/OnItemAdded::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnItemAdded__ctor_m930119574273D41E28CEF2636D83A70F6AAC4E98 (OnItemAdded_t2402AA9BA550CBE1A1C889D8AB22EAF722C7CB47* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnItemAdded_Invoke_m6B43FEAF8E272A7C35C2CFAF348AF77CA0A43830_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnItemAdded_Invoke_m6B43FEAF8E272A7C35C2CFAF348AF77CA0A43830_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnItemAdded_Invoke_m6B43FEAF8E272A7C35C2CFAF348AF77CA0A43830_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&OnItemAdded_Invoke_m6B43FEAF8E272A7C35C2CFAF348AF77CA0A43830_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnItemAdded_Invoke_m6B43FEAF8E272A7C35C2CFAF348AF77CA0A43830_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&OnItemAdded_Invoke_m6B43FEAF8E272A7C35C2CFAF348AF77CA0A43830_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnItemAdded_Invoke_m6B43FEAF8E272A7C35C2CFAF348AF77CA0A43830_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&OnItemAdded_Invoke_m6B43FEAF8E272A7C35C2CFAF348AF77CA0A43830_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OnItemAdded_Invoke_m6B43FEAF8E272A7C35C2CFAF348AF77CA0A43830_Multicast;
}
// System.Void InformationManager/OnItemAdded::Invoke(ItemData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnItemAdded_Invoke_m6B43FEAF8E272A7C35C2CFAF348AF77CA0A43830 (OnItemAdded_t2402AA9BA550CBE1A1C889D8AB22EAF722C7CB47* __this, ItemData_t7FB0F9911AFA201D097B2B0D2353002ECE882538* ___item0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ItemData_t7FB0F9911AFA201D097B2B0D2353002ECE882538*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___item0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult InformationManager/OnItemAdded::BeginInvoke(ItemData,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnItemAdded_BeginInvoke_m7434D8ABD091A97F9F0629833D79A929F2B4E90F (OnItemAdded_t2402AA9BA550CBE1A1C889D8AB22EAF722C7CB47* __this, ItemData_t7FB0F9911AFA201D097B2B0D2353002ECE882538* ___item0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___item0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void InformationManager/OnItemAdded::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnItemAdded_EndInvoke_m07A29543915B4A9BDE91C60966D7A04306A05CB5 (OnItemAdded_t2402AA9BA550CBE1A1C889D8AB22EAF722C7CB47* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ItemData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemData__ctor_mE45701993578016C9B2E439E01BFD91E13EBEAF0 (ItemData_t7FB0F9911AFA201D097B2B0D2353002ECE882538* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void ItemObject::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemObject_OnTriggerEnter_m5EA19A7772D8EA9E47E3BAA61470987760C68438 (ItemObject_t755B394AFC69522A556F5EBA9AD67B1D4E2D90C0* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ItemObject::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemObject_Start_mC05A19318BD6DBC01DB6C535B8139E045F539B19 (ItemObject_t755B394AFC69522A556F5EBA9AD67B1D4E2D90C0* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ItemObject::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemObject_Update_m48A79230A3812F54E4D787394B33A0372300CDE9 (ItemObject_t755B394AFC69522A556F5EBA9AD67B1D4E2D90C0* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ItemObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemObject__ctor_m083E3F08AB9F0B57931DB8BD73D9C43E709C841E (ItemObject_t755B394AFC69522A556F5EBA9AD67B1D4E2D90C0* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void JsonHander::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonHander_Awake_m168EEDD5F1D43F891C0D2FD71E46BE0BE930FEE9 (JsonHander_tF07AB89128AEFD1B804324FDC3B8C1D92907870D* __this, const RuntimeMethod* method) 
{
	{
		// hander = this.gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		__this->___hander_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hander_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void JsonHander::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonHander_Start_mE97097C2A67CEA3AADA518E5CADC6C8A6EDD8F1F (JsonHander_tF07AB89128AEFD1B804324FDC3B8C1D92907870D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InfoType_tA6A0FA94B862D105858AD537B942E67C0068B205_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DestinationU5BU5D_t329EC9350AEAB9CAAA3F6A174EB2081F19C72D31* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	int32_t V_2 = 0;
	Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* V_3 = NULL;
	{
		// var destinationData = reader.building.BasementOne.destinations;
		JsonReader_t1271C2DA1700C99E7C67FB6BD5FEE6030BAB5FC4* L_0 = __this->___reader_5;
		NullCheck(L_0);
		Building_t950D5394E080624D7E96B158EF852EA16ADB3650* L_1 = L_0->___building_5;
		NullCheck(L_1);
		Floor_t8880897F1802E67C7738331BDEFCBDBC6FA8B04C* L_2 = L_1->___BasementOne_3;
		NullCheck(L_2);
		DestinationU5BU5D_t329EC9350AEAB9CAAA3F6A174EB2081F19C72D31* L_3 = L_2->___destinations_0;
		V_0 = L_3;
		// var canvasGroup = hander.transform.GetChild(1).GetChild(0).GetChild(0).GetChild(0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___hander_4;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_5, 1, NULL);
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_6, 0, NULL);
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_7, 0, NULL);
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_8, 0, NULL);
		V_1 = L_9;
		// for (int i = 0; i < destinationData.Length; i++)
		V_2 = 0;
		goto IL_00e6;
	}

IL_0041:
	{
		// if (hander.name == destinationData[i].title)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___hander_4;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_10, NULL);
		DestinationU5BU5D_t329EC9350AEAB9CAAA3F6A174EB2081F19C72D31* L_12 = V_0;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Destination_t336101C9D43A1813C8DD5375BBEE228C8B09873F* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		String_t* L_16 = L_15->___title_1;
		bool L_17;
		L_17 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_11, L_16, NULL);
		if (!L_17)
		{
			goto IL_00e2;
		}
	}
	{
		// var boardInformation = destinationData[i].board;
		DestinationU5BU5D_t329EC9350AEAB9CAAA3F6A174EB2081F19C72D31* L_18 = V_0;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		Destination_t336101C9D43A1813C8DD5375BBEE228C8B09873F* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_21);
		Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* L_22 = L_21->___board_2;
		V_3 = L_22;
		// canvasGroup.GetChild(0).gameObject.GetComponent<Text>().text = boardInformation.title;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = V_1;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_23, 0, NULL);
		NullCheck(L_24);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_24, NULL);
		NullCheck(L_25);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_26;
		L_26 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_25, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* L_27 = V_3;
		NullCheck(L_27);
		String_t* L_28 = L_27->___title_0;
		NullCheck(L_26);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_26, L_28);
		// canvasGroup.GetChild(0).gameObject.GetComponent<Text>().text = boardInformation.title;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = V_1;
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_29, 0, NULL);
		NullCheck(L_30);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31;
		L_31 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_30, NULL);
		NullCheck(L_31);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_32;
		L_32 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_31, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* L_33 = V_3;
		NullCheck(L_33);
		String_t* L_34 = L_33->___title_0;
		NullCheck(L_32);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_32, L_34);
		// canvasGroup.GetChild(1).gameObject.GetComponent<Text>().text = boardInformation.TypeInfo.ToString();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35 = V_1;
		NullCheck(L_35);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_35, 1, NULL);
		NullCheck(L_36);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37;
		L_37 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_36, NULL);
		NullCheck(L_37);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_38;
		L_38 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_37, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* L_39 = V_3;
		NullCheck(L_39);
		int32_t* L_40 = (&L_39->___TypeInfo_2);
		Il2CppFakeBox<int32_t> L_41(InfoType_tA6A0FA94B862D105858AD537B942E67C0068B205_il2cpp_TypeInfo_var, L_40);
		String_t* L_42;
		L_42 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_41), NULL);
		NullCheck(L_38);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_38, L_42);
		// canvasGroup.GetChild(2).gameObject.GetComponent<Text>().text = boardInformation.content;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43 = V_1;
		NullCheck(L_43);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44;
		L_44 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_43, 2, NULL);
		NullCheck(L_44);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45;
		L_45 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_44, NULL);
		NullCheck(L_45);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_46;
		L_46 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_45, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		Board_t924A10F2404EA6D3DB02711555BEDFD794B70C1A* L_47 = V_3;
		NullCheck(L_47);
		String_t* L_48 = L_47->___content_1;
		NullCheck(L_46);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_46, L_48);
	}

IL_00e2:
	{
		// for (int i = 0; i < destinationData.Length; i++)
		int32_t L_49 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_00e6:
	{
		// for (int i = 0; i < destinationData.Length; i++)
		int32_t L_50 = V_2;
		DestinationU5BU5D_t329EC9350AEAB9CAAA3F6A174EB2081F19C72D31* L_51 = V_0;
		NullCheck(L_51);
		if ((((int32_t)L_50) < ((int32_t)((int32_t)(((RuntimeArray*)L_51)->max_length)))))
		{
			goto IL_0041;
		}
	}
	{
		// }
		return;
	}
}
// System.Void JsonHander::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonHander_Update_m86FC42FDE0E428161B99DB362035E5C203DB0CFE (JsonHander_tF07AB89128AEFD1B804324FDC3B8C1D92907870D* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void JsonHander::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonHander__ctor_mB2F5176B7A99FC63623E22EBD8EA3FE579E91054 (JsonHander_tF07AB89128AEFD1B804324FDC3B8C1D92907870D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ModularBillBoard::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModularBillBoard_Awake_m6757BEAA47DDE2958831D0BDDF21CA62FB412483 (ModularBillBoard_t5C2BFA11672ED08924996A3126DF7684C94B7DE5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LandmarkIcon.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___LandmarkIcon_5;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// LandmarkLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___LandmarkLeft_6;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// LandmarkRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___LandmarkRight_7;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// Mask.gameObject.SetActive(false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = __this->___Mask_8;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// if(Content != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___Content_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_004f;
		}
	}
	{
		// Content.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___Content_10;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
	}

IL_004f:
	{
		// CalculateDerivedValues();
		ModularBillBoard_CalculateDerivedValues_m304586089018E377063F464282F6F742413D23A4(__this, NULL);
		// }
		return;
	}
}
// System.Void ModularBillBoard::CalculateDerivedValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModularBillBoard_CalculateDerivedValues_m304586089018E377063F464282F6F742413D23A4 (ModularBillBoard_t5C2BFA11672ED08924996A3126DF7684C94B7DE5* __this, const RuntimeMethod* method) 
{
	{
		// mOpeningDistance = OpeningStarted - OpeningFinished;
		float L_0 = __this->___OpeningStarted_11;
		float L_1 = __this->___OpeningFinished_12;
		__this->___mOpeningDistance_22 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// CalculateMaskSize();
		ModularBillBoard_CalculateMaskSize_m205ED3891CC3D928E62D739C5F22FD3318B3A725(__this, NULL);
		// CalculateLandmarkPosition();
		ModularBillBoard_CalculateLandmarkPosition_mF18B8B744648A58A46029E7EF14BDA8A7AAE1A88(__this, NULL);
		// }
		return;
	}
}
// System.Void ModularBillBoard::CalculateMaskSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModularBillBoard_CalculateMaskSize_m205ED3891CC3D928E62D739C5F22FD3318B3A725 (ModularBillBoard_t5C2BFA11672ED08924996A3126DF7684C94B7DE5* __this, const RuntimeMethod* method) 
{
	{
		// mMaxSizeY = Mask.sizeDelta.y;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___Mask_8;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_0, NULL);
		float L_2 = L_1.___y_1;
		__this->___mMaxSizeY_19 = L_2;
		// mMaxPositionY = Mask.localPosition.y;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = __this->___Mask_8;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_3, NULL);
		float L_5 = L_4.___y_3;
		__this->___mMaxPositionY_17 = L_5;
		// Mask.sizeDelta = new Vector2(Mask.sizeDelta.x, mMinSizeY);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = __this->___Mask_8;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = __this->___Mask_8;
		NullCheck(L_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_7, NULL);
		float L_9 = L_8.___x_0;
		float L_10 = __this->___mMinSizeY_18;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_11), L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_6);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_6, L_11, NULL);
		// Mask.localPosition = new Vector3(Mask.localPosition.x, mMinPositionY, Mask.localPosition.z);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_12 = __this->___Mask_8;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_13 = __this->___Mask_8;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_13, NULL);
		float L_15 = L_14.___x_2;
		float L_16 = __this->___mMinPositionY_16;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_17 = __this->___Mask_8;
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_17, NULL);
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_20), L_15, L_16, L_19, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_12, L_20, NULL);
		// }
		return;
	}
}
// System.Void ModularBillBoard::CalculateLandmarkPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModularBillBoard_CalculateLandmarkPosition_mF18B8B744648A58A46029E7EF14BDA8A7AAE1A88 (ModularBillBoard_t5C2BFA11672ED08924996A3126DF7684C94B7DE5* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var contentMaskSize = Mask.sizeDelta;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___Mask_8;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_0, NULL);
		V_0 = L_1;
		// var leftLandmarkLocalPosition = LandmarkLeft.transform.localPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___LandmarkLeft_6;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_3, NULL);
		V_1 = L_4;
		// mLandmarkLStart = leftLandmarkLocalPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_1;
		__this->___mLandmarkLStart_24 = L_5;
		// mLandmarkLEnd = new Vector3(leftLandmarkLocalPosition.x - contentMaskSize.x / 2f,
		//     leftLandmarkLocalPosition.y, leftLandmarkLocalPosition.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_1;
		float L_7 = L_6.___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_0;
		float L_9 = L_8.___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_1;
		float L_11 = L_10.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_1;
		float L_13 = L_12.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_14), ((float)il2cpp_codegen_subtract(L_7, ((float)(L_9/(2.0f))))), L_11, L_13, /*hidden argument*/NULL);
		__this->___mLandmarkLEnd_23 = L_14;
		// var rightLandmarkLocalPosition = LandmarkRight.transform.localPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___LandmarkRight_7;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_16, NULL);
		V_2 = L_17;
		// mLandmarkRStart = rightLandmarkLocalPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_2;
		__this->___mLandmarkRStart_26 = L_18;
		// mLandmarkREnd = new Vector3(rightLandmarkLocalPosition.x + contentMaskSize.x / 2f,
		//     rightLandmarkLocalPosition.y, rightLandmarkLocalPosition.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_2;
		float L_20 = L_19.___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = V_0;
		float L_22 = L_21.___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_2;
		float L_24 = L_23.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_2;
		float L_26 = L_25.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_27), ((float)il2cpp_codegen_add(L_20, ((float)(L_22/(2.0f))))), L_24, L_26, /*hidden argument*/NULL);
		__this->___mLandmarkREnd_25 = L_27;
		// mMaskStartSize = new Vector2(0, contentMaskSize.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28 = V_0;
		float L_29 = L_28.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30;
		memset((&L_30), 0, sizeof(L_30));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_30), (0.0f), L_29, /*hidden argument*/NULL);
		__this->___mMaskStartSize_27 = L_30;
		// mMaskEndSize = contentMaskSize;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31 = V_0;
		__this->___mMaskEndSize_28 = L_31;
		// }
		return;
	}
}
// System.Void ModularBillBoard::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModularBillBoard_Update_mE65208BAC3B6E24DB99924E5EE2733F9E9F7FAD8 (ModularBillBoard_t5C2BFA11672ED08924996A3126DF7684C94B7DE5* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// transform.rotation = Quaternion.LookRotation(transform.position - ArCamera.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___ArCamera_4;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_2, L_4, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3(L_5, NULL);
		NullCheck(L_0);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_0, L_6, NULL);
		// var currentDistanceFromArCamera = Vector3.Distance(transform.position, ArCamera.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = __this->___ArCamera_4;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		float L_11;
		L_11 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_8, L_10, NULL);
		V_0 = L_11;
		// if (currentDistanceFromArCamera <= OpeningFinished)
		float L_12 = V_0;
		float L_13 = __this->___OpeningFinished_12;
		if ((!(((float)L_12) <= ((float)L_13))))
		{
			goto IL_0057;
		}
	}
	{
		// FullyOpened();
		ModularBillBoard_FullyOpened_mC5A097D00A64AACA7E211727111B547BB1B5E56F(__this, NULL);
		return;
	}

IL_0057:
	{
		// else if (currentDistanceFromArCamera >= OpeningStarted)
		float L_14 = V_0;
		float L_15 = __this->___OpeningStarted_11;
		if ((!(((float)L_14) >= ((float)L_15))))
		{
			goto IL_0067;
		}
	}
	{
		// Closed();
		ModularBillBoard_Closed_m5F5017F6FA1664B16102CE6B33B2E178A7A4231B(__this, NULL);
		return;
	}

IL_0067:
	{
		// Opening(currentDistanceFromArCamera);
		float L_16 = V_0;
		ModularBillBoard_Opening_m89F36DB21F8B71B0248CDA19FEEDDF920A75BFDD(__this, L_16, NULL);
		// }
		return;
	}
}
// System.Void ModularBillBoard::Opening(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModularBillBoard_Opening_m89F36DB21F8B71B0248CDA19FEEDDF920A75BFDD (ModularBillBoard_t5C2BFA11672ED08924996A3126DF7684C94B7DE5* __this, float ___currentDistanceFromArCamera0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// SwitchtoOpening();
		ModularBillBoard_SwitchtoOpening_m581BAED245A45CC90E55E1CF1F81F7052728353B(__this, NULL);
		// var currentPercentage = Mathf.Abs(OpeningStarted - currentDistanceFromArCamera) / mOpeningDistance;
		float L_0 = __this->___OpeningStarted_11;
		float L_1 = ___currentDistanceFromArCamera0;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3 = __this->___mOpeningDistance_22;
		V_0 = ((float)(L_2/L_3));
		// LandmarkLeft.transform.localPosition = Vector3.Lerp(mLandmarkLStart, mLandmarkLEnd, currentPercentage);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___LandmarkLeft_6;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___mLandmarkLStart_24;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->___mLandmarkLEnd_23;
		float L_8 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_6, L_7, L_8, NULL);
		NullCheck(L_5);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_5, L_9, NULL);
		// LandmarkRight.transform.localPosition = Vector3.Lerp(mLandmarkRStart, mLandmarkREnd, currentPercentage);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___LandmarkRight_7;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = __this->___mLandmarkRStart_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = __this->___mLandmarkREnd_25;
		float L_14 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_12, L_13, L_14, NULL);
		NullCheck(L_11);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_11, L_15, NULL);
		// Mask.sizeDelta = Vector2.Lerp(mMaskStartSize, mMaskEndSize, currentPercentage);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_16 = __this->___Mask_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = __this->___mMaskStartSize_27;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = __this->___mMaskEndSize_28;
		float L_19 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = Vector2_Lerp_mF3BD6827807680A529E800FD027734D40A3597E1_inline(L_17, L_18, L_19, NULL);
		NullCheck(L_16);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_16, L_20, NULL);
		// }
		return;
	}
}
// System.Void ModularBillBoard::Closed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModularBillBoard_Closed_m5F5017F6FA1664B16102CE6B33B2E178A7A4231B (ModularBillBoard_t5C2BFA11672ED08924996A3126DF7684C94B7DE5* __this, const RuntimeMethod* method) 
{
	{
		// SwitchToClosed();
		ModularBillBoard_SwitchToClosed_mBA4CA0822C9BEA0707399D099A2AD8A257D7F7DD(__this, NULL);
		// }
		return;
	}
}
// System.Void ModularBillBoard::FullyOpened()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModularBillBoard_FullyOpened_mC5A097D00A64AACA7E211727111B547BB1B5E56F (ModularBillBoard_t5C2BFA11672ED08924996A3126DF7684C94B7DE5* __this, const RuntimeMethod* method) 
{
	{
		// SwitchedToOpen();
		ModularBillBoard_SwitchedToOpen_m840CA75958E7CA851E582EDF57625E0EE5902DE3(__this, NULL);
		// if (!mHasBackgroundRolledOut)
		bool L_0 = __this->___mHasBackgroundRolledOut_15;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		// RollOutTheBackgroundForContent();
		ModularBillBoard_RollOutTheBackgroundForContent_m2C8A18BF0D68113A6DB6F9AAEC8C4E594E30C251(__this, NULL);
		return;
	}

IL_0015:
	{
		// TurnContentVisible();
		ModularBillBoard_TurnContentVisible_mE6D2A6CB926227C3E05C1682760D1EE7494750CC(__this, NULL);
		// }
		return;
	}
}
// System.Void ModularBillBoard::TurnContentVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModularBillBoard_TurnContentVisible_mE6D2A6CB926227C3E05C1682760D1EE7494750CC (ModularBillBoard_t5C2BFA11672ED08924996A3126DF7684C94B7DE5* __this, const RuntimeMethod* method) 
{
	{
		// if (mAlpha > 0)
		float L_0 = __this->___mAlpha_21;
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_0053;
		}
	}
	{
		// mAlpha -= Time.deltaTime;
		float L_1 = __this->___mAlpha_21;
		float L_2;
		L_2 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___mAlpha_21 = ((float)il2cpp_codegen_subtract(L_1, L_2));
		// ContentCanvasGroup.alpha = 1 - mAlpha;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_3 = __this->___ContentCanvasGroup_9;
		float L_4 = __this->___mAlpha_21;
		NullCheck(L_3);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_3, ((float)il2cpp_codegen_subtract((1.0f), L_4)), NULL);
		// if (mAlpha <= 0)
		float L_5 = __this->___mAlpha_21;
		if ((!(((float)L_5) <= ((float)(0.0f)))))
		{
			goto IL_0053;
		}
	}
	{
		// ContentCanvasGroup.alpha = 1;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_6 = __this->___ContentCanvasGroup_9;
		NullCheck(L_6);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_6, (1.0f), NULL);
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Void ModularBillBoard::RollOutTheBackgroundForContent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModularBillBoard_RollOutTheBackgroundForContent_m2C8A18BF0D68113A6DB6F9AAEC8C4E594E30C251 (ModularBillBoard_t5C2BFA11672ED08924996A3126DF7684C94B7DE5* __this, const RuntimeMethod* method) 
{
	{
		// mCurrentRollOutTime += Time.deltaTime / ROLL_TIME;
		float L_0 = __this->___mCurrentRollOutTime_14;
		float L_1;
		L_1 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___mCurrentRollOutTime_14 = ((float)il2cpp_codegen_add(L_0, ((float)(L_1/(0.25f)))));
		// Mask.sizeDelta = new Vector2(Mask.sizeDelta.x, Mathf.Lerp(mMinSizeY,
		//     mMaxSizeY, mCurrentRollOutTime));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = __this->___Mask_8;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = __this->___Mask_8;
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_3, NULL);
		float L_5 = L_4.___x_0;
		float L_6 = __this->___mMinSizeY_18;
		float L_7 = __this->___mMaxSizeY_19;
		float L_8 = __this->___mCurrentRollOutTime_14;
		float L_9;
		L_9 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_6, L_7, L_8, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_10), L_5, L_9, /*hidden argument*/NULL);
		NullCheck(L_2);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_2, L_10, NULL);
		// Mask.localPosition = Vector3.Lerp(new Vector3(0,mMinPositionY, 0),
		//     new Vector3(0, mMaxPositionY, 0), mCurrentRollOutTime);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11 = __this->___Mask_8;
		float L_12 = __this->___mMinPositionY_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_13), (0.0f), L_12, (0.0f), /*hidden argument*/NULL);
		float L_14 = __this->___mMaxPositionY_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_15), (0.0f), L_14, (0.0f), /*hidden argument*/NULL);
		float L_16 = __this->___mCurrentRollOutTime_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_13, L_15, L_16, NULL);
		NullCheck(L_11);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_11, L_17, NULL);
		// if (mCurrentRollOutTime >= 1)
		float L_18 = __this->___mCurrentRollOutTime_14;
		if ((!(((float)L_18) >= ((float)(1.0f)))))
		{
			goto IL_00ae;
		}
	}
	{
		// mCurrentRollOutTime = 0;
		__this->___mCurrentRollOutTime_14 = (0.0f);
		// mHasBackgroundRolledOut = true;
		__this->___mHasBackgroundRolledOut_15 = (bool)1;
	}

IL_00ae:
	{
		// }
		return;
	}
}
// System.Void ModularBillBoard::SwitchedToOpen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModularBillBoard_SwitchedToOpen_m840CA75958E7CA851E582EDF57625E0EE5902DE3 (ModularBillBoard_t5C2BFA11672ED08924996A3126DF7684C94B7DE5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(mState == BillBoardState.OPENED)
		int32_t L_0 = __this->___mState_13;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// mState = BillBoardState.OPENED;
		__this->___mState_13 = 0;
		// LandmarkIcon.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___LandmarkIcon_5;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// LandmarkLeft.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___LandmarkLeft_6;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// LandmarkRight.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___LandmarkRight_7;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// mAlpha = 1;
		__this->___mAlpha_21 = (1.0f);
		// if (Content != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___Content_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0059;
		}
	}
	{
		// Content.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___Content_10;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void ModularBillBoard::SwitchToClosed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModularBillBoard_SwitchToClosed_mBA4CA0822C9BEA0707399D099A2AD8A257D7F7DD (ModularBillBoard_t5C2BFA11672ED08924996A3126DF7684C94B7DE5* __this, const RuntimeMethod* method) 
{
	{
		// if (mState == BillBoardState.CLOSED)
		int32_t L_0 = __this->___mState_13;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// mState = BillBoardState.CLOSED;
		__this->___mState_13 = 1;
		// LandmarkIcon.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___LandmarkIcon_5;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// LandmarkLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___LandmarkLeft_6;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// LandmarkRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___LandmarkRight_7;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// Mask.gameObject.SetActive(false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = __this->___Mask_8;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ModularBillBoard::SwitchtoOpening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModularBillBoard_SwitchtoOpening_m581BAED245A45CC90E55E1CF1F81F7052728353B (ModularBillBoard_t5C2BFA11672ED08924996A3126DF7684C94B7DE5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mState == BillBoardState.OPENING)
		int32_t L_0 = __this->___mState_13;
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// mState = BillBoardState.OPENING;
		__this->___mState_13 = 2;
		// LandmarkIcon.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___LandmarkIcon_5;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// LandmarkLeft.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___LandmarkLeft_6;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// LandmarkRight.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___LandmarkRight_7;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// Mask.gameObject.SetActive(true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = __this->___Mask_8;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// mCurrentRollOutTime = 0;
		__this->___mCurrentRollOutTime_14 = (0.0f);
		// mHasBackgroundRolledOut = false;
		__this->___mHasBackgroundRolledOut_15 = (bool)0;
		// mAlpha = -1;
		__this->___mAlpha_21 = (-1.0f);
		// ContentCanvasGroup.alpha = 0;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_6 = __this->___ContentCanvasGroup_9;
		NullCheck(L_6);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_6, (0.0f), NULL);
		// if (Content != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___Content_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_008d;
		}
	}
	{
		// Content.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___Content_10;
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)0, NULL);
	}

IL_008d:
	{
		// }
		return;
	}
}
// System.Void ModularBillBoard::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModularBillBoard__ctor_m655C0218C32BB506CA83138B9950FB10BDE3F20E (ModularBillBoard_t5C2BFA11672ED08924996A3126DF7684C94B7DE5* __this, const RuntimeMethod* method) 
{
	{
		// public float OpeningStarted = 2.5f;
		__this->___OpeningStarted_11 = (2.5f);
		// public float OpeningFinished = 1.5f;
		__this->___OpeningFinished_12 = (1.5f);
		// BillBoardState mState = BillBoardState.CLOSED;
		__this->___mState_13 = 1;
		// float mMinPositionY = -2.5f;
		__this->___mMinPositionY_16 = (-2.5f);
		// float mMinSizeY = 56f;
		__this->___mMinSizeY_18 = (56.0f);
		// float mAlpha = -1f;
		__this->___mAlpha_21 = (-1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ObjectPlacement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPlacement_Start_m391DE7A0D3414AEDABE396D0ECC012F3C2FC8612 (ObjectPlacement_t5A26C0CE7778C6C3F0DD9BC07EA4A6D4BC11D057* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3_mEEB662CEA43CB4E61FD53EDF4E687BEC8087F5BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// arOrigin = FindObjectOfType<ARSessionOrigin>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_0;
		L_0 = Object_FindObjectOfType_TisARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3_mEEB662CEA43CB4E61FD53EDF4E687BEC8087F5BC(Object_FindObjectOfType_TisARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3_mEEB662CEA43CB4E61FD53EDF4E687BEC8087F5BC_RuntimeMethod_var);
		__this->___arOrigin_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___arOrigin_8), (void*)L_0);
		// }
		return;
	}
}
// System.Void ObjectPlacement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPlacement_Update_mA12111C18B3BCA95BDDFE30F4A0288CAED1C898A (ObjectPlacement_t5A26C0CE7778C6C3F0DD9BC07EA4A6D4BC11D057* __this, const RuntimeMethod* method) 
{
	{
		// if (placementIndicatorEnabled == true)
		bool L_0 = __this->___placementIndicatorEnabled_11;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// UpdatePlacementPose();
		ObjectPlacement_UpdatePlacementPose_mED4E6199C0762ACD2191133FCB74F91213A33C7D(__this, NULL);
		// UpdatePlacementIndicator();
		ObjectPlacement_UpdatePlacementIndicator_m4158AD46753A2C89C3624E27F1A93038C707E417(__this, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void ObjectPlacement::PlaceObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPlacement_PlaceObject_m3FA6E31BA0929CA9C039AAC92BDD4721FA362685 (ObjectPlacement_t5A26C0CE7778C6C3F0DD9BC07EA4A6D4BC11D057* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// string buttonName = EventSystem.current.currentSelectedGameObject.name;
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = EventSystem_get_current_mD15EA86304E070D175EF359A051A7DB807CA26C0(NULL);
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		V_0 = L_2;
		// for (int i = 0; i < buttons.Length; i++)
		V_1 = 0;
		goto IL_0034;
	}

IL_0014:
	{
		// if (buttons[i].name == buttonName)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = __this->___buttons_6;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		String_t* L_7;
		L_7 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_6, NULL);
		String_t* L_8 = V_0;
		bool L_9;
		L_9 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_0030;
		}
	}
	{
		// objIndex = i;
		int32_t L_10 = V_1;
		__this->___objIndex_4 = L_10;
	}

IL_0030:
	{
		// for (int i = 0; i < buttons.Length; i++)
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0034:
	{
		// for (int i = 0; i < buttons.Length; i++)
		int32_t L_12 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_13 = __this->___buttons_6;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0014;
		}
	}
	{
		// virtual_objects[objIndex].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_14 = __this->___virtual_objects_5;
		int32_t L_15 = __this->___objIndex_4;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)1, NULL);
		// virtual_objects[objIndex].transform.position = placementPose.position;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_18 = __this->___virtual_objects_5;
		int32_t L_19 = __this->___objIndex_4;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_21, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_23 = (&__this->___placementPose_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = L_23->___position_0;
		NullCheck(L_22);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_22, L_24, NULL);
		// virtual_objects[objIndex].transform.rotation = placementPose.rotation;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_25 = __this->___virtual_objects_5;
		int32_t L_26 = __this->___objIndex_4;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_28, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_30 = (&__this->___placementPose_9);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_31 = L_30->___rotation_1;
		NullCheck(L_29);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_29, L_31, NULL);
		// }
		return;
	}
}
// System.Void ObjectPlacement::UpdatePlacementIndicator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPlacement_UpdatePlacementIndicator_m4158AD46753A2C89C3624E27F1A93038C707E417 (ObjectPlacement_t5A26C0CE7778C6C3F0DD9BC07EA4A6D4BC11D057* __this, const RuntimeMethod* method) 
{
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (placementPoseIsValid)
		bool L_0 = __this->___placementPoseIsValid_10;
		if (!L_0)
		{
			goto IL_005e;
		}
	}
	{
		// placementIndicator.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___placementIndicator_7;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// foreach (var button in buttons)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___buttons_6;
		V_0 = L_2;
		V_1 = 0;
		goto IL_0031;
	}

IL_001f:
	{
		// foreach (var button in buttons)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		// button.gameObject.SetActive(true);
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_6, NULL);
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0031:
	{
		// foreach (var button in buttons)
		int32_t L_9 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_10 = V_0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_001f;
		}
	}
	{
		// placementIndicator.transform.SetPositionAndRotation(placementPose.position, placementPose.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___placementIndicator_7;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_13 = (&__this->___placementPose_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = L_13->___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_15 = (&__this->___placementPose_9);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = L_15->___rotation_1;
		NullCheck(L_12);
		Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_12, L_14, L_16, NULL);
		return;
	}

IL_005e:
	{
		// placementIndicator.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___placementIndicator_7;
		NullCheck(L_17);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)0, NULL);
		// foreach (var button in buttons)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_18 = __this->___buttons_6;
		V_0 = L_18;
		V_1 = 0;
		goto IL_0087;
	}

IL_0075:
	{
		// foreach (var button in buttons)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_19 = V_0;
		int32_t L_20 = V_1;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		// button.gameObject.SetActive(false);
		NullCheck(L_22);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_22, NULL);
		NullCheck(L_23);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_23, (bool)0, NULL);
		int32_t L_24 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0087:
	{
		// foreach (var button in buttons)
		int32_t L_25 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_26 = V_0;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))
		{
			goto IL_0075;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ObjectPlacement::UpdatePlacementPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPlacement_UpdatePlacementPose_mED4E6199C0762ACD2191133FCB74F91213A33C7D (ObjectPlacement_t5A26C0CE7778C6C3F0DD9BC07EA4A6D4BC11D057* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* V_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// var screenCenter = Camera.current.ViewportToScreenPoint(new Vector3(0.5f, 0.5f));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_current_m6D76274A65CF75DD2AE6CAC2A1DDADB39C184C66(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_1), (0.5f), (0.5f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Camera_ViewportToScreenPoint_m014E001B50C96CDE5AE5055B597DAA8DE7113023(L_0, L_1, NULL);
		V_0 = L_2;
		// var hits = new List<ARRaycastHit>();
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_3 = (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*)il2cpp_codegen_object_new(List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9(L_3, List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		V_1 = L_3;
		// arOrigin.GetComponent<ARRaycastManager>().Raycast(screenCenter, hits, UnityEngine.XR.ARSubsystems.TrackableType.PlaneEstimated);
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_4 = __this->___arOrigin_8;
		NullCheck(L_4);
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_5;
		L_5 = Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83(L_4, Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_6, NULL);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_8 = V_1;
		NullCheck(L_5);
		bool L_9;
		L_9 = ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC(L_5, L_7, L_8, 8, NULL);
		// placementPoseIsValid = hits.Count > 0;
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_inline(L_10, List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_RuntimeMethod_var);
		__this->___placementPoseIsValid_10 = (bool)((((int32_t)L_11) > ((int32_t)0))? 1 : 0);
		// if (placementPoseIsValid)
		bool L_12 = __this->___placementPoseIsValid_10;
		if (!L_12)
		{
			goto IL_00a7;
		}
	}
	{
		// placementPose = hits[0].pose;
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_13 = V_1;
		NullCheck(L_13);
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_14;
		L_14 = List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F(L_13, 0, List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		V_4 = L_14;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_15;
		L_15 = ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD((&V_4), NULL);
		__this->___placementPose_9 = L_15;
		// var cameraForward = Camera.current.transform.forward;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_16;
		L_16 = Camera_get_current_m6D76274A65CF75DD2AE6CAC2A1DDADB39C184C66(NULL);
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_17, NULL);
		V_2 = L_18;
		// var cameraBearing = new Vector3(cameraForward.x, 0, cameraForward.z).normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_2;
		float L_20 = L_19.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_2;
		float L_22 = L_21.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), L_20, (0.0f), L_22, /*hidden argument*/NULL);
		V_5 = L_23;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_5), NULL);
		V_3 = L_24;
		// placementPose.rotation = Quaternion.LookRotation(cameraBearing);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_25 = (&__this->___placementPose_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27;
		L_27 = Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3(L_26, NULL);
		L_25->___rotation_1 = L_27;
	}

IL_00a7:
	{
		// }
		return;
	}
}
// System.Void ObjectPlacement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPlacement__ctor_m86E4F0A59193948390C67A5FE4DE386A4B2A01C5 (ObjectPlacement_t5A26C0CE7778C6C3F0DD9BC07EA4A6D4BC11D057* __this, const RuntimeMethod* method) 
{
	{
		// private bool placementIndicatorEnabled = true;
		__this->___placementIndicatorEnabled_11 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Single DetectDistance::get_PositionY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DetectDistance_get_PositionY_m7DFF1181DA445651E498E07076FEB4F3DFBE722B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DetectDistance_t9FAB2A22AF4A39E12CA18E1C6A38640C5464AC50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return m_PositionY; }
		il2cpp_codegen_runtime_class_init_inline(DetectDistance_t9FAB2A22AF4A39E12CA18E1C6A38640C5464AC50_il2cpp_TypeInfo_var);
		float L_0 = ((DetectDistance_t9FAB2A22AF4A39E12CA18E1C6A38640C5464AC50_StaticFields*)il2cpp_codegen_static_fields_for(DetectDistance_t9FAB2A22AF4A39E12CA18E1C6A38640C5464AC50_il2cpp_TypeInfo_var))->___m_PositionY_8;
		return L_0;
	}
}
// System.Void DetectDistance::set_PositionY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetectDistance_set_PositionY_m10986C244F996C9BC11F6217229C9C6F15BB4146 (float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DetectDistance_t9FAB2A22AF4A39E12CA18E1C6A38640C5464AC50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { m_PositionY = value; }
		float L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(DetectDistance_t9FAB2A22AF4A39E12CA18E1C6A38640C5464AC50_il2cpp_TypeInfo_var);
		((DetectDistance_t9FAB2A22AF4A39E12CA18E1C6A38640C5464AC50_StaticFields*)il2cpp_codegen_static_fields_for(DetectDistance_t9FAB2A22AF4A39E12CA18E1C6A38640C5464AC50_il2cpp_TypeInfo_var))->___m_PositionY_8 = L_0;
		// set { m_PositionY = value; }
		return;
	}
}
// System.Void DetectDistance::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetectDistance_Awake_m55759C1C49E7A7354C8C0FCFFE8566917699A1DE (DetectDistance_t9FAB2A22AF4A39E12CA18E1C6A38640C5464AC50* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_RaycastManager = GetComponent<ARRaycastManager>();
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_0;
		L_0 = Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83(__this, Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var);
		__this->___m_RaycastManager_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RaycastManager_4), (void*)L_0);
		// m_Camera = GetComponentInChildren<Camera>();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0(__this, Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0_RuntimeMethod_var);
		__this->___m_Camera_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Camera_6), (void*)L_1);
		// m_Middle = new Vector2(Screen.width / 2, Screen.height / 2);
		int32_t L_2;
		L_2 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		int32_t L_3;
		L_3 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), ((float)((int32_t)(L_2/2))), ((float)((int32_t)(L_3/2))), /*hidden argument*/NULL);
		__this->___m_Middle_7 = L_4;
		// }
		return;
	}
}
// System.Void DetectDistance::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetectDistance_Start_mBA1C4172D2D01C1B6F4ABBAD6B13F8A08F16A23E (DetectDistance_t9FAB2A22AF4A39E12CA18E1C6A38640C5464AC50* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void DetectDistance::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetectDistance_Update_m14F7BCA25144AD1B83B82B44354D3751D8BA2D1E (DetectDistance_t9FAB2A22AF4A39E12CA18E1C6A38640C5464AC50* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DetectDistance_t9FAB2A22AF4A39E12CA18E1C6A38640C5464AC50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (m_RaycastManager.Raycast(m_Middle, s_Hits, TrackableType.PlaneWithinPolygon))
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_0 = __this->___m_RaycastManager_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = __this->___m_Middle_7;
		il2cpp_codegen_runtime_class_init_inline(DetectDistance_t9FAB2A22AF4A39E12CA18E1C6A38640C5464AC50_il2cpp_TypeInfo_var);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_2 = ((DetectDistance_t9FAB2A22AF4A39E12CA18E1C6A38640C5464AC50_StaticFields*)il2cpp_codegen_static_fields_for(DetectDistance_t9FAB2A22AF4A39E12CA18E1C6A38640C5464AC50_il2cpp_TypeInfo_var))->___s_Hits_5;
		NullCheck(L_0);
		bool L_3;
		L_3 = ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC(L_0, L_1, L_2, 1, NULL);
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		// Pose hitPose = s_Hits[0].pose;
		il2cpp_codegen_runtime_class_init_inline(DetectDistance_t9FAB2A22AF4A39E12CA18E1C6A38640C5464AC50_il2cpp_TypeInfo_var);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_4 = ((DetectDistance_t9FAB2A22AF4A39E12CA18E1C6A38640C5464AC50_StaticFields*)il2cpp_codegen_static_fields_for(DetectDistance_t9FAB2A22AF4A39E12CA18E1C6A38640C5464AC50_il2cpp_TypeInfo_var))->___s_Hits_5;
		NullCheck(L_4);
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_5;
		L_5 = List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F(L_4, 0, List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		V_0 = L_5;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_6;
		L_6 = ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD((&V_0), NULL);
		// m_PositionY =  hitPose.position.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = L_6.___position_0;
		float L_8 = L_7.___y_3;
		((DetectDistance_t9FAB2A22AF4A39E12CA18E1C6A38640C5464AC50_StaticFields*)il2cpp_codegen_static_fields_for(DetectDistance_t9FAB2A22AF4A39E12CA18E1C6A38640C5464AC50_il2cpp_TypeInfo_var))->___m_PositionY_8 = L_8;
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void DetectDistance::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetectDistance__ctor_mCDA0E2553E59390AA7C4BD8CE8E83A4E7ECE56D4 (DetectDistance_t9FAB2A22AF4A39E12CA18E1C6A38640C5464AC50* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void DetectDistance::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetectDistance__cctor_m8164CC7F887A49E3B65208C5EE24A00AC8A3D9C6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DetectDistance_t9FAB2A22AF4A39E12CA18E1C6A38640C5464AC50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static List<ARRaycastHit> s_Hits = new List<ARRaycastHit>();
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_0 = (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*)il2cpp_codegen_object_new(List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9(L_0, List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		((DetectDistance_t9FAB2A22AF4A39E12CA18E1C6A38640C5464AC50_StaticFields*)il2cpp_codegen_static_fields_for(DetectDistance_t9FAB2A22AF4A39E12CA18E1C6A38640C5464AC50_il2cpp_TypeInfo_var))->___s_Hits_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((DetectDistance_t9FAB2A22AF4A39E12CA18E1C6A38640C5464AC50_StaticFields*)il2cpp_codegen_static_fields_for(DetectDistance_t9FAB2A22AF4A39E12CA18E1C6A38640C5464AC50_il2cpp_TypeInfo_var))->___s_Hits_5), (void*)L_0);
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
// UnityEngine.Camera Orientation::get_worldSpaceCanvasCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Orientation_get_worldSpaceCanvasCamera_m0FAE5582CCE1F14386D58417BF0AB144AA38C5FC (Orientation_t002F5D617F6ACAEA24D962B1D599B05CD988C373* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_WorldSpaceCanvasCamera; }
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___m_WorldSpaceCanvasCamera_4;
		return L_0;
	}
}
// System.Void Orientation::set_worldSpaceCanvasCamera(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Orientation_set_worldSpaceCanvasCamera_m77983339AA83BC56979C663C349C4CDE8544E11D (Orientation_t002F5D617F6ACAEA24D962B1D599B05CD988C373* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_WorldSpaceCanvasCamera = value; }
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___value0;
		__this->___m_WorldSpaceCanvasCamera_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_WorldSpaceCanvasCamera_4), (void*)L_0);
		// set { m_WorldSpaceCanvasCamera = value; }
		return;
	}
}
// UnityEngine.XR.ARFoundation.ARTrackedImage Orientation::get_ImageGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* Orientation_get_ImageGuid_m79C480684B6E59201A1C88AB1ACF0AABE6301A9C (Orientation_t002F5D617F6ACAEA24D962B1D599B05CD988C373* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Guid; }
		ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_0 = __this->___m_Guid_5;
		return L_0;
	}
}
// System.Void Orientation::set_ImageGuid(UnityEngine.XR.ARFoundation.ARTrackedImage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Orientation_set_ImageGuid_m7D28CD36A256F3090D8428554930760EBBCF5B45 (Orientation_t002F5D617F6ACAEA24D962B1D599B05CD988C373* __this, ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Orientation_t002F5D617F6ACAEA24D962B1D599B05CD988C373_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2* G_B3_0 = NULL;
	ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2* G_B2_0 = NULL;
	{
		// if (m_Guid!= value)
		ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_0 = __this->___m_Guid_5;
		ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// OnImageChangedEvent?.Invoke(value);
		ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2* L_3 = ((Orientation_t002F5D617F6ACAEA24D962B1D599B05CD988C373_StaticFields*)il2cpp_codegen_static_fields_for(Orientation_t002F5D617F6ACAEA24D962B1D599B05CD988C373_il2cpp_TypeInfo_var))->___OnImageChangedEvent_9;
		ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2* L_4 = L_3;
		G_B2_0 = L_4;
		if (L_4)
		{
			G_B3_0 = L_4;
			goto IL_0019;
		}
	}
	{
		goto IL_001f;
	}

IL_0019:
	{
		ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_5 = ___value0;
		NullCheck(G_B3_0);
		ImageChanged_Invoke_m6E37719628FCADA3B3B14F4FF3CE90A7B9FF43AF_inline(G_B3_0, L_5, NULL);
	}

IL_001f:
	{
		// m_Guid = value;
		ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_6 = ___value0;
		__this->___m_Guid_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Guid_5), (void*)L_6);
		// }
		return;
	}
}
// UnityEngine.Texture2D Orientation::get_defaultTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* Orientation_get_defaultTexture_m866CC0318D5AAA45F0D2BCCB8999FA3E43A378B8 (Orientation_t002F5D617F6ACAEA24D962B1D599B05CD988C373* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_DefaultTexture; }
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = __this->___m_DefaultTexture_6;
		return L_0;
	}
}
// System.Void Orientation::set_defaultTexture(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Orientation_set_defaultTexture_m840FA418FECCA76DC02CB2B39DD59CB1416C715E (Orientation_t002F5D617F6ACAEA24D962B1D599B05CD988C373* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_DefaultTexture = value; }
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___value0;
		__this->___m_DefaultTexture_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DefaultTexture_6), (void*)L_0);
		// set { m_DefaultTexture = value; }
		return;
	}
}
// System.Void Orientation::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Orientation_Awake_m549FBD2A9411443B9B5A277071A9267630820E1F (Orientation_t002F5D617F6ACAEA24D962B1D599B05CD988C373* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4_m3C5338CF883CA97951B07D446FEA5FC76D1FB683_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_TrackedImageManager = GetComponent<ARTrackedImageManager>();
		ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* L_0;
		L_0 = Component_GetComponent_TisARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4_m3C5338CF883CA97951B07D446FEA5FC76D1FB683(__this, Component_GetComponent_TisARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4_m3C5338CF883CA97951B07D446FEA5FC76D1FB683_RuntimeMethod_var);
		__this->___m_TrackedImageManager_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TrackedImageManager_7), (void*)L_0);
		// }
		return;
	}
}
// System.Void Orientation::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Orientation_OnEnable_mADA2EBDFD941946CBE4642418A4584F71C3138D0 (Orientation_t002F5D617F6ACAEA24D962B1D599B05CD988C373* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Orientation_OnTrackedImagesChanged_m74F08355EF44F855D5B0EF4E79682EDF4CA3D709_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_TrackedImageManager.trackedImagesChanged += OnTrackedImagesChanged;
		ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* L_0 = __this->___m_TrackedImageManager_7;
		Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* L_1 = (Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F*)il2cpp_codegen_object_new(Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m55BF5EC44D8DEC74D367B749B5B29C8F2A9CB957(L_1, __this, (intptr_t)((void*)Orientation_OnTrackedImagesChanged_m74F08355EF44F855D5B0EF4E79682EDF4CA3D709_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		ARTrackedImageManager_add_trackedImagesChanged_mB190015342B225144729100E0E38745CAFA7F438(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Orientation::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Orientation_OnDisable_m6CF0B8B7A2A8ECC48ACCA771D4DE60D615FB4CE7 (Orientation_t002F5D617F6ACAEA24D962B1D599B05CD988C373* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Orientation_OnTrackedImagesChanged_m74F08355EF44F855D5B0EF4E79682EDF4CA3D709_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_TrackedImageManager.trackedImagesChanged -= OnTrackedImagesChanged;
		ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* L_0 = __this->___m_TrackedImageManager_7;
		Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F* L_1 = (Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F*)il2cpp_codegen_object_new(Action_1_tE7B3D1070B99EFDFA92BD4DBEF95BF881DEB591F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m55BF5EC44D8DEC74D367B749B5B29C8F2A9CB957(L_1, __this, (intptr_t)((void*)Orientation_OnTrackedImagesChanged_m74F08355EF44F855D5B0EF4E79682EDF4CA3D709_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		ARTrackedImageManager_remove_trackedImagesChanged_mA754FAB732F3D5D803FA3A58A51E6487E75CCF34(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Orientation::OnTrackedImagesChanged(UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Orientation_OnTrackedImagesChanged_m74F08355EF44F855D5B0EF4E79682EDF4CA3D709 (Orientation_t002F5D617F6ACAEA24D962B1D599B05CD988C373* __this, ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F ___eventArgs0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m045DD6390BC35283CF0F0F6260FCDBC5C88190A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mC8FCE26C6AC5FEC78CEAE18F477FCE8FCFAC8E80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8CC28190A4AC93DDE1B4FBD06D314A89D89291E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mC2DFE4EA31DDAB2DBBC626D816D4A43A3C07543C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B V_0;
	memset((&V_0), 0, sizeof(V_0));
	ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* V_1 = NULL;
	ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* V_2 = NULL;
	{
		// foreach (var trackedImage in eventArgs.added)
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_0;
		L_0 = ARTrackedImagesChangedEventArgs_get_added_m2929CC85141D13AF05C1484AFB47E043C6D3EE35_inline((&___eventArgs0), NULL);
		NullCheck(L_0);
		Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B L_1;
		L_1 = List_1_GetEnumerator_mC2DFE4EA31DDAB2DBBC626D816D4A43A3C07543C(L_0, List_1_GetEnumerator_mC2DFE4EA31DDAB2DBBC626D816D4A43A3C07543C_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0048:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m045DD6390BC35283CF0F0F6260FCDBC5C88190A4((&V_0), Enumerator_Dispose_m045DD6390BC35283CF0F0F6260FCDBC5C88190A4_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003d_1;
			}

IL_000f_1:
			{
				// foreach (var trackedImage in eventArgs.added)
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_2;
				L_2 = Enumerator_get_Current_m8CC28190A4AC93DDE1B4FBD06D314A89D89291E9_inline((&V_0), Enumerator_get_Current_m8CC28190A4AC93DDE1B4FBD06D314A89D89291E9_RuntimeMethod_var);
				V_1 = L_2;
				// trackedImage.transform.localScale = new Vector3(0.01f, 1f, 0.01f);
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_3 = V_1;
				NullCheck(L_3);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
				L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
				memset((&L_5), 0, sizeof(L_5));
				Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), (0.00999999978f), (1.0f), (0.00999999978f), /*hidden argument*/NULL);
				NullCheck(L_4);
				Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_4, L_5, NULL);
				// UpdateInfo(trackedImage);
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_6 = V_1;
				Orientation_UpdateInfo_m4DBCC6A2B022FFB014CE32366B3FF0EF2DAE9510(__this, L_6, NULL);
			}

IL_003d_1:
			{
				// foreach (var trackedImage in eventArgs.added)
				bool L_7;
				L_7 = Enumerator_MoveNext_mC8FCE26C6AC5FEC78CEAE18F477FCE8FCFAC8E80((&V_0), Enumerator_MoveNext_mC8FCE26C6AC5FEC78CEAE18F477FCE8FCFAC8E80_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_000f_1;
				}
			}
			{
				goto IL_0056;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0056:
	{
		// foreach (var trackedImage in eventArgs.updated)
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_8;
		L_8 = ARTrackedImagesChangedEventArgs_get_updated_m0C896E1C21EF35FF4B31B36563838EC2BA3CDFD1_inline((&___eventArgs0), NULL);
		NullCheck(L_8);
		Enumerator_t58F8BC0EE8CA6C289D0E71A7E813128105601C5B L_9;
		L_9 = List_1_GetEnumerator_mC2DFE4EA31DDAB2DBBC626D816D4A43A3C07543C(L_8, List_1_GetEnumerator_mC2DFE4EA31DDAB2DBBC626D816D4A43A3C07543C_RuntimeMethod_var);
		V_0 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007f:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m045DD6390BC35283CF0F0F6260FCDBC5C88190A4((&V_0), Enumerator_Dispose_m045DD6390BC35283CF0F0F6260FCDBC5C88190A4_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0074_1;
			}

IL_0065_1:
			{
				// foreach (var trackedImage in eventArgs.updated)
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_10;
				L_10 = Enumerator_get_Current_m8CC28190A4AC93DDE1B4FBD06D314A89D89291E9_inline((&V_0), Enumerator_get_Current_m8CC28190A4AC93DDE1B4FBD06D314A89D89291E9_RuntimeMethod_var);
				V_2 = L_10;
				// UpdateInfo(trackedImage);
				ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_11 = V_2;
				Orientation_UpdateInfo_m4DBCC6A2B022FFB014CE32366B3FF0EF2DAE9510(__this, L_11, NULL);
			}

IL_0074_1:
			{
				// foreach (var trackedImage in eventArgs.updated)
				bool L_12;
				L_12 = Enumerator_MoveNext_mC8FCE26C6AC5FEC78CEAE18F477FCE8FCFAC8E80((&V_0), Enumerator_MoveNext_mC8FCE26C6AC5FEC78CEAE18F477FCE8FCFAC8E80_RuntimeMethod_var);
				if (L_12)
				{
					goto IL_0065_1;
				}
			}
			{
				goto IL_008d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008d:
	{
		// }
		return;
	}
}
// System.Void Orientation::UpdateInfo(UnityEngine.XR.ARFoundation.ARTrackedImage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Orientation_UpdateInfo_m4DBCC6A2B022FFB014CE32366B3FF0EF2DAE9510 (Orientation_t002F5D617F6ACAEA24D962B1D599B05CD988C373* __this, ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* ___trackedImage0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARTrackable_2_get_trackingState_m7A60B7D905DBE9E2541B4087F0E6D56C8E4849CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m287ADF5F07E86A6244D9ECA16D1D0E5D6EE8EC18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mA0B8F1113E349AEE09127AE5E71A48872B7AC750_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackingState_t5487241B6888BB15D8448EBBC640835A011DBBC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5020B70F700523C1BDBCC05D65D6CCAD7E93034F);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F V_1;
	memset((&V_1), 0, sizeof(V_1));
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B3_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B2_0 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* G_B4_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B4_1 = NULL;
	{
		// var canvas = trackedImage.GetComponentInChildren<Canvas>();
		ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_0 = ___trackedImage0;
		NullCheck(L_0);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_1;
		L_1 = Component_GetComponentInChildren_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m287ADF5F07E86A6244D9ECA16D1D0E5D6EE8EC18(L_0, Component_GetComponentInChildren_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m287ADF5F07E86A6244D9ECA16D1D0E5D6EE8EC18_RuntimeMethod_var);
		// canvas.worldCamera = worldSpaceCanvasCamera;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_2 = L_1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = Orientation_get_worldSpaceCanvasCamera_m0FAE5582CCE1F14386D58417BF0AB144AA38C5FC_inline(__this, NULL);
		NullCheck(L_2);
		Canvas_set_worldCamera_m007F7DABDB5A3A6BFB043E3500DA82A4D936EDD4(L_2, L_3, NULL);
		// var text = canvas.GetComponentInChildren<Text>();
		NullCheck(L_2);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4;
		L_4 = Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259(L_2, Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var);
		// text.text = string.Format(
		//     "{0}\ntrackingState: {1}\nPosition: {2}\nRotation: {3} cm\nDetected size: {4} cm",
		//     trackedImage.referenceImage.name,
		//     trackedImage.trackingState,
		//     trackedImage.transform.position,
		//     trackedImage.transform.rotation,
		//     trackedImage.size * 100f);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5;
		ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_7 = ___trackedImage0;
		NullCheck(L_7);
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_8;
		L_8 = ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline(L_7, NULL);
		V_1 = L_8;
		String_t* L_9;
		L_9 = XRReferenceImage_get_name_mF1BE1E54AD911D48445B7DDEF2E27EA01E1E73BB_inline((&V_1), NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_6;
		ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_11 = ___trackedImage0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = ARTrackable_2_get_trackingState_m7A60B7D905DBE9E2541B4087F0E6D56C8E4849CF(L_11, ARTrackable_2_get_trackingState_m7A60B7D905DBE9E2541B4087F0E6D56C8E4849CF_RuntimeMethod_var);
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(TrackingState_t5487241B6888BB15D8448EBBC640835A011DBBC2_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_14);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_10;
		ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_16 = ___trackedImage0;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = L_18;
		RuntimeObject* L_20 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_20);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_15;
		ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_22 = ___trackedImage0;
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_22, NULL);
		NullCheck(L_23);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24;
		L_24 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_23, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25 = L_24;
		RuntimeObject* L_26 = Box(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var, &L_25);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_26);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_26);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = L_21;
		ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_28 = ___trackedImage0;
		NullCheck(L_28);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29;
		L_29 = ARTrackedImage_get_size_mAC20A0ECB99C7502138BA134686286B3C126D6F9(L_28, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30;
		L_30 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_29, (100.0f), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31 = L_30;
		RuntimeObject* L_32 = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &L_31);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_32);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_32);
		String_t* L_33;
		L_33 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(_stringLiteral5020B70F700523C1BDBCC05D65D6CCAD7E93034F, L_27, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_33);
		// var planeParentGo = trackedImage.transform.GetChild(0).gameObject;
		ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_34 = ___trackedImage0;
		NullCheck(L_34);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_34, NULL);
		NullCheck(L_35);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_35, 0, NULL);
		NullCheck(L_36);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37;
		L_37 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_36, NULL);
		// var planeGo = planeParentGo.transform.GetChild(0).gameObject;
		NullCheck(L_37);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_37, NULL);
		NullCheck(L_38);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_38, 0, NULL);
		NullCheck(L_39);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40;
		L_40 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_39, NULL);
		V_0 = L_40;
		// if (trackedImage.trackingState != TrackingState.None)
		ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_41 = ___trackedImage0;
		NullCheck(L_41);
		int32_t L_42;
		L_42 = ARTrackable_2_get_trackingState_m7A60B7D905DBE9E2541B4087F0E6D56C8E4849CF(L_41, ARTrackable_2_get_trackingState_m7A60B7D905DBE9E2541B4087F0E6D56C8E4849CF_RuntimeMethod_var);
		if (!L_42)
		{
			goto IL_0123;
		}
	}
	{
		// planeGo.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43 = V_0;
		NullCheck(L_43);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_43, (bool)1, NULL);
		// trackedImage.transform.localScale = new Vector3(trackedImage.size.x, 1f, trackedImage.size.y);
		ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_44 = ___trackedImage0;
		NullCheck(L_44);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45;
		L_45 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_44, NULL);
		ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_46 = ___trackedImage0;
		NullCheck(L_46);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_47;
		L_47 = ARTrackedImage_get_size_mAC20A0ECB99C7502138BA134686286B3C126D6F9(L_46, NULL);
		float L_48 = L_47.___x_0;
		ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_49 = ___trackedImage0;
		NullCheck(L_49);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_50;
		L_50 = ARTrackedImage_get_size_mAC20A0ECB99C7502138BA134686286B3C126D6F9(L_49, NULL);
		float L_51 = L_50.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		memset((&L_52), 0, sizeof(L_52));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_52), L_48, (1.0f), L_51, /*hidden argument*/NULL);
		NullCheck(L_45);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_45, L_52, NULL);
		// var material = planeGo.GetComponentInChildren<MeshRenderer>().material;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_53 = V_0;
		NullCheck(L_53);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_54;
		L_54 = GameObject_GetComponentInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mA0B8F1113E349AEE09127AE5E71A48872B7AC750(L_53, GameObject_GetComponentInChildren_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_mA0B8F1113E349AEE09127AE5E71A48872B7AC750_RuntimeMethod_var);
		NullCheck(L_54);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_55;
		L_55 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_54, NULL);
		// material.mainTexture = (trackedImage.referenceImage.texture == null) ? defaultTexture : trackedImage.referenceImage.texture;
		ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_56 = ___trackedImage0;
		NullCheck(L_56);
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_57;
		L_57 = ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline(L_56, NULL);
		V_1 = L_57;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_58;
		L_58 = XRReferenceImage_get_texture_mEC132411644C747C782F41A32A97C95B306D0891_inline((&V_1), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_59;
		L_59 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_58, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B2_0 = L_55;
		if (L_59)
		{
			G_B3_0 = L_55;
			goto IL_0116;
		}
	}
	{
		ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_60 = ___trackedImage0;
		NullCheck(L_60);
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_61;
		L_61 = ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline(L_60, NULL);
		V_1 = L_61;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_62;
		L_62 = XRReferenceImage_get_texture_mEC132411644C747C782F41A32A97C95B306D0891_inline((&V_1), NULL);
		G_B4_0 = L_62;
		G_B4_1 = G_B2_0;
		goto IL_011c;
	}

IL_0116:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_63;
		L_63 = Orientation_get_defaultTexture_m866CC0318D5AAA45F0D2BCCB8999FA3E43A378B8_inline(__this, NULL);
		G_B4_0 = L_63;
		G_B4_1 = G_B3_0;
	}

IL_011c:
	{
		NullCheck(G_B4_1);
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(G_B4_1, G_B4_0, NULL);
		goto IL_012a;
	}

IL_0123:
	{
		// planeGo.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_64 = V_0;
		NullCheck(L_64);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_64, (bool)0, NULL);
	}

IL_012a:
	{
		// ImageGuid = trackedImage;
		ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_65 = ___trackedImage0;
		Orientation_set_ImageGuid_m7D28CD36A256F3090D8428554930760EBBCF5B45(__this, L_65, NULL);
		// }
		return;
	}
}
// System.Void Orientation::add_OnImageChangedEvent(Orientation/ImageChanged)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Orientation_add_OnImageChangedEvent_m9D32EA8114D10B17CB33D9EB764F2573E365C974 (ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Orientation_t002F5D617F6ACAEA24D962B1D599B05CD988C373_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2* V_0 = NULL;
	ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2* V_1 = NULL;
	ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2* V_2 = NULL;
	{
		ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2* L_0 = ((Orientation_t002F5D617F6ACAEA24D962B1D599B05CD988C373_StaticFields*)il2cpp_codegen_static_fields_for(Orientation_t002F5D617F6ACAEA24D962B1D599B05CD988C373_il2cpp_TypeInfo_var))->___OnImageChangedEvent_9;
		V_0 = L_0;
	}

IL_0006:
	{
		ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2* L_1 = V_0;
		V_1 = L_1;
		ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2* L_2 = V_1;
		ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2*)CastclassSealed((RuntimeObject*)L_4, ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2_il2cpp_TypeInfo_var));
		ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2* L_5 = V_2;
		ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2* L_6 = V_1;
		ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2* L_7;
		L_7 = InterlockedCompareExchangeImpl<ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2*>((&((Orientation_t002F5D617F6ACAEA24D962B1D599B05CD988C373_StaticFields*)il2cpp_codegen_static_fields_for(Orientation_t002F5D617F6ACAEA24D962B1D599B05CD988C373_il2cpp_TypeInfo_var))->___OnImageChangedEvent_9), L_5, L_6);
		V_0 = L_7;
		ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2* L_8 = V_0;
		ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2* L_9 = V_1;
		if ((!(((RuntimeObject*)(ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2*)L_8) == ((RuntimeObject*)(ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Orientation::remove_OnImageChangedEvent(Orientation/ImageChanged)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Orientation_remove_OnImageChangedEvent_m4B05EE708C003F257CEC2B9A2EA187ABB04287DE (ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Orientation_t002F5D617F6ACAEA24D962B1D599B05CD988C373_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2* V_0 = NULL;
	ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2* V_1 = NULL;
	ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2* V_2 = NULL;
	{
		ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2* L_0 = ((Orientation_t002F5D617F6ACAEA24D962B1D599B05CD988C373_StaticFields*)il2cpp_codegen_static_fields_for(Orientation_t002F5D617F6ACAEA24D962B1D599B05CD988C373_il2cpp_TypeInfo_var))->___OnImageChangedEvent_9;
		V_0 = L_0;
	}

IL_0006:
	{
		ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2* L_1 = V_0;
		V_1 = L_1;
		ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2* L_2 = V_1;
		ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2*)CastclassSealed((RuntimeObject*)L_4, ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2_il2cpp_TypeInfo_var));
		ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2* L_5 = V_2;
		ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2* L_6 = V_1;
		ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2* L_7;
		L_7 = InterlockedCompareExchangeImpl<ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2*>((&((Orientation_t002F5D617F6ACAEA24D962B1D599B05CD988C373_StaticFields*)il2cpp_codegen_static_fields_for(Orientation_t002F5D617F6ACAEA24D962B1D599B05CD988C373_il2cpp_TypeInfo_var))->___OnImageChangedEvent_9), L_5, L_6);
		V_0 = L_7;
		ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2* L_8 = V_0;
		ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2* L_9 = V_1;
		if ((!(((RuntimeObject*)(ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2*)L_8) == ((RuntimeObject*)(ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Orientation::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Orientation_Start_mDAE70B5690BA1D87A90448718B96B3397B86B83C (Orientation_t002F5D617F6ACAEA24D962B1D599B05CD988C373* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Orientation::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Orientation_Update_m8643688681FAC8216EF79EE49B88D32F99DAA662 (Orientation_t002F5D617F6ACAEA24D962B1D599B05CD988C373* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Orientation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Orientation__ctor_mEBD9495879588E9EF11D62E41DE76567395D0810 (Orientation_t002F5D617F6ACAEA24D962B1D599B05CD988C373* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
void ImageChanged_Invoke_m6E37719628FCADA3B3B14F4FF3CE90A7B9FF43AF_Multicast(ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2* __this, ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* ___item0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2* currentDelegate = reinterpret_cast<ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___item0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ImageChanged_Invoke_m6E37719628FCADA3B3B14F4FF3CE90A7B9FF43AF_OpenInst(ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2* __this, ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* ___item0, const RuntimeMethod* method)
{
	NullCheck(___item0);
	typedef void (*FunctionPointerType) (ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___item0, method);
}
void ImageChanged_Invoke_m6E37719628FCADA3B3B14F4FF3CE90A7B9FF43AF_OpenStatic(ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2* __this, ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* ___item0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___item0, method);
}
void ImageChanged_Invoke_m6E37719628FCADA3B3B14F4FF3CE90A7B9FF43AF_OpenStaticInvoker(ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2* __this, ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* ___item0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* >::Invoke(__this->___method_ptr_0, method, NULL, ___item0);
}
void ImageChanged_Invoke_m6E37719628FCADA3B3B14F4FF3CE90A7B9FF43AF_ClosedStaticInvoker(ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2* __this, ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* ___item0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___item0);
}
void ImageChanged_Invoke_m6E37719628FCADA3B3B14F4FF3CE90A7B9FF43AF_OpenVirtual(ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2* __this, ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* ___item0, const RuntimeMethod* method)
{
	NullCheck(___item0);
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___item0);
}
void ImageChanged_Invoke_m6E37719628FCADA3B3B14F4FF3CE90A7B9FF43AF_OpenInterface(ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2* __this, ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* ___item0, const RuntimeMethod* method)
{
	NullCheck(___item0);
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___item0);
}
void ImageChanged_Invoke_m6E37719628FCADA3B3B14F4FF3CE90A7B9FF43AF_OpenGenericVirtual(ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2* __this, ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* ___item0, const RuntimeMethod* method)
{
	NullCheck(___item0);
	GenericVirtualActionInvoker0::Invoke(method, ___item0);
}
void ImageChanged_Invoke_m6E37719628FCADA3B3B14F4FF3CE90A7B9FF43AF_OpenGenericInterface(ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2* __this, ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* ___item0, const RuntimeMethod* method)
{
	NullCheck(___item0);
	GenericInterfaceActionInvoker0::Invoke(method, ___item0);
}
// System.Void Orientation/ImageChanged::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageChanged__ctor_mE62DECF7ADBE84C0201944714D72757042E9F660 (ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ImageChanged_Invoke_m6E37719628FCADA3B3B14F4FF3CE90A7B9FF43AF_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ImageChanged_Invoke_m6E37719628FCADA3B3B14F4FF3CE90A7B9FF43AF_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ImageChanged_Invoke_m6E37719628FCADA3B3B14F4FF3CE90A7B9FF43AF_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ImageChanged_Invoke_m6E37719628FCADA3B3B14F4FF3CE90A7B9FF43AF_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ImageChanged_Invoke_m6E37719628FCADA3B3B14F4FF3CE90A7B9FF43AF_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ImageChanged_Invoke_m6E37719628FCADA3B3B14F4FF3CE90A7B9FF43AF_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ImageChanged_Invoke_m6E37719628FCADA3B3B14F4FF3CE90A7B9FF43AF_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ImageChanged_Invoke_m6E37719628FCADA3B3B14F4FF3CE90A7B9FF43AF_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ImageChanged_Invoke_m6E37719628FCADA3B3B14F4FF3CE90A7B9FF43AF_Multicast;
}
// System.Void Orientation/ImageChanged::Invoke(UnityEngine.XR.ARFoundation.ARTrackedImage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageChanged_Invoke_m6E37719628FCADA3B3B14F4FF3CE90A7B9FF43AF (ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2* __this, ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* ___item0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___item0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Orientation/ImageChanged::BeginInvoke(UnityEngine.XR.ARFoundation.ARTrackedImage,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ImageChanged_BeginInvoke_mE89E3FACE565731115F74889F1E3DCD64C301EC0 (ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2* __this, ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* ___item0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___item0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Orientation/ImageChanged::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageChanged_EndInvoke_mFFFEDEB011DC15E147E780522196262973FF0695 (ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.GameObject SyncPose::get_ARSessionPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* SyncPose_get_ARSessionPosition_mB984B77604ADF6C1F07661D63A2CF49FAA1DE92F (SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_ARSessionPosition; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_ARSessionPosition_4;
		return L_0;
	}
}
// System.Void SyncPose::set_ARSessionPosition(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncPose_set_ARSessionPosition_mE5FEAD10B49AA8F68603171ED3E52AAC7E269C8D (SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_ARSessionPosition = value; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___m_ARSessionPosition_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ARSessionPosition_4), (void*)L_0);
		// set { m_ARSessionPosition = value; }
		return;
	}
}
// System.Void SyncPose::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncPose_Awake_m3BCA9E1CE0DE1D4CA38DC25F54024B76B50B8BC5 (SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m668A6CC15F573ABC389E612A2423599B5ADDC2EF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_PlaneManager = GetComponent<ARPlaneManager>();
		ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* L_0;
		L_0 = Component_GetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m668A6CC15F573ABC389E612A2423599B5ADDC2EF(__this, Component_GetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m668A6CC15F573ABC389E612A2423599B5ADDC2EF_RuntimeMethod_var);
		__this->___m_PlaneManager_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PlaneManager_14), (void*)L_0);
		// SetPhysicalOrigin();
		SyncPose_SetPhysicalOrigin_m1CC213AFC133135A5DC55625696835D15A88B7F7(__this, NULL);
		// SetPhysicalAnchor();
		SyncPose_SetPhysicalAnchor_m21A934670D3F46491079214CDFE340BE39E10577(__this, NULL);
		// SetAROrigin();
		SyncPose_SetAROrigin_mEF3524215DB97CD09D6F04220A983520F76195C7(__this, NULL);
		// }
		return;
	}
}
// System.Void SyncPose::SetPhysicalOrigin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncPose_SetPhysicalOrigin_m1CC213AFC133135A5DC55625696835D15A88B7F7 (SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD* __this, const RuntimeMethod* method) 
{
	{
		// m_PhysicalOrigin.position = PhysicalOrigin.transform.position;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = (&__this->___m_PhysicalOrigin_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___PhysicalOrigin_11;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		L_0->___position_0 = L_3;
		// m_PhysicalOrigin.rotation = PhysicalOrigin.transform.rotation;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_4 = (&__this->___m_PhysicalOrigin_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___PhysicalOrigin_11;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		NullCheck(L_6);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_6, NULL);
		L_4->___rotation_1 = L_7;
		// }
		return;
	}
}
// System.Void SyncPose::SetPhysicalAnchor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncPose_SetPhysicalAnchor_m21A934670D3F46491079214CDFE340BE39E10577 (SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD* __this, const RuntimeMethod* method) 
{
	{
		// m_PhysicalAnchor.position = PhysicalAnchor.transform.position;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = (&__this->___m_PhysicalAnchor_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___PhysicalAnchor_12;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		L_0->___position_0 = L_3;
		// m_PhysicalAnchor.rotation = PhysicalAnchor.transform.rotation;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_4 = (&__this->___m_PhysicalAnchor_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___PhysicalAnchor_12;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		NullCheck(L_6);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_6, NULL);
		L_4->___rotation_1 = L_7;
		// }
		return;
	}
}
// System.Void SyncPose::SetAROrigin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncPose_SetAROrigin_mEF3524215DB97CD09D6F04220A983520F76195C7 (SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD* __this, const RuntimeMethod* method) 
{
	{
		// m_AROrigin.position = ARSessionPosition.transform.position;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = (&__this->___m_AROrigin_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = SyncPose_get_ARSessionPosition_mB984B77604ADF6C1F07661D63A2CF49FAA1DE92F_inline(__this, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		L_0->___position_0 = L_3;
		// m_AROrigin.rotation = ARSessionPosition.transform.rotation;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_4 = (&__this->___m_AROrigin_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = SyncPose_get_ARSessionPosition_mB984B77604ADF6C1F07661D63A2CF49FAA1DE92F_inline(__this, NULL);
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		NullCheck(L_6);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_6, NULL);
		L_4->___rotation_1 = L_7;
		// }
		return;
	}
}
// System.Void SyncPose::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncPose_OnEnable_m71FC01213B0D9A21E488B5BAF352026BFCFCD03F (SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncPose_OnImageChanged_m1C045750F8B0D4D52A6697F553A10CD9D8769A73_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Orientation.OnImageChangedEvent += OnImageChanged;
		ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2* L_0 = (ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2*)il2cpp_codegen_object_new(ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ImageChanged__ctor_mE62DECF7ADBE84C0201944714D72757042E9F660(L_0, __this, (intptr_t)((void*)SyncPose_OnImageChanged_m1C045750F8B0D4D52A6697F553A10CD9D8769A73_RuntimeMethod_var), NULL);
		Orientation_add_OnImageChangedEvent_m9D32EA8114D10B17CB33D9EB764F2573E365C974(L_0, NULL);
		// }
		return;
	}
}
// System.Void SyncPose::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncPose_OnDisable_mDFABCEE5A99E1FD858B9626B6B442E608406A565 (SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncPose_OnImageChanged_m1C045750F8B0D4D52A6697F553A10CD9D8769A73_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Orientation.OnImageChangedEvent -= OnImageChanged;
		ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2* L_0 = (ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2*)il2cpp_codegen_object_new(ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ImageChanged__ctor_mE62DECF7ADBE84C0201944714D72757042E9F660(L_0, __this, (intptr_t)((void*)SyncPose_OnImageChanged_m1C045750F8B0D4D52A6697F553A10CD9D8769A73_RuntimeMethod_var), NULL);
		Orientation_remove_OnImageChangedEvent_m4B05EE708C003F257CEC2B9A2EA187ABB04287DE(L_0, NULL);
		// }
		return;
	}
}
// System.Void SyncPose::OnImageChanged(UnityEngine.XR.ARFoundation.ARTrackedImage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncPose_OnImageChanged_m1C045750F8B0D4D52A6697F553A10CD9D8769A73 (SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD* __this, ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* ___item0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE75BEA9B5CC469128FC66D90EAA3937E05217B3F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UpdateInfo();
		SyncPose_UpdateInfo_mCE2ED161532C84D29D9F2A7CABBFC640DB0AA330(__this, NULL);
		// log.text += "imageChanged" + item.name;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___log_15;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = L_0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_1);
		ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* L_3 = ___item0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_2, _stringLiteralE75BEA9B5CC469128FC66D90EAA3937E05217B3F, L_4, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_5);
		// }
		return;
	}
}
// System.Void SyncPose::UpdateInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncPose_UpdateInfo_mCE2ED161532C84D29D9F2A7CABBFC640DB0AA330 (SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m25C454992279B47B682946D9EAE5386D11B05730_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// m_ARAnchor.position = m_ARSessionPosition.GetComponentInChildren<Camera>().transform.position;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = (&__this->___m_ARAnchor_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___m_ARSessionPosition_4;
		NullCheck(L_1);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = GameObject_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m25C454992279B47B682946D9EAE5386D11B05730(L_1, GameObject_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m25C454992279B47B682946D9EAE5386D11B05730_RuntimeMethod_var);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		L_0->___position_0 = L_4;
		// var z_correct = m_ARSessionPosition.GetComponentInChildren<Camera>().transform.rotation;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___m_ARSessionPosition_4;
		NullCheck(L_5);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6;
		L_6 = GameObject_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m25C454992279B47B682946D9EAE5386D11B05730(L_5, GameObject_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m25C454992279B47B682946D9EAE5386D11B05730_RuntimeMethod_var);
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		NullCheck(L_7);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_7, NULL);
		V_0 = L_8;
		// var z_corrected = new Quaternion(z_correct.x, z_correct.y, Quaternion.identity.z, z_correct.w);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = V_0;
		float L_10 = L_9.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = V_0;
		float L_12 = L_11.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		float L_14 = L_13.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15 = V_0;
		float L_16 = L_15.___w_3;
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&V_1), L_10, L_12, L_14, L_16, NULL);
		// m_ARAnchor.rotation = z_corrected;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_17 = (&__this->___m_ARAnchor_8);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = V_1;
		L_17->___rotation_1 = L_18;
		// var offset_1 = m_PhysicalAnchor.position - m_ARAnchor.position;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_19 = (&__this->___m_PhysicalAnchor_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = L_19->___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_21 = (&__this->___m_ARAnchor_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = L_21->___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_20, L_22, NULL);
		V_2 = L_23;
		// var offset_2 = m_PhysicalAnchor.rotation * Quaternion.Inverse(m_ARAnchor.rotation);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_24 = (&__this->___m_PhysicalAnchor_6);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25 = L_24->___rotation_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_26 = (&__this->___m_ARAnchor_8);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27 = L_26->___rotation_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28;
		L_28 = Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817(L_27, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29;
		L_29 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_25, L_28, NULL);
		V_3 = L_29;
		// SyncOrientation(offset_1, offset_2, m_PhysicalAnchor.position);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_31 = V_3;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_32 = (&__this->___m_PhysicalAnchor_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = L_32->___position_0;
		SyncPose_SyncOrientation_m52DDB91E6172CEF9A99D5428850CD6A7E1FD329C(__this, L_30, L_31, L_33, NULL);
		// }
		return;
	}
}
// System.Void SyncPose::UpdateInfo(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncPose_UpdateInfo_m8E7F6D1B9CE9532E5CEF35EF39242CE875733C78 (SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___cube0, const RuntimeMethod* method) 
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (place)
		bool L_0 = __this->___place_10;
		if (!L_0)
		{
			goto IL_00c3;
		}
	}
	{
		// var pose = cube.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___cube0;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		V_0 = L_2;
		// m_ARAnchor.position = pose.position;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_3 = (&__this->___m_ARAnchor_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = V_0;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		L_3->___position_0 = L_5;
		// var z_correct = cube.transform.rotation;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ___cube0;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		NullCheck(L_7);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_7, NULL);
		V_1 = L_8;
		// var z_corrected = new Quaternion(z_correct.x, z_correct.y, Quaternion.identity.z, z_correct.w);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = V_1;
		float L_10 = L_9.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = V_1;
		float L_12 = L_11.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		float L_14 = L_13.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15 = V_1;
		float L_16 = L_15.___w_3;
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&V_2), L_10, L_12, L_14, L_16, NULL);
		// m_ARAnchor.rotation = z_corrected;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_17 = (&__this->___m_ARAnchor_8);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = V_2;
		L_17->___rotation_1 = L_18;
		// m_ARAnchor.rotation = z_corrected;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_19 = (&__this->___m_ARAnchor_8);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = V_2;
		L_19->___rotation_1 = L_20;
		// var offset_1 = m_PhysicalAnchor.position - m_ARAnchor.position;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_21 = (&__this->___m_PhysicalAnchor_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = L_21->___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_23 = (&__this->___m_ARAnchor_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = L_23->___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_22, L_24, NULL);
		V_3 = L_25;
		// var offset_2 = m_PhysicalAnchor.rotation * Quaternion.Inverse(m_ARAnchor.rotation);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_26 = (&__this->___m_PhysicalAnchor_6);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27 = L_26->___rotation_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_28 = (&__this->___m_ARAnchor_8);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29 = L_28->___rotation_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30;
		L_30 = Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817(L_29, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_31;
		L_31 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_27, L_30, NULL);
		V_4 = L_31;
		// SyncOrientation(offset_1, offset_2, m_PhysicalAnchor.position);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_33 = V_4;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_34 = (&__this->___m_PhysicalAnchor_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = L_34->___position_0;
		SyncPose_SyncOrientation_m52DDB91E6172CEF9A99D5428850CD6A7E1FD329C(__this, L_32, L_33, L_35, NULL);
		// place = false;
		__this->___place_10 = (bool)0;
	}

IL_00c3:
	{
		// }
		return;
	}
}
// System.Void SyncPose::SyncVectialPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncPose_SyncVectialPosition_mBB28B51F11DE5D677A16EFA8B212A143DEEFD864 (SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD* __this, float ___distance0, const RuntimeMethod* method) 
{
	{
		// m_ARSessionPosition.transform.position = new Vector3(m_ARSessionPosition.transform.position.x,
		//     m_ARSessionPosition.transform.position.y + distance, m_ARSessionPosition.transform.position.z);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_ARSessionPosition_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___m_ARSessionPosition_4;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5 = L_4.___x_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___m_ARSessionPosition_4;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		float L_9 = L_8.___y_3;
		float L_10 = ___distance0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___m_ARSessionPosition_4;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		float L_14 = L_13.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_15), L_5, ((float)il2cpp_codegen_add(L_9, L_10)), L_14, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_15, NULL);
		// }
		return;
	}
}
// System.Void SyncPose::SyncOrientation(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncPose_SyncOrientation_m52DDB91E6172CEF9A99D5428850CD6A7E1FD329C (SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___offset_10, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___offset_21, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___anchor2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// m_ARSessionPosition.transform.position += offset_1 ;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_ARSessionPosition_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = L_1;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___offset_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_3, L_4, NULL);
		NullCheck(L_2);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_2, L_5, NULL);
		// m_ARSessionPosition.transform.rotation = offset_2 * m_ARSessionPosition.transform.rotation;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___m_ARSessionPosition_4;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___offset_21;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___m_ARSessionPosition_4;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		NullCheck(L_10);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_10, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_8, L_11, NULL);
		NullCheck(L_7);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_7, L_12, NULL);
		// var vectorBetween = anchor - m_ARSessionPosition.transform.position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___anchor2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___m_ARSessionPosition_4;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_13, L_16, NULL);
		V_0 = L_17;
		// var newPosition = offset_2 * vectorBetween;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___offset_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_18, L_19, NULL);
		V_1 = L_20;
		// m_ARSessionPosition.transform.position += vectorBetween - newPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___m_ARSessionPosition_4;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_21, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = L_22;
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_25, L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_24, L_27, NULL);
		NullCheck(L_23);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_23, L_28, NULL);
		// }
		return;
	}
}
// System.Void SyncPose::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncPose_Start_m2E2CA4FCF71099085B0740A3D291CBD1821B0277 (SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void SyncPose::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncPose_Update_mDCA287974BBBA75CC7423967F251CAF4BA44BD30 (SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DetectDistance_t9FAB2A22AF4A39E12CA18E1C6A38640C5464AC50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m25C454992279B47B682946D9EAE5386D11B05730_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B158F640CBA2E2AB3602F309E0A68328A0F0E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A445CF9031C5EB08E9F1F3A129AFAC4742E5741);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1AC99A0886CFC97047B2F4D6BBDE551C1BC8F44);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	{
		// var plane = m_PlaneManager.planePrefab;
		ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* L_0 = __this->___m_PlaneManager_14;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = ARPlaneManager_get_planePrefab_mD1AE647924733F69F5446087BF5BFD4EEB4EF2C2_inline(L_0, NULL);
		V_0 = L_1;
		// var distance = m_ARSessionPosition.GetComponentInChildren<Camera>().transform.position - plane.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___m_ARSessionPosition_4;
		NullCheck(L_2);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = GameObject_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m25C454992279B47B682946D9EAE5386D11B05730(L_2, GameObject_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m25C454992279B47B682946D9EAE5386D11B05730_RuntimeMethod_var);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_0;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_5, L_8, NULL);
		// UpdateInfo(testCube);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___testCube_9;
		SyncPose_UpdateInfo_m8E7F6D1B9CE9532E5CEF35EF39242CE875733C78(__this, L_10, NULL);
		//     log.text = "Position = " + m_ARSessionPosition.GetComponentInChildren<Camera>().transform.position.ToString()
		// + "\nRotation = " + m_ARSessionPosition.GetComponentInChildren<Camera>().transform.rotation.ToString() + "\nDistance = " + DetectDistance.PositionY;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11 = __this->___log_15;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral40B158F640CBA2E2AB3602F309E0A68328A0F0E6);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral40B158F640CBA2E2AB3602F309E0A68328A0F0E6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___m_ARSessionPosition_4;
		NullCheck(L_15);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_16;
		L_16 = GameObject_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m25C454992279B47B682946D9EAE5386D11B05730(L_15, GameObject_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m25C454992279B47B682946D9EAE5386D11B05730_RuntimeMethod_var);
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		V_1 = L_18;
		String_t* L_19;
		L_19 = Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE((&V_1), NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_19);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_19);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_14;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteralE1AC99A0886CFC97047B2F4D6BBDE551C1BC8F44);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralE1AC99A0886CFC97047B2F4D6BBDE551C1BC8F44);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_20;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___m_ARSessionPosition_4;
		NullCheck(L_22);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_23;
		L_23 = GameObject_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m25C454992279B47B682946D9EAE5386D11B05730(L_22, GameObject_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m25C454992279B47B682946D9EAE5386D11B05730_RuntimeMethod_var);
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_23, NULL);
		NullCheck(L_24);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
		L_25 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_24, NULL);
		V_2 = L_25;
		String_t* L_26;
		L_26 = Quaternion_ToString_mC5BD5DEF60FCA4A38924462A5C4440ECFCF934C4((&V_2), NULL);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_26);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_26);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = L_21;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, _stringLiteral8A445CF9031C5EB08E9F1F3A129AFAC4742E5741);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral8A445CF9031C5EB08E9F1F3A129AFAC4742E5741);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = L_27;
		il2cpp_codegen_runtime_class_init_inline(DetectDistance_t9FAB2A22AF4A39E12CA18E1C6A38640C5464AC50_il2cpp_TypeInfo_var);
		float L_29;
		L_29 = DetectDistance_get_PositionY_m7DFF1181DA445651E498E07076FEB4F3DFBE722B_inline(NULL);
		V_3 = L_29;
		String_t* L_30;
		L_30 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_3), NULL);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_30);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_30);
		String_t* L_31;
		L_31 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_28, NULL);
		NullCheck(L_11);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, L_31);
		// }
		return;
	}
}
// System.Void SyncPose::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncPose__ctor_mE6EDD5605FE87FD5A2ED26750E8E33A6557B39F7 (SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void DemoPlayerLogic::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoPlayerLogic_Start_m2EF86B00B26FD4E9D6D017BF3029214396E87352 (DemoPlayerLogic_t41B19E2787D0BDDE54FA3FB7162E4254068A2549* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCinemachineImpulseSource_t48D0DCECD3CD8432BF4442EB45399BBD383A1B83_m0C6F2D42D616B2110B3882733B14B88735BB4E89_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_characterController = GetComponent<CharacterController>();
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_0;
		L_0 = Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040(__this, Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var);
		__this->___m_characterController_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_characterController_9), (void*)L_0);
		// m_animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___m_animator_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_animator_10), (void*)L_1);
		// m_cinemachineImpulseSource = GetComponent<CinemachineImpulseSource>();
		CinemachineImpulseSource_t48D0DCECD3CD8432BF4442EB45399BBD383A1B83* L_2;
		L_2 = Component_GetComponent_TisCinemachineImpulseSource_t48D0DCECD3CD8432BF4442EB45399BBD383A1B83_m0C6F2D42D616B2110B3882733B14B88735BB4E89(__this, Component_GetComponent_TisCinemachineImpulseSource_t48D0DCECD3CD8432BF4442EB45399BBD383A1B83_m0C6F2D42D616B2110B3882733B14B88735BB4E89_RuntimeMethod_var);
		__this->___m_cinemachineImpulseSource_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_cinemachineImpulseSource_11), (void*)L_2);
		// }
		return;
	}
}
// System.Void DemoPlayerLogic::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoPlayerLogic_Update_m4D86A9274F2BB816BEC62132CB09F564991FD917 (DemoPlayerLogic_t41B19E2787D0BDDE54FA3FB7162E4254068A2549* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31DFEC3AAF8399F4A57C15C0E0BA057632928757);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_horizontalInput = Input.GetAxisRaw("Horizontal");
		float L_0;
		L_0 = Input_GetAxisRaw_m86E17FE275E361C5DFB7CD42C3C404177B6689AA(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		__this->___m_horizontalInput_6 = L_0;
		// m_verticalInput = Input.GetAxisRaw("Vertical");
		float L_1;
		L_1 = Input_GetAxisRaw_m86E17FE275E361C5DFB7CD42C3C404177B6689AA(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		__this->___m_verticalInput_7 = L_1;
		// m_animator.SetFloat("VerticalInput", m_verticalInput);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___m_animator_10;
		float L_3 = __this->___m_verticalInput_7;
		NullCheck(L_2);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_2, _stringLiteral31DFEC3AAF8399F4A57C15C0E0BA057632928757, L_3, NULL);
		// }
		return;
	}
}
// System.Void DemoPlayerLogic::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoPlayerLogic_FixedUpdate_m3FC7650F7F6440CA444CB81A509E9AA16B13AFD4 (DemoPlayerLogic_t41B19E2787D0BDDE54FA3FB7162E4254068A2549* __this, const RuntimeMethod* method) 
{
	{
		// m_verticalMovement = transform.forward * m_verticalInput * MOVEMENT_SPEED * Time.deltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_0, NULL);
		float L_2 = __this->___m_verticalInput_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_1, L_2, NULL);
		float L_4 = __this->___MOVEMENT_SPEED_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, L_4, NULL);
		float L_6;
		L_6 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_5, L_6, NULL);
		__this->___m_verticalMovement_8 = L_7;
		// m_characterController.Move(m_verticalMovement);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_8 = __this->___m_characterController_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = __this->___m_verticalMovement_8;
		NullCheck(L_8);
		int32_t L_10;
		L_10 = CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4(L_8, L_9, NULL);
		// transform.Rotate(Vector3.up, m_horizontalInput * ROTATION_SPEED);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		float L_13 = __this->___m_horizontalInput_6;
		float L_14 = __this->___ROTATION_SPEED_5;
		NullCheck(L_11);
		Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F(L_11, L_12, ((float)il2cpp_codegen_multiply(L_13, L_14)), NULL);
		// }
		return;
	}
}
// System.Void DemoPlayerLogic::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoPlayerLogic__ctor_m6F9BA183EE8A89A5942532F95B27295A0870FDD4 (DemoPlayerLogic_t41B19E2787D0BDDE54FA3FB7162E4254068A2549* __this, const RuntimeMethod* method) 
{
	{
		// public  float MOVEMENT_SPEED = 5.0f;
		__this->___MOVEMENT_SPEED_4 = (5.0f);
		// public  float ROTATION_SPEED = 2.0f;
		__this->___ROTATION_SPEED_5 = (2.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SetNavigation::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetNavigation_Start_m67BFF9B917481B617C4BBC913599A34ABA75B99E (SetNavigation_t3B30AAEB2ECE7AAD37EE8197ACB96E7772680782* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// path = new NavMeshPath();
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_0 = (NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7*)il2cpp_codegen_object_new(NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NavMeshPath__ctor_mEA40BFC2492814FFC97A71C3AEC2154A9415C37F(L_0, NULL);
		__this->___path_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___path_6), (void*)L_0);
		// line = GetComponent<LineRenderer>();
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_1;
		L_1 = Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49(__this, Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var);
		__this->___line_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___line_7), (void*)L_1);
		// PopulateList();
		SetNavigation_PopulateList_mC6DF1465815A7D09CA1C4946FA7FA663FF9BE7EA(__this, NULL);
		// destinationSet = false;
		__this->___destinationSet_14 = (bool)0;
		// }
		return;
	}
}
// System.Void SetNavigation::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetNavigation_Update_m1D78814834B651086C5C4068248C620B8724F513 (SetNavigation_t3B30AAEB2ECE7AAD37EE8197ACB96E7772680782* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral641EF5511F3E345E85EE823A85C31FD112C032D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (currDestination != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___currDestination_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_00a3;
		}
	}
	{
		// NavMesh.CalculatePath(indicator.transform.position, currDestination.position, NavMesh.AllAreas, path);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___indicator_12;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___currDestination_10;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_7 = __this->___path_6;
		bool L_8;
		L_8 = NavMesh_CalculatePath_m2D0FF786CDEA88E7490ABA4582967087006F6E5E(L_4, L_6, (-1), L_7, NULL);
		// if (path.corners.Length == 0)
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_9 = __this->___path_6;
		NullCheck(L_9);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_10;
		L_10 = NavMeshPath_get_corners_m469237DE430A001BE7050BEF5D05A20B94D76F3E(L_9, NULL);
		NullCheck(L_10);
		if ((((RuntimeArray*)L_10)->max_length))
		{
			goto IL_0059;
		}
	}
	{
		// text.text = "Try moving away for obstacles (optionally recalibrate)";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11 = __this->___text_13;
		NullCheck(L_11);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, _stringLiteral641EF5511F3E345E85EE823A85C31FD112C032D7);
		goto IL_0069;
	}

IL_0059:
	{
		// text.text = "";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12 = __this->___text_13;
		NullCheck(L_12);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
	}

IL_0069:
	{
		// line.positionCount = path.corners.Length;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_13 = __this->___line_7;
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_14 = __this->___path_6;
		NullCheck(L_14);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_15;
		L_15 = NavMeshPath_get_corners_m469237DE430A001BE7050BEF5D05A20B94D76F3E(L_14, NULL);
		NullCheck(L_15);
		NullCheck(L_13);
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_13, ((int32_t)(((RuntimeArray*)L_15)->max_length)), NULL);
		// line.SetPositions(path.corners);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_16 = __this->___line_7;
		NavMeshPath_tC77ABF4A25FC0F0A94E8A70E304E114FE690A3A7* L_17 = __this->___path_6;
		NullCheck(L_17);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_18;
		L_18 = NavMeshPath_get_corners_m469237DE430A001BE7050BEF5D05A20B94D76F3E(L_17, NULL);
		NullCheck(L_16);
		LineRenderer_SetPositions_m7F7B7B54428437D0BF5256D4C82F92180B577B02(L_16, L_18, NULL);
		// line.enabled = true;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_19 = __this->___line_7;
		NullCheck(L_19);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_19, (bool)1, NULL);
	}

IL_00a3:
	{
		// }
		return;
	}
}
// System.Void SetNavigation::DropdownIndexChanged(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetNavigation_DropdownIndexChanged_mE566B25B1ED72E8C901B6288335D64B8C9F680A2 (SetNavigation_t3B30AAEB2ECE7AAD37EE8197ACB96E7772680782* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mF07727D454FABD5EF479AEDE1687BAB0A7458F4B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (index == 0 && !destinationSet)
		int32_t L_0 = ___index0;
		if (L_0)
		{
			goto IL_001f;
		}
	}
	{
		bool L_1 = __this->___destinationSet_14;
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		// currDestination = null;
		__this->___currDestination_10 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currDestination_10), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
		// line.positionCount = 0;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_2 = __this->___line_7;
		NullCheck(L_2);
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_2, 0, NULL);
		return;
	}

IL_001f:
	{
		// if (destinationSet)
		bool L_3 = __this->___destinationSet_14;
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		// RemoveArrowAndCollider();
		SetNavigation_RemoveArrowAndCollider_m51745346B5407A28D8114EB4C0BB2B0FDA084750(__this, NULL);
		// SetDestination(index);
		int32_t L_4 = ___index0;
		SetNavigation_SetDestination_m1C43808E7F990803A5D8F644ACE43454867F212F(__this, L_4, NULL);
		goto IL_005e;
	}

IL_0036:
	{
		// dropdown.options.RemoveAt(0);
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_5 = __this->___dropdown_9;
		NullCheck(L_5);
		List_1_tCADFA900711C24701A9C70EE674B91FC45D42A52* L_6;
		L_6 = TMP_Dropdown_get_options_mA543A0EFE4D1953E73C6F60ECA8CE177182571C5(L_5, NULL);
		NullCheck(L_6);
		List_1_RemoveAt_mF07727D454FABD5EF479AEDE1687BAB0A7458F4B(L_6, 0, List_1_RemoveAt_mF07727D454FABD5EF479AEDE1687BAB0A7458F4B_RuntimeMethod_var);
		// dropdown.SetValueWithoutNotify(index - 1);
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_7 = __this->___dropdown_9;
		int32_t L_8 = ___index0;
		NullCheck(L_7);
		TMP_Dropdown_SetValueWithoutNotify_m619A7D38D1EBCCA60EB1F5891FAD9FD0FB4839FD(L_7, ((int32_t)il2cpp_codegen_subtract(L_8, 1)), NULL);
		// SetDestination(index - 1);
		int32_t L_9 = ___index0;
		SetNavigation_SetDestination_m1C43808E7F990803A5D8F644ACE43454867F212F(__this, ((int32_t)il2cpp_codegen_subtract(L_9, 1)), NULL);
	}

IL_005e:
	{
		// destinationSet = true;
		__this->___destinationSet_14 = (bool)1;
		// }
		return;
	}
}
// System.Void SetNavigation::PopulateList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetNavigation_PopulateList_mC6DF1465815A7D09CA1C4946FA7FA663FF9BE7EA (SetNavigation_t3B30AAEB2ECE7AAD37EE8197ACB96E7772680782* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3864F889F73C2EC7E66324ADB4DD8430201EB358);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_0 = NULL;
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* V_1 = NULL;
	int32_t V_2 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_3 = NULL;
	{
		// List<string> names = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_0 = L_0;
		// names.Add("Choose a destination..");
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = V_0;
		NullCheck(L_1);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_1, _stringLiteral3864F889F73C2EC7E66324ADB4DD8430201EB358, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// foreach (Transform dest in destinations)
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_2 = __this->___destinations_11;
		V_1 = L_2;
		V_2 = 0;
		goto IL_0030;
	}

IL_001c:
	{
		// foreach (Transform dest in destinations)
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_3 = L_6;
		// names.Add(dest.name);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = V_3;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_8, NULL);
		NullCheck(L_7);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_7, L_9, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0030:
	{
		// foreach (Transform dest in destinations)
		int32_t L_11 = V_2;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_12 = V_1;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_001c;
		}
	}
	{
		// dropdown.AddOptions(names);
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_13 = __this->___dropdown_9;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_14 = V_0;
		NullCheck(L_13);
		TMP_Dropdown_AddOptions_m6EB4E175FE6B5555BDC2C31EFBCC3B115DE85FF5(L_13, L_14, NULL);
		// }
		return;
	}
}
// System.Void SetNavigation::SetDestination(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetNavigation_SetDestination_m1C43808E7F990803A5D8F644ACE43454867F212F (SetNavigation_t3B30AAEB2ECE7AAD37EE8197ACB96E7772680782* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06048574684685FB24628AE570BB15BA2D62FD8B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currDestination = destinations[index];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_0 = __this->___destinations_11;
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		__this->___currDestination_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currDestination_10), (void*)L_3);
		// Debug.Log("Set dest: " + currDestination.name);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___currDestination_10;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral06048574684685FB24628AE570BB15BA2D62FD8B, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_6, NULL);
		// }
		return;
	}
}
// System.Void SetNavigation::RemoveArrowAndCollider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetNavigation_RemoveArrowAndCollider_m51745346B5407A28D8114EB4C0BB2B0FDA084750 (SetNavigation_t3B30AAEB2ECE7AAD37EE8197ACB96E7772680782* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void SetNavigation::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetNavigation_Clear_m01440C6C882617115BF7838B113A563664B71B92 (SetNavigation_t3B30AAEB2ECE7AAD37EE8197ACB96E7772680782* __this, const RuntimeMethod* method) 
{
	{
		// currDestination = null;
		__this->___currDestination_10 = (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currDestination_10), (void*)(Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL);
		// line.positionCount = 0;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0 = __this->___line_7;
		NullCheck(L_0);
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_0, 0, NULL);
		// destinationSet = false;
		__this->___destinationSet_14 = (bool)0;
		// dropdown.ClearOptions();
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_1 = __this->___dropdown_9;
		NullCheck(L_1);
		TMP_Dropdown_ClearOptions_m9888C23BC3033268E5C2D8613C0854661E7BDEB5(L_1, NULL);
		// PopulateList();
		SetNavigation_PopulateList_mC6DF1465815A7D09CA1C4946FA7FA663FF9BE7EA(__this, NULL);
		// dropdown.SetValueWithoutNotify(0);
		TMP_Dropdown_t73B37BFDA0D005451C7B750938AFB1748E5EA504* L_2 = __this->___dropdown_9;
		NullCheck(L_2);
		TMP_Dropdown_SetValueWithoutNotify_m619A7D38D1EBCCA60EB1F5891FAD9FD0FB4839FD(L_2, 0, NULL);
		// }
		return;
	}
}
// System.Void SetNavigation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetNavigation__ctor_m802B914BEA9B7C7D567F57F02B3F3AB7DEFD1FE8 (SetNavigation_t3B30AAEB2ECE7AAD37EE8197ACB96E7772680782* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Single ARFeatheredPlaneMeshVisualizer::get_featheringWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ARFeatheredPlaneMeshVisualizer_get_featheringWidth_m14D3A8BE3E9A745E6FD525B19ADDC892B8399B4D (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_FeatheringWidth; }
		float L_0 = __this->___m_FeatheringWidth_4;
		return L_0;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::set_featheringWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_set_featheringWidth_mD616A09A3B426EA5DE1FA37334DD194E43EEC110 (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_FeatheringWidth = value; }
		float L_0 = ___value0;
		__this->___m_FeatheringWidth_4 = L_0;
		// set { m_FeatheringWidth = value; }
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_Awake_mC5DB0414A2514BF4851266C25141C903F0AC57BA (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F_m41229EDC62D1149A73F81E7B0BE27B4C1C293A01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0_m8005DAC7F65600404981B996A714B5C7D29A359F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_PlaneMeshVisualizer = GetComponent<ARPlaneMeshVisualizer>();
		ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* L_0;
		L_0 = Component_GetComponent_TisARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F_m41229EDC62D1149A73F81E7B0BE27B4C1C293A01(__this, Component_GetComponent_TisARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F_m41229EDC62D1149A73F81E7B0BE27B4C1C293A01_RuntimeMethod_var);
		__this->___m_PlaneMeshVisualizer_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PlaneMeshVisualizer_7), (void*)L_0);
		// m_FeatheredPlaneMaterial = GetComponent<MeshRenderer>().material;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_1;
		L_1 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(__this, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		NullCheck(L_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_1, NULL);
		__this->___m_FeatheredPlaneMaterial_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FeatheredPlaneMaterial_9), (void*)L_2);
		// m_Plane = GetComponent<ARPlane>();
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_3;
		L_3 = Component_GetComponent_TisARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0_m8005DAC7F65600404981B996A714B5C7D29A359F(__this, Component_GetComponent_TisARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0_m8005DAC7F65600404981B996A714B5C7D29A359F_RuntimeMethod_var);
		__this->___m_Plane_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Plane_8), (void*)L_3);
		// }
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_OnEnable_m8781C85CFED871C8A81A5B88DB1031856E0FC9F0 (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_mB3D9BBD14EA1FE3ECDBACC2DB89C1B110B8B6B5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Plane.boundaryChanged += ARPlane_boundaryUpdated;
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_0 = __this->___m_Plane_8;
		Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* L_1 = (Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074*)il2cpp_codegen_object_new(Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m83B9B49A5CEF71BC8798C9C8B7989333626CF3E1(L_1, __this, (intptr_t)((void*)ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_mB3D9BBD14EA1FE3ECDBACC2DB89C1B110B8B6B5F_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		ARPlane_add_boundaryChanged_m6A9CA2ADF4742C004EF7BCFD48A7C820320616AA(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_OnDisable_m2343B05B1A8F14BAD4DD516C584281B66FE6A4E8 (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_mB3D9BBD14EA1FE3ECDBACC2DB89C1B110B8B6B5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Plane.boundaryChanged -= ARPlane_boundaryUpdated;
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_0 = __this->___m_Plane_8;
		Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* L_1 = (Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074*)il2cpp_codegen_object_new(Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m83B9B49A5CEF71BC8798C9C8B7989333626CF3E1(L_1, __this, (intptr_t)((void*)ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_mB3D9BBD14EA1FE3ECDBACC2DB89C1B110B8B6B5F_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		ARPlane_remove_boundaryChanged_m6F71EEF2CD3C71AF069C5FE6CD993906BD8A9A10(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::ARPlane_boundaryUpdated(UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_ARPlane_boundaryUpdated_mB3D9BBD14EA1FE3ECDBACC2DB89C1B110B8B6B5F (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, ARPlaneBoundaryChangedEventArgs_tE59EDE94575C8947AD3F1F8DA1370D0A426A5FFC ___eventArgs0, const RuntimeMethod* method) 
{
	{
		// GenerateBoundaryUVs(m_PlaneMeshVisualizer.mesh);
		ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* L_0 = __this->___m_PlaneMeshVisualizer_7;
		NullCheck(L_0);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_1;
		L_1 = ARPlaneMeshVisualizer_get_mesh_m6C1A730CECE8AE0A0549ED615AB3B3D66E4A0FD8_inline(L_0, NULL);
		ARFeatheredPlaneMeshVisualizer_GenerateBoundaryUVs_mF756D3C1F7925A69CD8C7C8CCE56209AB321FEF5(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::GenerateBoundaryUVs(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer_GenerateBoundaryUVs_mF756D3C1F7925A69CD8C7C8CCE56209AB321FEF5 (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral131018280018B48DB9FF86A96C7535E6FA339C24);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	{
		// int vertexCount = mesh.vertexCount;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = ___mesh0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Mesh_get_vertexCount_mB7BE0340AAF272933068D830C8E711FC8978E12C(L_0, NULL);
		V_0 = L_1;
		// s_FeatheringUVs.Clear();
		il2cpp_codegen_runtime_class_init_inline(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_2 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5;
		NullCheck(L_2);
		List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_inline(L_2, List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_RuntimeMethod_var);
		// if (s_FeatheringUVs.Capacity < vertexCount) { s_FeatheringUVs.Capacity = vertexCount; }
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_3 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6(L_3, List_1_get_Capacity_m1810FC505867C713DCDDD7468F8BA2BF1DF0D3B6_RuntimeMethod_var);
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0029;
		}
	}
	{
		// if (s_FeatheringUVs.Capacity < vertexCount) { s_FeatheringUVs.Capacity = vertexCount; }
		il2cpp_codegen_runtime_class_init_inline(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_6 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE(L_6, L_7, List_1_set_Capacity_mF3F5104AB534524CF6D04659241FBD48C9080FFE_RuntimeMethod_var);
	}

IL_0029:
	{
		// mesh.GetVertices(s_Vertices);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_8 = ___mesh0;
		il2cpp_codegen_runtime_class_init_inline(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_9 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_Vertices_6;
		NullCheck(L_8);
		Mesh_GetVertices_m5BF8777074E383AD8C4B9974D27E4AB52963D92E(L_8, L_9, NULL);
		// Vector3 centerInPlaneSpace = s_Vertices[s_Vertices.Count - 1];
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_10 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_Vertices_6;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_11 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_Vertices_6;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_11, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_10, ((int32_t)il2cpp_codegen_subtract(L_12, 1)), List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		V_1 = L_13;
		// Vector3 uv = new Vector3(0, 0, 0);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_2), (0.0f), (0.0f), (0.0f), NULL);
		// float shortestUVMapping = float.MaxValue;
		V_3 = ((std::numeric_limits<float>::max)());
		// for (int i = 0; i < vertexCount - 1; i++)
		V_4 = 0;
		goto IL_00b5;
	}

IL_006c:
	{
		// float vertexDist = Vector3.Distance(s_Vertices[i], centerInPlaneSpace);
		il2cpp_codegen_runtime_class_init_inline(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_14 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_Vertices_6;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_14, L_15, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_1;
		float L_18;
		L_18 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_16, L_17, NULL);
		// float uvMapping = vertexDist / Mathf.Max(vertexDist - featheringWidth, 0.001f);
		float L_19 = L_18;
		float L_20;
		L_20 = ARFeatheredPlaneMeshVisualizer_get_featheringWidth_m14D3A8BE3E9A745E6FD525B19ADDC892B8399B4D_inline(__this, NULL);
		float L_21;
		L_21 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(((float)il2cpp_codegen_subtract(L_19, L_20)), (0.00100000005f), NULL);
		V_5 = ((float)(L_19/L_21));
		// uv.x = uvMapping;
		float L_22 = V_5;
		(&V_2)->___x_2 = L_22;
		// if (shortestUVMapping > uvMapping) { shortestUVMapping = uvMapping; }
		float L_23 = V_3;
		float L_24 = V_5;
		if ((!(((float)L_23) > ((float)L_24))))
		{
			goto IL_00a4;
		}
	}
	{
		// if (shortestUVMapping > uvMapping) { shortestUVMapping = uvMapping; }
		float L_25 = V_5;
		V_3 = L_25;
	}

IL_00a4:
	{
		// s_FeatheringUVs.Add(uv);
		il2cpp_codegen_runtime_class_init_inline(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_26 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_2;
		NullCheck(L_26);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_26, L_27, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// for (int i = 0; i < vertexCount - 1; i++)
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00b5:
	{
		// for (int i = 0; i < vertexCount - 1; i++)
		int32_t L_29 = V_4;
		int32_t L_30 = V_0;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_30, 1)))))
		{
			goto IL_006c;
		}
	}
	{
		// m_FeatheredPlaneMaterial.SetFloat("_ShortestUVMapping", shortestUVMapping);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_31 = __this->___m_FeatheredPlaneMaterial_9;
		float L_32 = V_3;
		NullCheck(L_31);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_31, _stringLiteral131018280018B48DB9FF86A96C7535E6FA339C24, L_32, NULL);
		// uv.Set(0, 0, 0);
		Vector3_Set_m1C7E543216734FB513F9CEBA44C50E6FC2AFD49D_inline((&V_2), (0.0f), (0.0f), (0.0f), NULL);
		// s_FeatheringUVs.Add(uv);
		il2cpp_codegen_runtime_class_init_inline(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_33 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_2;
		NullCheck(L_33);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_33, L_34, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// mesh.SetUVs(1, s_FeatheringUVs);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_35 = ___mesh0;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_36 = ((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5;
		NullCheck(L_35);
		Mesh_SetUVs_mFEE20B5977AA358DAFA31CF621BBC4B0247789B2(L_35, 1, L_36, NULL);
		// mesh.UploadMeshData(false);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_37 = ___mesh0;
		NullCheck(L_37);
		Mesh_UploadMeshData_mE4C94F263DAA8CAC1641FE137E1CE7D3F09396EB(L_37, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer__ctor_m9A77651BCAE58AA0B994FFF6C6B63B1CFF2729F6 (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, const RuntimeMethod* method) 
{
	{
		// float m_FeatheringWidth = 0.2f;
		__this->___m_FeatheringWidth_4 = (0.200000003f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void ARFeatheredPlaneMeshVisualizer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFeatheredPlaneMeshVisualizer__cctor_mF4BA6DDB611A3FD966C8B9494AE6B3EB8647CEAD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static List<Vector3> s_FeatheringUVs = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_0, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_FeatheringUVs_5), (void*)L_0);
		// static List<Vector3> s_Vertices = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_1 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_1, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_Vertices_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_StaticFields*)il2cpp_codegen_static_fields_for(ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955_il2cpp_TypeInfo_var))->___s_Vertices_6), (void*)L_1);
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
// System.Boolean ARKitCoachingOverlay::get_activatesAutomatically()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARKitCoachingOverlay_get_activatesAutomatically_m78581F8DE2ADE2D136771A45BB88522464094FC6 (ARKitCoachingOverlay_t36497D45FFD0ECB9ADA3238540945D2305076A62* __this, const RuntimeMethod* method) 
{
	{
		// return m_ActivatesAutomatically;
		bool L_0 = __this->___m_ActivatesAutomatically_5;
		return L_0;
	}
}
// System.Void ARKitCoachingOverlay::set_activatesAutomatically(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitCoachingOverlay_set_activatesAutomatically_m266BE7873A258E3DACA8B919972A67A8413EEA84 (ARKitCoachingOverlay_t36497D45FFD0ECB9ADA3238540945D2305076A62* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// m_ActivatesAutomatically = value;
		bool L_0 = ___value0;
		__this->___m_ActivatesAutomatically_5 = L_0;
		// }
		return;
	}
}
// System.Boolean ARKitCoachingOverlay::get_supported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARKitCoachingOverlay_get_supported_m27AB80DB980F577354AB7CF467F79DADE310E7DB (ARKitCoachingOverlay_t36497D45FFD0ECB9ADA3238540945D2305076A62* __this, const RuntimeMethod* method) 
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Void ARKitCoachingOverlay::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitCoachingOverlay_OnEnable_m18AD2DC3492E648F4E2DBC0391613609A41758A1 (ARKitCoachingOverlay_t36497D45FFD0ECB9ADA3238540945D2305076A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16CDB511D09802498D436CB3132D02AF04FA9184);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogError("ARCoachingOverlayView is not supported by this device.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral16CDB511D09802498D436CB3132D02AF04FA9184, NULL);
		// }
		return;
	}
}
// System.Void ARKitCoachingOverlay::ActivateCoaching(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitCoachingOverlay_ActivateCoaching_m37C38E140603D61E3AD3B66BFCDEF08CADB6FA29 (ARKitCoachingOverlay_t36497D45FFD0ECB9ADA3238540945D2305076A62* __this, bool ___animated0, const RuntimeMethod* method) 
{
	{
		// throw new NotSupportedException("ARCoachingOverlay is not supported");
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1FC98656B2789037B2682120B8E7CC32487D487C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ARKitCoachingOverlay_ActivateCoaching_m37C38E140603D61E3AD3B66BFCDEF08CADB6FA29_RuntimeMethod_var)));
	}
}
// System.Void ARKitCoachingOverlay::DisableCoaching(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitCoachingOverlay_DisableCoaching_m1F3FF03DF675DF154E4662927078A7F4497FA5EE (ARKitCoachingOverlay_t36497D45FFD0ECB9ADA3238540945D2305076A62* __this, bool ___animated0, const RuntimeMethod* method) 
{
	{
		// throw new NotSupportedException("ARCoachingOverlay is not supported");
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1FC98656B2789037B2682120B8E7CC32487D487C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ARKitCoachingOverlay_DisableCoaching_m1F3FF03DF675DF154E4662927078A7F4497FA5EE_RuntimeMethod_var)));
	}
}
// System.Void ARKitCoachingOverlay::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitCoachingOverlay__ctor_mF91805ED6546FAC2BB601A64B4916E72AEC3E989 (ARKitCoachingOverlay_t36497D45FFD0ECB9ADA3238540945D2305076A62* __this, const RuntimeMethod* method) 
{
	{
		// bool m_ActivatesAutomatically = true;
		__this->___m_ActivatesAutomatically_5 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// TMPro.TMP_Text ARUXAnimationManager::get_instructionText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ARUXAnimationManager_get_instructionText_m1CC238EF8994F60D6D770DA5A208C6465463FC49 (ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* __this, const RuntimeMethod* method) 
{
	{
		// get => m_InstructionText;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->___m_InstructionText_4;
		return L_0;
	}
}
// System.Void ARUXAnimationManager::set_instructionText(TMPro.TMP_Text)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUXAnimationManager_set_instructionText_mAF66417FFE74AFD9D9847796856374A5ECFBCD85 (ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* __this, TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_InstructionText = value;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = ___value0;
		__this->___m_InstructionText_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_InstructionText_4), (void*)L_0);
		return;
	}
}
// UnityEngine.Video.VideoClip ARUXAnimationManager::get_findAPlaneClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* ARUXAnimationManager_get_findAPlaneClip_m2928910E644421A05288F69A1996ED841D5D4591 (ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* __this, const RuntimeMethod* method) 
{
	{
		// get => m_FindAPlaneClip;
		VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* L_0 = __this->___m_FindAPlaneClip_5;
		return L_0;
	}
}
// System.Void ARUXAnimationManager::set_findAPlaneClip(UnityEngine.Video.VideoClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUXAnimationManager_set_findAPlaneClip_mB3C258ED296DA5444FD657CCCD5CEA66C7DCA4E5 (ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* __this, VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_FindAPlaneClip = value;
		VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* L_0 = ___value0;
		__this->___m_FindAPlaneClip_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FindAPlaneClip_5), (void*)L_0);
		return;
	}
}
// UnityEngine.Video.VideoClip ARUXAnimationManager::get_tapToPlaceClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* ARUXAnimationManager_get_tapToPlaceClip_m2CDD4E2D31DDF98885B6BA8A040A2EABC6BF6D0D (ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* __this, const RuntimeMethod* method) 
{
	{
		// get => m_TapToPlaceClip;
		VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* L_0 = __this->___m_TapToPlaceClip_6;
		return L_0;
	}
}
// System.Void ARUXAnimationManager::set_tapToPlaceClip(UnityEngine.Video.VideoClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUXAnimationManager_set_tapToPlaceClip_m5DEC61AEACEC2F789B4B43501DAA806596EBA285 (ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* __this, VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_TapToPlaceClip = value;
		VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* L_0 = ___value0;
		__this->___m_TapToPlaceClip_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TapToPlaceClip_6), (void*)L_0);
		return;
	}
}
// UnityEngine.Video.VideoClip ARUXAnimationManager::get_findImageClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* ARUXAnimationManager_get_findImageClip_mA91EB446E46A0A5126CE55EB105668E3D3F016EE (ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* __this, const RuntimeMethod* method) 
{
	{
		// get => m_FindImageClip;
		VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* L_0 = __this->___m_FindImageClip_7;
		return L_0;
	}
}
// System.Void ARUXAnimationManager::set_findImageClip(UnityEngine.Video.VideoClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUXAnimationManager_set_findImageClip_m0991923114245EE440B7F4EFA2D0B3F079B8AFDB (ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* __this, VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_FindImageClip = value;
		VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* L_0 = ___value0;
		__this->___m_FindImageClip_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FindImageClip_7), (void*)L_0);
		return;
	}
}
// UnityEngine.Video.VideoClip ARUXAnimationManager::get_findBodyClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* ARUXAnimationManager_get_findBodyClip_m15EE25696254F314BDFB2CAEAABDA306B873B080 (ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* __this, const RuntimeMethod* method) 
{
	{
		// get => m_FindBodyClip;
		VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* L_0 = __this->___m_FindBodyClip_8;
		return L_0;
	}
}
// System.Void ARUXAnimationManager::set_findBodyClip(UnityEngine.Video.VideoClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUXAnimationManager_set_findBodyClip_mC3ED47CC199C60D0532CA316A5C09CC24720C311 (ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* __this, VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_FindBodyClip = value;
		VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* L_0 = ___value0;
		__this->___m_FindBodyClip_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FindBodyClip_8), (void*)L_0);
		return;
	}
}
// UnityEngine.Video.VideoClip ARUXAnimationManager::get_findObjectClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* ARUXAnimationManager_get_findObjectClip_m0F05768C81F5C33165034686480270402D7507E9 (ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* __this, const RuntimeMethod* method) 
{
	{
		// get => m_FindObjectClip;
		VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* L_0 = __this->___m_FindObjectClip_9;
		return L_0;
	}
}
// System.Void ARUXAnimationManager::set_findObjectClip(UnityEngine.Video.VideoClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUXAnimationManager_set_findObjectClip_mEF0236D22AF5CAA53F3E71836D369AEBC2E3BAF4 (ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* __this, VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_FindObjectClip = value;
		VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* L_0 = ___value0;
		__this->___m_FindObjectClip_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FindObjectClip_9), (void*)L_0);
		return;
	}
}
// UnityEngine.Video.VideoClip ARUXAnimationManager::get_findFaceClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* ARUXAnimationManager_get_findFaceClip_m41EF9B5BE68912BCD88034BA7D980FF60ADC8328 (ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* __this, const RuntimeMethod* method) 
{
	{
		// get => m_FindFaceClip;
		VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* L_0 = __this->___m_FindFaceClip_10;
		return L_0;
	}
}
// System.Void ARUXAnimationManager::set_findFaceClip(UnityEngine.Video.VideoClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUXAnimationManager_set_findFaceClip_m44B764BF1A5E216634B1E4A741DC6E85F692C6CD (ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* __this, VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_FindFaceClip = value;
		VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* L_0 = ___value0;
		__this->___m_FindFaceClip_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FindFaceClip_10), (void*)L_0);
		return;
	}
}
// ARKitCoachingOverlay ARUXAnimationManager::get_coachingOverlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARKitCoachingOverlay_t36497D45FFD0ECB9ADA3238540945D2305076A62* ARUXAnimationManager_get_coachingOverlay_mFCF45BB9BAAE6D542653EB8A91BA0A6D58396086 (ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* __this, const RuntimeMethod* method) 
{
	{
		// get => m_CoachingOverlay;
		ARKitCoachingOverlay_t36497D45FFD0ECB9ADA3238540945D2305076A62* L_0 = __this->___m_CoachingOverlay_11;
		return L_0;
	}
}
// System.Void ARUXAnimationManager::set_coachingOverlay(ARKitCoachingOverlay)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUXAnimationManager_set_coachingOverlay_mB1361478706AA0FD92C727B8BD81AC7010EAD559 (ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* __this, ARKitCoachingOverlay_t36497D45FFD0ECB9ADA3238540945D2305076A62* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_CoachingOverlay = value;
		ARKitCoachingOverlay_t36497D45FFD0ECB9ADA3238540945D2305076A62* L_0 = ___value0;
		__this->___m_CoachingOverlay_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CoachingOverlay_11), (void*)L_0);
		return;
	}
}
// UnityEngine.Video.VideoPlayer ARUXAnimationManager::get_videoPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ARUXAnimationManager_get_videoPlayer_mC8CA1BAEFC79FEFAFEF49459E6AC0DD8C99680CA (ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* __this, const RuntimeMethod* method) 
{
	{
		// get => m_VideoPlayer;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_0 = __this->___m_VideoPlayer_12;
		return L_0;
	}
}
// System.Void ARUXAnimationManager::set_videoPlayer(UnityEngine.Video.VideoPlayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUXAnimationManager_set_videoPlayer_mC67825967CFEFFF12DF33B13225AA67351522D09 (ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_VideoPlayer = value;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_0 = ___value0;
		__this->___m_VideoPlayer_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_VideoPlayer_12), (void*)L_0);
		return;
	}
}
// UnityEngine.UI.RawImage ARUXAnimationManager::get_rawImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* ARUXAnimationManager_get_rawImage_m70D51E35DD6FE033B805745A3CECF74FC1ECFBD1 (ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* __this, const RuntimeMethod* method) 
{
	{
		// get => m_RawImage;
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_0 = __this->___m_RawImage_13;
		return L_0;
	}
}
// System.Void ARUXAnimationManager::set_rawImage(UnityEngine.UI.RawImage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUXAnimationManager_set_rawImage_m960D91F6F8FE783D2FF9721AD3615A7C7893B098 (ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* __this, RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_RawImage = value;
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_0 = ___value0;
		__this->___m_RawImage_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RawImage_13), (void*)L_0);
		return;
	}
}
// System.Void ARUXAnimationManager::add_onFadeOffComplete(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUXAnimationManager_add_onFadeOffComplete_m38528C701B7CA8DB1B51E93E20197FCC208DF349 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966_StaticFields*)il2cpp_codegen_static_fields_for(ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966_il2cpp_TypeInfo_var))->___onFadeOffComplete_33;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>((&((ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966_StaticFields*)il2cpp_codegen_static_fields_for(ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966_il2cpp_TypeInfo_var))->___onFadeOffComplete_33), L_5, L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void ARUXAnimationManager::remove_onFadeOffComplete(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUXAnimationManager_remove_onFadeOffComplete_mC89FA8BDBC5B43660675D5A01E25A10C042368B2 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966_StaticFields*)il2cpp_codegen_static_fields_for(ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966_il2cpp_TypeInfo_var))->___onFadeOffComplete_33;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>((&((ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966_StaticFields*)il2cpp_codegen_static_fields_for(ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966_il2cpp_TypeInfo_var))->___onFadeOffComplete_33), L_5, L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// UnityEngine.Texture ARUXAnimationManager::get_transparent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ARUXAnimationManager_get_transparent_m02A992DD873C6BA6A6070FF943E0CBEFD87075AC (ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Transparent;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = __this->___m_Transparent_34;
		return L_0;
	}
}
// System.Void ARUXAnimationManager::set_transparent(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUXAnimationManager_set_transparent_m1A751D765CD6EEE73C795B295DFC54E3424AC253 (ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_Transparent = value;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_0 = ___value0;
		__this->___m_Transparent_34 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Transparent_34), (void*)L_0);
		return;
	}
}
// LocalizationManager ARUXAnimationManager::get_localizationManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* ARUXAnimationManager_get_localizationManager_mC16958E553D43FC45A6BADAAD8548FAC5C0A3E9A (ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* __this, const RuntimeMethod* method) 
{
	{
		// get => m_LocalizationManager;
		LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* L_0 = __this->___m_LocalizationManager_36;
		return L_0;
	}
}
// System.Void ARUXAnimationManager::set_localizationManager(LocalizationManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUXAnimationManager_set_localizationManager_m373942331C1A52860B4E53AB346FA92C00C1E47E (ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* __this, LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_LocalizationManager = value;
		LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* L_0 = ___value0;
		__this->___m_LocalizationManager_36 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LocalizationManager_36), (void*)L_0);
		return;
	}
}
// System.Boolean ARUXAnimationManager::get_localizeText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARUXAnimationManager_get_localizeText_m66AC1B057DB568FFE8E224FC2FF72F01DE62400D (ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* __this, const RuntimeMethod* method) 
{
	{
		// get => m_LocalizeText;
		bool L_0 = __this->___m_LocalizeText_37;
		return L_0;
	}
}
// System.Void ARUXAnimationManager::set_localizeText(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUXAnimationManager_set_localizeText_m288628A8A8F08B33BA8FF43A794B1EB7159884ED (ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_LocalizeText = value;
		bool L_0 = ___value0;
		__this->___m_LocalizeText_37 = L_0;
		return;
	}
}
// System.Void ARUXAnimationManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUXAnimationManager_Start_m84082B5FBD3DDF3A3CFBB2C7A20310E13A4AFBFE (ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* __this, const RuntimeMethod* method) 
{
	{
		// m_StartColor = m_AlphaWhite;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_AlphaWhite_16;
		__this->___m_StartColor_19 = L_0;
		// m_TargetColor = m_White;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = __this->___m_White_17;
		__this->___m_TargetColor_18 = L_1;
		// }
		return;
	}
}
// System.Void ARUXAnimationManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUXAnimationManager_Update_mA7B19938DD119592EB323B3EB3673CC55EEA74A0 (ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_VideoPlayer.isPrepared)
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_0 = __this->___m_VideoPlayer_12;
		NullCheck(L_0);
		bool L_1;
		L_1 = VideoPlayer_get_isPrepared_mF2F3AD27BE0FD06695EE9DEE762B68F431E15767(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// if (m_FadeOff || m_FadeOn)
		bool L_2 = __this->___m_FadeOff_22;
		if (L_2)
		{
			goto IL_0021;
		}
	}
	{
		bool L_3 = __this->___m_FadeOn_21;
		if (!L_3)
		{
			goto IL_0170;
		}
	}

IL_0021:
	{
		// if (m_FadeOn)
		bool L_4 = __this->___m_FadeOn_21;
		if (!L_4)
		{
			goto IL_0054;
		}
	}
	{
		// m_StartColor = m_AlphaWhite;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = __this->___m_AlphaWhite_16;
		__this->___m_StartColor_19 = L_5;
		// m_TargetColor = m_White;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = __this->___m_White_17;
		__this->___m_TargetColor_18 = L_6;
		// m_TweenDuration = m_FadeOnDuration;
		float L_7 = __this->___m_FadeOnDuration_14;
		__this->___m_TweenDuration_26 = L_7;
		// m_FadeOff = false;
		__this->___m_FadeOff_22 = (bool)0;
	}

IL_0054:
	{
		// if(m_FadeOff)
		bool L_8 = __this->___m_FadeOff_22;
		if (!L_8)
		{
			goto IL_0087;
		}
	}
	{
		// m_StartColor = m_White;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = __this->___m_White_17;
		__this->___m_StartColor_19 = L_9;
		// m_TargetColor = m_AlphaWhite;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = __this->___m_AlphaWhite_16;
		__this->___m_TargetColor_18 = L_10;
		// m_TweenDuration = m_FadeOffDuration;
		float L_11 = __this->___m_FadeOffDuration_15;
		__this->___m_TweenDuration_26 = L_11;
		// m_FadeOn = false;
		__this->___m_FadeOn_21 = (bool)0;
	}

IL_0087:
	{
		// if (m_TweenTime < 1)
		float L_12 = __this->___m_TweenTime_25;
		if ((!(((float)L_12) < ((float)(1.0f)))))
		{
			goto IL_00f4;
		}
	}
	{
		// m_TweenTime += Time.deltaTime / m_TweenDuration;
		float L_13 = __this->___m_TweenTime_25;
		float L_14;
		L_14 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_15 = __this->___m_TweenDuration_26;
		__this->___m_TweenTime_25 = ((float)il2cpp_codegen_add(L_13, ((float)(L_14/L_15))));
		// m_LerpingColor = Color.Lerp(m_StartColor, m_TargetColor, m_TweenTime);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = __this->___m_StartColor_19;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = __this->___m_TargetColor_18;
		float L_18 = __this->___m_TweenTime_25;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19;
		L_19 = Color_Lerp_mCE0CF50E59713C5A8F6AAC2C6648CF0EDBEEB27B_inline(L_16, L_17, L_18, NULL);
		__this->___m_LerpingColor_20 = L_19;
		// m_RawImage.color = m_LerpingColor;
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_20 = __this->___m_RawImage_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21 = __this->___m_LerpingColor_20;
		NullCheck(L_20);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_20, L_21);
		// m_InstructionText.color = m_LerpingColor;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_22 = __this->___m_InstructionText_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = __this->___m_LerpingColor_20;
		NullCheck(L_22);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_22, L_23);
		// m_Tweening = true;
		__this->___m_Tweening_23 = (bool)1;
		return;
	}

IL_00f4:
	{
		// m_TweenTime = 0;
		__this->___m_TweenTime_25 = (0.0f);
		// m_FadeOff = false;
		__this->___m_FadeOff_22 = (bool)0;
		// m_FadeOn = false;
		__this->___m_FadeOn_21 = (bool)0;
		// m_Tweening = false;
		__this->___m_Tweening_23 = (bool)0;
		// if (m_TargetColor == m_AlphaWhite)
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24 = __this->___m_TargetColor_18;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = __this->___m_AlphaWhite_16;
		bool L_26;
		L_26 = Color_op_Equality_m3A255F888F9300ABB36ED2BC0640CFFDAAEFED2F_inline(L_24, L_25, NULL);
		if (!L_26)
		{
			goto IL_0170;
		}
	}
	{
		// if (onFadeOffComplete != null)
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_27 = ((ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966_StaticFields*)il2cpp_codegen_static_fields_for(ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966_il2cpp_TypeInfo_var))->___onFadeOffComplete_33;
		if (!L_27)
		{
			goto IL_0138;
		}
	}
	{
		// onFadeOffComplete();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_28 = ((ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966_StaticFields*)il2cpp_codegen_static_fields_for(ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966_il2cpp_TypeInfo_var))->___onFadeOffComplete_33;
		NullCheck(L_28);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_28, NULL);
	}

IL_0138:
	{
		// m_RenderTexture = m_VideoPlayer.targetTexture;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_29 = __this->___m_VideoPlayer_12;
		NullCheck(L_29);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_30;
		L_30 = VideoPlayer_get_targetTexture_m1022F791F3DD8FB6BE47E73C2DB25A5B4E768F8D(L_29, NULL);
		__this->___m_RenderTexture_35 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RenderTexture_35), (void*)L_30);
		// m_RenderTexture.DiscardContents();
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_31 = __this->___m_RenderTexture_35;
		NullCheck(L_31);
		RenderTexture_DiscardContents_m6C446FB1B7B57334FAD8847DB03E983975F38B32(L_31, NULL);
		// m_RenderTexture.Release();
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_32 = __this->___m_RenderTexture_35;
		NullCheck(L_32);
		RenderTexture_Release_mE7399D6187A0E38945D2913D0FFB41247143AB1E(L_32, NULL);
		// Graphics.Blit(m_Transparent, m_RenderTexture);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_33 = __this->___m_Transparent_34;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_34 = __this->___m_RenderTexture_35;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m066854D684B6042B266D306E8E012D2C6C1787BE(L_33, L_34, NULL);
	}

IL_0170:
	{
		// }
		return;
	}
}
// System.Void ARUXAnimationManager::ShowTapToPlace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUXAnimationManager_ShowTapToPlace_mF863ABE2C4A60806BF0316E2E15BE63821F5E775 (ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3831A01F6FD64D34E80AC7FCB3F4A00F1632C13A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_VideoPlayer.clip = m_TapToPlaceClip;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_0 = __this->___m_VideoPlayer_12;
		VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* L_1 = __this->___m_TapToPlaceClip_6;
		NullCheck(L_0);
		VideoPlayer_set_clip_m85C09C15E184E9AAE117C1A534D8AC25175C8DC9(L_0, L_1, NULL);
		// m_VideoPlayer.Play();
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_2 = __this->___m_VideoPlayer_12;
		NullCheck(L_2);
		VideoPlayer_Play_m8E99607F39F1D214BDD704F3E130DD2418787ACE(L_2, NULL);
		// if (m_LocalizeText)
		bool L_3 = __this->___m_LocalizeText_37;
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		// m_InstructionText.text = m_LocalizationManager.localizedTapToPlace;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_4 = __this->___m_InstructionText_4;
		LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* L_5 = __this->___m_LocalizationManager_36;
		NullCheck(L_5);
		String_t* L_6 = L_5->___localizedTapToPlace_25;
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_4, L_6);
		goto IL_004c;
	}

IL_003c:
	{
		// m_InstructionText.text = k_TapToPlaceText;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_7 = __this->___m_InstructionText_4;
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_7, _stringLiteral3831A01F6FD64D34E80AC7FCB3F4A00F1632C13A);
	}

IL_004c:
	{
		// m_FadeOn = true;
		__this->___m_FadeOn_21 = (bool)1;
		// }
		return;
	}
}
// System.Void ARUXAnimationManager::ShowFindImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUXAnimationManager_ShowFindImage_mEC0A382E4703DA33EBB08A0D768CDF3F14F8A457 (ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A2067EF4A0B8314242B9B69B47FC3FC7C16AADE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_VideoPlayer.clip = m_FindImageClip;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_0 = __this->___m_VideoPlayer_12;
		VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* L_1 = __this->___m_FindImageClip_7;
		NullCheck(L_0);
		VideoPlayer_set_clip_m85C09C15E184E9AAE117C1A534D8AC25175C8DC9(L_0, L_1, NULL);
		// m_VideoPlayer.Play();
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_2 = __this->___m_VideoPlayer_12;
		NullCheck(L_2);
		VideoPlayer_Play_m8E99607F39F1D214BDD704F3E130DD2418787ACE(L_2, NULL);
		// if (m_LocalizeText)
		bool L_3 = __this->___m_LocalizeText_37;
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		// m_InstructionText.text = m_LocalizationManager.localizedImage;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_4 = __this->___m_InstructionText_4;
		LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* L_5 = __this->___m_LocalizationManager_36;
		NullCheck(L_5);
		String_t* L_6 = L_5->___localizedImage_28;
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_4, L_6);
		goto IL_004c;
	}

IL_003c:
	{
		// m_InstructionText.text = k_FindClipText;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_7 = __this->___m_InstructionText_4;
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_7, _stringLiteral3A2067EF4A0B8314242B9B69B47FC3FC7C16AADE);
	}

IL_004c:
	{
		// m_FadeOn = true;
		__this->___m_FadeOn_21 = (bool)1;
		// }
		return;
	}
}
// System.Void ARUXAnimationManager::ShowFindBody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUXAnimationManager_ShowFindBody_mFB3DE3E1471006BB1CF1B17AEEF72637E694FB28 (ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28DD212AA407A7128B35B2B453F30CBE0AFC97C1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_VideoPlayer.clip = m_FindBodyClip;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_0 = __this->___m_VideoPlayer_12;
		VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* L_1 = __this->___m_FindBodyClip_8;
		NullCheck(L_0);
		VideoPlayer_set_clip_m85C09C15E184E9AAE117C1A534D8AC25175C8DC9(L_0, L_1, NULL);
		// m_VideoPlayer.Play();
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_2 = __this->___m_VideoPlayer_12;
		NullCheck(L_2);
		VideoPlayer_Play_m8E99607F39F1D214BDD704F3E130DD2418787ACE(L_2, NULL);
		// if (m_LocalizeText)
		bool L_3 = __this->___m_LocalizeText_37;
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		// m_InstructionText.text = m_LocalizationManager.localizedBody;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_4 = __this->___m_InstructionText_4;
		LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* L_5 = __this->___m_LocalizationManager_36;
		NullCheck(L_5);
		String_t* L_6 = L_5->___localizedBody_26;
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_4, L_6);
		goto IL_004c;
	}

IL_003c:
	{
		// m_InstructionText.text = k_FindABodyText;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_7 = __this->___m_InstructionText_4;
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_7, _stringLiteral28DD212AA407A7128B35B2B453F30CBE0AFC97C1);
	}

IL_004c:
	{
		// m_FadeOn = true;
		__this->___m_FadeOn_21 = (bool)1;
		// }
		return;
	}
}
// System.Void ARUXAnimationManager::ShowFindObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUXAnimationManager_ShowFindObject_mFE5E88529692EA4068C52E4D943EDABACCBF2EDD (ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46A89B070AD49E79E5B5154D70BE82D0B21DFB18);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_VideoPlayer.clip = m_FindObjectClip;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_0 = __this->___m_VideoPlayer_12;
		VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* L_1 = __this->___m_FindObjectClip_9;
		NullCheck(L_0);
		VideoPlayer_set_clip_m85C09C15E184E9AAE117C1A534D8AC25175C8DC9(L_0, L_1, NULL);
		// m_VideoPlayer.Play();
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_2 = __this->___m_VideoPlayer_12;
		NullCheck(L_2);
		VideoPlayer_Play_m8E99607F39F1D214BDD704F3E130DD2418787ACE(L_2, NULL);
		// if (m_LocalizeText)
		bool L_3 = __this->___m_LocalizeText_37;
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		// m_InstructionText.text = m_LocalizationManager.localizedObject;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_4 = __this->___m_InstructionText_4;
		LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* L_5 = __this->___m_LocalizationManager_36;
		NullCheck(L_5);
		String_t* L_6 = L_5->___localizedObject_29;
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_4, L_6);
		goto IL_004c;
	}

IL_003c:
	{
		// m_InstructionText.text = k_FindObjectText;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_7 = __this->___m_InstructionText_4;
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_7, _stringLiteral46A89B070AD49E79E5B5154D70BE82D0B21DFB18);
	}

IL_004c:
	{
		// m_FadeOn = true;
		__this->___m_FadeOn_21 = (bool)1;
		// }
		return;
	}
}
// System.Void ARUXAnimationManager::ShowFindFace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUXAnimationManager_ShowFindFace_mDA9BE5B57D0B465FB5B4BF01886AA5968DF8E44D (ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD24C15C9650F88A0DB8FB78FB698613BCA295C61);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_VideoPlayer.clip = m_FindFaceClip;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_0 = __this->___m_VideoPlayer_12;
		VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* L_1 = __this->___m_FindFaceClip_10;
		NullCheck(L_0);
		VideoPlayer_set_clip_m85C09C15E184E9AAE117C1A534D8AC25175C8DC9(L_0, L_1, NULL);
		// m_VideoPlayer.Play();
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_2 = __this->___m_VideoPlayer_12;
		NullCheck(L_2);
		VideoPlayer_Play_m8E99607F39F1D214BDD704F3E130DD2418787ACE(L_2, NULL);
		// if (m_LocalizeText)
		bool L_3 = __this->___m_LocalizeText_37;
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		// m_InstructionText.text = m_LocalizationManager.localizedFace;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_4 = __this->___m_InstructionText_4;
		LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* L_5 = __this->___m_LocalizationManager_36;
		NullCheck(L_5);
		String_t* L_6 = L_5->___localizedFace_27;
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_4, L_6);
		goto IL_004c;
	}

IL_003c:
	{
		// m_InstructionText.text = k_FindAFaceText;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_7 = __this->___m_InstructionText_4;
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_7, _stringLiteralD24C15C9650F88A0DB8FB78FB698613BCA295C61);
	}

IL_004c:
	{
		// m_FadeOn = true;
		__this->___m_FadeOn_21 = (bool)1;
		// }
		return;
	}
}
// System.Void ARUXAnimationManager::ShowCrossPlatformFindAPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUXAnimationManager_ShowCrossPlatformFindAPlane_m992125094A81A949474ED1A0919154FCFE0C5625 (ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFFC96C6589746DC30E1FF0192E17B6DC7305E74);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_VideoPlayer.clip = m_FindAPlaneClip;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_0 = __this->___m_VideoPlayer_12;
		VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* L_1 = __this->___m_FindAPlaneClip_5;
		NullCheck(L_0);
		VideoPlayer_set_clip_m85C09C15E184E9AAE117C1A534D8AC25175C8DC9(L_0, L_1, NULL);
		// m_VideoPlayer.Play();
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_2 = __this->___m_VideoPlayer_12;
		NullCheck(L_2);
		VideoPlayer_Play_m8E99607F39F1D214BDD704F3E130DD2418787ACE(L_2, NULL);
		// if (m_LocalizeText)
		bool L_3 = __this->___m_LocalizeText_37;
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		// m_InstructionText.text = m_LocalizationManager.localizedMoveDevice;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_4 = __this->___m_InstructionText_4;
		LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* L_5 = __this->___m_LocalizationManager_36;
		NullCheck(L_5);
		String_t* L_6 = L_5->___localizedMoveDevice_24;
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_4, L_6);
		goto IL_004c;
	}

IL_003c:
	{
		// m_InstructionText.text = k_MoveDeviceText;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_7 = __this->___m_InstructionText_4;
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_7, _stringLiteralEFFC96C6589746DC30E1FF0192E17B6DC7305E74);
	}

IL_004c:
	{
		// m_FadeOn = true;
		__this->___m_FadeOn_21 = (bool)1;
		// }
		return;
	}
}
// System.Void ARUXAnimationManager::ShowCoachingOverlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUXAnimationManager_ShowCoachingOverlay_mAB2D3D96B0A8AC5AFC88295A69678ACB2DA92BA9 (ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0868B6EEB5C07A22C7809AD8FE88FD279C564AAE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_CoachingOverlay)
		ARKitCoachingOverlay_t36497D45FFD0ECB9ADA3238540945D2305076A62* L_0 = __this->___m_CoachingOverlay_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0043;
		}
	}
	{
		// if (m_CoachingOverlay.supported)
		ARKitCoachingOverlay_t36497D45FFD0ECB9ADA3238540945D2305076A62* L_2 = __this->___m_CoachingOverlay_11;
		NullCheck(L_2);
		bool L_3;
		L_3 = ARKitCoachingOverlay_get_supported_m27AB80DB980F577354AB7CF467F79DADE310E7DB(L_2, NULL);
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// m_CoachingOverlay.ActivateCoaching(true);
		ARKitCoachingOverlay_t36497D45FFD0ECB9ADA3238540945D2305076A62* L_4 = __this->___m_CoachingOverlay_11;
		NullCheck(L_4);
		ARKitCoachingOverlay_ActivateCoaching_m37C38E140603D61E3AD3B66BFCDEF08CADB6FA29(L_4, (bool)1, NULL);
		// m_VideoPlayer.Stop();
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_5 = __this->___m_VideoPlayer_12;
		NullCheck(L_5);
		VideoPlayer_Stop_m1F2DE73183E042998140A56FF69432A200430BF1(L_5, NULL);
		// m_UsingARKitCoaching = true;
		__this->___m_UsingARKitCoaching_24 = (bool)1;
		return;
	}

IL_0039:
	{
		// Debug.LogWarning("Coaching Overlay not supported on this platform");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral0868B6EEB5C07A22C7809AD8FE88FD279C564AAE, NULL);
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Boolean ARUXAnimationManager::ARKitCoachingOverlaySupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARUXAnimationManager_ARKitCoachingOverlaySupported_m5922D93ADF404969D81584B361C550317467637B (ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_CoachingOverlay)
		ARKitCoachingOverlay_t36497D45FFD0ECB9ADA3238540945D2305076A62* L_0 = __this->___m_CoachingOverlay_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// return m_CoachingOverlay.supported;
		ARKitCoachingOverlay_t36497D45FFD0ECB9ADA3238540945D2305076A62* L_2 = __this->___m_CoachingOverlay_11;
		NullCheck(L_2);
		bool L_3;
		L_3 = ARKitCoachingOverlay_get_supported_m27AB80DB980F577354AB7CF467F79DADE310E7DB(L_2, NULL);
		return L_3;
	}

IL_0019:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void ARUXAnimationManager::FadeOffCurrentUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUXAnimationManager_FadeOffCurrentUI_m98281DEFFFE5ADDAEA682CA3BE0DDA5EA5D0F8F0 (ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_UsingARKitCoaching)
		bool L_0 = __this->___m_UsingARKitCoaching_24;
		if (!L_0)
		{
			goto IL_0044;
		}
	}
	{
		// m_CoachingOverlay.DisableCoaching(false);
		ARKitCoachingOverlay_t36497D45FFD0ECB9ADA3238540945D2305076A62* L_1 = __this->___m_CoachingOverlay_11;
		NullCheck(L_1);
		ARKitCoachingOverlay_DisableCoaching_m1F3FF03DF675DF154E4662927078A7F4497FA5EE(L_1, (bool)0, NULL);
		// m_UsingARKitCoaching = false;
		__this->___m_UsingARKitCoaching_24 = (bool)0;
		// m_InstructionText.color = m_AlphaWhite;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_2 = __this->___m_InstructionText_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___m_AlphaWhite_16;
		NullCheck(L_2);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_3);
		// if (onFadeOffComplete != null)
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ((ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966_StaticFields*)il2cpp_codegen_static_fields_for(ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966_il2cpp_TypeInfo_var))->___onFadeOffComplete_33;
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		// onFadeOffComplete();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = ((ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966_StaticFields*)il2cpp_codegen_static_fields_for(ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966_il2cpp_TypeInfo_var))->___onFadeOffComplete_33;
		NullCheck(L_5);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_5, NULL);
	}

IL_003d:
	{
		// m_FadeOff = true;
		__this->___m_FadeOff_22 = (bool)1;
	}

IL_0044:
	{
		// if (m_VideoPlayer.clip != null)
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_6 = __this->___m_VideoPlayer_12;
		NullCheck(L_6);
		VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* L_7;
		L_7 = VideoPlayer_get_clip_m08BCE17C4E685C87151B418AA3CE88294F6A96E9(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_00ac;
		}
	}
	{
		// if (m_Tweening || m_FadeOn)
		bool L_9 = __this->___m_Tweening_23;
		if (L_9)
		{
			goto IL_0067;
		}
	}
	{
		bool L_10 = __this->___m_FadeOn_21;
		if (!L_10)
		{
			goto IL_00a5;
		}
	}

IL_0067:
	{
		// m_TweenTime = 1.0f;
		__this->___m_TweenTime_25 = (1.0f);
		// m_RawImage.color = m_AlphaWhite;
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_11 = __this->___m_RawImage_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = __this->___m_AlphaWhite_16;
		NullCheck(L_11);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_11, L_12);
		// m_InstructionText.color = m_AlphaWhite;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_13 = __this->___m_InstructionText_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = __this->___m_AlphaWhite_16;
		NullCheck(L_13);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_13, L_14);
		// if (onFadeOffComplete != null)
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_15 = ((ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966_StaticFields*)il2cpp_codegen_static_fields_for(ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966_il2cpp_TypeInfo_var))->___onFadeOffComplete_33;
		if (!L_15)
		{
			goto IL_00a5;
		}
	}
	{
		// onFadeOffComplete();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_16 = ((ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966_StaticFields*)il2cpp_codegen_static_fields_for(ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966_il2cpp_TypeInfo_var))->___onFadeOffComplete_33;
		NullCheck(L_16);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_16, NULL);
	}

IL_00a5:
	{
		// m_FadeOff = true;
		__this->___m_FadeOff_22 = (bool)1;
	}

IL_00ac:
	{
		// }
		return;
	}
}
// System.Void ARUXAnimationManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUXAnimationManager__ctor_m08984C10F686ADF461E02D218946E1019DDEC04D (ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* __this, const RuntimeMethod* method) 
{
	{
		// float m_FadeOnDuration = 1.0f;
		__this->___m_FadeOnDuration_14 = (1.0f);
		// float m_FadeOffDuration = 0.5f;
		__this->___m_FadeOffDuration_15 = (0.5f);
		// Color m_AlphaWhite = new Color(1,1,1,0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		__this->___m_AlphaWhite_16 = L_0;
		// Color m_White = new Color(1,1,1,1);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_1), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->___m_White_17 = L_1;
		// bool m_LocalizeText = true;
		__this->___m_LocalizeText_37 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Boolean ARUXReasonsManager::get_showNotTrackingReasons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARUXReasonsManager_get_showNotTrackingReasons_m94F2B1666AC453BFDEE37FA8053466D21D5A43C9 (ARUXReasonsManager_t7DE4754765B780C9987FC05832DE0F5447F2E7EE* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ShowNotTrackingReasons;
		bool L_0 = __this->___m_ShowNotTrackingReasons_4;
		return L_0;
	}
}
// System.Void ARUXReasonsManager::set_showNotTrackingReasons(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUXReasonsManager_set_showNotTrackingReasons_m39BF27144F68C2CA65FDA79AAAA69D9F6322D6DB (ARUXReasonsManager_t7DE4754765B780C9987FC05832DE0F5447F2E7EE* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ShowNotTrackingReasons = value;
		bool L_0 = ___value0;
		__this->___m_ShowNotTrackingReasons_4 = L_0;
		return;
	}
}
// TMPro.TMP_Text ARUXReasonsManager::get_reasonDisplayText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ARUXReasonsManager_get_reasonDisplayText_mDC9C748FA238CFA49849E8D3E41169A6AC31035C (ARUXReasonsManager_t7DE4754765B780C9987FC05832DE0F5447F2E7EE* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ReasonDisplayText;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->___m_ReasonDisplayText_5;
		return L_0;
	}
}
// System.Void ARUXReasonsManager::set_reasonDisplayText(TMPro.TMP_Text)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUXReasonsManager_set_reasonDisplayText_m533277A204F79AF1D7A2E16ED3E87A061FA0AAB9 (ARUXReasonsManager_t7DE4754765B780C9987FC05832DE0F5447F2E7EE* __this, TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ReasonDisplayText = value;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = ___value0;
		__this->___m_ReasonDisplayText_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ReasonDisplayText_5), (void*)L_0);
		return;
	}
}
// UnityEngine.GameObject ARUXReasonsManager::get_reasonParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ARUXReasonsManager_get_reasonParent_m2E4D051CDD966DDDC8B6C883368579485311A004 (ARUXReasonsManager_t7DE4754765B780C9987FC05832DE0F5447F2E7EE* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ReasonParent;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_ReasonParent_6;
		return L_0;
	}
}
// System.Void ARUXReasonsManager::set_reasonParent(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUXReasonsManager_set_reasonParent_m3188163C32977D723682FDD600EA65BF5F40A52F (ARUXReasonsManager_t7DE4754765B780C9987FC05832DE0F5447F2E7EE* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ReasonParent = value;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___m_ReasonParent_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ReasonParent_6), (void*)L_0);
		return;
	}
}
// UnityEngine.UI.Image ARUXReasonsManager::get_reasonIcon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ARUXReasonsManager_get_reasonIcon_m56DE3A2CEAC9577FACD486287A894AA237608540 (ARUXReasonsManager_t7DE4754765B780C9987FC05832DE0F5447F2E7EE* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ReasonIcon;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___m_ReasonIcon_7;
		return L_0;
	}
}
// System.Void ARUXReasonsManager::set_reasonIcon(UnityEngine.UI.Image)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUXReasonsManager_set_reasonIcon_mD460D49B9F6867A7B641357605E215190E786484 (ARUXReasonsManager_t7DE4754765B780C9987FC05832DE0F5447F2E7EE* __this, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ReasonIcon = value;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = ___value0;
		__this->___m_ReasonIcon_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ReasonIcon_7), (void*)L_0);
		return;
	}
}
// UnityEngine.Sprite ARUXReasonsManager::get_initRelocalSprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ARUXReasonsManager_get_initRelocalSprite_m7BBA8761CC57CBA85E03E0649ADE558637DB4B95 (ARUXReasonsManager_t7DE4754765B780C9987FC05832DE0F5447F2E7EE* __this, const RuntimeMethod* method) 
{
	{
		// get => m_InitRelocalSprite;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_InitRelocalSprite_8;
		return L_0;
	}
}
// System.Void ARUXReasonsManager::set_initRelocalSprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUXReasonsManager_set_initRelocalSprite_m3918836326AF37F1A162BCF26C2B99569B459AE2 (ARUXReasonsManager_t7DE4754765B780C9987FC05832DE0F5447F2E7EE* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_InitRelocalSprite = value;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ___value0;
		__this->___m_InitRelocalSprite_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_InitRelocalSprite_8), (void*)L_0);
		return;
	}
}
// UnityEngine.Sprite ARUXReasonsManager::get_motionSprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ARUXReasonsManager_get_motionSprite_m1FD08C9286B697B1E17ABE9FA26CAF57071087F9 (ARUXReasonsManager_t7DE4754765B780C9987FC05832DE0F5447F2E7EE* __this, const RuntimeMethod* method) 
{
	{
		// get => m_MotionSprite;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_MotionSprite_9;
		return L_0;
	}
}
// System.Void ARUXReasonsManager::set_motionSprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUXReasonsManager_set_motionSprite_m5FDDADFC6A5A39B22F055609B8BC3B324DE7A5A3 (ARUXReasonsManager_t7DE4754765B780C9987FC05832DE0F5447F2E7EE* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_MotionSprite = value;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ___value0;
		__this->___m_MotionSprite_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_MotionSprite_9), (void*)L_0);
		return;
	}
}
// UnityEngine.Sprite ARUXReasonsManager::get_lightSprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ARUXReasonsManager_get_lightSprite_m581C111747BD90094EB61A9F848166016142C499 (ARUXReasonsManager_t7DE4754765B780C9987FC05832DE0F5447F2E7EE* __this, const RuntimeMethod* method) 
{
	{
		// get => m_LightSprite;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_LightSprite_10;
		return L_0;
	}
}
// System.Void ARUXReasonsManager::set_lightSprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUXReasonsManager_set_lightSprite_mA004203D8FA35D52C8A978F5D62B1ECD09CBC7AF (ARUXReasonsManager_t7DE4754765B780C9987FC05832DE0F5447F2E7EE* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_LightSprite = value;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ___value0;
		__this->___m_LightSprite_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LightSprite_10), (void*)L_0);
		return;
	}
}
// UnityEngine.Sprite ARUXReasonsManager::get_featuresSprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ARUXReasonsManager_get_featuresSprite_m4F10376B6BE7122CCCA7C0F21BFCD3FF6C0DC345 (ARUXReasonsManager_t7DE4754765B780C9987FC05832DE0F5447F2E7EE* __this, const RuntimeMethod* method) 
{
	{
		// get => m_FeaturesSprite;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_FeaturesSprite_11;
		return L_0;
	}
}
// System.Void ARUXReasonsManager::set_featuresSprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUXReasonsManager_set_featuresSprite_mF2560A4AB6070FEE59C056D1DE932F860EDDE585 (ARUXReasonsManager_t7DE4754765B780C9987FC05832DE0F5447F2E7EE* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_FeaturesSprite = value;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ___value0;
		__this->___m_FeaturesSprite_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FeaturesSprite_11), (void*)L_0);
		return;
	}
}
// UnityEngine.Sprite ARUXReasonsManager::get_unsupportedSprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ARUXReasonsManager_get_unsupportedSprite_m3AC75B3CFD5F57EF346F62A4C5F1E743B90BF262 (ARUXReasonsManager_t7DE4754765B780C9987FC05832DE0F5447F2E7EE* __this, const RuntimeMethod* method) 
{
	{
		// get => m_UnsupportedSprite;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_UnsupportedSprite_12;
		return L_0;
	}
}
// System.Void ARUXReasonsManager::set_unsupportedSprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUXReasonsManager_set_unsupportedSprite_mF489B4197774423C53F54B5ECCC7A936297DCA94 (ARUXReasonsManager_t7DE4754765B780C9987FC05832DE0F5447F2E7EE* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_UnsupportedSprite = value;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ___value0;
		__this->___m_UnsupportedSprite_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UnsupportedSprite_12), (void*)L_0);
		return;
	}
}
// UnityEngine.Sprite ARUXReasonsManager::get_noneSprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ARUXReasonsManager_get_noneSprite_m9FD4586C02FBDCBB0755284B21D3A973879E9AA7 (ARUXReasonsManager_t7DE4754765B780C9987FC05832DE0F5447F2E7EE* __this, const RuntimeMethod* method) 
{
	{
		// get => m_NoneSprite;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_NoneSprite_13;
		return L_0;
	}
}
// System.Void ARUXReasonsManager::set_noneSprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUXReasonsManager_set_noneSprite_m72B1128631457A1EA57D69FC8D9457743CCB75A2 (ARUXReasonsManager_t7DE4754765B780C9987FC05832DE0F5447F2E7EE* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_NoneSprite = value;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ___value0;
		__this->___m_NoneSprite_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_NoneSprite_13), (void*)L_0);
		return;
	}
}
// LocalizationManager ARUXReasonsManager::get_localizationManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* ARUXReasonsManager_get_localizationManager_m2921EAA794AD3DEF9D5FBD0AB666CBBC56C6C8F0 (ARUXReasonsManager_t7DE4754765B780C9987FC05832DE0F5447F2E7EE* __this, const RuntimeMethod* method) 
{
	{
		// get => m_LocalizationManager;
		LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* L_0 = __this->___m_LocalizationManager_14;
		return L_0;
	}
}
// System.Void ARUXReasonsManager::set_localizationManager(LocalizationManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUXReasonsManager_set_localizationManager_mE4C64568FB153FB1CCE80B92B96298D0B86CCA9A (ARUXReasonsManager_t7DE4754765B780C9987FC05832DE0F5447F2E7EE* __this, LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_LocalizationManager = value;
		LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* L_0 = ___value0;
		__this->___m_LocalizationManager_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LocalizationManager_14), (void*)L_0);
		return;
	}
}
// System.Boolean ARUXReasonsManager::get_localizeText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARUXReasonsManager_get_localizeText_mB2F5CF0F7F3E72C57EFE80D3B9B98B80B0731CF8 (ARUXReasonsManager_t7DE4754765B780C9987FC05832DE0F5447F2E7EE* __this, const RuntimeMethod* method) 
{
	{
		// get => m_LocalizeText;
		bool L_0 = __this->___m_LocalizeText_15;
		return L_0;
	}
}
// System.Void ARUXReasonsManager::set_localizeText(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUXReasonsManager_set_localizeText_m6A700D729539B85E8BF550A10DF3DA89C6316DA8 (ARUXReasonsManager_t7DE4754765B780C9987FC05832DE0F5447F2E7EE* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_LocalizeText = value;
		bool L_0 = ___value0;
		__this->___m_LocalizeText_15 = L_0;
		return;
	}
}
// System.Void ARUXReasonsManager::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUXReasonsManager_OnEnable_m40A8635BFBB70A8E84696581986DC9EF76F04374 (ARUXReasonsManager_t7DE4754765B780C9987FC05832DE0F5447F2E7EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARUXReasonsManager_ARSessionOnstateChanged_m68CF984A6D30DBBD5C031D248504EC2F9DDE4748_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t325C602D999E964DB72210E493635E83F8D6CE68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ARSession.stateChanged += ARSessionOnstateChanged;
		Action_1_t325C602D999E964DB72210E493635E83F8D6CE68* L_0 = (Action_1_t325C602D999E964DB72210E493635E83F8D6CE68*)il2cpp_codegen_object_new(Action_1_t325C602D999E964DB72210E493635E83F8D6CE68_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_mC9CFD5CBE62E447D22A4A520EB27144DCD47BBDB(L_0, __this, (intptr_t)((void*)ARUXReasonsManager_ARSessionOnstateChanged_m68CF984A6D30DBBD5C031D248504EC2F9DDE4748_RuntimeMethod_var), NULL);
		ARSession_add_stateChanged_m0642A401BE75EA8B955A0001F4A1D39865D83993(L_0, NULL);
		// if (!m_ShowNotTrackingReasons)
		bool L_1 = __this->___m_ShowNotTrackingReasons_4;
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		// m_ReasonParent.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___m_ReasonParent_6;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void ARUXReasonsManager::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUXReasonsManager_OnDisable_m960EEBD52C6D327AEC5FC76A8E769351DCCFE2CE (ARUXReasonsManager_t7DE4754765B780C9987FC05832DE0F5447F2E7EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARUXReasonsManager_ARSessionOnstateChanged_m68CF984A6D30DBBD5C031D248504EC2F9DDE4748_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t325C602D999E964DB72210E493635E83F8D6CE68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ARSession.stateChanged -= ARSessionOnstateChanged;
		Action_1_t325C602D999E964DB72210E493635E83F8D6CE68* L_0 = (Action_1_t325C602D999E964DB72210E493635E83F8D6CE68*)il2cpp_codegen_object_new(Action_1_t325C602D999E964DB72210E493635E83F8D6CE68_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_mC9CFD5CBE62E447D22A4A520EB27144DCD47BBDB(L_0, __this, (intptr_t)((void*)ARUXReasonsManager_ARSessionOnstateChanged_m68CF984A6D30DBBD5C031D248504EC2F9DDE4748_RuntimeMethod_var), NULL);
		ARSession_remove_stateChanged_m7F02CE05D9391A517867FBAD816FEF069203B924(L_0, NULL);
		// }
		return;
	}
}
// System.Void ARUXReasonsManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUXReasonsManager_Update_mB3B050E7FB9CCF4383F77FF2A572AEF04FA28BF5 (ARUXReasonsManager_t7DE4754765B780C9987FC05832DE0F5447F2E7EE* __this, const RuntimeMethod* method) 
{
	{
		// if (m_ShowNotTrackingReasons)
		bool L_0 = __this->___m_ShowNotTrackingReasons_4;
		if (!L_0)
		{
			goto IL_0040;
		}
	}
	{
		// if (!m_SessionTracking)
		bool L_1 = __this->___m_SessionTracking_17;
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		// m_CurrentReason = ARSession.notTrackingReason;
		int32_t L_2;
		L_2 = ARSession_get_notTrackingReason_m9E98D9ED3B14D277DAE8A8B622556ED1C8F22A65_inline(NULL);
		__this->___m_CurrentReason_16 = L_2;
		// ShowReason();
		ARUXReasonsManager_ShowReason_m2B13F16D58D03FF837A718D7F458448DC8FF5474(__this, NULL);
		return;
	}

IL_0022:
	{
		// if (m_ReasonDisplayText.gameObject.activeSelf)
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_3 = __this->___m_ReasonDisplayText_5;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_4, NULL);
		if (!L_5)
		{
			goto IL_0040;
		}
	}
	{
		// m_ReasonParent.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___m_ReasonParent_6;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void ARUXReasonsManager::ARSessionOnstateChanged(UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUXReasonsManager_ARSessionOnstateChanged_m68CF984A6D30DBBD5C031D248504EC2F9DDE4748 (ARUXReasonsManager_t7DE4754765B780C9987FC05832DE0F5447F2E7EE* __this, ARSessionStateChangedEventArgs_tC31BD123D6B4F6168FB246762E79AB33962AE822 ___obj0, const RuntimeMethod* method) 
{
	ARUXReasonsManager_t7DE4754765B780C9987FC05832DE0F5447F2E7EE* G_B2_0 = NULL;
	ARUXReasonsManager_t7DE4754765B780C9987FC05832DE0F5447F2E7EE* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	ARUXReasonsManager_t7DE4754765B780C9987FC05832DE0F5447F2E7EE* G_B3_1 = NULL;
	{
		// m_SessionTracking = obj.state == ARSessionState.SessionTracking ? true : false;
		int32_t L_0;
		L_0 = ARSessionStateChangedEventArgs_get_state_mC0A6FB4AF08C068BFD5D9730F60215BE662A950B_inline((&___obj0), NULL);
		G_B1_0 = __this;
		if ((((int32_t)L_0) == ((int32_t)7)))
		{
			G_B2_0 = __this;
			goto IL_000e;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000f;
	}

IL_000e:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_000f:
	{
		NullCheck(G_B3_1);
		G_B3_1->___m_SessionTracking_17 = (bool)G_B3_0;
		// }
		return;
	}
}
// System.Void ARUXReasonsManager::ShowReason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUXReasonsManager_ShowReason_m2B13F16D58D03FF837A718D7F458448DC8FF5474 (ARUXReasonsManager_t7DE4754765B780C9987FC05832DE0F5447F2E7EE* __this, const RuntimeMethod* method) 
{
	{
		// m_ReasonParent.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_ReasonParent_6;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// SetReason();
		ARUXReasonsManager_SetReason_m69E4CF60F692B697AE740A941D0D6D66F52FC2AD(__this, NULL);
		// }
		return;
	}
}
// System.Void ARUXReasonsManager::SetReason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUXReasonsManager_SetReason_m69E4CF60F692B697AE740A941D0D6D66F52FC2AD (ARUXReasonsManager_t7DE4754765B780C9987FC05832DE0F5447F2E7EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral053E4DD968FAF51ADBE4B872464B1097BE4EE164);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral314ABC39F91F3CBA77A054ABAB1CFDB2FB46DA49);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral522D69D7511DEF4E9056A5CD08321CDF1F223645);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DF6C8C28E677594CC027AAA63ECF6572E4A2B0C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral842B9D0D0439077EB405F99EAA6151E70A87AA88);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBBABAACA97A11A1C06EAE2B85EC0909B12FF439);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// switch (m_CurrentReason)
		int32_t L_0 = __this->___m_CurrentReason_16;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0174;
			}
			case 1:
			{
				goto IL_002a;
			}
			case 2:
			{
				goto IL_002a;
			}
			case 3:
			{
				goto IL_00ae;
			}
			case 4:
			{
				goto IL_00f0;
			}
			case 5:
			{
				goto IL_006c;
			}
			case 6:
			{
				goto IL_0132;
			}
		}
	}
	{
		return;
	}

IL_002a:
	{
		// if (m_LocalizeText)
		bool L_2 = __this->___m_LocalizeText_15;
		if (!L_2)
		{
			goto IL_004a;
		}
	}
	{
		// m_ReasonDisplayText.text = m_LocalizationManager.localizedInit;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_3 = __this->___m_ReasonDisplayText_5;
		LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* L_4 = __this->___m_LocalizationManager_14;
		NullCheck(L_4);
		String_t* L_5 = L_4->___localizedInit_18;
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_3, L_5);
		goto IL_005a;
	}

IL_004a:
	{
		// m_ReasonDisplayText.text = k_InitRelocalText;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_6 = __this->___m_ReasonDisplayText_5;
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_6, _stringLiteral842B9D0D0439077EB405F99EAA6151E70A87AA88);
	}

IL_005a:
	{
		// m_ReasonIcon.sprite = m_InitRelocalSprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7 = __this->___m_ReasonIcon_7;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_8 = __this->___m_InitRelocalSprite_8;
		NullCheck(L_7);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_7, L_8, NULL);
		// break;
		return;
	}

IL_006c:
	{
		// if (m_LocalizeText)
		bool L_9 = __this->___m_LocalizeText_15;
		if (!L_9)
		{
			goto IL_008c;
		}
	}
	{
		// m_ReasonDisplayText.text = m_LocalizationManager.localizedMotion;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_10 = __this->___m_ReasonDisplayText_5;
		LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* L_11 = __this->___m_LocalizationManager_14;
		NullCheck(L_11);
		String_t* L_12 = L_11->___localizedMotion_19;
		NullCheck(L_10);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_10, L_12);
		goto IL_009c;
	}

IL_008c:
	{
		// m_ReasonDisplayText.text = k_MotionText;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_13 = __this->___m_ReasonDisplayText_5;
		NullCheck(L_13);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_13, _stringLiteral314ABC39F91F3CBA77A054ABAB1CFDB2FB46DA49);
	}

IL_009c:
	{
		// m_ReasonIcon.sprite = m_MotionSprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___m_ReasonIcon_7;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_15 = __this->___m_MotionSprite_9;
		NullCheck(L_14);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_14, L_15, NULL);
		// break;
		return;
	}

IL_00ae:
	{
		// if(m_LocalizeText)
		bool L_16 = __this->___m_LocalizeText_15;
		if (!L_16)
		{
			goto IL_00ce;
		}
	}
	{
		// m_ReasonDisplayText.text = m_LocalizationManager.localizedLight;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_17 = __this->___m_ReasonDisplayText_5;
		LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* L_18 = __this->___m_LocalizationManager_14;
		NullCheck(L_18);
		String_t* L_19 = L_18->___localizedLight_20;
		NullCheck(L_17);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_17, L_19);
		goto IL_00de;
	}

IL_00ce:
	{
		// m_ReasonDisplayText.text = k_LightText;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_20 = __this->___m_ReasonDisplayText_5;
		NullCheck(L_20);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_20, _stringLiteral5DF6C8C28E677594CC027AAA63ECF6572E4A2B0C);
	}

IL_00de:
	{
		// m_ReasonIcon.sprite = m_LightSprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_21 = __this->___m_ReasonIcon_7;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_22 = __this->___m_LightSprite_10;
		NullCheck(L_21);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_21, L_22, NULL);
		// break;
		return;
	}

IL_00f0:
	{
		// if (m_LocalizeText)
		bool L_23 = __this->___m_LocalizeText_15;
		if (!L_23)
		{
			goto IL_0110;
		}
	}
	{
		// m_ReasonDisplayText.text = m_LocalizationManager.localizedFeatures;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_24 = __this->___m_ReasonDisplayText_5;
		LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* L_25 = __this->___m_LocalizationManager_14;
		NullCheck(L_25);
		String_t* L_26 = L_25->___localizedFeatures_21;
		NullCheck(L_24);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_24, L_26);
		goto IL_0120;
	}

IL_0110:
	{
		// m_ReasonDisplayText.text = k_FeaturesText;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_27 = __this->___m_ReasonDisplayText_5;
		NullCheck(L_27);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_27, _stringLiteralCBBABAACA97A11A1C06EAE2B85EC0909B12FF439);
	}

IL_0120:
	{
		// m_ReasonIcon.sprite = m_FeaturesSprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_28 = __this->___m_ReasonIcon_7;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_29 = __this->___m_FeaturesSprite_11;
		NullCheck(L_28);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_28, L_29, NULL);
		// break;
		return;
	}

IL_0132:
	{
		// if (m_LocalizeText)
		bool L_30 = __this->___m_LocalizeText_15;
		if (!L_30)
		{
			goto IL_0152;
		}
	}
	{
		// m_ReasonDisplayText.text = m_LocalizationManager.localizedUnsupported;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_31 = __this->___m_ReasonDisplayText_5;
		LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* L_32 = __this->___m_LocalizationManager_14;
		NullCheck(L_32);
		String_t* L_33 = L_32->___localizedUnsupported_22;
		NullCheck(L_31);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_31, L_33);
		goto IL_0162;
	}

IL_0152:
	{
		// m_ReasonDisplayText.text = k_UnsupportedText;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_34 = __this->___m_ReasonDisplayText_5;
		NullCheck(L_34);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_34, _stringLiteral053E4DD968FAF51ADBE4B872464B1097BE4EE164);
	}

IL_0162:
	{
		// m_ReasonIcon.sprite = m_UnsupportedSprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_35 = __this->___m_ReasonIcon_7;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_36 = __this->___m_UnsupportedSprite_12;
		NullCheck(L_35);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_35, L_36, NULL);
		// break;
		return;
	}

IL_0174:
	{
		// if (m_LocalizeText)
		bool L_37 = __this->___m_LocalizeText_15;
		if (!L_37)
		{
			goto IL_0194;
		}
	}
	{
		// m_ReasonDisplayText.text = m_LocalizationManager.localizedNone;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_38 = __this->___m_ReasonDisplayText_5;
		LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* L_39 = __this->___m_LocalizationManager_14;
		NullCheck(L_39);
		String_t* L_40 = L_39->___localizedNone_23;
		NullCheck(L_38);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_38, L_40);
		goto IL_01a4;
	}

IL_0194:
	{
		// m_ReasonDisplayText.text = k_NoneText;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_41 = __this->___m_ReasonDisplayText_5;
		NullCheck(L_41);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_41, _stringLiteral522D69D7511DEF4E9056A5CD08321CDF1F223645);
	}

IL_01a4:
	{
		// m_ReasonIcon.sprite = m_NoneSprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_42 = __this->___m_ReasonIcon_7;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_43 = __this->___m_NoneSprite_13;
		NullCheck(L_42);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_42, L_43, NULL);
		// }
		return;
	}
}
// System.Void ARUXReasonsManager::TestForceShowReason(UnityEngine.XR.ARSubsystems.NotTrackingReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUXReasonsManager_TestForceShowReason_m0C6DB7E5396942124D5A8A86E1F3BB92993753E6 (ARUXReasonsManager_t7DE4754765B780C9987FC05832DE0F5447F2E7EE* __this, int32_t ___reason0, const RuntimeMethod* method) 
{
	{
		// m_CurrentReason = reason;
		int32_t L_0 = ___reason0;
		__this->___m_CurrentReason_16 = L_0;
		// m_ReasonParent.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___m_ReasonParent_6;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// SetReason();
		ARUXReasonsManager_SetReason_m69E4CF60F692B697AE740A941D0D6D66F52FC2AD(__this, NULL);
		// }
		return;
	}
}
// System.Void ARUXReasonsManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARUXReasonsManager__ctor_m4D4587EFEF4A7D6DEEDECC85629EAB5C26B9B5F9 (ARUXReasonsManager_t7DE4754765B780C9987FC05832DE0F5447F2E7EE* __this, const RuntimeMethod* method) 
{
	{
		// bool m_ShowNotTrackingReasons = true;
		__this->___m_ShowNotTrackingReasons_4 = (bool)1;
		// bool m_LocalizeText = true;
		__this->___m_LocalizeText_15 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Boolean DisableTrackedVisuals::get_disableFeaturePoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DisableTrackedVisuals_get_disableFeaturePoints_m1B71D6511D99A9FD6F65D414B39733B151CA330A (DisableTrackedVisuals_t52589209FFC6682E859627672C2A5E7C3D8E963A* __this, const RuntimeMethod* method) 
{
	{
		// get => m_DisableFeaturePoints;
		bool L_0 = __this->___m_DisableFeaturePoints_4;
		return L_0;
	}
}
// System.Void DisableTrackedVisuals::set_disableFeaturePoints(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisableTrackedVisuals_set_disableFeaturePoints_m464D879BBDCFE8DF8A3475B2DF1CEF36A5D2DF17 (DisableTrackedVisuals_t52589209FFC6682E859627672C2A5E7C3D8E963A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_DisableFeaturePoints = value;
		bool L_0 = ___value0;
		__this->___m_DisableFeaturePoints_4 = L_0;
		return;
	}
}
// System.Boolean DisableTrackedVisuals::get_disablePlaneRendering()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DisableTrackedVisuals_get_disablePlaneRendering_m625AC59D2E0243077F4F75E8A4AD847C04CBCC8C (DisableTrackedVisuals_t52589209FFC6682E859627672C2A5E7C3D8E963A* __this, const RuntimeMethod* method) 
{
	{
		// get => m_DisablePlaneRendering;
		bool L_0 = __this->___m_DisablePlaneRendering_5;
		return L_0;
	}
}
// System.Void DisableTrackedVisuals::set_disablePlaneRendering(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisableTrackedVisuals_set_disablePlaneRendering_m0BB62A69CD624739AFD2E8ACF554F3E17DE232AF (DisableTrackedVisuals_t52589209FFC6682E859627672C2A5E7C3D8E963A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_DisablePlaneRendering = value;
		bool L_0 = ___value0;
		__this->___m_DisablePlaneRendering_5 = L_0;
		return;
	}
}
// UnityEngine.XR.ARFoundation.ARPointCloudManager DisableTrackedVisuals::get_pointCloudManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARPointCloudManager_t28D1833BCE1A48657E504109A89A3B75D0AD7D9F* DisableTrackedVisuals_get_pointCloudManager_m96539863137ED135FD2E55B60A68415DA7B390A5 (DisableTrackedVisuals_t52589209FFC6682E859627672C2A5E7C3D8E963A* __this, const RuntimeMethod* method) 
{
	{
		// get => m_PointCloudManager;
		ARPointCloudManager_t28D1833BCE1A48657E504109A89A3B75D0AD7D9F* L_0 = __this->___m_PointCloudManager_6;
		return L_0;
	}
}
// System.Void DisableTrackedVisuals::set_pointCloudManager(UnityEngine.XR.ARFoundation.ARPointCloudManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisableTrackedVisuals_set_pointCloudManager_mF9EB5EE9CB821D8C684A2D4B2A0A2A7DB246F7AC (DisableTrackedVisuals_t52589209FFC6682E859627672C2A5E7C3D8E963A* __this, ARPointCloudManager_t28D1833BCE1A48657E504109A89A3B75D0AD7D9F* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_PointCloudManager = value;
		ARPointCloudManager_t28D1833BCE1A48657E504109A89A3B75D0AD7D9F* L_0 = ___value0;
		__this->___m_PointCloudManager_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PointCloudManager_6), (void*)L_0);
		return;
	}
}
// UnityEngine.XR.ARFoundation.ARPlaneManager DisableTrackedVisuals::get_planeManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* DisableTrackedVisuals_get_planeManager_mA94C02803AE1299CBBC01B4FD88FE7447CB0D544 (DisableTrackedVisuals_t52589209FFC6682E859627672C2A5E7C3D8E963A* __this, const RuntimeMethod* method) 
{
	{
		// get => m_PlaneManager;
		ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* L_0 = __this->___m_PlaneManager_7;
		return L_0;
	}
}
// System.Void DisableTrackedVisuals::set_planeManager(UnityEngine.XR.ARFoundation.ARPlaneManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisableTrackedVisuals_set_planeManager_m033C27FBAB6FFAB30422DAA80D9BB4CCEC3F5125 (DisableTrackedVisuals_t52589209FFC6682E859627672C2A5E7C3D8E963A* __this, ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_PlaneManager = value;
		ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* L_0 = ___value0;
		__this->___m_PlaneManager_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PlaneManager_7), (void*)L_0);
		return;
	}
}
// System.Void DisableTrackedVisuals::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisableTrackedVisuals_OnEnable_m5582FB9D66B975B39A60A72D41CE32AB2CDD2825 (DisableTrackedVisuals_t52589209FFC6682E859627672C2A5E7C3D8E963A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisableTrackedVisuals_OnPlacedObject_m44634C72C9D42E81604C899F32810964723D570E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlaceObjectsOnPlane_t8CCA4A0919CFB134BDC1CFFED9EC2F23DCEB1933_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlaceObjectsOnPlane.onPlacedObject += OnPlacedObject;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, __this, (intptr_t)((void*)DisableTrackedVisuals_OnPlacedObject_m44634C72C9D42E81604C899F32810964723D570E_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlaceObjectsOnPlane_t8CCA4A0919CFB134BDC1CFFED9EC2F23DCEB1933_il2cpp_TypeInfo_var);
		PlaceObjectsOnPlane_add_onPlacedObject_m9A0A86212A20C8995FED654E80DEDAAFCAFE16B8(L_0, NULL);
		// }
		return;
	}
}
// System.Void DisableTrackedVisuals::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisableTrackedVisuals_OnDisable_m3C53C3601F723F99343934049F1E3BAA5E9C8E4B (DisableTrackedVisuals_t52589209FFC6682E859627672C2A5E7C3D8E963A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisableTrackedVisuals_OnPlacedObject_m44634C72C9D42E81604C899F32810964723D570E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlaceObjectsOnPlane_t8CCA4A0919CFB134BDC1CFFED9EC2F23DCEB1933_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlaceObjectsOnPlane.onPlacedObject -= OnPlacedObject;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, __this, (intptr_t)((void*)DisableTrackedVisuals_OnPlacedObject_m44634C72C9D42E81604C899F32810964723D570E_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlaceObjectsOnPlane_t8CCA4A0919CFB134BDC1CFFED9EC2F23DCEB1933_il2cpp_TypeInfo_var);
		PlaceObjectsOnPlane_remove_onPlacedObject_mB8DD945B1D3BD5188AFDFCA46798A0EF48B53C8B(L_0, NULL);
		// }
		return;
	}
}
// System.Void DisableTrackedVisuals::OnPlacedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisableTrackedVisuals_OnPlacedObject_m44634C72C9D42E81604C899F32810964723D570E (DisableTrackedVisuals_t52589209FFC6682E859627672C2A5E7C3D8E963A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARTrackableManager_5_SetTrackablesActive_m99BB57C262918F8CF69D96238A992FF84E23E14F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARTrackableManager_5_SetTrackablesActive_mA9156D2D519E56D0AC7D9936DC844885876860D1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_DisableFeaturePoints)
		bool L_0 = __this->___m_DisableFeaturePoints_4;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		// m_PointCloudManager.SetTrackablesActive(false);
		ARPointCloudManager_t28D1833BCE1A48657E504109A89A3B75D0AD7D9F* L_1 = __this->___m_PointCloudManager_6;
		NullCheck(L_1);
		ARTrackableManager_5_SetTrackablesActive_m99BB57C262918F8CF69D96238A992FF84E23E14F(L_1, (bool)0, ARTrackableManager_5_SetTrackablesActive_m99BB57C262918F8CF69D96238A992FF84E23E14F_RuntimeMethod_var);
		// m_PointCloudManager.enabled = false;
		ARPointCloudManager_t28D1833BCE1A48657E504109A89A3B75D0AD7D9F* L_2 = __this->___m_PointCloudManager_6;
		NullCheck(L_2);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)0, NULL);
	}

IL_0020:
	{
		// if (m_DisablePlaneRendering)
		bool L_3 = __this->___m_DisablePlaneRendering_5;
		if (!L_3)
		{
			goto IL_0040;
		}
	}
	{
		// m_PlaneManager.SetTrackablesActive(false);
		ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* L_4 = __this->___m_PlaneManager_7;
		NullCheck(L_4);
		ARTrackableManager_5_SetTrackablesActive_mA9156D2D519E56D0AC7D9936DC844885876860D1(L_4, (bool)0, ARTrackableManager_5_SetTrackablesActive_mA9156D2D519E56D0AC7D9936DC844885876860D1_RuntimeMethod_var);
		// m_PlaneManager.enabled = false;
		ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* L_5 = __this->___m_PlaneManager_7;
		NullCheck(L_5);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_5, (bool)0, NULL);
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void DisableTrackedVisuals::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisableTrackedVisuals__ctor_m779D99DE19218A9D5954D4B87B3A648B0EE7A4FB (DisableTrackedVisuals_t52589209FFC6682E859627672C2A5E7C3D8E963A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Boolean LocalizationManager::get_localizationComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocalizationManager_get_localizationComplete_m45666C705BD483A0E2CEC4496D3484F716C07C74 (LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* __this, const RuntimeMethod* method) 
{
	{
		// public bool localizationComplete => m_ReasonsComplete;
		bool L_0 = __this->___m_ReasonsComplete_30;
		return L_0;
	}
}
// TMPro.TMP_FontAsset LocalizationManager::get_simplifiedChineseFont()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* LocalizationManager_get_simplifiedChineseFont_m0EDCC2DB417A34C78A247B247126D9749DADF8BA (LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SimplifiedChineseFont;
		TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_0 = __this->___m_SimplifiedChineseFont_31;
		return L_0;
	}
}
// System.Void LocalizationManager::set_simplifiedChineseFont(TMPro.TMP_FontAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalizationManager_set_simplifiedChineseFont_m15E33911A4CE05FAFE86A2E8D24ABCFE897A34DD (LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* __this, TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_SimplifiedChineseFont = value;
		TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_0 = ___value0;
		__this->___m_SimplifiedChineseFont_31 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SimplifiedChineseFont_31), (void*)L_0);
		return;
	}
}
// TMPro.TMP_FontAsset LocalizationManager::get_japaneseFont()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* LocalizationManager_get_japaneseFont_m862E0F98C88F616C75FBAE681C8F764EFD2EBBAF (LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* __this, const RuntimeMethod* method) 
{
	{
		// get => m_JapaneseFont;
		TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_0 = __this->___m_JapaneseFont_32;
		return L_0;
	}
}
// System.Void LocalizationManager::set_japaneseFont(TMPro.TMP_FontAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalizationManager_set_japaneseFont_m7CD978382FA0C3689A864FFCD983E903CF084142 (LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* __this, TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_JapaneseFont = value;
		TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_0 = ___value0;
		__this->___m_JapaneseFont_32 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_JapaneseFont_32), (void*)L_0);
		return;
	}
}
// TMPro.TMP_FontAsset LocalizationManager::get_koreanFont()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* LocalizationManager_get_koreanFont_mB22A9AEB281B282B51B832C23B078C04392DED79 (LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* __this, const RuntimeMethod* method) 
{
	{
		// get => m_KoreanFont;
		TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_0 = __this->___m_KoreanFont_33;
		return L_0;
	}
}
// System.Void LocalizationManager::set_koreanFont(TMPro.TMP_FontAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalizationManager_set_koreanFont_mED6741618C6B3A0118E851BE8566172087692B56 (LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* __this, TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_KoreanFont = value;
		TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_0 = ___value0;
		__this->___m_KoreanFont_33 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_KoreanFont_33), (void*)L_0);
		return;
	}
}
// TMPro.TMP_FontAsset LocalizationManager::get_hindiFont()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* LocalizationManager_get_hindiFont_m19D15705DC922C8EE4EAAB530C20B0709FC7D3C4 (LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* __this, const RuntimeMethod* method) 
{
	{
		// get => m_HindiFont;
		TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_0 = __this->___m_HindiFont_34;
		return L_0;
	}
}
// System.Void LocalizationManager::set_hindiFont(TMPro.TMP_FontAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalizationManager_set_hindiFont_m5512B967ECD93536D71A509EB0D46E9DFB44D768 (LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* __this, TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_HindiFont = value;
		TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_0 = ___value0;
		__this->___m_HindiFont_34 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_HindiFont_34), (void*)L_0);
		return;
	}
}
// TMPro.TMP_Text LocalizationManager::get_instructionText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* LocalizationManager_get_instructionText_m1D661DB691237DA822D0F29892F56AAD5C63A643 (LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* __this, const RuntimeMethod* method) 
{
	{
		// get => m_InstructionText;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->___m_InstructionText_35;
		return L_0;
	}
}
// System.Void LocalizationManager::set_instructionText(TMPro.TMP_Text)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalizationManager_set_instructionText_m98FD9047C387A58D048844ABB07C0C360788A113 (LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* __this, TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_InstructionText = value;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = ___value0;
		__this->___m_InstructionText_35 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_InstructionText_35), (void*)L_0);
		return;
	}
}
// TMPro.TMP_Text LocalizationManager::get_reasonText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* LocalizationManager_get_reasonText_m9F27A7B992AF99D2D4DFDC376E1183061FA4998C (LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ReasonText;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->___m_ReasonText_36;
		return L_0;
	}
}
// System.Void LocalizationManager::set_reasonText(TMPro.TMP_Text)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalizationManager_set_reasonText_m4FDB802D889E8E3804E5949A5227993B82952402 (LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* __this, TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ReasonText = value;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = ___value0;
		__this->___m_ReasonText_36 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ReasonText_36), (void*)L_0);
		return;
	}
}
// System.Collections.IEnumerator LocalizationManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LocalizationManager_Start_mD1109F91FB9F6CE05CCF0B19588A0DE50FB282F4 (LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartU3Ed__55_tDA4619B76EF3AD96E8F2A1702B0A7AE8D9718513_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartU3Ed__55_tDA4619B76EF3AD96E8F2A1702B0A7AE8D9718513* L_0 = (U3CStartU3Ed__55_tDA4619B76EF3AD96E8F2A1702B0A7AE8D9718513*)il2cpp_codegen_object_new(U3CStartU3Ed__55_tDA4619B76EF3AD96E8F2A1702B0A7AE8D9718513_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartU3Ed__55__ctor_m81821C4038CA594FE551B7B68BE950CDD386B475(L_0, 0, NULL);
		U3CStartU3Ed__55_tDA4619B76EF3AD96E8F2A1702B0A7AE8D9718513* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void LocalizationManager::OnCompletedReasonsUX(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<UnityEngine.Localization.Tables.StringTable>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalizationManager_OnCompletedReasonsUX_m98F7EF76EB5C1F7E261857DBBBEA786B7132D875 (LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* __this, AsyncOperationHandle_1_tC737C3B1E3DD319BBC38072DFCBF5B0369708A6D ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_get_Result_m087C948BD99A2DCBD9C529FF2FCDE8985A9CF1A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_get_Status_mFCA04DFB2CE7D7919F2578FA192B8517836E9680_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DetailedLocalizationTable_1_GetEntry_m8B5E2D9865475803BFA283F7DA7BDF130E4F33E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral167829821AF361E5A33D479888579DC26EAFE4EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral207145E3DEE9F7CF5FE328A1AD2BB4C895272A3F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral297E73D24970417514FEA0205BE7C709E8EDD3E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D7ADDD4ED9BDE655390C5E91A22E0740323A108);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FB8A7A301D90F7E275845734A684262F7C34948);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90F78828DE86E0F2C865B501DDD5EDB7C693AA9E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96B551056328BC3E6CCD4561BA9294766F2DCB25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB085872D5D9FF8D1C10C0723C4ACAA1215446ADC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2B4BD1826B71D1E13C8A0571DDBBB249AE415D3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4FF15F0C367172440AA7A961D856E09E93C8108);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDECF7DA3857B85AB60DE713DFBD9FA17A1F89586);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE505C9DA36C255C4B5E99336F74ECA8B1B465677);
		s_Il2CppMethodInitialized = true;
	}
	StringTable_tDCAFD2558506AB46374D3CB6479C9F5B5F6591E1* V_0 = NULL;
	{
		// if (obj.Status == AsyncOperationStatus.Succeeded)
		int32_t L_0;
		L_0 = AsyncOperationHandle_1_get_Status_mFCA04DFB2CE7D7919F2578FA192B8517836E9680((&___obj0), AsyncOperationHandle_1_get_Status_mFCA04DFB2CE7D7919F2578FA192B8517836E9680_RuntimeMethod_var);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0124;
		}
	}
	{
		// var reasonsTable = obj.Result;
		StringTable_tDCAFD2558506AB46374D3CB6479C9F5B5F6591E1* L_1;
		L_1 = AsyncOperationHandle_1_get_Result_m087C948BD99A2DCBD9C529FF2FCDE8985A9CF1A0((&___obj0), AsyncOperationHandle_1_get_Result_m087C948BD99A2DCBD9C529FF2FCDE8985A9CF1A0_RuntimeMethod_var);
		V_0 = L_1;
		// localizedInit = reasonsTable.GetEntry(k_InitializeKey).GetLocalizedString();
		StringTable_tDCAFD2558506AB46374D3CB6479C9F5B5F6591E1* L_2 = V_0;
		NullCheck(L_2);
		StringTableEntry_tEB17D923B5599B343F7E00DA6C4333AE8F38723C* L_3;
		L_3 = DetailedLocalizationTable_1_GetEntry_m8B5E2D9865475803BFA283F7DA7BDF130E4F33E1(L_2, _stringLiteralE505C9DA36C255C4B5E99336F74ECA8B1B465677, DetailedLocalizationTable_1_GetEntry_m8B5E2D9865475803BFA283F7DA7BDF130E4F33E1_RuntimeMethod_var);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = StringTableEntry_GetLocalizedString_mBFE9A3389C1A6FD4FA56671804F526A478561E78(L_3, NULL);
		__this->___localizedInit_18 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___localizedInit_18), (void*)L_4);
		// localizedMotion = reasonsTable.GetEntry(k_MotionKey).GetLocalizedString();
		StringTable_tDCAFD2558506AB46374D3CB6479C9F5B5F6591E1* L_5 = V_0;
		NullCheck(L_5);
		StringTableEntry_tEB17D923B5599B343F7E00DA6C4333AE8F38723C* L_6;
		L_6 = DetailedLocalizationTable_1_GetEntry_m8B5E2D9865475803BFA283F7DA7BDF130E4F33E1(L_5, _stringLiteralC2B4BD1826B71D1E13C8A0571DDBBB249AE415D3, DetailedLocalizationTable_1_GetEntry_m8B5E2D9865475803BFA283F7DA7BDF130E4F33E1_RuntimeMethod_var);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = StringTableEntry_GetLocalizedString_mBFE9A3389C1A6FD4FA56671804F526A478561E78(L_6, NULL);
		__this->___localizedMotion_19 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___localizedMotion_19), (void*)L_7);
		// localizedLight = reasonsTable.GetEntry(k_LightKey).GetLocalizedString();
		StringTable_tDCAFD2558506AB46374D3CB6479C9F5B5F6591E1* L_8 = V_0;
		NullCheck(L_8);
		StringTableEntry_tEB17D923B5599B343F7E00DA6C4333AE8F38723C* L_9;
		L_9 = DetailedLocalizationTable_1_GetEntry_m8B5E2D9865475803BFA283F7DA7BDF130E4F33E1(L_8, _stringLiteralB085872D5D9FF8D1C10C0723C4ACAA1215446ADC, DetailedLocalizationTable_1_GetEntry_m8B5E2D9865475803BFA283F7DA7BDF130E4F33E1_RuntimeMethod_var);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = StringTableEntry_GetLocalizedString_mBFE9A3389C1A6FD4FA56671804F526A478561E78(L_9, NULL);
		__this->___localizedLight_20 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___localizedLight_20), (void*)L_10);
		// localizedFeatures = reasonsTable.GetEntry(k_FeaturesKey).GetLocalizedString();
		StringTable_tDCAFD2558506AB46374D3CB6479C9F5B5F6591E1* L_11 = V_0;
		NullCheck(L_11);
		StringTableEntry_tEB17D923B5599B343F7E00DA6C4333AE8F38723C* L_12;
		L_12 = DetailedLocalizationTable_1_GetEntry_m8B5E2D9865475803BFA283F7DA7BDF130E4F33E1(L_11, _stringLiteral167829821AF361E5A33D479888579DC26EAFE4EC, DetailedLocalizationTable_1_GetEntry_m8B5E2D9865475803BFA283F7DA7BDF130E4F33E1_RuntimeMethod_var);
		NullCheck(L_12);
		String_t* L_13;
		L_13 = StringTableEntry_GetLocalizedString_mBFE9A3389C1A6FD4FA56671804F526A478561E78(L_12, NULL);
		__this->___localizedFeatures_21 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___localizedFeatures_21), (void*)L_13);
		// localizedUnsupported = reasonsTable.GetEntry(k_UnsupportedKey).GetLocalizedString();
		StringTable_tDCAFD2558506AB46374D3CB6479C9F5B5F6591E1* L_14 = V_0;
		NullCheck(L_14);
		StringTableEntry_tEB17D923B5599B343F7E00DA6C4333AE8F38723C* L_15;
		L_15 = DetailedLocalizationTable_1_GetEntry_m8B5E2D9865475803BFA283F7DA7BDF130E4F33E1(L_14, _stringLiteral207145E3DEE9F7CF5FE328A1AD2BB4C895272A3F, DetailedLocalizationTable_1_GetEntry_m8B5E2D9865475803BFA283F7DA7BDF130E4F33E1_RuntimeMethod_var);
		NullCheck(L_15);
		String_t* L_16;
		L_16 = StringTableEntry_GetLocalizedString_mBFE9A3389C1A6FD4FA56671804F526A478561E78(L_15, NULL);
		__this->___localizedUnsupported_22 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___localizedUnsupported_22), (void*)L_16);
		// localizedNone = reasonsTable.GetEntry(k_NoneKey).GetLocalizedString();
		StringTable_tDCAFD2558506AB46374D3CB6479C9F5B5F6591E1* L_17 = V_0;
		NullCheck(L_17);
		StringTableEntry_tEB17D923B5599B343F7E00DA6C4333AE8F38723C* L_18;
		L_18 = DetailedLocalizationTable_1_GetEntry_m8B5E2D9865475803BFA283F7DA7BDF130E4F33E1(L_17, _stringLiteralD4FF15F0C367172440AA7A961D856E09E93C8108, DetailedLocalizationTable_1_GetEntry_m8B5E2D9865475803BFA283F7DA7BDF130E4F33E1_RuntimeMethod_var);
		NullCheck(L_18);
		String_t* L_19;
		L_19 = StringTableEntry_GetLocalizedString_mBFE9A3389C1A6FD4FA56671804F526A478561E78(L_18, NULL);
		__this->___localizedNone_23 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___localizedNone_23), (void*)L_19);
		// localizedMoveDevice = reasonsTable.GetEntry(k_MoveDeviceKey).GetLocalizedString();
		StringTable_tDCAFD2558506AB46374D3CB6479C9F5B5F6591E1* L_20 = V_0;
		NullCheck(L_20);
		StringTableEntry_tEB17D923B5599B343F7E00DA6C4333AE8F38723C* L_21;
		L_21 = DetailedLocalizationTable_1_GetEntry_m8B5E2D9865475803BFA283F7DA7BDF130E4F33E1(L_20, _stringLiteral8FB8A7A301D90F7E275845734A684262F7C34948, DetailedLocalizationTable_1_GetEntry_m8B5E2D9865475803BFA283F7DA7BDF130E4F33E1_RuntimeMethod_var);
		NullCheck(L_21);
		String_t* L_22;
		L_22 = StringTableEntry_GetLocalizedString_mBFE9A3389C1A6FD4FA56671804F526A478561E78(L_21, NULL);
		__this->___localizedMoveDevice_24 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___localizedMoveDevice_24), (void*)L_22);
		// localizedTapToPlace = reasonsTable.GetEntry(k_TapToPlaceKey).GetLocalizedString();
		StringTable_tDCAFD2558506AB46374D3CB6479C9F5B5F6591E1* L_23 = V_0;
		NullCheck(L_23);
		StringTableEntry_tEB17D923B5599B343F7E00DA6C4333AE8F38723C* L_24;
		L_24 = DetailedLocalizationTable_1_GetEntry_m8B5E2D9865475803BFA283F7DA7BDF130E4F33E1(L_23, _stringLiteral297E73D24970417514FEA0205BE7C709E8EDD3E6, DetailedLocalizationTable_1_GetEntry_m8B5E2D9865475803BFA283F7DA7BDF130E4F33E1_RuntimeMethod_var);
		NullCheck(L_24);
		String_t* L_25;
		L_25 = StringTableEntry_GetLocalizedString_mBFE9A3389C1A6FD4FA56671804F526A478561E78(L_24, NULL);
		__this->___localizedTapToPlace_25 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___localizedTapToPlace_25), (void*)L_25);
		// localizedBody = reasonsTable.GetEntry(k_BodyKey).GetLocalizedString();
		StringTable_tDCAFD2558506AB46374D3CB6479C9F5B5F6591E1* L_26 = V_0;
		NullCheck(L_26);
		StringTableEntry_tEB17D923B5599B343F7E00DA6C4333AE8F38723C* L_27;
		L_27 = DetailedLocalizationTable_1_GetEntry_m8B5E2D9865475803BFA283F7DA7BDF130E4F33E1(L_26, _stringLiteral96B551056328BC3E6CCD4561BA9294766F2DCB25, DetailedLocalizationTable_1_GetEntry_m8B5E2D9865475803BFA283F7DA7BDF130E4F33E1_RuntimeMethod_var);
		NullCheck(L_27);
		String_t* L_28;
		L_28 = StringTableEntry_GetLocalizedString_mBFE9A3389C1A6FD4FA56671804F526A478561E78(L_27, NULL);
		__this->___localizedBody_26 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___localizedBody_26), (void*)L_28);
		// localizedFace = reasonsTable.GetEntry(k_FaceKey).GetLocalizedString();
		StringTable_tDCAFD2558506AB46374D3CB6479C9F5B5F6591E1* L_29 = V_0;
		NullCheck(L_29);
		StringTableEntry_tEB17D923B5599B343F7E00DA6C4333AE8F38723C* L_30;
		L_30 = DetailedLocalizationTable_1_GetEntry_m8B5E2D9865475803BFA283F7DA7BDF130E4F33E1(L_29, _stringLiteralDECF7DA3857B85AB60DE713DFBD9FA17A1F89586, DetailedLocalizationTable_1_GetEntry_m8B5E2D9865475803BFA283F7DA7BDF130E4F33E1_RuntimeMethod_var);
		NullCheck(L_30);
		String_t* L_31;
		L_31 = StringTableEntry_GetLocalizedString_mBFE9A3389C1A6FD4FA56671804F526A478561E78(L_30, NULL);
		__this->___localizedFace_27 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___localizedFace_27), (void*)L_31);
		// localizedImage = reasonsTable.GetEntry(k_ImageKey).GetLocalizedString();
		StringTable_tDCAFD2558506AB46374D3CB6479C9F5B5F6591E1* L_32 = V_0;
		NullCheck(L_32);
		StringTableEntry_tEB17D923B5599B343F7E00DA6C4333AE8F38723C* L_33;
		L_33 = DetailedLocalizationTable_1_GetEntry_m8B5E2D9865475803BFA283F7DA7BDF130E4F33E1(L_32, _stringLiteral8D7ADDD4ED9BDE655390C5E91A22E0740323A108, DetailedLocalizationTable_1_GetEntry_m8B5E2D9865475803BFA283F7DA7BDF130E4F33E1_RuntimeMethod_var);
		NullCheck(L_33);
		String_t* L_34;
		L_34 = StringTableEntry_GetLocalizedString_mBFE9A3389C1A6FD4FA56671804F526A478561E78(L_33, NULL);
		__this->___localizedImage_28 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___localizedImage_28), (void*)L_34);
		// localizedObject = reasonsTable.GetEntry(k_ObjectKey).GetLocalizedString();
		StringTable_tDCAFD2558506AB46374D3CB6479C9F5B5F6591E1* L_35 = V_0;
		NullCheck(L_35);
		StringTableEntry_tEB17D923B5599B343F7E00DA6C4333AE8F38723C* L_36;
		L_36 = DetailedLocalizationTable_1_GetEntry_m8B5E2D9865475803BFA283F7DA7BDF130E4F33E1(L_35, _stringLiteral90F78828DE86E0F2C865B501DDD5EDB7C693AA9E, DetailedLocalizationTable_1_GetEntry_m8B5E2D9865475803BFA283F7DA7BDF130E4F33E1_RuntimeMethod_var);
		NullCheck(L_36);
		String_t* L_37;
		L_37 = StringTableEntry_GetLocalizedString_mBFE9A3389C1A6FD4FA56671804F526A478561E78(L_36, NULL);
		__this->___localizedObject_29 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___localizedObject_29), (void*)L_37);
		// m_ReasonsComplete = true;
		__this->___m_ReasonsComplete_30 = (bool)1;
	}

IL_0124:
	{
		// }
		return;
	}
}
// System.Void LocalizationManager::SwapFonts(LocalizationManager/SupportedLanguages)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalizationManager_SwapFonts_mF3A4990A03C3AE6859DAE6CFD892C4106B0D23C1 (LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* __this, int32_t ___selectedLanguage0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* V_0 = NULL;
	{
		// TMP_FontAsset m_FontToSet = null;
		V_0 = (TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160*)NULL;
		int32_t L_0 = ___selectedLanguage0;
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_1 = ___selectedLanguage0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 5)))
		{
			case 0:
			{
				goto IL_005a;
			}
			case 1:
			{
				goto IL_0061;
			}
			case 2:
			{
				goto IL_0048;
			}
			case 3:
			{
				goto IL_0051;
			}
		}
	}
	{
		goto IL_0061;
	}

IL_001f:
	{
		// m_FontToSet = m_SimplifiedChineseFont;
		TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_2 = __this->___m_SimplifiedChineseFont_31;
		V_0 = L_2;
		// m_InstructionText.fontSizeMax = k_MaxAutoSizeSC;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_3 = __this->___m_InstructionText_35;
		NullCheck(L_3);
		TMP_Text_set_fontSizeMax_mC84B7090F5CE69BA63556A71FD63ABD67C911750(L_3, (70.0f), NULL);
		// m_ReasonText.fontSizeMax = k_MaxAutoSizeSC;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_4 = __this->___m_ReasonText_36;
		NullCheck(L_4);
		TMP_Text_set_fontSizeMax_mC84B7090F5CE69BA63556A71FD63ABD67C911750(L_4, (70.0f), NULL);
		// break;
		goto IL_0061;
	}

IL_0048:
	{
		// m_FontToSet = m_JapaneseFont;
		TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_5 = __this->___m_JapaneseFont_32;
		V_0 = L_5;
		// break;
		goto IL_0061;
	}

IL_0051:
	{
		// m_FontToSet = m_KoreanFont;
		TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_6 = __this->___m_KoreanFont_33;
		V_0 = L_6;
		// break;
		goto IL_0061;
	}

IL_005a:
	{
		// m_FontToSet = m_HindiFont;
		TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_7 = __this->___m_HindiFont_34;
		V_0 = L_7;
	}

IL_0061:
	{
		// if (m_FontToSet != null)
		TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0082;
		}
	}
	{
		// m_InstructionText.font = m_FontToSet;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_10 = __this->___m_InstructionText_35;
		TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_11 = V_0;
		NullCheck(L_10);
		TMP_Text_set_font_mC55E4A8C1C09595031384B35F2C2FB2FC3479E83(L_10, L_11, NULL);
		// m_ReasonText.font = m_FontToSet;
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_12 = __this->___m_ReasonText_36;
		TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_13 = V_0;
		NullCheck(L_12);
		TMP_Text_set_font_mC55E4A8C1C09595031384B35F2C2FB2FC3479E83(L_12, L_13, NULL);
	}

IL_0082:
	{
		// }
		return;
	}
}
// System.Void LocalizationManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalizationManager__ctor_m4FA456E63F3A78C43C5646C93035BDE0DD1C6DDA (LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void LocalizationManager/<Start>d__55::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__55__ctor_m81821C4038CA594FE551B7B68BE950CDD386B475 (U3CStartU3Ed__55_tDA4619B76EF3AD96E8F2A1702B0A7AE8D9718513* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void LocalizationManager/<Start>d__55::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__55_System_IDisposable_Dispose_mE2F4D97F829B095BEF9F0337208D6EAB3A5C1BDE (U3CStartU3Ed__55_tDA4619B76EF3AD96E8F2A1702B0A7AE8D9718513* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean LocalizationManager/<Start>d__55::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__55_MoveNext_m001133838290911E5DD49DCE6C75167C99B87FC3 (U3CStartU3Ed__55_tDA4619B76EF3AD96E8F2A1702B0A7AE8D9718513* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t647506099BF0E618A47E824F311932EBCB1B5994_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_add_Completed_m46D0F374C09483CA0A67CA39BF255BADD676B6EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationHandle_1_t942B32DFBF2792F48E49169E2A65A5E46162395C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966_m26092B601237205F719FF7A32C50CC6736EAB153_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisARUXReasonsManager_t7DE4754765B780C9987FC05832DE0F5447F2E7EE_mC0B706DD877710609E8D1D413D08B5823604D13E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILocalesProvider_t61A5B94D50A769527BFEF945350EA16D17BAFBB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Sort_m418B8FEB7F84DBF0E75C53C6F16173EDCD7D25DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m371BFB123C54FBBA612036D55FABF370481EFB71_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalizationManager_OnCompletedReasonsUX_m98F7EF76EB5C1F7E261857DBBBEA786B7132D875_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TableReference_t96A5F0161FDA37E187436FC17A3B6D7AB676A147_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF26C296172EB4CDA885AC7FCCE21754CB55B9E7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* V_4 = NULL;
	ARUXReasonsManager_t7DE4754765B780C9987FC05832DE0F5447F2E7EE* V_5 = NULL;
	AsyncOperationHandle_1_tC737C3B1E3DD319BBC38072DFCBF5B0369708A6D V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0064;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// bool m_LocalizeAnimation = false;
		V_2 = (bool)0;
		// bool m_LocalizeReasons = false;
		V_3 = (bool)0;
		// if (TryGetComponent(out ARUXAnimationManager m_AnimationManager))
		LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* L_4 = V_1;
		NullCheck(L_4);
		bool L_5;
		L_5 = Component_TryGetComponent_TisARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966_m26092B601237205F719FF7A32C50CC6736EAB153(L_4, (&V_4), Component_TryGetComponent_TisARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966_m26092B601237205F719FF7A32C50CC6736EAB153_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		// m_LocalizeAnimation = m_AnimationManager.localizeText;
		ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* L_6 = V_4;
		NullCheck(L_6);
		bool L_7;
		L_7 = ARUXAnimationManager_get_localizeText_m66AC1B057DB568FFE8E224FC2FF72F01DE62400D_inline(L_6, NULL);
		V_2 = L_7;
	}

IL_0034:
	{
		// if (TryGetComponent(out ARUXReasonsManager m_ReasonsManager))
		LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* L_8 = V_1;
		NullCheck(L_8);
		bool L_9;
		L_9 = Component_TryGetComponent_TisARUXReasonsManager_t7DE4754765B780C9987FC05832DE0F5447F2E7EE_mC0B706DD877710609E8D1D413D08B5823604D13E(L_8, (&V_5), Component_TryGetComponent_TisARUXReasonsManager_t7DE4754765B780C9987FC05832DE0F5447F2E7EE_mC0B706DD877710609E8D1D413D08B5823604D13E_RuntimeMethod_var);
		if (!L_9)
		{
			goto IL_0046;
		}
	}
	{
		// m_LocalizeReasons = m_ReasonsManager.localizeText;
		ARUXReasonsManager_t7DE4754765B780C9987FC05832DE0F5447F2E7EE* L_10 = V_5;
		NullCheck(L_10);
		bool L_11;
		L_11 = ARUXReasonsManager_get_localizeText_mB2F5CF0F7F3E72C57EFE80D3B9B98B80B0731CF8_inline(L_10, NULL);
		V_3 = L_11;
	}

IL_0046:
	{
		// if (m_LocalizeAnimation || m_LocalizeReasons)
		bool L_12 = V_2;
		bool L_13 = V_3;
		if (!((int32_t)((int32_t)L_12|(int32_t)L_13)))
		{
			goto IL_00ca;
		}
	}
	{
		// yield return LocalizationSettings.InitializationOperation;
		AsyncOperationHandle_1_t942B32DFBF2792F48E49169E2A65A5E46162395C L_14;
		L_14 = LocalizationSettings_get_InitializationOperation_m1688397DC53798623DAC83A31682950B8AFFC51A(NULL);
		AsyncOperationHandle_1_t942B32DFBF2792F48E49169E2A65A5E46162395C L_15 = L_14;
		RuntimeObject* L_16 = Box(AsyncOperationHandle_1_t942B32DFBF2792F48E49169E2A65A5E46162395C_il2cpp_TypeInfo_var, &L_15);
		__this->___U3CU3E2__current_1 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_16);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0064:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// LocalizationSettings.AvailableLocales.Locales.Sort();
		RuntimeObject* L_17;
		L_17 = LocalizationSettings_get_AvailableLocales_m17853F621C166707F3BC306A01B43877FCF6B206(NULL);
		NullCheck(L_17);
		List_1_tBD0AC994E5F9C7F539E0378F0CBB119065136548* L_18;
		L_18 = InterfaceFuncInvoker0< List_1_tBD0AC994E5F9C7F539E0378F0CBB119065136548* >::Invoke(0 /* System.Collections.Generic.List`1<UnityEngine.Localization.Locale> UnityEngine.Localization.Settings.ILocalesProvider::get_Locales() */, ILocalesProvider_t61A5B94D50A769527BFEF945350EA16D17BAFBB0_il2cpp_TypeInfo_var, L_17);
		NullCheck(L_18);
		List_1_Sort_m418B8FEB7F84DBF0E75C53C6F16173EDCD7D25DA(L_18, List_1_Sort_m418B8FEB7F84DBF0E75C53C6F16173EDCD7D25DA_RuntimeMethod_var);
		// LocalizationSettings.SelectedLocale = LocalizationSettings.AvailableLocales.Locales[(int)CurrentLocalizedLanguage];
		RuntimeObject* L_19;
		L_19 = LocalizationSettings_get_AvailableLocales_m17853F621C166707F3BC306A01B43877FCF6B206(NULL);
		NullCheck(L_19);
		List_1_tBD0AC994E5F9C7F539E0378F0CBB119065136548* L_20;
		L_20 = InterfaceFuncInvoker0< List_1_tBD0AC994E5F9C7F539E0378F0CBB119065136548* >::Invoke(0 /* System.Collections.Generic.List`1<UnityEngine.Localization.Locale> UnityEngine.Localization.Settings.ILocalesProvider::get_Locales() */, ILocalesProvider_t61A5B94D50A769527BFEF945350EA16D17BAFBB0_il2cpp_TypeInfo_var, L_19);
		LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* L_21 = V_1;
		NullCheck(L_21);
		int32_t L_22 = L_21->___CurrentLocalizedLanguage_4;
		NullCheck(L_20);
		Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* L_23;
		L_23 = List_1_get_Item_m371BFB123C54FBBA612036D55FABF370481EFB71(L_20, L_22, List_1_get_Item_m371BFB123C54FBBA612036D55FABF370481EFB71_RuntimeMethod_var);
		LocalizationSettings_set_SelectedLocale_mF57C48D4B5A390DE44E693DD649AE0E84DB7C39B(L_23, NULL);
		// SwapFonts(CurrentLocalizedLanguage);
		LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* L_24 = V_1;
		LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* L_25 = V_1;
		NullCheck(L_25);
		int32_t L_26 = L_25->___CurrentLocalizedLanguage_4;
		NullCheck(L_24);
		LocalizationManager_SwapFonts_mF3A4990A03C3AE6859DAE6CFD892C4106B0D23C1(L_24, L_26, NULL);
		// LocalizationSettings.StringDatabase.GetTableAsync(k_ReasonUxTable).Completed += OnCompletedReasonsUX;
		LocalizedStringDatabase_tACE9FD9021269D20788D130D96F7B2244DD67406* L_27;
		L_27 = LocalizationSettings_get_StringDatabase_mE6BAA447716F40C608D6FAF3F33DBB446D8C8E61(NULL);
		il2cpp_codegen_runtime_class_init_inline(TableReference_t96A5F0161FDA37E187436FC17A3B6D7AB676A147_il2cpp_TypeInfo_var);
		TableReference_t96A5F0161FDA37E187436FC17A3B6D7AB676A147 L_28;
		L_28 = TableReference_op_Implicit_m583BDE75167BF8CC3AFA8B3F701E390A6B3D31DD(_stringLiteralDF26C296172EB4CDA885AC7FCCE21754CB55B9E7, NULL);
		NullCheck(L_27);
		AsyncOperationHandle_1_tC737C3B1E3DD319BBC38072DFCBF5B0369708A6D L_29;
		L_29 = VirtualFuncInvoker2< AsyncOperationHandle_1_tC737C3B1E3DD319BBC38072DFCBF5B0369708A6D, TableReference_t96A5F0161FDA37E187436FC17A3B6D7AB676A147, Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9* >::Invoke(8 /* UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TTable> UnityEngine.Localization.Settings.LocalizedDatabase`2<UnityEngine.Localization.Tables.StringTable,UnityEngine.Localization.Tables.StringTableEntry>::GetTableAsync(UnityEngine.Localization.Tables.TableReference,UnityEngine.Localization.Locale) */, L_27, L_28, (Locale_t7BD9FB50247883E73B4CC92360943B0455CF02B9*)NULL);
		V_6 = L_29;
		LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* L_30 = V_1;
		Action_1_t647506099BF0E618A47E824F311932EBCB1B5994* L_31 = (Action_1_t647506099BF0E618A47E824F311932EBCB1B5994*)il2cpp_codegen_object_new(Action_1_t647506099BF0E618A47E824F311932EBCB1B5994_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		Action_1__ctor_mB1A6787420A078394CF713719148C670C71E367A(L_31, L_30, (intptr_t)((void*)LocalizationManager_OnCompletedReasonsUX_m98F7EF76EB5C1F7E261857DBBBEA786B7132D875_RuntimeMethod_var), NULL);
		AsyncOperationHandle_1_add_Completed_m46D0F374C09483CA0A67CA39BF255BADD676B6EC((&V_6), L_31, AsyncOperationHandle_1_add_Completed_m46D0F374C09483CA0A67CA39BF255BADD676B6EC_RuntimeMethod_var);
	}

IL_00ca:
	{
		// }
		return (bool)0;
	}
}
// System.Object LocalizationManager/<Start>d__55::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__55_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9A871BC3F67FD41FB42AEECF3F9706883FED9426 (U3CStartU3Ed__55_tDA4619B76EF3AD96E8F2A1702B0A7AE8D9718513* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void LocalizationManager/<Start>d__55::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__55_System_Collections_IEnumerator_Reset_m39DE37D104ACED7716E76B902D3A6BF21645CB16 (U3CStartU3Ed__55_tDA4619B76EF3AD96E8F2A1702B0A7AE8D9718513* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartU3Ed__55_System_Collections_IEnumerator_Reset_m39DE37D104ACED7716E76B902D3A6BF21645CB16_RuntimeMethod_var)));
	}
}
// System.Object LocalizationManager/<Start>d__55::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__55_System_Collections_IEnumerator_get_Current_m95ABBEE8826473DFE782E63C2793233C455129A3 (U3CStartU3Ed__55_tDA4619B76EF3AD96E8F2A1702B0A7AE8D9718513* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// UnityEngine.GameObject PlaceObjectsOnPlane::get_placedPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PlaceObjectsOnPlane_get_placedPrefab_m4EAED34EB49CC7E3DC3C2B3DE71B73B68968FEB2 (PlaceObjectsOnPlane_t8CCA4A0919CFB134BDC1CFFED9EC2F23DCEB1933* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_PlacedPrefab; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_PlacedPrefab_4;
		return L_0;
	}
}
// System.Void PlaceObjectsOnPlane::set_placedPrefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceObjectsOnPlane_set_placedPrefab_mBABCC5FCB50DBC1AC73E01C1632A521300D6E687 (PlaceObjectsOnPlane_t8CCA4A0919CFB134BDC1CFFED9EC2F23DCEB1933* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_PlacedPrefab = value; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___m_PlacedPrefab_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PlacedPrefab_4), (void*)L_0);
		// set { m_PlacedPrefab = value; }
		return;
	}
}
// UnityEngine.GameObject PlaceObjectsOnPlane::get_spawnedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PlaceObjectsOnPlane_get_spawnedObject_m5C323C2EB39FD35D6B5B777C78D3E6A5BC225D01 (PlaceObjectsOnPlane_t8CCA4A0919CFB134BDC1CFFED9EC2F23DCEB1933* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject spawnedObject { get; private set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___U3CspawnedObjectU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void PlaceObjectsOnPlane::set_spawnedObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceObjectsOnPlane_set_spawnedObject_mEC67DCF79988E87D8D8A38BE01CA2D77F335B6CF (PlaceObjectsOnPlane_t8CCA4A0919CFB134BDC1CFFED9EC2F23DCEB1933* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// public GameObject spawnedObject { get; private set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___U3CspawnedObjectU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CspawnedObjectU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Void PlaceObjectsOnPlane::add_onPlacedObject(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceObjectsOnPlane_add_onPlacedObject_m9A0A86212A20C8995FED654E80DEDAAFCAFE16B8 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlaceObjectsOnPlane_t8CCA4A0919CFB134BDC1CFFED9EC2F23DCEB1933_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(PlaceObjectsOnPlane_t8CCA4A0919CFB134BDC1CFFED9EC2F23DCEB1933_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((PlaceObjectsOnPlane_t8CCA4A0919CFB134BDC1CFFED9EC2F23DCEB1933_StaticFields*)il2cpp_codegen_static_fields_for(PlaceObjectsOnPlane_t8CCA4A0919CFB134BDC1CFFED9EC2F23DCEB1933_il2cpp_TypeInfo_var))->___onPlacedObject_6;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(PlaceObjectsOnPlane_t8CCA4A0919CFB134BDC1CFFED9EC2F23DCEB1933_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>((&((PlaceObjectsOnPlane_t8CCA4A0919CFB134BDC1CFFED9EC2F23DCEB1933_StaticFields*)il2cpp_codegen_static_fields_for(PlaceObjectsOnPlane_t8CCA4A0919CFB134BDC1CFFED9EC2F23DCEB1933_il2cpp_TypeInfo_var))->___onPlacedObject_6), L_5, L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void PlaceObjectsOnPlane::remove_onPlacedObject(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceObjectsOnPlane_remove_onPlacedObject_mB8DD945B1D3BD5188AFDFCA46798A0EF48B53C8B (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlaceObjectsOnPlane_t8CCA4A0919CFB134BDC1CFFED9EC2F23DCEB1933_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(PlaceObjectsOnPlane_t8CCA4A0919CFB134BDC1CFFED9EC2F23DCEB1933_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((PlaceObjectsOnPlane_t8CCA4A0919CFB134BDC1CFFED9EC2F23DCEB1933_StaticFields*)il2cpp_codegen_static_fields_for(PlaceObjectsOnPlane_t8CCA4A0919CFB134BDC1CFFED9EC2F23DCEB1933_il2cpp_TypeInfo_var))->___onPlacedObject_6;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(PlaceObjectsOnPlane_t8CCA4A0919CFB134BDC1CFFED9EC2F23DCEB1933_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>((&((PlaceObjectsOnPlane_t8CCA4A0919CFB134BDC1CFFED9EC2F23DCEB1933_StaticFields*)il2cpp_codegen_static_fields_for(PlaceObjectsOnPlane_t8CCA4A0919CFB134BDC1CFFED9EC2F23DCEB1933_il2cpp_TypeInfo_var))->___onPlacedObject_6), L_5, L_6);
		V_0 = L_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_8) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Boolean PlaceObjectsOnPlane::get_canReposition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlaceObjectsOnPlane_get_canReposition_mE2903E3D51801C4DB3094D18B5942DC9DFEFF486 (PlaceObjectsOnPlane_t8CCA4A0919CFB134BDC1CFFED9EC2F23DCEB1933* __this, const RuntimeMethod* method) 
{
	{
		// get => m_CanReposition;
		bool L_0 = __this->___m_CanReposition_11;
		return L_0;
	}
}
// System.Void PlaceObjectsOnPlane::set_canReposition(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceObjectsOnPlane_set_canReposition_m254B79F72DA7831C64187112B7B9229AB8B31E09 (PlaceObjectsOnPlane_t8CCA4A0919CFB134BDC1CFFED9EC2F23DCEB1933* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_CanReposition = value;
		bool L_0 = ___value0;
		__this->___m_CanReposition_11 = L_0;
		return;
	}
}
// System.Void PlaceObjectsOnPlane::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceObjectsOnPlane_Awake_m058BF609380CAEC92C03106BECBF7D698C60F416 (PlaceObjectsOnPlane_t8CCA4A0919CFB134BDC1CFFED9EC2F23DCEB1933* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_RaycastManager = GetComponent<ARRaycastManager>();
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_0;
		L_0 = Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83(__this, Component_GetComponent_TisARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_m255D1364D056A608CF5BB4AAB1BA1AD4CB78DE83_RuntimeMethod_var);
		__this->___m_RaycastManager_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RaycastManager_7), (void*)L_0);
		// }
		return;
	}
}
// System.Void PlaceObjectsOnPlane::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceObjectsOnPlane_Update_m470C4AEC41CD0D308038790338871C06647DD971 (PlaceObjectsOnPlane_t8CCA4A0919CFB134BDC1CFFED9EC2F23DCEB1933* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlaceObjectsOnPlane_t8CCA4A0919CFB134BDC1CFFED9EC2F23DCEB1933_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (Input.touchCount > 0)
		int32_t L_0;
		L_0 = Input_get_touchCount_m7B8EAAB3449A6DC2D90AF3BA36AF226D97C020CF(NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_00bf;
		}
	}
	{
		// Touch touch = Input.GetTouch(0);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_1;
		L_1 = Input_GetTouch_m37572A728DAE284D3ED1272690E635A61D167AD4(0, NULL);
		V_0 = L_1;
		// if (touch.phase == TouchPhase.Began)
		int32_t L_2;
		L_2 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if (L_2)
		{
			goto IL_00bf;
		}
	}
	{
		// if (m_RaycastManager.Raycast(touch.position, s_Hits, TrackableType.PlaneWithinPolygon))
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_3 = __this->___m_RaycastManager_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlaceObjectsOnPlane_t8CCA4A0919CFB134BDC1CFFED9EC2F23DCEB1933_il2cpp_TypeInfo_var);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_5 = ((PlaceObjectsOnPlane_t8CCA4A0919CFB134BDC1CFFED9EC2F23DCEB1933_StaticFields*)il2cpp_codegen_static_fields_for(PlaceObjectsOnPlane_t8CCA4A0919CFB134BDC1CFFED9EC2F23DCEB1933_il2cpp_TypeInfo_var))->___s_Hits_8;
		NullCheck(L_3);
		bool L_6;
		L_6 = ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC(L_3, L_4, L_5, 1, NULL);
		if (!L_6)
		{
			goto IL_00bf;
		}
	}
	{
		// Pose hitPose = s_Hits[0].pose;
		il2cpp_codegen_runtime_class_init_inline(PlaceObjectsOnPlane_t8CCA4A0919CFB134BDC1CFFED9EC2F23DCEB1933_il2cpp_TypeInfo_var);
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_7 = ((PlaceObjectsOnPlane_t8CCA4A0919CFB134BDC1CFFED9EC2F23DCEB1933_StaticFields*)il2cpp_codegen_static_fields_for(PlaceObjectsOnPlane_t8CCA4A0919CFB134BDC1CFFED9EC2F23DCEB1933_il2cpp_TypeInfo_var))->___s_Hits_8;
		NullCheck(L_7);
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_8;
		L_8 = List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F(L_7, 0, List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		V_2 = L_8;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_9;
		L_9 = ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD((&V_2), NULL);
		V_1 = L_9;
		// if (m_NumberOfPlacedObjects < m_MaxNumberOfObjectsToPlace)
		int32_t L_10 = __this->___m_NumberOfPlacedObjects_10;
		int32_t L_11 = __this->___m_MaxNumberOfObjectsToPlace_9;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_008a;
		}
	}
	{
		// spawnedObject = Instantiate(m_PlacedPrefab, hitPose.position, hitPose.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___m_PlacedPrefab_4;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_13 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = L_13.___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_15 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = L_15.___rotation_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_12, L_14, L_16, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		PlaceObjectsOnPlane_set_spawnedObject_mEC67DCF79988E87D8D8A38BE01CA2D77F335B6CF_inline(__this, L_17, NULL);
		// m_NumberOfPlacedObjects++;
		int32_t L_18 = __this->___m_NumberOfPlacedObjects_10;
		__this->___m_NumberOfPlacedObjects_10 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		goto IL_00ae;
	}

IL_008a:
	{
		// if (m_CanReposition)
		bool L_19 = __this->___m_CanReposition_11;
		if (!L_19)
		{
			goto IL_00ae;
		}
	}
	{
		// spawnedObject.transform.SetPositionAndRotation(hitPose.position, hitPose.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = PlaceObjectsOnPlane_get_spawnedObject_m5C323C2EB39FD35D6B5B777C78D3E6A5BC225D01_inline(__this, NULL);
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_20, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_22 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = L_22.___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_24 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25 = L_24.___rotation_1;
		NullCheck(L_21);
		Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_21, L_23, L_25, NULL);
	}

IL_00ae:
	{
		// if (onPlacedObject != null)
		il2cpp_codegen_runtime_class_init_inline(PlaceObjectsOnPlane_t8CCA4A0919CFB134BDC1CFFED9EC2F23DCEB1933_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_26 = ((PlaceObjectsOnPlane_t8CCA4A0919CFB134BDC1CFFED9EC2F23DCEB1933_StaticFields*)il2cpp_codegen_static_fields_for(PlaceObjectsOnPlane_t8CCA4A0919CFB134BDC1CFFED9EC2F23DCEB1933_il2cpp_TypeInfo_var))->___onPlacedObject_6;
		if (!L_26)
		{
			goto IL_00bf;
		}
	}
	{
		// onPlacedObject();
		il2cpp_codegen_runtime_class_init_inline(PlaceObjectsOnPlane_t8CCA4A0919CFB134BDC1CFFED9EC2F23DCEB1933_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_27 = ((PlaceObjectsOnPlane_t8CCA4A0919CFB134BDC1CFFED9EC2F23DCEB1933_StaticFields*)il2cpp_codegen_static_fields_for(PlaceObjectsOnPlane_t8CCA4A0919CFB134BDC1CFFED9EC2F23DCEB1933_il2cpp_TypeInfo_var))->___onPlacedObject_6;
		NullCheck(L_27);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_27, NULL);
	}

IL_00bf:
	{
		// }
		return;
	}
}
// System.Void PlaceObjectsOnPlane::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceObjectsOnPlane__ctor_mB27C7A12FE6DFBB12A508D9CF34E4441BD8171C5 (PlaceObjectsOnPlane_t8CCA4A0919CFB134BDC1CFFED9EC2F23DCEB1933* __this, const RuntimeMethod* method) 
{
	{
		// int m_MaxNumberOfObjectsToPlace = 1;
		__this->___m_MaxNumberOfObjectsToPlace_9 = 1;
		// bool m_CanReposition = true;
		__this->___m_CanReposition_11 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void PlaceObjectsOnPlane::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceObjectsOnPlane__cctor_mC4DB3119F71337670EF4361E5E2E820F98A00C01 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlaceObjectsOnPlane_t8CCA4A0919CFB134BDC1CFFED9EC2F23DCEB1933_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static List<ARRaycastHit> s_Hits = new List<ARRaycastHit>();
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_0 = (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*)il2cpp_codegen_object_new(List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9(L_0, List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		((PlaceObjectsOnPlane_t8CCA4A0919CFB134BDC1CFFED9EC2F23DCEB1933_StaticFields*)il2cpp_codegen_static_fields_for(PlaceObjectsOnPlane_t8CCA4A0919CFB134BDC1CFFED9EC2F23DCEB1933_il2cpp_TypeInfo_var))->___s_Hits_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((PlaceObjectsOnPlane_t8CCA4A0919CFB134BDC1CFFED9EC2F23DCEB1933_StaticFields*)il2cpp_codegen_static_fields_for(PlaceObjectsOnPlane_t8CCA4A0919CFB134BDC1CFFED9EC2F23DCEB1933_il2cpp_TypeInfo_var))->___s_Hits_8), (void*)L_0);
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
// System.Void UXHandle::.ctor(UIManager/InstructionUI,UIManager/InstructionGoals)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UXHandle__ctor_m7DDE9F76ECECA474E79BC6A0AF82C9D31BC22F04 (UXHandle_tC4DD5984B1181FA802AC5B288C7616225F9B147F* __this, int32_t ___ui0, int32_t ___goal1, const RuntimeMethod* method) 
{
	{
		// InstructionalUI = ui;
		int32_t L_0 = ___ui0;
		__this->___InstructionalUI_0 = L_0;
		// Goal = goal;
		int32_t L_1 = ___goal1;
		__this->___Goal_1 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void UXHandle__ctor_m7DDE9F76ECECA474E79BC6A0AF82C9D31BC22F04_AdjustorThunk (RuntimeObject* __this, int32_t ___ui0, int32_t ___goal1, const RuntimeMethod* method)
{
	UXHandle_tC4DD5984B1181FA802AC5B288C7616225F9B147F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UXHandle_tC4DD5984B1181FA802AC5B288C7616225F9B147F*>(__this + _offset);
	UXHandle__ctor_m7DDE9F76ECECA474E79BC6A0AF82C9D31BC22F04(_thisAdjusted, ___ui0, ___goal1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UIManager::get_startWithInstructionalUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIManager_get_startWithInstructionalUI_m67BE3725D7D26BF8EE717ED8F382EA6A5D4408F5 (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) 
{
	{
		// get => m_StartWithInstructionalUI;
		bool L_0 = __this->___m_StartWithInstructionalUI_4;
		return L_0;
	}
}
// System.Void UIManager::set_startWithInstructionalUI(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_set_startWithInstructionalUI_m4877BA78B7D06E9467DC0495101BCC53088906CB (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_StartWithInstructionalUI = value;
		bool L_0 = ___value0;
		__this->___m_StartWithInstructionalUI_4 = L_0;
		return;
	}
}
// UIManager/InstructionUI UIManager::get_instructionalUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UIManager_get_instructionalUI_m24625EC1F9B9F01678EEDF6CEBD80B90846704DD (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) 
{
	{
		// get => m_InstructionalUI;
		int32_t L_0 = __this->___m_InstructionalUI_5;
		return L_0;
	}
}
// System.Void UIManager::set_instructionalUI(UIManager/InstructionUI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_set_instructionalUI_mF1C37C3706AFAD245A0DA225731BAFE84CAC14BC (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_InstructionalUI = value;
		int32_t L_0 = ___value0;
		__this->___m_InstructionalUI_5 = L_0;
		return;
	}
}
// UIManager/InstructionGoals UIManager::get_instructionalGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UIManager_get_instructionalGoal_m1DA1A849E1DFC5624E7366B364DFEFA092420C84 (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) 
{
	{
		// get => m_InstructionalGoal;
		int32_t L_0 = __this->___m_InstructionalGoal_6;
		return L_0;
	}
}
// System.Void UIManager::set_instructionalGoal(UIManager/InstructionGoals)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_set_instructionalGoal_mFCE8579487E85A724EF37E4BB1151FCCCA734815 (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_InstructionalGoal = value;
		int32_t L_0 = ___value0;
		__this->___m_InstructionalGoal_6 = L_0;
		return;
	}
}
// System.Boolean UIManager::get_showSecondaryInstructionalUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIManager_get_showSecondaryInstructionalUI_m0246848434506076E44719A17139329945353857 (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ShowSecondaryInstructionalUI;
		bool L_0 = __this->___m_ShowSecondaryInstructionalUI_7;
		return L_0;
	}
}
// System.Void UIManager::set_showSecondaryInstructionalUI(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_set_showSecondaryInstructionalUI_m4BBE8C554D8C93D43971097F240069BCA7C36F2C (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ShowSecondaryInstructionalUI = value;
		bool L_0 = ___value0;
		__this->___m_ShowSecondaryInstructionalUI_7 = L_0;
		return;
	}
}
// UIManager/InstructionUI UIManager::get_secondaryInstructionUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UIManager_get_secondaryInstructionUI_m76A45B1CE08365F2ECB85834F707B1A83B2F0024 (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SecondaryInstructionUI;
		int32_t L_0 = __this->___m_SecondaryInstructionUI_8;
		return L_0;
	}
}
// System.Void UIManager::set_secondaryInstructionUI(UIManager/InstructionUI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_set_secondaryInstructionUI_m1099F084039758941C88398BA78796A17E9B936F (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_SecondaryInstructionUI = value;
		int32_t L_0 = ___value0;
		__this->___m_SecondaryInstructionUI_8 = L_0;
		return;
	}
}
// UIManager/InstructionGoals UIManager::get_secondaryGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UIManager_get_secondaryGoal_mC1814AFE17579DFD9D10E7105DF5F8EC895CEB10 (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SecondaryGoal;
		int32_t L_0 = __this->___m_SecondaryGoal_9;
		return L_0;
	}
}
// System.Void UIManager::set_secondaryGoal(UIManager/InstructionGoals)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_set_secondaryGoal_mA5536FC52A4477BB2CBDC8A9881AE01909C92403 (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_SecondaryGoal = value;
		int32_t L_0 = ___value0;
		__this->___m_SecondaryGoal_9 = L_0;
		return;
	}
}
// System.Boolean UIManager::get_coachingOverlayFallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIManager_get_coachingOverlayFallback_mADC49D051511F3D4718128AA2E53637EF0FE63C1 (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) 
{
	{
		// get => m_CoachingOverlayFallback;
		bool L_0 = __this->___m_CoachingOverlayFallback_10;
		return L_0;
	}
}
// System.Void UIManager::set_coachingOverlayFallback(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_set_coachingOverlayFallback_m05ECC4F451CA360AB72EB55638C05EBE22708CFB (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_CoachingOverlayFallback = value;
		bool L_0 = ___value0;
		__this->___m_CoachingOverlayFallback_10 = L_0;
		return;
	}
}
// UnityEngine.GameObject UIManager::get_arSessionOrigin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* UIManager_get_arSessionOrigin_mC690ABDE7311C17915FA7692D558E0BB1ACB56ED (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ARSessionOrigin;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_ARSessionOrigin_11;
		return L_0;
	}
}
// System.Void UIManager::set_arSessionOrigin(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_set_arSessionOrigin_mD714F86ACCBB2A1A0DBD48CC249DEF7D3D8D2CD8 (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ARSessionOrigin = value;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___m_ARSessionOrigin_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ARSessionOrigin_11), (void*)L_0);
		return;
	}
}
// UnityEngine.XR.ARFoundation.ARPlaneManager UIManager::get_planeManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* UIManager_get_planeManager_mB763F9CAAF62828D1238A6A3693D711CB7AC48A2 (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) 
{
	{
		// get => m_PlaneManager;
		ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* L_0 = __this->___m_PlaneManager_18;
		return L_0;
	}
}
// System.Void UIManager::set_planeManager(UnityEngine.XR.ARFoundation.ARPlaneManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_set_planeManager_mD00169652D86BD70BD941E1E64950C94A0F97F13 (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_PlaneManager = value;
		ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* L_0 = ___value0;
		__this->___m_PlaneManager_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PlaneManager_18), (void*)L_0);
		return;
	}
}
// UnityEngine.XR.ARFoundation.ARFaceManager UIManager::get_faceManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARFaceManager_tE5955187C9D7C9C4C4139F522DA0DEA69EFCFD8F* UIManager_get_faceManager_mDAAC7ED07589B3CE1ACB835D1189A644BDAACEDE (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) 
{
	{
		// get => m_FaceManager;
		ARFaceManager_tE5955187C9D7C9C4C4139F522DA0DEA69EFCFD8F* L_0 = __this->___m_FaceManager_19;
		return L_0;
	}
}
// System.Void UIManager::set_faceManager(UnityEngine.XR.ARFoundation.ARFaceManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_set_faceManager_m775521D860ED1D48D93513F467CE9927DD2C9974 (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, ARFaceManager_tE5955187C9D7C9C4C4139F522DA0DEA69EFCFD8F* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_FaceManager = value;
		ARFaceManager_tE5955187C9D7C9C4C4139F522DA0DEA69EFCFD8F* L_0 = ___value0;
		__this->___m_FaceManager_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FaceManager_19), (void*)L_0);
		return;
	}
}
// UnityEngine.XR.ARFoundation.ARHumanBodyManager UIManager::get_bodyManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARHumanBodyManager_tA5246205B817A3D4A87BFC54FC018FB513867BFB* UIManager_get_bodyManager_m5412591B1A4871704E087ECC94A7D1633AC9E6CE (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) 
{
	{
		// get => m_BodyManager;
		ARHumanBodyManager_tA5246205B817A3D4A87BFC54FC018FB513867BFB* L_0 = __this->___m_BodyManager_20;
		return L_0;
	}
}
// System.Void UIManager::set_bodyManager(UnityEngine.XR.ARFoundation.ARHumanBodyManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_set_bodyManager_m15762E6A6D71E6642CA500FEFE0CF72FDEC63948 (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, ARHumanBodyManager_tA5246205B817A3D4A87BFC54FC018FB513867BFB* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_BodyManager = value;
		ARHumanBodyManager_tA5246205B817A3D4A87BFC54FC018FB513867BFB* L_0 = ___value0;
		__this->___m_BodyManager_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_BodyManager_20), (void*)L_0);
		return;
	}
}
// UnityEngine.XR.ARFoundation.ARTrackedImageManager UIManager::get_imageManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* UIManager_get_imageManager_m6C8ECD7467CEE068C2BCD3B19DFCDA297EF28201 (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ImageManager;
		ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* L_0 = __this->___m_ImageManager_21;
		return L_0;
	}
}
// System.Void UIManager::set_imageManager(UnityEngine.XR.ARFoundation.ARTrackedImageManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_set_imageManager_mCA3004E963CE5C9B370DD0454D7A8F2E4D8AA612 (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ImageManager = value;
		ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* L_0 = ___value0;
		__this->___m_ImageManager_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ImageManager_21), (void*)L_0);
		return;
	}
}
// UnityEngine.XR.ARFoundation.ARTrackedObjectManager UIManager::get_objectManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARTrackedObjectManager_tD667E7CCD95E9D25449BD578F256F728D8619FC7* UIManager_get_objectManager_m4ECF8371DB5A6799830904A506D17A9A2903E2B4 (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ObjectManager;
		ARTrackedObjectManager_tD667E7CCD95E9D25449BD578F256F728D8619FC7* L_0 = __this->___m_ObjectManager_22;
		return L_0;
	}
}
// System.Void UIManager::set_objectManager(UnityEngine.XR.ARFoundation.ARTrackedObjectManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_set_objectManager_m5B8293F4653E3B79009CB418CF2392EC0B88DC80 (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, ARTrackedObjectManager_tD667E7CCD95E9D25449BD578F256F728D8619FC7* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_ObjectManager = value;
		ARTrackedObjectManager_tD667E7CCD95E9D25449BD578F256F728D8619FC7* L_0 = ___value0;
		__this->___m_ObjectManager_22 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ObjectManager_22), (void*)L_0);
		return;
	}
}
// ARUXAnimationManager UIManager::get_animationManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* UIManager_get_animationManager_mFBE9231EF6343F76539121132816F9E2475B177A (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) 
{
	{
		// get => m_AnimationManager;
		ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* L_0 = __this->___m_AnimationManager_23;
		return L_0;
	}
}
// System.Void UIManager::set_animationManager(ARUXAnimationManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_set_animationManager_mE525DE756477B34F2494C76140F77A5CCEC17531 (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_AnimationManager = value;
		ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* L_0 = ___value0;
		__this->___m_AnimationManager_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AnimationManager_23), (void*)L_0);
		return;
	}
}
// LocalizationManager UIManager::get_localizationManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* UIManager_get_localizationManager_mFB6DD88E39980750AF7CC7DF7941EF3422BDAC17 (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) 
{
	{
		// get => m_LocalizationManager;
		LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* L_0 = __this->___m_LocalizationManager_25;
		return L_0;
	}
}
// System.Void UIManager::set_localizationManager(LocalizationManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_set_localizationManager_mCC756BF8C3D2AC40914A172B184D197B4DCC1603 (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_LocalizationManager = value;
		LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* L_0 = ___value0;
		__this->___m_LocalizationManager_25 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LocalizationManager_25), (void*)L_0);
		return;
	}
}
// System.Void UIManager::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_OnEnable_mA8372EFC3A4B28B950347B9E950545D5BE973345 (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlaceObjectsOnPlane_t8CCA4A0919CFB134BDC1CFFED9EC2F23DCEB1933_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m61E54D86D92BB85774BB35079316A552509D7DA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mB2870787C283872067414EBF51344C30B8002818_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tBB833A4AC695DF02307E93FAAED0C78E3BD64A1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIManager_FadeComplete_m388D31590ADA632BDD049810F27555391487C903_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIManager_U3COnEnableU3Eb__69_0_mEE32206664358615DF236D2C79A1366EDF170733_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ARUXAnimationManager.onFadeOffComplete += FadeComplete;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, __this, (intptr_t)((void*)UIManager_FadeComplete_m388D31590ADA632BDD049810F27555391487C903_RuntimeMethod_var), NULL);
		ARUXAnimationManager_add_onFadeOffComplete_m38528C701B7CA8DB1B51E93E20197FCC208DF349(L_0, NULL);
		// PlaceObjectsOnPlane.onPlacedObject += () => m_PlacedObject = true;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)UIManager_U3COnEnableU3Eb__69_0_mEE32206664358615DF236D2C79A1366EDF170733_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlaceObjectsOnPlane_t8CCA4A0919CFB134BDC1CFFED9EC2F23DCEB1933_il2cpp_TypeInfo_var);
		PlaceObjectsOnPlane_add_onPlacedObject_m9A0A86212A20C8995FED654E80DEDAAFCAFE16B8(L_1, NULL);
		// GetManagers();
		UIManager_GetManagers_m27F270371610580DDA22351EAC8786AA1FDA0228(__this, NULL);
		// m_UXOrderedQueue = new Queue<UXHandle>();
		Queue_1_tBB833A4AC695DF02307E93FAAED0C78E3BD64A1D* L_2 = (Queue_1_tBB833A4AC695DF02307E93FAAED0C78E3BD64A1D*)il2cpp_codegen_object_new(Queue_1_tBB833A4AC695DF02307E93FAAED0C78E3BD64A1D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Queue_1__ctor_mB2870787C283872067414EBF51344C30B8002818(L_2, Queue_1__ctor_mB2870787C283872067414EBF51344C30B8002818_RuntimeMethod_var);
		__this->___m_UXOrderedQueue_14 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UXOrderedQueue_14), (void*)L_2);
		// if (m_StartWithInstructionalUI)
		bool L_3 = __this->___m_StartWithInstructionalUI_4;
		if (!L_3)
		{
			goto IL_0057;
		}
	}
	{
		// m_UXOrderedQueue.Enqueue(new UXHandle(m_InstructionalUI, m_InstructionalGoal));
		Queue_1_tBB833A4AC695DF02307E93FAAED0C78E3BD64A1D* L_4 = __this->___m_UXOrderedQueue_14;
		int32_t L_5 = __this->___m_InstructionalUI_5;
		int32_t L_6 = __this->___m_InstructionalGoal_6;
		UXHandle_tC4DD5984B1181FA802AC5B288C7616225F9B147F L_7;
		memset((&L_7), 0, sizeof(L_7));
		UXHandle__ctor_m7DDE9F76ECECA474E79BC6A0AF82C9D31BC22F04((&L_7), L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		Queue_1_Enqueue_m61E54D86D92BB85774BB35079316A552509D7DA9(L_4, L_7, Queue_1_Enqueue_m61E54D86D92BB85774BB35079316A552509D7DA9_RuntimeMethod_var);
	}

IL_0057:
	{
		// if (m_ShowSecondaryInstructionalUI)
		bool L_8 = __this->___m_ShowSecondaryInstructionalUI_7;
		if (!L_8)
		{
			goto IL_007b;
		}
	}
	{
		// m_UXOrderedQueue.Enqueue(new UXHandle(m_SecondaryInstructionUI, m_SecondaryGoal));
		Queue_1_tBB833A4AC695DF02307E93FAAED0C78E3BD64A1D* L_9 = __this->___m_UXOrderedQueue_14;
		int32_t L_10 = __this->___m_SecondaryInstructionUI_8;
		int32_t L_11 = __this->___m_SecondaryGoal_9;
		UXHandle_tC4DD5984B1181FA802AC5B288C7616225F9B147F L_12;
		memset((&L_12), 0, sizeof(L_12));
		UXHandle__ctor_m7DDE9F76ECECA474E79BC6A0AF82C9D31BC22F04((&L_12), L_10, L_11, /*hidden argument*/NULL);
		NullCheck(L_9);
		Queue_1_Enqueue_m61E54D86D92BB85774BB35079316A552509D7DA9(L_9, L_12, Queue_1_Enqueue_m61E54D86D92BB85774BB35079316A552509D7DA9_RuntimeMethod_var);
	}

IL_007b:
	{
		// }
		return;
	}
}
// System.Void UIManager::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_OnDisable_mA15EE0204388FCDE5E0522FF499144658999C1A6 (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIManager_FadeComplete_m388D31590ADA632BDD049810F27555391487C903_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ARUXAnimationManager.onFadeOffComplete -= FadeComplete;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, __this, (intptr_t)((void*)UIManager_FadeComplete_m388D31590ADA632BDD049810F27555391487C903_RuntimeMethod_var), NULL);
		ARUXAnimationManager_remove_onFadeOffComplete_mC89FA8BDBC5B43660675D5A01E25A10C042368B2(L_0, NULL);
		// }
		return;
	}
}
// System.Void UIManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_Update_m95D2E80B8F461F15C1B9BD6DB0811F5CC18571AB (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m252F413FCB9BC2AB33C58E442A51680EC2F9260B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mC7231F573C4B3893A8E7B13375E854626F4AC12E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_AnimationManager.localizeText)
		ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* L_0 = __this->___m_AnimationManager_23;
		NullCheck(L_0);
		bool L_1;
		L_1 = ARUXAnimationManager_get_localizeText_m66AC1B057DB568FFE8E224FC2FF72F01DE62400D_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// if (!m_LocalizationManager.localizationComplete)
		LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* L_2 = __this->___m_LocalizationManager_25;
		NullCheck(L_2);
		bool L_3;
		L_3 = LocalizationManager_get_localizationComplete_m45666C705BD483A0E2CEC4496D3484F716C07C74_inline(L_2, NULL);
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		// return;
		return;
	}

IL_001b:
	{
		// if (m_UXOrderedQueue.Count > 0 && !m_ProcessingInstructions)
		Queue_1_tBB833A4AC695DF02307E93FAAED0C78E3BD64A1D* L_4 = __this->___m_UXOrderedQueue_14;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Queue_1_get_Count_mC7231F573C4B3893A8E7B13375E854626F4AC12E_inline(L_4, Queue_1_get_Count_mC7231F573C4B3893A8E7B13375E854626F4AC12E_RuntimeMethod_var);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0086;
		}
	}
	{
		bool L_6 = __this->___m_ProcessingInstructions_16;
		if (L_6)
		{
			goto IL_0086;
		}
	}
	{
		// m_CurrentHandle = m_UXOrderedQueue.Dequeue();
		Queue_1_tBB833A4AC695DF02307E93FAAED0C78E3BD64A1D* L_7 = __this->___m_UXOrderedQueue_14;
		NullCheck(L_7);
		UXHandle_tC4DD5984B1181FA802AC5B288C7616225F9B147F L_8;
		L_8 = Queue_1_Dequeue_m252F413FCB9BC2AB33C58E442A51680EC2F9260B(L_7, Queue_1_Dequeue_m252F413FCB9BC2AB33C58E442A51680EC2F9260B_RuntimeMethod_var);
		__this->___m_CurrentHandle_15 = L_8;
		// m_GoalReached = GetGoal(m_CurrentHandle.Goal);
		UXHandle_tC4DD5984B1181FA802AC5B288C7616225F9B147F* L_9 = (&__this->___m_CurrentHandle_15);
		int32_t L_10 = L_9->___Goal_1;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_11;
		L_11 = UIManager_GetGoal_mB545CD806E0A1AE961E1704FC435E91BCAAA7478(__this, L_10, NULL);
		__this->___m_GoalReached_12 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_GoalReached_12), (void*)L_11);
		// if (m_GoalReached.Invoke())
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_12 = __this->___m_GoalReached_12;
		NullCheck(L_12);
		bool L_13;
		L_13 = Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_inline(L_12, NULL);
		if (!L_13)
		{
			goto IL_0067;
		}
	}
	{
		// return;
		return;
	}

IL_0067:
	{
		// FadeOnInstructionalUI(m_CurrentHandle.InstructionalUI);
		UXHandle_tC4DD5984B1181FA802AC5B288C7616225F9B147F* L_14 = (&__this->___m_CurrentHandle_15);
		int32_t L_15 = L_14->___InstructionalUI_0;
		UIManager_FadeOnInstructionalUI_mF405D85AF5B2FF70C45AACEB2FAAFED7D8957E0F(__this, L_15, NULL);
		// m_ProcessingInstructions = true;
		__this->___m_ProcessingInstructions_16 = (bool)1;
		// m_FadedOff = false;
		__this->___m_FadedOff_24 = (bool)0;
	}

IL_0086:
	{
		// if (m_ProcessingInstructions)
		bool L_16 = __this->___m_ProcessingInstructions_16;
		if (!L_16)
		{
			goto IL_00b5;
		}
	}
	{
		// if (m_GoalReached.Invoke())
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_17 = __this->___m_GoalReached_12;
		NullCheck(L_17);
		bool L_18;
		L_18 = Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_inline(L_17, NULL);
		if (!L_18)
		{
			goto IL_00b5;
		}
	}
	{
		// if (!m_FadedOff)
		bool L_19 = __this->___m_FadedOff_24;
		if (L_19)
		{
			goto IL_00b5;
		}
	}
	{
		// m_FadedOff = true;
		__this->___m_FadedOff_24 = (bool)1;
		// m_AnimationManager.FadeOffCurrentUI();
		ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* L_20 = __this->___m_AnimationManager_23;
		NullCheck(L_20);
		ARUXAnimationManager_FadeOffCurrentUI_m98281DEFFFE5ADDAEA682CA3BE0DDA5EA5D0F8F0(L_20, NULL);
	}

IL_00b5:
	{
		// }
		return;
	}
}
// System.Void UIManager::GetManagers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_GetManagers_m27F270371610580DDA22351EAC8786AA1FDA0228 (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_TryGetComponent_TisARFaceManager_tE5955187C9D7C9C4C4139F522DA0DEA69EFCFD8F_m171029C1135CD52E50BB3152E3A811E8DA0B657D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_TryGetComponent_TisARHumanBodyManager_tA5246205B817A3D4A87BFC54FC018FB513867BFB_m3BC6CC456D6FA8BAA9CF6A7BA0D981F5FDC69B58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_TryGetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m2F2B53460F4F0075DD0B84E2C557F2BD8D245889_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_TryGetComponent_TisARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4_mF40FD520A7B1A8609A8EF8A348EE210211617F27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_TryGetComponent_TisARTrackedObjectManager_tD667E7CCD95E9D25449BD578F256F728D8619FC7_m28846BD4038C6535F4D387B31595E84AC54E3278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* V_0 = NULL;
	ARFaceManager_tE5955187C9D7C9C4C4139F522DA0DEA69EFCFD8F* V_1 = NULL;
	ARHumanBodyManager_tA5246205B817A3D4A87BFC54FC018FB513867BFB* V_2 = NULL;
	ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* V_3 = NULL;
	ARTrackedObjectManager_tD667E7CCD95E9D25449BD578F256F728D8619FC7* V_4 = NULL;
	{
		// if (m_ARSessionOrigin)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_ARSessionOrigin_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_007c;
		}
	}
	{
		// if (m_ARSessionOrigin.TryGetComponent(out ARPlaneManager arPlaneManager))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___m_ARSessionOrigin_11;
		NullCheck(L_2);
		bool L_3;
		L_3 = GameObject_TryGetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m2F2B53460F4F0075DD0B84E2C557F2BD8D245889(L_2, (&V_0), GameObject_TryGetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m2F2B53460F4F0075DD0B84E2C557F2BD8D245889_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		// m_PlaneManager = arPlaneManager;
		ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* L_4 = V_0;
		__this->___m_PlaneManager_18 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PlaneManager_18), (void*)L_4);
	}

IL_0023:
	{
		// if (m_ARSessionOrigin.TryGetComponent(out ARFaceManager arFaceManager))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___m_ARSessionOrigin_11;
		NullCheck(L_5);
		bool L_6;
		L_6 = GameObject_TryGetComponent_TisARFaceManager_tE5955187C9D7C9C4C4139F522DA0DEA69EFCFD8F_m171029C1135CD52E50BB3152E3A811E8DA0B657D(L_5, (&V_1), GameObject_TryGetComponent_TisARFaceManager_tE5955187C9D7C9C4C4139F522DA0DEA69EFCFD8F_m171029C1135CD52E50BB3152E3A811E8DA0B657D_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_0039;
		}
	}
	{
		// m_FaceManager = arFaceManager;
		ARFaceManager_tE5955187C9D7C9C4C4139F522DA0DEA69EFCFD8F* L_7 = V_1;
		__this->___m_FaceManager_19 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FaceManager_19), (void*)L_7);
	}

IL_0039:
	{
		// if (m_ARSessionOrigin.TryGetComponent(out ARHumanBodyManager arHumanBodyManager))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___m_ARSessionOrigin_11;
		NullCheck(L_8);
		bool L_9;
		L_9 = GameObject_TryGetComponent_TisARHumanBodyManager_tA5246205B817A3D4A87BFC54FC018FB513867BFB_m3BC6CC456D6FA8BAA9CF6A7BA0D981F5FDC69B58(L_8, (&V_2), GameObject_TryGetComponent_TisARHumanBodyManager_tA5246205B817A3D4A87BFC54FC018FB513867BFB_m3BC6CC456D6FA8BAA9CF6A7BA0D981F5FDC69B58_RuntimeMethod_var);
		if (!L_9)
		{
			goto IL_004f;
		}
	}
	{
		// m_BodyManager = arHumanBodyManager;
		ARHumanBodyManager_tA5246205B817A3D4A87BFC54FC018FB513867BFB* L_10 = V_2;
		__this->___m_BodyManager_20 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_BodyManager_20), (void*)L_10);
	}

IL_004f:
	{
		// if (m_ARSessionOrigin.TryGetComponent(out ARTrackedImageManager arTrackedImageManager))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___m_ARSessionOrigin_11;
		NullCheck(L_11);
		bool L_12;
		L_12 = GameObject_TryGetComponent_TisARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4_mF40FD520A7B1A8609A8EF8A348EE210211617F27(L_11, (&V_3), GameObject_TryGetComponent_TisARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4_mF40FD520A7B1A8609A8EF8A348EE210211617F27_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_0065;
		}
	}
	{
		// m_ImageManager = arTrackedImageManager;
		ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* L_13 = V_3;
		__this->___m_ImageManager_21 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ImageManager_21), (void*)L_13);
	}

IL_0065:
	{
		// if (m_ARSessionOrigin.TryGetComponent(out ARTrackedObjectManager arTrackedObjectManager))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___m_ARSessionOrigin_11;
		NullCheck(L_14);
		bool L_15;
		L_15 = GameObject_TryGetComponent_TisARTrackedObjectManager_tD667E7CCD95E9D25449BD578F256F728D8619FC7_m28846BD4038C6535F4D387B31595E84AC54E3278(L_14, (&V_4), GameObject_TryGetComponent_TisARTrackedObjectManager_tD667E7CCD95E9D25449BD578F256F728D8619FC7_m28846BD4038C6535F4D387B31595E84AC54E3278_RuntimeMethod_var);
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		// m_ObjectManager = arTrackedObjectManager;
		ARTrackedObjectManager_tD667E7CCD95E9D25449BD578F256F728D8619FC7* L_16 = V_4;
		__this->___m_ObjectManager_22 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ObjectManager_22), (void*)L_16);
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Func`1<System.Boolean> UIManager::GetGoal(UIManager/InstructionGoals)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* UIManager_GetGoal_mB545CD806E0A1AE961E1704FC435E91BCAAA7478 (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, int32_t ___goal0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetGoalU3Eb__73_0_m0CE4DB463620B870AC3C53045A6F3F9E64658991_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetGoalU3Eb__73_1_m96273E03C6A6D9011864D36314C58E2BCDE076ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tE0F140AB3A3D2C049850DEC15500CB19953B3761_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIManager_BodyFound_m77AECC1EB365B4162C6A3A3437C88C658E37E539_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIManager_FaceFound_m9306A6196BACFF5C0F5C878C6D131C0197525D7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIManager_ImageFound_m9A00E02D9D25F34A2875C6522F78BEF796BCFAEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIManager_MultiplePlanesFound_mE9C98A297544EF733C326D9222A3FD44D3B558DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIManager_ObjectFound_mDB6C498F581C435BBD2FE7B120117151D75A0B21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIManager_PlacedObject_m1BADA2E6DD9F3EADDB2ABA4DBDDBECC84D544F65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIManager_PlanesFound_m679513F406EA920B7226602C82E4297361029F66_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* G_B11_0 = NULL;
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* G_B10_0 = NULL;
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* G_B14_0 = NULL;
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* G_B13_0 = NULL;
	{
		int32_t L_0 = ___goal0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0028;
			}
			case 1:
			{
				goto IL_0035;
			}
			case 2:
			{
				goto IL_004f;
			}
			case 3:
			{
				goto IL_0042;
			}
			case 4:
			{
				goto IL_005c;
			}
			case 5:
			{
				goto IL_0069;
			}
			case 6:
			{
				goto IL_0076;
			}
			case 7:
			{
				goto IL_0083;
			}
		}
	}
	{
		goto IL_00a3;
	}

IL_0028:
	{
		// return PlanesFound;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_1 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_1, __this, (intptr_t)((void*)UIManager_PlanesFound_m679513F406EA920B7226602C82E4297361029F66_RuntimeMethod_var), NULL);
		return L_1;
	}

IL_0035:
	{
		// return MultiplePlanesFound;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_2 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_2, __this, (intptr_t)((void*)UIManager_MultiplePlanesFound_mE9C98A297544EF733C326D9222A3FD44D3B558DD_RuntimeMethod_var), NULL);
		return L_2;
	}

IL_0042:
	{
		// return BodyFound;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_3 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_3, __this, (intptr_t)((void*)UIManager_BodyFound_m77AECC1EB365B4162C6A3A3437C88C658E37E539_RuntimeMethod_var), NULL);
		return L_3;
	}

IL_004f:
	{
		// return FaceFound;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_4 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_4, __this, (intptr_t)((void*)UIManager_FaceFound_m9306A6196BACFF5C0F5C878C6D131C0197525D7A_RuntimeMethod_var), NULL);
		return L_4;
	}

IL_005c:
	{
		// return ImageFound;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_5 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_5, __this, (intptr_t)((void*)UIManager_ImageFound_m9A00E02D9D25F34A2875C6522F78BEF796BCFAEC_RuntimeMethod_var), NULL);
		return L_5;
	}

IL_0069:
	{
		// return ObjectFound;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_6 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_6, __this, (intptr_t)((void*)UIManager_ObjectFound_mDB6C498F581C435BBD2FE7B120117151D75A0B21_RuntimeMethod_var), NULL);
		return L_6;
	}

IL_0076:
	{
		// return PlacedObject;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_7 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_7, __this, (intptr_t)((void*)UIManager_PlacedObject_m1BADA2E6DD9F3EADDB2ABA4DBDDBECC84D544F65_RuntimeMethod_var), NULL);
		return L_7;
	}

IL_0083:
	{
		// return () => false;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tE0F140AB3A3D2C049850DEC15500CB19953B3761_il2cpp_TypeInfo_var);
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_8 = ((U3CU3Ec_tE0F140AB3A3D2C049850DEC15500CB19953B3761_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE0F140AB3A3D2C049850DEC15500CB19953B3761_il2cpp_TypeInfo_var))->___U3CU3E9__73_0_1;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_9 = L_8;
		G_B10_0 = L_9;
		if (L_9)
		{
			G_B11_0 = L_9;
			goto IL_00a2;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tE0F140AB3A3D2C049850DEC15500CB19953B3761_il2cpp_TypeInfo_var);
		U3CU3Ec_tE0F140AB3A3D2C049850DEC15500CB19953B3761* L_10 = ((U3CU3Ec_tE0F140AB3A3D2C049850DEC15500CB19953B3761_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE0F140AB3A3D2C049850DEC15500CB19953B3761_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_11 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_11, L_10, (intptr_t)((void*)U3CU3Ec_U3CGetGoalU3Eb__73_0_m0CE4DB463620B870AC3C53045A6F3F9E64658991_RuntimeMethod_var), NULL);
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_12 = L_11;
		((U3CU3Ec_tE0F140AB3A3D2C049850DEC15500CB19953B3761_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE0F140AB3A3D2C049850DEC15500CB19953B3761_il2cpp_TypeInfo_var))->___U3CU3E9__73_0_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tE0F140AB3A3D2C049850DEC15500CB19953B3761_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE0F140AB3A3D2C049850DEC15500CB19953B3761_il2cpp_TypeInfo_var))->___U3CU3E9__73_0_1), (void*)L_12);
		G_B11_0 = L_12;
	}

IL_00a2:
	{
		return G_B11_0;
	}

IL_00a3:
	{
		// return () => false;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tE0F140AB3A3D2C049850DEC15500CB19953B3761_il2cpp_TypeInfo_var);
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_13 = ((U3CU3Ec_tE0F140AB3A3D2C049850DEC15500CB19953B3761_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE0F140AB3A3D2C049850DEC15500CB19953B3761_il2cpp_TypeInfo_var))->___U3CU3E9__73_1_2;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_14 = L_13;
		G_B13_0 = L_14;
		if (L_14)
		{
			G_B14_0 = L_14;
			goto IL_00c2;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tE0F140AB3A3D2C049850DEC15500CB19953B3761_il2cpp_TypeInfo_var);
		U3CU3Ec_tE0F140AB3A3D2C049850DEC15500CB19953B3761* L_15 = ((U3CU3Ec_tE0F140AB3A3D2C049850DEC15500CB19953B3761_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE0F140AB3A3D2C049850DEC15500CB19953B3761_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_16 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_16, L_15, (intptr_t)((void*)U3CU3Ec_U3CGetGoalU3Eb__73_1_m96273E03C6A6D9011864D36314C58E2BCDE076ED_RuntimeMethod_var), NULL);
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_17 = L_16;
		((U3CU3Ec_tE0F140AB3A3D2C049850DEC15500CB19953B3761_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE0F140AB3A3D2C049850DEC15500CB19953B3761_il2cpp_TypeInfo_var))->___U3CU3E9__73_1_2 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tE0F140AB3A3D2C049850DEC15500CB19953B3761_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE0F140AB3A3D2C049850DEC15500CB19953B3761_il2cpp_TypeInfo_var))->___U3CU3E9__73_1_2), (void*)L_17);
		G_B14_0 = L_17;
	}

IL_00c2:
	{
		return G_B14_0;
	}
}
// System.Void UIManager::FadeOnInstructionalUI(UIManager/InstructionUI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_FadeOnInstructionalUI_mF405D85AF5B2FF70C45AACEB2FAAFED7D8957E0F (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, int32_t ___ui0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___ui0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0027;
			}
			case 1:
			{
				goto IL_0033;
			}
			case 2:
			{
				goto IL_003f;
			}
			case 3:
			{
				goto IL_004b;
			}
			case 4:
			{
				goto IL_0057;
			}
			case 5:
			{
				goto IL_0063;
			}
			case 6:
			{
				goto IL_0090;
			}
			case 7:
			{
				goto IL_009b;
			}
		}
	}
	{
		return;
	}

IL_0027:
	{
		// m_AnimationManager.ShowCrossPlatformFindAPlane();
		ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* L_1 = __this->___m_AnimationManager_23;
		NullCheck(L_1);
		ARUXAnimationManager_ShowCrossPlatformFindAPlane_m992125094A81A949474ED1A0919154FCFE0C5625(L_1, NULL);
		// break;
		return;
	}

IL_0033:
	{
		// m_AnimationManager.ShowFindFace();
		ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* L_2 = __this->___m_AnimationManager_23;
		NullCheck(L_2);
		ARUXAnimationManager_ShowFindFace_mDA9BE5B57D0B465FB5B4BF01886AA5968DF8E44D(L_2, NULL);
		// break;
		return;
	}

IL_003f:
	{
		// m_AnimationManager.ShowFindBody();
		ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* L_3 = __this->___m_AnimationManager_23;
		NullCheck(L_3);
		ARUXAnimationManager_ShowFindBody_mFB3DE3E1471006BB1CF1B17AEEF72637E694FB28(L_3, NULL);
		// break;
		return;
	}

IL_004b:
	{
		// m_AnimationManager.ShowFindImage();
		ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* L_4 = __this->___m_AnimationManager_23;
		NullCheck(L_4);
		ARUXAnimationManager_ShowFindImage_mEC0A382E4703DA33EBB08A0D768CDF3F14F8A457(L_4, NULL);
		// break;
		return;
	}

IL_0057:
	{
		// m_AnimationManager.ShowFindObject();
		ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* L_5 = __this->___m_AnimationManager_23;
		NullCheck(L_5);
		ARUXAnimationManager_ShowFindObject_mFE5E88529692EA4068C52E4D943EDABACCBF2EDD(L_5, NULL);
		// break;
		return;
	}

IL_0063:
	{
		// if (m_AnimationManager.ARKitCoachingOverlaySupported())
		ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* L_6 = __this->___m_AnimationManager_23;
		NullCheck(L_6);
		bool L_7;
		L_7 = ARUXAnimationManager_ARKitCoachingOverlaySupported_m5922D93ADF404969D81584B361C550317467637B(L_6, NULL);
		if (!L_7)
		{
			goto IL_007c;
		}
	}
	{
		// m_AnimationManager.ShowCoachingOverlay();
		ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* L_8 = __this->___m_AnimationManager_23;
		NullCheck(L_8);
		ARUXAnimationManager_ShowCoachingOverlay_mAB2D3D96B0A8AC5AFC88295A69678ACB2DA92BA9(L_8, NULL);
		return;
	}

IL_007c:
	{
		// if (m_CoachingOverlayFallback)
		bool L_9 = __this->___m_CoachingOverlayFallback_10;
		if (!L_9)
		{
			goto IL_009b;
		}
	}
	{
		// m_AnimationManager.ShowCrossPlatformFindAPlane();
		ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* L_10 = __this->___m_AnimationManager_23;
		NullCheck(L_10);
		ARUXAnimationManager_ShowCrossPlatformFindAPlane_m992125094A81A949474ED1A0919154FCFE0C5625(L_10, NULL);
		// break;
		return;
	}

IL_0090:
	{
		// m_AnimationManager.ShowTapToPlace();
		ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* L_11 = __this->___m_AnimationManager_23;
		NullCheck(L_11);
		ARUXAnimationManager_ShowTapToPlace_mF863ABE2C4A60806BF0316E2E15BE63821F5E775(L_11, NULL);
	}

IL_009b:
	{
		// }
		return;
	}
}
// System.Boolean UIManager::PlanesFound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIManager_PlanesFound_m679513F406EA920B7226602C82E4297361029F66 (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARTrackableManager_5_get_trackables_m05EA665E785FD12BBFEB6DF9C2208B4222217CF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableCollection_1_get_count_mEF7A466B4BE37C1A7FA849C29FD752B69076DE98_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TrackableCollection_1_t020ABE893108AA7BEFF830BE31295402EFBDDCA7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// bool PlanesFound() => m_PlaneManager && m_PlaneManager.trackables.count > 0;
		ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* L_0 = __this->___m_PlaneManager_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* L_2 = __this->___m_PlaneManager_18;
		NullCheck(L_2);
		TrackableCollection_1_t020ABE893108AA7BEFF830BE31295402EFBDDCA7 L_3;
		L_3 = ARTrackableManager_5_get_trackables_m05EA665E785FD12BBFEB6DF9C2208B4222217CF7(L_2, ARTrackableManager_5_get_trackables_m05EA665E785FD12BBFEB6DF9C2208B4222217CF7_RuntimeMethod_var);
		V_0 = L_3;
		int32_t L_4;
		L_4 = TrackableCollection_1_get_count_mEF7A466B4BE37C1A7FA849C29FD752B69076DE98((&V_0), TrackableCollection_1_get_count_mEF7A466B4BE37C1A7FA849C29FD752B69076DE98_RuntimeMethod_var);
		return (bool)((((int32_t)L_4) > ((int32_t)0))? 1 : 0);
	}

IL_0024:
	{
		return (bool)0;
	}
}
// System.Boolean UIManager::MultiplePlanesFound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIManager_MultiplePlanesFound_mE9C98A297544EF733C326D9222A3FD44D3B558DD (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARTrackableManager_5_get_trackables_m05EA665E785FD12BBFEB6DF9C2208B4222217CF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableCollection_1_get_count_mEF7A466B4BE37C1A7FA849C29FD752B69076DE98_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TrackableCollection_1_t020ABE893108AA7BEFF830BE31295402EFBDDCA7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// bool MultiplePlanesFound() => m_PlaneManager && m_PlaneManager.trackables.count > 1;
		ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* L_0 = __this->___m_PlaneManager_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* L_2 = __this->___m_PlaneManager_18;
		NullCheck(L_2);
		TrackableCollection_1_t020ABE893108AA7BEFF830BE31295402EFBDDCA7 L_3;
		L_3 = ARTrackableManager_5_get_trackables_m05EA665E785FD12BBFEB6DF9C2208B4222217CF7(L_2, ARTrackableManager_5_get_trackables_m05EA665E785FD12BBFEB6DF9C2208B4222217CF7_RuntimeMethod_var);
		V_0 = L_3;
		int32_t L_4;
		L_4 = TrackableCollection_1_get_count_mEF7A466B4BE37C1A7FA849C29FD752B69076DE98((&V_0), TrackableCollection_1_get_count_mEF7A466B4BE37C1A7FA849C29FD752B69076DE98_RuntimeMethod_var);
		return (bool)((((int32_t)L_4) > ((int32_t)1))? 1 : 0);
	}

IL_0024:
	{
		return (bool)0;
	}
}
// System.Boolean UIManager::FaceFound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIManager_FaceFound_m9306A6196BACFF5C0F5C878C6D131C0197525D7A (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARTrackableManager_5_get_trackables_m32440CFD7C68D75BB3FB2ED84A6DEE060390FBD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableCollection_1_get_count_m86E3BD44E96A35AD25951109B6A96002FBDFFFC3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TrackableCollection_1_t7F8F18DAEBAC38B9CA739A30AD2C21CCE8F8B305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// bool FaceFound() => m_FaceManager && m_FaceManager.trackables.count > 0;
		ARFaceManager_tE5955187C9D7C9C4C4139F522DA0DEA69EFCFD8F* L_0 = __this->___m_FaceManager_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		ARFaceManager_tE5955187C9D7C9C4C4139F522DA0DEA69EFCFD8F* L_2 = __this->___m_FaceManager_19;
		NullCheck(L_2);
		TrackableCollection_1_t7F8F18DAEBAC38B9CA739A30AD2C21CCE8F8B305 L_3;
		L_3 = ARTrackableManager_5_get_trackables_m32440CFD7C68D75BB3FB2ED84A6DEE060390FBD7(L_2, ARTrackableManager_5_get_trackables_m32440CFD7C68D75BB3FB2ED84A6DEE060390FBD7_RuntimeMethod_var);
		V_0 = L_3;
		int32_t L_4;
		L_4 = TrackableCollection_1_get_count_m86E3BD44E96A35AD25951109B6A96002FBDFFFC3((&V_0), TrackableCollection_1_get_count_m86E3BD44E96A35AD25951109B6A96002FBDFFFC3_RuntimeMethod_var);
		return (bool)((((int32_t)L_4) > ((int32_t)0))? 1 : 0);
	}

IL_0024:
	{
		return (bool)0;
	}
}
// System.Boolean UIManager::BodyFound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIManager_BodyFound_m77AECC1EB365B4162C6A3A3437C88C658E37E539 (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARTrackableManager_5_get_trackables_m37D9FF777E3321940E7AF3D0EA8204124475649C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableCollection_1_get_count_mD34B737B789B30D939E0D23745BC5881B8225892_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TrackableCollection_1_t4C7AEC8C8EF02A76185BC5E4DA2437F818E51CEF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// bool BodyFound() => m_BodyManager && m_BodyManager.trackables.count > 0;
		ARHumanBodyManager_tA5246205B817A3D4A87BFC54FC018FB513867BFB* L_0 = __this->___m_BodyManager_20;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		ARHumanBodyManager_tA5246205B817A3D4A87BFC54FC018FB513867BFB* L_2 = __this->___m_BodyManager_20;
		NullCheck(L_2);
		TrackableCollection_1_t4C7AEC8C8EF02A76185BC5E4DA2437F818E51CEF L_3;
		L_3 = ARTrackableManager_5_get_trackables_m37D9FF777E3321940E7AF3D0EA8204124475649C(L_2, ARTrackableManager_5_get_trackables_m37D9FF777E3321940E7AF3D0EA8204124475649C_RuntimeMethod_var);
		V_0 = L_3;
		int32_t L_4;
		L_4 = TrackableCollection_1_get_count_mD34B737B789B30D939E0D23745BC5881B8225892((&V_0), TrackableCollection_1_get_count_mD34B737B789B30D939E0D23745BC5881B8225892_RuntimeMethod_var);
		return (bool)((((int32_t)L_4) > ((int32_t)0))? 1 : 0);
	}

IL_0024:
	{
		return (bool)0;
	}
}
// System.Boolean UIManager::ImageFound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIManager_ImageFound_m9A00E02D9D25F34A2875C6522F78BEF796BCFAEC (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARTrackableManager_5_get_trackables_m550D26D672377AA9685A9EFEE2D959525E51800B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableCollection_1_get_count_m0AD877E10C80F187B55A2BC66780A27C8EACFD6C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TrackableCollection_1_tA2C9F7D20A5C25A17E7623BC171A9D4359876D2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// bool ImageFound() => m_ImageManager && m_ImageManager.trackables.count > 0;
		ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* L_0 = __this->___m_ImageManager_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		ARTrackedImageManager_tCBA77F0B8A7172CC6508CA29176EAE1DE5DC4BD4* L_2 = __this->___m_ImageManager_21;
		NullCheck(L_2);
		TrackableCollection_1_tA2C9F7D20A5C25A17E7623BC171A9D4359876D2C L_3;
		L_3 = ARTrackableManager_5_get_trackables_m550D26D672377AA9685A9EFEE2D959525E51800B(L_2, ARTrackableManager_5_get_trackables_m550D26D672377AA9685A9EFEE2D959525E51800B_RuntimeMethod_var);
		V_0 = L_3;
		int32_t L_4;
		L_4 = TrackableCollection_1_get_count_m0AD877E10C80F187B55A2BC66780A27C8EACFD6C((&V_0), TrackableCollection_1_get_count_m0AD877E10C80F187B55A2BC66780A27C8EACFD6C_RuntimeMethod_var);
		return (bool)((((int32_t)L_4) > ((int32_t)0))? 1 : 0);
	}

IL_0024:
	{
		return (bool)0;
	}
}
// System.Boolean UIManager::ObjectFound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIManager_ObjectFound_mDB6C498F581C435BBD2FE7B120117151D75A0B21 (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARTrackableManager_5_get_trackables_mCFD12DF808EC0CE5E99FED3EDF5BFEAB24155F6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableCollection_1_get_count_m2E0B3CEAD4F15634A14B04AB37111B2198856924_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TrackableCollection_1_tCA8C6AEE4E81BA18A7079CA0E9C9612C9095EBD0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// bool ObjectFound() => m_ObjectManager && m_ObjectManager.trackables.count > 0;
		ARTrackedObjectManager_tD667E7CCD95E9D25449BD578F256F728D8619FC7* L_0 = __this->___m_ObjectManager_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		ARTrackedObjectManager_tD667E7CCD95E9D25449BD578F256F728D8619FC7* L_2 = __this->___m_ObjectManager_22;
		NullCheck(L_2);
		TrackableCollection_1_tCA8C6AEE4E81BA18A7079CA0E9C9612C9095EBD0 L_3;
		L_3 = ARTrackableManager_5_get_trackables_mCFD12DF808EC0CE5E99FED3EDF5BFEAB24155F6D(L_2, ARTrackableManager_5_get_trackables_mCFD12DF808EC0CE5E99FED3EDF5BFEAB24155F6D_RuntimeMethod_var);
		V_0 = L_3;
		int32_t L_4;
		L_4 = TrackableCollection_1_get_count_m2E0B3CEAD4F15634A14B04AB37111B2198856924((&V_0), TrackableCollection_1_get_count_m2E0B3CEAD4F15634A14B04AB37111B2198856924_RuntimeMethod_var);
		return (bool)((((int32_t)L_4) > ((int32_t)0))? 1 : 0);
	}

IL_0024:
	{
		return (bool)0;
	}
}
// System.Void UIManager::FadeComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_FadeComplete_m388D31590ADA632BDD049810F27555391487C903 (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) 
{
	{
		// m_ProcessingInstructions = false;
		__this->___m_ProcessingInstructions_16 = (bool)0;
		// }
		return;
	}
}
// System.Boolean UIManager::PlacedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIManager_PlacedObject_m1BADA2E6DD9F3EADDB2ABA4DBDDBECC84D544F65 (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) 
{
	{
		// if (m_PlacedObject)
		bool L_0 = __this->___m_PlacedObject_17;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		// m_PlacedObject = false;
		__this->___m_PlacedObject_17 = (bool)0;
		// return true;
		return (bool)1;
	}

IL_0011:
	{
		// return m_PlacedObject;
		bool L_1 = __this->___m_PlacedObject_17;
		return L_1;
	}
}
// System.Void UIManager::AddToQueue(UXHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_AddToQueue_mF9E907B304CFD8DF9E7A14FE40E774D2954E720A (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, UXHandle_tC4DD5984B1181FA802AC5B288C7616225F9B147F ___uxHandle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m61E54D86D92BB85774BB35079316A552509D7DA9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_UXOrderedQueue.Enqueue(uxHandle);
		Queue_1_tBB833A4AC695DF02307E93FAAED0C78E3BD64A1D* L_0 = __this->___m_UXOrderedQueue_14;
		UXHandle_tC4DD5984B1181FA802AC5B288C7616225F9B147F L_1 = ___uxHandle0;
		NullCheck(L_0);
		Queue_1_Enqueue_m61E54D86D92BB85774BB35079316A552509D7DA9(L_0, L_1, Queue_1_Enqueue_m61E54D86D92BB85774BB35079316A552509D7DA9_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UIManager::TestFlipPlacementBool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_TestFlipPlacementBool_mBF76A8DF73C7850300C0091E07B9AF16BA1F46A2 (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) 
{
	{
		// m_PlacedObject = true;
		__this->___m_PlacedObject_17 = (bool)1;
		// }
		return;
	}
}
// System.Void UIManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager__ctor_mC9DC2B8984E76F424E73C1860AD4BD3DEBF6573F (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) 
{
	{
		// bool m_StartWithInstructionalUI = true;
		__this->___m_StartWithInstructionalUI_4 = (bool)1;
		// InstructionUI m_SecondaryInstructionUI = InstructionUI.TapToPlace;
		__this->___m_SecondaryInstructionUI_8 = 6;
		// InstructionGoals m_SecondaryGoal = InstructionGoals.PlacedAnObject;
		__this->___m_SecondaryGoal_9 = 6;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void UIManager::<OnEnable>b__69_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_U3COnEnableU3Eb__69_0_mEE32206664358615DF236D2C79A1366EDF170733 (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) 
{
	{
		// PlaceObjectsOnPlane.onPlacedObject += () => m_PlacedObject = true;
		__this->___m_PlacedObject_17 = (bool)1;
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
// System.Void UIManager/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m3707A994C72E1D53F6B5742EA210E698C9DB6E59 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tE0F140AB3A3D2C049850DEC15500CB19953B3761_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tE0F140AB3A3D2C049850DEC15500CB19953B3761* L_0 = (U3CU3Ec_tE0F140AB3A3D2C049850DEC15500CB19953B3761*)il2cpp_codegen_object_new(U3CU3Ec_tE0F140AB3A3D2C049850DEC15500CB19953B3761_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m8CFA49442D43B8180925F03EC1DB310352B1BE5B(L_0, NULL);
		((U3CU3Ec_tE0F140AB3A3D2C049850DEC15500CB19953B3761_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE0F140AB3A3D2C049850DEC15500CB19953B3761_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tE0F140AB3A3D2C049850DEC15500CB19953B3761_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE0F140AB3A3D2C049850DEC15500CB19953B3761_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void UIManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8CFA49442D43B8180925F03EC1DB310352B1BE5B (U3CU3Ec_tE0F140AB3A3D2C049850DEC15500CB19953B3761* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean UIManager/<>c::<GetGoal>b__73_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetGoalU3Eb__73_0_m0CE4DB463620B870AC3C53045A6F3F9E64658991 (U3CU3Ec_tE0F140AB3A3D2C049850DEC15500CB19953B3761* __this, const RuntimeMethod* method) 
{
	{
		// return () => false;
		return (bool)0;
	}
}
// System.Boolean UIManager/<>c::<GetGoal>b__73_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetGoalU3Eb__73_1_m96273E03C6A6D9011864D36314C58E2BCDE076ED (U3CU3Ec_tE0F140AB3A3D2C049850DEC15500CB19953B3761* __this, const RuntimeMethod* method) 
{
	{
		// return () => false;
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ARTrackedImagesChangedEventArgs_get_added_m2929CC85141D13AF05C1484AFB47E043C6D3EE35_inline (ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* __this, const RuntimeMethod* method) 
{
	{
		// public List<ARTrackedImage> added { get; private set; }
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_0 = __this->___U3CaddedU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ARTrackedImagesChangedEventArgs_get_updated_m0C896E1C21EF35FF4B31B36563838EC2BA3CDFD1_inline (ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* __this, const RuntimeMethod* method) 
{
	{
		// public List<ARTrackedImage> updated { get; private set; }
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_0 = __this->___U3CupdatedU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* ARTrackedImagesChangedEventArgs_get_removed_m062CBBEF163BEE47A673F7B3BDC0DD1C6EAEA185_inline (ARTrackedImagesChangedEventArgs_tD7718E40EE25D22E9143DA4F556C44980E18BE2F* __this, const RuntimeMethod* method) 
{
	{
		// public List<ARTrackedImage> removed { get; private set; }
		List_1_tFA730335FF46512E4245B2F46892CA318B394FAE* L_0 = __this->___U3CremovedU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F ARTrackedImage_get_referenceImage_m7F8C3733154BE3242F82D2C9A7987A8AAC1F3E6B_inline (ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* __this, const RuntimeMethod* method) 
{
	{
		// public XRReferenceImage referenceImage { get; internal set; }
		XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F L_0 = __this->___U3CreferenceImageU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XRReferenceImage_get_name_mF1BE1E54AD911D48445B7DDEF2E27EA01E1E73BB_inline (XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F* __this, const RuntimeMethod* method) 
{
	{
		// public string name => m_Name;
		String_t* L_0 = __this->___m_Name_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Lerp_mF3BD6827807680A529E800FD027734D40A3597E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		___t2 = L_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___a0;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___b1;
		float L_5 = L_4.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___a0;
		float L_7 = L_6.___x_0;
		float L_8 = ___t2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___a0;
		float L_10 = L_9.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = ___b1;
		float L_12 = L_11.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = ___a0;
		float L_14 = L_13.___y_1;
		float L_15 = ___t2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_16), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_003d;
	}

IL_003d:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* EventSystem_get_currentSelectedGameObject_mD606FFACF3E72755298A523CBB709535CF08C98A_inline (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_CurrentSelected; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_CurrentSelected_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		__this->___z_4 = (0.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageChanged_Invoke_m6E37719628FCADA3B3B14F4FF3CE90A7B9FF43AF_inline (ImageChanged_t4134ECCC08FA02225F24DBCAA67695100807DED2* __this, ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2* ___item0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ARTrackedImage_tC1D6394277D354FB2B952C6D5CAB62140AA455C2*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___item0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Orientation_get_worldSpaceCanvasCamera_m0FAE5582CCE1F14386D58417BF0AB144AA38C5FC_inline (Orientation_t002F5D617F6ACAEA24D962B1D599B05CD988C373* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_WorldSpaceCanvasCamera; }
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___m_WorldSpaceCanvasCamera_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* XRReferenceImage_get_texture_mEC132411644C747C782F41A32A97C95B306D0891_inline (XRReferenceImage_tB2544D6E18E55CD44F4EED1B0573A6A7154C1E2F* __this, const RuntimeMethod* method) 
{
	{
		// public Texture2D texture => m_Texture;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = __this->___m_Texture_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* Orientation_get_defaultTexture_m866CC0318D5AAA45F0D2BCCB8999FA3E43A378B8_inline (Orientation_t002F5D617F6ACAEA24D962B1D599B05CD988C373* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_DefaultTexture; }
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = __this->___m_DefaultTexture_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* SyncPose_get_ARSessionPosition_mB984B77604ADF6C1F07661D63A2CF49FAA1DE92F_inline (SyncPose_tBCA97864532A129003A6A1BCC9AC71011E4285AD* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_ARSessionPosition; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_ARSessionPosition_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ARPlaneManager_get_planePrefab_mD1AE647924733F69F5446087BF5BFD4EEB4EF2C2_inline (ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* __this, const RuntimeMethod* method) 
{
	{
		// get => m_PlanePrefab;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_PlanePrefab_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float DetectDistance_get_PositionY_m7DFF1181DA445651E498E07076FEB4F3DFBE722B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DetectDistance_t9FAB2A22AF4A39E12CA18E1C6A38640C5464AC50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return m_PositionY; }
		il2cpp_codegen_runtime_class_init_inline(DetectDistance_t9FAB2A22AF4A39E12CA18E1C6A38640C5464AC50_il2cpp_TypeInfo_var);
		float L_0 = ((DetectDistance_t9FAB2A22AF4A39E12CA18E1C6A38640C5464AC50_StaticFields*)il2cpp_codegen_static_fields_for(DetectDistance_t9FAB2A22AF4A39E12CA18E1C6A38640C5464AC50_il2cpp_TypeInfo_var))->___m_PositionY_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ARPlaneMeshVisualizer_get_mesh_m6C1A730CECE8AE0A0549ED615AB3B3D66E4A0FD8_inline (ARPlaneMeshVisualizer_t21838C8E2676AC524939E67CB965925E924E018F* __this, const RuntimeMethod* method) 
{
	{
		// public Mesh mesh { get; private set; }
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = __this->___U3CmeshU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ARFeatheredPlaneMeshVisualizer_get_featheringWidth_m14D3A8BE3E9A745E6FD525B19ADDC892B8399B4D_inline (ARFeatheredPlaneMeshVisualizer_t5B508CD2D37F908F4359D7DED031B3C357E34955* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_FeatheringWidth; }
		float L_0 = __this->___m_FeatheringWidth_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Set_m1C7E543216734FB513F9CEBA44C50E6FC2AFD49D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___newX0, float ___newY1, float ___newZ2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___newX0;
		__this->___x_2 = L_0;
		float L_1 = ___newY1;
		__this->___y_3 = L_1;
		float L_2 = ___newZ2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mCE0CF50E59713C5A8F6AAC2C6648CF0EDBEEB27B_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, float ___t2, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		___t2 = L_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___a0;
		float L_3 = L_2.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___b1;
		float L_5 = L_4.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___a0;
		float L_7 = L_6.___r_0;
		float L_8 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___a0;
		float L_10 = L_9.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = ___b1;
		float L_12 = L_11.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___a0;
		float L_14 = L_13.___g_1;
		float L_15 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = ___a0;
		float L_17 = L_16.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = ___b1;
		float L_19 = L_18.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = ___a0;
		float L_21 = L_20.___b_2;
		float L_22 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = ___a0;
		float L_24 = L_23.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = ___b1;
		float L_26 = L_25.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27 = ___a0;
		float L_28 = L_27.___a_3;
		float L_29 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30;
		memset((&L_30), 0, sizeof(L_30));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_30), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), ((float)il2cpp_codegen_add(L_24, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_26, L_28)), L_29)))), /*hidden argument*/NULL);
		V_0 = L_30;
		goto IL_0069;
	}

IL_0069:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31 = V_0;
		return L_31;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Equality_m3A255F888F9300ABB36ED2BC0640CFFDAAEFED2F_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___lhs0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline(L_0, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___rhs1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3;
		L_3 = Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline(L_2, NULL);
		bool L_4;
		L_4 = Vector4_op_Equality_m80E2AA0626A70EF9DCC4F4C215F674A22D6DE937_inline(L_1, L_3, NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ARSession_get_notTrackingReason_m9E98D9ED3B14D277DAE8A8B622556ED1C8F22A65_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static NotTrackingReason notTrackingReason => s_NotTrackingReason;
		int32_t L_0 = ((ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_StaticFields*)il2cpp_codegen_static_fields_for(ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_il2cpp_TypeInfo_var))->___s_NotTrackingReason_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ARSessionStateChangedEventArgs_get_state_mC0A6FB4AF08C068BFD5D9730F60215BE662A950B_inline (ARSessionStateChangedEventArgs_tC31BD123D6B4F6168FB246762E79AB33962AE822* __this, const RuntimeMethod* method) 
{
	{
		// public ARSessionState state { get; private set; }
		int32_t L_0 = __this->___U3CstateU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ARUXAnimationManager_get_localizeText_m66AC1B057DB568FFE8E224FC2FF72F01DE62400D_inline (ARUXAnimationManager_t5DA9842FABC9CF687AF14FA035CA2683E89D8966* __this, const RuntimeMethod* method) 
{
	{
		// get => m_LocalizeText;
		bool L_0 = __this->___m_LocalizeText_37;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ARUXReasonsManager_get_localizeText_mB2F5CF0F7F3E72C57EFE80D3B9B98B80B0731CF8_inline (ARUXReasonsManager_t7DE4754765B780C9987FC05832DE0F5447F2E7EE* __this, const RuntimeMethod* method) 
{
	{
		// get => m_LocalizeText;
		bool L_0 = __this->___m_LocalizeText_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlaceObjectsOnPlane_set_spawnedObject_mEC67DCF79988E87D8D8A38BE01CA2D77F335B6CF_inline (PlaceObjectsOnPlane_t8CCA4A0919CFB134BDC1CFFED9EC2F23DCEB1933* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// public GameObject spawnedObject { get; private set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___U3CspawnedObjectU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CspawnedObjectU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PlaceObjectsOnPlane_get_spawnedObject_m5C323C2EB39FD35D6B5B777C78D3E6A5BC225D01_inline (PlaceObjectsOnPlane_t8CCA4A0919CFB134BDC1CFFED9EC2F23DCEB1933* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject spawnedObject { get; private set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___U3CspawnedObjectU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool LocalizationManager_get_localizationComplete_m45666C705BD483A0E2CEC4496D3484F716C07C74_inline (LocalizationManager_tFBE221DE3A02C297CFB8C59F83F53214317849DA* __this, const RuntimeMethod* method) 
{
	{
		// public bool localizationComplete => m_ReasonsComplete;
		bool L_0 = __this->___m_ReasonsComplete_30;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_gshared_inline (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_gshared_inline (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____currentValue_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m455780C5A45049F9BDC25EAD3BA10A681D16385D_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method) 
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = V_0;
		int32_t L_7 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_8);
		return;
	}

IL_0034:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___item0;
		((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mC7231F573C4B3893A8E7B13375E854626F4AC12E_gshared_inline (Queue_1_tBB833A4AC695DF02307E93FAAED0C78E3BD64A1D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_1_Invoke_mBB7F37C468451AF57FAF31635C544D6B8C4373B2_gshared_inline (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___c0;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___c0;
		float L_3 = L_2.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___c0;
		float L_5 = L_4.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___c0;
		float L_7 = L_6.___a_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0021;
	}

IL_0021:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_m80E2AA0626A70EF9DCC4F4C215F674A22D6DE937_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___lhs0;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___rhs1;
		float L_3 = L_2.___x_1;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___lhs0;
		float L_5 = L_4.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___rhs1;
		float L_7 = L_6.___y_2;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = ___lhs0;
		float L_9 = L_8.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___rhs1;
		float L_11 = L_10.___z_3;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = ___lhs0;
		float L_13 = L_12.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = ___rhs1;
		float L_15 = L_14.___w_4;
		V_3 = ((float)il2cpp_codegen_subtract(L_13, L_15));
		float L_16 = V_0;
		float L_17 = V_0;
		float L_18 = V_1;
		float L_19 = V_1;
		float L_20 = V_2;
		float L_21 = V_2;
		float L_22 = V_3;
		float L_23 = V_3;
		V_4 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_16, L_17)), ((float)il2cpp_codegen_multiply(L_18, L_19)))), ((float)il2cpp_codegen_multiply(L_20, L_21)))), ((float)il2cpp_codegen_multiply(L_22, L_23))));
		float L_24 = V_4;
		V_5 = (bool)((((float)L_24) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0057;
	}

IL_0057:
	{
		bool L_25 = V_5;
		return L_25;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		float L_2 = ___z2;
		__this->___z_3 = L_2;
		float L_3 = ___w3;
		__this->___w_4 = L_3;
		return;
	}
}
