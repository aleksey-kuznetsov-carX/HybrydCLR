#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
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
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct U3CGetEnumeratorU3Ed__12_tFF0F421A4C414F2759BB0D29384B9869BAC33801;
struct U3CGetEnumeratorU3Ed__12_t5DC4E73C16245675953476348C604192339136AB;
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct Action_1_t2518DEA327D7ACE4C30B14D8AFF5D4CFF5221B6F;
struct Action_1_tABD04F977BAE1165FCC3D57AAB3F5C16F3E97674;
struct Action_1_tA19957CC720A8A8732F921D4AD3702951E7762AF;
struct Comparison_1_t9B7FBDDC31C2B4C836D05D7AB3126CC41FEA3F95;
struct Comparison_1_tAFEE7C13ACABD76E510EEF1E65B8A7D2644A427D;
struct Comparison_1_t967BE3E9FD792792C26A54735ACAB0DED8864B56;
struct ConditionalWeakTable_2_tE473109D1EF9EA4E1AA06539AE5262421E166EFD;
struct ConditionalWeakTable_2_tA0A6618FEA1BDC4E0A5C70A205A73167784823D9;
struct ConditionalWeakTable_2_t4FA84C9C03B7929ACDC537F2AB91C3AA9D39B9E6;
struct ConditionalWeakTable_2_tD204B678FB5C57190177AACB4C57D5BDE9ED70E4;
struct DefaultComparer_1_tF1F3B8981298E50FBC17BDC8CA0B4CFE867AD644;
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB;
struct Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA;
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC;
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9;
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC;
struct Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD;
struct Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2;
struct ICollection_1_tD7413105CA5DBF6629BE5E9EE453204D7C0D90FB;
struct ICollection_1_tB388ED908E2D241F56264CA971F25D9ADC1ADEC3;
struct ICollection_1_t27A45BF7572EC3C6DFF3832F6CB7CDD77DC0A7F8;
struct ICollection_1_tDF0811A876F5CF86DB7A7D29BA62D2FE215FB528;
struct ICollection_1_t3D66B9F93984A85B1DCF60C74138DAB9FC0CBAEF;
struct IComparer_1_t5F5F74D8A6A81A5419C8BC0B5DE122391A31B11D;
struct IComparer_1_t244EAA6D39FE41CBD6A47931A0BCB42C9E2C2754;
struct IComparer_1_t02CBB05B6DAC90F8A9E6DBBB6B02E60A3CDEAF15;
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerable_1_t79775EFE60AA7D93DB0348D80A17E5CB5AAD4F69;
struct IEnumerable_1_t61493995980C8D81A5D35A7848ACFB237EAA5E8C;
struct IEnumerable_1_tA29F3C775E2BBFC829F3B64F72F85A8ABFDB702B;
struct IEnumerator_1_t49EF5978D9C5485C4D866D70E1D52AEFBCB2F2FB;
struct IEnumerator_1_t58912AED807807D52A0B7D54EA1BF13FBC7942CC;
struct IEnumerator_1_tF742E85673756F0B02FF588D4DD8B832677FA339;
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IEnumerator_1_t263960A184041232517E683304777E3C59B8D290;
struct IEnumerator_1_t7232E906EEB87AFE80D411615724DB4DB8E97B9C;
struct IEnumerator_1_t276BF0E047C0B96829F38F461ABACF6D7003AD31;
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct IGrouping_2_t6C049D74BCBBF62AE3F8C9ED22904321FBF7B47E;
struct IGrouping_2_tF9B4955C7DAFDEA026775EDD1AD7F8D7BD8EEF0C;
struct IGrouping_2_t6485033266F07DCCDEBAFAEBC5894E6A5F04989C;
struct IObservable_1_tA29A83F0C2D67B7465AEA27D123F8F8B6514E475;
struct IObserver_1_t17230DB4FCAC6CF9D1F25EB46530800D4BEC7CD3;
struct IUniTaskSource_1_t5AB22DC88081D9745C5729863CD4D5F4D1AB3804;
struct IUniTaskSource_1_t5F5B2FF2DDF0972216335AC82EA2B0252EBD0FA4;
struct IUniTaskSource_1_t3EFF7986821E281A4352A95BA3A81F6213508008;
struct IUniTaskSource_1_t6F2D0032F9ED960627CC2F5D4752831F4777A347;
struct IUniTaskSource_1_t53DF05BC4E831EA81B1388F7916CA07D5423C856;
struct IUniTaskSource_1_tA42498D7EC528C63C60D1EE32CD8E6B50EA1ABBD;
struct IUniTaskSource_1_t93A81F74633034B3E75D0796845CF6E4CE4AFB7A;
struct IUniTaskSource_1_t351008D460D11FAB21EF87246DF9473907EE7D26;
struct IUniTaskSource_1_t148786B1E5D88B2BA846C58275D7B231183780CA;
struct IUniTaskSource_1_t226587C6B33552A14878079F4493424EBA6F4102;
struct IUniTaskSource_1_t48F0B86EE41423CC123EC517D6A61018D983A845;
struct IUniTaskSource_1_t41088857ADDCC8F85A35CBF7F003AF790156523B;
struct IUniTaskSource_1_t358875EE12AC09D29F749D09498FF43678806A32;
struct IUniTaskSource_1_tAB57910092122B0D5E3ACF29B40AD4085F14D55A;
struct IUniTaskSource_1_t8EAFED8EFA370A6EA36E5641A931BA52F8C5FE1D;
struct IUniTaskSource_1_tB7108D36CEC5890231A7F73CF8D860371E84A43A;
struct IUniTaskSource_1_t7F32348CDE4995893E4256BD6AD086D1727D1D54;
struct IUniTaskSource_1_tA663367A12D043EC06D61A72D308E4B330DE785B;
struct IUniTaskSource_1_t60D7C6E46369F12C6247371AEEA6F937BE6341AD;
struct IUniTaskSource_1_tFDF65332C20ABF21A1971B6CC0A5E1C5EB79FB45;
struct IUniTaskSource_1_t906DC1FC67986E165F586F272A2D65A73CBCEBFF;
struct IUniTaskSource_1_t402AA00FFF3B9E0E8BF3D976135524E604E20CDD;
struct IUniTaskSource_1_t239448C4B37B4AF8CB5BA50202E41BCAF228FFE9;
struct IUniTaskSource_1_tC1B42F4BBD22B3FE28107E24E854414A6F5CD709;
struct IUniTaskSource_1_tBD234D0527B8BECE75262FD844807C1B9C56D5C2;
struct IUniTaskSource_1_t7DAEB2B9516435C505140F1A0C6BFB09AACD92FF;
struct IUniTaskSource_1_t63FF459B991E43E7C98D611E5811BD0F9994B17A;
struct IUniTaskSource_1_tC467BDE37E4799A4D9E2E8BDF9C32C2818D39ED5;
struct IUniTaskSource_1_t6F391AF9A300693940C1300BAA467F6779D17B7C;
struct IUniTaskSource_1_t3C6F925EA4DFA20F2FF161F075EE9FE388BD421C;
struct IUniTaskSource_1_t525B966515E25DB4D6827D0BD292E95F8AB2FA05;
struct IUniTaskSource_1_tE020EE9AFCE6686B88ED94A845BE46C6AE282CDA;
struct IUniTaskSource_1_tCD8230D7D008520C6B96312591F8F2064FB08C37;
struct IUniTaskSource_1_t8A40D5EA051F78570AE76FA455584BB3A5E9C532;
struct IUniTaskSource_1_t5CBAF45799030D2EE2ABF63EF669E65A1C69BEE1;
struct IUniTaskSource_1_tBB0C6EA5DD5FC47F0053EA3BB1F651191546D5A2;
struct List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565;
struct List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4;
struct List_1_t065A1950A0B1D84B65A5256E8063120B10018641;
struct LockedStack_t000073AA14F1B0C46471D9C699C9CDE10CB7CA17;
struct LockedStack_t55EA3BEB39A80E4F0A2009E69BE4365D6CFFBB7B;
struct LockedStack_t41A87F7FF06A8633FE1FF193C1AA749E23B5A5DC;
struct LockedStack_tA2963E19C6D1029555446DD09B0B4208AC0F8E4A;
struct LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2;
struct Lookup_2_tCC322E34F83E9E70D851F9A53D156847B70F1EF2;
struct Lookup_2_t0C8EADD42CF5878D9378C4B8B0D4EDB8986DF0C8;
struct Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332;
struct LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114;
struct LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47;
struct LowLevelListWithIList_1_t424B84BB083921C00880052D4B49074AF66B72FC;
struct LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9;
struct LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58;
struct LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0;
struct Materialize_tC5629A7DE4A064E8536A84BFFC604E592C047D12;
struct MaterializeObservable_1_tB2074F339492C6F367D4584BF0501A49D2D075F0;
struct MemoizeSource_t6EF94D02CF852AE92900476CE5D6E50A84FC1F2E;
struct MemoizeSource_t0EB58AE3AE2F8E7FBFAD25BCCB33BC7B36243A38;
struct MemoizeSource_t0F002271CE438A8AE16EAB8DA149E32DE7703630;
struct MemoizeSource_t25D181668E617BFB26C25F2FCC7C5170A9D06710;
struct MemoizeSource_t4677D6DB89E883159DA8FF5849F6DF7F985A4B35;
struct MemoizeSource_tEA26C433E3D23BC798D60E3E928F89BF44D0780A;
struct MemoizeSource_t995613DCA5117D80DE5BC09B7D7817C51047C696;
struct MemoizeSource_tF3E74A3B60F21D568DFAE0A35900C84F9B029D04;
struct MemoizeSource_tD6683A8DE463F34C3148559778641D0559CAF6BD;
struct MemoizeSource_t27D10A136D46431400AD10521E516314BAD6E704;
struct MemoizeSource_t1BB5620374CA89421E3294A788BD4B28A99714C7;
struct MemoizeSource_t4AC1D09959B35856B6BA4446DAC696ED75E020E4;
struct MemoizeSource_t9E9462BD8A21248A2EC46FFD9CB9B754E4394D6C;
struct MemoizeSource_t015C121B64F928ECEF0D84837D2FA062738D63BB;
struct MemoizeSource_tF1CD7C88E1188F0C65ADB3C27970D1D1D710EDB5;
struct MemoizeSource_t2ED223A676DCA53FD8FA71E6A088B3FFE496AA22;
struct MemoizeSource_t49C4AB20ECB8647FDDC6F869F071E757E142AF51;
struct MemoizeSource_t8B81C7A1772F56F643374AA53C7ABB9DD7BA00AC;
struct MemoizeSource_t8515139432089A796262B47AC0026B9DE7E1F747;
struct MemoizeSource_t670AFF0D5F06553D5D7657F9571EFAD5E11D7DC4;
struct MemoizeSource_t53DB4D4310BA19FE28DF1A4330092F558BD01F66;
struct MemoizeSource_t21EF441B70AC2C2BA32B8DA5B160242EB7453DBF;
struct MemoizeSource_tBE0C4BF3BC7E24BACB262D0B2228DA8399895051;
struct MemoizeSource_t78D318D9F5BA39C803E43096B403B20EF6F37CE9;
struct MemoizeSource_tF2CD325E9978D8B7905DB1D1D10BC6EF0A4B6D44;
struct MemoizeSource_t4C627C0F0DCFB973BDC6E629C4985F69E4658986;
struct MemoizeSource_tEFC28095C5428DF2E08610353C11E5105050BF35;
struct MemoizeSource_tFBA14165BCBCFC59D01EC962C36F4F8166B9046A;
struct MemoizeSource_tB0CAE3B009C8E612B0C18D814360A44A8A148009;
struct MemoizeSource_tFEFF99B6CA94EC734E787DC51DD166ED1D95FC77;
struct MemoizeSource_tA496F9380C7AF07E3422F84834B64735B26DC573;
struct MemoizeSource_tA63F286F2271661711033949CD911948ABD8CB73;
struct MemoizeSource_tCA4B4611DF38506DD4237D55981135B1E0F97199;
struct MemoizeSource_t1184411DF9A67FC31DCB16211873336ACFD4C4C2;
struct MemoizeSource_t74CBB552A0B5909901EBC1BC50442F56F5FE81A6;
struct MemoizeSource_tFB4BE9B6B9177E2D747FA257DFFCB7ECD4059D35;
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
struct Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107;
struct Predicate_1_tE6CEF83377C879013E736AC152429530BFBE7BD7;
struct Predicate_1_t4217DDE556AA2DD5A06797A7B6ADC3C6E795D010;
struct Predicate_1_t8A5AF3450E7B0054E5339AB18FD29FA24A371BC1;
struct EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6;
struct EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52;
struct GroupingU5BU5D_tAC4A7AAA50ACD8625A7FD9EC4C4B8F2C47A09ED4;
struct GroupingU5BU5D_t95ED7FF772EEB2D79F3E7BA1B84F4C2833F0F208;
struct GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B;
struct PerCoreLockedStacksU5BU5D_t66F38702B1BDB999EE73628348DDFE580E352C9D;
struct PerCoreLockedStacksU5BU5D_t4BBE2725C0221B3E883AFC60A3A21970D7CB67B1;
struct PerCoreLockedStacksU5BU5D_tCAB737265F2B693EDA232C9438A4E4DF884A0166;
struct PerCoreLockedStacksU5BU5D_t9CDDE75124B27D018B8CD21AC5D6E007D0686752;
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
struct CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680;
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
struct __Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290;
struct ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C;
struct RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25;
struct Exception_t;
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
struct IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7;
IL2CPP_EXTERN_C String_t* _stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C;
IL2CPP_EXTERN_C String_t* _stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6;
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6;
struct EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52;
struct GroupingU5BU5D_tAC4A7AAA50ACD8625A7FD9EC4C4B8F2C47A09ED4;
struct GroupingU5BU5D_t95ED7FF772EEB2D79F3E7BA1B84F4C2833F0F208;
struct GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B;
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
struct CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680;
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
struct __Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290;
struct ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C;
struct RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CGetEnumeratorU3Ed__12_tFF0F421A4C414F2759BB0D29384B9869BAC33801  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	Lookup_2_tCC322E34F83E9E70D851F9A53D156847B70F1EF2* ___U3CU3E4__this;
	Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC* ___U3CgU3E5__2;
};
struct U3CGetEnumeratorU3Ed__12_t5DC4E73C16245675953476348C604192339136AB  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	Lookup_2_t0C8EADD42CF5878D9378C4B8B0D4EDB8986DF0C8* ___U3CU3E4__this;
	Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD* ___U3CgU3E5__2;
};
struct U3CGetEnumeratorU3Ed__12_t5786B9631F2D28B78F4B69FD4A59FCE5AF8D9CC0  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332* ___U3CU3E4__this;
	Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* ___U3CgU3E5__2;
};
struct ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07  : public RuntimeObject
{
};
struct ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B  : public RuntimeObject
{
};
struct ArrayPool_1_tEE934B4A44CDA39BED8CBAF50F7C0E2E9E1ACC01  : public RuntimeObject
{
};
struct ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774  : public RuntimeObject
{
};
struct DefaultComparer_1_tF1F3B8981298E50FBC17BDC8CA0B4CFE867AD644  : public RuntimeObject
{
};
struct DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5  : public RuntimeObject
{
};
struct Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB  : public RuntimeObject
{
	int32_t ____key;
	RuntimeObject* ____value;
	Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* ____next;
};
struct Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA : public RuntimeObject {};
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC  : public RuntimeObject
{
};
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9  : public RuntimeObject
{
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
};
struct Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC  : public RuntimeObject
{
	int32_t ___key;
	int32_t ___hashCode;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___elements;
	int32_t ___count;
	Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC* ___hashNext;
	Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC* ___next;
};
struct Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD  : public RuntimeObject
{
	int32_t ___key;
	int32_t ___hashCode;
	RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* ___elements;
	int32_t ___count;
	Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD* ___hashNext;
	Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD* ___next;
};
struct Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2 : public RuntimeObject {};
struct List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565  : public RuntimeObject
{
	ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4  : public RuntimeObject
{
	ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t065A1950A0B1D84B65A5256E8063120B10018641  : public RuntimeObject
{
	RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct LockedStack_t000073AA14F1B0C46471D9C699C9CDE10CB7CA17  : public RuntimeObject
{
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ____arrays;
	int32_t ____count;
	uint32_t ____firstStackItemMS;
};
struct LockedStack_t55EA3BEB39A80E4F0A2009E69BE4365D6CFFBB7B  : public RuntimeObject
{
	CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680* ____arrays;
	int32_t ____count;
	uint32_t ____firstStackItemMS;
};
struct LockedStack_t41A87F7FF06A8633FE1FF193C1AA749E23B5A5DC  : public RuntimeObject
{
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ____arrays;
	int32_t ____count;
	uint32_t ____firstStackItemMS;
};
struct LockedStack_tA2963E19C6D1029555446DD09B0B4208AC0F8E4A  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F* ____arrays;
	int32_t ____count;
	uint32_t ____firstStackItemMS;
};
struct Lookup_2_tCC322E34F83E9E70D851F9A53D156847B70F1EF2  : public RuntimeObject
{
	RuntimeObject* ___comparer;
	GroupingU5BU5D_tAC4A7AAA50ACD8625A7FD9EC4C4B8F2C47A09ED4* ___groupings;
	Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC* ___lastGrouping;
	int32_t ___count;
};
struct Lookup_2_t0C8EADD42CF5878D9378C4B8B0D4EDB8986DF0C8  : public RuntimeObject
{
	RuntimeObject* ___comparer;
	GroupingU5BU5D_t95ED7FF772EEB2D79F3E7BA1B84F4C2833F0F208* ___groupings;
	Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD* ___lastGrouping;
	int32_t ___count;
};
struct Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332  : public RuntimeObject
{
	RuntimeObject* ___comparer;
	GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B* ___groupings;
	Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* ___lastGrouping;
	int32_t ___count;
};
struct LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114  : public RuntimeObject
{
	EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6* ____buckets;
	int32_t ____numEntries;
	int32_t ____version;
	RuntimeObject* ____comparer;
};
struct LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47  : public RuntimeObject
{
	EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* ____buckets;
	int32_t ____numEntries;
	int32_t ____version;
	RuntimeObject* ____comparer;
};
struct LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct Notification_1_t3461E7568C21AF7005CD41E294C05D2EC8F3E690  : public RuntimeObject
{
};
struct OperatorObservableBase_1_t02E1E1805A0338B88262AE79E3C1F94575CEB55A  : public RuntimeObject
{
	bool ___isRequiredSubscribeOnCurrentThread;
};
struct OperatorObserverBase_2_t6794B8D00D2628112E264959A9F0F22ABCAEEA87  : public RuntimeObject
{
	RuntimeObject* ___observer;
	RuntimeObject* ___cancel;
};
struct EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25  : public RuntimeObject
{
	String_t* ___U3CNameU3Ek__BackingField;
};
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757  : public RuntimeObject
{
	Exception_t* ___m_Exception;
	RuntimeObject* ___m_stackTrace;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types;
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex;
	int32_t ___m_currMember;
	RuntimeObject* ___m_converter;
	String_t* ___m_fullTypeName;
	String_t* ___m_assemName;
	Type_t* ___objectType;
	bool ___isFullTypeNameSetExplicit;
	bool ___isAssemblyNameSetExplicit;
	bool ___requireSameTokenInPartialTrust;
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
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};
struct Enumerator_tEDEAA5F8FFBCB1F2EE5A6E473ED9F5A86691DE05 
{
	LowLevelListWithIList_1_t424B84BB083921C00880052D4B49074AF66B72FC* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
typedef Il2CppFullySharedGenericStruct Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0;
struct KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F 
{
	int64_t ___key;
	RuntimeObject* ___value;
};
struct LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2  : public EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9
{
};
struct LowLevelListWithIList_1_t424B84BB083921C00880052D4B49074AF66B72FC  : public LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58
{
};
struct LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9  : public LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0
{
};
struct Materialize_tC5629A7DE4A064E8536A84BFFC604E592C047D12  : public OperatorObserverBase_2_t6794B8D00D2628112E264959A9F0F22ABCAEEA87
{
	MaterializeObservable_1_tB2074F339492C6F367D4584BF0501A49D2D075F0* ___parent;
};
struct MaterializeObservable_1_tB2074F339492C6F367D4584BF0501A49D2D075F0  : public OperatorObservableBase_1_t02E1E1805A0338B88262AE79E3C1F94575CEB55A
{
	RuntimeObject* ___source;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_t99785B1054684FDD1A65104B70B272C02AA00542  : public ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____bucketArraySizes;
	PerCoreLockedStacksU5BU5D_t66F38702B1BDB999EE73628348DDFE580E352C9D* ____buckets;
	int32_t ____callbackCreated;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_t8906D917899793F9523A1B1DFB3008CA600B7F00  : public ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____bucketArraySizes;
	PerCoreLockedStacksU5BU5D_t4BBE2725C0221B3E883AFC60A3A21970D7CB67B1* ____buckets;
	int32_t ____callbackCreated;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_t5B35E5C672C6B144AA2ACF24F6AB93FC7FDEAECC  : public ArrayPool_1_tEE934B4A44CDA39BED8CBAF50F7C0E2E9E1ACC01
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____bucketArraySizes;
	PerCoreLockedStacksU5BU5D_tCAB737265F2B693EDA232C9438A4E4DF884A0166* ____buckets;
	int32_t ____callbackCreated;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_tE35D2E7EF078343B5B040BA33BB77E88B1AC8F0F  : public ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____bucketArraySizes;
	PerCoreLockedStacksU5BU5D_t9CDDE75124B27D018B8CD21AC5D6E007D0686752* ____buckets;
	int32_t ____callbackCreated;
};
struct ValueTuple_2_tAC09A94984283F831036E5D9BFBAECBCBACE53AA 
{
	bool ___Item1;
	bool ___Item2;
};
struct ValueTuple_2_tF23F9F76F43C019B97100BC7AD12CC01F8EA6133 
{
	bool ___Item1;
	int32_t ___Item2;
};
struct ValueTuple_2_tC8CCAE1DDAC0B3D7328B4402277A92A81F4D9242 
{
	bool ___Item1;
	int64_t ___Item2;
};
struct ValueTuple_2_t307FF872C9931F811F5573093B923498C2EFC798 
{
	bool ___Item1;
	RuntimeObject* ___Item2;
};
struct ValueTuple_2_tFC757014D5EE27EAC001A7E4E3270DE5A9A9A90D 
{
	bool ___Item1;
	float ___Item2;
};
struct ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC 
{
	RuntimeObject* ___Item1;
	int32_t ___Item2;
};
struct ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A 
{
	RuntimeObject* ___Item1;
	RuntimeObject* ___Item2;
};
struct ValueTuple_3_t76D42E36600476D316A29B08F64BA2F5E97C3993 
{
	int32_t ___Item1;
	bool ___Item2;
	bool ___Item3;
};
struct ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888  : public EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25
{
};
struct AsyncUnit_t28ED8F3D14C76244CF24D9C7A627585A9EC7491A 
{
	union
	{
		struct
		{
		};
		uint8_t AsyncUnit_t28ED8F3D14C76244CF24D9C7A627585A9EC7491A__padding[1];
	};
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	int32_t ___m_Handle;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 
{
	RuntimeObject* ___source;
	int16_t ___token;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
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
struct MemoryPressure_t211225B7C4B31AFD064E1D7ABDD38BD64F5C97C2 
{
	int32_t ___value__;
};
struct MemoryPressure_tF20E59A2FCD73572EF954182450F33E0A686455A 
{
	int32_t ___value__;
};
struct MemoryPressure_tDDA5D8E48826B4CBA5699D6EE80C85F2F0F4B717 
{
	int32_t ___value__;
};
struct MemoryPressure_t7AAFC0465C6ACE5222645A59D867C7FD22F28381 
{
	int32_t ___value__;
};
struct ValueTuple_2_tD8FC7D951E88A4E6D75952ABBF6C76990A9E9AAD 
{
	bool ___Item1;
	KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F ___Item2;
};
struct ValueTuple_2_tC3A9FBC1DDC2CD810E45954B161AEB06520AA82B 
{
	bool ___Item1;
	ValueTuple_2_tAC09A94984283F831036E5D9BFBAECBCBACE53AA ___Item2;
};
struct ValueTuple_2_tA25235C614630F839C1CEDD0AA58AEC89332BCDA 
{
	bool ___Item1;
	ValueTuple_2_tF23F9F76F43C019B97100BC7AD12CC01F8EA6133 ___Item2;
};
struct ValueTuple_2_tCCA59707267517E8DF27B654C65D336E7DDD0348 
{
	bool ___Item1;
	ValueTuple_2_tC8CCAE1DDAC0B3D7328B4402277A92A81F4D9242 ___Item2;
};
struct ValueTuple_2_t6F27C773BC7E89370106B4C0E4C206C9A43E6F79 
{
	bool ___Item1;
	ValueTuple_2_t307FF872C9931F811F5573093B923498C2EFC798 ___Item2;
};
struct ValueTuple_2_t131276657804B9CD542D2455688085D6163B3574 
{
	bool ___Item1;
	ValueTuple_2_tFC757014D5EE27EAC001A7E4E3270DE5A9A9A90D ___Item2;
};
struct ValueTuple_2_t080A94AA6EF29FEDCE11A9D72F4AC217B5D94588 
{
	bool ___Item1;
	ValueTuple_2_tC57529B8C1EE84CA3D138FBE3836C013C6DC40AC ___Item2;
};
struct ValueTuple_2_t4838B969D4E663CD80C3C71294D5B1A63A031761 
{
	bool ___Item1;
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___Item2;
};
struct ValueTuple_2_tC103FD0E6A07E795571CAA8F01FD38585552962E 
{
	bool ___Item1;
	ValueTuple_3_t76D42E36600476D316A29B08F64BA2F5E97C3993 ___Item2;
};
struct ValueTuple_2_t367B6767F8DFB6B9B802D01BD72266208665621B 
{
	bool ___Item1;
	AsyncUnit_t28ED8F3D14C76244CF24D9C7A627585A9EC7491A ___Item2;
};
struct ValueTuple_2_t417CA51A67B078A06520E6233EF27007D51B98CB 
{
	bool ___Item1;
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___Item2;
};
struct ValueTuple_2_tB2A201191AD7D52B5E277AF3507BC4F2FE24BC29 
{
	bool ___Item1;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___Item2;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct AsyncGPUReadbackRequest_t6A735D3E0F1DEF8F43EBD0E6FE550FAE564519C7 
{
	intptr_t ___m_Ptr;
	int32_t ___m_Version;
};
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	intptr_t ___m_Ptr;
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback;
};
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr;
	Il2CppMethodPointer ___m_completeCallback;
};
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr;
	Il2CppMethodPointer ___m_completeCallback;
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
struct ExceptionArgument_t60E7F8D9DE5362CBE9365893983C30302D83B778 
{
	int32_t ___value__;
};
struct ExceptionResource_t609A85E253A4E615583553D91D839E2E79FDFBD9 
{
	int32_t ___value__;
};
struct RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Centroid;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal;
	float ___m_Distance;
	float ___m_Fraction;
	int32_t ___m_Collider;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct StreamingContextStates_t5EE358E619B251608A9327618C7BFE8638FC33C1 
{
	int32_t ___value__;
};
struct UniTaskStatus_tC898C29839EBB5DB7055C3DF299A2C276237CB70 
{
	int32_t ___value__;
};
struct Unit_t7A9C3ABB0618BEBFDC1813D07080CE0C145448ED 
{
	int32_t ___value__;
};
struct Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Pos;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___Rot;
};
struct Enumerator_t4EB0A412E114F46D610EDBC4C0AEE8A523FB95E5 
{
	List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* ____list;
	int32_t ____index;
	int32_t ____version;
	Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E ____current;
};
struct MemoizeSource_t6EF94D02CF852AE92900476CE5D6E50A84FC1F2E  : public RuntimeObject
{
	RuntimeObject* ___source;
	KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F ___result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ___exception;
	int32_t ___status;
};
struct MemoizeSource_t0EB58AE3AE2F8E7FBFAD25BCCB33BC7B36243A38  : public RuntimeObject
{
	RuntimeObject* ___source;
	ValueTuple_2_tD8FC7D951E88A4E6D75952ABBF6C76990A9E9AAD ___result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ___exception;
	int32_t ___status;
};
struct NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct ValueTuple_2_tDEC0B1538702EF393ED3785AC477A5349EB4FE40 
{
	bool ___Item1;
	ValueTuple_2_tD8FC7D951E88A4E6D75952ABBF6C76990A9E9AAD ___Item2;
};
struct ValueTuple_2_tB6C5EB8B1097DA5E36DC437A3AB809D0EB919B4D 
{
	bool ___Item1;
	ValueTuple_2_tC3A9FBC1DDC2CD810E45954B161AEB06520AA82B ___Item2;
};
struct ValueTuple_2_t6F12A453A5FB63EA0055B81CCD9EE7C6A084D0D3 
{
	bool ___Item1;
	ValueTuple_2_tA25235C614630F839C1CEDD0AA58AEC89332BCDA ___Item2;
};
struct ValueTuple_2_t6008F226D041098294267B15AFD55BC2249402F8 
{
	bool ___Item1;
	ValueTuple_2_tCCA59707267517E8DF27B654C65D336E7DDD0348 ___Item2;
};
struct ValueTuple_2_tD5A2188D8C3A67F5F0F53B860F1DD0F625E65EC0 
{
	bool ___Item1;
	ValueTuple_2_t6F27C773BC7E89370106B4C0E4C206C9A43E6F79 ___Item2;
};
struct ValueTuple_2_t15C00908E6632081AE88B0D4EC06C38ACB5704C8 
{
	bool ___Item1;
	ValueTuple_2_t131276657804B9CD542D2455688085D6163B3574 ___Item2;
};
struct ValueTuple_2_t317B39FC224C635EC610E270776C5B67B13DEA3C 
{
	bool ___Item1;
	ValueTuple_2_t080A94AA6EF29FEDCE11A9D72F4AC217B5D94588 ___Item2;
};
struct ValueTuple_2_t3E8054C241B7D6C3EB6F49AD6B99C35D320C04EF 
{
	bool ___Item1;
	ValueTuple_2_t4838B969D4E663CD80C3C71294D5B1A63A031761 ___Item2;
};
struct ValueTuple_2_t1CEE1FA3CCC7574B1970AA68D0E2108E3646C030 
{
	bool ___Item1;
	ValueTuple_2_tC103FD0E6A07E795571CAA8F01FD38585552962E ___Item2;
};
struct ValueTuple_2_tFC12578DA4A995A231DF6388339B299227615078 
{
	bool ___Item1;
	ValueTuple_2_t367B6767F8DFB6B9B802D01BD72266208665621B ___Item2;
};
struct ValueTuple_2_t00F6790A71C88CB34ADE23E76883973E82ABBB52 
{
	bool ___Item1;
	ValueTuple_2_t417CA51A67B078A06520E6233EF27007D51B98CB ___Item2;
};
struct ValueTuple_2_t7F4278CA93D49219B3B75B99F821C55A423D2F71 
{
	bool ___Item1;
	ValueTuple_2_tB2A201191AD7D52B5E277AF3507BC4F2FE24BC29 ___Item2;
};
struct ValueTuple_2_t978B9C77D53C3F8A7D2D0B175C36A1AAF5B75E4C 
{
	bool ___Item1;
	AsyncGPUReadbackRequest_t6A735D3E0F1DEF8F43EBD0E6FE550FAE564519C7 ___Item2;
};
struct Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 
{
	float ___m_Value;
	int32_t ___m_Unit;
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
struct SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A 
{
	Scene_tA1DC762B79745EB5140F054C884855B922318356 ___m_Scene;
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___m_Operation;
};
struct SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A_marshaled_pinvoke
{
	Scene_tA1DC762B79745EB5140F054C884855B922318356 ___m_Scene;
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke ___m_Operation;
};
struct SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A_marshaled_com
{
	Scene_tA1DC762B79745EB5140F054C884855B922318356 ___m_Scene;
	AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com* ___m_Operation;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	RuntimeObject* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E 
{
	float ___Time;
	bool ___IsCut;
	Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E ___Item;
};
struct RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E_marshaled_pinvoke
{
	float ___Time;
	int32_t ___IsCut;
	Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E ___Item;
};
struct RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E_marshaled_com
{
	float ___Time;
	int32_t ___IsCut;
	Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E ___Item;
};
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};
struct Action_1_tABD04F977BAE1165FCC3D57AAB3F5C16F3E97674  : public MulticastDelegate_t
{
};
struct Action_1_tA19957CC720A8A8732F921D4AD3702951E7762AF  : public MulticastDelegate_t
{
};
struct Comparison_1_tAFEE7C13ACABD76E510EEF1E65B8A7D2644A427D  : public MulticastDelegate_t
{
};
struct Comparison_1_t967BE3E9FD792792C26A54735ACAB0DED8864B56  : public MulticastDelegate_t
{
};
struct Enumerator_t6FC3A8CABABF859880C2F601A072BC8D9C8BE85C 
{
	List_1_t065A1950A0B1D84B65A5256E8063120B10018641* ____list;
	int32_t ____index;
	int32_t ____version;
	RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E ____current;
};
struct MemoizeSource_t0F002271CE438A8AE16EAB8DA149E32DE7703630  : public RuntimeObject
{
	RuntimeObject* ___source;
	ValueTuple_2_tDEC0B1538702EF393ED3785AC477A5349EB4FE40 ___result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ___exception;
	int32_t ___status;
};
struct MemoizeSource_tFB4BE9B6B9177E2D747FA257DFFCB7ECD4059D35  : public RuntimeObject
{
	RuntimeObject* ___source;
	ValueTuple_2_tB6C5EB8B1097DA5E36DC437A3AB809D0EB919B4D ___result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ___exception;
	int32_t ___status;
};
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12  : public MulticastDelegate_t
{
};
struct Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107  : public MulticastDelegate_t
{
};
struct Predicate_1_t4217DDE556AA2DD5A06797A7B6ADC3C6E795D010  : public MulticastDelegate_t
{
};
struct Predicate_1_t8A5AF3450E7B0054E5339AB18FD29FA24A371BC1  : public MulticastDelegate_t
{
};
struct ValueTuple_2_tA349CD9D248C0AEA0723711BC6AB72E5651FA416 
{
	bool ___Item1;
	ValueTuple_2_tDEC0B1538702EF393ED3785AC477A5349EB4FE40 ___Item2;
};
struct ValueTuple_2_tF14F6641CFA2C7B5CFBD0075A310DF96EF5F1554 
{
	bool ___Item1;
	ValueTuple_2_tB6C5EB8B1097DA5E36DC437A3AB809D0EB919B4D ___Item2;
};
struct ValueTuple_2_t97A7CEA19B461989D818D347826BF07FB96CA07B 
{
	bool ___Item1;
	ValueTuple_2_t6F12A453A5FB63EA0055B81CCD9EE7C6A084D0D3 ___Item2;
};
struct ValueTuple_2_t9B66A65935FC3A7480FE6E45C87AA4ED045DAE0A 
{
	bool ___Item1;
	ValueTuple_2_t6008F226D041098294267B15AFD55BC2249402F8 ___Item2;
};
struct ValueTuple_2_t5A6143A93BAFD4601C2B326EB00E4193D3D47A31 
{
	bool ___Item1;
	ValueTuple_2_tD5A2188D8C3A67F5F0F53B860F1DD0F625E65EC0 ___Item2;
};
struct ValueTuple_2_t5D1952D15E56B34C82F917988745983CF8A3126A 
{
	bool ___Item1;
	ValueTuple_2_t15C00908E6632081AE88B0D4EC06C38ACB5704C8 ___Item2;
};
struct ValueTuple_2_tD892015C67259A7424294FA5093B451BF8AA43CD 
{
	bool ___Item1;
	ValueTuple_2_t317B39FC224C635EC610E270776C5B67B13DEA3C ___Item2;
};
struct ValueTuple_2_tB5CA42715211C37328A84B7ADB9D11C32D8EB35B 
{
	bool ___Item1;
	ValueTuple_2_t3E8054C241B7D6C3EB6F49AD6B99C35D320C04EF ___Item2;
};
struct ValueTuple_2_t52E63268B5601A67D99E98851A669CC2902A98CC 
{
	bool ___Item1;
	ValueTuple_2_t1CEE1FA3CCC7574B1970AA68D0E2108E3646C030 ___Item2;
};
struct ValueTuple_2_t31FC349FE1CF0C2BF4E1437F0DF1D14D14A65B79 
{
	bool ___Item1;
	ValueTuple_2_tFC12578DA4A995A231DF6388339B299227615078 ___Item2;
};
struct ValueTuple_2_t70EDC5426FEF99693A7C12DD82A6786EAD6CADCD 
{
	bool ___Item1;
	ValueTuple_2_t00F6790A71C88CB34ADE23E76883973E82ABBB52 ___Item2;
};
struct ValueTuple_2_t970EA8CA3255293ADB2F5DFF3BDE641544F23600 
{
	bool ___Item1;
	ValueTuple_2_t7F4278CA93D49219B3B75B99F821C55A423D2F71 ___Item2;
};
struct ValueTuple_2_t677CB6C9236D92FBD94632B52B25CB4BCACDC95F 
{
	bool ___Item1;
	ValueTuple_2_t978B9C77D53C3F8A7D2D0B175C36A1AAF5B75E4C ___Item2;
};
struct ValueTuple_2_t95EAA894D03885CD1F6C28C1D43F74E8351F2EEC 
{
	bool ___Item1;
	SceneInstance_t9D8203A59AA2C8EE21045B75AFA429EB1B6BF14A ___Item2;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ____cancellationToken;
};
struct OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct ParticleSystemNativeArray3_t27AB36B1E92F6FEB8470D17603AAF234992101BF 
{
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___x;
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___y;
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___z;
};
struct ParticleSystemNativeArray4_tE8A2B0F1BC8D4BF6D264636EC55F30131A44CAE8 
{
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___x;
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___y;
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___z;
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___w;
};
struct ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 
{
	int32_t ___index;
	String_t* ___name;
	float ___actualWidth;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___width;
	bool ___visible;
};
struct ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_marshaled_pinvoke
{
	int32_t ___index;
	char* ___name;
	float ___actualWidth;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___width;
	int32_t ___visible;
};
struct ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_marshaled_com
{
	int32_t ___index;
	Il2CppChar* ___name;
	float ___actualWidth;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___width;
	int32_t ___visible;
};
struct Action_1_t2518DEA327D7ACE4C30B14D8AFF5D4CFF5221B6F  : public MulticastDelegate_t
{
};
struct Comparison_1_t9B7FBDDC31C2B4C836D05D7AB3126CC41FEA3F95  : public MulticastDelegate_t
{
};
struct Enumerator_tC4C15C26A301F0CB28B97DFCFE9198EF13B61D16 
{
	List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* ____list;
	int32_t ____index;
	int32_t ____version;
	ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ____current;
};
struct MemoizeSource_t25D181668E617BFB26C25F2FCC7C5170A9D06710  : public RuntimeObject
{
	RuntimeObject* ___source;
	ValueTuple_2_tA349CD9D248C0AEA0723711BC6AB72E5651FA416 ___result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ___exception;
	int32_t ___status;
};
struct MemoizeSource_t21EF441B70AC2C2BA32B8DA5B160242EB7453DBF  : public RuntimeObject
{
	RuntimeObject* ___source;
	ValueTuple_2_tF14F6641CFA2C7B5CFBD0075A310DF96EF5F1554 ___result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ___exception;
	int32_t ___status;
};
struct MemoizeSource_tBE0C4BF3BC7E24BACB262D0B2228DA8399895051  : public RuntimeObject
{
	RuntimeObject* ___source;
	ValueTuple_2_t97A7CEA19B461989D818D347826BF07FB96CA07B ___result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ___exception;
	int32_t ___status;
};
struct MemoizeSource_t78D318D9F5BA39C803E43096B403B20EF6F37CE9  : public RuntimeObject
{
	RuntimeObject* ___source;
	ValueTuple_2_t9B66A65935FC3A7480FE6E45C87AA4ED045DAE0A ___result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ___exception;
	int32_t ___status;
};
struct MemoizeSource_tF2CD325E9978D8B7905DB1D1D10BC6EF0A4B6D44  : public RuntimeObject
{
	RuntimeObject* ___source;
	ValueTuple_2_t5A6143A93BAFD4601C2B326EB00E4193D3D47A31 ___result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ___exception;
	int32_t ___status;
};
struct MemoizeSource_tFBA14165BCBCFC59D01EC962C36F4F8166B9046A  : public RuntimeObject
{
	RuntimeObject* ___source;
	ValueTuple_2_t5D1952D15E56B34C82F917988745983CF8A3126A ___result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ___exception;
	int32_t ___status;
};
struct MemoizeSource_tA496F9380C7AF07E3422F84834B64735B26DC573  : public RuntimeObject
{
	RuntimeObject* ___source;
	ValueTuple_2_tD892015C67259A7424294FA5093B451BF8AA43CD ___result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ___exception;
	int32_t ___status;
};
struct MemoizeSource_tA63F286F2271661711033949CD911948ABD8CB73  : public RuntimeObject
{
	RuntimeObject* ___source;
	ValueTuple_2_tB5CA42715211C37328A84B7ADB9D11C32D8EB35B ___result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ___exception;
	int32_t ___status;
};
struct MemoizeSource_tCA4B4611DF38506DD4237D55981135B1E0F97199  : public RuntimeObject
{
	RuntimeObject* ___source;
	ValueTuple_2_t52E63268B5601A67D99E98851A669CC2902A98CC ___result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ___exception;
	int32_t ___status;
};
struct MemoizeSource_t74CBB552A0B5909901EBC1BC50442F56F5FE81A6  : public RuntimeObject
{
	RuntimeObject* ___source;
	ValueTuple_2_t31FC349FE1CF0C2BF4E1437F0DF1D14D14A65B79 ___result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ___exception;
	int32_t ___status;
};
struct Predicate_1_tE6CEF83377C879013E736AC152429530BFBE7BD7  : public MulticastDelegate_t
{
};
struct ValueTuple_2_t34894BC390F776FF724A61A2995CD383279EED26 
{
	bool ___Item1;
	ValueTuple_2_tA349CD9D248C0AEA0723711BC6AB72E5651FA416 ___Item2;
};
struct ValueTuple_2_t290BB110EB3014D32465EC182EF13C96648CDAB2 
{
	bool ___Item1;
	ValueTuple_2_tF14F6641CFA2C7B5CFBD0075A310DF96EF5F1554 ___Item2;
};
struct ValueTuple_2_tAB12458160F7EEB98903FBFDF624C4E37DB5B0C4 
{
	bool ___Item1;
	ValueTuple_2_t97A7CEA19B461989D818D347826BF07FB96CA07B ___Item2;
};
struct ValueTuple_2_t935465950D2698EFE54FE47D5D8151B83FCB6E16 
{
	bool ___Item1;
	ValueTuple_2_t9B66A65935FC3A7480FE6E45C87AA4ED045DAE0A ___Item2;
};
struct ValueTuple_2_t6A10DF53546071B4ED19D939589673347CEC5702 
{
	bool ___Item1;
	ValueTuple_2_t5A6143A93BAFD4601C2B326EB00E4193D3D47A31 ___Item2;
};
struct ValueTuple_2_tEB14017B363793A13469D8BB47D121AE3737431A 
{
	bool ___Item1;
	ValueTuple_2_t5D1952D15E56B34C82F917988745983CF8A3126A ___Item2;
};
struct ValueTuple_2_t080CA831DC414BEAA50894A0E00736068C362266 
{
	bool ___Item1;
	ValueTuple_2_tD892015C67259A7424294FA5093B451BF8AA43CD ___Item2;
};
struct ValueTuple_2_tBC8C6CC7124E84BF6A0E396AEFF5DAF55A74BFD0 
{
	bool ___Item1;
	ValueTuple_2_tB5CA42715211C37328A84B7ADB9D11C32D8EB35B ___Item2;
};
struct ValueTuple_2_tED7ED363573DADFC91A594D0018E4E56CEC3D9FA 
{
	bool ___Item1;
	ValueTuple_2_t52E63268B5601A67D99E98851A669CC2902A98CC ___Item2;
};
struct ValueTuple_2_tD2D276F149DD827077A198ACBB06694D4A9CAA4E 
{
	bool ___Item1;
	ValueTuple_2_t31FC349FE1CF0C2BF4E1437F0DF1D14D14A65B79 ___Item2;
};
struct ValueTuple_2_t71BD02D0D3F9D07AC18F3B68DDA577AFF1A3F365 
{
	bool ___Item1;
	ValueTuple_2_t70EDC5426FEF99693A7C12DD82A6786EAD6CADCD ___Item2;
};
struct ValueTuple_2_tD513E55490BCB12535D03A77FDAD2DC66E9760A7 
{
	bool ___Item1;
	ValueTuple_2_t970EA8CA3255293ADB2F5DFF3BDE641544F23600 ___Item2;
};
struct ValueTuple_2_tB862623003F51B20CE4E36B2AE1BCF1A3DB5A5A4 
{
	bool ___Item1;
	ValueTuple_2_t677CB6C9236D92FBD94632B52B25CB4BCACDC95F ___Item2;
};
struct ValueTuple_2_t314E01056BAF4CBC7B7063BA4DC6558EEF140C00 
{
	bool ___Item1;
	ValueTuple_2_t95EAA894D03885CD1F6C28C1D43F74E8351F2EEC ___Item2;
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct ParticleSystemJobData_t68851322676234DD9B1D3925293BA5BE0C1F35DE 
{
	int32_t ___U3CcountU3Ek__BackingField;
	ParticleSystemNativeArray3_t27AB36B1E92F6FEB8470D17603AAF234992101BF ___U3CpositionsU3Ek__BackingField;
	ParticleSystemNativeArray3_t27AB36B1E92F6FEB8470D17603AAF234992101BF ___U3CvelocitiesU3Ek__BackingField;
	ParticleSystemNativeArray3_t27AB36B1E92F6FEB8470D17603AAF234992101BF ___U3CaxisOfRotationsU3Ek__BackingField;
	ParticleSystemNativeArray3_t27AB36B1E92F6FEB8470D17603AAF234992101BF ___U3CrotationsU3Ek__BackingField;
	ParticleSystemNativeArray3_t27AB36B1E92F6FEB8470D17603AAF234992101BF ___U3CrotationalSpeedsU3Ek__BackingField;
	ParticleSystemNativeArray3_t27AB36B1E92F6FEB8470D17603AAF234992101BF ___U3CsizesU3Ek__BackingField;
	NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D ___U3CstartColorsU3Ek__BackingField;
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___U3CaliveTimePercentU3Ek__BackingField;
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___U3CinverseStartLifetimesU3Ek__BackingField;
	NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 ___U3CrandomSeedsU3Ek__BackingField;
	ParticleSystemNativeArray4_tE8A2B0F1BC8D4BF6D264636EC55F30131A44CAE8 ___U3CcustomData1U3Ek__BackingField;
	ParticleSystemNativeArray4_tE8A2B0F1BC8D4BF6D264636EC55F30131A44CAE8 ___U3CcustomData2U3Ek__BackingField;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___U3CmeshIndicesU3Ek__BackingField;
};
struct MemoizeSource_t4677D6DB89E883159DA8FF5849F6DF7F985A4B35  : public RuntimeObject
{
	RuntimeObject* ___source;
	ValueTuple_2_t34894BC390F776FF724A61A2995CD383279EED26 ___result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ___exception;
	int32_t ___status;
};
struct MemoizeSource_tF3E74A3B60F21D568DFAE0A35900C84F9B029D04  : public RuntimeObject
{
	RuntimeObject* ___source;
	ValueTuple_2_t290BB110EB3014D32465EC182EF13C96648CDAB2 ___result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ___exception;
	int32_t ___status;
};
struct MemoizeSource_tD6683A8DE463F34C3148559778641D0559CAF6BD  : public RuntimeObject
{
	RuntimeObject* ___source;
	ValueTuple_2_tAB12458160F7EEB98903FBFDF624C4E37DB5B0C4 ___result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ___exception;
	int32_t ___status;
};
struct MemoizeSource_t27D10A136D46431400AD10521E516314BAD6E704  : public RuntimeObject
{
	RuntimeObject* ___source;
	ValueTuple_2_t935465950D2698EFE54FE47D5D8151B83FCB6E16 ___result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ___exception;
	int32_t ___status;
};
struct MemoizeSource_t1BB5620374CA89421E3294A788BD4B28A99714C7  : public RuntimeObject
{
	RuntimeObject* ___source;
	ValueTuple_2_t6A10DF53546071B4ED19D939589673347CEC5702 ___result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ___exception;
	int32_t ___status;
};
struct MemoizeSource_t015C121B64F928ECEF0D84837D2FA062738D63BB  : public RuntimeObject
{
	RuntimeObject* ___source;
	ValueTuple_2_tEB14017B363793A13469D8BB47D121AE3737431A ___result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ___exception;
	int32_t ___status;
};
struct MemoizeSource_t49C4AB20ECB8647FDDC6F869F071E757E142AF51  : public RuntimeObject
{
	RuntimeObject* ___source;
	ValueTuple_2_t080CA831DC414BEAA50894A0E00736068C362266 ___result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ___exception;
	int32_t ___status;
};
struct MemoizeSource_t8B81C7A1772F56F643374AA53C7ABB9DD7BA00AC  : public RuntimeObject
{
	RuntimeObject* ___source;
	ValueTuple_2_tBC8C6CC7124E84BF6A0E396AEFF5DAF55A74BFD0 ___result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ___exception;
	int32_t ___status;
};
struct MemoizeSource_t8515139432089A796262B47AC0026B9DE7E1F747  : public RuntimeObject
{
	RuntimeObject* ___source;
	ValueTuple_2_tED7ED363573DADFC91A594D0018E4E56CEC3D9FA ___result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ___exception;
	int32_t ___status;
};
struct MemoizeSource_t53DB4D4310BA19FE28DF1A4330092F558BD01F66  : public RuntimeObject
{
	RuntimeObject* ___source;
	ValueTuple_2_tD2D276F149DD827077A198ACBB06694D4A9CAA4E ___result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ___exception;
	int32_t ___status;
};
struct MemoizeSource_tB0CAE3B009C8E612B0C18D814360A44A8A148009  : public RuntimeObject
{
	RuntimeObject* ___source;
	ValueTuple_2_t71BD02D0D3F9D07AC18F3B68DDA577AFF1A3F365 ___result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ___exception;
	int32_t ___status;
};
struct MemoizeSource_tFEFF99B6CA94EC734E787DC51DD166ED1D95FC77  : public RuntimeObject
{
	RuntimeObject* ___source;
	ValueTuple_2_tD513E55490BCB12535D03A77FDAD2DC66E9760A7 ___result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ___exception;
	int32_t ___status;
};
struct MemoizeSource_t1184411DF9A67FC31DCB16211873336ACFD4C4C2  : public RuntimeObject
{
	RuntimeObject* ___source;
	ValueTuple_2_tB862623003F51B20CE4E36B2AE1BCF1A3DB5A5A4 ___result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ___exception;
	int32_t ___status;
};
struct ValueTuple_2_t7EDECF5EF0242AF168C2233A1F58D29823979EB0 
{
	bool ___Item1;
	ValueTuple_2_tD2D276F149DD827077A198ACBB06694D4A9CAA4E ___Item2;
};
struct ValueTuple_2_tF8D7503A349FA562D1850AE4FA8AA15C5EF3A628 
{
	bool ___Item1;
	ValueTuple_2_t71BD02D0D3F9D07AC18F3B68DDA577AFF1A3F365 ___Item2;
};
struct ValueTuple_2_tC8B5C2FAF38BC3CC478737FF4E0493A3B8D6683E 
{
	bool ___Item1;
	ValueTuple_2_tD513E55490BCB12535D03A77FDAD2DC66E9760A7 ___Item2;
};
struct ValueTuple_2_tBF06E5ADE07E63499D2282FB433BF73667B3F0FC 
{
	bool ___Item1;
	ValueTuple_2_tB862623003F51B20CE4E36B2AE1BCF1A3DB5A5A4 ___Item2;
};
struct ValueTuple_2_tA50FEDD4FB3BB459AF66F5E5661B2E933FD609C3 
{
	bool ___Item1;
	ValueTuple_2_t314E01056BAF4CBC7B7063BA4DC6558EEF140C00 ___Item2;
};
struct ValueTuple_2_t39A7962C29603ADA62B58F6D58CFC1A2A84EA6CA 
{
	bool ___Item1;
	ParticleSystemJobData_t68851322676234DD9B1D3925293BA5BE0C1F35DE ___Item2;
};
struct MemoizeSource_t995613DCA5117D80DE5BC09B7D7817C51047C696  : public RuntimeObject
{
	RuntimeObject* ___source;
	ValueTuple_2_t7EDECF5EF0242AF168C2233A1F58D29823979EB0 ___result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ___exception;
	int32_t ___status;
};
struct MemoizeSource_tF1CD7C88E1188F0C65ADB3C27970D1D1D710EDB5  : public RuntimeObject
{
	RuntimeObject* ___source;
	ValueTuple_2_tF8D7503A349FA562D1850AE4FA8AA15C5EF3A628 ___result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ___exception;
	int32_t ___status;
};
struct MemoizeSource_t2ED223A676DCA53FD8FA71E6A088B3FFE496AA22  : public RuntimeObject
{
	RuntimeObject* ___source;
	ValueTuple_2_tC8B5C2FAF38BC3CC478737FF4E0493A3B8D6683E ___result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ___exception;
	int32_t ___status;
};
struct MemoizeSource_t670AFF0D5F06553D5D7657F9571EFAD5E11D7DC4  : public RuntimeObject
{
	RuntimeObject* ___source;
	ValueTuple_2_tBF06E5ADE07E63499D2282FB433BF73667B3F0FC ___result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ___exception;
	int32_t ___status;
};
struct ValueTuple_2_t7516E46F5AFFFB610FC72E9F975A9AF740F6E0DA 
{
	bool ___Item1;
	ValueTuple_2_tBF06E5ADE07E63499D2282FB433BF73667B3F0FC ___Item2;
};
struct ValueTuple_2_t12C85C8C55F6FB3E8A592CA974C972FD46DA8693 
{
	bool ___Item1;
	ValueTuple_2_tA50FEDD4FB3BB459AF66F5E5661B2E933FD609C3 ___Item2;
};
struct ValueTuple_2_t803426F86C2E95A0B0C50AC0487186CFAEF0B132 
{
	bool ___Item1;
	ValueTuple_2_t39A7962C29603ADA62B58F6D58CFC1A2A84EA6CA ___Item2;
};
struct MemoizeSource_tEA26C433E3D23BC798D60E3E928F89BF44D0780A  : public RuntimeObject
{
	RuntimeObject* ___source;
	ValueTuple_2_t7516E46F5AFFFB610FC72E9F975A9AF740F6E0DA ___result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ___exception;
	int32_t ___status;
};
struct MemoizeSource_tEFC28095C5428DF2E08610353C11E5105050BF35  : public RuntimeObject
{
	RuntimeObject* ___source;
	ValueTuple_2_t12C85C8C55F6FB3E8A592CA974C972FD46DA8693 ___result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ___exception;
	int32_t ___status;
};
struct ValueTuple_2_t330479F0733611828EC447EC3AF37E7D3B6C13C6 
{
	bool ___Item1;
	ValueTuple_2_t12C85C8C55F6FB3E8A592CA974C972FD46DA8693 ___Item2;
};
struct ValueTuple_2_t225335D9D6C905A3995F6E2331C0DDB2F5F55F88 
{
	bool ___Item1;
	ValueTuple_2_t803426F86C2E95A0B0C50AC0487186CFAEF0B132 ___Item2;
};
struct MemoizeSource_t9E9462BD8A21248A2EC46FFD9CB9B754E4394D6C  : public RuntimeObject
{
	RuntimeObject* ___source;
	ValueTuple_2_t330479F0733611828EC447EC3AF37E7D3B6C13C6 ___result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ___exception;
	int32_t ___status;
};
struct ValueTuple_2_t9CF6F79C7C82BC044136DFB2797E299E226BB8E0 
{
	bool ___Item1;
	ValueTuple_2_t225335D9D6C905A3995F6E2331C0DDB2F5F55F88 ___Item2;
};
struct MemoizeSource_t4C627C0F0DCFB973BDC6E629C4985F69E4658986  : public RuntimeObject
{
	RuntimeObject* ___source;
	ValueTuple_2_t9CF6F79C7C82BC044136DFB2797E299E226BB8E0 ___result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ___exception;
	int32_t ___status;
};
struct ValueTuple_2_tBB1248EBF0017304413829627AA66F8E210F2836 
{
	bool ___Item1;
	ValueTuple_2_t9CF6F79C7C82BC044136DFB2797E299E226BB8E0 ___Item2;
};
struct MemoizeSource_t4AC1D09959B35856B6BA4446DAC696ED75E020E4  : public RuntimeObject
{
	RuntimeObject* ___source;
	ValueTuple_2_tBB1248EBF0017304413829627AA66F8E210F2836 ___result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ___exception;
	int32_t ___status;
};
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields
{
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* ___defaultComparer;
};
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9_StaticFields
{
	EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* ___defaultComparer;
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___defaultComparer;
};
struct List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565_StaticFields
{
	ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* ___s_emptyArray;
};
struct List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4_StaticFields
{
	ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* ___s_emptyArray;
};
struct List_1_t065A1950A0B1D84B65A5256E8063120B10018641_StaticFields
{
	RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* ___s_emptyArray;
};
struct LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray;
};
struct LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_t99785B1054684FDD1A65104B70B272C02AA00542_StaticFields
{
	bool ___s_trimBuffers;
	ConditionalWeakTable_2_tE473109D1EF9EA4E1AA06539AE5262421E166EFD* ___s_allTlsBuckets;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_t99785B1054684FDD1A65104B70B272C02AA00542_ThreadStaticFields
{
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___t_tlsBuckets;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_t8906D917899793F9523A1B1DFB3008CA600B7F00_StaticFields
{
	bool ___s_trimBuffers;
	ConditionalWeakTable_2_tA0A6618FEA1BDC4E0A5C70A205A73167784823D9* ___s_allTlsBuckets;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_t8906D917899793F9523A1B1DFB3008CA600B7F00_ThreadStaticFields
{
	CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680* ___t_tlsBuckets;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_t5B35E5C672C6B144AA2ACF24F6AB93FC7FDEAECC_StaticFields
{
	bool ___s_trimBuffers;
	ConditionalWeakTable_2_t4FA84C9C03B7929ACDC537F2AB91C3AA9D39B9E6* ___s_allTlsBuckets;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_t5B35E5C672C6B144AA2ACF24F6AB93FC7FDEAECC_ThreadStaticFields
{
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ___t_tlsBuckets;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_tE35D2E7EF078343B5B040BA33BB77E88B1AC8F0F_StaticFields
{
	bool ___s_trimBuffers;
	ConditionalWeakTable_2_tD204B678FB5C57190177AACB4C57D5BDE9ED70E4* ___s_allTlsBuckets;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_tE35D2E7EF078343B5B040BA33BB77E88B1AC8F0F_ThreadStaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F* ___t_tlsBuckets;
};
struct ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_StaticFields
{
	ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* ___Log;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290  : public RuntimeArray
{
	ALIGN_FIELD (8) ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 m_Items[1];

	inline ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name), (void*)NULL);
	}
	inline ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name), (void*)NULL);
	}
};
struct ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C  : public RuntimeArray
{
	ALIGN_FIELD (8) Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E m_Items[1];

	inline Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E value)
	{
		m_Items[index] = value;
	}
};
struct RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8  : public RuntimeArray
{
	ALIGN_FIELD (8) RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E m_Items[1];

	inline RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E value)
	{
		m_Items[index] = value;
	}
};
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA  : public RuntimeArray
{
	ALIGN_FIELD (8) ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* m_Items[1];

	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
struct CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680  : public RuntimeArray
{
	ALIGN_FIELD (8) CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* m_Items[1];

	inline CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E  : public RuntimeArray
{
	ALIGN_FIELD (8) Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* m_Items[1];

	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
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
struct __Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F  : public RuntimeArray
{
	ALIGN_FIELD (8) __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* m_Items[1];

	inline __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct GroupingU5BU5D_tAC4A7AAA50ACD8625A7FD9EC4C4B8F2C47A09ED4  : public RuntimeArray
{
	ALIGN_FIELD (8) Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC* m_Items[1];

	inline Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
struct GroupingU5BU5D_t95ED7FF772EEB2D79F3E7BA1B84F4C2833F0F208  : public RuntimeArray
{
	ALIGN_FIELD (8) Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD* m_Items[1];

	inline Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7  : public RuntimeArray
{
	ALIGN_FIELD (8) RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA m_Items[1];

	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA value)
	{
		m_Items[index] = value;
	}
};
struct GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B  : public RuntimeArray
{
	ALIGN_FIELD (8) Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* m_Items[1];

	inline Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* m_Items[1];

	inline Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* m_Items[1];

	inline Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_mBE568D92B20DA843EC8D4F715D3B49D250D017DA_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 List_1_get_Item_m69BCBAB9625067308DDEAEED5945E4E3B46FA3E1_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_m990D56DF011480F858DF755193A1BFF5E57882A0_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m4BA2391807C1D002F74A8CB67558698C6F351991_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_index, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mC767DD2E08464C2A9BFD3F2AE86A83F85BFCC9A2_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mE400A6352C1B01A9F706C2A4A3FCBA5AC451A12B_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mA97FD9B61331596E4585203CFD321A5A614A089D_gshared_inline (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mECD525A7CE3BC7B0E3FE954F13BC663410201A64_gshared_inline (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_mAFC44D9748F4101BF8F657632E33A3311C99D6BE_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_mD30773E33859C47A5A24FACC643C8D4012C6EB75_gshared (ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* ___0_array, int32_t ___1_index, int32_t ___2_length, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_BinarySearch_m045047154A230EC8448430997A781AC54644A742_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_index, int32_t ___1_count, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___2_item, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m80D06B5A657DB69045A11F9FF589998F0D0473B5_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_mB6476DD7C4A1FE9AF2F141A2C409DA5F89BB3016_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m387E949B4B12752A48C76D51759A66CBDE5207B6_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_mC7006951BE0B3D3688A2D405315CB1B10BE98140_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m95133E04136EBCFB47DF8C6AC9E9BCC8AC90FEBE_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m6A7E41E747D6F2E87573599E9F6F348D5A354688_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, Predicate_1_tE6CEF83377C879013E736AC152429530BFBE7BD7* ___0_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m10C29B9B5B4D26958247572D94A85AD8008FBD3A_gshared_inline (Predicate_1_tE6CEF83377C879013E736AC152429530BFBE7BD7* __this, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mB26899986F1FB5766A6D13F9ED0BD83D6E7EF66C_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_mB4E1E158DAD24B61C4613806D6F074201B0FA54C_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_tE6CEF83377C879013E736AC152429530BFBE7BD7* ___2_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m0E4885731BC5FB5682B2F9AAFE2051895D1E43DE_gshared_inline (Action_1_t2518DEA327D7ACE4C30B14D8AFF5D4CFF5221B6F* __this, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m34968A644217338251F2ACA768630EC8F3B5D9A5_gshared (Enumerator_tC4C15C26A301F0CB28B97DFCFE9198EF13B61D16* __this, List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_mF8787F8470EDB50EC2B2F6D5BAEE866038D93580_gshared (ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* ___0_array, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mC6E0C73D771DB3EBF9929C85A6104EAB450FF7C9_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_index, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m9F304F76856877707E79890515CE09FE5EA6CDDC_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4007A574A4578018527BF9C6C71D599EE37C44D7_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mFA4F902852C0D8A3F42FD4F0ADE71D3A1E64E624_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_m86A0BC1B8395AE11EB9C77295CF870F5B575DBED_gshared (ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mFDC39A435F990EBE553E7396F571BCBA185A7C2D_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_m36664F16D38B9991D799640827A2ED108697EBD4_gshared (ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_m796F7D769836CE1E115461E94C531F07909CFA59_gshared (ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t9B7FBDDC31C2B4C836D05D7AB3126CC41FEA3F95* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_mE523543B7D064F3BD4FBC3315522D1CA64C5B6D7_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E List_1_get_Item_m863A14084251DCC9E1B1B615CF789E4ADDE24E41_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisItem_t590AA2925A38AA7EA48963775F482E9BA8525B4E_mB83D5084D4E7E0D7C58DF0D2BAEBF2CAE0F28679_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m9087EADC873BBA59071598FE7C2A173E3080C61A_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, int32_t ___0_index, Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mAD3C558E9DE455512864C32580168C63670F671B_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m8FBE53849D4FD77B828E469753CA5CAB05728015_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m40316F9C09C447101208FB71D2B4C7EDE087F1D6_gshared_inline (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m22E00E30D2A3314CBE9F16BBF390E271EA8FBCBD_gshared_inline (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m1A74115BD294EABE7937C4C490A0CCB759A1DE93_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisItem_t590AA2925A38AA7EA48963775F482E9BA8525B4E_m75013F9738C10650457039D6E81B89E693761D27_gshared (ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* ___0_array, int32_t ___1_index, int32_t ___2_length, Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_BinarySearch_m9E68A36089C188BBD655E6E537F963FE12D3AC18_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, int32_t ___0_index, int32_t ___1_count, Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E ___2_item, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mD6A759CC6868F6EA2AD5DA34656EBBA4C020474A_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_mF80C87D4683EF1A73192B493144DF81D0EA9D3D7_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m9D7E622FF61060B5621E00E451B220D91539C748_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m91ED772345185F703C833D6724C71C46B65B0649_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mBA06C269D25E7BE90965DCF109DB6062DEDA523C_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_mF2FC62698E1FF5A9F1C8A74480F1BB9613E1B339_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, Predicate_1_t4217DDE556AA2DD5A06797A7B6ADC3C6E795D010* ___0_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m8CACEA4E17FB9648171CCB77D5CA3EDF7248F332_gshared_inline (Predicate_1_t4217DDE556AA2DD5A06797A7B6ADC3C6E795D010* __this, Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m3822E50E6CFA43F285BC3A2C44C55C79AAE6410D_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_mFF62E38A37474AF6586191B1DF5CBDF9D7581CCE_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t4217DDE556AA2DD5A06797A7B6ADC3C6E795D010* ___2_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m530925ADE5205080923A6AF7ECAEC6BF0F05602C_gshared_inline (Action_1_tABD04F977BAE1165FCC3D57AAB3F5C16F3E97674* __this, Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m0666389F92EFD1388B5CE9F16A65D85E3BDBC5CB_gshared (Enumerator_t4EB0A412E114F46D610EDBC4C0AEE8A523FB95E5* __this, List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisItem_t590AA2925A38AA7EA48963775F482E9BA8525B4E_m0C78909B5D6CDDC2DE333F944D4ED9811536D895_gshared (ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* ___0_array, Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mB3BBB9B90C3A0C8A7B4B5089D4A70E291643EE41_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, int32_t ___0_index, Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m03F8C2C0BB44ACBDA56835FE66494E7A2C885024_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m3A77D6A2E2444ACE03322869783DFB0850E01437_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m16173FC86AC27F3FCA48D99809384360145C5FC7_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisItem_t590AA2925A38AA7EA48963775F482E9BA8525B4E_mA9C906F13041DFD9F8C2F873824B7EECD1AB6BCE_gshared (ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mD4853E0DEDC76E60F857E6AE62181E82F1DA913A_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisItem_t590AA2925A38AA7EA48963775F482E9BA8525B4E_m54A2600327623CE0DA1FD8833B7D5F6EF807CA12_gshared (ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_mC2C11EA20C1CAEA09CDE1AB0930313672F20F75B_gshared (ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tAFEE7C13ACABD76E510EEF1E65B8A7D2644A427D* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m2075AE32C628E6DB4F52FE0697F5354713D7843C_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E List_1_get_Item_mA457677CED2CC7B20C2B6CE6495CD4CFB2DCAF29_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E_m7A699705EC9A9F5C847119D958A14716EF7AFBE2_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m1AD529A27876EB0D02729B6BDCD19A90D1968F2A_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, int32_t ___0_index, RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m07ACD6768A0967EF7A094F9E52196EEC6093937A_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m8D142CE70507F180C33C9BF18D837CD8281ECEB1_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mC950522AE5F5CFBEEF0E76878C42C6A16B38362D_gshared_inline (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m401900762AD72612336502EA7DF602A79F433BCD_gshared_inline (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m3B9047BA1CAE8E8BD34B2544AC652F6D73BDB053_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_BinarySearch_TisRecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E_m6CBB3D0BBB52991B9243E809EDE29ADA9248D4DC_gshared (RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* ___0_array, int32_t ___1_index, int32_t ___2_length, RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_BinarySearch_mEF77A9EA47A7C80BAEA27FE8E8084F5DFDF17C3C_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, int32_t ___0_index, int32_t ___1_count, RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E ___2_item, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m10D493DCE0F2E6E04C595EDC89F3F61448F93220_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m3F3693EDC370A919A9342D84A2E059762831ABCA_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mB1109C0182FCEE34CCD7C745B2BAE1CF46984CA9_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m35E5EB67CE1D21C76FD8637A74F3DA427C662139_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mD77B216D8CC55865F1091896E7E61F3EBACE07D1_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m40550873FEE2B0E9C2AF5D0A5CA4715705646763_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, Predicate_1_t8A5AF3450E7B0054E5339AB18FD29FA24A371BC1* ___0_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m3546977A385098FD45CF8006D8613DAE78078B15_gshared_inline (Predicate_1_t8A5AF3450E7B0054E5339AB18FD29FA24A371BC1* __this, RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m52181F409642C097D83A405774F65B131CD05C13_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_mD080AA5F7AB6308C0B24313611AEC16524933980_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t8A5AF3450E7B0054E5339AB18FD29FA24A371BC1* ___2_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m428A1EAD709638EC1BF95DEFA4A3FB88ED859E65_gshared_inline (Action_1_tA19957CC720A8A8732F921D4AD3702951E7762AF* __this, RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mF9FCC24D6620741EDA6B46645CAC209D2452023C_gshared (Enumerator_t6FC3A8CABABF859880C2F601A072BC8D9C8BE85C* __this, List_1_t065A1950A0B1D84B65A5256E8063120B10018641* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisRecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E_m4AFBCFD93214E2980557CDEB2DDF459699C44972_gshared (RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* ___0_array, RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m52037E7189A3411B290F6CB3ADC3705C2A7C6983_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, int32_t ___0_index, RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mFE8100E83AFA5D74BDD36F5687603D360593BF86_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_mF118596EBA1899FB70FF4D4301E6837B0F8C41FE_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mD53B455C889053443081064BD6849C4A23DD15BB_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisRecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E_m9CE31A9F4B01921EB8E468A87C95E1ECC3D1DE32_gshared (RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mFA4A844D97DC0D603E91FCA063D86803ED367463_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisRecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E_m74F44FCE4AEF33BBA5FCF7D62723A58080B3402B_gshared (RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_1_Sort_m0E90F82CDAE16857D877A27E52462D8C7452F45D_gshared (RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t967BE3E9FD792792C26A54735ACAB0DED8864B56* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__12__ctor_m7B7E2CD0077B4AD9B402ECF55EFF717232D1C83F_gshared (U3CGetEnumeratorU3Ed__12_tFF0F421A4C414F2759BB0D29384B9869BAC33801* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Lookup_2_GetEnumerator_m0C5964AAD1698653DFC1FF114CB550A59DD50D21_gshared (Lookup_2_tCC322E34F83E9E70D851F9A53D156847B70F1EF2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lookup_2_InternalGetHashCode_mA51A577966E252F7A2B87CF333B35C15E25D3127_gshared (Lookup_2_tCC322E34F83E9E70D851F9A53D156847B70F1EF2* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lookup_2_Resize_m4A01E48E854FC3977BEA4971EA548EDD6D07BB2D_gshared (Lookup_2_tCC322E34F83E9E70D851F9A53D156847B70F1EF2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grouping__ctor_m219BB8C06F6F99DB551EB73F19E102A83B63FE32_gshared (Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__12__ctor_m4FFE79046C27929B887B714258C16ACADBF5E789_gshared (U3CGetEnumeratorU3Ed__12_t5DC4E73C16245675953476348C604192339136AB* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Lookup_2_GetEnumerator_m3F6CC8D867C0856A5B4E8AB238DA970B6D840624_gshared (Lookup_2_t0C8EADD42CF5878D9378C4B8B0D4EDB8986DF0C8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lookup_2_InternalGetHashCode_m8AB0DFEBEC7B1ECEC62A5CDF44F71DBC7F35D65A_gshared (Lookup_2_t0C8EADD42CF5878D9378C4B8B0D4EDB8986DF0C8* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lookup_2_Resize_m2B9ED6802E963422DCF1BEE4970E878FFEBED033_gshared (Lookup_2_t0C8EADD42CF5878D9378C4B8B0D4EDB8986DF0C8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grouping__ctor_m87D362CCA5A8717B18B0D084549CE41FF26F5A2D_gshared (Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultComparer_1__ctor_m1FB334BED8F2ED543F453D87C912BDA6611F368E_gshared (DefaultComparer_1_tF1F3B8981298E50FBC17BDC8CA0B4CFE867AD644* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2__ctor_mB6B362C12FBFC3BDA4766411FDC767993214AFA2_gshared (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2_Clear_m7229E17DB8B64A5E367126DD076AA0577B2ED5A7_gshared (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* LowLevelDictionary_2_Find_m9E8AF9DE397CFCC424FF17C0125FACDB261E3AEB_gshared (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* LowLevelDictionary_2_UncheckedAdd_m4B36B6453ADD7712B323A995014660300EDFD5BB_gshared (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelDictionary_2_GetBucket_m31C0AA9C3A13F586A702DFDE7508A606E20B4A9B_gshared (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, int32_t ___0_key, int32_t ___1_numBuckets, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entry__ctor_m1523ABCDEBE31BA50D6801DB569FB6C6DA0EAB65_gshared (Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2_ExpandBuckets_m033D9FFFD113915A8BD824AC730C492F01631A9A_gshared (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1__ctor_mC9E5B6B4FA524A581AE17EB5DE22ADBDDD12F0E7_gshared (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1__ctor_mEA732C8D15FD4B514B237270C203F99613A78085_gshared (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mE48807999815FCA9A84BDDE46C5E1EC8F29B91DF_gshared (Enumerator_tEDEAA5F8FFBCB1F2EE5A6E473ED9F5A86691DE05* __this, LowLevelListWithIList_1_t424B84BB083921C00880052D4B49074AF66B72FC* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m6C59AA282C548B36E982B84CACC3A8E4AA904775_gshared (Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0* __this, LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_EnsureCapacity_m15C5DAD66F3D12BFD786DBE4994ED0A2A9849A0B_gshared (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_set_Capacity_mBC06E150C30A932FE95EF6D4A80217BC6E5257DC_gshared (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_InsertRange_m41D4839802C22AA8A00BB419B348DE91BCFF52A0_gshared (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelList_1_IndexOf_m1E3798AD4DBE5EFEFA2AA30F9AEB1DA864237839_gshared (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisRuntimeObject_m4C0C698B1D627E6B3C3BE6DDA512E8E276DC6F73_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, RuntimeObject* ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_Insert_mBD4CC70F7D0997C1FDDA0699DB1417BEC62D49D4_gshared (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_RemoveAt_m14CF4D511C0CCCECF58915F0156E9C13A3046F13_gshared (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m6AC449189DCEE89A4FA2A2B724DE296A1DFB6A9B_gshared_inline (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F MemoizeSource_GetResult_m5C256950C302EA4D7578377664BA865C244CA70B_gshared (MemoizeSource_t6EF94D02CF852AE92900476CE5D6E50A84FC1F2E* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tD8FC7D951E88A4E6D75952ABBF6C76990A9E9AAD MemoizeSource_GetResult_mC00EB8CD806A94EE947C24A74C9F3DAE1517DDEF_gshared (MemoizeSource_t0EB58AE3AE2F8E7FBFAD25BCCB33BC7B36243A38* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tDEC0B1538702EF393ED3785AC477A5349EB4FE40 MemoizeSource_GetResult_mA7DEF35F18C93252E76BB3BD5B850C5D3C29447D_gshared (MemoizeSource_t0F002271CE438A8AE16EAB8DA149E32DE7703630* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tA349CD9D248C0AEA0723711BC6AB72E5651FA416 MemoizeSource_GetResult_mCF24905F795A2AC69505D0720888490EF988F2B8_gshared (MemoizeSource_t25D181668E617BFB26C25F2FCC7C5170A9D06710* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t34894BC390F776FF724A61A2995CD383279EED26 MemoizeSource_GetResult_m59E8FB161BAA107AF330E77F630CB1927479CD78_gshared (MemoizeSource_t4677D6DB89E883159DA8FF5849F6DF7F985A4B35* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t7516E46F5AFFFB610FC72E9F975A9AF740F6E0DA MemoizeSource_GetResult_m7AA0344EBC93DE0AEDD50B0CAFD6B049B76ECB3E_gshared (MemoizeSource_tEA26C433E3D23BC798D60E3E928F89BF44D0780A* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t7EDECF5EF0242AF168C2233A1F58D29823979EB0 MemoizeSource_GetResult_m8B13CCFF8786B7290A7D183768B4E62DB31443B2_gshared (MemoizeSource_t995613DCA5117D80DE5BC09B7D7817C51047C696* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t290BB110EB3014D32465EC182EF13C96648CDAB2 MemoizeSource_GetResult_m6570653AF8890D84C999E3CA6E84F261CF678A03_gshared (MemoizeSource_tF3E74A3B60F21D568DFAE0A35900C84F9B029D04* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tAB12458160F7EEB98903FBFDF624C4E37DB5B0C4 MemoizeSource_GetResult_mE123C67A43DD11F7D132525F986EF848680ACA92_gshared (MemoizeSource_tD6683A8DE463F34C3148559778641D0559CAF6BD* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t935465950D2698EFE54FE47D5D8151B83FCB6E16 MemoizeSource_GetResult_m847058F4209E1B335E485C062DB02C3CAC0B0F75_gshared (MemoizeSource_t27D10A136D46431400AD10521E516314BAD6E704* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t6A10DF53546071B4ED19D939589673347CEC5702 MemoizeSource_GetResult_m1ECEEA3E0C7A64CA4AA4188B1206CB68A55886C0_gshared (MemoizeSource_t1BB5620374CA89421E3294A788BD4B28A99714C7* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tBB1248EBF0017304413829627AA66F8E210F2836 MemoizeSource_GetResult_mF37B3DAC77966747BC84059E92AC0AEB7FFCA79C_gshared (MemoizeSource_t4AC1D09959B35856B6BA4446DAC696ED75E020E4* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t330479F0733611828EC447EC3AF37E7D3B6C13C6 MemoizeSource_GetResult_m7DC9B90CE5CC9BA202197E359DB90B35D33AF4C7_gshared (MemoizeSource_t9E9462BD8A21248A2EC46FFD9CB9B754E4394D6C* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tEB14017B363793A13469D8BB47D121AE3737431A MemoizeSource_GetResult_m9D905BC88D8B76AB7CAFB5646F80A28E12502DCA_gshared (MemoizeSource_t015C121B64F928ECEF0D84837D2FA062738D63BB* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tF8D7503A349FA562D1850AE4FA8AA15C5EF3A628 MemoizeSource_GetResult_m78C355348BC346EF6F9C476C0F3E3D8CE95F577B_gshared (MemoizeSource_tF1CD7C88E1188F0C65ADB3C27970D1D1D710EDB5* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tC8B5C2FAF38BC3CC478737FF4E0493A3B8D6683E MemoizeSource_GetResult_m8F8EB9328FDABDA09DC1D21F513287F80D4F1B87_gshared (MemoizeSource_t2ED223A676DCA53FD8FA71E6A088B3FFE496AA22* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t080CA831DC414BEAA50894A0E00736068C362266 MemoizeSource_GetResult_m99E466CF252DE280470F633ACC6181C6D5E0F704_gshared (MemoizeSource_t49C4AB20ECB8647FDDC6F869F071E757E142AF51* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tBC8C6CC7124E84BF6A0E396AEFF5DAF55A74BFD0 MemoizeSource_GetResult_m5BC416C15BBC1195A06505CD10078CEA9A11D492_gshared (MemoizeSource_t8B81C7A1772F56F643374AA53C7ABB9DD7BA00AC* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tED7ED363573DADFC91A594D0018E4E56CEC3D9FA MemoizeSource_GetResult_mDCBC19B12A77205DC67BE96D045FDF74F6914158_gshared (MemoizeSource_t8515139432089A796262B47AC0026B9DE7E1F747* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tBF06E5ADE07E63499D2282FB433BF73667B3F0FC MemoizeSource_GetResult_m6ACE9C181FE76B3B6016B2E483D450AF15AC78AB_gshared (MemoizeSource_t670AFF0D5F06553D5D7657F9571EFAD5E11D7DC4* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tD2D276F149DD827077A198ACBB06694D4A9CAA4E MemoizeSource_GetResult_m29D885C746705BCA7E36BEDAC813897296A6E5D6_gshared (MemoizeSource_t53DB4D4310BA19FE28DF1A4330092F558BD01F66* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tF14F6641CFA2C7B5CFBD0075A310DF96EF5F1554 MemoizeSource_GetResult_mCE1D7658830CE92AD5B88FA514F829C636466FE1_gshared (MemoizeSource_t21EF441B70AC2C2BA32B8DA5B160242EB7453DBF* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t97A7CEA19B461989D818D347826BF07FB96CA07B MemoizeSource_GetResult_m351B5901EF7FC71C66AF3D46D754A367428ED775_gshared (MemoizeSource_tBE0C4BF3BC7E24BACB262D0B2228DA8399895051* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t9B66A65935FC3A7480FE6E45C87AA4ED045DAE0A MemoizeSource_GetResult_m3D2733A0AD7633B533536DC8BE1258E683E61632_gshared (MemoizeSource_t78D318D9F5BA39C803E43096B403B20EF6F37CE9* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t5A6143A93BAFD4601C2B326EB00E4193D3D47A31 MemoizeSource_GetResult_m04E7B66328AEE9E6C31FB2A9DA471B506D5CCB7F_gshared (MemoizeSource_tF2CD325E9978D8B7905DB1D1D10BC6EF0A4B6D44* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t9CF6F79C7C82BC044136DFB2797E299E226BB8E0 MemoizeSource_GetResult_mA05306101EDE54F9E9EE783E6CC53FD855D3819D_gshared (MemoizeSource_t4C627C0F0DCFB973BDC6E629C4985F69E4658986* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t12C85C8C55F6FB3E8A592CA974C972FD46DA8693 MemoizeSource_GetResult_m685E5A6E142DF7E1584F9F4AD4D414F3A4B75CB4_gshared (MemoizeSource_tEFC28095C5428DF2E08610353C11E5105050BF35* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t5D1952D15E56B34C82F917988745983CF8A3126A MemoizeSource_GetResult_mC70906C573C4F5CD86642349E73B8FB2483DAC83_gshared (MemoizeSource_tFBA14165BCBCFC59D01EC962C36F4F8166B9046A* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t71BD02D0D3F9D07AC18F3B68DDA577AFF1A3F365 MemoizeSource_GetResult_m760F9930CE7F2AF258DA0E6E0A039E9BED18A134_gshared (MemoizeSource_tB0CAE3B009C8E612B0C18D814360A44A8A148009* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tD513E55490BCB12535D03A77FDAD2DC66E9760A7 MemoizeSource_GetResult_mFF2E5CB42FEDA52A68A5DBF88899B5D6CBE979B8_gshared (MemoizeSource_tFEFF99B6CA94EC734E787DC51DD166ED1D95FC77* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tD892015C67259A7424294FA5093B451BF8AA43CD MemoizeSource_GetResult_mC85661224867BB90C79063481862FC1BE3C77EC0_gshared (MemoizeSource_tA496F9380C7AF07E3422F84834B64735B26DC573* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tB5CA42715211C37328A84B7ADB9D11C32D8EB35B MemoizeSource_GetResult_m19A9064965128E829BB32396781D5645DAB25D67_gshared (MemoizeSource_tA63F286F2271661711033949CD911948ABD8CB73* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t52E63268B5601A67D99E98851A669CC2902A98CC MemoizeSource_GetResult_m20FD6E1839F74F2D896656573B54FCE86DD18F0B_gshared (MemoizeSource_tCA4B4611DF38506DD4237D55981135B1E0F97199* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tB862623003F51B20CE4E36B2AE1BCF1A3DB5A5A4 MemoizeSource_GetResult_m2BE28BA9B898C96C23992A6AA791000201B51E27_gshared (MemoizeSource_t1184411DF9A67FC31DCB16211873336ACFD4C4C2* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t31FC349FE1CF0C2BF4E1437F0DF1D14D14A65B79 MemoizeSource_GetResult_m3FA28197AE01525D47CBBF5C6E884E00A0AB6E66_gshared (MemoizeSource_t74CBB552A0B5909901EBC1BC50442F56F5FE81A6* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tB6C5EB8B1097DA5E36DC437A3AB809D0EB919B4D MemoizeSource_GetResult_m72A7F9DD46F55F02B4D798C0C84AF8930B551D89_gshared (MemoizeSource_tFB4BE9B6B9177E2D747FA257DFFCB7ECD4059D35* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E_gshared (const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F (int32_t ___0_argument, int32_t ___1_resource, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___0_argument, const RuntimeMethod* method) ;
inline void List_1_AddEnumerable_mBE568D92B20DA843EC8D4F715D3B49D250D017DA (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565*, RuntimeObject*, const RuntimeMethod*))List_1_AddEnumerable_mBE568D92B20DA843EC8D4F715D3B49D250D017DA_gshared)(__this, ___0_enumerable, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D (const RuntimeMethod* method) ;
inline ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 List_1_get_Item_m69BCBAB9625067308DDEAEED5945E4E3B46FA3E1 (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 (*) (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565*, int32_t, const RuntimeMethod*))List_1_get_Item_m69BCBAB9625067308DDEAEED5945E4E3B46FA3E1_gshared)(__this, ___0_index, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_m990D56DF011480F858DF755193A1BFF5E57882A0 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_m990D56DF011480F858DF755193A1BFF5E57882A0_gshared)(___0_value, ___1_argName, method);
}
inline void List_1_set_Item_m4BA2391807C1D002F74A8CB67558698C6F351991 (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_index, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565*, int32_t, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957, const RuntimeMethod*))List_1_set_Item_m4BA2391807C1D002F74A8CB67558698C6F351991_gshared)(__this, ___0_index, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910 (RuntimeObject* ___0_value, Type_t* ___1_targetType, const RuntimeMethod* method) ;
inline void List_1_AddWithResize_mC767DD2E08464C2A9BFD3F2AE86A83F85BFCC9A2 (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565*, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957, const RuntimeMethod*))List_1_AddWithResize_mC767DD2E08464C2A9BFD3F2AE86A83F85BFCC9A2_gshared)(__this, ___0_item, method);
}
inline void List_1_EnsureCapacity_mE400A6352C1B01A9F706C2A4A3FCBA5AC451A12B (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_min, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565*, int32_t, const RuntimeMethod*))List_1_EnsureCapacity_mE400A6352C1B01A9F706C2A4A3FCBA5AC451A12B_gshared)(__this, ___0_min, method);
}
inline void List_1_Add_mA97FD9B61331596E4585203CFD321A5A614A089D_inline (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565*, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957, const RuntimeMethod*))List_1_Add_mA97FD9B61331596E4585203CFD321A5A614A089D_gshared_inline)(__this, ___0_item, method);
}
inline int32_t List_1_get_Count_mECD525A7CE3BC7B0E3FE954F13BC663410201A64_inline (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565*, const RuntimeMethod*))List_1_get_Count_mECD525A7CE3BC7B0E3FE954F13BC663410201A64_gshared_inline)(__this, method);
}
inline void List_1_InsertRange_mAFC44D9748F4101BF8F657632E33A3311C99D6BE (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_InsertRange_mAFC44D9748F4101BF8F657632E33A3311C99D6BE_gshared)(__this, ___0_index, ___1_collection, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA (int32_t ___0_resource, const RuntimeMethod* method) ;
inline int32_t Array_BinarySearch_TisColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_mD30773E33859C47A5A24FACC643C8D4012C6EB75 (ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* ___0_array, int32_t ___1_index, int32_t ___2_length, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290*, int32_t, int32_t, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957, RuntimeObject*, const RuntimeMethod*))Array_BinarySearch_TisColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_mD30773E33859C47A5A24FACC643C8D4012C6EB75_gshared)(___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline int32_t List_1_BinarySearch_m045047154A230EC8448430997A781AC54644A742 (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_index, int32_t ___1_count, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___2_item, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565*, int32_t, int32_t, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957, RuntimeObject*, const RuntimeMethod*))List_1_BinarySearch_m045047154A230EC8448430997A781AC54644A742_gshared)(__this, ___0_index, ___1_count, ___2_item, ___3_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
inline int32_t List_1_IndexOf_m80D06B5A657DB69045A11F9FF589998F0D0473B5 (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565*, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957, const RuntimeMethod*))List_1_IndexOf_m80D06B5A657DB69045A11F9FF589998F0D0473B5_gshared)(__this, ___0_item, method);
}
inline bool List_1_IsCompatibleObject_mB6476DD7C4A1FE9AF2F141A2C409DA5F89BB3016 (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))List_1_IsCompatibleObject_mB6476DD7C4A1FE9AF2F141A2C409DA5F89BB3016_gshared)(___0_value, method);
}
inline bool List_1_Contains_m387E949B4B12752A48C76D51759A66CBDE5207B6 (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565*, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957, const RuntimeMethod*))List_1_Contains_m387E949B4B12752A48C76D51759A66CBDE5207B6_gshared)(__this, ___0_item, method);
}
inline void List_1_CopyTo_mC7006951BE0B3D3688A2D405315CB1B10BE98140 (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565*, ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290*, int32_t, const RuntimeMethod*))List_1_CopyTo_mC7006951BE0B3D3688A2D405315CB1B10BE98140_gshared)(__this, ___0_array, ___1_arrayIndex, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58 (const RuntimeMethod* method) ;
inline void List_1_set_Capacity_m95133E04136EBCFB47DF8C6AC9E9BCC8AC90FEBE (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565*, int32_t, const RuntimeMethod*))List_1_set_Capacity_m95133E04136EBCFB47DF8C6AC9E9BCC8AC90FEBE_gshared)(__this, ___0_value, method);
}
inline int32_t List_1_FindIndex_m6A7E41E747D6F2E87573599E9F6F348D5A354688 (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, Predicate_1_tE6CEF83377C879013E736AC152429530BFBE7BD7* ___0_match, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565*, Predicate_1_tE6CEF83377C879013E736AC152429530BFBE7BD7*, const RuntimeMethod*))List_1_FindIndex_m6A7E41E747D6F2E87573599E9F6F348D5A354688_gshared)(__this, ___0_match, method);
}
inline bool Predicate_1_Invoke_m10C29B9B5B4D26958247572D94A85AD8008FBD3A_inline (Predicate_1_tE6CEF83377C879013E736AC152429530BFBE7BD7* __this, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_tE6CEF83377C879013E736AC152429530BFBE7BD7*, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957, const RuntimeMethod*))Predicate_1_Invoke_m10C29B9B5B4D26958247572D94A85AD8008FBD3A_gshared_inline)(__this, ___0_obj, method);
}
inline void List_1__ctor_mB26899986F1FB5766A6D13F9ED0BD83D6E7EF66C (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565*, const RuntimeMethod*))List_1__ctor_mB26899986F1FB5766A6D13F9ED0BD83D6E7EF66C_gshared)(__this, method);
}
inline int32_t List_1_FindIndex_mB4E1E158DAD24B61C4613806D6F074201B0FA54C (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_tE6CEF83377C879013E736AC152429530BFBE7BD7* ___2_match, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565*, int32_t, int32_t, Predicate_1_tE6CEF83377C879013E736AC152429530BFBE7BD7*, const RuntimeMethod*))List_1_FindIndex_mB4E1E158DAD24B61C4613806D6F074201B0FA54C_gshared)(__this, ___0_startIndex, ___1_count, ___2_match, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index_m94BADCC6D7EBBD12BE8323775FFB43AF01499B0F (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count_m6C4A7F645BDD8EB62B50CB76E84416D94620DCC7 (const RuntimeMethod* method) ;
inline void Action_1_Invoke_m0E4885731BC5FB5682B2F9AAFE2051895D1E43DE_inline (Action_1_t2518DEA327D7ACE4C30B14D8AFF5D4CFF5221B6F* __this, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2518DEA327D7ACE4C30B14D8AFF5D4CFF5221B6F*, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957, const RuntimeMethod*))Action_1_Invoke_m0E4885731BC5FB5682B2F9AAFE2051895D1E43DE_gshared_inline)(__this, ___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion_m5331E2E0EC0E36843D53F439C2529530595ACE9F (const RuntimeMethod* method) ;
inline void Enumerator__ctor_m34968A644217338251F2ACA768630EC8F3B5D9A5 (Enumerator_tC4C15C26A301F0CB28B97DFCFE9198EF13B61D16* __this, List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC4C15C26A301F0CB28B97DFCFE9198EF13B61D16*, List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565*, const RuntimeMethod*))Enumerator__ctor_m34968A644217338251F2ACA768630EC8F3B5D9A5_gshared)(__this, ___0_list, method);
}
inline int32_t Array_IndexOf_TisColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_mF8787F8470EDB50EC2B2F6D5BAEE866038D93580 (ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* ___0_array, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290*, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_mF8787F8470EDB50EC2B2F6D5BAEE866038D93580_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void List_1_Insert_mC6E0C73D771DB3EBF9929C85A6104EAB450FF7C9 (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_index, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___1_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565*, int32_t, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957, const RuntimeMethod*))List_1_Insert_mC6E0C73D771DB3EBF9929C85A6104EAB450FF7C9_gshared)(__this, ___0_index, ___1_item, method);
}
inline void List_1_RemoveAt_m9F304F76856877707E79890515CE09FE5EA6CDDC (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m9F304F76856877707E79890515CE09FE5EA6CDDC_gshared)(__this, ___0_index, method);
}
inline bool List_1_Remove_m4007A574A4578018527BF9C6C71D599EE37C44D7 (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565*, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957, const RuntimeMethod*))List_1_Remove_m4007A574A4578018527BF9C6C71D599EE37C44D7_gshared)(__this, ___0_item, method);
}
inline void List_1_Reverse_mFA4F902852C0D8A3F42FD4F0ADE71D3A1E64E624 (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565*, int32_t, int32_t, const RuntimeMethod*))List_1_Reverse_mFA4F902852C0D8A3F42FD4F0ADE71D3A1E64E624_gshared)(__this, ___0_index, ___1_count, method);
}
inline void Array_Reverse_TisColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_m86A0BC1B8395AE11EB9C77295CF870F5B575DBED (ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290*, int32_t, int32_t, const RuntimeMethod*))Array_Reverse_TisColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_m86A0BC1B8395AE11EB9C77295CF870F5B575DBED_gshared)(___0_array, ___1_index, ___2_length, method);
}
inline void List_1_Sort_mFDC39A435F990EBE553E7396F571BCBA185A7C2D (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_Sort_mFDC39A435F990EBE553E7396F571BCBA185A7C2D_gshared)(__this, ___0_index, ___1_count, ___2_comparer, method);
}
inline void Array_Sort_TisColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_m36664F16D38B9991D799640827A2ED108697EBD4 (ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Array_Sort_TisColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_m36664F16D38B9991D799640827A2ED108697EBD4_gshared)(___0_array, ___1_index, ___2_length, ___3_comparer, method);
}
inline void ArraySortHelper_1_Sort_m796F7D769836CE1E115461E94C531F07909CFA59 (ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t9B7FBDDC31C2B4C836D05D7AB3126CC41FEA3F95* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290*, int32_t, int32_t, Comparison_1_t9B7FBDDC31C2B4C836D05D7AB3126CC41FEA3F95*, const RuntimeMethod*))ArraySortHelper_1_Sort_m796F7D769836CE1E115461E94C531F07909CFA59_gshared)(___0_keys, ___1_index, ___2_length, ___3_comparer, method);
}
inline void List_1_AddEnumerable_mE523543B7D064F3BD4FBC3315522D1CA64C5B6D7 (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4*, RuntimeObject*, const RuntimeMethod*))List_1_AddEnumerable_mE523543B7D064F3BD4FBC3315522D1CA64C5B6D7_gshared)(__this, ___0_enumerable, method);
}
inline Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E List_1_get_Item_m863A14084251DCC9E1B1B615CF789E4ADDE24E41 (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E (*) (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4*, int32_t, const RuntimeMethod*))List_1_get_Item_m863A14084251DCC9E1B1B615CF789E4ADDE24E41_gshared)(__this, ___0_index, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisItem_t590AA2925A38AA7EA48963775F482E9BA8525B4E_mB83D5084D4E7E0D7C58DF0D2BAEBF2CAE0F28679 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisItem_t590AA2925A38AA7EA48963775F482E9BA8525B4E_mB83D5084D4E7E0D7C58DF0D2BAEBF2CAE0F28679_gshared)(___0_value, ___1_argName, method);
}
inline void List_1_set_Item_m9087EADC873BBA59071598FE7C2A173E3080C61A (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, int32_t ___0_index, Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4*, int32_t, Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E, const RuntimeMethod*))List_1_set_Item_m9087EADC873BBA59071598FE7C2A173E3080C61A_gshared)(__this, ___0_index, ___1_value, method);
}
inline void List_1_AddWithResize_mAD3C558E9DE455512864C32580168C63670F671B (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4*, Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E, const RuntimeMethod*))List_1_AddWithResize_mAD3C558E9DE455512864C32580168C63670F671B_gshared)(__this, ___0_item, method);
}
inline void List_1_EnsureCapacity_m8FBE53849D4FD77B828E469753CA5CAB05728015 (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, int32_t ___0_min, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4*, int32_t, const RuntimeMethod*))List_1_EnsureCapacity_m8FBE53849D4FD77B828E469753CA5CAB05728015_gshared)(__this, ___0_min, method);
}
inline void List_1_Add_m40316F9C09C447101208FB71D2B4C7EDE087F1D6_inline (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4*, Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E, const RuntimeMethod*))List_1_Add_m40316F9C09C447101208FB71D2B4C7EDE087F1D6_gshared_inline)(__this, ___0_item, method);
}
inline int32_t List_1_get_Count_m22E00E30D2A3314CBE9F16BBF390E271EA8FBCBD_inline (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4*, const RuntimeMethod*))List_1_get_Count_m22E00E30D2A3314CBE9F16BBF390E271EA8FBCBD_gshared_inline)(__this, method);
}
inline void List_1_InsertRange_m1A74115BD294EABE7937C4C490A0CCB759A1DE93 (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_InsertRange_m1A74115BD294EABE7937C4C490A0CCB759A1DE93_gshared)(__this, ___0_index, ___1_collection, method);
}
inline int32_t Array_BinarySearch_TisItem_t590AA2925A38AA7EA48963775F482E9BA8525B4E_m75013F9738C10650457039D6E81B89E693761D27 (ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* ___0_array, int32_t ___1_index, int32_t ___2_length, Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C*, int32_t, int32_t, Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E, RuntimeObject*, const RuntimeMethod*))Array_BinarySearch_TisItem_t590AA2925A38AA7EA48963775F482E9BA8525B4E_m75013F9738C10650457039D6E81B89E693761D27_gshared)(___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline int32_t List_1_BinarySearch_m9E68A36089C188BBD655E6E537F963FE12D3AC18 (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, int32_t ___0_index, int32_t ___1_count, Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E ___2_item, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4*, int32_t, int32_t, Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E, RuntimeObject*, const RuntimeMethod*))List_1_BinarySearch_m9E68A36089C188BBD655E6E537F963FE12D3AC18_gshared)(__this, ___0_index, ___1_count, ___2_item, ___3_comparer, method);
}
inline int32_t List_1_IndexOf_mD6A759CC6868F6EA2AD5DA34656EBBA4C020474A (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4*, Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E, const RuntimeMethod*))List_1_IndexOf_mD6A759CC6868F6EA2AD5DA34656EBBA4C020474A_gshared)(__this, ___0_item, method);
}
inline bool List_1_IsCompatibleObject_mF80C87D4683EF1A73192B493144DF81D0EA9D3D7 (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))List_1_IsCompatibleObject_mF80C87D4683EF1A73192B493144DF81D0EA9D3D7_gshared)(___0_value, method);
}
inline bool List_1_Contains_m9D7E622FF61060B5621E00E451B220D91539C748 (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4*, Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E, const RuntimeMethod*))List_1_Contains_m9D7E622FF61060B5621E00E451B220D91539C748_gshared)(__this, ___0_item, method);
}
inline void List_1_CopyTo_m91ED772345185F703C833D6724C71C46B65B0649 (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4*, ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C*, int32_t, const RuntimeMethod*))List_1_CopyTo_m91ED772345185F703C833D6724C71C46B65B0649_gshared)(__this, ___0_array, ___1_arrayIndex, method);
}
inline void List_1_set_Capacity_mBA06C269D25E7BE90965DCF109DB6062DEDA523C (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4*, int32_t, const RuntimeMethod*))List_1_set_Capacity_mBA06C269D25E7BE90965DCF109DB6062DEDA523C_gshared)(__this, ___0_value, method);
}
inline int32_t List_1_FindIndex_mF2FC62698E1FF5A9F1C8A74480F1BB9613E1B339 (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, Predicate_1_t4217DDE556AA2DD5A06797A7B6ADC3C6E795D010* ___0_match, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4*, Predicate_1_t4217DDE556AA2DD5A06797A7B6ADC3C6E795D010*, const RuntimeMethod*))List_1_FindIndex_mF2FC62698E1FF5A9F1C8A74480F1BB9613E1B339_gshared)(__this, ___0_match, method);
}
inline bool Predicate_1_Invoke_m8CACEA4E17FB9648171CCB77D5CA3EDF7248F332_inline (Predicate_1_t4217DDE556AA2DD5A06797A7B6ADC3C6E795D010* __this, Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t4217DDE556AA2DD5A06797A7B6ADC3C6E795D010*, Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E, const RuntimeMethod*))Predicate_1_Invoke_m8CACEA4E17FB9648171CCB77D5CA3EDF7248F332_gshared_inline)(__this, ___0_obj, method);
}
inline void List_1__ctor_m3822E50E6CFA43F285BC3A2C44C55C79AAE6410D (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4*, const RuntimeMethod*))List_1__ctor_m3822E50E6CFA43F285BC3A2C44C55C79AAE6410D_gshared)(__this, method);
}
inline int32_t List_1_FindIndex_mFF62E38A37474AF6586191B1DF5CBDF9D7581CCE (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t4217DDE556AA2DD5A06797A7B6ADC3C6E795D010* ___2_match, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4*, int32_t, int32_t, Predicate_1_t4217DDE556AA2DD5A06797A7B6ADC3C6E795D010*, const RuntimeMethod*))List_1_FindIndex_mFF62E38A37474AF6586191B1DF5CBDF9D7581CCE_gshared)(__this, ___0_startIndex, ___1_count, ___2_match, method);
}
inline void Action_1_Invoke_m530925ADE5205080923A6AF7ECAEC6BF0F05602C_inline (Action_1_tABD04F977BAE1165FCC3D57AAB3F5C16F3E97674* __this, Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tABD04F977BAE1165FCC3D57AAB3F5C16F3E97674*, Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E, const RuntimeMethod*))Action_1_Invoke_m530925ADE5205080923A6AF7ECAEC6BF0F05602C_gshared_inline)(__this, ___0_obj, method);
}
inline void Enumerator__ctor_m0666389F92EFD1388B5CE9F16A65D85E3BDBC5CB (Enumerator_t4EB0A412E114F46D610EDBC4C0AEE8A523FB95E5* __this, List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4EB0A412E114F46D610EDBC4C0AEE8A523FB95E5*, List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4*, const RuntimeMethod*))Enumerator__ctor_m0666389F92EFD1388B5CE9F16A65D85E3BDBC5CB_gshared)(__this, ___0_list, method);
}
inline int32_t Array_IndexOf_TisItem_t590AA2925A38AA7EA48963775F482E9BA8525B4E_m0C78909B5D6CDDC2DE333F944D4ED9811536D895 (ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* ___0_array, Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C*, Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisItem_t590AA2925A38AA7EA48963775F482E9BA8525B4E_m0C78909B5D6CDDC2DE333F944D4ED9811536D895_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void List_1_Insert_mB3BBB9B90C3A0C8A7B4B5089D4A70E291643EE41 (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, int32_t ___0_index, Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E ___1_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4*, int32_t, Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E, const RuntimeMethod*))List_1_Insert_mB3BBB9B90C3A0C8A7B4B5089D4A70E291643EE41_gshared)(__this, ___0_index, ___1_item, method);
}
inline void List_1_RemoveAt_m03F8C2C0BB44ACBDA56835FE66494E7A2C885024 (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m03F8C2C0BB44ACBDA56835FE66494E7A2C885024_gshared)(__this, ___0_index, method);
}
inline bool List_1_Remove_m3A77D6A2E2444ACE03322869783DFB0850E01437 (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4*, Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E, const RuntimeMethod*))List_1_Remove_m3A77D6A2E2444ACE03322869783DFB0850E01437_gshared)(__this, ___0_item, method);
}
inline void List_1_Reverse_m16173FC86AC27F3FCA48D99809384360145C5FC7 (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4*, int32_t, int32_t, const RuntimeMethod*))List_1_Reverse_m16173FC86AC27F3FCA48D99809384360145C5FC7_gshared)(__this, ___0_index, ___1_count, method);
}
inline void Array_Reverse_TisItem_t590AA2925A38AA7EA48963775F482E9BA8525B4E_mA9C906F13041DFD9F8C2F873824B7EECD1AB6BCE (ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C*, int32_t, int32_t, const RuntimeMethod*))Array_Reverse_TisItem_t590AA2925A38AA7EA48963775F482E9BA8525B4E_mA9C906F13041DFD9F8C2F873824B7EECD1AB6BCE_gshared)(___0_array, ___1_index, ___2_length, method);
}
inline void List_1_Sort_mD4853E0DEDC76E60F857E6AE62181E82F1DA913A (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_Sort_mD4853E0DEDC76E60F857E6AE62181E82F1DA913A_gshared)(__this, ___0_index, ___1_count, ___2_comparer, method);
}
inline void Array_Sort_TisItem_t590AA2925A38AA7EA48963775F482E9BA8525B4E_m54A2600327623CE0DA1FD8833B7D5F6EF807CA12 (ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Array_Sort_TisItem_t590AA2925A38AA7EA48963775F482E9BA8525B4E_m54A2600327623CE0DA1FD8833B7D5F6EF807CA12_gshared)(___0_array, ___1_index, ___2_length, ___3_comparer, method);
}
inline void ArraySortHelper_1_Sort_mC2C11EA20C1CAEA09CDE1AB0930313672F20F75B (ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_tAFEE7C13ACABD76E510EEF1E65B8A7D2644A427D* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C*, int32_t, int32_t, Comparison_1_tAFEE7C13ACABD76E510EEF1E65B8A7D2644A427D*, const RuntimeMethod*))ArraySortHelper_1_Sort_mC2C11EA20C1CAEA09CDE1AB0930313672F20F75B_gshared)(___0_keys, ___1_index, ___2_length, ___3_comparer, method);
}
inline void List_1_AddEnumerable_m2075AE32C628E6DB4F52FE0697F5354713D7843C (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method)
{
	((  void (*) (List_1_t065A1950A0B1D84B65A5256E8063120B10018641*, RuntimeObject*, const RuntimeMethod*))List_1_AddEnumerable_m2075AE32C628E6DB4F52FE0697F5354713D7843C_gshared)(__this, ___0_enumerable, method);
}
inline RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E List_1_get_Item_mA457677CED2CC7B20C2B6CE6495CD4CFB2DCAF29 (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E (*) (List_1_t065A1950A0B1D84B65A5256E8063120B10018641*, int32_t, const RuntimeMethod*))List_1_get_Item_mA457677CED2CC7B20C2B6CE6495CD4CFB2DCAF29_gshared)(__this, ___0_index, method);
}
inline void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E_m7A699705EC9A9F5C847119D958A14716EF7AFBE2 (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E_m7A699705EC9A9F5C847119D958A14716EF7AFBE2_gshared)(___0_value, ___1_argName, method);
}
inline void List_1_set_Item_m1AD529A27876EB0D02729B6BDCD19A90D1968F2A (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, int32_t ___0_index, RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t065A1950A0B1D84B65A5256E8063120B10018641*, int32_t, RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E, const RuntimeMethod*))List_1_set_Item_m1AD529A27876EB0D02729B6BDCD19A90D1968F2A_gshared)(__this, ___0_index, ___1_value, method);
}
inline void List_1_AddWithResize_m07ACD6768A0967EF7A094F9E52196EEC6093937A (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t065A1950A0B1D84B65A5256E8063120B10018641*, RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E, const RuntimeMethod*))List_1_AddWithResize_m07ACD6768A0967EF7A094F9E52196EEC6093937A_gshared)(__this, ___0_item, method);
}
inline void List_1_EnsureCapacity_m8D142CE70507F180C33C9BF18D837CD8281ECEB1 (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, int32_t ___0_min, const RuntimeMethod* method)
{
	((  void (*) (List_1_t065A1950A0B1D84B65A5256E8063120B10018641*, int32_t, const RuntimeMethod*))List_1_EnsureCapacity_m8D142CE70507F180C33C9BF18D837CD8281ECEB1_gshared)(__this, ___0_min, method);
}
inline void List_1_Add_mC950522AE5F5CFBEEF0E76878C42C6A16B38362D_inline (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t065A1950A0B1D84B65A5256E8063120B10018641*, RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E, const RuntimeMethod*))List_1_Add_mC950522AE5F5CFBEEF0E76878C42C6A16B38362D_gshared_inline)(__this, ___0_item, method);
}
inline int32_t List_1_get_Count_m401900762AD72612336502EA7DF602A79F433BCD_inline (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t065A1950A0B1D84B65A5256E8063120B10018641*, const RuntimeMethod*))List_1_get_Count_m401900762AD72612336502EA7DF602A79F433BCD_gshared_inline)(__this, method);
}
inline void List_1_InsertRange_m3B9047BA1CAE8E8BD34B2544AC652F6D73BDB053 (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t065A1950A0B1D84B65A5256E8063120B10018641*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_InsertRange_m3B9047BA1CAE8E8BD34B2544AC652F6D73BDB053_gshared)(__this, ___0_index, ___1_collection, method);
}
inline int32_t Array_BinarySearch_TisRecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E_m6CBB3D0BBB52991B9243E809EDE29ADA9248D4DC (RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* ___0_array, int32_t ___1_index, int32_t ___2_length, RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E ___3_value, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8*, int32_t, int32_t, RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E, RuntimeObject*, const RuntimeMethod*))Array_BinarySearch_TisRecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E_m6CBB3D0BBB52991B9243E809EDE29ADA9248D4DC_gshared)(___0_array, ___1_index, ___2_length, ___3_value, ___4_comparer, method);
}
inline int32_t List_1_BinarySearch_mEF77A9EA47A7C80BAEA27FE8E8084F5DFDF17C3C (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, int32_t ___0_index, int32_t ___1_count, RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E ___2_item, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t065A1950A0B1D84B65A5256E8063120B10018641*, int32_t, int32_t, RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E, RuntimeObject*, const RuntimeMethod*))List_1_BinarySearch_mEF77A9EA47A7C80BAEA27FE8E8084F5DFDF17C3C_gshared)(__this, ___0_index, ___1_count, ___2_item, ___3_comparer, method);
}
inline int32_t List_1_IndexOf_m10D493DCE0F2E6E04C595EDC89F3F61448F93220 (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t065A1950A0B1D84B65A5256E8063120B10018641*, RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E, const RuntimeMethod*))List_1_IndexOf_m10D493DCE0F2E6E04C595EDC89F3F61448F93220_gshared)(__this, ___0_item, method);
}
inline bool List_1_IsCompatibleObject_m3F3693EDC370A919A9342D84A2E059762831ABCA (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))List_1_IsCompatibleObject_m3F3693EDC370A919A9342D84A2E059762831ABCA_gshared)(___0_value, method);
}
inline bool List_1_Contains_mB1109C0182FCEE34CCD7C745B2BAE1CF46984CA9 (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t065A1950A0B1D84B65A5256E8063120B10018641*, RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E, const RuntimeMethod*))List_1_Contains_mB1109C0182FCEE34CCD7C745B2BAE1CF46984CA9_gshared)(__this, ___0_item, method);
}
inline void List_1_CopyTo_m35E5EB67CE1D21C76FD8637A74F3DA427C662139 (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method)
{
	((  void (*) (List_1_t065A1950A0B1D84B65A5256E8063120B10018641*, RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8*, int32_t, const RuntimeMethod*))List_1_CopyTo_m35E5EB67CE1D21C76FD8637A74F3DA427C662139_gshared)(__this, ___0_array, ___1_arrayIndex, method);
}
inline void List_1_set_Capacity_mD77B216D8CC55865F1091896E7E61F3EBACE07D1 (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t065A1950A0B1D84B65A5256E8063120B10018641*, int32_t, const RuntimeMethod*))List_1_set_Capacity_mD77B216D8CC55865F1091896E7E61F3EBACE07D1_gshared)(__this, ___0_value, method);
}
inline int32_t List_1_FindIndex_m40550873FEE2B0E9C2AF5D0A5CA4715705646763 (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, Predicate_1_t8A5AF3450E7B0054E5339AB18FD29FA24A371BC1* ___0_match, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t065A1950A0B1D84B65A5256E8063120B10018641*, Predicate_1_t8A5AF3450E7B0054E5339AB18FD29FA24A371BC1*, const RuntimeMethod*))List_1_FindIndex_m40550873FEE2B0E9C2AF5D0A5CA4715705646763_gshared)(__this, ___0_match, method);
}
inline bool Predicate_1_Invoke_m3546977A385098FD45CF8006D8613DAE78078B15_inline (Predicate_1_t8A5AF3450E7B0054E5339AB18FD29FA24A371BC1* __this, RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t8A5AF3450E7B0054E5339AB18FD29FA24A371BC1*, RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E, const RuntimeMethod*))Predicate_1_Invoke_m3546977A385098FD45CF8006D8613DAE78078B15_gshared_inline)(__this, ___0_obj, method);
}
inline void List_1__ctor_m52181F409642C097D83A405774F65B131CD05C13 (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t065A1950A0B1D84B65A5256E8063120B10018641*, const RuntimeMethod*))List_1__ctor_m52181F409642C097D83A405774F65B131CD05C13_gshared)(__this, method);
}
inline int32_t List_1_FindIndex_mD080AA5F7AB6308C0B24313611AEC16524933980 (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t8A5AF3450E7B0054E5339AB18FD29FA24A371BC1* ___2_match, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t065A1950A0B1D84B65A5256E8063120B10018641*, int32_t, int32_t, Predicate_1_t8A5AF3450E7B0054E5339AB18FD29FA24A371BC1*, const RuntimeMethod*))List_1_FindIndex_mD080AA5F7AB6308C0B24313611AEC16524933980_gshared)(__this, ___0_startIndex, ___1_count, ___2_match, method);
}
inline void Action_1_Invoke_m428A1EAD709638EC1BF95DEFA4A3FB88ED859E65_inline (Action_1_tA19957CC720A8A8732F921D4AD3702951E7762AF* __this, RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tA19957CC720A8A8732F921D4AD3702951E7762AF*, RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E, const RuntimeMethod*))Action_1_Invoke_m428A1EAD709638EC1BF95DEFA4A3FB88ED859E65_gshared_inline)(__this, ___0_obj, method);
}
inline void Enumerator__ctor_mF9FCC24D6620741EDA6B46645CAC209D2452023C (Enumerator_t6FC3A8CABABF859880C2F601A072BC8D9C8BE85C* __this, List_1_t065A1950A0B1D84B65A5256E8063120B10018641* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t6FC3A8CABABF859880C2F601A072BC8D9C8BE85C*, List_1_t065A1950A0B1D84B65A5256E8063120B10018641*, const RuntimeMethod*))Enumerator__ctor_mF9FCC24D6620741EDA6B46645CAC209D2452023C_gshared)(__this, ___0_list, method);
}
inline int32_t Array_IndexOf_TisRecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E_m4AFBCFD93214E2980557CDEB2DDF459699C44972 (RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* ___0_array, RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8*, RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisRecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E_m4AFBCFD93214E2980557CDEB2DDF459699C44972_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void List_1_Insert_m52037E7189A3411B290F6CB3ADC3705C2A7C6983 (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, int32_t ___0_index, RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E ___1_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t065A1950A0B1D84B65A5256E8063120B10018641*, int32_t, RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E, const RuntimeMethod*))List_1_Insert_m52037E7189A3411B290F6CB3ADC3705C2A7C6983_gshared)(__this, ___0_index, ___1_item, method);
}
inline void List_1_RemoveAt_mFE8100E83AFA5D74BDD36F5687603D360593BF86 (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t065A1950A0B1D84B65A5256E8063120B10018641*, int32_t, const RuntimeMethod*))List_1_RemoveAt_mFE8100E83AFA5D74BDD36F5687603D360593BF86_gshared)(__this, ___0_index, method);
}
inline bool List_1_Remove_mF118596EBA1899FB70FF4D4301E6837B0F8C41FE (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t065A1950A0B1D84B65A5256E8063120B10018641*, RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E, const RuntimeMethod*))List_1_Remove_mF118596EBA1899FB70FF4D4301E6837B0F8C41FE_gshared)(__this, ___0_item, method);
}
inline void List_1_Reverse_mD53B455C889053443081064BD6849C4A23DD15BB (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (List_1_t065A1950A0B1D84B65A5256E8063120B10018641*, int32_t, int32_t, const RuntimeMethod*))List_1_Reverse_mD53B455C889053443081064BD6849C4A23DD15BB_gshared)(__this, ___0_index, ___1_count, method);
}
inline void Array_Reverse_TisRecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E_m9CE31A9F4B01921EB8E468A87C95E1ECC3D1DE32 (RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8*, int32_t, int32_t, const RuntimeMethod*))Array_Reverse_TisRecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E_m9CE31A9F4B01921EB8E468A87C95E1ECC3D1DE32_gshared)(___0_array, ___1_index, ___2_length, method);
}
inline void List_1_Sort_mFA4A844D97DC0D603E91FCA063D86803ED367463 (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method)
{
	((  void (*) (List_1_t065A1950A0B1D84B65A5256E8063120B10018641*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_Sort_mFA4A844D97DC0D603E91FCA063D86803ED367463_gshared)(__this, ___0_index, ___1_count, ___2_comparer, method);
}
inline void Array_Sort_TisRecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E_m74F44FCE4AEF33BBA5FCF7D62723A58080B3402B (RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Array_Sort_TisRecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E_m74F44FCE4AEF33BBA5FCF7D62723A58080B3402B_gshared)(___0_array, ___1_index, ___2_length, ___3_comparer, method);
}
inline void ArraySortHelper_1_Sort_m0E90F82CDAE16857D877A27E52462D8C7452F45D (RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* ___0_keys, int32_t ___1_index, int32_t ___2_length, Comparison_1_t967BE3E9FD792792C26A54735ACAB0DED8864B56* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8*, int32_t, int32_t, Comparison_1_t967BE3E9FD792792C26A54735ACAB0DED8864B56*, const RuntimeMethod*))ArraySortHelper_1_Sort_m0E90F82CDAE16857D877A27E52462D8C7452F45D_gshared)(___0_keys, ___1_index, ___2_length, ___3_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_TickCount_m183BFCF001E12849E3D898957F0B81FD88BA183C (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventSource_IsEnabled_m0B2F63F81423D7832DC5526D0F3490C77CAB57A5 (EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayPoolEventSource_BufferTrimmed_m7E5BBBCE84BEF9C79981E482AC6D2FA6FFB2ECB0 (ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* __this, int32_t ___0_bufferId, int32_t ___1_bufferSize, int32_t ___2_poolId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496 (int64_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_SetType_m5D07E1C38028872E49EA01129ED5BF1AF674C475 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, Type_t* ___0_type, const RuntimeMethod* method) ;
inline EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_gshared_inline)(method);
}
inline void U3CGetEnumeratorU3Ed__12__ctor_m7B7E2CD0077B4AD9B402ECF55EFF717232D1C83F (U3CGetEnumeratorU3Ed__12_tFF0F421A4C414F2759BB0D29384B9869BAC33801* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method)
{
	((  void (*) (U3CGetEnumeratorU3Ed__12_tFF0F421A4C414F2759BB0D29384B9869BAC33801*, int32_t, const RuntimeMethod*))U3CGetEnumeratorU3Ed__12__ctor_m7B7E2CD0077B4AD9B402ECF55EFF717232D1C83F_gshared)(__this, ___0_U3CU3E1__state, method);
}
inline RuntimeObject* Lookup_2_GetEnumerator_m0C5964AAD1698653DFC1FF114CB550A59DD50D21 (Lookup_2_tCC322E34F83E9E70D851F9A53D156847B70F1EF2* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Lookup_2_tCC322E34F83E9E70D851F9A53D156847B70F1EF2*, const RuntimeMethod*))Lookup_2_GetEnumerator_m0C5964AAD1698653DFC1FF114CB550A59DD50D21_gshared)(__this, method);
}
inline int32_t Lookup_2_InternalGetHashCode_mA51A577966E252F7A2B87CF333B35C15E25D3127 (Lookup_2_tCC322E34F83E9E70D851F9A53D156847B70F1EF2* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Lookup_2_tCC322E34F83E9E70D851F9A53D156847B70F1EF2*, int32_t, const RuntimeMethod*))Lookup_2_InternalGetHashCode_mA51A577966E252F7A2B87CF333B35C15E25D3127_gshared)(__this, ___0_key, method);
}
inline void Lookup_2_Resize_m4A01E48E854FC3977BEA4971EA548EDD6D07BB2D (Lookup_2_tCC322E34F83E9E70D851F9A53D156847B70F1EF2* __this, const RuntimeMethod* method)
{
	((  void (*) (Lookup_2_tCC322E34F83E9E70D851F9A53D156847B70F1EF2*, const RuntimeMethod*))Lookup_2_Resize_m4A01E48E854FC3977BEA4971EA548EDD6D07BB2D_gshared)(__this, method);
}
inline void Grouping__ctor_m219BB8C06F6F99DB551EB73F19E102A83B63FE32 (Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC* __this, const RuntimeMethod* method)
{
	((  void (*) (Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC*, const RuntimeMethod*))Grouping__ctor_m219BB8C06F6F99DB551EB73F19E102A83B63FE32_gshared)(__this, method);
}
inline void U3CGetEnumeratorU3Ed__12__ctor_m4FFE79046C27929B887B714258C16ACADBF5E789 (U3CGetEnumeratorU3Ed__12_t5DC4E73C16245675953476348C604192339136AB* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method)
{
	((  void (*) (U3CGetEnumeratorU3Ed__12_t5DC4E73C16245675953476348C604192339136AB*, int32_t, const RuntimeMethod*))U3CGetEnumeratorU3Ed__12__ctor_m4FFE79046C27929B887B714258C16ACADBF5E789_gshared)(__this, ___0_U3CU3E1__state, method);
}
inline RuntimeObject* Lookup_2_GetEnumerator_m3F6CC8D867C0856A5B4E8AB238DA970B6D840624 (Lookup_2_t0C8EADD42CF5878D9378C4B8B0D4EDB8986DF0C8* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Lookup_2_t0C8EADD42CF5878D9378C4B8B0D4EDB8986DF0C8*, const RuntimeMethod*))Lookup_2_GetEnumerator_m3F6CC8D867C0856A5B4E8AB238DA970B6D840624_gshared)(__this, method);
}
inline int32_t Lookup_2_InternalGetHashCode_m8AB0DFEBEC7B1ECEC62A5CDF44F71DBC7F35D65A (Lookup_2_t0C8EADD42CF5878D9378C4B8B0D4EDB8986DF0C8* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Lookup_2_t0C8EADD42CF5878D9378C4B8B0D4EDB8986DF0C8*, int32_t, const RuntimeMethod*))Lookup_2_InternalGetHashCode_m8AB0DFEBEC7B1ECEC62A5CDF44F71DBC7F35D65A_gshared)(__this, ___0_key, method);
}
inline void Lookup_2_Resize_m2B9ED6802E963422DCF1BEE4970E878FFEBED033 (Lookup_2_t0C8EADD42CF5878D9378C4B8B0D4EDB8986DF0C8* __this, const RuntimeMethod* method)
{
	((  void (*) (Lookup_2_t0C8EADD42CF5878D9378C4B8B0D4EDB8986DF0C8*, const RuntimeMethod*))Lookup_2_Resize_m2B9ED6802E963422DCF1BEE4970E878FFEBED033_gshared)(__this, method);
}
inline void Grouping__ctor_m87D362CCA5A8717B18B0D084549CE41FF26F5A2D (Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD* __this, const RuntimeMethod* method)
{
	((  void (*) (Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD*, const RuntimeMethod*))Grouping__ctor_m87D362CCA5A8717B18B0D084549CE41FF26F5A2D_gshared)(__this, method);
}
inline void DefaultComparer_1__ctor_m1FB334BED8F2ED543F453D87C912BDA6611F368E (DefaultComparer_1_tF1F3B8981298E50FBC17BDC8CA0B4CFE867AD644* __this, const RuntimeMethod* method)
{
	((  void (*) (DefaultComparer_1_tF1F3B8981298E50FBC17BDC8CA0B4CFE867AD644*, const RuntimeMethod*))DefaultComparer_1__ctor_m1FB334BED8F2ED543F453D87C912BDA6611F368E_gshared)(__this, method);
}
inline void LowLevelDictionary_2__ctor_mB6B362C12FBFC3BDA4766411FDC767993214AFA2 (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114*, int32_t, RuntimeObject*, const RuntimeMethod*))LowLevelDictionary_2__ctor_mB6B362C12FBFC3BDA4766411FDC767993214AFA2_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline void LowLevelDictionary_2_Clear_m7229E17DB8B64A5E367126DD076AA0577B2ED5A7 (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114*, int32_t, const RuntimeMethod*))LowLevelDictionary_2_Clear_m7229E17DB8B64A5E367126DD076AA0577B2ED5A7_gshared)(__this, ___0_capacity, method);
}
inline Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* LowLevelDictionary_2_Find_m9E8AF9DE397CFCC424FF17C0125FACDB261E3AEB (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* (*) (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114*, int32_t, const RuntimeMethod*))LowLevelDictionary_2_Find_m9E8AF9DE397CFCC424FF17C0125FACDB261E3AEB_gshared)(__this, ___0_key, method);
}
inline Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* LowLevelDictionary_2_UncheckedAdd_m4B36B6453ADD7712B323A995014660300EDFD5BB (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	return ((  Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* (*) (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114*, int32_t, RuntimeObject*, const RuntimeMethod*))LowLevelDictionary_2_UncheckedAdd_m4B36B6453ADD7712B323A995014660300EDFD5BB_gshared)(__this, ___0_key, ___1_value, method);
}
inline int32_t LowLevelDictionary_2_GetBucket_m31C0AA9C3A13F586A702DFDE7508A606E20B4A9B (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, int32_t ___0_key, int32_t ___1_numBuckets, const RuntimeMethod* method)
{
	return ((  int32_t (*) (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114*, int32_t, int32_t, const RuntimeMethod*))LowLevelDictionary_2_GetBucket_m31C0AA9C3A13F586A702DFDE7508A606E20B4A9B_gshared)(__this, ___0_key, ___1_numBuckets, method);
}
inline void Entry__ctor_m1523ABCDEBE31BA50D6801DB569FB6C6DA0EAB65 (Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* __this, const RuntimeMethod* method)
{
	((  void (*) (Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB*, const RuntimeMethod*))Entry__ctor_m1523ABCDEBE31BA50D6801DB569FB6C6DA0EAB65_gshared)(__this, method);
}
inline void LowLevelDictionary_2_ExpandBuckets_m033D9FFFD113915A8BD824AC730C492F01631A9A (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, const RuntimeMethod* method)
{
	((  void (*) (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114*, const RuntimeMethod*))LowLevelDictionary_2_ExpandBuckets_m033D9FFFD113915A8BD824AC730C492F01631A9A_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline void LowLevelList_1__ctor_mC9E5B6B4FA524A581AE17EB5DE22ADBDDD12F0E7 (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, const RuntimeMethod* method)
{
	((  void (*) (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58*, const RuntimeMethod*))LowLevelList_1__ctor_mC9E5B6B4FA524A581AE17EB5DE22ADBDDD12F0E7_gshared)(__this, method);
}
inline void LowLevelList_1__ctor_mEA732C8D15FD4B514B237270C203F99613A78085 (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58*, int32_t, const RuntimeMethod*))LowLevelList_1__ctor_mEA732C8D15FD4B514B237270C203F99613A78085_gshared)(__this, ___0_capacity, method);
}
inline void Enumerator__ctor_mE48807999815FCA9A84BDDE46C5E1EC8F29B91DF (Enumerator_tEDEAA5F8FFBCB1F2EE5A6E473ED9F5A86691DE05* __this, LowLevelListWithIList_1_t424B84BB083921C00880052D4B49074AF66B72FC* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tEDEAA5F8FFBCB1F2EE5A6E473ED9F5A86691DE05*, LowLevelListWithIList_1_t424B84BB083921C00880052D4B49074AF66B72FC*, const RuntimeMethod*))Enumerator__ctor_mE48807999815FCA9A84BDDE46C5E1EC8F29B91DF_gshared)(__this, ___0_list, method);
}
inline void Enumerator__ctor_m6C59AA282C548B36E982B84CACC3A8E4AA904775 (Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0* __this, LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0*, LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9*, const RuntimeMethod*))Enumerator__ctor_m6C59AA282C548B36E982B84CACC3A8E4AA904775_gshared)(__this, ___0_list, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, const RuntimeMethod* method) ;
inline void LowLevelList_1_EnsureCapacity_m15C5DAD66F3D12BFD786DBE4994ED0A2A9849A0B (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, int32_t ___0_min, const RuntimeMethod* method)
{
	((  void (*) (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58*, int32_t, const RuntimeMethod*))LowLevelList_1_EnsureCapacity_m15C5DAD66F3D12BFD786DBE4994ED0A2A9849A0B_gshared)(__this, ___0_min, method);
}
inline void LowLevelList_1_set_Capacity_mBC06E150C30A932FE95EF6D4A80217BC6E5257DC (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58*, int32_t, const RuntimeMethod*))LowLevelList_1_set_Capacity_mBC06E150C30A932FE95EF6D4A80217BC6E5257DC_gshared)(__this, ___0_value, method);
}
inline void LowLevelList_1_InsertRange_m41D4839802C22AA8A00BB419B348DE91BCFF52A0 (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method)
{
	((  void (*) (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58*, int32_t, RuntimeObject*, const RuntimeMethod*))LowLevelList_1_InsertRange_m41D4839802C22AA8A00BB419B348DE91BCFF52A0_gshared)(__this, ___0_index, ___1_collection, method);
}
inline int32_t LowLevelList_1_IndexOf_m1E3798AD4DBE5EFEFA2AA30F9AEB1DA864237839 (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58*, RuntimeObject*, const RuntimeMethod*))LowLevelList_1_IndexOf_m1E3798AD4DBE5EFEFA2AA30F9AEB1DA864237839_gshared)(__this, ___0_item, method);
}
inline int32_t Array_IndexOf_TisRuntimeObject_m4C0C698B1D627E6B3C3BE6DDA512E8E276DC6F73 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, RuntimeObject* ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, RuntimeObject*, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisRuntimeObject_m4C0C698B1D627E6B3C3BE6DDA512E8E276DC6F73_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void LowLevelList_1_Insert_mBD4CC70F7D0997C1FDDA0699DB1417BEC62D49D4 (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method)
{
	((  void (*) (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58*, int32_t, RuntimeObject*, const RuntimeMethod*))LowLevelList_1_Insert_mBD4CC70F7D0997C1FDDA0699DB1417BEC62D49D4_gshared)(__this, ___0_index, ___1_item, method);
}
inline void LowLevelList_1_RemoveAt_m14CF4D511C0CCCECF58915F0156E9C13A3046F13 (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58*, int32_t, const RuntimeMethod*))LowLevelList_1_RemoveAt_m14CF4D511C0CCCECF58915F0156E9C13A3046F13_gshared)(__this, ___0_index, method);
}
inline bool Predicate_1_Invoke_m6AC449189DCEE89A4FA2A2B724DE296A1DFB6A9B_inline (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12*, RuntimeObject*, const RuntimeMethod*))Predicate_1_Invoke_m6AC449189DCEE89A4FA2A2B724DE296A1DFB6A9B_gshared_inline)(__this, ___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330 (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803 (Exception_t* ___0_source, const RuntimeMethod* method) ;
inline KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F MemoizeSource_GetResult_m5C256950C302EA4D7578377664BA865C244CA70B (MemoizeSource_t6EF94D02CF852AE92900476CE5D6E50A84FC1F2E* __this, int16_t ___0_token, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F (*) (MemoizeSource_t6EF94D02CF852AE92900476CE5D6E50A84FC1F2E*, int16_t, const RuntimeMethod*))MemoizeSource_GetResult_m5C256950C302EA4D7578377664BA865C244CA70B_gshared)(__this, ___0_token, method);
}
inline void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
inline ValueTuple_2_tD8FC7D951E88A4E6D75952ABBF6C76990A9E9AAD MemoizeSource_GetResult_mC00EB8CD806A94EE947C24A74C9F3DAE1517DDEF (MemoizeSource_t0EB58AE3AE2F8E7FBFAD25BCCB33BC7B36243A38* __this, int16_t ___0_token, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_tD8FC7D951E88A4E6D75952ABBF6C76990A9E9AAD (*) (MemoizeSource_t0EB58AE3AE2F8E7FBFAD25BCCB33BC7B36243A38*, int16_t, const RuntimeMethod*))MemoizeSource_GetResult_mC00EB8CD806A94EE947C24A74C9F3DAE1517DDEF_gshared)(__this, ___0_token, method);
}
inline ValueTuple_2_tDEC0B1538702EF393ED3785AC477A5349EB4FE40 MemoizeSource_GetResult_mA7DEF35F18C93252E76BB3BD5B850C5D3C29447D (MemoizeSource_t0F002271CE438A8AE16EAB8DA149E32DE7703630* __this, int16_t ___0_token, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_tDEC0B1538702EF393ED3785AC477A5349EB4FE40 (*) (MemoizeSource_t0F002271CE438A8AE16EAB8DA149E32DE7703630*, int16_t, const RuntimeMethod*))MemoizeSource_GetResult_mA7DEF35F18C93252E76BB3BD5B850C5D3C29447D_gshared)(__this, ___0_token, method);
}
inline ValueTuple_2_tA349CD9D248C0AEA0723711BC6AB72E5651FA416 MemoizeSource_GetResult_mCF24905F795A2AC69505D0720888490EF988F2B8 (MemoizeSource_t25D181668E617BFB26C25F2FCC7C5170A9D06710* __this, int16_t ___0_token, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_tA349CD9D248C0AEA0723711BC6AB72E5651FA416 (*) (MemoizeSource_t25D181668E617BFB26C25F2FCC7C5170A9D06710*, int16_t, const RuntimeMethod*))MemoizeSource_GetResult_mCF24905F795A2AC69505D0720888490EF988F2B8_gshared)(__this, ___0_token, method);
}
inline ValueTuple_2_t34894BC390F776FF724A61A2995CD383279EED26 MemoizeSource_GetResult_m59E8FB161BAA107AF330E77F630CB1927479CD78 (MemoizeSource_t4677D6DB89E883159DA8FF5849F6DF7F985A4B35* __this, int16_t ___0_token, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_t34894BC390F776FF724A61A2995CD383279EED26 (*) (MemoizeSource_t4677D6DB89E883159DA8FF5849F6DF7F985A4B35*, int16_t, const RuntimeMethod*))MemoizeSource_GetResult_m59E8FB161BAA107AF330E77F630CB1927479CD78_gshared)(__this, ___0_token, method);
}
inline ValueTuple_2_t7516E46F5AFFFB610FC72E9F975A9AF740F6E0DA MemoizeSource_GetResult_m7AA0344EBC93DE0AEDD50B0CAFD6B049B76ECB3E (MemoizeSource_tEA26C433E3D23BC798D60E3E928F89BF44D0780A* __this, int16_t ___0_token, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_t7516E46F5AFFFB610FC72E9F975A9AF740F6E0DA (*) (MemoizeSource_tEA26C433E3D23BC798D60E3E928F89BF44D0780A*, int16_t, const RuntimeMethod*))MemoizeSource_GetResult_m7AA0344EBC93DE0AEDD50B0CAFD6B049B76ECB3E_gshared)(__this, ___0_token, method);
}
inline ValueTuple_2_t7EDECF5EF0242AF168C2233A1F58D29823979EB0 MemoizeSource_GetResult_m8B13CCFF8786B7290A7D183768B4E62DB31443B2 (MemoizeSource_t995613DCA5117D80DE5BC09B7D7817C51047C696* __this, int16_t ___0_token, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_t7EDECF5EF0242AF168C2233A1F58D29823979EB0 (*) (MemoizeSource_t995613DCA5117D80DE5BC09B7D7817C51047C696*, int16_t, const RuntimeMethod*))MemoizeSource_GetResult_m8B13CCFF8786B7290A7D183768B4E62DB31443B2_gshared)(__this, ___0_token, method);
}
inline ValueTuple_2_t290BB110EB3014D32465EC182EF13C96648CDAB2 MemoizeSource_GetResult_m6570653AF8890D84C999E3CA6E84F261CF678A03 (MemoizeSource_tF3E74A3B60F21D568DFAE0A35900C84F9B029D04* __this, int16_t ___0_token, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_t290BB110EB3014D32465EC182EF13C96648CDAB2 (*) (MemoizeSource_tF3E74A3B60F21D568DFAE0A35900C84F9B029D04*, int16_t, const RuntimeMethod*))MemoizeSource_GetResult_m6570653AF8890D84C999E3CA6E84F261CF678A03_gshared)(__this, ___0_token, method);
}
inline ValueTuple_2_tAB12458160F7EEB98903FBFDF624C4E37DB5B0C4 MemoizeSource_GetResult_mE123C67A43DD11F7D132525F986EF848680ACA92 (MemoizeSource_tD6683A8DE463F34C3148559778641D0559CAF6BD* __this, int16_t ___0_token, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_tAB12458160F7EEB98903FBFDF624C4E37DB5B0C4 (*) (MemoizeSource_tD6683A8DE463F34C3148559778641D0559CAF6BD*, int16_t, const RuntimeMethod*))MemoizeSource_GetResult_mE123C67A43DD11F7D132525F986EF848680ACA92_gshared)(__this, ___0_token, method);
}
inline ValueTuple_2_t935465950D2698EFE54FE47D5D8151B83FCB6E16 MemoizeSource_GetResult_m847058F4209E1B335E485C062DB02C3CAC0B0F75 (MemoizeSource_t27D10A136D46431400AD10521E516314BAD6E704* __this, int16_t ___0_token, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_t935465950D2698EFE54FE47D5D8151B83FCB6E16 (*) (MemoizeSource_t27D10A136D46431400AD10521E516314BAD6E704*, int16_t, const RuntimeMethod*))MemoizeSource_GetResult_m847058F4209E1B335E485C062DB02C3CAC0B0F75_gshared)(__this, ___0_token, method);
}
inline ValueTuple_2_t6A10DF53546071B4ED19D939589673347CEC5702 MemoizeSource_GetResult_m1ECEEA3E0C7A64CA4AA4188B1206CB68A55886C0 (MemoizeSource_t1BB5620374CA89421E3294A788BD4B28A99714C7* __this, int16_t ___0_token, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_t6A10DF53546071B4ED19D939589673347CEC5702 (*) (MemoizeSource_t1BB5620374CA89421E3294A788BD4B28A99714C7*, int16_t, const RuntimeMethod*))MemoizeSource_GetResult_m1ECEEA3E0C7A64CA4AA4188B1206CB68A55886C0_gshared)(__this, ___0_token, method);
}
inline ValueTuple_2_tBB1248EBF0017304413829627AA66F8E210F2836 MemoizeSource_GetResult_mF37B3DAC77966747BC84059E92AC0AEB7FFCA79C (MemoizeSource_t4AC1D09959B35856B6BA4446DAC696ED75E020E4* __this, int16_t ___0_token, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_tBB1248EBF0017304413829627AA66F8E210F2836 (*) (MemoizeSource_t4AC1D09959B35856B6BA4446DAC696ED75E020E4*, int16_t, const RuntimeMethod*))MemoizeSource_GetResult_mF37B3DAC77966747BC84059E92AC0AEB7FFCA79C_gshared)(__this, ___0_token, method);
}
inline ValueTuple_2_t330479F0733611828EC447EC3AF37E7D3B6C13C6 MemoizeSource_GetResult_m7DC9B90CE5CC9BA202197E359DB90B35D33AF4C7 (MemoizeSource_t9E9462BD8A21248A2EC46FFD9CB9B754E4394D6C* __this, int16_t ___0_token, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_t330479F0733611828EC447EC3AF37E7D3B6C13C6 (*) (MemoizeSource_t9E9462BD8A21248A2EC46FFD9CB9B754E4394D6C*, int16_t, const RuntimeMethod*))MemoizeSource_GetResult_m7DC9B90CE5CC9BA202197E359DB90B35D33AF4C7_gshared)(__this, ___0_token, method);
}
inline ValueTuple_2_tEB14017B363793A13469D8BB47D121AE3737431A MemoizeSource_GetResult_m9D905BC88D8B76AB7CAFB5646F80A28E12502DCA (MemoizeSource_t015C121B64F928ECEF0D84837D2FA062738D63BB* __this, int16_t ___0_token, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_tEB14017B363793A13469D8BB47D121AE3737431A (*) (MemoizeSource_t015C121B64F928ECEF0D84837D2FA062738D63BB*, int16_t, const RuntimeMethod*))MemoizeSource_GetResult_m9D905BC88D8B76AB7CAFB5646F80A28E12502DCA_gshared)(__this, ___0_token, method);
}
inline ValueTuple_2_tF8D7503A349FA562D1850AE4FA8AA15C5EF3A628 MemoizeSource_GetResult_m78C355348BC346EF6F9C476C0F3E3D8CE95F577B (MemoizeSource_tF1CD7C88E1188F0C65ADB3C27970D1D1D710EDB5* __this, int16_t ___0_token, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_tF8D7503A349FA562D1850AE4FA8AA15C5EF3A628 (*) (MemoizeSource_tF1CD7C88E1188F0C65ADB3C27970D1D1D710EDB5*, int16_t, const RuntimeMethod*))MemoizeSource_GetResult_m78C355348BC346EF6F9C476C0F3E3D8CE95F577B_gshared)(__this, ___0_token, method);
}
inline ValueTuple_2_tC8B5C2FAF38BC3CC478737FF4E0493A3B8D6683E MemoizeSource_GetResult_m8F8EB9328FDABDA09DC1D21F513287F80D4F1B87 (MemoizeSource_t2ED223A676DCA53FD8FA71E6A088B3FFE496AA22* __this, int16_t ___0_token, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_tC8B5C2FAF38BC3CC478737FF4E0493A3B8D6683E (*) (MemoizeSource_t2ED223A676DCA53FD8FA71E6A088B3FFE496AA22*, int16_t, const RuntimeMethod*))MemoizeSource_GetResult_m8F8EB9328FDABDA09DC1D21F513287F80D4F1B87_gshared)(__this, ___0_token, method);
}
inline ValueTuple_2_t080CA831DC414BEAA50894A0E00736068C362266 MemoizeSource_GetResult_m99E466CF252DE280470F633ACC6181C6D5E0F704 (MemoizeSource_t49C4AB20ECB8647FDDC6F869F071E757E142AF51* __this, int16_t ___0_token, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_t080CA831DC414BEAA50894A0E00736068C362266 (*) (MemoizeSource_t49C4AB20ECB8647FDDC6F869F071E757E142AF51*, int16_t, const RuntimeMethod*))MemoizeSource_GetResult_m99E466CF252DE280470F633ACC6181C6D5E0F704_gshared)(__this, ___0_token, method);
}
inline ValueTuple_2_tBC8C6CC7124E84BF6A0E396AEFF5DAF55A74BFD0 MemoizeSource_GetResult_m5BC416C15BBC1195A06505CD10078CEA9A11D492 (MemoizeSource_t8B81C7A1772F56F643374AA53C7ABB9DD7BA00AC* __this, int16_t ___0_token, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_tBC8C6CC7124E84BF6A0E396AEFF5DAF55A74BFD0 (*) (MemoizeSource_t8B81C7A1772F56F643374AA53C7ABB9DD7BA00AC*, int16_t, const RuntimeMethod*))MemoizeSource_GetResult_m5BC416C15BBC1195A06505CD10078CEA9A11D492_gshared)(__this, ___0_token, method);
}
inline ValueTuple_2_tED7ED363573DADFC91A594D0018E4E56CEC3D9FA MemoizeSource_GetResult_mDCBC19B12A77205DC67BE96D045FDF74F6914158 (MemoizeSource_t8515139432089A796262B47AC0026B9DE7E1F747* __this, int16_t ___0_token, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_tED7ED363573DADFC91A594D0018E4E56CEC3D9FA (*) (MemoizeSource_t8515139432089A796262B47AC0026B9DE7E1F747*, int16_t, const RuntimeMethod*))MemoizeSource_GetResult_mDCBC19B12A77205DC67BE96D045FDF74F6914158_gshared)(__this, ___0_token, method);
}
inline ValueTuple_2_tBF06E5ADE07E63499D2282FB433BF73667B3F0FC MemoizeSource_GetResult_m6ACE9C181FE76B3B6016B2E483D450AF15AC78AB (MemoizeSource_t670AFF0D5F06553D5D7657F9571EFAD5E11D7DC4* __this, int16_t ___0_token, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_tBF06E5ADE07E63499D2282FB433BF73667B3F0FC (*) (MemoizeSource_t670AFF0D5F06553D5D7657F9571EFAD5E11D7DC4*, int16_t, const RuntimeMethod*))MemoizeSource_GetResult_m6ACE9C181FE76B3B6016B2E483D450AF15AC78AB_gshared)(__this, ___0_token, method);
}
inline ValueTuple_2_tD2D276F149DD827077A198ACBB06694D4A9CAA4E MemoizeSource_GetResult_m29D885C746705BCA7E36BEDAC813897296A6E5D6 (MemoizeSource_t53DB4D4310BA19FE28DF1A4330092F558BD01F66* __this, int16_t ___0_token, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_tD2D276F149DD827077A198ACBB06694D4A9CAA4E (*) (MemoizeSource_t53DB4D4310BA19FE28DF1A4330092F558BD01F66*, int16_t, const RuntimeMethod*))MemoizeSource_GetResult_m29D885C746705BCA7E36BEDAC813897296A6E5D6_gshared)(__this, ___0_token, method);
}
inline ValueTuple_2_tF14F6641CFA2C7B5CFBD0075A310DF96EF5F1554 MemoizeSource_GetResult_mCE1D7658830CE92AD5B88FA514F829C636466FE1 (MemoizeSource_t21EF441B70AC2C2BA32B8DA5B160242EB7453DBF* __this, int16_t ___0_token, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_tF14F6641CFA2C7B5CFBD0075A310DF96EF5F1554 (*) (MemoizeSource_t21EF441B70AC2C2BA32B8DA5B160242EB7453DBF*, int16_t, const RuntimeMethod*))MemoizeSource_GetResult_mCE1D7658830CE92AD5B88FA514F829C636466FE1_gshared)(__this, ___0_token, method);
}
inline ValueTuple_2_t97A7CEA19B461989D818D347826BF07FB96CA07B MemoizeSource_GetResult_m351B5901EF7FC71C66AF3D46D754A367428ED775 (MemoizeSource_tBE0C4BF3BC7E24BACB262D0B2228DA8399895051* __this, int16_t ___0_token, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_t97A7CEA19B461989D818D347826BF07FB96CA07B (*) (MemoizeSource_tBE0C4BF3BC7E24BACB262D0B2228DA8399895051*, int16_t, const RuntimeMethod*))MemoizeSource_GetResult_m351B5901EF7FC71C66AF3D46D754A367428ED775_gshared)(__this, ___0_token, method);
}
inline ValueTuple_2_t9B66A65935FC3A7480FE6E45C87AA4ED045DAE0A MemoizeSource_GetResult_m3D2733A0AD7633B533536DC8BE1258E683E61632 (MemoizeSource_t78D318D9F5BA39C803E43096B403B20EF6F37CE9* __this, int16_t ___0_token, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_t9B66A65935FC3A7480FE6E45C87AA4ED045DAE0A (*) (MemoizeSource_t78D318D9F5BA39C803E43096B403B20EF6F37CE9*, int16_t, const RuntimeMethod*))MemoizeSource_GetResult_m3D2733A0AD7633B533536DC8BE1258E683E61632_gshared)(__this, ___0_token, method);
}
inline ValueTuple_2_t5A6143A93BAFD4601C2B326EB00E4193D3D47A31 MemoizeSource_GetResult_m04E7B66328AEE9E6C31FB2A9DA471B506D5CCB7F (MemoizeSource_tF2CD325E9978D8B7905DB1D1D10BC6EF0A4B6D44* __this, int16_t ___0_token, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_t5A6143A93BAFD4601C2B326EB00E4193D3D47A31 (*) (MemoizeSource_tF2CD325E9978D8B7905DB1D1D10BC6EF0A4B6D44*, int16_t, const RuntimeMethod*))MemoizeSource_GetResult_m04E7B66328AEE9E6C31FB2A9DA471B506D5CCB7F_gshared)(__this, ___0_token, method);
}
inline ValueTuple_2_t9CF6F79C7C82BC044136DFB2797E299E226BB8E0 MemoizeSource_GetResult_mA05306101EDE54F9E9EE783E6CC53FD855D3819D (MemoizeSource_t4C627C0F0DCFB973BDC6E629C4985F69E4658986* __this, int16_t ___0_token, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_t9CF6F79C7C82BC044136DFB2797E299E226BB8E0 (*) (MemoizeSource_t4C627C0F0DCFB973BDC6E629C4985F69E4658986*, int16_t, const RuntimeMethod*))MemoizeSource_GetResult_mA05306101EDE54F9E9EE783E6CC53FD855D3819D_gshared)(__this, ___0_token, method);
}
inline ValueTuple_2_t12C85C8C55F6FB3E8A592CA974C972FD46DA8693 MemoizeSource_GetResult_m685E5A6E142DF7E1584F9F4AD4D414F3A4B75CB4 (MemoizeSource_tEFC28095C5428DF2E08610353C11E5105050BF35* __this, int16_t ___0_token, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_t12C85C8C55F6FB3E8A592CA974C972FD46DA8693 (*) (MemoizeSource_tEFC28095C5428DF2E08610353C11E5105050BF35*, int16_t, const RuntimeMethod*))MemoizeSource_GetResult_m685E5A6E142DF7E1584F9F4AD4D414F3A4B75CB4_gshared)(__this, ___0_token, method);
}
inline ValueTuple_2_t5D1952D15E56B34C82F917988745983CF8A3126A MemoizeSource_GetResult_mC70906C573C4F5CD86642349E73B8FB2483DAC83 (MemoizeSource_tFBA14165BCBCFC59D01EC962C36F4F8166B9046A* __this, int16_t ___0_token, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_t5D1952D15E56B34C82F917988745983CF8A3126A (*) (MemoizeSource_tFBA14165BCBCFC59D01EC962C36F4F8166B9046A*, int16_t, const RuntimeMethod*))MemoizeSource_GetResult_mC70906C573C4F5CD86642349E73B8FB2483DAC83_gshared)(__this, ___0_token, method);
}
inline ValueTuple_2_t71BD02D0D3F9D07AC18F3B68DDA577AFF1A3F365 MemoizeSource_GetResult_m760F9930CE7F2AF258DA0E6E0A039E9BED18A134 (MemoizeSource_tB0CAE3B009C8E612B0C18D814360A44A8A148009* __this, int16_t ___0_token, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_t71BD02D0D3F9D07AC18F3B68DDA577AFF1A3F365 (*) (MemoizeSource_tB0CAE3B009C8E612B0C18D814360A44A8A148009*, int16_t, const RuntimeMethod*))MemoizeSource_GetResult_m760F9930CE7F2AF258DA0E6E0A039E9BED18A134_gshared)(__this, ___0_token, method);
}
inline ValueTuple_2_tD513E55490BCB12535D03A77FDAD2DC66E9760A7 MemoizeSource_GetResult_mFF2E5CB42FEDA52A68A5DBF88899B5D6CBE979B8 (MemoizeSource_tFEFF99B6CA94EC734E787DC51DD166ED1D95FC77* __this, int16_t ___0_token, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_tD513E55490BCB12535D03A77FDAD2DC66E9760A7 (*) (MemoizeSource_tFEFF99B6CA94EC734E787DC51DD166ED1D95FC77*, int16_t, const RuntimeMethod*))MemoizeSource_GetResult_mFF2E5CB42FEDA52A68A5DBF88899B5D6CBE979B8_gshared)(__this, ___0_token, method);
}
inline ValueTuple_2_tD892015C67259A7424294FA5093B451BF8AA43CD MemoizeSource_GetResult_mC85661224867BB90C79063481862FC1BE3C77EC0 (MemoizeSource_tA496F9380C7AF07E3422F84834B64735B26DC573* __this, int16_t ___0_token, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_tD892015C67259A7424294FA5093B451BF8AA43CD (*) (MemoizeSource_tA496F9380C7AF07E3422F84834B64735B26DC573*, int16_t, const RuntimeMethod*))MemoizeSource_GetResult_mC85661224867BB90C79063481862FC1BE3C77EC0_gshared)(__this, ___0_token, method);
}
inline ValueTuple_2_tB5CA42715211C37328A84B7ADB9D11C32D8EB35B MemoizeSource_GetResult_m19A9064965128E829BB32396781D5645DAB25D67 (MemoizeSource_tA63F286F2271661711033949CD911948ABD8CB73* __this, int16_t ___0_token, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_tB5CA42715211C37328A84B7ADB9D11C32D8EB35B (*) (MemoizeSource_tA63F286F2271661711033949CD911948ABD8CB73*, int16_t, const RuntimeMethod*))MemoizeSource_GetResult_m19A9064965128E829BB32396781D5645DAB25D67_gshared)(__this, ___0_token, method);
}
inline ValueTuple_2_t52E63268B5601A67D99E98851A669CC2902A98CC MemoizeSource_GetResult_m20FD6E1839F74F2D896656573B54FCE86DD18F0B (MemoizeSource_tCA4B4611DF38506DD4237D55981135B1E0F97199* __this, int16_t ___0_token, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_t52E63268B5601A67D99E98851A669CC2902A98CC (*) (MemoizeSource_tCA4B4611DF38506DD4237D55981135B1E0F97199*, int16_t, const RuntimeMethod*))MemoizeSource_GetResult_m20FD6E1839F74F2D896656573B54FCE86DD18F0B_gshared)(__this, ___0_token, method);
}
inline ValueTuple_2_tB862623003F51B20CE4E36B2AE1BCF1A3DB5A5A4 MemoizeSource_GetResult_m2BE28BA9B898C96C23992A6AA791000201B51E27 (MemoizeSource_t1184411DF9A67FC31DCB16211873336ACFD4C4C2* __this, int16_t ___0_token, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_tB862623003F51B20CE4E36B2AE1BCF1A3DB5A5A4 (*) (MemoizeSource_t1184411DF9A67FC31DCB16211873336ACFD4C4C2*, int16_t, const RuntimeMethod*))MemoizeSource_GetResult_m2BE28BA9B898C96C23992A6AA791000201B51E27_gshared)(__this, ___0_token, method);
}
inline ValueTuple_2_t31FC349FE1CF0C2BF4E1437F0DF1D14D14A65B79 MemoizeSource_GetResult_m3FA28197AE01525D47CBBF5C6E884E00A0AB6E66 (MemoizeSource_t74CBB552A0B5909901EBC1BC50442F56F5FE81A6* __this, int16_t ___0_token, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_t31FC349FE1CF0C2BF4E1437F0DF1D14D14A65B79 (*) (MemoizeSource_t74CBB552A0B5909901EBC1BC50442F56F5FE81A6*, int16_t, const RuntimeMethod*))MemoizeSource_GetResult_m3FA28197AE01525D47CBBF5C6E884E00A0AB6E66_gshared)(__this, ___0_token, method);
}
inline ValueTuple_2_tB6C5EB8B1097DA5E36DC437A3AB809D0EB919B4D MemoizeSource_GetResult_m72A7F9DD46F55F02B4D798C0C84AF8930B551D89 (MemoizeSource_tFB4BE9B6B9177E2D747FA257DFFCB7ECD4059D35* __this, int16_t ___0_token, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_tB6C5EB8B1097DA5E36DC437A3AB809D0EB919B4D (*) (MemoizeSource_tFB4BE9B6B9177E2D747FA257DFFCB7ECD4059D35*, int16_t, const RuntimeMethod*))MemoizeSource_GetResult_m72A7F9DD46F55F02B4D798C0C84AF8930B551D89_gshared)(__this, ___0_token, method);
}
inline EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E_gshared)(method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mB26899986F1FB5766A6D13F9ED0BD83D6E7EF66C_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_0 = ((List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m041FA212DEC6BE195BC723646849CD649D18A64F_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)12), (int32_t)4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_2 = ((List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_4 = (ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290*)(ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m79BC4625704BB78551B3133EEF6EC26D75D893C1_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_6 = ((List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_8 = (ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290*)(ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_10 = __this->____items;
		NullCheck(L_9);
		InterfaceActionInvoker2< ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_12 = ((List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_mBE568D92B20DA843EC8D4F715D3B49D250D017DA(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_m72B6FD6DBD5356DABAA5CB4C5BDFB373FC024528_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, const RuntimeMethod* method) 
{
	{
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_0 = __this->____items;
		NullCheck(L_0);
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m95133E04136EBCFB47DF8C6AC9E9BCC8AC90FEBE_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)15), (int32_t)((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_3 = __this->____items;
		NullCheck(L_3);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_4 = ___0_value;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_5 = ___0_value;
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_6 = (ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290*)(ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		V_0 = L_6;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_8 = __this->____items;
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_9 = V_0;
		int32_t L_10 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, L_10, NULL);
	}

IL_0045:
	{
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_11 = V_0;
		__this->____items = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_11);
		return;
	}

IL_004d:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_12 = ((List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mECD525A7CE3BC7B0E3FE954F13BC663410201A64_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsFixedSize_m37218AEA870BB4FAC8DF3A21D64E1D77B0F90624_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m6AAC74A95D5C88AE19C268DDE1E1C7FEE4F24DED_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsReadOnly_m5F0A914B98FA08A8BB10D44FF5E6CF26E3A43436_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_ICollection_get_IsSynchronized_m10D004CFECC8FACAC0EF7A08DC84FDC93E85D5F4_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_ICollection_get_SyncRoot_m60EE4FB469FB6C8F8BA65CD25C715D5B7045A7B4_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 List_1_get_Item_m69BCBAB9625067308DDEAEED5945E4E3B46FA3E1_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m4BA2391807C1D002F74A8CB67558698C6F351991_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_index, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_4 = ___1_value;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_mB6476DD7C4A1FE9AF2F141A2C409DA5F89BB3016_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957));
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_mD68A6D6DD6822A0BE245088198A2204D3F93CD71_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_1;
		L_1 = List_1_get_Item_m69BCBAB9625067308DDEAEED5945E4E3B46FA3E1(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_m68BA62ED8156D18DF6932DDF3C4209C4DAB759A0_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_m990D56DF011480F858DF755193A1BFF5E57882A0(L_0, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_m4BA2391807C1D002F74A8CB67558698C6F351991(__this, L_1, ((*(ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957*)((ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957*)(ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mA97FD9B61331596E4585203CFD321A5A614A089D_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___0_item, const RuntimeMethod* method) 
{
	ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_6 = V_0;
		int32_t L_7 = V_1;
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957)L_8);
		return;
	}

IL_0034:
	{
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_9 = ___0_item;
		List_1_AddWithResize_mC767DD2E08464C2A9BFD3F2AE86A83F85BFCC9A2(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mC767DD2E08464C2A9BFD3F2AE86A83F85BFCC9A2_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_mE400A6352C1B01A9F706C2A4A3FCBA5AC451A12B(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_3 = __this->____items;
		int32_t L_4 = V_0;
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_mB672DBD6433EF042B4CDBF73645F305C2A276654_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_m990D56DF011480F858DF755193A1BFF5E57882A0(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_mA97FD9B61331596E4585203CFD321A5A614A089D_inline(__this, ((*(ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957*)((ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957*)(ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_3 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_6;
		L_6 = List_1_get_Count_mECD525A7CE3BC7B0E3FE954F13BC663410201A64_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m238CF91C60367B016BDD8A09964082040515A0AE_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_mAFC44D9748F4101BF8F657632E33A3311C99D6BE(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_BinarySearch_m045047154A230EC8448430997A781AC54644A742_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_index, int32_t ___1_count, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___2_item, RuntimeObject* ___3_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		int32_t L_7 = ___1_count;
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_8 = ___2_item;
		RuntimeObject* L_9 = ___3_comparer;
		int32_t L_10;
		L_10 = Array_BinarySearch_TisColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_mD30773E33859C47A5A24FACC643C8D4012C6EB75(L_5, L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_BinarySearch_mDF03D1F701EB67E20194B24FED68DFEBC8AA0CF0_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_mECD525A7CE3BC7B0E3FE954F13BC663410201A64_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_BinarySearch_m045047154A230EC8448430997A781AC54644A742(__this, 0, L_0, L_1, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_BinarySearch_m9D4A03B6FFE007D276243FD3E940A9CDED722C72_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___0_item, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_mECD525A7CE3BC7B0E3FE954F13BC663410201A64_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_1 = ___0_item;
		RuntimeObject* L_2 = ___1_comparer;
		int32_t L_3;
		L_3 = List_1_BinarySearch_m045047154A230EC8448430997A781AC54644A742(__this, 0, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mC17AB7F3BAC157D7364083286A1B496625068AD9_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
	}
	{
		int32_t L_1 = __this->____size;
		V_0 = L_1;
		__this->____size = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_3 = __this->____items;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m387E949B4B12752A48C76D51759A66CBDE5207B6_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_m80D06B5A657DB69045A11F9FF589998F0D0473B5(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_Contains_m17C85113149534F596C7CA15C0FD0153A1B3EB00_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_mB6476DD7C4A1FE9AF2F141A2C409DA5F89BB3016(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Contains_m387E949B4B12752A48C76D51759A66CBDE5207B6(__this, ((*(ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957*)((ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957*)(ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m8FFAA8633E6418196D2690EEA8254E906B9A5FAC_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* ___0_array, const RuntimeMethod* method) 
{
	{
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_0 = ___0_array;
		List_1_CopyTo_mC7006951BE0B3D3688A2D405315CB1B10BE98140(__this, L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_ICollection_CopyTo_mA54670807F57B0CA2435D74DD76F8EFCD4D79BF0_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0012:
	{
	}
	try
	{
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_3 = __this->____items;
		RuntimeArray* L_4 = ___0_array;
		int32_t L_5 = ___1_arrayIndex;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, L_4, L_5, L_6, NULL);
		goto IL_0031;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0029;
		}
		throw e;
	}

CATCH_0029:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_7 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0031;
	}

IL_0031:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_mC7006951BE0B3D3688A2D405315CB1B10BE98140_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_0 = __this->____items;
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_mE400A6352C1B01A9F706C2A4A3FCBA5AC451A12B_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_0 = __this->____items;
		NullCheck(L_0);
		int32_t L_1 = ___0_min;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)L_1)))
		{
			goto IL_003d;
		}
	}
	{
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_2 = __this->____items;
		NullCheck(L_2);
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_3 = __this->____items;
		NullCheck(L_3);
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_3)->max_length)), 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_min;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_7 = ___0_min;
		V_0 = L_7;
	}

IL_0036:
	{
		int32_t L_8 = V_0;
		List_1_set_Capacity_m95133E04136EBCFB47DF8C6AC9E9BCC8AC90FEBE(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Exists_mD4B2068BF5BFFCD4B11B789462658743CC60E7BD_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, Predicate_1_tE6CEF83377C879013E736AC152429530BFBE7BD7* ___0_match, const RuntimeMethod* method) 
{
	{
		Predicate_1_tE6CEF83377C879013E736AC152429530BFBE7BD7* L_0 = ___0_match;
		int32_t L_1;
		L_1 = List_1_FindIndex_m6A7E41E747D6F2E87573599E9F6F348D5A354688(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		return (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 List_1_Find_m02A997CAAAB27E74A5F5BB6FD6ECB45628FD4A9F_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, Predicate_1_tE6CEF83377C879013E736AC152429530BFBE7BD7* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Predicate_1_tE6CEF83377C879013E736AC152429530BFBE7BD7* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0032;
	}

IL_000d:
	{
		Predicate_1_tE6CEF83377C879013E736AC152429530BFBE7BD7* L_1 = ___0_match;
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_2 = __this->____items;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_1);
		bool L_6;
		L_6 = Predicate_1_Invoke_m10C29B9B5B4D26958247572D94A85AD8008FBD3A_inline(L_1, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		if (!L_6)
		{
			goto IL_002e;
		}
	}
	{
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_7 = __this->____items;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		return L_10;
	}

IL_002e:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0032:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____size;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957));
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_14 = V_1;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* List_1_FindAll_mC159716DB7C0B76957A46FEC26060FD2AC90D51A_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, Predicate_1_tE6CEF83377C879013E736AC152429530BFBE7BD7* ___0_match, const RuntimeMethod* method) 
{
	List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Predicate_1_tE6CEF83377C879013E736AC152429530BFBE7BD7* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* L_1 = (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		List_1__ctor_mB26899986F1FB5766A6D13F9ED0BD83D6E7EF66C(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_1;
		V_1 = 0;
		goto IL_003d;
	}

IL_0013:
	{
		Predicate_1_tE6CEF83377C879013E736AC152429530BFBE7BD7* L_2 = ___0_match;
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_3 = __this->____items;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_2);
		bool L_7;
		L_7 = Predicate_1_Invoke_m10C29B9B5B4D26958247572D94A85AD8008FBD3A_inline(L_2, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		if (!L_7)
		{
			goto IL_0039;
		}
	}
	{
		List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* L_8 = V_0;
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_9 = __this->____items;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_8);
		List_1_Add_mA97FD9B61331596E4585203CFD321A5A614A089D_inline(L_8, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0039:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_003d:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0013;
		}
	}
	{
		List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* L_16 = V_0;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m6A7E41E747D6F2E87573599E9F6F348D5A354688_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, Predicate_1_tE6CEF83377C879013E736AC152429530BFBE7BD7* ___0_match, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		Predicate_1_tE6CEF83377C879013E736AC152429530BFBE7BD7* L_1 = ___0_match;
		int32_t L_2;
		L_2 = List_1_FindIndex_mB4E1E158DAD24B61C4613806D6F074201B0FA54C(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_mB4E1E158DAD24B61C4613806D6F074201B0FA54C_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_tE6CEF83377C879013E736AC152429530BFBE7BD7* ___2_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_startIndex;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index_m94BADCC6D7EBBD12BE8323775FFB43AF01499B0F(NULL);
	}

IL_000e:
	{
		int32_t L_2 = ___1_count;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = ___0_startIndex;
		int32_t L_4 = __this->____size;
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_4, L_5)))))
		{
			goto IL_0022;
		}
	}

IL_001d:
	{
		ThrowHelper_ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count_m6C4A7F645BDD8EB62B50CB76E84416D94620DCC7(NULL);
	}

IL_0022:
	{
		Predicate_1_tE6CEF83377C879013E736AC152429530BFBE7BD7* L_6 = ___2_match;
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_002b:
	{
		int32_t L_7 = ___0_startIndex;
		int32_t L_8 = ___1_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		int32_t L_9 = ___0_startIndex;
		V_1 = L_9;
		goto IL_004d;
	}

IL_0033:
	{
		Predicate_1_tE6CEF83377C879013E736AC152429530BFBE7BD7* L_10 = ___2_match;
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_11 = __this->____items;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_10);
		bool L_15;
		L_15 = Predicate_1_Invoke_m10C29B9B5B4D26958247572D94A85AD8008FBD3A_inline(L_10, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		if (!L_15)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_16 = V_1;
		return L_16;
	}

IL_0049:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_004d:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0033;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_m764D43BF393E0EC672258DE38B7406B012698519_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, Action_1_t2518DEA327D7ACE4C30B14D8AFF5D4CFF5221B6F* ___0_action, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Action_1_t2518DEA327D7ACE4C30B14D8AFF5D4CFF5221B6F* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)33), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____version;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0034;
	}

IL_0015:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____version;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_003d;
		}
	}
	{
		Action_1_t2518DEA327D7ACE4C30B14D8AFF5D4CFF5221B6F* L_4 = ___0_action;
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_5 = __this->____items;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_4);
		Action_1_Invoke_m0E4885731BC5FB5682B2F9AAFE2051895D1E43DE_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0034:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0015;
		}
	}

IL_003d:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____version;
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion_m5331E2E0EC0E36843D53F439C2529530595ACE9F(NULL);
	}

IL_004b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC4C15C26A301F0CB28B97DFCFE9198EF13B61D16 List_1_GetEnumerator_mF882FF0A9A784FB7B07EA589780A27BD76DC64C8_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC4C15C26A301F0CB28B97DFCFE9198EF13B61D16 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m34968A644217338251F2ACA768630EC8F3B5D9A5((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mE798D9193E2408875252C78EF46AA69A8AC9E7EB_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC4C15C26A301F0CB28B97DFCFE9198EF13B61D16 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m34968A644217338251F2ACA768630EC8F3B5D9A5((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		Enumerator_tC4C15C26A301F0CB28B97DFCFE9198EF13B61D16 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 35), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_m83DF30F0B4DC45B3FCF7FA689CD525367E08F304_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC4C15C26A301F0CB28B97DFCFE9198EF13B61D16 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m34968A644217338251F2ACA768630EC8F3B5D9A5((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		Enumerator_tC4C15C26A301F0CB28B97DFCFE9198EF13B61D16 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 35), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m80D06B5A657DB69045A11F9FF589998F0D0473B5_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___0_item, const RuntimeMethod* method) 
{
	{
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_0 = __this->____items;
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_mF8787F8470EDB50EC2B2F6D5BAEE866038D93580(L_0, L_1, 0, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_IndexOf_m3EA56E7B9431099BFADCE0BA4C56BF8CEED26523_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_mB6476DD7C4A1FE9AF2F141A2C409DA5F89BB3016(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		int32_t L_3;
		L_3 = List_1_IndexOf_m80D06B5A657DB69045A11F9FF589998F0D0473B5(__this, ((*(ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957*)((ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957*)(ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mC6E0C73D771DB3EBF9929C85A6104EAB450FF7C9_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_index, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)13), (int32_t)((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_3 = __this->____items;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = __this->____size;
		List_1_EnsureCapacity_mE400A6352C1B01A9F706C2A4A3FCBA5AC451A12B(__this, ((int32_t)il2cpp_codegen_add(L_4, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_0030:
	{
		int32_t L_5 = ___0_index;
		int32_t L_6 = __this->____size;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0056;
		}
	}
	{
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_9 = __this->____items;
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		int32_t L_12 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_9, ((int32_t)il2cpp_codegen_add(L_10, 1)), ((int32_t)il2cpp_codegen_subtract(L_11, L_12)), NULL);
	}

IL_0056:
	{
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_13 = __this->____items;
		int32_t L_14 = ___0_index;
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_15 = ___1_item;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957)L_15);
		int32_t L_16 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_17, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Insert_mB65572E5C44B4AA07C03654DDE666FE87D66128D_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_m990D56DF011480F858DF755193A1BFF5E57882A0(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		List_1_Insert_mC6E0C73D771DB3EBF9929C85A6104EAB450FF7C9(__this, L_1, ((*(ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957*)((ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957*)(ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_mAFC44D9748F4101BF8F657632E33A3311C99D6BE_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_mE400A6352C1B01A9F706C2A4A3FCBA5AC451A12B(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_20 = __this->____items;
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		NullCheck(L_31);
		InterfaceActionInvoker2< ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					NullCheck((RuntimeObject*)L_41);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				NullCheck(L_44);
				ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_45;
				L_45 = InterfaceFuncInvoker0< ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 37), L_44);
				List_1_Insert_mC6E0C73D771DB3EBF9929C85A6104EAB450FF7C9(__this, L_43, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				NullCheck((RuntimeObject*)L_46);
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_mBE568D92B20DA843EC8D4F715D3B49D250D017DA(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4007A574A4578018527BF9C6C71D599EE37C44D7_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_m80D06B5A657DB69045A11F9FF589998F0D0473B5(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_m9F304F76856877707E79890515CE09FE5EA6CDDC(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Remove_m0D98ED88100E74B4C52E95A99E60E85AB18E6FDE_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_mB6476DD7C4A1FE9AF2F141A2C409DA5F89BB3016(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Remove_m4007A574A4578018527BF9C6C71D599EE37C44D7(__this, ((*(ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957*)((ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957*)(ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 43));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m498279CEACF319BD37A913B980015F0252430FEB_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, Predicate_1_tE6CEF83377C879013E736AC152429530BFBE7BD7* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_tE6CEF83377C879013E736AC152429530BFBE7BD7* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_tE6CEF83377C879013E736AC152429530BFBE7BD7* L_4 = ___0_match;
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_5 = __this->____items;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_4);
		bool L_9;
		L_9 = Predicate_1_Invoke_m10C29B9B5B4D26958247572D94A85AD8008FBD3A_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_tE6CEF83377C879013E736AC152429530BFBE7BD7* L_16 = ___0_match;
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_17 = __this->____items;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_16);
		bool L_21;
		L_21 = Predicate_1_Invoke_m10C29B9B5B4D26958247572D94A85AD8008FBD3A_inline(L_16, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		NullCheck(L_27);
		int32_t L_30 = L_29;
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_31 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
	}
	{
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_34 = __this->____items;
		int32_t L_35 = V_0;
		int32_t L_36 = __this->____size;
		int32_t L_37 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_34, L_35, ((int32_t)il2cpp_codegen_subtract(L_36, L_37)), NULL);
	}

IL_00ad:
	{
		int32_t L_38 = __this->____size;
		int32_t L_39 = V_0;
		int32_t L_40 = V_0;
		__this->____size = L_40;
		int32_t L_41 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_41, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_38, L_39));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m9F304F76856877707E79890515CE09FE5EA6CDDC_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
	}
	{
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_11 = __this->____items;
		int32_t L_12 = __this->____size;
		il2cpp_codegen_initobj((&V_0), sizeof(ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957));
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_13 = V_0;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957)L_13);
	}

IL_0063:
	{
		int32_t L_14 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_14, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m0A2949F52C3B69D075597CAFB78362B44220D31C_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}
	{
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_19 = __this->____items;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___1_count;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_19, L_20, L_21, NULL);
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m6B3D116BE87905664F33E225BFDAD6F85E73D030_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_mECD525A7CE3BC7B0E3FE954F13BC663410201A64_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		List_1_Reverse_mFA4F902852C0D8A3F42FD4F0ADE71D3A1E64E624(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mFA4F902852C0D8A3F42FD4F0ADE71D3A1E64E624_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_m86A0BC1B8395AE11EB9C77295CF870F5B575DBED(L_6, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m098EF4E5E109CDA60133BBDC9DADF91A95AFEC93_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_mECD525A7CE3BC7B0E3FE954F13BC663410201A64_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		List_1_Sort_mFDC39A435F990EBE553E7396F571BCBA185A7C2D(__this, 0, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m4191692288764A64035486B523A8D39A2EC21C57_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_mECD525A7CE3BC7B0E3FE954F13BC663410201A64_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_mFDC39A435F990EBE553E7396F571BCBA185A7C2D(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mFDC39A435F990EBE553E7396F571BCBA185A7C2D_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957_m36664F16D38B9991D799640827A2ED108697EBD4(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m0121BDA7B12CD06DB1E4DD4DFDDEC2CA10309DB8_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, Comparison_1_t9B7FBDDC31C2B4C836D05D7AB3126CC41FEA3F95* ___0_comparison, const RuntimeMethod* method) 
{
	{
		Comparison_1_t9B7FBDDC31C2B4C836D05D7AB3126CC41FEA3F95* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_t9B7FBDDC31C2B4C836D05D7AB3126CC41FEA3F95* L_4 = ___0_comparison;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 50));
		ArraySortHelper_1_Sort_m796F7D769836CE1E115461E94C531F07909CFA59(L_2, 0, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* List_1_ToArray_m5380D6E3C4771FF7D84421CE15B65F0FA64A036E_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, const RuntimeMethod* method) 
{
	ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_1 = ((List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_3 = (ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290*)(ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_4 = __this->____items;
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_mBE568D92B20DA843EC8D4F715D3B49D250D017DA_gshared (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					NullCheck((RuntimeObject*)L_4);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_6;
				L_6 = InterfaceFuncInvoker0< ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 37), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_8 = __this->____items;
				NullCheck(L_8);
				if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_9 = __this->____size;
				List_1_EnsureCapacity_mE400A6352C1B01A9F706C2A4A3FCBA5AC451A12B(__this, ((int32_t)il2cpp_codegen_add(L_9, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
			}

IL_003c_1:
			{
				ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_10 = __this->____items;
				int32_t L_11 = __this->____size;
				V_2 = L_11;
				int32_t L_12 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_12, 1));
				int32_t L_13 = V_2;
				ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_14 = V_1;
				NullCheck(L_10);
				(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957)L_14);
			}

IL_0059_1:
			{
				RuntimeObject* L_15 = V_0;
				NullCheck((RuntimeObject*)L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
				if (L_16)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_mE600C905A86B16B075E959BFF6E38F5F40E6DFFB_gshared (const RuntimeMethod* method) 
{
	{
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_0 = (ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290*)(ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), (uint32_t)0);
		((List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m3822E50E6CFA43F285BC3A2C44C55C79AAE6410D_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_0 = ((List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m10E7F2956C0D9E21C571A2BD741DEA6D65DBC481_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)12), (int32_t)4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_2 = ((List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_4 = (ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C*)(ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mDB86F69331936394CB42A3F62B06760FE09F016C_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_6 = ((List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_8 = (ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C*)(ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_10 = __this->____items;
		NullCheck(L_9);
		InterfaceActionInvoker2< ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_12 = ((List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_mE523543B7D064F3BD4FBC3315522D1CA64C5B6D7(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_m381D35FCC1D12ABA2A8EE461CDE293306BF32E91_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, const RuntimeMethod* method) 
{
	{
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_0 = __this->____items;
		NullCheck(L_0);
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mBA06C269D25E7BE90965DCF109DB6062DEDA523C_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)15), (int32_t)((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_3 = __this->____items;
		NullCheck(L_3);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_4 = ___0_value;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_5 = ___0_value;
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_6 = (ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C*)(ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		V_0 = L_6;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_8 = __this->____items;
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_9 = V_0;
		int32_t L_10 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, L_10, NULL);
	}

IL_0045:
	{
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_11 = V_0;
		__this->____items = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_11);
		return;
	}

IL_004d:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_12 = ((List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m22E00E30D2A3314CBE9F16BBF390E271EA8FBCBD_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsFixedSize_m9BE49D13E8A95ED6714B2057C5CABB791401FE5F_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m3EB964676B0C8561B48524C2DDDD16BCEF544C1B_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsReadOnly_mB7B7258CEA9617B80C179DC93DD1CD936D672BD5_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_ICollection_get_IsSynchronized_mE14A331F9F1D6C72902C528FF3C435D3EB93781B_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_ICollection_get_SyncRoot_m8A3D08C8DB11F3A058810E5219DCDC17B024921C_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E List_1_get_Item_m863A14084251DCC9E1B1B615CF789E4ADDE24E41_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m9087EADC873BBA59071598FE7C2A173E3080C61A_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, int32_t ___0_index, Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E L_4 = ___1_value;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_mF80C87D4683EF1A73192B493144DF81D0EA9D3D7_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E));
		Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_m3B6449D6266BD06CAAA0DEE5BF7943845EDDCF08_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E L_1;
		L_1 = List_1_get_Item_m863A14084251DCC9E1B1B615CF789E4ADDE24E41(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_mC87E2C699EDEB00891D658985F23C34D3AA8347C_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisItem_t590AA2925A38AA7EA48963775F482E9BA8525B4E_mB83D5084D4E7E0D7C58DF0D2BAEBF2CAE0F28679(L_0, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_m9087EADC873BBA59071598FE7C2A173E3080C61A(__this, L_1, ((*(Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E*)((Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E*)(Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m40316F9C09C447101208FB71D2B4C7EDE087F1D6_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E ___0_item, const RuntimeMethod* method) 
{
	ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_6 = V_0;
		int32_t L_7 = V_1;
		Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E)L_8);
		return;
	}

IL_0034:
	{
		Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E L_9 = ___0_item;
		List_1_AddWithResize_mAD3C558E9DE455512864C32580168C63670F671B(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mAD3C558E9DE455512864C32580168C63670F671B_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_m8FBE53849D4FD77B828E469753CA5CAB05728015(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_3 = __this->____items;
		int32_t L_4 = V_0;
		Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_m94FAB648575813A640516B6E4A5700E60DC9CF92_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisItem_t590AA2925A38AA7EA48963775F482E9BA8525B4E_mB83D5084D4E7E0D7C58DF0D2BAEBF2CAE0F28679(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_m40316F9C09C447101208FB71D2B4C7EDE087F1D6_inline(__this, ((*(Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E*)((Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E*)(Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_3 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_6;
		L_6 = List_1_get_Count_m22E00E30D2A3314CBE9F16BBF390E271EA8FBCBD_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_mE0336ABE7147D39FE0B6AFAC7445FA8ADF045F44_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_m1A74115BD294EABE7937C4C490A0CCB759A1DE93(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_BinarySearch_m9E68A36089C188BBD655E6E537F963FE12D3AC18_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, int32_t ___0_index, int32_t ___1_count, Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E ___2_item, RuntimeObject* ___3_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		int32_t L_7 = ___1_count;
		Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E L_8 = ___2_item;
		RuntimeObject* L_9 = ___3_comparer;
		int32_t L_10;
		L_10 = Array_BinarySearch_TisItem_t590AA2925A38AA7EA48963775F482E9BA8525B4E_m75013F9738C10650457039D6E81B89E693761D27(L_5, L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_BinarySearch_m86EBC7ED325E56C6590052389E29CC8268D05751_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m22E00E30D2A3314CBE9F16BBF390E271EA8FBCBD_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_BinarySearch_m9E68A36089C188BBD655E6E537F963FE12D3AC18(__this, 0, L_0, L_1, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_BinarySearch_m9AA324054E8ED7A33FA04284EC5305F982B9ECED_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E ___0_item, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m22E00E30D2A3314CBE9F16BBF390E271EA8FBCBD_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E L_1 = ___0_item;
		RuntimeObject* L_2 = ___1_comparer;
		int32_t L_3;
		L_3 = List_1_BinarySearch_m9E68A36089C188BBD655E6E537F963FE12D3AC18(__this, 0, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m1CDCBCCD6BCEDF3C62F6AC729E8364EF236C00E4_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_0035;
	}

IL_0035:
	{
		__this->____size = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m9D7E622FF61060B5621E00E451B220D91539C748_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_mD6A759CC6868F6EA2AD5DA34656EBBA4C020474A(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_Contains_mA984292F31DBA6573429805CBB336E18539BE04A_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_mF80C87D4683EF1A73192B493144DF81D0EA9D3D7(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Contains_m9D7E622FF61060B5621E00E451B220D91539C748(__this, ((*(Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E*)((Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E*)(Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m96C55AD8D63F0B3753A47743B8DF373B60BF93AF_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* ___0_array, const RuntimeMethod* method) 
{
	{
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_0 = ___0_array;
		List_1_CopyTo_m91ED772345185F703C833D6724C71C46B65B0649(__this, L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_ICollection_CopyTo_mD3EEFBAC42A6201EB78162E1C19F613F992BC19D_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0012:
	{
	}
	try
	{
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_3 = __this->____items;
		RuntimeArray* L_4 = ___0_array;
		int32_t L_5 = ___1_arrayIndex;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, L_4, L_5, L_6, NULL);
		goto IL_0031;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0029;
		}
		throw e;
	}

CATCH_0029:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_7 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0031;
	}

IL_0031:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m91ED772345185F703C833D6724C71C46B65B0649_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_0 = __this->____items;
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m8FBE53849D4FD77B828E469753CA5CAB05728015_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_0 = __this->____items;
		NullCheck(L_0);
		int32_t L_1 = ___0_min;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)L_1)))
		{
			goto IL_003d;
		}
	}
	{
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_2 = __this->____items;
		NullCheck(L_2);
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_3 = __this->____items;
		NullCheck(L_3);
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_3)->max_length)), 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_min;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_7 = ___0_min;
		V_0 = L_7;
	}

IL_0036:
	{
		int32_t L_8 = V_0;
		List_1_set_Capacity_mBA06C269D25E7BE90965DCF109DB6062DEDA523C(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Exists_mAD4BA1C3D2CF8F2C015250129D7E5FB64A5A0F47_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, Predicate_1_t4217DDE556AA2DD5A06797A7B6ADC3C6E795D010* ___0_match, const RuntimeMethod* method) 
{
	{
		Predicate_1_t4217DDE556AA2DD5A06797A7B6ADC3C6E795D010* L_0 = ___0_match;
		int32_t L_1;
		L_1 = List_1_FindIndex_mF2FC62698E1FF5A9F1C8A74480F1BB9613E1B339(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		return (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E List_1_Find_m56A08DD6317614139D5B4E04183EF448156C2A96_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, Predicate_1_t4217DDE556AA2DD5A06797A7B6ADC3C6E795D010* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Predicate_1_t4217DDE556AA2DD5A06797A7B6ADC3C6E795D010* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0032;
	}

IL_000d:
	{
		Predicate_1_t4217DDE556AA2DD5A06797A7B6ADC3C6E795D010* L_1 = ___0_match;
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_2 = __this->____items;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_1);
		bool L_6;
		L_6 = Predicate_1_Invoke_m8CACEA4E17FB9648171CCB77D5CA3EDF7248F332_inline(L_1, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		if (!L_6)
		{
			goto IL_002e;
		}
	}
	{
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_7 = __this->____items;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		return L_10;
	}

IL_002e:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0032:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____size;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E));
		Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E L_14 = V_1;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* List_1_FindAll_m7C6885042D5565CC9F93C9C87F6951BDA9905D94_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, Predicate_1_t4217DDE556AA2DD5A06797A7B6ADC3C6E795D010* ___0_match, const RuntimeMethod* method) 
{
	List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Predicate_1_t4217DDE556AA2DD5A06797A7B6ADC3C6E795D010* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* L_1 = (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		List_1__ctor_m3822E50E6CFA43F285BC3A2C44C55C79AAE6410D(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_1;
		V_1 = 0;
		goto IL_003d;
	}

IL_0013:
	{
		Predicate_1_t4217DDE556AA2DD5A06797A7B6ADC3C6E795D010* L_2 = ___0_match;
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_3 = __this->____items;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_2);
		bool L_7;
		L_7 = Predicate_1_Invoke_m8CACEA4E17FB9648171CCB77D5CA3EDF7248F332_inline(L_2, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		if (!L_7)
		{
			goto IL_0039;
		}
	}
	{
		List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* L_8 = V_0;
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_9 = __this->____items;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_8);
		List_1_Add_m40316F9C09C447101208FB71D2B4C7EDE087F1D6_inline(L_8, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0039:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_003d:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0013;
		}
	}
	{
		List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* L_16 = V_0;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_mF2FC62698E1FF5A9F1C8A74480F1BB9613E1B339_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, Predicate_1_t4217DDE556AA2DD5A06797A7B6ADC3C6E795D010* ___0_match, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		Predicate_1_t4217DDE556AA2DD5A06797A7B6ADC3C6E795D010* L_1 = ___0_match;
		int32_t L_2;
		L_2 = List_1_FindIndex_mFF62E38A37474AF6586191B1DF5CBDF9D7581CCE(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_mFF62E38A37474AF6586191B1DF5CBDF9D7581CCE_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t4217DDE556AA2DD5A06797A7B6ADC3C6E795D010* ___2_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_startIndex;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index_m94BADCC6D7EBBD12BE8323775FFB43AF01499B0F(NULL);
	}

IL_000e:
	{
		int32_t L_2 = ___1_count;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = ___0_startIndex;
		int32_t L_4 = __this->____size;
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_4, L_5)))))
		{
			goto IL_0022;
		}
	}

IL_001d:
	{
		ThrowHelper_ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count_m6C4A7F645BDD8EB62B50CB76E84416D94620DCC7(NULL);
	}

IL_0022:
	{
		Predicate_1_t4217DDE556AA2DD5A06797A7B6ADC3C6E795D010* L_6 = ___2_match;
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_002b:
	{
		int32_t L_7 = ___0_startIndex;
		int32_t L_8 = ___1_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		int32_t L_9 = ___0_startIndex;
		V_1 = L_9;
		goto IL_004d;
	}

IL_0033:
	{
		Predicate_1_t4217DDE556AA2DD5A06797A7B6ADC3C6E795D010* L_10 = ___2_match;
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_11 = __this->____items;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_10);
		bool L_15;
		L_15 = Predicate_1_Invoke_m8CACEA4E17FB9648171CCB77D5CA3EDF7248F332_inline(L_10, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		if (!L_15)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_16 = V_1;
		return L_16;
	}

IL_0049:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_004d:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0033;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_m92B75893FED172FABC7D360B7028D0541DE3FBC7_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, Action_1_tABD04F977BAE1165FCC3D57AAB3F5C16F3E97674* ___0_action, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Action_1_tABD04F977BAE1165FCC3D57AAB3F5C16F3E97674* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)33), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____version;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0034;
	}

IL_0015:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____version;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_003d;
		}
	}
	{
		Action_1_tABD04F977BAE1165FCC3D57AAB3F5C16F3E97674* L_4 = ___0_action;
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_5 = __this->____items;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_4);
		Action_1_Invoke_m530925ADE5205080923A6AF7ECAEC6BF0F05602C_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0034:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0015;
		}
	}

IL_003d:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____version;
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion_m5331E2E0EC0E36843D53F439C2529530595ACE9F(NULL);
	}

IL_004b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t4EB0A412E114F46D610EDBC4C0AEE8A523FB95E5 List_1_GetEnumerator_m30F21D18EAD84BC0664AFB24365F4625799C6748_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4EB0A412E114F46D610EDBC4C0AEE8A523FB95E5 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m0666389F92EFD1388B5CE9F16A65D85E3BDBC5CB((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m5657C19E32ED2CC272131EC77C51DE562EF7B5B9_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4EB0A412E114F46D610EDBC4C0AEE8A523FB95E5 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m0666389F92EFD1388B5CE9F16A65D85E3BDBC5CB((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		Enumerator_t4EB0A412E114F46D610EDBC4C0AEE8A523FB95E5 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 35), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_mFB8BE6B3247FC55EA6E8F14911028D73A47BE10E_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4EB0A412E114F46D610EDBC4C0AEE8A523FB95E5 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m0666389F92EFD1388B5CE9F16A65D85E3BDBC5CB((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		Enumerator_t4EB0A412E114F46D610EDBC4C0AEE8A523FB95E5 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 35), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_mD6A759CC6868F6EA2AD5DA34656EBBA4C020474A_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E ___0_item, const RuntimeMethod* method) 
{
	{
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_0 = __this->____items;
		Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisItem_t590AA2925A38AA7EA48963775F482E9BA8525B4E_m0C78909B5D6CDDC2DE333F944D4ED9811536D895(L_0, L_1, 0, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_IndexOf_mE38D0BA9DE92966991D9401E365B1E73FDEF05D1_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_mF80C87D4683EF1A73192B493144DF81D0EA9D3D7(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		int32_t L_3;
		L_3 = List_1_IndexOf_mD6A759CC6868F6EA2AD5DA34656EBBA4C020474A(__this, ((*(Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E*)((Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E*)(Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mB3BBB9B90C3A0C8A7B4B5089D4A70E291643EE41_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, int32_t ___0_index, Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)13), (int32_t)((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_3 = __this->____items;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = __this->____size;
		List_1_EnsureCapacity_m8FBE53849D4FD77B828E469753CA5CAB05728015(__this, ((int32_t)il2cpp_codegen_add(L_4, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_0030:
	{
		int32_t L_5 = ___0_index;
		int32_t L_6 = __this->____size;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0056;
		}
	}
	{
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_9 = __this->____items;
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		int32_t L_12 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_9, ((int32_t)il2cpp_codegen_add(L_10, 1)), ((int32_t)il2cpp_codegen_subtract(L_11, L_12)), NULL);
	}

IL_0056:
	{
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_13 = __this->____items;
		int32_t L_14 = ___0_index;
		Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E L_15 = ___1_item;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E)L_15);
		int32_t L_16 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_17, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Insert_m82FD6D3F1AA2E05FC27A2CB0240A12E0FA73FD52_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisItem_t590AA2925A38AA7EA48963775F482E9BA8525B4E_mB83D5084D4E7E0D7C58DF0D2BAEBF2CAE0F28679(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		List_1_Insert_mB3BBB9B90C3A0C8A7B4B5089D4A70E291643EE41(__this, L_1, ((*(Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E*)((Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E*)(Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m1A74115BD294EABE7937C4C490A0CCB759A1DE93_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_m8FBE53849D4FD77B828E469753CA5CAB05728015(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_20 = __this->____items;
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		NullCheck(L_31);
		InterfaceActionInvoker2< ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					NullCheck((RuntimeObject*)L_41);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				NullCheck(L_44);
				Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E L_45;
				L_45 = InterfaceFuncInvoker0< Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 37), L_44);
				List_1_Insert_mB3BBB9B90C3A0C8A7B4B5089D4A70E291643EE41(__this, L_43, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				NullCheck((RuntimeObject*)L_46);
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_mE523543B7D064F3BD4FBC3315522D1CA64C5B6D7(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m3A77D6A2E2444ACE03322869783DFB0850E01437_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_mD6A759CC6868F6EA2AD5DA34656EBBA4C020474A(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_m03F8C2C0BB44ACBDA56835FE66494E7A2C885024(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Remove_m5D180686AD5E89D3D8532BB47B82B879E9C7ACFD_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_mF80C87D4683EF1A73192B493144DF81D0EA9D3D7(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Remove_m3A77D6A2E2444ACE03322869783DFB0850E01437(__this, ((*(Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E*)((Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E*)(Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 43));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_mB2F427B6F7088CE3522D847F2D333C5F6662767C_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, Predicate_1_t4217DDE556AA2DD5A06797A7B6ADC3C6E795D010* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t4217DDE556AA2DD5A06797A7B6ADC3C6E795D010* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_t4217DDE556AA2DD5A06797A7B6ADC3C6E795D010* L_4 = ___0_match;
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_5 = __this->____items;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_4);
		bool L_9;
		L_9 = Predicate_1_Invoke_m8CACEA4E17FB9648171CCB77D5CA3EDF7248F332_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_t4217DDE556AA2DD5A06797A7B6ADC3C6E795D010* L_16 = ___0_match;
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_17 = __this->____items;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_16);
		bool L_21;
		L_21 = Predicate_1_Invoke_m8CACEA4E17FB9648171CCB77D5CA3EDF7248F332_inline(L_16, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		NullCheck(L_27);
		int32_t L_30 = L_29;
		Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E L_31 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
		goto IL_00ad;
	}

IL_00ad:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_0;
		int32_t L_36 = V_0;
		__this->____size = L_36;
		int32_t L_37 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_37, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m03F8C2C0BB44ACBDA56835FE66494E7A2C885024_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
		goto IL_0063;
	}

IL_0063:
	{
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m67854AC87A317DDE34FDE7887005D269EBB1F08C_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		goto IL_008d;
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mEC615720BC3519FC8F772FFD27B1984600E0642B_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m22E00E30D2A3314CBE9F16BBF390E271EA8FBCBD_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		List_1_Reverse_m16173FC86AC27F3FCA48D99809384360145C5FC7(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m16173FC86AC27F3FCA48D99809384360145C5FC7_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisItem_t590AA2925A38AA7EA48963775F482E9BA8525B4E_mA9C906F13041DFD9F8C2F873824B7EECD1AB6BCE(L_6, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m77289AE28A0568C7FAA61BB459BDCAA7F67728DB_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m22E00E30D2A3314CBE9F16BBF390E271EA8FBCBD_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		List_1_Sort_mD4853E0DEDC76E60F857E6AE62181E82F1DA913A(__this, 0, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m25E066625230DE2087FB84D412A11D94269C799C_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m22E00E30D2A3314CBE9F16BBF390E271EA8FBCBD_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_mD4853E0DEDC76E60F857E6AE62181E82F1DA913A(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mD4853E0DEDC76E60F857E6AE62181E82F1DA913A_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisItem_t590AA2925A38AA7EA48963775F482E9BA8525B4E_m54A2600327623CE0DA1FD8833B7D5F6EF807CA12(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mA8FCEA0B1AA1D6920027AFC37437BE57D03C067E_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, Comparison_1_tAFEE7C13ACABD76E510EEF1E65B8A7D2644A427D* ___0_comparison, const RuntimeMethod* method) 
{
	{
		Comparison_1_tAFEE7C13ACABD76E510EEF1E65B8A7D2644A427D* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_tAFEE7C13ACABD76E510EEF1E65B8A7D2644A427D* L_4 = ___0_comparison;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 50));
		ArraySortHelper_1_Sort_mC2C11EA20C1CAEA09CDE1AB0930313672F20F75B(L_2, 0, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* List_1_ToArray_m666B32F85CD06CB6D2D79653D70AB8D4518F6E02_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, const RuntimeMethod* method) 
{
	ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_1 = ((List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_3 = (ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C*)(ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_4 = __this->____items;
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_mE523543B7D064F3BD4FBC3315522D1CA64C5B6D7_gshared (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					NullCheck((RuntimeObject*)L_4);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E L_6;
				L_6 = InterfaceFuncInvoker0< Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 37), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_8 = __this->____items;
				NullCheck(L_8);
				if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_9 = __this->____size;
				List_1_EnsureCapacity_m8FBE53849D4FD77B828E469753CA5CAB05728015(__this, ((int32_t)il2cpp_codegen_add(L_9, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
			}

IL_003c_1:
			{
				ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_10 = __this->____items;
				int32_t L_11 = __this->____size;
				V_2 = L_11;
				int32_t L_12 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_12, 1));
				int32_t L_13 = V_2;
				Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E L_14 = V_1;
				NullCheck(L_10);
				(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E)L_14);
			}

IL_0059_1:
			{
				RuntimeObject* L_15 = V_0;
				NullCheck((RuntimeObject*)L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
				if (L_16)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_mC191B500F1874B3394455E7312E11A0340154796_gshared (const RuntimeMethod* method) 
{
	{
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_0 = (ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C*)(ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), (uint32_t)0);
		((List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m52181F409642C097D83A405774F65B131CD05C13_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_0 = ((List_1_t065A1950A0B1D84B65A5256E8063120B10018641_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF61B2E72996C49D9768BD51A5168A1CBAAD6B0FC_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)12), (int32_t)4, NULL);
	}

IL_0012:
	{
		int32_t L_1 = ___0_capacity;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_2 = ((List_1_t065A1950A0B1D84B65A5256E8063120B10018641_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_2);
		return;
	}

IL_0021:
	{
		int32_t L_3 = ___0_capacity;
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_4 = (RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8*)(RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_3);
		__this->____items = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m97524D29918A906FA66817A96E9856E939339223_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_collection;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_000f:
	{
		RuntimeObject* L_1 = ___0_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_6 = ((List_1_t065A1950A0B1D84B65A5256E8063120B10018641_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_6);
		return;
	}

IL_002f:
	{
		int32_t L_7 = V_1;
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_8 = (RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8*)(RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_7);
		__this->____items = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_8);
		RuntimeObject* L_9 = V_0;
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_10 = __this->____items;
		NullCheck(L_9);
		InterfaceActionInvoker2< RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_9, L_10, 0);
		int32_t L_11 = V_1;
		__this->____size = L_11;
		return;
	}

IL_0050:
	{
		__this->____size = 0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_12 = ((List_1_t065A1950A0B1D84B65A5256E8063120B10018641_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		RuntimeObject* L_13 = ___0_collection;
		List_1_AddEnumerable_m2075AE32C628E6DB4F52FE0697F5354713D7843C(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_m62076C2385A7E11AE01B32984FFE023ACDF08419_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, const RuntimeMethod* method) 
{
	{
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_0 = __this->____items;
		NullCheck(L_0);
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mD77B216D8CC55865F1091896E7E61F3EBACE07D1_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)15), (int32_t)((int32_t)21), NULL);
	}

IL_0012:
	{
		int32_t L_2 = ___0_value;
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_3 = __this->____items;
		NullCheck(L_3);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_4 = ___0_value;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_5 = ___0_value;
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_6 = (RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8*)(RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		V_0 = L_6;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_8 = __this->____items;
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_9 = V_0;
		int32_t L_10 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, L_10, NULL);
	}

IL_0045:
	{
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_11 = V_0;
		__this->____items = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_11);
		return;
	}

IL_004d:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_12 = ((List_1_t065A1950A0B1D84B65A5256E8063120B10018641_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
	}

IL_0058:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m401900762AD72612336502EA7DF602A79F433BCD_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsFixedSize_mF6A5059B9B6D69B09375860F99C54D72197DE27E_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m8068F7EBD84D583AAAE1947FE875CC5D64080C7F_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_get_IsReadOnly_m1D34327F4515580251AF722BE24437F5AC203671_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_ICollection_get_IsSynchronized_mEC43D683718880A47C356DE42362315DE4DB26DD_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_ICollection_get_SyncRoot_m0F4B54F3D73D9E4051E1027020C22B244479BADF_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E List_1_get_Item_mA457677CED2CC7B20C2B6CE6495CD4CFB2DCAF29_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m1AD529A27876EB0D02729B6BDCD19A90D1968F2A_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, int32_t ___0_index, RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_2 = __this->____items;
		int32_t L_3 = ___0_index;
		RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E L_4 = ___1_value;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E)L_4);
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_IsCompatibleObject_m3F3693EDC370A919A9342D84A2E059762831ABCA_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E));
		RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IList_get_Item_m0CD03A2FB22576A50DAC6D10E62911936721C918_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E L_1;
		L_1 = List_1_get_Item_mA457677CED2CC7B20C2B6CE6495CD4CFB2DCAF29(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9), &L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_set_Item_m92B655C9AEE0EBD6CED56AF778BF2A855D2C51F6_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E_m7A699705EC9A9F5C847119D958A14716EF7AFBE2(L_0, (int32_t)((int32_t)15), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		List_1_set_Item_m1AD529A27876EB0D02729B6BDCD19A90D1968F2A(__this, L_1, ((*(RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E*)((RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E*)(RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mC950522AE5F5CFBEEF0E76878C42C6A16B38362D_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E ___0_item, const RuntimeMethod* method) 
{
	RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_6 = V_0;
		int32_t L_7 = V_1;
		RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E)L_8);
		return;
	}

IL_0034:
	{
		RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E L_9 = ___0_item;
		List_1_AddWithResize_m07ACD6768A0967EF7A094F9E52196EEC6093937A(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m07ACD6768A0967EF7A094F9E52196EEC6093937A_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		V_0 = L_0;
		int32_t L_1 = V_0;
		List_1_EnsureCapacity_m8D142CE70507F180C33C9BF18D837CD8281ECEB1(__this, ((int32_t)il2cpp_codegen_add(L_1, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_2 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_2, 1));
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_3 = __this->____items;
		int32_t L_4 = V_0;
		RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E L_5 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_Add_m69C8EA34C9F2076539FBBA4C6755BF3F0D62BADF_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E_m7A699705EC9A9F5C847119D958A14716EF7AFBE2(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		RuntimeObject* L_1 = ___0_item;
		List_1_Add_mC950522AE5F5CFBEEF0E76878C42C6A16B38362D_inline(__this, ((*(RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E*)((RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E*)(RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E*)UnBox(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		goto IL_0029;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_3 = ___0_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_3, L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0029;
	}

IL_0029:
	{
		int32_t L_6;
		L_6 = List_1_get_Count_m401900762AD72612336502EA7DF602A79F433BCD_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		return ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_mFC05EDC082AF8878AC58919DCE142D87982D0C40_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		List_1_InsertRange_m3B9047BA1CAE8E8BD34B2544AC652F6D73BDB053(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_BinarySearch_mEF77A9EA47A7C80BAEA27FE8E8084F5DFDF17C3C_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, int32_t ___0_index, int32_t ___1_count, RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E ___2_item, RuntimeObject* ___3_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		int32_t L_7 = ___1_count;
		RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E L_8 = ___2_item;
		RuntimeObject* L_9 = ___3_comparer;
		int32_t L_10;
		L_10 = Array_BinarySearch_TisRecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E_m6CBB3D0BBB52991B9243E809EDE29ADA9248D4DC(L_5, L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_BinarySearch_mFC45649ABA7111961AD8E6FDBE5329E1E4BA6A6A_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m401900762AD72612336502EA7DF602A79F433BCD_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_BinarySearch_mEF77A9EA47A7C80BAEA27FE8E8084F5DFDF17C3C(__this, 0, L_0, L_1, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_BinarySearch_mC387AA8256C3CF1209E37894A770A3BBF1AC1616_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E ___0_item, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m401900762AD72612336502EA7DF602A79F433BCD_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E L_1 = ___0_item;
		RuntimeObject* L_2 = ___1_comparer;
		int32_t L_3;
		L_3 = List_1_BinarySearch_mEF77A9EA47A7C80BAEA27FE8E8084F5DFDF17C3C(__this, 0, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m2F798E752D275B8370E796D08CD2EFD4A47AD4CB_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_0035;
	}

IL_0035:
	{
		__this->____size = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mB1109C0182FCEE34CCD7C745B2BAE1CF46984CA9_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E L_1 = ___0_item;
		int32_t L_2;
		L_2 = List_1_IndexOf_m10D493DCE0F2E6E04C595EDC89F3F61448F93220(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0016:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_System_Collections_IList_Contains_mC5305E4310B5DD6F7BD87223BF0E898AA06074E6_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m3F3693EDC370A919A9342D84A2E059762831ABCA(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Contains_mB1109C0182FCEE34CCD7C745B2BAE1CF46984CA9(__this, ((*(RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E*)((RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E*)(RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_mFB3C64A1BC28C3DD9F3FD3F3C105F4ACC09AFAF2_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* ___0_array, const RuntimeMethod* method) 
{
	{
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_0 = ___0_array;
		List_1_CopyTo_m35E5EB67CE1D21C76FD8637A74F3DA427C662139(__this, L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_ICollection_CopyTo_m076038F87D31E4EB0B2AAFCC3D70E27FDDC584F0_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, RuntimeArray* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)7, NULL);
	}

IL_0012:
	{
	}
	try
	{
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_3 = __this->____items;
		RuntimeArray* L_4 = ___0_array;
		int32_t L_5 = ___1_arrayIndex;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, L_4, L_5, L_6, NULL);
		goto IL_0031;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0029;
		}
		throw e;
	}

CATCH_0029:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_7 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0031;
	}

IL_0031:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m35E5EB67CE1D21C76FD8637A74F3DA427C662139_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_0 = __this->____items;
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_EnsureCapacity_m8D142CE70507F180C33C9BF18D837CD8281ECEB1_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_0 = __this->____items;
		NullCheck(L_0);
		int32_t L_1 = ___0_min;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)L_1)))
		{
			goto IL_003d;
		}
	}
	{
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_2 = __this->____items;
		NullCheck(L_2);
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_3 = __this->____items;
		NullCheck(L_3);
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_3)->max_length)), 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0030:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_min;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_7 = ___0_min;
		V_0 = L_7;
	}

IL_0036:
	{
		int32_t L_8 = V_0;
		List_1_set_Capacity_mD77B216D8CC55865F1091896E7E61F3EBACE07D1(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Exists_mC6294F6587A0B37DD671B9D8892D0DFB76E1808D_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, Predicate_1_t8A5AF3450E7B0054E5339AB18FD29FA24A371BC1* ___0_match, const RuntimeMethod* method) 
{
	{
		Predicate_1_t8A5AF3450E7B0054E5339AB18FD29FA24A371BC1* L_0 = ___0_match;
		int32_t L_1;
		L_1 = List_1_FindIndex_m40550873FEE2B0E9C2AF5D0A5CA4715705646763(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		return (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E List_1_Find_mE1D097C563677CAB1D4642BEB4F9DB9B5DEF75DC_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, Predicate_1_t8A5AF3450E7B0054E5339AB18FD29FA24A371BC1* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Predicate_1_t8A5AF3450E7B0054E5339AB18FD29FA24A371BC1* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0032;
	}

IL_000d:
	{
		Predicate_1_t8A5AF3450E7B0054E5339AB18FD29FA24A371BC1* L_1 = ___0_match;
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_2 = __this->____items;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_1);
		bool L_6;
		L_6 = Predicate_1_Invoke_m3546977A385098FD45CF8006D8613DAE78078B15_inline(L_1, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		if (!L_6)
		{
			goto IL_002e;
		}
	}
	{
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_7 = __this->____items;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		return L_10;
	}

IL_002e:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0032:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____size;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E));
		RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E L_14 = V_1;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t065A1950A0B1D84B65A5256E8063120B10018641* List_1_FindAll_m3DCC33872A28C4B065F0FFEDA580CAE11AC974F9_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, Predicate_1_t8A5AF3450E7B0054E5339AB18FD29FA24A371BC1* ___0_match, const RuntimeMethod* method) 
{
	List_1_t065A1950A0B1D84B65A5256E8063120B10018641* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Predicate_1_t8A5AF3450E7B0054E5339AB18FD29FA24A371BC1* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		List_1_t065A1950A0B1D84B65A5256E8063120B10018641* L_1 = (List_1_t065A1950A0B1D84B65A5256E8063120B10018641*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		List_1__ctor_m52181F409642C097D83A405774F65B131CD05C13(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		V_0 = L_1;
		V_1 = 0;
		goto IL_003d;
	}

IL_0013:
	{
		Predicate_1_t8A5AF3450E7B0054E5339AB18FD29FA24A371BC1* L_2 = ___0_match;
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_3 = __this->____items;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_2);
		bool L_7;
		L_7 = Predicate_1_Invoke_m3546977A385098FD45CF8006D8613DAE78078B15_inline(L_2, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		if (!L_7)
		{
			goto IL_0039;
		}
	}
	{
		List_1_t065A1950A0B1D84B65A5256E8063120B10018641* L_8 = V_0;
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_9 = __this->____items;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_8);
		List_1_Add_mC950522AE5F5CFBEEF0E76878C42C6A16B38362D_inline(L_8, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_0039:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_003d:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0013;
		}
	}
	{
		List_1_t065A1950A0B1D84B65A5256E8063120B10018641* L_16 = V_0;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_m40550873FEE2B0E9C2AF5D0A5CA4715705646763_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, Predicate_1_t8A5AF3450E7B0054E5339AB18FD29FA24A371BC1* ___0_match, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		Predicate_1_t8A5AF3450E7B0054E5339AB18FD29FA24A371BC1* L_1 = ___0_match;
		int32_t L_2;
		L_2 = List_1_FindIndex_mD080AA5F7AB6308C0B24313611AEC16524933980(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_FindIndex_mD080AA5F7AB6308C0B24313611AEC16524933980_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, int32_t ___0_startIndex, int32_t ___1_count, Predicate_1_t8A5AF3450E7B0054E5339AB18FD29FA24A371BC1* ___2_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_startIndex;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index_m94BADCC6D7EBBD12BE8323775FFB43AF01499B0F(NULL);
	}

IL_000e:
	{
		int32_t L_2 = ___1_count;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = ___0_startIndex;
		int32_t L_4 = __this->____size;
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_4, L_5)))))
		{
			goto IL_0022;
		}
	}

IL_001d:
	{
		ThrowHelper_ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count_m6C4A7F645BDD8EB62B50CB76E84416D94620DCC7(NULL);
	}

IL_0022:
	{
		Predicate_1_t8A5AF3450E7B0054E5339AB18FD29FA24A371BC1* L_6 = ___2_match;
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_002b:
	{
		int32_t L_7 = ___0_startIndex;
		int32_t L_8 = ___1_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		int32_t L_9 = ___0_startIndex;
		V_1 = L_9;
		goto IL_004d;
	}

IL_0033:
	{
		Predicate_1_t8A5AF3450E7B0054E5339AB18FD29FA24A371BC1* L_10 = ___2_match;
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_11 = __this->____items;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_10);
		bool L_15;
		L_15 = Predicate_1_Invoke_m3546977A385098FD45CF8006D8613DAE78078B15_inline(L_10, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		if (!L_15)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_16 = V_1;
		return L_16;
	}

IL_0049:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_004d:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0033;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_mD75DF7DA08AF98ACEEC25F19EC4EA3A2B538214B_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, Action_1_tA19957CC720A8A8732F921D4AD3702951E7762AF* ___0_action, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Action_1_tA19957CC720A8A8732F921D4AD3702951E7762AF* L_0 = ___0_action;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)33), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____version;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0034;
	}

IL_0015:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____version;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_003d;
		}
	}
	{
		Action_1_tA19957CC720A8A8732F921D4AD3702951E7762AF* L_4 = ___0_action;
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_5 = __this->____items;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_4);
		Action_1_Invoke_m428A1EAD709638EC1BF95DEFA4A3FB88ED859E65_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0034:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0015;
		}
	}

IL_003d:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = __this->____version;
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_004b;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion_m5331E2E0EC0E36843D53F439C2529530595ACE9F(NULL);
	}

IL_004b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t6FC3A8CABABF859880C2F601A072BC8D9C8BE85C List_1_GetEnumerator_m5A8B9F85EF26CD5F1EFA8CC27CAF0D6210D3C329_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t6FC3A8CABABF859880C2F601A072BC8D9C8BE85C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mF9FCC24D6620741EDA6B46645CAC209D2452023C((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m1525591D8EC82A7490355FFC1590E0B74F26FC3C_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t6FC3A8CABABF859880C2F601A072BC8D9C8BE85C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mF9FCC24D6620741EDA6B46645CAC209D2452023C((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		Enumerator_t6FC3A8CABABF859880C2F601A072BC8D9C8BE85C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 35), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_System_Collections_IEnumerable_GetEnumerator_m81200E561102979FDF75B4C3FA9EEECB8C99F775_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t6FC3A8CABABF859880C2F601A072BC8D9C8BE85C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mF9FCC24D6620741EDA6B46645CAC209D2452023C((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		Enumerator_t6FC3A8CABABF859880C2F601A072BC8D9C8BE85C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 35), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m10D493DCE0F2E6E04C595EDC89F3F61448F93220_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E ___0_item, const RuntimeMethod* method) 
{
	{
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_0 = __this->____items;
		RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisRecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E_m4AFBCFD93214E2980557CDEB2DDF459699C44972(L_0, L_1, 0, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_System_Collections_IList_IndexOf_m21D8FDCC9930671654B71682E1885662E2458951_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m3F3693EDC370A919A9342D84A2E059762831ABCA(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		int32_t L_3;
		L_3 = List_1_IndexOf_m10D493DCE0F2E6E04C595EDC89F3F61448F93220(__this, ((*(RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E*)((RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E*)(RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m52037E7189A3411B290F6CB3ADC3705C2A7C6983_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, int32_t ___0_index, RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)13), (int32_t)((int32_t)27), NULL);
	}

IL_0012:
	{
		int32_t L_2 = __this->____size;
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_3 = __this->____items;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = __this->____size;
		List_1_EnsureCapacity_m8D142CE70507F180C33C9BF18D837CD8281ECEB1(__this, ((int32_t)il2cpp_codegen_add(L_4, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
	}

IL_0030:
	{
		int32_t L_5 = ___0_index;
		int32_t L_6 = __this->____size;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0056;
		}
	}
	{
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_9 = __this->____items;
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		int32_t L_12 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_9, ((int32_t)il2cpp_codegen_add(L_10, 1)), ((int32_t)il2cpp_codegen_subtract(L_11, L_12)), NULL);
	}

IL_0056:
	{
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_13 = __this->____items;
		int32_t L_14 = ___0_index;
		RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E L_15 = ___1_item;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E)L_15);
		int32_t L_16 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_17, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Insert_m97DA586625021D049A323483A33FC504B5754CD4_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_item;
		ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E_m7A699705EC9A9F5C847119D958A14716EF7AFBE2(L_0, (int32_t)((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_item;
		List_1_Insert_m52037E7189A3411B290F6CB3ADC3705C2A7C6983(__this, L_1, ((*(RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E*)((RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E*)(RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		goto IL_002a;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_item;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 13)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		ThrowHelper_ThrowWrongValueTypeArgumentException_mC1A6BBE43C360583C1E2C463D5B0AADF1E3E1910(L_4, L_6, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002a;
	}

IL_002a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_m3B9047BA1CAE8E8BD34B2544AC652F6D73BDB053_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)6, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((!(((uint32_t)L_1) > ((uint32_t)L_2))))
		{
			goto IL_0017;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_5);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00fb;
		}
	}
	{
		int32_t L_8 = __this->____size;
		int32_t L_9 = V_1;
		List_1_EnsureCapacity_m8D142CE70507F180C33C9BF18D837CD8281ECEB1(__this, ((int32_t)il2cpp_codegen_add(L_8, L_9)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0066;
		}
	}
	{
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_12 = __this->____items;
		int32_t L_13 = ___0_index;
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = V_1;
		int32_t L_17 = __this->____size;
		int32_t L_18 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)il2cpp_codegen_subtract(L_17, L_18)), NULL);
	}

IL_0066:
	{
		RuntimeObject* L_19 = V_0;
		if ((!(((RuntimeObject*)(List_1_t065A1950A0B1D84B65A5256E8063120B10018641*)__this) == ((RuntimeObject*)(RuntimeObject*)L_19))))
		{
			goto IL_009f;
		}
	}
	{
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_20 = __this->____items;
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_21 = __this->____items;
		int32_t L_22 = ___0_index;
		int32_t L_23 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, L_22, L_23, NULL);
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_24 = __this->____items;
		int32_t L_25 = ___0_index;
		int32_t L_26 = V_1;
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_27 = __this->____items;
		int32_t L_28 = ___0_index;
		int32_t L_29 = __this->____size;
		int32_t L_30 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_24, ((int32_t)il2cpp_codegen_add(L_25, L_26)), (RuntimeArray*)L_27, ((int32_t)il2cpp_codegen_multiply(L_28, 2)), ((int32_t)il2cpp_codegen_subtract(L_29, L_30)), NULL);
		goto IL_00ac;
	}

IL_009f:
	{
		RuntimeObject* L_31 = V_0;
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_32 = __this->____items;
		int32_t L_33 = ___0_index;
		NullCheck(L_31);
		InterfaceActionInvoker2< RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_31, L_32, L_33);
	}

IL_00ac:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00fb;
	}

IL_00bc:
	{
		int32_t L_36 = ___0_index;
		int32_t L_37 = __this->____size;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_38 = ___1_collection;
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_38);
		V_2 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ea:
			{
				{
					RuntimeObject* L_40 = V_2;
					if (!L_40)
					{
						goto IL_00f3;
					}
				}
				{
					RuntimeObject* L_41 = V_2;
					NullCheck((RuntimeObject*)L_41);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
				}

IL_00f3:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00e0_1;
			}

IL_00ce_1:
			{
				int32_t L_42 = ___0_index;
				int32_t L_43 = L_42;
				___0_index = ((int32_t)il2cpp_codegen_add(L_43, 1));
				RuntimeObject* L_44 = V_2;
				NullCheck(L_44);
				RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E L_45;
				L_45 = InterfaceFuncInvoker0< RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 37), L_44);
				List_1_Insert_m52037E7189A3411B290F6CB3ADC3705C2A7C6983(__this, L_43, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
			}

IL_00e0_1:
			{
				RuntimeObject* L_46 = V_2;
				NullCheck((RuntimeObject*)L_46);
				bool L_47;
				L_47 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				if (L_47)
				{
					goto IL_00ce_1;
				}
			}
			{
				goto IL_00fb;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		RuntimeObject* L_48 = ___1_collection;
		List_1_AddEnumerable_m2075AE32C628E6DB4F52FE0697F5354713D7843C(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
	}

IL_00fb:
	{
		int32_t L_49 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_49, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_mF118596EBA1899FB70FF4D4301E6837B0F8C41FE_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E L_0 = ___0_item;
		int32_t L_1;
		L_1 = List_1_IndexOf_m10D493DCE0F2E6E04C595EDC89F3F61448F93220(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		List_1_RemoveAt_mFE8100E83AFA5D74BDD36F5687603D360593BF86(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_System_Collections_IList_Remove_mD8B41EC6FF411851D0F64280EB876BD687435AAF_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1;
		L_1 = List_1_IsCompatibleObject_m3F3693EDC370A919A9342D84A2E059762831ABCA(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_item;
		bool L_3;
		L_3 = List_1_Remove_mF118596EBA1899FB70FF4D4301E6837B0F8C41FE(__this, ((*(RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E*)((RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E*)(RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E*)UnBox(L_2, il2cpp_rgctx_data(method->klass->rgctx_data, 9))))), il2cpp_rgctx_method(method->klass->rgctx_data, 43));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m0CA55AC204203A3584BADFC1AC50E18444CF91AF_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, Predicate_1_t8A5AF3450E7B0054E5339AB18FD29FA24A371BC1* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t8A5AF3450E7B0054E5339AB18FD29FA24A371BC1* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)8, NULL);
	}

IL_0009:
	{
		V_0 = 0;
		goto IL_0011;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____size;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		Predicate_1_t8A5AF3450E7B0054E5339AB18FD29FA24A371BC1* L_4 = ___0_match;
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_5 = __this->____items;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_4);
		bool L_9;
		L_9 = Predicate_1_Invoke_m3546977A385098FD45CF8006D8613DAE78078B15_inline(L_4, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		if (!L_9)
		{
			goto IL_000d;
		}
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->____size;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		return 0;
	}

IL_0039:
	{
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_0089;
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0043:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = __this->____size;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0060;
		}
	}
	{
		Predicate_1_t8A5AF3450E7B0054E5339AB18FD29FA24A371BC1* L_16 = ___0_match;
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_17 = __this->____items;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_16);
		bool L_21;
		L_21 = Predicate_1_Invoke_m3546977A385098FD45CF8006D8613DAE78078B15_inline(L_16, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		if (L_21)
		{
			goto IL_003f;
		}
	}

IL_0060:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = __this->____size;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0089;
		}
	}
	{
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_24 = __this->____items;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_27 = __this->____items;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		NullCheck(L_27);
		int32_t L_30 = L_29;
		RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E L_31 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E)L_31);
	}

IL_0089:
	{
		int32_t L_32 = V_1;
		int32_t L_33 = __this->____size;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0043;
		}
	}
	{
		goto IL_00ad;
	}

IL_00ad:
	{
		int32_t L_34 = __this->____size;
		int32_t L_35 = V_0;
		int32_t L_36 = V_0;
		__this->____size = L_36;
		int32_t L_37 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_37, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mFE8100E83AFA5D74BDD36F5687603D360593BF86_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRange_IndexException_mC7661B8C6DD827679C95FC6B6C08F8724174936D(NULL);
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = ___0_index;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_5 = __this->____items;
		int32_t L_6 = ___0_index;
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		int32_t L_10 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), (RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
	}

IL_0042:
	{
		goto IL_0063;
	}

IL_0063:
	{
		int32_t L_11 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_11, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m5C9365F9267AC32E393EFDA7424D69252BE8F105_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_6 = __this->____size;
		int32_t L_7 = __this->____size;
		int32_t L_8 = ___1_count;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0066;
		}
	}
	{
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = ___1_count;
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), (RuntimeArray*)L_14, L_15, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0066:
	{
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		goto IL_008d;
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_m77E6C3C6AD4E0244D2A77DDEBD1B82EE3EA874D4_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m401900762AD72612336502EA7DF602A79F433BCD_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		List_1_Reverse_mD53B455C889053443081064BD6849C4A23DD15BB(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mD53B455C889053443081064BD6849C4A23DD15BB_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, int32_t ___0_index, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		Array_Reverse_TisRecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E_m9CE31A9F4B01921EB8E468A87C95E1ECC3D1DE32(L_6, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 45));
	}

IL_0038:
	{
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m3FE7D0847B31B41B111DBAD39BC974F39B28A9D0_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m401900762AD72612336502EA7DF602A79F433BCD_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		List_1_Sort_mFA4A844D97DC0D603E91FCA063D86803ED367463(__this, 0, L_0, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m0635D72BBA7D34F09EC89954A1006AA2B6B3EE24_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = List_1_get_Count_m401900762AD72612336502EA7DF602A79F433BCD_inline(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		RuntimeObject* L_1 = ___0_comparer;
		List_1_Sort_mFA4A844D97DC0D603E91FCA063D86803ED367463(__this, 0, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mFA4A844D97DC0D603E91FCA063D86803ED367463_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, int32_t ___0_index, int32_t ___1_count, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m5430BC879B9D99E39DED788BB9451B8EF029756F((int32_t)((int32_t)16), (int32_t)4, NULL);
	}

IL_0015:
	{
		int32_t L_2 = __this->____size;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA((int32_t)((int32_t)23), NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_count;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		int32_t L_8 = ___1_count;
		RuntimeObject* L_9 = ___2_comparer;
		Array_Sort_TisRecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E_m74F44FCE4AEF33BBA5FCF7D62723A58080B3402B(L_6, L_7, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
	}

IL_0039:
	{
		int32_t L_10 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m142DFA19F0A7DC3E2FDF97C1B14EA84D6C05D11A_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, Comparison_1_t967BE3E9FD792792C26A54735ACAB0DED8864B56* ___0_comparison, const RuntimeMethod* method) 
{
	{
		Comparison_1_t967BE3E9FD792792C26A54735ACAB0DED8864B56* L_0 = ___0_comparison;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC((int32_t)((int32_t)34), NULL);
	}

IL_000a:
	{
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_2 = __this->____items;
		int32_t L_3 = __this->____size;
		Comparison_1_t967BE3E9FD792792C26A54735ACAB0DED8864B56* L_4 = ___0_comparison;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 50));
		ArraySortHelper_1_Sort_m0E90F82CDAE16857D877A27E52462D8C7452F45D(L_2, 0, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
	}

IL_0026:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* List_1_ToArray_mC238A316ABADD334820D455B81B6DBD1441C7DC1_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, const RuntimeMethod* method) 
{
	RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_1 = ((List_1_t065A1950A0B1D84B65A5256E8063120B10018641_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_3 = (RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8*)(RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_4 = __this->____items;
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_5 = V_0;
		int32_t L_6 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, L_6, NULL);
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddEnumerable_m2075AE32C628E6DB4F52FE0697F5354713D7843C_gshared (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RuntimeObject* L_1 = ___0_enumerable;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_006c;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					NullCheck((RuntimeObject*)L_4);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
				}

IL_006c:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0059_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E L_6;
				L_6 = InterfaceFuncInvoker0< RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 37), L_5);
				V_1 = L_6;
				int32_t L_7 = __this->____size;
				RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_8 = __this->____items;
				NullCheck(L_8);
				if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
				{
					goto IL_003c_1;
				}
			}
			{
				int32_t L_9 = __this->____size;
				List_1_EnsureCapacity_m8D142CE70507F180C33C9BF18D837CD8281ECEB1(__this, ((int32_t)il2cpp_codegen_add(L_9, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 15));
			}

IL_003c_1:
			{
				RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_10 = __this->____items;
				int32_t L_11 = __this->____size;
				V_2 = L_11;
				int32_t L_12 = V_2;
				__this->____size = ((int32_t)il2cpp_codegen_add(L_12, 1));
				int32_t L_13 = V_2;
				RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E L_14 = V_1;
				NullCheck(L_10);
				(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E)L_14);
			}

IL_0059_1:
			{
				RuntimeObject* L_15 = V_0;
				NullCheck((RuntimeObject*)L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
				if (L_16)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_006d;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__cctor_mC9CCDF02D2C65FD336A7BA11C2279E1C325CE32C_gshared (const RuntimeMethod* method) 
{
	{
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_0 = (RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8*)(RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), (uint32_t)0);
		((List_1_t065A1950A0B1D84B65A5256E8063120B10018641_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((List_1_t065A1950A0B1D84B65A5256E8063120B10018641_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LockedStack_TryPush_m5BDC2C116499049CE5BA9BE19DA9FB24922D6C35_gshared (LockedStack_t000073AA14F1B0C46471D9C699C9CDE10CB7CA17* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		V_0 = (bool)0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93((RuntimeObject*)__this, NULL);
		int32_t L_0 = __this->____count;
		if ((((int32_t)L_0) >= ((int32_t)8)))
		{
			goto IL_0046;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1 = ((TlsOverPerCoreLockedStacksArrayPool_1_t99785B1054684FDD1A65104B70B272C02AA00542_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_trimBuffers;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_3;
		L_3 = Environment_get_TickCount_m183BFCF001E12849E3D898957F0B81FD88BA183C(NULL);
		__this->____firstStackItemMS = (uint32_t)L_3;
	}

IL_002b:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_4 = __this->____arrays;
		int32_t L_5 = __this->____count;
		V_1 = L_5;
		int32_t L_6 = V_1;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_array;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_8);
		V_0 = (bool)1;
	}

IL_0046:
	{
		Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)__this, NULL);
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* LockedStack_TryPop_mDB91FB748A9B7CE098ADDA59FEF9C3E8B893E330_gshared (LockedStack_t000073AA14F1B0C46471D9C699C9CDE10CB7CA17* __this, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	{
		V_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93((RuntimeObject*)__this, NULL);
		int32_t L_0 = __this->____count;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_1 = __this->____arrays;
		int32_t L_2 = __this->____count;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = V_1;
		__this->____count = L_3;
		int32_t L_4 = V_1;
		NullCheck(L_1);
		int32_t L_5 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = L_6;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_7 = __this->____arrays;
		int32_t L_8 = __this->____count;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, NULL);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
	}

IL_0038:
	{
		Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockedStack_Trim_mE6765D2537AE69D5BE9A7F77BE76190B24237FD2_gshared (LockedStack_t000073AA14F1B0C46471D9C699C9CDE10CB7CA17* __this, uint32_t ___0_tickCount, int32_t ___1_id, int32_t ___2_pressure, int32_t ___3_bucketSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	LockedStack_t000073AA14F1B0C46471D9C699C9CDE10CB7CA17* V_1 = NULL;
	bool V_2 = false;
	ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* V_3 = NULL;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		int32_t L_1 = ___2_pressure;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0014;
		}
	}
	{
		G_B5_0 = ((int32_t)60000);
		goto IL_0019;
	}

IL_0014:
	{
		G_B5_0 = ((int32_t)10000);
	}

IL_0019:
	{
		V_0 = (uint32_t)G_B5_0;
		V_1 = __this;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0110:
			{
				{
					bool L_2 = V_2;
					if (!L_2)
					{
						goto IL_0119;
					}
				}
				{
					LockedStack_t000073AA14F1B0C46471D9C699C9CDE10CB7CA17* L_3 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_3, NULL);
				}

IL_0119:
				{
					return;
				}
			}
		});
		try
		{
			{
				LockedStack_t000073AA14F1B0C46471D9C699C9CDE10CB7CA17* L_4 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_4, (&V_2), NULL);
				int32_t L_5 = __this->____count;
				if ((((int32_t)L_5) <= ((int32_t)0)))
				{
					goto IL_0038_1;
				}
			}
			{
				uint32_t L_6 = __this->____firstStackItemMS;
				uint32_t L_7 = ___0_tickCount;
				if ((!(((uint32_t)L_6) <= ((uint32_t)L_7))))
				{
					goto IL_0046_1;
				}
			}

IL_0038_1:
			{
				uint32_t L_8 = ___0_tickCount;
				uint32_t L_9 = __this->____firstStackItemMS;
				uint32_t L_10 = V_0;
				if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_9))) > ((uint32_t)L_10))))
				{
					goto IL_010e_1;
				}
			}

IL_0046_1:
			{
				il2cpp_codegen_runtime_class_init_inline(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var);
				ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* L_11 = ((ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_StaticFields*)il2cpp_codegen_static_fields_for(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var))->___Log;
				V_3 = L_11;
				V_4 = 1;
				int32_t L_12 = ___2_pressure;
				if ((((int32_t)L_12) == ((int32_t)1)))
				{
					goto IL_0089_1;
				}
			}
			{
				int32_t L_13 = ___2_pressure;
				if ((!(((uint32_t)L_13) == ((uint32_t)2))))
				{
					goto IL_00d3_1;
				}
			}
			{
				V_4 = 8;
				int32_t L_14 = ___3_bucketSize;
				if ((((int32_t)L_14) <= ((int32_t)((int32_t)16384))))
				{
					goto IL_0069_1;
				}
			}
			{
				int32_t L_15 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_15, 1));
			}

IL_0069_1:
			{
				int32_t L_16;
				L_16 = il2cpp_unsafe_sizeof<uint8_t>();
				if ((((int32_t)L_16) <= ((int32_t)((int32_t)16))))
				{
					goto IL_0078_1;
				}
			}
			{
				int32_t L_17 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_17, 1));
			}

IL_0078_1:
			{
				int32_t L_18;
				L_18 = il2cpp_unsafe_sizeof<uint8_t>();
				if ((((int32_t)L_18) <= ((int32_t)((int32_t)32))))
				{
					goto IL_00d3_1;
				}
			}
			{
				int32_t L_19 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
				goto IL_00d3_1;
			}

IL_0089_1:
			{
				V_4 = 2;
				goto IL_00d3_1;
			}

IL_008e_1:
			{
				ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_20 = __this->____arrays;
				int32_t L_21 = __this->____count;
				V_6 = ((int32_t)il2cpp_codegen_subtract(L_21, 1));
				int32_t L_22 = V_6;
				__this->____count = L_22;
				int32_t L_23 = V_6;
				NullCheck(L_20);
				int32_t L_24 = L_23;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
				V_5 = L_25;
				ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_26 = __this->____arrays;
				int32_t L_27 = __this->____count;
				NullCheck(L_26);
				ArrayElementTypeCheck (L_26, NULL);
				(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
				ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* L_28 = V_3;
				NullCheck((EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25*)L_28);
				bool L_29;
				L_29 = EventSource_IsEnabled_m0B2F63F81423D7832DC5526D0F3490C77CAB57A5((EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25*)L_28, NULL);
				if (!L_29)
				{
					goto IL_00d3_1;
				}
			}
			{
				ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* L_30 = V_3;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = V_5;
				NullCheck((RuntimeObject*)L_31);
				int32_t L_32;
				L_32 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_31);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = V_5;
				NullCheck(L_33);
				int32_t L_34 = ___1_id;
				NullCheck(L_30);
				ArrayPoolEventSource_BufferTrimmed_m7E5BBBCE84BEF9C79981E482AC6D2FA6FFB2ECB0(L_30, L_32, ((int32_t)(((RuntimeArray*)L_33)->max_length)), L_34, NULL);
			}

IL_00d3_1:
			{
				int32_t L_35 = __this->____count;
				if ((((int32_t)L_35) <= ((int32_t)0)))
				{
					goto IL_00e6_1;
				}
			}
			{
				int32_t L_36 = V_4;
				int32_t L_37 = L_36;
				V_4 = ((int32_t)il2cpp_codegen_subtract(L_37, 1));
				if ((((int32_t)L_37) > ((int32_t)0)))
				{
					goto IL_008e_1;
				}
			}

IL_00e6_1:
			{
				int32_t L_38 = __this->____count;
				if ((((int32_t)L_38) <= ((int32_t)0)))
				{
					goto IL_010e_1;
				}
			}
			{
				uint32_t L_39 = __this->____firstStackItemMS;
				if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)-15001)))))
				{
					goto IL_010e_1;
				}
			}
			{
				uint32_t L_40 = __this->____firstStackItemMS;
				__this->____firstStackItemMS = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_40, ((int32_t)15000)));
			}

IL_010e_1:
			{
				goto IL_011a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_011a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockedStack__ctor_m48BF912C083D1F7936C86ADE5D2E67C635D446A7_gshared (LockedStack_t000073AA14F1B0C46471D9C699C9CDE10CB7CA17* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_0 = (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 8), (uint32_t)8);
		__this->____arrays = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____arrays), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LockedStack_TryPush_m82B3979AB5E28781A560CEA668FE26A16F5DA7F3_gshared (LockedStack_t55EA3BEB39A80E4F0A2009E69BE4365D6CFFBB7B* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		V_0 = (bool)0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93((RuntimeObject*)__this, NULL);
		int32_t L_0 = __this->____count;
		if ((((int32_t)L_0) >= ((int32_t)8)))
		{
			goto IL_0046;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1 = ((TlsOverPerCoreLockedStacksArrayPool_1_t8906D917899793F9523A1B1DFB3008CA600B7F00_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_trimBuffers;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_3;
		L_3 = Environment_get_TickCount_m183BFCF001E12849E3D898957F0B81FD88BA183C(NULL);
		__this->____firstStackItemMS = (uint32_t)L_3;
	}

IL_002b:
	{
		CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680* L_4 = __this->____arrays;
		int32_t L_5 = __this->____count;
		V_1 = L_5;
		int32_t L_6 = V_1;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = V_1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_8 = ___0_array;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)L_8);
		V_0 = (bool)1;
	}

IL_0046:
	{
		Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)__this, NULL);
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* LockedStack_TryPop_mCD2CF7FF64C294717440AC2805C364BFE96249DD_gshared (LockedStack_t55EA3BEB39A80E4F0A2009E69BE4365D6CFFBB7B* __this, const RuntimeMethod* method) 
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	int32_t V_1 = 0;
	{
		V_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)NULL;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93((RuntimeObject*)__this, NULL);
		int32_t L_0 = __this->____count;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680* L_1 = __this->____arrays;
		int32_t L_2 = __this->____count;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = V_1;
		__this->____count = L_3;
		int32_t L_4 = V_1;
		NullCheck(L_1);
		int32_t L_5 = L_4;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = L_6;
		CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680* L_7 = __this->____arrays;
		int32_t L_8 = __this->____count;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, NULL);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)NULL);
	}

IL_0038:
	{
		Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)__this, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockedStack_Trim_m6223F32D4A246447A96A76D92C720547ED1A4F81_gshared (LockedStack_t55EA3BEB39A80E4F0A2009E69BE4365D6CFFBB7B* __this, uint32_t ___0_tickCount, int32_t ___1_id, int32_t ___2_pressure, int32_t ___3_bucketSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	LockedStack_t55EA3BEB39A80E4F0A2009E69BE4365D6CFFBB7B* V_1 = NULL;
	bool V_2 = false;
	ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* V_3 = NULL;
	int32_t V_4 = 0;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		int32_t L_1 = ___2_pressure;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0014;
		}
	}
	{
		G_B5_0 = ((int32_t)60000);
		goto IL_0019;
	}

IL_0014:
	{
		G_B5_0 = ((int32_t)10000);
	}

IL_0019:
	{
		V_0 = (uint32_t)G_B5_0;
		V_1 = __this;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0110:
			{
				{
					bool L_2 = V_2;
					if (!L_2)
					{
						goto IL_0119;
					}
				}
				{
					LockedStack_t55EA3BEB39A80E4F0A2009E69BE4365D6CFFBB7B* L_3 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_3, NULL);
				}

IL_0119:
				{
					return;
				}
			}
		});
		try
		{
			{
				LockedStack_t55EA3BEB39A80E4F0A2009E69BE4365D6CFFBB7B* L_4 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_4, (&V_2), NULL);
				int32_t L_5 = __this->____count;
				if ((((int32_t)L_5) <= ((int32_t)0)))
				{
					goto IL_0038_1;
				}
			}
			{
				uint32_t L_6 = __this->____firstStackItemMS;
				uint32_t L_7 = ___0_tickCount;
				if ((!(((uint32_t)L_6) <= ((uint32_t)L_7))))
				{
					goto IL_0046_1;
				}
			}

IL_0038_1:
			{
				uint32_t L_8 = ___0_tickCount;
				uint32_t L_9 = __this->____firstStackItemMS;
				uint32_t L_10 = V_0;
				if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_9))) > ((uint32_t)L_10))))
				{
					goto IL_010e_1;
				}
			}

IL_0046_1:
			{
				il2cpp_codegen_runtime_class_init_inline(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var);
				ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* L_11 = ((ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_StaticFields*)il2cpp_codegen_static_fields_for(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var))->___Log;
				V_3 = L_11;
				V_4 = 1;
				int32_t L_12 = ___2_pressure;
				if ((((int32_t)L_12) == ((int32_t)1)))
				{
					goto IL_0089_1;
				}
			}
			{
				int32_t L_13 = ___2_pressure;
				if ((!(((uint32_t)L_13) == ((uint32_t)2))))
				{
					goto IL_00d3_1;
				}
			}
			{
				V_4 = 8;
				int32_t L_14 = ___3_bucketSize;
				if ((((int32_t)L_14) <= ((int32_t)((int32_t)16384))))
				{
					goto IL_0069_1;
				}
			}
			{
				int32_t L_15 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_15, 1));
			}

IL_0069_1:
			{
				int32_t L_16;
				L_16 = il2cpp_unsafe_sizeof<Il2CppChar>();
				if ((((int32_t)L_16) <= ((int32_t)((int32_t)16))))
				{
					goto IL_0078_1;
				}
			}
			{
				int32_t L_17 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_17, 1));
			}

IL_0078_1:
			{
				int32_t L_18;
				L_18 = il2cpp_unsafe_sizeof<Il2CppChar>();
				if ((((int32_t)L_18) <= ((int32_t)((int32_t)32))))
				{
					goto IL_00d3_1;
				}
			}
			{
				int32_t L_19 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
				goto IL_00d3_1;
			}

IL_0089_1:
			{
				V_4 = 2;
				goto IL_00d3_1;
			}

IL_008e_1:
			{
				CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680* L_20 = __this->____arrays;
				int32_t L_21 = __this->____count;
				V_6 = ((int32_t)il2cpp_codegen_subtract(L_21, 1));
				int32_t L_22 = V_6;
				__this->____count = L_22;
				int32_t L_23 = V_6;
				NullCheck(L_20);
				int32_t L_24 = L_23;
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_25 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
				V_5 = L_25;
				CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680* L_26 = __this->____arrays;
				int32_t L_27 = __this->____count;
				NullCheck(L_26);
				ArrayElementTypeCheck (L_26, NULL);
				(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)NULL);
				ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* L_28 = V_3;
				NullCheck((EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25*)L_28);
				bool L_29;
				L_29 = EventSource_IsEnabled_m0B2F63F81423D7832DC5526D0F3490C77CAB57A5((EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25*)L_28, NULL);
				if (!L_29)
				{
					goto IL_00d3_1;
				}
			}
			{
				ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* L_30 = V_3;
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_31 = V_5;
				NullCheck((RuntimeObject*)L_31);
				int32_t L_32;
				L_32 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_31);
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_33 = V_5;
				NullCheck(L_33);
				int32_t L_34 = ___1_id;
				NullCheck(L_30);
				ArrayPoolEventSource_BufferTrimmed_m7E5BBBCE84BEF9C79981E482AC6D2FA6FFB2ECB0(L_30, L_32, ((int32_t)(((RuntimeArray*)L_33)->max_length)), L_34, NULL);
			}

IL_00d3_1:
			{
				int32_t L_35 = __this->____count;
				if ((((int32_t)L_35) <= ((int32_t)0)))
				{
					goto IL_00e6_1;
				}
			}
			{
				int32_t L_36 = V_4;
				int32_t L_37 = L_36;
				V_4 = ((int32_t)il2cpp_codegen_subtract(L_37, 1));
				if ((((int32_t)L_37) > ((int32_t)0)))
				{
					goto IL_008e_1;
				}
			}

IL_00e6_1:
			{
				int32_t L_38 = __this->____count;
				if ((((int32_t)L_38) <= ((int32_t)0)))
				{
					goto IL_010e_1;
				}
			}
			{
				uint32_t L_39 = __this->____firstStackItemMS;
				if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)-15001)))))
				{
					goto IL_010e_1;
				}
			}
			{
				uint32_t L_40 = __this->____firstStackItemMS;
				__this->____firstStackItemMS = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_40, ((int32_t)15000)));
			}

IL_010e_1:
			{
				goto IL_011a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_011a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockedStack__ctor_mDB2CB0C8C084B569C05BEFC87650BA56778A4A42_gshared (LockedStack_t55EA3BEB39A80E4F0A2009E69BE4365D6CFFBB7B* __this, const RuntimeMethod* method) 
{
	{
		CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680* L_0 = (CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680*)(CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 8), (uint32_t)8);
		__this->____arrays = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____arrays), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LockedStack_TryPush_m42B8D8A267B151AFF0AB674C698C6E45DFB7BAE7_gshared (LockedStack_t41A87F7FF06A8633FE1FF193C1AA749E23B5A5DC* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		V_0 = (bool)0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93((RuntimeObject*)__this, NULL);
		int32_t L_0 = __this->____count;
		if ((((int32_t)L_0) >= ((int32_t)8)))
		{
			goto IL_0046;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1 = ((TlsOverPerCoreLockedStacksArrayPool_1_t5B35E5C672C6B144AA2ACF24F6AB93FC7FDEAECC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_trimBuffers;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_3;
		L_3 = Environment_get_TickCount_m183BFCF001E12849E3D898957F0B81FD88BA183C(NULL);
		__this->____firstStackItemMS = (uint32_t)L_3;
	}

IL_002b:
	{
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_4 = __this->____arrays;
		int32_t L_5 = __this->____count;
		V_1 = L_5;
		int32_t L_6 = V_1;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = ___0_array;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)L_8);
		V_0 = (bool)1;
	}

IL_0046:
	{
		Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)__this, NULL);
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* LockedStack_TryPop_m57DE5B7210D358D526648221485B4AF85F088405_gshared (LockedStack_t41A87F7FF06A8633FE1FF193C1AA749E23B5A5DC* __this, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		V_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93((RuntimeObject*)__this, NULL);
		int32_t L_0 = __this->____count;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_1 = __this->____arrays;
		int32_t L_2 = __this->____count;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = V_1;
		__this->____count = L_3;
		int32_t L_4 = V_1;
		NullCheck(L_1);
		int32_t L_5 = L_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = L_6;
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_7 = __this->____arrays;
		int32_t L_8 = __this->____count;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, NULL);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_0038:
	{
		Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockedStack_Trim_m4D537414CE1A41665FDDD1E21D002889BE70B5F8_gshared (LockedStack_t41A87F7FF06A8633FE1FF193C1AA749E23B5A5DC* __this, uint32_t ___0_tickCount, int32_t ___1_id, int32_t ___2_pressure, int32_t ___3_bucketSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	LockedStack_t41A87F7FF06A8633FE1FF193C1AA749E23B5A5DC* V_1 = NULL;
	bool V_2 = false;
	ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* V_3 = NULL;
	int32_t V_4 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		int32_t L_1 = ___2_pressure;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0014;
		}
	}
	{
		G_B5_0 = ((int32_t)60000);
		goto IL_0019;
	}

IL_0014:
	{
		G_B5_0 = ((int32_t)10000);
	}

IL_0019:
	{
		V_0 = (uint32_t)G_B5_0;
		V_1 = __this;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0110:
			{
				{
					bool L_2 = V_2;
					if (!L_2)
					{
						goto IL_0119;
					}
				}
				{
					LockedStack_t41A87F7FF06A8633FE1FF193C1AA749E23B5A5DC* L_3 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_3, NULL);
				}

IL_0119:
				{
					return;
				}
			}
		});
		try
		{
			{
				LockedStack_t41A87F7FF06A8633FE1FF193C1AA749E23B5A5DC* L_4 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_4, (&V_2), NULL);
				int32_t L_5 = __this->____count;
				if ((((int32_t)L_5) <= ((int32_t)0)))
				{
					goto IL_0038_1;
				}
			}
			{
				uint32_t L_6 = __this->____firstStackItemMS;
				uint32_t L_7 = ___0_tickCount;
				if ((!(((uint32_t)L_6) <= ((uint32_t)L_7))))
				{
					goto IL_0046_1;
				}
			}

IL_0038_1:
			{
				uint32_t L_8 = ___0_tickCount;
				uint32_t L_9 = __this->____firstStackItemMS;
				uint32_t L_10 = V_0;
				if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_9))) > ((uint32_t)L_10))))
				{
					goto IL_010e_1;
				}
			}

IL_0046_1:
			{
				il2cpp_codegen_runtime_class_init_inline(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var);
				ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* L_11 = ((ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_StaticFields*)il2cpp_codegen_static_fields_for(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var))->___Log;
				V_3 = L_11;
				V_4 = 1;
				int32_t L_12 = ___2_pressure;
				if ((((int32_t)L_12) == ((int32_t)1)))
				{
					goto IL_0089_1;
				}
			}
			{
				int32_t L_13 = ___2_pressure;
				if ((!(((uint32_t)L_13) == ((uint32_t)2))))
				{
					goto IL_00d3_1;
				}
			}
			{
				V_4 = 8;
				int32_t L_14 = ___3_bucketSize;
				if ((((int32_t)L_14) <= ((int32_t)((int32_t)16384))))
				{
					goto IL_0069_1;
				}
			}
			{
				int32_t L_15 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_15, 1));
			}

IL_0069_1:
			{
				int32_t L_16;
				L_16 = il2cpp_unsafe_sizeof<int32_t>();
				if ((((int32_t)L_16) <= ((int32_t)((int32_t)16))))
				{
					goto IL_0078_1;
				}
			}
			{
				int32_t L_17 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_17, 1));
			}

IL_0078_1:
			{
				int32_t L_18;
				L_18 = il2cpp_unsafe_sizeof<int32_t>();
				if ((((int32_t)L_18) <= ((int32_t)((int32_t)32))))
				{
					goto IL_00d3_1;
				}
			}
			{
				int32_t L_19 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
				goto IL_00d3_1;
			}

IL_0089_1:
			{
				V_4 = 2;
				goto IL_00d3_1;
			}

IL_008e_1:
			{
				Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_20 = __this->____arrays;
				int32_t L_21 = __this->____count;
				V_6 = ((int32_t)il2cpp_codegen_subtract(L_21, 1));
				int32_t L_22 = V_6;
				__this->____count = L_22;
				int32_t L_23 = V_6;
				NullCheck(L_20);
				int32_t L_24 = L_23;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
				V_5 = L_25;
				Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_26 = __this->____arrays;
				int32_t L_27 = __this->____count;
				NullCheck(L_26);
				ArrayElementTypeCheck (L_26, NULL);
				(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
				ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* L_28 = V_3;
				NullCheck((EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25*)L_28);
				bool L_29;
				L_29 = EventSource_IsEnabled_m0B2F63F81423D7832DC5526D0F3490C77CAB57A5((EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25*)L_28, NULL);
				if (!L_29)
				{
					goto IL_00d3_1;
				}
			}
			{
				ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* L_30 = V_3;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_5;
				NullCheck((RuntimeObject*)L_31);
				int32_t L_32;
				L_32 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_31);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_5;
				NullCheck(L_33);
				int32_t L_34 = ___1_id;
				NullCheck(L_30);
				ArrayPoolEventSource_BufferTrimmed_m7E5BBBCE84BEF9C79981E482AC6D2FA6FFB2ECB0(L_30, L_32, ((int32_t)(((RuntimeArray*)L_33)->max_length)), L_34, NULL);
			}

IL_00d3_1:
			{
				int32_t L_35 = __this->____count;
				if ((((int32_t)L_35) <= ((int32_t)0)))
				{
					goto IL_00e6_1;
				}
			}
			{
				int32_t L_36 = V_4;
				int32_t L_37 = L_36;
				V_4 = ((int32_t)il2cpp_codegen_subtract(L_37, 1));
				if ((((int32_t)L_37) > ((int32_t)0)))
				{
					goto IL_008e_1;
				}
			}

IL_00e6_1:
			{
				int32_t L_38 = __this->____count;
				if ((((int32_t)L_38) <= ((int32_t)0)))
				{
					goto IL_010e_1;
				}
			}
			{
				uint32_t L_39 = __this->____firstStackItemMS;
				if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)-15001)))))
				{
					goto IL_010e_1;
				}
			}
			{
				uint32_t L_40 = __this->____firstStackItemMS;
				__this->____firstStackItemMS = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_40, ((int32_t)15000)));
			}

IL_010e_1:
			{
				goto IL_011a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_011a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockedStack__ctor_m4E8B919AC1335C2FE1D57995CEF343FBE0386EE1_gshared (LockedStack_t41A87F7FF06A8633FE1FF193C1AA749E23B5A5DC* __this, const RuntimeMethod* method) 
{
	{
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_0 = (Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E*)(Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 8), (uint32_t)8);
		__this->____arrays = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____arrays), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LockedStack_TryPush_m43E5E7A2F0386A3BEF9CFD2705141DB4E81D52B0_gshared (LockedStack_tA2963E19C6D1029555446DD09B0B4208AC0F8E4A* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		V_0 = (bool)0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93((RuntimeObject*)__this, NULL);
		int32_t L_0 = __this->____count;
		if ((((int32_t)L_0) >= ((int32_t)8)))
		{
			goto IL_0046;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		bool L_1 = ((TlsOverPerCoreLockedStacksArrayPool_1_tE35D2E7EF078343B5B040BA33BB77E88B1AC8F0F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_trimBuffers;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_3;
		L_3 = Environment_get_TickCount_m183BFCF001E12849E3D898957F0B81FD88BA183C(NULL);
		__this->____firstStackItemMS = (uint32_t)L_3;
	}

IL_002b:
	{
		__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F* L_4 = __this->____arrays;
		int32_t L_5 = __this->____count;
		V_1 = L_5;
		int32_t L_6 = V_1;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = ___0_array;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_8);
		V_0 = (bool)1;
	}

IL_0046:
	{
		Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)__this, NULL);
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* LockedStack_TryPop_m25DDC8C5A35FAD9A7D146972888DE02342BD5DAB_gshared (LockedStack_tA2963E19C6D1029555446DD09B0B4208AC0F8E4A* __this, const RuntimeMethod* method) 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t V_1 = 0;
	{
		V_0 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93((RuntimeObject*)__this, NULL);
		int32_t L_0 = __this->____count;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F* L_1 = __this->____arrays;
		int32_t L_2 = __this->____count;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = V_1;
		__this->____count = L_3;
		int32_t L_4 = V_1;
		NullCheck(L_1);
		int32_t L_5 = L_4;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = L_6;
		__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F* L_7 = __this->____arrays;
		int32_t L_8 = __this->____count;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, NULL);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL);
	}

IL_0038:
	{
		Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)__this, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockedStack_Trim_m2611CBE6E011E00269FB6B0610403EA10DEFCA1C_gshared (LockedStack_tA2963E19C6D1029555446DD09B0B4208AC0F8E4A* __this, uint32_t ___0_tickCount, int32_t ___1_id, int32_t ___2_pressure, int32_t ___3_bucketSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	LockedStack_tA2963E19C6D1029555446DD09B0B4208AC0F8E4A* V_1 = NULL;
	bool V_2 = false;
	ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* V_3 = NULL;
	int32_t V_4 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		int32_t L_1 = ___2_pressure;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0014;
		}
	}
	{
		G_B5_0 = ((int32_t)60000);
		goto IL_0019;
	}

IL_0014:
	{
		G_B5_0 = ((int32_t)10000);
	}

IL_0019:
	{
		V_0 = (uint32_t)G_B5_0;
		V_1 = __this;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0110:
			{
				{
					bool L_2 = V_2;
					if (!L_2)
					{
						goto IL_0119;
					}
				}
				{
					LockedStack_tA2963E19C6D1029555446DD09B0B4208AC0F8E4A* L_3 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_3, NULL);
				}

IL_0119:
				{
					return;
				}
			}
		});
		try
		{
			{
				LockedStack_tA2963E19C6D1029555446DD09B0B4208AC0F8E4A* L_4 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_4, (&V_2), NULL);
				int32_t L_5 = __this->____count;
				if ((((int32_t)L_5) <= ((int32_t)0)))
				{
					goto IL_0038_1;
				}
			}
			{
				uint32_t L_6 = __this->____firstStackItemMS;
				uint32_t L_7 = ___0_tickCount;
				if ((!(((uint32_t)L_6) <= ((uint32_t)L_7))))
				{
					goto IL_0046_1;
				}
			}

IL_0038_1:
			{
				uint32_t L_8 = ___0_tickCount;
				uint32_t L_9 = __this->____firstStackItemMS;
				uint32_t L_10 = V_0;
				if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_9))) > ((uint32_t)L_10))))
				{
					goto IL_010e_1;
				}
			}

IL_0046_1:
			{
				il2cpp_codegen_runtime_class_init_inline(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var);
				ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* L_11 = ((ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_StaticFields*)il2cpp_codegen_static_fields_for(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var))->___Log;
				V_3 = L_11;
				V_4 = 1;
				int32_t L_12 = ___2_pressure;
				if ((((int32_t)L_12) == ((int32_t)1)))
				{
					goto IL_0089_1;
				}
			}
			{
				int32_t L_13 = ___2_pressure;
				if ((!(((uint32_t)L_13) == ((uint32_t)2))))
				{
					goto IL_00d3_1;
				}
			}
			{
				V_4 = 8;
				int32_t L_14 = ___3_bucketSize;
				if ((((int32_t)L_14) <= ((int32_t)((int32_t)16384))))
				{
					goto IL_0069_1;
				}
			}
			{
				int32_t L_15 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_15, 1));
			}

IL_0069_1:
			{
				int32_t L_16;
				L_16 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(il2cpp_rgctx_method(method->klass->rgctx_data, 7));
				if ((((int32_t)L_16) <= ((int32_t)((int32_t)16))))
				{
					goto IL_0078_1;
				}
			}
			{
				int32_t L_17 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_17, 1));
			}

IL_0078_1:
			{
				int32_t L_18;
				L_18 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(il2cpp_rgctx_method(method->klass->rgctx_data, 7));
				if ((((int32_t)L_18) <= ((int32_t)((int32_t)32))))
				{
					goto IL_00d3_1;
				}
			}
			{
				int32_t L_19 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
				goto IL_00d3_1;
			}

IL_0089_1:
			{
				V_4 = 2;
				goto IL_00d3_1;
			}

IL_008e_1:
			{
				__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F* L_20 = __this->____arrays;
				int32_t L_21 = __this->____count;
				V_6 = ((int32_t)il2cpp_codegen_subtract(L_21, 1));
				int32_t L_22 = V_6;
				__this->____count = L_22;
				int32_t L_23 = V_6;
				NullCheck(L_20);
				int32_t L_24 = L_23;
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_25 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
				V_5 = L_25;
				__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F* L_26 = __this->____arrays;
				int32_t L_27 = __this->____count;
				NullCheck(L_26);
				ArrayElementTypeCheck (L_26, NULL);
				(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL);
				ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* L_28 = V_3;
				NullCheck((EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25*)L_28);
				bool L_29;
				L_29 = EventSource_IsEnabled_m0B2F63F81423D7832DC5526D0F3490C77CAB57A5((EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25*)L_28, NULL);
				if (!L_29)
				{
					goto IL_00d3_1;
				}
			}
			{
				ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* L_30 = V_3;
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_31 = V_5;
				NullCheck((RuntimeObject*)L_31);
				int32_t L_32;
				L_32 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_31);
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_33 = V_5;
				NullCheck(L_33);
				int32_t L_34 = ___1_id;
				NullCheck(L_30);
				ArrayPoolEventSource_BufferTrimmed_m7E5BBBCE84BEF9C79981E482AC6D2FA6FFB2ECB0(L_30, L_32, ((int32_t)(((RuntimeArray*)L_33)->max_length)), L_34, NULL);
			}

IL_00d3_1:
			{
				int32_t L_35 = __this->____count;
				if ((((int32_t)L_35) <= ((int32_t)0)))
				{
					goto IL_00e6_1;
				}
			}
			{
				int32_t L_36 = V_4;
				int32_t L_37 = L_36;
				V_4 = ((int32_t)il2cpp_codegen_subtract(L_37, 1));
				if ((((int32_t)L_37) > ((int32_t)0)))
				{
					goto IL_008e_1;
				}
			}

IL_00e6_1:
			{
				int32_t L_38 = __this->____count;
				if ((((int32_t)L_38) <= ((int32_t)0)))
				{
					goto IL_010e_1;
				}
			}
			{
				uint32_t L_39 = __this->____firstStackItemMS;
				if ((!(((uint32_t)L_39) < ((uint32_t)((int32_t)-15001)))))
				{
					goto IL_010e_1;
				}
			}
			{
				uint32_t L_40 = __this->____firstStackItemMS;
				__this->____firstStackItemMS = (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_40, ((int32_t)15000)));
			}

IL_010e_1:
			{
				goto IL_011a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_011a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockedStack__ctor_mDC1C46693A1D2D00E172498967CA24C98E5205D4_gshared (LockedStack_tA2963E19C6D1029555446DD09B0B4208AC0F8E4A* __this, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F* L_0 = (__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F*)(__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 8), (uint32_t)8);
		__this->____arrays = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____arrays), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongEnumEqualityComparer_1_Equals_m87226A6E5044C64940B1E62F62D70FCE887EA333_gshared (LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2* __this, Il2CppFullySharedGenericStruct ___0_x, Il2CppFullySharedGenericStruct ___1_y, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B);
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_memcpy(L_0, ___0_x, SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B);
		int64_t L_1;
		L_1 = InvokerFuncInvoker1< int64_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 1), NULL, L_0);
		il2cpp_codegen_memcpy(L_2, ___1_y, SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B);
		int64_t L_3;
		L_3 = InvokerFuncInvoker1< int64_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 1), NULL, L_2);
		V_0 = L_3;
		int64_t L_4 = V_0;
		return (bool)((((int64_t)L_1) == ((int64_t)L_4))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LongEnumEqualityComparer_1_GetHashCode_m61BF4CA9A33282177F9DD76BB500FCF4D37CBBBE_gshared (LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2* __this, Il2CppFullySharedGenericStruct ___0_obj, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_memcpy(L_0, ___0_obj, SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B);
		int64_t L_1;
		L_1 = InvokerFuncInvoker1< int64_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 1), NULL, L_0);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496((&V_0), NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongEnumEqualityComparer_1_Equals_m280B770B270E901648E8FDD542D25AF52CA6277D_gshared (LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		return (bool)((!(((RuntimeObject*)(LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2*)((LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LongEnumEqualityComparer_1_GetHashCode_m1B5FABC53D2E5598D4A5A1270A520F1B4641E11C_gshared (LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2* __this, const RuntimeMethod* method) 
{
	{
		NullCheck((RuntimeObject*)__this);
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)__this, NULL);
		NullCheck((MemberInfo_t*)L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_0);
		NullCheck((RuntimeObject*)L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongEnumEqualityComparer_1__ctor_mE638EE50B5DDF2DB094F6BF8703B23872496CBA6_gshared (LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))((EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongEnumEqualityComparer_1__ctor_mA0738549DB4AF45B2147E7AEE297513FD4CC4F0D_gshared (LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_information, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	{
		((  void (*) (EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))((EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongEnumEqualityComparer_1_GetObjectData_mD2CD7924C13DE56E2A77BC35201C20CEC5FEA139_gshared (LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		NullCheck(L_0);
		SerializationInfo_SetType_m5D07E1C38028872E49EA01129ED5BF1AF674C475(L_0, L_2, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lookup_2__ctor_m1C6E437910B52D5897F0AB5646CA2B57A15160A6_gshared (Lookup_2_tCC322E34F83E9E70D851F9A53D156847B70F1EF2* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_comparer;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_1;
		L_1 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		___0_comparer = (RuntimeObject*)L_1;
	}

IL_0010:
	{
		RuntimeObject* L_2 = ___0_comparer;
		__this->___comparer = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___comparer), (void*)L_2);
		GroupingU5BU5D_tAC4A7AAA50ACD8625A7FD9EC4C4B8F2C47A09ED4* L_3 = (GroupingU5BU5D_tAC4A7AAA50ACD8625A7FD9EC4C4B8F2C47A09ED4*)(GroupingU5BU5D_tAC4A7AAA50ACD8625A7FD9EC4C4B8F2C47A09ED4*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)7);
		__this->___groupings = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___groupings), (void*)L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Lookup_2_GetEnumerator_m0C5964AAD1698653DFC1FF114CB550A59DD50D21_gshared (Lookup_2_tCC322E34F83E9E70D851F9A53D156847B70F1EF2* __this, const RuntimeMethod* method) 
{
	{
		U3CGetEnumeratorU3Ed__12_tFF0F421A4C414F2759BB0D29384B9869BAC33801* L_0 = (U3CGetEnumeratorU3Ed__12_tFF0F421A4C414F2759BB0D29384B9869BAC33801*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 13));
		U3CGetEnumeratorU3Ed__12__ctor_m7B7E2CD0077B4AD9B402ECF55EFF717232D1C83F(L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		U3CGetEnumeratorU3Ed__12_tFF0F421A4C414F2759BB0D29384B9869BAC33801* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Lookup_2_System_Collections_IEnumerable_GetEnumerator_mBBE2E3F637C59BF722F28E8E701BD7F841539CD5_gshared (Lookup_2_tCC322E34F83E9E70D851F9A53D156847B70F1EF2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = Lookup_2_GetEnumerator_m0C5964AAD1698653DFC1FF114CB550A59DD50D21(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lookup_2_InternalGetHashCode_mA51A577966E252F7A2B87CF333B35C15E25D3127_gshared (Lookup_2_tCC322E34F83E9E70D851F9A53D156847B70F1EF2* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	{
	}
	{
		RuntimeObject* L_1 = __this->___comparer;
		int32_t L_2 = ___0_key;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_1, L_2);
		return ((int32_t)(L_3&((int32_t)2147483647LL)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC* Lookup_2_GetGrouping_mA59267A5631B5AFFD47A568856A166BC5DD2545C_gshared (Lookup_2_tCC322E34F83E9E70D851F9A53D156847B70F1EF2* __this, int32_t ___0_key, bool ___1_create, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC* V_1 = NULL;
	int32_t V_2 = 0;
	Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC* V_3 = NULL;
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Lookup_2_InternalGetHashCode_mA51A577966E252F7A2B87CF333B35C15E25D3127(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		V_0 = L_1;
		GroupingU5BU5D_tAC4A7AAA50ACD8625A7FD9EC4C4B8F2C47A09ED4* L_2 = __this->___groupings;
		int32_t L_3 = V_0;
		GroupingU5BU5D_tAC4A7AAA50ACD8625A7FD9EC4C4B8F2C47A09ED4* L_4 = __this->___groupings;
		NullCheck(L_4);
		NullCheck(L_2);
		int32_t L_5 = ((int32_t)(L_3%((int32_t)(((RuntimeArray*)L_4)->max_length))));
		Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC* L_6 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_1 = L_6;
		goto IL_0042;
	}

IL_001c:
	{
		Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC* L_7 = V_1;
		NullCheck(L_7);
		int32_t L_8 = L_7->___hashCode;
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_003b;
		}
	}
	{
		RuntimeObject* L_10 = __this->___comparer;
		Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC* L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12 = L_11->___key;
		int32_t L_13 = ___0_key;
		NullCheck(L_10);
		bool L_14;
		L_14 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_10, L_12, L_13);
		if (!L_14)
		{
			goto IL_003b;
		}
	}
	{
		Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC* L_15 = V_1;
		return L_15;
	}

IL_003b:
	{
		Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC* L_16 = V_1;
		NullCheck(L_16);
		Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC* L_17 = L_16->___hashNext;
		V_1 = L_17;
	}

IL_0042:
	{
		Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC* L_18 = V_1;
		if (L_18)
		{
			goto IL_001c;
		}
	}
	{
		bool L_19 = ___1_create;
		if (!L_19)
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_20 = __this->___count;
		GroupingU5BU5D_tAC4A7AAA50ACD8625A7FD9EC4C4B8F2C47A09ED4* L_21 = __this->___groupings;
		NullCheck(L_21);
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)(((RuntimeArray*)L_21)->max_length))))))
		{
			goto IL_0061;
		}
	}
	{
		Lookup_2_Resize_m4A01E48E854FC3977BEA4971EA548EDD6D07BB2D(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
	}

IL_0061:
	{
		int32_t L_22 = V_0;
		GroupingU5BU5D_tAC4A7AAA50ACD8625A7FD9EC4C4B8F2C47A09ED4* L_23 = __this->___groupings;
		NullCheck(L_23);
		V_2 = ((int32_t)(L_22%((int32_t)(((RuntimeArray*)L_23)->max_length))));
		Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC* L_24 = (Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		Grouping__ctor_m219BB8C06F6F99DB551EB73F19E102A83B63FE32(L_24, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_3 = L_24;
		Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC* L_25 = V_3;
		int32_t L_26 = ___0_key;
		NullCheck(L_25);
		L_25->___key = L_26;
		Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC* L_27 = V_3;
		int32_t L_28 = V_0;
		NullCheck(L_27);
		L_27->___hashCode = L_28;
		Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC* L_29 = V_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 22), (uint32_t)1);
		NullCheck(L_29);
		L_29->___elements = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&L_29->___elements), (void*)L_30);
		Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC* L_31 = V_3;
		GroupingU5BU5D_tAC4A7AAA50ACD8625A7FD9EC4C4B8F2C47A09ED4* L_32 = __this->___groupings;
		int32_t L_33 = V_2;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC* L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_31);
		L_31->___hashNext = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&L_31->___hashNext), (void*)L_35);
		GroupingU5BU5D_tAC4A7AAA50ACD8625A7FD9EC4C4B8F2C47A09ED4* L_36 = __this->___groupings;
		int32_t L_37 = V_2;
		Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC* L_38 = V_3;
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_38);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC*)L_38);
		Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC* L_39 = __this->___lastGrouping;
		if (L_39)
		{
			goto IL_00b4;
		}
	}
	{
		Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC* L_40 = V_3;
		Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC* L_41 = V_3;
		NullCheck(L_40);
		L_40->___next = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&L_40->___next), (void*)L_41);
		goto IL_00d1;
	}

IL_00b4:
	{
		Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC* L_42 = V_3;
		Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC* L_43 = __this->___lastGrouping;
		NullCheck(L_43);
		Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC* L_44 = L_43->___next;
		NullCheck(L_42);
		L_42->___next = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&L_42->___next), (void*)L_44);
		Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC* L_45 = __this->___lastGrouping;
		Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC* L_46 = V_3;
		NullCheck(L_45);
		L_45->___next = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&L_45->___next), (void*)L_46);
	}

IL_00d1:
	{
		Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC* L_47 = V_3;
		__this->___lastGrouping = L_47;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lastGrouping), (void*)L_47);
		int32_t L_48 = __this->___count;
		__this->___count = ((int32_t)il2cpp_codegen_add(L_48, 1));
		Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC* L_49 = V_3;
		return L_49;
	}

IL_00e8:
	{
		return (Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC*)NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lookup_2_Resize_m4A01E48E854FC3977BEA4971EA548EDD6D07BB2D_gshared (Lookup_2_tCC322E34F83E9E70D851F9A53D156847B70F1EF2* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	GroupingU5BU5D_tAC4A7AAA50ACD8625A7FD9EC4C4B8F2C47A09ED4* V_1 = NULL;
	Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC* V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->___count;
		if (((int64_t)L_0 * (int64_t)2 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_0 * (int64_t)2 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		if (((int64_t)((int32_t)il2cpp_codegen_multiply(L_0, 2)) + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)((int32_t)il2cpp_codegen_multiply(L_0, 2)) + (int64_t)1 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, 2)), 1));
		int32_t L_1 = V_0;
		GroupingU5BU5D_tAC4A7AAA50ACD8625A7FD9EC4C4B8F2C47A09ED4* L_2 = (GroupingU5BU5D_tAC4A7AAA50ACD8625A7FD9EC4C4B8F2C47A09ED4*)(GroupingU5BU5D_tAC4A7AAA50ACD8625A7FD9EC4C4B8F2C47A09ED4*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)L_1);
		V_1 = L_2;
		Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC* L_3 = __this->___lastGrouping;
		V_2 = L_3;
	}

IL_0019:
	{
		Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC* L_4 = V_2;
		NullCheck(L_4);
		Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC* L_5 = L_4->___next;
		V_2 = L_5;
		Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC* L_6 = V_2;
		NullCheck(L_6);
		int32_t L_7 = L_6->___hashCode;
		int32_t L_8 = V_0;
		V_3 = ((int32_t)(L_7%L_8));
		Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC* L_9 = V_2;
		GroupingU5BU5D_tAC4A7AAA50ACD8625A7FD9EC4C4B8F2C47A09ED4* L_10 = V_1;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_9);
		L_9->___hashNext = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___hashNext), (void*)L_13);
		GroupingU5BU5D_tAC4A7AAA50ACD8625A7FD9EC4C4B8F2C47A09ED4* L_14 = V_1;
		int32_t L_15 = V_3;
		Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC* L_16 = V_2;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC*)L_16);
		Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC* L_17 = V_2;
		Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC* L_18 = __this->___lastGrouping;
		if ((!(((RuntimeObject*)(Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC*)L_17) == ((RuntimeObject*)(Grouping_t9E785ACA208A31FD93DC6C5500CA55D86EF7CDCC*)L_18))))
		{
			goto IL_0019;
		}
	}
	{
		GroupingU5BU5D_tAC4A7AAA50ACD8625A7FD9EC4C4B8F2C47A09ED4* L_19 = V_1;
		__this->___groupings = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___groupings), (void*)L_19);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lookup_2__ctor_m5F103E26CE30D9CA22D5C4F3DB2C099EF660EA8A_gshared (Lookup_2_t0C8EADD42CF5878D9378C4B8B0D4EDB8986DF0C8* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_comparer;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_1;
		L_1 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		___0_comparer = (RuntimeObject*)L_1;
	}

IL_0010:
	{
		RuntimeObject* L_2 = ___0_comparer;
		__this->___comparer = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___comparer), (void*)L_2);
		GroupingU5BU5D_t95ED7FF772EEB2D79F3E7BA1B84F4C2833F0F208* L_3 = (GroupingU5BU5D_t95ED7FF772EEB2D79F3E7BA1B84F4C2833F0F208*)(GroupingU5BU5D_t95ED7FF772EEB2D79F3E7BA1B84F4C2833F0F208*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)7);
		__this->___groupings = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___groupings), (void*)L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Lookup_2_GetEnumerator_m3F6CC8D867C0856A5B4E8AB238DA970B6D840624_gshared (Lookup_2_t0C8EADD42CF5878D9378C4B8B0D4EDB8986DF0C8* __this, const RuntimeMethod* method) 
{
	{
		U3CGetEnumeratorU3Ed__12_t5DC4E73C16245675953476348C604192339136AB* L_0 = (U3CGetEnumeratorU3Ed__12_t5DC4E73C16245675953476348C604192339136AB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 13));
		U3CGetEnumeratorU3Ed__12__ctor_m4FFE79046C27929B887B714258C16ACADBF5E789(L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		U3CGetEnumeratorU3Ed__12_t5DC4E73C16245675953476348C604192339136AB* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Lookup_2_System_Collections_IEnumerable_GetEnumerator_m06AE23F08999B253983147D63CBB00DA34223B60_gshared (Lookup_2_t0C8EADD42CF5878D9378C4B8B0D4EDB8986DF0C8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = Lookup_2_GetEnumerator_m3F6CC8D867C0856A5B4E8AB238DA970B6D840624(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lookup_2_InternalGetHashCode_m8AB0DFEBEC7B1ECEC62A5CDF44F71DBC7F35D65A_gshared (Lookup_2_t0C8EADD42CF5878D9378C4B8B0D4EDB8986DF0C8* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	{
	}
	{
		RuntimeObject* L_1 = __this->___comparer;
		int32_t L_2 = ___0_key;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_1, L_2);
		return ((int32_t)(L_3&((int32_t)2147483647LL)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD* Lookup_2_GetGrouping_m1A18A74DF5436E0CBBE2E6A4C9318E2BB8D1D919_gshared (Lookup_2_t0C8EADD42CF5878D9378C4B8B0D4EDB8986DF0C8* __this, int32_t ___0_key, bool ___1_create, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD* V_1 = NULL;
	int32_t V_2 = 0;
	Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD* V_3 = NULL;
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = Lookup_2_InternalGetHashCode_m8AB0DFEBEC7B1ECEC62A5CDF44F71DBC7F35D65A(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		V_0 = L_1;
		GroupingU5BU5D_t95ED7FF772EEB2D79F3E7BA1B84F4C2833F0F208* L_2 = __this->___groupings;
		int32_t L_3 = V_0;
		GroupingU5BU5D_t95ED7FF772EEB2D79F3E7BA1B84F4C2833F0F208* L_4 = __this->___groupings;
		NullCheck(L_4);
		NullCheck(L_2);
		int32_t L_5 = ((int32_t)(L_3%((int32_t)(((RuntimeArray*)L_4)->max_length))));
		Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD* L_6 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_1 = L_6;
		goto IL_0042;
	}

IL_001c:
	{
		Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD* L_7 = V_1;
		NullCheck(L_7);
		int32_t L_8 = L_7->___hashCode;
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_003b;
		}
	}
	{
		RuntimeObject* L_10 = __this->___comparer;
		Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD* L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12 = L_11->___key;
		int32_t L_13 = ___0_key;
		NullCheck(L_10);
		bool L_14;
		L_14 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_10, L_12, L_13);
		if (!L_14)
		{
			goto IL_003b;
		}
	}
	{
		Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD* L_15 = V_1;
		return L_15;
	}

IL_003b:
	{
		Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD* L_16 = V_1;
		NullCheck(L_16);
		Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD* L_17 = L_16->___hashNext;
		V_1 = L_17;
	}

IL_0042:
	{
		Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD* L_18 = V_1;
		if (L_18)
		{
			goto IL_001c;
		}
	}
	{
		bool L_19 = ___1_create;
		if (!L_19)
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_20 = __this->___count;
		GroupingU5BU5D_t95ED7FF772EEB2D79F3E7BA1B84F4C2833F0F208* L_21 = __this->___groupings;
		NullCheck(L_21);
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)(((RuntimeArray*)L_21)->max_length))))))
		{
			goto IL_0061;
		}
	}
	{
		Lookup_2_Resize_m2B9ED6802E963422DCF1BEE4970E878FFEBED033(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
	}

IL_0061:
	{
		int32_t L_22 = V_0;
		GroupingU5BU5D_t95ED7FF772EEB2D79F3E7BA1B84F4C2833F0F208* L_23 = __this->___groupings;
		NullCheck(L_23);
		V_2 = ((int32_t)(L_22%((int32_t)(((RuntimeArray*)L_23)->max_length))));
		Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD* L_24 = (Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		Grouping__ctor_m87D362CCA5A8717B18B0D084549CE41FF26F5A2D(L_24, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_3 = L_24;
		Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD* L_25 = V_3;
		int32_t L_26 = ___0_key;
		NullCheck(L_25);
		L_25->___key = L_26;
		Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD* L_27 = V_3;
		int32_t L_28 = V_0;
		NullCheck(L_27);
		L_27->___hashCode = L_28;
		Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD* L_29 = V_3;
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_30 = (RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7*)(RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 22), (uint32_t)1);
		NullCheck(L_29);
		L_29->___elements = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&L_29->___elements), (void*)L_30);
		Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD* L_31 = V_3;
		GroupingU5BU5D_t95ED7FF772EEB2D79F3E7BA1B84F4C2833F0F208* L_32 = __this->___groupings;
		int32_t L_33 = V_2;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD* L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_31);
		L_31->___hashNext = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&L_31->___hashNext), (void*)L_35);
		GroupingU5BU5D_t95ED7FF772EEB2D79F3E7BA1B84F4C2833F0F208* L_36 = __this->___groupings;
		int32_t L_37 = V_2;
		Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD* L_38 = V_3;
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_38);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD*)L_38);
		Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD* L_39 = __this->___lastGrouping;
		if (L_39)
		{
			goto IL_00b4;
		}
	}
	{
		Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD* L_40 = V_3;
		Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD* L_41 = V_3;
		NullCheck(L_40);
		L_40->___next = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&L_40->___next), (void*)L_41);
		goto IL_00d1;
	}

IL_00b4:
	{
		Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD* L_42 = V_3;
		Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD* L_43 = __this->___lastGrouping;
		NullCheck(L_43);
		Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD* L_44 = L_43->___next;
		NullCheck(L_42);
		L_42->___next = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&L_42->___next), (void*)L_44);
		Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD* L_45 = __this->___lastGrouping;
		Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD* L_46 = V_3;
		NullCheck(L_45);
		L_45->___next = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&L_45->___next), (void*)L_46);
	}

IL_00d1:
	{
		Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD* L_47 = V_3;
		__this->___lastGrouping = L_47;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lastGrouping), (void*)L_47);
		int32_t L_48 = __this->___count;
		__this->___count = ((int32_t)il2cpp_codegen_add(L_48, 1));
		Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD* L_49 = V_3;
		return L_49;
	}

IL_00e8:
	{
		return (Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD*)NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lookup_2_Resize_m2B9ED6802E963422DCF1BEE4970E878FFEBED033_gshared (Lookup_2_t0C8EADD42CF5878D9378C4B8B0D4EDB8986DF0C8* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	GroupingU5BU5D_t95ED7FF772EEB2D79F3E7BA1B84F4C2833F0F208* V_1 = NULL;
	Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD* V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->___count;
		if (((int64_t)L_0 * (int64_t)2 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_0 * (int64_t)2 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		if (((int64_t)((int32_t)il2cpp_codegen_multiply(L_0, 2)) + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)((int32_t)il2cpp_codegen_multiply(L_0, 2)) + (int64_t)1 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, 2)), 1));
		int32_t L_1 = V_0;
		GroupingU5BU5D_t95ED7FF772EEB2D79F3E7BA1B84F4C2833F0F208* L_2 = (GroupingU5BU5D_t95ED7FF772EEB2D79F3E7BA1B84F4C2833F0F208*)(GroupingU5BU5D_t95ED7FF772EEB2D79F3E7BA1B84F4C2833F0F208*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)L_1);
		V_1 = L_2;
		Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD* L_3 = __this->___lastGrouping;
		V_2 = L_3;
	}

IL_0019:
	{
		Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD* L_4 = V_2;
		NullCheck(L_4);
		Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD* L_5 = L_4->___next;
		V_2 = L_5;
		Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD* L_6 = V_2;
		NullCheck(L_6);
		int32_t L_7 = L_6->___hashCode;
		int32_t L_8 = V_0;
		V_3 = ((int32_t)(L_7%L_8));
		Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD* L_9 = V_2;
		GroupingU5BU5D_t95ED7FF772EEB2D79F3E7BA1B84F4C2833F0F208* L_10 = V_1;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_9);
		L_9->___hashNext = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___hashNext), (void*)L_13);
		GroupingU5BU5D_t95ED7FF772EEB2D79F3E7BA1B84F4C2833F0F208* L_14 = V_1;
		int32_t L_15 = V_3;
		Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD* L_16 = V_2;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD*)L_16);
		Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD* L_17 = V_2;
		Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD* L_18 = __this->___lastGrouping;
		if ((!(((RuntimeObject*)(Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD*)L_17) == ((RuntimeObject*)(Grouping_tA7B611B0B2C9ADA009AAFDC69B92C6CC02ACAECD*)L_18))))
		{
			goto IL_0019;
		}
	}
	{
		GroupingU5BU5D_t95ED7FF772EEB2D79F3E7BA1B84F4C2833F0F208* L_19 = V_1;
		__this->___groupings = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___groupings), (void*)L_19);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lookup_2__ctor_m4A4D75DF5543CBBCA4F46BD626491C48CCD19F0E_gshared (Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_comparer;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_1;
		L_1 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		___0_comparer = (RuntimeObject*)L_1;
	}

IL_0010:
	{
		RuntimeObject* L_2 = ___0_comparer;
		__this->___comparer = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___comparer), (void*)L_2);
		GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B* L_3 = (GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B*)(GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)7);
		__this->___groupings = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___groupings), (void*)L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Lookup_2_GetEnumerator_m47E3B98B370E167AA41F09ABEE90DA88F5472414_gshared (Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332* __this, const RuntimeMethod* method) 
{
	{
		U3CGetEnumeratorU3Ed__12_t5786B9631F2D28B78F4B69FD4A59FCE5AF8D9CC0* L_0 = (U3CGetEnumeratorU3Ed__12_t5786B9631F2D28B78F4B69FD4A59FCE5AF8D9CC0*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 13));
		((  void (*) (U3CGetEnumeratorU3Ed__12_t5786B9631F2D28B78F4B69FD4A59FCE5AF8D9CC0*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		U3CGetEnumeratorU3Ed__12_t5786B9631F2D28B78F4B69FD4A59FCE5AF8D9CC0* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Lookup_2_System_Collections_IEnumerable_GetEnumerator_m44E299E786D62CCB11A00FF185A7F514C03D50A4_gshared (Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lookup_2_InternalGetHashCode_m157EBC022CFC1205E1D913F757883DB1D18B486A_gshared (Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t65AF31FD1FAEB0D4FB40A84D39D141537EEE5698 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t65AF31FD1FAEB0D4FB40A84D39D141537EEE5698);
	const Il2CppFullySharedGenericAny L_3 = L_0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)) ? ___0_key : &___0_key), SizeOf_TKey_t65AF31FD1FAEB0D4FB40A84D39D141537EEE5698);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), L_0);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_2 = __this->___comparer;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)) ? ___0_key : &___0_key), SizeOf_TKey_t65AF31FD1FAEB0D4FB40A84D39D141537EEE5698);
		NullCheck(L_2);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)) ? L_3: *(void**)L_3));
		return ((int32_t)(L_4&((int32_t)2147483647LL)));
	}

IL_001b:
	{
		return 0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* Lookup_2_GetGrouping_m32B7EBEA5CFFA4B56BEEC877518351A407B92C8C_gshared (Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332* __this, Il2CppFullySharedGenericAny ___0_key, bool ___1_create, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t65AF31FD1FAEB0D4FB40A84D39D141537EEE5698 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t65AF31FD1FAEB0D4FB40A84D39D141537EEE5698);
	const Il2CppFullySharedGenericAny L_12 = L_0;
	const Il2CppFullySharedGenericAny L_26 = L_0;
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TKey_t65AF31FD1FAEB0D4FB40A84D39D141537EEE5698);
	int32_t V_0 = 0;
	Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* V_1 = NULL;
	int32_t V_2 = 0;
	Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* V_3 = NULL;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)) ? ___0_key : &___0_key), SizeOf_TKey_t65AF31FD1FAEB0D4FB40A84D39D141537EEE5698);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)), il2cpp_rgctx_method(method->klass->rgctx_data, 18), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B* L_2 = __this->___groupings;
		int32_t L_3 = V_0;
		GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B* L_4 = __this->___groupings;
		NullCheck(L_4);
		NullCheck(L_2);
		int32_t L_5 = ((int32_t)(L_3%((int32_t)(((RuntimeArray*)L_4)->max_length))));
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_6 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_1 = L_6;
		goto IL_0042;
	}

IL_001c:
	{
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_7 = V_1;
		int32_t L_8 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5),1));
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_003b;
		}
	}
	{
		RuntimeObject* L_10 = __this->___comparer;
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_11 = V_1;
		il2cpp_codegen_memcpy(L_12, il2cpp_codegen_get_instance_field_data_pointer(L_11, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5),0)), SizeOf_TKey_t65AF31FD1FAEB0D4FB40A84D39D141537EEE5698);
		il2cpp_codegen_memcpy(L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)) ? ___0_key : &___0_key), SizeOf_TKey_t65AF31FD1FAEB0D4FB40A84D39D141537EEE5698);
		NullCheck(L_10);
		bool L_14;
		L_14 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)) ? L_12: *(void**)L_12), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)) ? L_13: *(void**)L_13));
		if (!L_14)
		{
			goto IL_003b;
		}
	}
	{
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_15 = V_1;
		return L_15;
	}

IL_003b:
	{
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_16 = V_1;
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_17 = *(Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2**)il2cpp_codegen_get_instance_field_data_pointer(L_16, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5),4));
		V_1 = L_17;
	}

IL_0042:
	{
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_18 = V_1;
		if (L_18)
		{
			goto IL_001c;
		}
	}
	{
		bool L_19 = ___1_create;
		if (!L_19)
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_20 = __this->___count;
		GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B* L_21 = __this->___groupings;
		NullCheck(L_21);
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)(((RuntimeArray*)L_21)->max_length))))))
		{
			goto IL_0061;
		}
	}
	{
		((  void (*) (Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
	}

IL_0061:
	{
		int32_t L_22 = V_0;
		GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B* L_23 = __this->___groupings;
		NullCheck(L_23);
		V_2 = ((int32_t)(L_22%((int32_t)(((RuntimeArray*)L_23)->max_length))));
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_24 = (Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		((  void (*) (Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))(L_24, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_3 = L_24;
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_25 = V_3;
		il2cpp_codegen_memcpy(L_26, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3)) ? ___0_key : &___0_key), SizeOf_TKey_t65AF31FD1FAEB0D4FB40A84D39D141537EEE5698);
		NullCheck(L_25);
		il2cpp_codegen_write_instance_field_data(L_25, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5),0), L_26, SizeOf_TKey_t65AF31FD1FAEB0D4FB40A84D39D141537EEE5698);
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_27 = V_3;
		int32_t L_28 = V_0;
		NullCheck(L_27);
		il2cpp_codegen_write_instance_field_data<int32_t>(L_27, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5),1), L_28);
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_29 = V_3;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_30 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 22), (uint32_t)1);
		NullCheck(L_29);
		il2cpp_codegen_write_instance_field_data<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(L_29, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5),2), L_30);
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_31 = V_3;
		GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B* L_32 = __this->___groupings;
		int32_t L_33 = V_2;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_31);
		il2cpp_codegen_write_instance_field_data<Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2*>(L_31, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5),4), L_35);
		GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B* L_36 = __this->___groupings;
		int32_t L_37 = V_2;
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_38 = V_3;
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_38);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2*)L_38);
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_39 = __this->___lastGrouping;
		if (L_39)
		{
			goto IL_00b4;
		}
	}
	{
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_40 = V_3;
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_41 = V_3;
		NullCheck(L_40);
		il2cpp_codegen_write_instance_field_data<Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2*>(L_40, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5),5), L_41);
		goto IL_00d1;
	}

IL_00b4:
	{
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_42 = V_3;
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_43 = __this->___lastGrouping;
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_44 = *(Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2**)il2cpp_codegen_get_instance_field_data_pointer(L_43, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5),5));
		NullCheck(L_42);
		il2cpp_codegen_write_instance_field_data<Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2*>(L_42, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5),5), L_44);
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_45 = __this->___lastGrouping;
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_46 = V_3;
		NullCheck(L_45);
		il2cpp_codegen_write_instance_field_data<Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2*>(L_45, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5),5), L_46);
	}

IL_00d1:
	{
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_47 = V_3;
		__this->___lastGrouping = L_47;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lastGrouping), (void*)L_47);
		int32_t L_48 = __this->___count;
		__this->___count = ((int32_t)il2cpp_codegen_add(L_48, 1));
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_49 = V_3;
		return L_49;
	}

IL_00e8:
	{
		return (Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2*)NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lookup_2_Resize_m48EEED38EF3F4EEDD302E1CED9FA7E8CA6B43B9E_gshared (Lookup_2_t0E2C90AEB65A029DDD8A5DB090D1DD87BBE2E332* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B* V_1 = NULL;
	Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->___count;
		if (((int64_t)L_0 * (int64_t)2 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_0 * (int64_t)2 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		if (((int64_t)((int32_t)il2cpp_codegen_multiply(L_0, 2)) + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)((int32_t)il2cpp_codegen_multiply(L_0, 2)) + (int64_t)1 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, 2)), 1));
		int32_t L_1 = V_0;
		GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B* L_2 = (GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B*)(GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)L_1);
		V_1 = L_2;
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_3 = __this->___lastGrouping;
		V_2 = L_3;
	}

IL_0019:
	{
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_4 = V_2;
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_5 = *(Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2**)il2cpp_codegen_get_instance_field_data_pointer(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5),5));
		V_2 = L_5;
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_6 = V_2;
		int32_t L_7 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5),1));
		int32_t L_8 = V_0;
		V_3 = ((int32_t)(L_7%L_8));
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_9 = V_2;
		GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B* L_10 = V_1;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_9);
		il2cpp_codegen_write_instance_field_data<Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2*>(L_9, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 5),4), L_13);
		GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B* L_14 = V_1;
		int32_t L_15 = V_3;
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_16 = V_2;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2*)L_16);
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_17 = V_2;
		Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2* L_18 = __this->___lastGrouping;
		if ((!(((RuntimeObject*)(Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2*)L_17) == ((RuntimeObject*)(Grouping_tA7D79A8DCF5DF54971F5E38E3B02BC390C7F93C2*)L_18))))
		{
			goto IL_0019;
		}
	}
	{
		GroupingU5BU5D_t25950902A28EF47C807AC957D8AD435B572A1A4B* L_19 = V_1;
		__this->___groupings = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___groupings), (void*)L_19);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2__ctor_m0B413ACD3C26D0F35D16683B6A2CEBCC3170E65A_gshared (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, const RuntimeMethod* method) 
{
	{
		DefaultComparer_1_tF1F3B8981298E50FBC17BDC8CA0B4CFE867AD644* L_0 = (DefaultComparer_1_tF1F3B8981298E50FBC17BDC8CA0B4CFE867AD644*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		DefaultComparer_1__ctor_m1FB334BED8F2ED543F453D87C912BDA6611F368E(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		LowLevelDictionary_2__ctor_mB6B362C12FBFC3BDA4766411FDC767993214AFA2(__this, ((int32_t)17), (RuntimeObject*)L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2__ctor_mB6B362C12FBFC3BDA4766411FDC767993214AFA2_gshared (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___1_comparer;
		__this->____comparer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_0);
		int32_t L_1 = ___0_capacity;
		LowLevelDictionary_2_Clear_m7229E17DB8B64A5E367126DD076AA0577B2ED5A7(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2_set_Item_mD4043EA322BBAEBB1B94917145129443C56C982B_gshared (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* V_0 = NULL;
	{
		goto IL_0013;
	}

IL_0013:
	{
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = ___0_key;
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_3;
		L_3 = LowLevelDictionary_2_Find_m9E8AF9DE397CFCC424FF17C0125FACDB261E3AEB(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		V_0 = L_3;
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_5 = V_0;
		RuntimeObject* L_6 = ___1_value;
		NullCheck(L_5);
		L_5->____value = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->____value), (void*)L_6);
		return;
	}

IL_0034:
	{
		int32_t L_7 = ___0_key;
		RuntimeObject* L_8 = ___1_value;
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_9;
		L_9 = LowLevelDictionary_2_UncheckedAdd_m4B36B6453ADD7712B323A995014660300EDFD5BB(__this, L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2_Clear_m7229E17DB8B64A5E367126DD076AA0577B2ED5A7_gshared (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = ___0_capacity;
		EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6* L_2 = (EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6*)(EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)L_1);
		__this->____buckets = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_2);
		__this->____numEntries = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LowLevelDictionary_2_Remove_mDC5F88E2C3B2CA9902A5F7F156FDB86D651DFF5F_gshared (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* V_1 = NULL;
	Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* V_2 = NULL;
	{
		goto IL_0013;
	}

IL_0013:
	{
		int32_t L_1 = ___0_key;
		int32_t L_2;
		L_2 = LowLevelDictionary_2_GetBucket_m31C0AA9C3A13F586A702DFDE7508A606E20B4A9B(__this, L_1, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_0 = L_2;
		V_1 = (Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB*)NULL;
		EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6* L_3 = __this->____buckets;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		goto IL_0083;
	}

IL_0029:
	{
		RuntimeObject* L_7 = __this->____comparer;
		int32_t L_8 = ___0_key;
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_9 = V_2;
		NullCheck(L_9);
		int32_t L_10 = L_9->____key;
		NullCheck(L_7);
		bool L_11;
		L_11 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_7, L_8, L_10);
		if (!L_11)
		{
			goto IL_007a;
		}
	}
	{
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_12 = V_1;
		if (L_12)
		{
			goto IL_0050;
		}
	}
	{
		EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6* L_13 = __this->____buckets;
		int32_t L_14 = V_0;
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_15 = V_2;
		NullCheck(L_15);
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_16 = L_15->____next;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB*)L_16);
		goto IL_005c;
	}

IL_0050:
	{
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_17 = V_1;
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_18 = V_2;
		NullCheck(L_18);
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_19 = L_18->____next;
		NullCheck(L_17);
		L_17->____next = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_17->____next), (void*)L_19);
	}

IL_005c:
	{
		int32_t L_20 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_20, 1));
		int32_t L_21 = __this->____numEntries;
		__this->____numEntries = ((int32_t)il2cpp_codegen_subtract(L_21, 1));
		return (bool)1;
	}

IL_007a:
	{
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_22 = V_2;
		V_1 = L_22;
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_23 = V_2;
		NullCheck(L_23);
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_24 = L_23->____next;
		V_2 = L_24;
	}

IL_0083:
	{
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_25 = V_2;
		if (L_25)
		{
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* LowLevelDictionary_2_Find_m9E8AF9DE397CFCC424FF17C0125FACDB261E3AEB_gshared (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* V_1 = NULL;
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = LowLevelDictionary_2_GetBucket_m31C0AA9C3A13F586A702DFDE7508A606E20B4A9B(__this, L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_0 = L_1;
		EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6* L_2 = __this->____buckets;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		goto IL_0031;
	}

IL_0014:
	{
		RuntimeObject* L_6 = __this->____comparer;
		int32_t L_7 = ___0_key;
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9 = L_8->____key;
		NullCheck(L_6);
		bool L_10;
		L_10 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_6, L_7, L_9);
		if (!L_10)
		{
			goto IL_002a;
		}
	}
	{
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_11 = V_1;
		return L_11;
	}

IL_002a:
	{
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_12 = V_1;
		NullCheck(L_12);
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_13 = L_12->____next;
		V_1 = L_13;
	}

IL_0031:
	{
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_14 = V_1;
		if (L_14)
		{
			goto IL_0014;
		}
	}
	{
		return (Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB*)NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* LowLevelDictionary_2_UncheckedAdd_m4B36B6453ADD7712B323A995014660300EDFD5BB_gshared (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_0 = (Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 8));
		Entry__ctor_m1523ABCDEBE31BA50D6801DB569FB6C6DA0EAB65(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		V_0 = L_0;
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_1 = V_0;
		int32_t L_2 = ___0_key;
		NullCheck(L_1);
		L_1->____key = L_2;
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_3 = V_0;
		RuntimeObject* L_4 = ___1_value;
		NullCheck(L_3);
		L_3->____value = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->____value), (void*)L_4);
		int32_t L_5 = ___0_key;
		int32_t L_6;
		L_6 = LowLevelDictionary_2_GetBucket_m31C0AA9C3A13F586A702DFDE7508A606E20B4A9B(__this, L_5, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		V_1 = L_6;
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_7 = V_0;
		EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6* L_8 = __this->____buckets;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_7);
		L_7->____next = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->____next), (void*)L_11);
		EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6* L_12 = __this->____buckets;
		int32_t L_13 = V_1;
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_14 = V_0;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB*)L_14);
		int32_t L_15 = __this->____numEntries;
		__this->____numEntries = ((int32_t)il2cpp_codegen_add(L_15, 1));
		int32_t L_16 = __this->____numEntries;
		EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6* L_17 = __this->____buckets;
		NullCheck(L_17);
		if ((((int32_t)L_16) <= ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_17)->max_length)), 2)))))
		{
			goto IL_005a;
		}
	}
	{
		LowLevelDictionary_2_ExpandBuckets_m033D9FFFD113915A8BD824AC730C492F01631A9A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_005a:
	{
		Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_18 = V_0;
		return L_18;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2_ExpandBuckets_m033D9FFFD113915A8BD824AC730C492F01631A9A_gshared (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6* V_1 = NULL;
	int32_t V_2 = 0;
	Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* V_3 = NULL;
	int32_t V_4 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{
		{
			EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6* L_0 = __this->____buckets;
			NullCheck(L_0);
			V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_0)->max_length)), 2)), 1));
			int32_t L_1 = V_0;
			EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6* L_2 = (EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6*)(EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)L_1);
			V_1 = L_2;
			V_2 = 0;
			goto IL_004f_1;
		}

IL_0018_1:
		{
			EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6* L_3 = __this->____buckets;
			int32_t L_4 = V_2;
			NullCheck(L_3);
			int32_t L_5 = L_4;
			Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
			V_3 = L_6;
			goto IL_0048_1;
		}

IL_0023_1:
		{
			Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_7 = V_3;
			NullCheck(L_7);
			Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_8 = L_7->____next;
			Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_9 = V_3;
			NullCheck(L_9);
			int32_t L_10 = L_9->____key;
			int32_t L_11 = V_0;
			int32_t L_12;
			L_12 = LowLevelDictionary_2_GetBucket_m31C0AA9C3A13F586A702DFDE7508A606E20B4A9B(__this, L_10, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
			V_4 = L_12;
			Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_13 = V_3;
			EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6* L_14 = V_1;
			int32_t L_15 = V_4;
			NullCheck(L_14);
			int32_t L_16 = L_15;
			Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
			NullCheck(L_13);
			L_13->____next = L_17;
			Il2CppCodeGenWriteBarrier((void**)(&L_13->____next), (void*)L_17);
			EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6* L_18 = V_1;
			int32_t L_19 = V_4;
			Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_20 = V_3;
			NullCheck(L_18);
			(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB*)L_20);
			V_3 = L_8;
		}

IL_0048_1:
		{
			Entry_t776AD7605FD3B32B33A463DA5E56809C57BFA1AB* L_21 = V_3;
			if (L_21)
			{
				goto IL_0023_1;
			}
		}
		{
			int32_t L_22 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		}

IL_004f_1:
		{
			int32_t L_23 = V_2;
			EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6* L_24 = __this->____buckets;
			NullCheck(L_24);
			if ((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))
			{
				goto IL_0018_1;
			}
		}
		{
			EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6* L_25 = V_1;
			__this->____buckets = L_25;
			Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_25);
			goto IL_0066;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0063;
		}
		throw e;
	}

CATCH_0063:
	{
		OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F* L_26 = ((OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F*)IL2CPP_GET_ACTIVE_EXCEPTION(OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F*));;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0066;
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelDictionary_2_GetBucket_m31C0AA9C3A13F586A702DFDE7508A606E20B4A9B_gshared (LowLevelDictionary_2_t4C52985827C66ED86805FEED7556812E4207A114* __this, int32_t ___0_key, int32_t ___1_numBuckets, const RuntimeMethod* method) 
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		RuntimeObject* L_0 = __this->____comparer;
		int32_t L_1 = ___0_key;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_0, L_1);
		int32_t L_3 = ___1_numBuckets;
		if (!L_3)
		{
			G_B2_0 = ((int32_t)(L_2&((int32_t)2147483647LL)));
			goto IL_0018;
		}
		G_B1_0 = ((int32_t)(L_2&((int32_t)2147483647LL)));
	}
	{
		int32_t L_4 = ___1_numBuckets;
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		goto IL_0020;
	}

IL_0018:
	{
		EntryU5BU5D_t16529C13B3C98BF11CD3EF6FAF58FEA29EABDCA6* L_5 = __this->____buckets;
		NullCheck(L_5);
		G_B3_0 = ((int32_t)(((RuntimeArray*)L_5)->max_length));
		G_B3_1 = G_B2_0;
	}

IL_0020:
	{
		return ((int32_t)(G_B3_1%G_B3_0));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2__ctor_m6893497702070CC68AC3BAB751834E9FF68C4528_gshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, const RuntimeMethod* method) 
{
	{
		DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5* L_0 = (DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		((  void (*) (DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		((  void (*) (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, ((int32_t)17), (RuntimeObject*)L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2__ctor_m2976D36B6439669E09FF4616F9EB6AAB8DDDB62A_gshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___1_comparer;
		__this->____comparer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_0);
		int32_t L_1 = ___0_capacity;
		((  void (*) (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2_set_Item_mCA9C09B6AFCF6CC5CE6A0C40EA78FC75689EF04D_gshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const uint32_t SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	const Il2CppFullySharedGenericAny L_4 = L_0;
	const Il2CppFullySharedGenericAny L_9 = L_0;
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900);
	const Il2CppFullySharedGenericAny L_10 = L_8;
	Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* V_0 = NULL;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6), L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0013:
	{
		int32_t L_3 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_3, 1));
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_5;
		L_5 = InvokerFuncInvoker1< Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_4: *(void**)L_4));
		V_0 = L_5;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_6 = V_0;
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_7 = V_0;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___1_value : &___1_value), SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900);
		NullCheck(L_7);
		il2cpp_codegen_write_instance_field_data(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8),1), L_8, SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900);
		return;
	}

IL_0034:
	{
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___1_value : &___1_value), SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900);
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_11;
		L_11 = InvokerFuncInvoker2< Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_9: *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? L_10: *(void**)L_10));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2_Clear_m8EC37682AC495C0E5B8EB7CA373B7D9FE89616D3_gshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = ___0_capacity;
		EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_2 = (EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52*)(EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)L_1);
		__this->____buckets = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_2);
		__this->____numEntries = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LowLevelDictionary_2_Remove_m70E88A5B684A3A944B6569781B7B3918196A98E6_gshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	const Il2CppFullySharedGenericAny L_3 = L_0;
	const Il2CppFullySharedGenericAny L_10 = L_0;
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	int32_t V_0 = 0;
	Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* V_1 = NULL;
	Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* V_2 = NULL;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6), L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0013:
	{
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		int32_t L_4;
		L_4 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_3: *(void**)L_3), 0);
		V_0 = L_4;
		V_1 = (Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*)NULL;
		EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_5 = __this->____buckets;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		goto IL_0083;
	}

IL_0029:
	{
		RuntimeObject* L_9 = __this->____comparer;
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_11 = V_2;
		il2cpp_codegen_memcpy(L_12, il2cpp_codegen_get_instance_field_data_pointer(L_11, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8),0)), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		NullCheck(L_9);
		bool L_13;
		L_13 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_12: *(void**)L_12));
		if (!L_13)
		{
			goto IL_007a;
		}
	}
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_14 = V_1;
		if (L_14)
		{
			goto IL_0050;
		}
	}
	{
		EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_15 = __this->____buckets;
		int32_t L_16 = V_0;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_17 = V_2;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_18 = *(Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA**)il2cpp_codegen_get_instance_field_data_pointer(L_17, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8),2));
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*)L_18);
		goto IL_005c;
	}

IL_0050:
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_19 = V_1;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_20 = V_2;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_21 = *(Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA**)il2cpp_codegen_get_instance_field_data_pointer(L_20, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8),2));
		NullCheck(L_19);
		il2cpp_codegen_write_instance_field_data<Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*>(L_19, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8),2), L_21);
	}

IL_005c:
	{
		int32_t L_22 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t L_23 = __this->____numEntries;
		__this->____numEntries = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
		return (bool)1;
	}

IL_007a:
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_24 = V_2;
		V_1 = L_24;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_25 = V_2;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_26 = *(Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA**)il2cpp_codegen_get_instance_field_data_pointer(L_25, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8),2));
		V_2 = L_26;
	}

IL_0083:
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_27 = V_2;
		if (L_27)
		{
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* LowLevelDictionary_2_Find_m179CAB1400AF502A22F57DE2B32B403D4BE04671_gshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	const Il2CppFullySharedGenericAny L_7 = L_0;
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	int32_t V_0 = 0;
	Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* V_1 = NULL;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		int32_t L_1;
		L_1 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_0: *(void**)L_0), 0);
		V_0 = L_1;
		EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_2 = __this->____buckets;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		goto IL_0031;
	}

IL_0014:
	{
		RuntimeObject* L_6 = __this->____comparer;
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_8 = V_1;
		il2cpp_codegen_memcpy(L_9, il2cpp_codegen_get_instance_field_data_pointer(L_8, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8),0)), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		NullCheck(L_6);
		bool L_10;
		L_10 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_7: *(void**)L_7), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_9: *(void**)L_9));
		if (!L_10)
		{
			goto IL_002a;
		}
	}
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_11 = V_1;
		return L_11;
	}

IL_002a:
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_12 = V_1;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_13 = *(Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA**)il2cpp_codegen_get_instance_field_data_pointer(L_12, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8),2));
		V_1 = L_13;
	}

IL_0031:
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_14 = V_1;
		if (L_14)
		{
			goto IL_0014;
		}
	}
	{
		return (Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*)NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* LowLevelDictionary_2_UncheckedAdd_mFD09849DDF8DDA1917BFE11E1C65CE60CDDA2D6F_gshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const uint32_t SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900);
	Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_0 = (Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 8));
		((  void (*) (Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		V_0 = L_0;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_1 = V_0;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		NullCheck(L_1);
		il2cpp_codegen_write_instance_field_data(L_1, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8),0), L_2, SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_3 = V_0;
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9)) ? ___1_value : &___1_value), SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900);
		NullCheck(L_3);
		il2cpp_codegen_write_instance_field_data(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8),1), L_4, SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900);
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		int32_t L_6;
		L_6 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_5: *(void**)L_5), 0);
		V_1 = L_6;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_7 = V_0;
		EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_8 = __this->____buckets;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_7);
		il2cpp_codegen_write_instance_field_data<Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*>(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8),2), L_11);
		EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_12 = __this->____buckets;
		int32_t L_13 = V_1;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_14 = V_0;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*)L_14);
		int32_t L_15 = __this->____numEntries;
		__this->____numEntries = ((int32_t)il2cpp_codegen_add(L_15, 1));
		int32_t L_16 = __this->____numEntries;
		EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_17 = __this->____buckets;
		NullCheck(L_17);
		if ((((int32_t)L_16) <= ((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_17)->max_length)), 2)))))
		{
			goto IL_005a;
		}
	}
	{
		((  void (*) (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
	}

IL_005a:
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_18 = V_0;
		return L_18;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2_ExpandBuckets_m187E4F5B88425903219951B37753A533F3AED6FB_gshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	int32_t V_0 = 0;
	EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* V_1 = NULL;
	int32_t V_2 = 0;
	Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* V_3 = NULL;
	int32_t V_4 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{
		{
			EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_0 = __this->____buckets;
			NullCheck(L_0);
			V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_0)->max_length)), 2)), 1));
			int32_t L_1 = V_0;
			EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_2 = (EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52*)(EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)L_1);
			V_1 = L_2;
			V_2 = 0;
			goto IL_004f_1;
		}

IL_0018_1:
		{
			EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_3 = __this->____buckets;
			int32_t L_4 = V_2;
			NullCheck(L_3);
			int32_t L_5 = L_4;
			Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
			V_3 = L_6;
			goto IL_0048_1;
		}

IL_0023_1:
		{
			Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_7 = V_3;
			Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_8 = *(Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA**)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8),2));
			Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_9 = V_3;
			il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(L_9, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8),0)), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
			int32_t L_11 = V_0;
			int32_t L_12;
			L_12 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_10: *(void**)L_10), L_11);
			V_4 = L_12;
			Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_13 = V_3;
			EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_14 = V_1;
			int32_t L_15 = V_4;
			NullCheck(L_14);
			int32_t L_16 = L_15;
			Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
			NullCheck(L_13);
			il2cpp_codegen_write_instance_field_data<Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*>(L_13, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8),2), L_17);
			EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_18 = V_1;
			int32_t L_19 = V_4;
			Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_20 = V_3;
			NullCheck(L_18);
			(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*)L_20);
			V_3 = L_8;
		}

IL_0048_1:
		{
			Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_21 = V_3;
			if (L_21)
			{
				goto IL_0023_1;
			}
		}
		{
			int32_t L_22 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		}

IL_004f_1:
		{
			int32_t L_23 = V_2;
			EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_24 = __this->____buckets;
			NullCheck(L_24);
			if ((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))
			{
				goto IL_0018_1;
			}
		}
		{
			EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_25 = V_1;
			__this->____buckets = L_25;
			Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_25);
			goto IL_0066;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0063;
		}
		throw e;
	}

CATCH_0063:
	{
		OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F* L_26 = ((OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F*)IL2CPP_GET_ACTIVE_EXCEPTION(OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F*));;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0066;
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelDictionary_2_GetBucket_m1A96B86081231C08700D90259C776BF8CE47FD04_gshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, Il2CppFullySharedGenericAny ___0_key, int32_t ___1_numBuckets, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		RuntimeObject* L_0 = __this->____comparer;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_1: *(void**)L_1));
		int32_t L_3 = ___1_numBuckets;
		if (!L_3)
		{
			G_B2_0 = ((int32_t)(L_2&((int32_t)2147483647LL)));
			goto IL_0018;
		}
		G_B1_0 = ((int32_t)(L_2&((int32_t)2147483647LL)));
	}
	{
		int32_t L_4 = ___1_numBuckets;
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		goto IL_0020;
	}

IL_0018:
	{
		EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_5 = __this->____buckets;
		NullCheck(L_5);
		G_B3_0 = ((int32_t)(((RuntimeArray*)L_5)->max_length));
		G_B3_1 = G_B2_0;
	}

IL_0020:
	{
		return ((int32_t)(G_B3_1%G_B3_0));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelListWithIList_1__ctor_mD6F74009D6D4AFB9BB96C40001514D52B63DED1F_gshared (LowLevelListWithIList_1_t424B84BB083921C00880052D4B49074AF66B72FC* __this, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		LowLevelList_1__ctor_mC9E5B6B4FA524A581AE17EB5DE22ADBDDD12F0E7((LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelListWithIList_1__ctor_mF47DAB021B141F7D4CFA37FE294553086C1A50D3_gshared (LowLevelListWithIList_1_t424B84BB083921C00880052D4B49074AF66B72FC* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		LowLevelList_1__ctor_mEA732C8D15FD4B514B237270C203F99613A78085((LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LowLevelListWithIList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_mCEA65B95971EEAC784E4F80AF3BF71EB1955DB83_gshared (LowLevelListWithIList_1_t424B84BB083921C00880052D4B49074AF66B72FC* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LowLevelListWithIList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mABE726834636DA190108D117F993FE91B40E3A5A_gshared (LowLevelListWithIList_1_t424B84BB083921C00880052D4B49074AF66B72FC* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tEDEAA5F8FFBCB1F2EE5A6E473ED9F5A86691DE05 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mE48807999815FCA9A84BDDE46C5E1EC8F29B91DF((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		Enumerator_tEDEAA5F8FFBCB1F2EE5A6E473ED9F5A86691DE05 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LowLevelListWithIList_1_System_Collections_IEnumerable_GetEnumerator_mD777BE2CA9FF0E9BD3140C933B907C333130882C_gshared (LowLevelListWithIList_1_t424B84BB083921C00880052D4B49074AF66B72FC* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tEDEAA5F8FFBCB1F2EE5A6E473ED9F5A86691DE05 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mE48807999815FCA9A84BDDE46C5E1EC8F29B91DF((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		Enumerator_tEDEAA5F8FFBCB1F2EE5A6E473ED9F5A86691DE05 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), &L_1);
		return (RuntimeObject*)L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelListWithIList_1__ctor_m7AB0E8E5B20FFDC048A5EF35FE2D5BFC411168BE_gshared (LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* __this, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		((  void (*) (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelListWithIList_1__ctor_m4B122A24C900A82393070E3BC47A5195E41D0166_gshared (LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		((  void (*) (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LowLevelListWithIList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m4370070FFE2C281C957687075D458D7367685370_gshared (LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LowLevelListWithIList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m2192B77A7D1721166B77434FAE475580AEABF35A_gshared (LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_tB19D46B40EC775D8EBAD1F019FB1BC10822C8ECA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0 L_0 = alloca(SizeOf_Enumerator_tB19D46B40EC775D8EBAD1F019FB1BC10822C8ECA);
	{
		memset(L_0, 0, SizeOf_Enumerator_tB19D46B40EC775D8EBAD1F019FB1BC10822C8ECA);
		Enumerator__ctor_m6C59AA282C548B36E982B84CACC3A8E4AA904775((Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0*)L_0, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LowLevelListWithIList_1_System_Collections_IEnumerable_GetEnumerator_mC47144515E8A260A0737260ED6A11C0D5C3B74DE_gshared (LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_tB19D46B40EC775D8EBAD1F019FB1BC10822C8ECA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0 L_0 = alloca(SizeOf_Enumerator_tB19D46B40EC775D8EBAD1F019FB1BC10822C8ECA);
	{
		memset(L_0, 0, SizeOf_Enumerator_tB19D46B40EC775D8EBAD1F019FB1BC10822C8ECA);
		Enumerator__ctor_m6C59AA282C548B36E982B84CACC3A8E4AA904775((Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0*)L_0, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3), L_0);
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1__ctor_mC9E5B6B4FA524A581AE17EB5DE22ADBDDD12F0E7_gshared (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1__ctor_mEA732C8D15FD4B514B237270C203F99613A78085_gshared (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0015:
	{
		int32_t L_2 = ___0_capacity;
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ((LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_3);
		return;
	}

IL_0024:
	{
		int32_t L_4 = ___0_capacity;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_4);
		__this->____items = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelList_1_get_Capacity_mC30C6977565ECFBB19B98426BA80DF6B3B46CC21_gshared (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->____items;
		NullCheck(L_0);
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_set_Capacity_mBC06E150C30A932FE95EF6D4A80217BC6E5257DC_gshared (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_value;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = __this->____items;
		NullCheck(L_4);
		if ((((int32_t)L_3) == ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_5 = ___0_value;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_6 = ___0_value;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_6);
		V_0 = L_7;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = __this->____items;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = V_0;
		int32_t L_10 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, L_10, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = V_0;
		__this->____items = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_11);
		return;
	}

IL_0046:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = ((LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
	}

IL_0051:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelList_1_get_Count_m1ECF3B013648B0789D39052FD2C562ECEB2B13A4_gshared (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LowLevelList_1_get_Item_m4A0F25A4B5A0BBD4AD5C423C0B474765E3F65596_gshared (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_000f:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____items;
		int32_t L_4 = ___0_index;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_set_Item_m9F37196A2E5D41B987A97C7BA6F3FCE0A7DF96FD_gshared (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_000f:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____items;
		int32_t L_4 = ___0_index;
		RuntimeObject* L_5 = ___1_value;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (RuntimeObject*)L_5);
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_Add_m46FF684E8A458907434DA7ED0BBD0D9BA39707A4_gshared (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_2 = __this->____size;
		LowLevelList_1_EnsureCapacity_m15C5DAD66F3D12BFD786DBE4994ED0A2A9849A0B(__this, ((int32_t)il2cpp_codegen_add(L_2, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_001e:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____items;
		int32_t L_4 = __this->____size;
		V_0 = L_4;
		int32_t L_5 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = V_0;
		RuntimeObject* L_7 = ___0_item;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (RuntimeObject*)L_7);
		int32_t L_8 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_8, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_EnsureCapacity_m15C5DAD66F3D12BFD786DBE4994ED0A2A9849A0B_gshared (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->____items;
		NullCheck(L_0);
		int32_t L_1 = ___0_min;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)L_1)))
		{
			goto IL_002f;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = __this->____items;
		NullCheck(L_2);
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____items;
		NullCheck(L_3);
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_3)->max_length)), 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_min;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_6 = ___0_min;
		V_0 = L_6;
	}

IL_0028:
	{
		int32_t L_7 = V_0;
		LowLevelList_1_set_Capacity_mBC06E150C30A932FE95EF6D4A80217BC6E5257DC(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
	}

IL_002f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_AddRange_m9D986B88377A55637A9383B0DD0DF626A7ED2042_gshared (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		LowLevelList_1_InsertRange_m41D4839802C22AA8A00BB419B348DE91BCFF52A0(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_Clear_m9AA9891F3800276BDB1DE93FF8FABC31BD96E34F_gshared (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items;
		int32_t L_2 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_1, 0, L_2, NULL);
		__this->____size = 0;
	}

IL_0022:
	{
		int32_t L_3 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_3, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LowLevelList_1_Contains_m2B40E433790BBB4FBB0F904BE5DF58C2AA377031_gshared (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_item;
		if (L_0)
		{
			goto IL_0030;
		}
	}
	{
		V_0 = 0;
		goto IL_0025;
	}

IL_000c:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if (L_4)
		{
			goto IL_0021;
		}
	}
	{
		return (bool)1;
	}

IL_0021:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0025:
	{
		int32_t L_6 = V_0;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_0030:
	{
		RuntimeObject* L_8 = ___0_item;
		int32_t L_9;
		L_9 = LowLevelList_1_IndexOf_m1E3798AD4DBE5EFEFA2AA30F9AEB1DA864237839(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if ((((int32_t)L_9) < ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		return (bool)1;
	}

IL_003c:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_CopyTo_m9823350B2006D8BFB2BAF2E44C3D3800BFDF5F31_gshared (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->____items;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelList_1_IndexOf_m1E3798AD4DBE5EFEFA2AA30F9AEB1DA864237839_gshared (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->____items;
		RuntimeObject* L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisRuntimeObject_m4C0C698B1D627E6B3C3BE6DDA512E8E276DC6F73(L_0, L_1, 0, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_Insert_mBD4CC70F7D0997C1FDDA0699DB1417BEC62D49D4_gshared (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = __this->____size;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = __this->____items;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_5 = __this->____size;
		LowLevelList_1_EnsureCapacity_m15C5DAD66F3D12BFD786DBE4994ED0A2A9849A0B(__this, ((int32_t)il2cpp_codegen_add(L_5, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0032:
	{
		int32_t L_6 = ___0_index;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_0058;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = __this->____items;
		int32_t L_9 = ___0_index;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = __this->____items;
		int32_t L_11 = ___0_index;
		int32_t L_12 = __this->____size;
		int32_t L_13 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, L_9, (RuntimeArray*)L_10, ((int32_t)il2cpp_codegen_add(L_11, 1)), ((int32_t)il2cpp_codegen_subtract(L_12, L_13)), NULL);
	}

IL_0058:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		RuntimeObject* L_16 = ___1_item;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (RuntimeObject*)L_16);
		int32_t L_17 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_17, 1));
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_InsertRange_m41D4839802C22AA8A00BB419B348DE91BCFF52A0_gshared (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___0_index;
		int32_t L_3 = __this->____size;
		if ((!(((uint32_t)L_2) > ((uint32_t)L_3))))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0022:
	{
		RuntimeObject* L_5 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_5, il2cpp_rgctx_data(method->klass->rgctx_data, 11)));
		RuntimeObject* L_6 = V_0;
		if (!L_6)
		{
			goto IL_00d8;
		}
	}
	{
		RuntimeObject* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_7);
		V_1 = L_8;
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0107;
		}
	}
	{
		int32_t L_10 = __this->____size;
		int32_t L_11 = V_1;
		LowLevelList_1_EnsureCapacity_m15C5DAD66F3D12BFD786DBE4994ED0A2A9849A0B(__this, ((int32_t)il2cpp_codegen_add(L_10, L_11)), il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		int32_t L_12 = ___0_index;
		int32_t L_13 = __this->____size;
		if ((((int32_t)L_12) >= ((int32_t)L_13)))
		{
			goto IL_0071;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = __this->____items;
		int32_t L_17 = ___0_index;
		int32_t L_18 = V_1;
		int32_t L_19 = __this->____size;
		int32_t L_20 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, L_15, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_add(L_17, L_18)), ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), NULL);
	}

IL_0071:
	{
		RuntimeObject* L_21 = V_0;
		if ((!(((RuntimeObject*)(LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58*)__this) == ((RuntimeObject*)(RuntimeObject*)L_21))))
		{
			goto IL_00aa;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = __this->____items;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = __this->____items;
		int32_t L_24 = ___0_index;
		int32_t L_25 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_22, 0, (RuntimeArray*)L_23, L_24, L_25, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_26 = __this->____items;
		int32_t L_27 = ___0_index;
		int32_t L_28 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = __this->____items;
		int32_t L_30 = ___0_index;
		int32_t L_31 = __this->____size;
		int32_t L_32 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_26, ((int32_t)il2cpp_codegen_add(L_27, L_28)), (RuntimeArray*)L_29, ((int32_t)il2cpp_codegen_multiply(L_30, 2)), ((int32_t)il2cpp_codegen_subtract(L_31, L_32)), NULL);
		goto IL_00c8;
	}

IL_00aa:
	{
		int32_t L_33 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_34 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_33);
		V_2 = L_34;
		RuntimeObject* L_35 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_36 = V_2;
		NullCheck(L_35);
		InterfaceActionInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_35, L_36, 0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_37 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = __this->____items;
		int32_t L_39 = ___0_index;
		int32_t L_40 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, (RuntimeArray*)L_38, L_39, L_40, NULL);
	}

IL_00c8:
	{
		int32_t L_41 = __this->____size;
		int32_t L_42 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_41, L_42));
		goto IL_0107;
	}

IL_00d8:
	{
		RuntimeObject* L_43 = ___1_collection;
		NullCheck(L_43);
		RuntimeObject* L_44;
		L_44 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_43);
		V_3 = L_44;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00fd:
			{
				{
					RuntimeObject* L_45 = V_3;
					if (!L_45)
					{
						goto IL_0106;
					}
				}
				{
					RuntimeObject* L_46 = V_3;
					NullCheck((RuntimeObject*)L_46);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				}

IL_0106:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00f3_1;
			}

IL_00e1_1:
			{
				int32_t L_47 = ___0_index;
				int32_t L_48 = L_47;
				___0_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
				RuntimeObject* L_49 = V_3;
				NullCheck(L_49);
				RuntimeObject* L_50;
				L_50 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 15), L_49);
				LowLevelList_1_Insert_mBD4CC70F7D0997C1FDDA0699DB1417BEC62D49D4(__this, L_48, L_50, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
			}

IL_00f3_1:
			{
				RuntimeObject* L_51 = V_3;
				NullCheck((RuntimeObject*)L_51);
				bool L_52;
				L_52 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_51);
				if (L_52)
				{
					goto IL_00e1_1;
				}
			}
			{
				goto IL_0107;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0107:
	{
		int32_t L_53 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_53, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LowLevelList_1_Remove_m411B3616E7F6526FE2F2DB2571219DCBCF20312E_gshared (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_item;
		int32_t L_1;
		L_1 = LowLevelList_1_IndexOf_m1E3798AD4DBE5EFEFA2AA30F9AEB1DA864237839(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		LowLevelList_1_RemoveAt_m14CF4D511C0CCCECF58915F0156E9C13A3046F13(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelList_1_RemoveAll_m2F00F5AB6ECF653E93460FDB1A264B2A604D0C22_gshared (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		goto IL_0016;
	}

IL_0012:
	{
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_0016:
	{
		int32_t L_3 = V_0;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0033;
		}
	}
	{
		Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* L_5 = ___0_match;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = __this->____items;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_5);
		bool L_10;
		L_10 = Predicate_1_Invoke_m6AC449189DCEE89A4FA2A2B724DE296A1DFB6A9B_inline(L_5, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		if (!L_10)
		{
			goto IL_0012;
		}
	}

IL_0033:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = __this->____size;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_003e;
		}
	}
	{
		return 0;
	}

IL_003e:
	{
		int32_t L_13 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		goto IL_008e;
	}

IL_0044:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0048:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = __this->____size;
		if ((((int32_t)L_15) >= ((int32_t)L_16)))
		{
			goto IL_0065;
		}
	}
	{
		Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* L_17 = ___0_match;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = __this->____items;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		RuntimeObject* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_17);
		bool L_22;
		L_22 = Predicate_1_Invoke_m6AC449189DCEE89A4FA2A2B724DE296A1DFB6A9B_inline(L_17, L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		if (L_22)
		{
			goto IL_0044;
		}
	}

IL_0065:
	{
		int32_t L_23 = V_1;
		int32_t L_24 = __this->____size;
		if ((((int32_t)L_23) >= ((int32_t)L_24)))
		{
			goto IL_008e;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = __this->____items;
		int32_t L_26 = V_0;
		int32_t L_27 = L_26;
		V_0 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28 = __this->____items;
		int32_t L_29 = V_1;
		int32_t L_30 = L_29;
		V_1 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		NullCheck(L_28);
		int32_t L_31 = L_30;
		RuntimeObject* L_32 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (RuntimeObject*)L_32);
	}

IL_008e:
	{
		int32_t L_33 = V_1;
		int32_t L_34 = __this->____size;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0048;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_35 = __this->____items;
		int32_t L_36 = V_0;
		int32_t L_37 = __this->____size;
		int32_t L_38 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_35, L_36, ((int32_t)il2cpp_codegen_subtract(L_37, L_38)), NULL);
		int32_t L_39 = __this->____size;
		int32_t L_40 = V_0;
		int32_t L_41 = V_0;
		__this->____size = L_41;
		int32_t L_42 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_42, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_39, L_40));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_RemoveAt_m14CF4D511C0CCCECF58915F0156E9C13A3046F13_gshared (LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = ___0_index;
		int32_t L_5 = __this->____size;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0048;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = __this->____items;
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		int32_t L_11 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, ((int32_t)il2cpp_codegen_add(L_7, 1)), (RuntimeArray*)L_8, L_9, ((int32_t)il2cpp_codegen_subtract(L_10, L_11)), NULL);
	}

IL_0048:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = __this->____items;
		int32_t L_13 = __this->____size;
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		RuntimeObject* L_14 = V_0;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (RuntimeObject*)L_14);
		int32_t L_15 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_15, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1__cctor_m5FD95D7F7EC1FD11AADAC0CC7C484A32F7FD0E4A_gshared (const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), (uint32_t)0);
		((LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((LowLevelList_1_tFB82D019B54AD98BC47D01C80B32C9DC3FA3BE58_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1__ctor_mD3CD763C70C97727954E6E8A5A8E140EF55EDE9F_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1__ctor_mCDEF1A5F77BCA815F0CDF2C6EB9E91D3909BC5BB_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0015:
	{
		int32_t L_2 = ___0_capacity;
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_3);
		return;
	}

IL_0024:
	{
		int32_t L_4 = ___0_capacity;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_4);
		__this->____items = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelList_1_get_Capacity_mE34B1F6427145BD1BC7EC9E5F2290027CB634FAC_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____items;
		NullCheck(L_0);
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_set_Capacity_m72ED35E6CF83B329A983773E2DBE542A235CA53E_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_value;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->____items;
		NullCheck(L_4);
		if ((((int32_t)L_3) == ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_5 = ___0_value;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_6 = ___0_value;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_6);
		V_0 = L_7;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = __this->____items;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = V_0;
		int32_t L_10 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, L_10, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = V_0;
		__this->____items = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_11);
		return;
	}

IL_0046:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = ((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___s_emptyArray;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
	}

IL_0051:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelList_1_get_Count_m606E086DB7EE87F6497FC018F90AE7988456C6A4_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_get_Item_mE1B6F0331605C882D5552283F3E039DAB1CFE249_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_000f:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____items;
		int32_t L_4 = ___0_index;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		il2cpp_codegen_memcpy(L_6, (L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		il2cpp_codegen_memcpy(il2cppRetVal, L_6, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_set_Item_m43802D3D871A9B9E33879921E12CC84BADF9D917_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_000f:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____items;
		int32_t L_4 = ___0_index;
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___1_value : &___1_value), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		NullCheck(L_3);
		il2cpp_codegen_memcpy((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)), L_5, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 4), (void**)(L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)), (void*)L_5);
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_Add_mA79D24F8FC36DBAE441CD350B69E58E559F3A77A_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____items;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_2 = __this->____size;
		((  void (*) (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(__this, ((int32_t)il2cpp_codegen_add(L_2, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_001e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____items;
		int32_t L_4 = __this->____size;
		V_0 = L_4;
		int32_t L_5 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = V_0;
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___0_item : &___0_item), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		NullCheck(L_3);
		il2cpp_codegen_memcpy((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)), L_7, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 4), (void**)(L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)), (void*)L_7);
		int32_t L_8 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_8, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_EnsureCapacity_mE56EA3BECD245513463EE874D0025C6A20FBC309_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____items;
		NullCheck(L_0);
		int32_t L_1 = ___0_min;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)L_1)))
		{
			goto IL_002f;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = __this->____items;
		NullCheck(L_2);
		if (!(((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____items;
		NullCheck(L_3);
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_3)->max_length)), 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_min;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_6 = ___0_min;
		V_0 = L_6;
	}

IL_0028:
	{
		int32_t L_7 = V_0;
		((  void (*) (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
	}

IL_002f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_AddRange_mBE88210260B339F084E453A719D44DBD91025233_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		((  void (*) (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_Clear_mE1C2D67C7C00C6323E9825A0ED4946C0C0EAD499_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____items;
		int32_t L_2 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_1, 0, L_2, NULL);
		__this->____size = 0;
	}

IL_0022:
	{
		int32_t L_3 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_3, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LowLevelList_1_Contains_mF7E0C9FBFE03FCE5AB7A8A5F2372A6398AC0F027_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	const Il2CppFullySharedGenericAny L_5 = L_0;
	const Il2CppFullySharedGenericAny L_10 = L_0;
	int32_t V_0 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___0_item : &___0_item), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4), L_0);
		if (L_1)
		{
			goto IL_0030;
		}
	}
	{
		V_0 = 0;
		goto IL_0025;
	}

IL_000c:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = __this->____items;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		il2cpp_codegen_memcpy(L_5, (L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		bool L_6 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4), L_5);
		if (L_6)
		{
			goto IL_0021;
		}
	}
	{
		return (bool)1;
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0025:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = __this->____size;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_0030:
	{
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___0_item : &___0_item), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		int32_t L_11;
		L_11 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_10: *(void**)L_10));
		if ((((int32_t)L_11) < ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		return (bool)1;
	}

IL_003c:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_CopyTo_mF495B6C8191B5C8929B60BC9F7502FE518DC81DE_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____items;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelList_1_IndexOf_mF86770392070839AB16F994F40A7B380FAD741CB_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____items;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___0_item : &___0_item), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = InvokerFuncInvoker4< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Il2CppFullySharedGenericAny, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), NULL, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_1: *(void**)L_1), 0, L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_Insert_mECC1247C269DC9FD2DE1250FE6418D768BA1CD16_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = __this->____size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->____items;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_5 = __this->____size;
		((  void (*) (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(__this, ((int32_t)il2cpp_codegen_add(L_5, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0032:
	{
		int32_t L_6 = ___0_index;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_0058;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = __this->____items;
		int32_t L_9 = ___0_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = __this->____items;
		int32_t L_11 = ___0_index;
		int32_t L_12 = __this->____size;
		int32_t L_13 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, L_9, (RuntimeArray*)L_10, ((int32_t)il2cpp_codegen_add(L_11, 1)), ((int32_t)il2cpp_codegen_subtract(L_12, L_13)), NULL);
	}

IL_0058:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		il2cpp_codegen_memcpy(L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___1_item : &___1_item), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		NullCheck(L_14);
		il2cpp_codegen_memcpy((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)), L_16, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 4), (void**)(L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)), (void*)L_16);
		int32_t L_17 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_17, 1));
		int32_t L_18 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_InsertRange_m10381E430332334B43213A556876E789C677A9B0_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_50 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___0_index;
		int32_t L_3 = __this->____size;
		if ((!(((uint32_t)L_2) > ((uint32_t)L_3))))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0022:
	{
		RuntimeObject* L_5 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_5, il2cpp_rgctx_data(method->klass->rgctx_data, 11)));
		RuntimeObject* L_6 = V_0;
		if (!L_6)
		{
			goto IL_00d8;
		}
	}
	{
		RuntimeObject* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_7);
		V_1 = L_8;
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0107;
		}
	}
	{
		int32_t L_10 = __this->____size;
		int32_t L_11 = V_1;
		((  void (*) (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(__this, ((int32_t)il2cpp_codegen_add(L_10, L_11)), il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		int32_t L_12 = ___0_index;
		int32_t L_13 = __this->____size;
		if ((((int32_t)L_12) >= ((int32_t)L_13)))
		{
			goto IL_0071;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = __this->____items;
		int32_t L_17 = ___0_index;
		int32_t L_18 = V_1;
		int32_t L_19 = __this->____size;
		int32_t L_20 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, L_15, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_add(L_17, L_18)), ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), NULL);
	}

IL_0071:
	{
		RuntimeObject* L_21 = V_0;
		if ((!(((RuntimeObject*)(LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*)__this) == ((RuntimeObject*)(RuntimeObject*)L_21))))
		{
			goto IL_00aa;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_22 = __this->____items;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_23 = __this->____items;
		int32_t L_24 = ___0_index;
		int32_t L_25 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_22, 0, (RuntimeArray*)L_23, L_24, L_25, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_26 = __this->____items;
		int32_t L_27 = ___0_index;
		int32_t L_28 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_29 = __this->____items;
		int32_t L_30 = ___0_index;
		int32_t L_31 = __this->____size;
		int32_t L_32 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_26, ((int32_t)il2cpp_codegen_add(L_27, L_28)), (RuntimeArray*)L_29, ((int32_t)il2cpp_codegen_multiply(L_30, 2)), ((int32_t)il2cpp_codegen_subtract(L_31, L_32)), NULL);
		goto IL_00c8;
	}

IL_00aa:
	{
		int32_t L_33 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_34 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_33);
		V_2 = L_34;
		RuntimeObject* L_35 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_36 = V_2;
		NullCheck(L_35);
		InterfaceActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(5, il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_35, L_36, 0);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_37 = V_2;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_38 = __this->____items;
		int32_t L_39 = ___0_index;
		int32_t L_40 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, (RuntimeArray*)L_38, L_39, L_40, NULL);
	}

IL_00c8:
	{
		int32_t L_41 = __this->____size;
		int32_t L_42 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_41, L_42));
		goto IL_0107;
	}

IL_00d8:
	{
		RuntimeObject* L_43 = ___1_collection;
		NullCheck(L_43);
		RuntimeObject* L_44;
		L_44 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_43);
		V_3 = L_44;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00fd:
			{
				{
					RuntimeObject* L_45 = V_3;
					if (!L_45)
					{
						goto IL_0106;
					}
				}
				{
					RuntimeObject* L_46 = V_3;
					NullCheck((RuntimeObject*)L_46);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				}

IL_0106:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00f3_1;
			}

IL_00e1_1:
			{
				int32_t L_47 = ___0_index;
				int32_t L_48 = L_47;
				___0_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
				RuntimeObject* L_49 = V_3;
				NullCheck(L_49);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 15), L_49, (Il2CppFullySharedGenericAny*)L_50);
				InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)), il2cpp_rgctx_method(method->klass->rgctx_data, 17), __this, L_48, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_50: *(void**)L_50));
			}

IL_00f3_1:
			{
				RuntimeObject* L_51 = V_3;
				NullCheck((RuntimeObject*)L_51);
				bool L_52;
				L_52 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_51);
				if (L_52)
				{
					goto IL_00e1_1;
				}
			}
			{
				goto IL_0107;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0107:
	{
		int32_t L_53 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_53, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LowLevelList_1_Remove_m9CA49DFEEE8490053D50ACB37A61A63ECFDF6164_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	int32_t V_0 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___0_item : &___0_item), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		((  void (*) (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelList_1_RemoveAll_m7EA2BB7ADDD12BF71851BEF2E164FD40AD97757E_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___0_match, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	const Il2CppFullySharedGenericAny L_21 = L_9;
	const Il2CppFullySharedGenericAny L_32 = L_9;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		goto IL_0016;
	}

IL_0012:
	{
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_0016:
	{
		int32_t L_3 = V_0;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0033;
		}
	}
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_5 = ___0_match;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = __this->____items;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		il2cpp_codegen_memcpy(L_9, (L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		NullCheck(L_5);
		bool L_10;
		L_10 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)), il2cpp_rgctx_method(method->klass->rgctx_data, 20), L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_9: *(void**)L_9));
		if (!L_10)
		{
			goto IL_0012;
		}
	}

IL_0033:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = __this->____size;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_003e;
		}
	}
	{
		return 0;
	}

IL_003e:
	{
		int32_t L_13 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		goto IL_008e;
	}

IL_0044:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0048:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = __this->____size;
		if ((((int32_t)L_15) >= ((int32_t)L_16)))
		{
			goto IL_0065;
		}
	}
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_17 = ___0_match;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_18 = __this->____items;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		il2cpp_codegen_memcpy(L_21, (L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		NullCheck(L_17);
		bool L_22;
		L_22 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)), il2cpp_rgctx_method(method->klass->rgctx_data, 20), L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_21: *(void**)L_21));
		if (L_22)
		{
			goto IL_0044;
		}
	}

IL_0065:
	{
		int32_t L_23 = V_1;
		int32_t L_24 = __this->____size;
		if ((((int32_t)L_23) >= ((int32_t)L_24)))
		{
			goto IL_008e;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_25 = __this->____items;
		int32_t L_26 = V_0;
		int32_t L_27 = L_26;
		V_0 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_28 = __this->____items;
		int32_t L_29 = V_1;
		int32_t L_30 = L_29;
		V_1 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		NullCheck(L_28);
		int32_t L_31 = L_30;
		il2cpp_codegen_memcpy(L_32, (L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		NullCheck(L_25);
		il2cpp_codegen_memcpy((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)), L_32, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 4), (void**)(L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)), (void*)L_32);
	}

IL_008e:
	{
		int32_t L_33 = V_1;
		int32_t L_34 = __this->____size;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0048;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_35 = __this->____items;
		int32_t L_36 = V_0;
		int32_t L_37 = __this->____size;
		int32_t L_38 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_35, L_36, ((int32_t)il2cpp_codegen_subtract(L_37, L_38)), NULL);
		int32_t L_39 = __this->____size;
		int32_t L_40 = V_0;
		int32_t L_41 = V_0;
		__this->____size = L_41;
		int32_t L_42 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_42, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_39, L_40));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_RemoveAt_mA9B8AB65576735830A4A79EFF4FCDD16A3E0BC2F_gshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	memset(V_0, 0, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = ___0_index;
		int32_t L_5 = __this->____size;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0048;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = __this->____items;
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		int32_t L_11 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, ((int32_t)il2cpp_codegen_add(L_7, 1)), (RuntimeArray*)L_8, L_9, ((int32_t)il2cpp_codegen_subtract(L_10, L_11)), NULL);
	}

IL_0048:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = __this->____items;
		int32_t L_13 = __this->____size;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		il2cpp_codegen_memcpy(L_14, V_0, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		NullCheck(L_12);
		il2cpp_codegen_memcpy((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)), L_14, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 4), (void**)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)), (void*)L_14);
		int32_t L_15 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_15, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1__cctor_m663DD9A631105882B519C495A2D1077501A0FF6E_gshared (const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), (uint32_t)0);
		((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___s_emptyArray), (void*)L_0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Materialize__ctor_mDBFB67F4C5E57DC7520763D7012304D40498DEF0_gshared (Materialize_tC5629A7DE4A064E8536A84BFFC604E592C047D12* __this, MaterializeObservable_1_tB2074F339492C6F367D4584BF0501A49D2D075F0* ___0_parent, RuntimeObject* ___1_observer, RuntimeObject* ___2_cancel, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___1_observer;
		RuntimeObject* L_1 = ___2_cancel;
		((  void (*) (OperatorObserverBase_2_t6794B8D00D2628112E264959A9F0F22ABCAEEA87*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))((OperatorObserverBase_2_t6794B8D00D2628112E264959A9F0F22ABCAEEA87*)__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		MaterializeObservable_1_tB2074F339492C6F367D4584BF0501A49D2D075F0* L_2 = ___0_parent;
		__this->___parent = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Materialize_Run_m67A094A0B3F22010C7B526ED2669C9C3162E805B_gshared (Materialize_tC5629A7DE4A064E8536A84BFFC604E592C047D12* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		MaterializeObservable_1_tB2074F339492C6F367D4584BF0501A49D2D075F0* L_0 = __this->___parent;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___source;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_1, (RuntimeObject*)__this);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Materialize_OnNext_m0EBD72B14437ABACC95F8D5B12005C191BBCD6C1_gshared (Materialize_tC5629A7DE4A064E8536A84BFFC604E592C047D12* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t8B28A355B3EB7C84584D28C23389DB7ED474C4E0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t8B28A355B3EB7C84584D28C23389DB7ED474C4E0);
	{
		RuntimeObject* L_0 = ((OperatorObserverBase_2_t6794B8D00D2628112E264959A9F0F22ABCAEEA87*)__this)->___observer;
		il2cpp_codegen_memory_barrier();
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10)) ? ___0_value : &___0_value), SizeOf_T_t8B28A355B3EB7C84584D28C23389DB7ED474C4E0);
		Notification_1_t3461E7568C21AF7005CD41E294C05D2EC8F3E690* L_2;
		L_2 = InvokerFuncInvoker1< Notification_1_t3461E7568C21AF7005CD41E294C05D2EC8F3E690*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), NULL, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10)) ? L_1: *(void**)L_1));
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< Notification_1_t3461E7568C21AF7005CD41E294C05D2EC8F3E690* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_0, L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Materialize_OnError_m163329D3D57381B929D657C92DA42BC978E85FCD_gshared (Materialize_tC5629A7DE4A064E8536A84BFFC604E592C047D12* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ((OperatorObserverBase_2_t6794B8D00D2628112E264959A9F0F22ABCAEEA87*)__this)->___observer;
		il2cpp_codegen_memory_barrier();
		Exception_t* L_1 = ___0_error;
		Notification_1_t3461E7568C21AF7005CD41E294C05D2EC8F3E690* L_2;
		L_2 = ((  Notification_1_t3461E7568C21AF7005CD41E294C05D2EC8F3E690* (*) (Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< Notification_1_t3461E7568C21AF7005CD41E294C05D2EC8F3E690* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_0, L_2);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0027:
			{
				NullCheck((OperatorObserverBase_2_t6794B8D00D2628112E264959A9F0F22ABCAEEA87*)__this);
				((  void (*) (OperatorObserverBase_2_t6794B8D00D2628112E264959A9F0F22ABCAEEA87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))((OperatorObserverBase_2_t6794B8D00D2628112E264959A9F0F22ABCAEEA87*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
				return;
			}
		});
		try
		{
			RuntimeObject* L_3 = ((OperatorObserverBase_2_t6794B8D00D2628112E264959A9F0F22ABCAEEA87*)__this)->___observer;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_3);
			InterfaceActionInvoker0::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_3);
			goto IL_0031;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0031:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Materialize_OnCompleted_m3E24D3594561BAF2F39205B05DBC993AD9DF50C7_gshared (Materialize_tC5629A7DE4A064E8536A84BFFC604E592C047D12* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ((OperatorObserverBase_2_t6794B8D00D2628112E264959A9F0F22ABCAEEA87*)__this)->___observer;
		il2cpp_codegen_memory_barrier();
		Notification_1_t3461E7568C21AF7005CD41E294C05D2EC8F3E690* L_1;
		L_1 = ((  Notification_1_t3461E7568C21AF7005CD41E294C05D2EC8F3E690* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< Notification_1_t3461E7568C21AF7005CD41E294C05D2EC8F3E690* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_0, L_1);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0026:
			{
				NullCheck((OperatorObserverBase_2_t6794B8D00D2628112E264959A9F0F22ABCAEEA87*)__this);
				((  void (*) (OperatorObserverBase_2_t6794B8D00D2628112E264959A9F0F22ABCAEEA87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))((OperatorObserverBase_2_t6794B8D00D2628112E264959A9F0F22ABCAEEA87*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
				return;
			}
		});
		try
		{
			RuntimeObject* L_2 = ((OperatorObserverBase_2_t6794B8D00D2628112E264959A9F0F22ABCAEEA87*)__this)->___observer;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_2);
			InterfaceActionInvoker0::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_2);
			goto IL_0030;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0030:
	{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterializeObservable_1__ctor_mFF86FAE0BB85500EBDE017FD542D89DC082295B7_gshared (MaterializeObservable_1_tB2074F339492C6F367D4584BF0501A49D2D075F0* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_source;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		((  void (*) (OperatorObservableBase_1_t02E1E1805A0338B88262AE79E3C1F94575CEB55A*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))((OperatorObservableBase_1_t02E1E1805A0338B88262AE79E3C1F94575CEB55A*)__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		RuntimeObject* L_2 = ___0_source;
		__this->___source = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MaterializeObservable_1_SubscribeCore_m1AE125D29988407A625861DDB429C20641D2F775_gshared (MaterializeObservable_1_tB2074F339492C6F367D4584BF0501A49D2D075F0* __this, RuntimeObject* ___0_observer, RuntimeObject* ___1_cancel, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_observer;
		RuntimeObject* L_1 = ___1_cancel;
		Materialize_tC5629A7DE4A064E8536A84BFFC604E592C047D12* L_2 = (Materialize_tC5629A7DE4A064E8536A84BFFC604E592C047D12*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		((  void (*) (Materialize_tC5629A7DE4A064E8536A84BFFC604E592C047D12*, MaterializeObservable_1_tB2074F339492C6F367D4584BF0501A49D2D075F0*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_2, __this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (Materialize_tC5629A7DE4A064E8536A84BFFC604E592C047D12*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		RuntimeObject* L_4 = V_0;
		return L_4;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource__ctor_m23DD2A267B6A895F29B858E554E2882F7BE646B3_gshared (MemoizeSource_t6EF94D02CF852AE92900476CE5D6E50A84FC1F2E* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F MemoizeSource_GetResult_m5C256950C302EA4D7578377664BA865C244CA70B_gshared (MemoizeSource_t6EF94D02CF852AE92900476CE5D6E50A84FC1F2E* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	bool V_4 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->___exception;
		V_1 = (bool)((!(((RuntimeObject*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_4 = __this->___exception;
		NullCheck(L_4);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_4, NULL);
	}

IL_002a:
	{
		KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F L_5 = __this->___result;
		V_2 = L_5;
		goto IL_0094;
	}

IL_0033:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008a:
			{
				__this->___source = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)(RuntimeObject*)NULL);
				return;
			}
		});
		try
		{
			try
			{
				RuntimeObject* L_6 = __this->___source;
				int16_t L_7 = ___0_token;
				NullCheck(L_6);
				KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F L_8;
				L_8 = InterfaceFuncInvoker1< KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F, int16_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_6, L_7);
				__this->___result = L_8;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___result))->___value), (void*)NULL);
				__this->___status = (int32_t)1;
				KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F L_9 = __this->___result;
				V_2 = L_9;
				goto IL_0094;
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0057_1;
				}
				throw e;
			}

CATCH_0057_1:
			{
				{
					Exception_t* L_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
					V_3 = L_10;
					Exception_t* L_11 = V_3;
					ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_12;
					L_12 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_11, NULL);
					__this->___exception = L_12;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___exception), (void*)L_12);
					Exception_t* L_13 = V_3;
					V_4 = (bool)((!(((RuntimeObject*)(OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_13, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var))))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
					bool L_14 = V_4;
					if (!L_14)
					{
						goto IL_007f_1;
					}
				}
				{
					__this->___status = (int32_t)3;
					goto IL_0088_1;
				}

IL_007f_1:
				{
					__this->___status = (int32_t)2;
				}

IL_0088_1:
				{
					IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
				}
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0094:
	{
		KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F L_15 = V_2;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_Cysharp_Threading_Tasks_IUniTaskSource_GetResult_m3AB87672570C67ACF80B6B166D08598D07FAF6ED_gshared (MemoizeSource_t6EF94D02CF852AE92900476CE5D6E50A84FC1F2E* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___0_token;
		KeyValuePair_2_t88288FD7C987CABEE070E49639E8603D27AF799F L_1;
		L_1 = MemoizeSource_GetResult_m5C256950C302EA4D7578377664BA865C244CA70B(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_GetStatus_m21D92B9378898A2569F7C64F3BC3CFB381D0A2C2_gshared (MemoizeSource_t6EF94D02CF852AE92900476CE5D6E50A84FC1F2E* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0027;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		int16_t L_4 = ___0_token;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_3, L_4);
		V_1 = L_5;
		goto IL_0027;
	}

IL_0027:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_OnCompleted_m1C10D79DE7EAAF50EBD03E9BB5D96B0CA6A896D2_gshared (MemoizeSource_t6EF94D02CF852AE92900476CE5D6E50A84FC1F2E* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = ___0_continuation;
		RuntimeObject* L_3 = ___1_state;
		NullCheck(L_2);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_2, L_3, NULL);
		goto IL_002b;
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->___source;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ___0_continuation;
		RuntimeObject* L_6 = ___1_state;
		int16_t L_7 = ___2_token;
		NullCheck(L_4);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_4, L_5, L_6, L_7);
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_UnsafeGetStatus_m6A02B1F4330477F037956661E4DD398C7379402F_gshared (MemoizeSource_t6EF94D02CF852AE92900476CE5D6E50A84FC1F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0026;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(3, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
		V_1 = L_4;
		goto IL_0026;
	}

IL_0026:
	{
		int32_t L_5 = V_1;
		return L_5;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource__ctor_m9D40F0CFD423A70C3D051D1DA00FF1F845E2C23B_gshared (MemoizeSource_t0EB58AE3AE2F8E7FBFAD25BCCB33BC7B36243A38* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tD8FC7D951E88A4E6D75952ABBF6C76990A9E9AAD MemoizeSource_GetResult_mC00EB8CD806A94EE947C24A74C9F3DAE1517DDEF_gshared (MemoizeSource_t0EB58AE3AE2F8E7FBFAD25BCCB33BC7B36243A38* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	ValueTuple_2_tD8FC7D951E88A4E6D75952ABBF6C76990A9E9AAD V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	bool V_4 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->___exception;
		V_1 = (bool)((!(((RuntimeObject*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_4 = __this->___exception;
		NullCheck(L_4);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_4, NULL);
	}

IL_002a:
	{
		ValueTuple_2_tD8FC7D951E88A4E6D75952ABBF6C76990A9E9AAD L_5 = __this->___result;
		V_2 = L_5;
		goto IL_0094;
	}

IL_0033:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008a:
			{
				__this->___source = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)(RuntimeObject*)NULL);
				return;
			}
		});
		try
		{
			try
			{
				RuntimeObject* L_6 = __this->___source;
				int16_t L_7 = ___0_token;
				NullCheck(L_6);
				ValueTuple_2_tD8FC7D951E88A4E6D75952ABBF6C76990A9E9AAD L_8;
				L_8 = InterfaceFuncInvoker1< ValueTuple_2_tD8FC7D951E88A4E6D75952ABBF6C76990A9E9AAD, int16_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_6, L_7);
				__this->___result = L_8;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___result))->___Item2))->___value), (void*)NULL);
				__this->___status = (int32_t)1;
				ValueTuple_2_tD8FC7D951E88A4E6D75952ABBF6C76990A9E9AAD L_9 = __this->___result;
				V_2 = L_9;
				goto IL_0094;
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0057_1;
				}
				throw e;
			}

CATCH_0057_1:
			{
				{
					Exception_t* L_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
					V_3 = L_10;
					Exception_t* L_11 = V_3;
					ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_12;
					L_12 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_11, NULL);
					__this->___exception = L_12;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___exception), (void*)L_12);
					Exception_t* L_13 = V_3;
					V_4 = (bool)((!(((RuntimeObject*)(OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_13, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var))))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
					bool L_14 = V_4;
					if (!L_14)
					{
						goto IL_007f_1;
					}
				}
				{
					__this->___status = (int32_t)3;
					goto IL_0088_1;
				}

IL_007f_1:
				{
					__this->___status = (int32_t)2;
				}

IL_0088_1:
				{
					IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
				}
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0094:
	{
		ValueTuple_2_tD8FC7D951E88A4E6D75952ABBF6C76990A9E9AAD L_15 = V_2;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_Cysharp_Threading_Tasks_IUniTaskSource_GetResult_mD1D1A2897732912BD88B3570DEC49A94275B27C4_gshared (MemoizeSource_t0EB58AE3AE2F8E7FBFAD25BCCB33BC7B36243A38* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___0_token;
		ValueTuple_2_tD8FC7D951E88A4E6D75952ABBF6C76990A9E9AAD L_1;
		L_1 = MemoizeSource_GetResult_mC00EB8CD806A94EE947C24A74C9F3DAE1517DDEF(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_GetStatus_m4C45486E0AD971446DA993C5A570E7749BE21409_gshared (MemoizeSource_t0EB58AE3AE2F8E7FBFAD25BCCB33BC7B36243A38* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0027;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		int16_t L_4 = ___0_token;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_3, L_4);
		V_1 = L_5;
		goto IL_0027;
	}

IL_0027:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_OnCompleted_m47B07CCF4B3ED1FAD010DEFACB18F0F81F5333DF_gshared (MemoizeSource_t0EB58AE3AE2F8E7FBFAD25BCCB33BC7B36243A38* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = ___0_continuation;
		RuntimeObject* L_3 = ___1_state;
		NullCheck(L_2);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_2, L_3, NULL);
		goto IL_002b;
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->___source;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ___0_continuation;
		RuntimeObject* L_6 = ___1_state;
		int16_t L_7 = ___2_token;
		NullCheck(L_4);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_4, L_5, L_6, L_7);
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_UnsafeGetStatus_m4F5E9DB1C55B61AF83EF0DF8B9E24CD4028C0E25_gshared (MemoizeSource_t0EB58AE3AE2F8E7FBFAD25BCCB33BC7B36243A38* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0026;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(3, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
		V_1 = L_4;
		goto IL_0026;
	}

IL_0026:
	{
		int32_t L_5 = V_1;
		return L_5;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource__ctor_mBB1AF9855479DB6026DC9F0EC6CF05E8FF5F5E7D_gshared (MemoizeSource_t0F002271CE438A8AE16EAB8DA149E32DE7703630* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tDEC0B1538702EF393ED3785AC477A5349EB4FE40 MemoizeSource_GetResult_mA7DEF35F18C93252E76BB3BD5B850C5D3C29447D_gshared (MemoizeSource_t0F002271CE438A8AE16EAB8DA149E32DE7703630* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	ValueTuple_2_tDEC0B1538702EF393ED3785AC477A5349EB4FE40 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	bool V_4 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->___exception;
		V_1 = (bool)((!(((RuntimeObject*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_4 = __this->___exception;
		NullCheck(L_4);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_4, NULL);
	}

IL_002a:
	{
		ValueTuple_2_tDEC0B1538702EF393ED3785AC477A5349EB4FE40 L_5 = __this->___result;
		V_2 = L_5;
		goto IL_0094;
	}

IL_0033:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008a:
			{
				__this->___source = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)(RuntimeObject*)NULL);
				return;
			}
		});
		try
		{
			try
			{
				RuntimeObject* L_6 = __this->___source;
				int16_t L_7 = ___0_token;
				NullCheck(L_6);
				ValueTuple_2_tDEC0B1538702EF393ED3785AC477A5349EB4FE40 L_8;
				L_8 = InterfaceFuncInvoker1< ValueTuple_2_tDEC0B1538702EF393ED3785AC477A5349EB4FE40, int16_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_6, L_7);
				__this->___result = L_8;
				Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___result))->___Item2))->___Item2))->___value), (void*)NULL);
				__this->___status = (int32_t)1;
				ValueTuple_2_tDEC0B1538702EF393ED3785AC477A5349EB4FE40 L_9 = __this->___result;
				V_2 = L_9;
				goto IL_0094;
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0057_1;
				}
				throw e;
			}

CATCH_0057_1:
			{
				{
					Exception_t* L_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
					V_3 = L_10;
					Exception_t* L_11 = V_3;
					ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_12;
					L_12 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_11, NULL);
					__this->___exception = L_12;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___exception), (void*)L_12);
					Exception_t* L_13 = V_3;
					V_4 = (bool)((!(((RuntimeObject*)(OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_13, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var))))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
					bool L_14 = V_4;
					if (!L_14)
					{
						goto IL_007f_1;
					}
				}
				{
					__this->___status = (int32_t)3;
					goto IL_0088_1;
				}

IL_007f_1:
				{
					__this->___status = (int32_t)2;
				}

IL_0088_1:
				{
					IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
				}
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0094:
	{
		ValueTuple_2_tDEC0B1538702EF393ED3785AC477A5349EB4FE40 L_15 = V_2;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_Cysharp_Threading_Tasks_IUniTaskSource_GetResult_m8AE6E43765D7635B995544F520F9F520267799B4_gshared (MemoizeSource_t0F002271CE438A8AE16EAB8DA149E32DE7703630* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___0_token;
		ValueTuple_2_tDEC0B1538702EF393ED3785AC477A5349EB4FE40 L_1;
		L_1 = MemoizeSource_GetResult_mA7DEF35F18C93252E76BB3BD5B850C5D3C29447D(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_GetStatus_m709B74E21C4BDD142705410038716CB98317816F_gshared (MemoizeSource_t0F002271CE438A8AE16EAB8DA149E32DE7703630* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0027;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		int16_t L_4 = ___0_token;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_3, L_4);
		V_1 = L_5;
		goto IL_0027;
	}

IL_0027:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_OnCompleted_m064EA7B254A314747DC2189BAD0F0406A3CDD02B_gshared (MemoizeSource_t0F002271CE438A8AE16EAB8DA149E32DE7703630* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = ___0_continuation;
		RuntimeObject* L_3 = ___1_state;
		NullCheck(L_2);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_2, L_3, NULL);
		goto IL_002b;
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->___source;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ___0_continuation;
		RuntimeObject* L_6 = ___1_state;
		int16_t L_7 = ___2_token;
		NullCheck(L_4);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_4, L_5, L_6, L_7);
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_UnsafeGetStatus_m7C7C7A63AAB172D0E190937F89E88B741EBED649_gshared (MemoizeSource_t0F002271CE438A8AE16EAB8DA149E32DE7703630* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0026;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(3, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
		V_1 = L_4;
		goto IL_0026;
	}

IL_0026:
	{
		int32_t L_5 = V_1;
		return L_5;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource__ctor_m0A0A17DBC84E3384226D02D773F0F3A1F79A2944_gshared (MemoizeSource_t25D181668E617BFB26C25F2FCC7C5170A9D06710* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tA349CD9D248C0AEA0723711BC6AB72E5651FA416 MemoizeSource_GetResult_mCF24905F795A2AC69505D0720888490EF988F2B8_gshared (MemoizeSource_t25D181668E617BFB26C25F2FCC7C5170A9D06710* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	ValueTuple_2_tA349CD9D248C0AEA0723711BC6AB72E5651FA416 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	bool V_4 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->___exception;
		V_1 = (bool)((!(((RuntimeObject*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_4 = __this->___exception;
		NullCheck(L_4);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_4, NULL);
	}

IL_002a:
	{
		ValueTuple_2_tA349CD9D248C0AEA0723711BC6AB72E5651FA416 L_5 = __this->___result;
		V_2 = L_5;
		goto IL_0094;
	}

IL_0033:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008a:
			{
				__this->___source = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)(RuntimeObject*)NULL);
				return;
			}
		});
		try
		{
			try
			{
				RuntimeObject* L_6 = __this->___source;
				int16_t L_7 = ___0_token;
				NullCheck(L_6);
				ValueTuple_2_tA349CD9D248C0AEA0723711BC6AB72E5651FA416 L_8;
				L_8 = InterfaceFuncInvoker1< ValueTuple_2_tA349CD9D248C0AEA0723711BC6AB72E5651FA416, int16_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_6, L_7);
				__this->___result = L_8;
				Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&__this->___result))->___Item2))->___Item2))->___Item2))->___value), (void*)NULL);
				__this->___status = (int32_t)1;
				ValueTuple_2_tA349CD9D248C0AEA0723711BC6AB72E5651FA416 L_9 = __this->___result;
				V_2 = L_9;
				goto IL_0094;
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0057_1;
				}
				throw e;
			}

CATCH_0057_1:
			{
				{
					Exception_t* L_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
					V_3 = L_10;
					Exception_t* L_11 = V_3;
					ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_12;
					L_12 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_11, NULL);
					__this->___exception = L_12;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___exception), (void*)L_12);
					Exception_t* L_13 = V_3;
					V_4 = (bool)((!(((RuntimeObject*)(OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_13, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var))))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
					bool L_14 = V_4;
					if (!L_14)
					{
						goto IL_007f_1;
					}
				}
				{
					__this->___status = (int32_t)3;
					goto IL_0088_1;
				}

IL_007f_1:
				{
					__this->___status = (int32_t)2;
				}

IL_0088_1:
				{
					IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
				}
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0094:
	{
		ValueTuple_2_tA349CD9D248C0AEA0723711BC6AB72E5651FA416 L_15 = V_2;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_Cysharp_Threading_Tasks_IUniTaskSource_GetResult_m2F621FCEA6140ADC97722C13320A28668693D2BD_gshared (MemoizeSource_t25D181668E617BFB26C25F2FCC7C5170A9D06710* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___0_token;
		ValueTuple_2_tA349CD9D248C0AEA0723711BC6AB72E5651FA416 L_1;
		L_1 = MemoizeSource_GetResult_mCF24905F795A2AC69505D0720888490EF988F2B8(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_GetStatus_m5AD17A8AA480455D58C6AF21228EF2FDC22F144E_gshared (MemoizeSource_t25D181668E617BFB26C25F2FCC7C5170A9D06710* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0027;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		int16_t L_4 = ___0_token;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_3, L_4);
		V_1 = L_5;
		goto IL_0027;
	}

IL_0027:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_OnCompleted_mB919AAF4C9D6DFB30A5A66DB48F56634C0276E0E_gshared (MemoizeSource_t25D181668E617BFB26C25F2FCC7C5170A9D06710* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = ___0_continuation;
		RuntimeObject* L_3 = ___1_state;
		NullCheck(L_2);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_2, L_3, NULL);
		goto IL_002b;
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->___source;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ___0_continuation;
		RuntimeObject* L_6 = ___1_state;
		int16_t L_7 = ___2_token;
		NullCheck(L_4);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_4, L_5, L_6, L_7);
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_UnsafeGetStatus_mB7051E58FEE1C30AC6FF7A39B8B398D40DAE68DE_gshared (MemoizeSource_t25D181668E617BFB26C25F2FCC7C5170A9D06710* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0026;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(3, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
		V_1 = L_4;
		goto IL_0026;
	}

IL_0026:
	{
		int32_t L_5 = V_1;
		return L_5;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource__ctor_mB65385DF7E61E10B8FFC9FD38A5075819CB73896_gshared (MemoizeSource_t4677D6DB89E883159DA8FF5849F6DF7F985A4B35* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t34894BC390F776FF724A61A2995CD383279EED26 MemoizeSource_GetResult_m59E8FB161BAA107AF330E77F630CB1927479CD78_gshared (MemoizeSource_t4677D6DB89E883159DA8FF5849F6DF7F985A4B35* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	ValueTuple_2_t34894BC390F776FF724A61A2995CD383279EED26 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	bool V_4 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->___exception;
		V_1 = (bool)((!(((RuntimeObject*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_4 = __this->___exception;
		NullCheck(L_4);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_4, NULL);
	}

IL_002a:
	{
		ValueTuple_2_t34894BC390F776FF724A61A2995CD383279EED26 L_5 = __this->___result;
		V_2 = L_5;
		goto IL_0094;
	}

IL_0033:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008a:
			{
				__this->___source = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)(RuntimeObject*)NULL);
				return;
			}
		});
		try
		{
			try
			{
				RuntimeObject* L_6 = __this->___source;
				int16_t L_7 = ___0_token;
				NullCheck(L_6);
				ValueTuple_2_t34894BC390F776FF724A61A2995CD383279EED26 L_8;
				L_8 = InterfaceFuncInvoker1< ValueTuple_2_t34894BC390F776FF724A61A2995CD383279EED26, int16_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_6, L_7);
				__this->___result = L_8;
				Il2CppCodeGenWriteBarrier((void**)&((&((&((&((&(((&__this->___result))->___Item2))->___Item2))->___Item2))->___Item2))->___value), (void*)NULL);
				__this->___status = (int32_t)1;
				ValueTuple_2_t34894BC390F776FF724A61A2995CD383279EED26 L_9 = __this->___result;
				V_2 = L_9;
				goto IL_0094;
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0057_1;
				}
				throw e;
			}

CATCH_0057_1:
			{
				{
					Exception_t* L_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
					V_3 = L_10;
					Exception_t* L_11 = V_3;
					ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_12;
					L_12 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_11, NULL);
					__this->___exception = L_12;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___exception), (void*)L_12);
					Exception_t* L_13 = V_3;
					V_4 = (bool)((!(((RuntimeObject*)(OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_13, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var))))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
					bool L_14 = V_4;
					if (!L_14)
					{
						goto IL_007f_1;
					}
				}
				{
					__this->___status = (int32_t)3;
					goto IL_0088_1;
				}

IL_007f_1:
				{
					__this->___status = (int32_t)2;
				}

IL_0088_1:
				{
					IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
				}
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0094:
	{
		ValueTuple_2_t34894BC390F776FF724A61A2995CD383279EED26 L_15 = V_2;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_Cysharp_Threading_Tasks_IUniTaskSource_GetResult_m78D38557C6DD295DA0BCC6578E1FC26735A31615_gshared (MemoizeSource_t4677D6DB89E883159DA8FF5849F6DF7F985A4B35* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___0_token;
		ValueTuple_2_t34894BC390F776FF724A61A2995CD383279EED26 L_1;
		L_1 = MemoizeSource_GetResult_m59E8FB161BAA107AF330E77F630CB1927479CD78(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_GetStatus_m6DFCD66C7F712E17F095FC58EF4FD707E5859775_gshared (MemoizeSource_t4677D6DB89E883159DA8FF5849F6DF7F985A4B35* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0027;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		int16_t L_4 = ___0_token;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_3, L_4);
		V_1 = L_5;
		goto IL_0027;
	}

IL_0027:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_OnCompleted_m3F80F6A59082D0B87EDBCCF999213AAEF7322A62_gshared (MemoizeSource_t4677D6DB89E883159DA8FF5849F6DF7F985A4B35* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = ___0_continuation;
		RuntimeObject* L_3 = ___1_state;
		NullCheck(L_2);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_2, L_3, NULL);
		goto IL_002b;
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->___source;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ___0_continuation;
		RuntimeObject* L_6 = ___1_state;
		int16_t L_7 = ___2_token;
		NullCheck(L_4);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_4, L_5, L_6, L_7);
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_UnsafeGetStatus_m2C87228F51FA658ADF5C2E0B39B0EA95E94983C1_gshared (MemoizeSource_t4677D6DB89E883159DA8FF5849F6DF7F985A4B35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0026;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(3, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
		V_1 = L_4;
		goto IL_0026;
	}

IL_0026:
	{
		int32_t L_5 = V_1;
		return L_5;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource__ctor_mA0593F023B8437F717E0DBBD5022AB8235B7B99D_gshared (MemoizeSource_tEA26C433E3D23BC798D60E3E928F89BF44D0780A* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t7516E46F5AFFFB610FC72E9F975A9AF740F6E0DA MemoizeSource_GetResult_m7AA0344EBC93DE0AEDD50B0CAFD6B049B76ECB3E_gshared (MemoizeSource_tEA26C433E3D23BC798D60E3E928F89BF44D0780A* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	ValueTuple_2_t7516E46F5AFFFB610FC72E9F975A9AF740F6E0DA V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	bool V_4 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->___exception;
		V_1 = (bool)((!(((RuntimeObject*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_4 = __this->___exception;
		NullCheck(L_4);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_4, NULL);
	}

IL_002a:
	{
		ValueTuple_2_t7516E46F5AFFFB610FC72E9F975A9AF740F6E0DA L_5 = __this->___result;
		V_2 = L_5;
		goto IL_0094;
	}

IL_0033:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008a:
			{
				__this->___source = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)(RuntimeObject*)NULL);
				return;
			}
		});
		try
		{
			try
			{
				RuntimeObject* L_6 = __this->___source;
				int16_t L_7 = ___0_token;
				NullCheck(L_6);
				ValueTuple_2_t7516E46F5AFFFB610FC72E9F975A9AF740F6E0DA L_8;
				L_8 = InterfaceFuncInvoker1< ValueTuple_2_t7516E46F5AFFFB610FC72E9F975A9AF740F6E0DA, int16_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_6, L_7);
				__this->___result = L_8;
				__this->___status = (int32_t)1;
				ValueTuple_2_t7516E46F5AFFFB610FC72E9F975A9AF740F6E0DA L_9 = __this->___result;
				V_2 = L_9;
				goto IL_0094;
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0057_1;
				}
				throw e;
			}

CATCH_0057_1:
			{
				{
					Exception_t* L_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
					V_3 = L_10;
					Exception_t* L_11 = V_3;
					ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_12;
					L_12 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_11, NULL);
					__this->___exception = L_12;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___exception), (void*)L_12);
					Exception_t* L_13 = V_3;
					V_4 = (bool)((!(((RuntimeObject*)(OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_13, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var))))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
					bool L_14 = V_4;
					if (!L_14)
					{
						goto IL_007f_1;
					}
				}
				{
					__this->___status = (int32_t)3;
					goto IL_0088_1;
				}

IL_007f_1:
				{
					__this->___status = (int32_t)2;
				}

IL_0088_1:
				{
					IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
				}
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0094:
	{
		ValueTuple_2_t7516E46F5AFFFB610FC72E9F975A9AF740F6E0DA L_15 = V_2;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_Cysharp_Threading_Tasks_IUniTaskSource_GetResult_m3012D8D01A6BB2AE47AD34264F14DAEC7D8A4060_gshared (MemoizeSource_tEA26C433E3D23BC798D60E3E928F89BF44D0780A* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___0_token;
		ValueTuple_2_t7516E46F5AFFFB610FC72E9F975A9AF740F6E0DA L_1;
		L_1 = MemoizeSource_GetResult_m7AA0344EBC93DE0AEDD50B0CAFD6B049B76ECB3E(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_GetStatus_mD627C70E98CCC41FC8B751748F7A932BF74DD33D_gshared (MemoizeSource_tEA26C433E3D23BC798D60E3E928F89BF44D0780A* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0027;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		int16_t L_4 = ___0_token;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_3, L_4);
		V_1 = L_5;
		goto IL_0027;
	}

IL_0027:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_OnCompleted_m9ED2565F66B31BF350B7B1FCFE2D5F4A4EAEEE26_gshared (MemoizeSource_tEA26C433E3D23BC798D60E3E928F89BF44D0780A* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = ___0_continuation;
		RuntimeObject* L_3 = ___1_state;
		NullCheck(L_2);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_2, L_3, NULL);
		goto IL_002b;
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->___source;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ___0_continuation;
		RuntimeObject* L_6 = ___1_state;
		int16_t L_7 = ___2_token;
		NullCheck(L_4);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_4, L_5, L_6, L_7);
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_UnsafeGetStatus_mAF436C5D4A0F28514D388D9B728869F9A8C77ADB_gshared (MemoizeSource_tEA26C433E3D23BC798D60E3E928F89BF44D0780A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0026;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(3, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
		V_1 = L_4;
		goto IL_0026;
	}

IL_0026:
	{
		int32_t L_5 = V_1;
		return L_5;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource__ctor_m0D2AF9F6476D8B1B9D08BB602B545DBACFF7C165_gshared (MemoizeSource_t995613DCA5117D80DE5BC09B7D7817C51047C696* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t7EDECF5EF0242AF168C2233A1F58D29823979EB0 MemoizeSource_GetResult_m8B13CCFF8786B7290A7D183768B4E62DB31443B2_gshared (MemoizeSource_t995613DCA5117D80DE5BC09B7D7817C51047C696* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	ValueTuple_2_t7EDECF5EF0242AF168C2233A1F58D29823979EB0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	bool V_4 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->___exception;
		V_1 = (bool)((!(((RuntimeObject*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_4 = __this->___exception;
		NullCheck(L_4);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_4, NULL);
	}

IL_002a:
	{
		ValueTuple_2_t7EDECF5EF0242AF168C2233A1F58D29823979EB0 L_5 = __this->___result;
		V_2 = L_5;
		goto IL_0094;
	}

IL_0033:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008a:
			{
				__this->___source = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)(RuntimeObject*)NULL);
				return;
			}
		});
		try
		{
			try
			{
				RuntimeObject* L_6 = __this->___source;
				int16_t L_7 = ___0_token;
				NullCheck(L_6);
				ValueTuple_2_t7EDECF5EF0242AF168C2233A1F58D29823979EB0 L_8;
				L_8 = InterfaceFuncInvoker1< ValueTuple_2_t7EDECF5EF0242AF168C2233A1F58D29823979EB0, int16_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_6, L_7);
				__this->___result = L_8;
				__this->___status = (int32_t)1;
				ValueTuple_2_t7EDECF5EF0242AF168C2233A1F58D29823979EB0 L_9 = __this->___result;
				V_2 = L_9;
				goto IL_0094;
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0057_1;
				}
				throw e;
			}

CATCH_0057_1:
			{
				{
					Exception_t* L_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
					V_3 = L_10;
					Exception_t* L_11 = V_3;
					ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_12;
					L_12 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_11, NULL);
					__this->___exception = L_12;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___exception), (void*)L_12);
					Exception_t* L_13 = V_3;
					V_4 = (bool)((!(((RuntimeObject*)(OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_13, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var))))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
					bool L_14 = V_4;
					if (!L_14)
					{
						goto IL_007f_1;
					}
				}
				{
					__this->___status = (int32_t)3;
					goto IL_0088_1;
				}

IL_007f_1:
				{
					__this->___status = (int32_t)2;
				}

IL_0088_1:
				{
					IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
				}
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0094:
	{
		ValueTuple_2_t7EDECF5EF0242AF168C2233A1F58D29823979EB0 L_15 = V_2;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_Cysharp_Threading_Tasks_IUniTaskSource_GetResult_m184B68ABB4B2FAF71C45504AE0077CD7B2A6831F_gshared (MemoizeSource_t995613DCA5117D80DE5BC09B7D7817C51047C696* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___0_token;
		ValueTuple_2_t7EDECF5EF0242AF168C2233A1F58D29823979EB0 L_1;
		L_1 = MemoizeSource_GetResult_m8B13CCFF8786B7290A7D183768B4E62DB31443B2(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_GetStatus_m278204B4F354B323B89D65939B5B144924B79C9D_gshared (MemoizeSource_t995613DCA5117D80DE5BC09B7D7817C51047C696* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0027;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		int16_t L_4 = ___0_token;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_3, L_4);
		V_1 = L_5;
		goto IL_0027;
	}

IL_0027:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_OnCompleted_m3B381E3539299A24C7765AD212788CD53CC79D66_gshared (MemoizeSource_t995613DCA5117D80DE5BC09B7D7817C51047C696* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = ___0_continuation;
		RuntimeObject* L_3 = ___1_state;
		NullCheck(L_2);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_2, L_3, NULL);
		goto IL_002b;
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->___source;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ___0_continuation;
		RuntimeObject* L_6 = ___1_state;
		int16_t L_7 = ___2_token;
		NullCheck(L_4);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_4, L_5, L_6, L_7);
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_UnsafeGetStatus_m9E76C8D4D59D2B323E2C197C6AADE05943CE5256_gshared (MemoizeSource_t995613DCA5117D80DE5BC09B7D7817C51047C696* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0026;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(3, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
		V_1 = L_4;
		goto IL_0026;
	}

IL_0026:
	{
		int32_t L_5 = V_1;
		return L_5;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource__ctor_mA0E5CBA91C7C62B8A5094588854B732E004A4FEB_gshared (MemoizeSource_tF3E74A3B60F21D568DFAE0A35900C84F9B029D04* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t290BB110EB3014D32465EC182EF13C96648CDAB2 MemoizeSource_GetResult_m6570653AF8890D84C999E3CA6E84F261CF678A03_gshared (MemoizeSource_tF3E74A3B60F21D568DFAE0A35900C84F9B029D04* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	ValueTuple_2_t290BB110EB3014D32465EC182EF13C96648CDAB2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	bool V_4 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->___exception;
		V_1 = (bool)((!(((RuntimeObject*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_4 = __this->___exception;
		NullCheck(L_4);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_4, NULL);
	}

IL_002a:
	{
		ValueTuple_2_t290BB110EB3014D32465EC182EF13C96648CDAB2 L_5 = __this->___result;
		V_2 = L_5;
		goto IL_0094;
	}

IL_0033:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008a:
			{
				__this->___source = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)(RuntimeObject*)NULL);
				return;
			}
		});
		try
		{
			try
			{
				RuntimeObject* L_6 = __this->___source;
				int16_t L_7 = ___0_token;
				NullCheck(L_6);
				ValueTuple_2_t290BB110EB3014D32465EC182EF13C96648CDAB2 L_8;
				L_8 = InterfaceFuncInvoker1< ValueTuple_2_t290BB110EB3014D32465EC182EF13C96648CDAB2, int16_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_6, L_7);
				__this->___result = L_8;
				__this->___status = (int32_t)1;
				ValueTuple_2_t290BB110EB3014D32465EC182EF13C96648CDAB2 L_9 = __this->___result;
				V_2 = L_9;
				goto IL_0094;
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0057_1;
				}
				throw e;
			}

CATCH_0057_1:
			{
				{
					Exception_t* L_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
					V_3 = L_10;
					Exception_t* L_11 = V_3;
					ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_12;
					L_12 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_11, NULL);
					__this->___exception = L_12;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___exception), (void*)L_12);
					Exception_t* L_13 = V_3;
					V_4 = (bool)((!(((RuntimeObject*)(OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_13, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var))))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
					bool L_14 = V_4;
					if (!L_14)
					{
						goto IL_007f_1;
					}
				}
				{
					__this->___status = (int32_t)3;
					goto IL_0088_1;
				}

IL_007f_1:
				{
					__this->___status = (int32_t)2;
				}

IL_0088_1:
				{
					IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
				}
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0094:
	{
		ValueTuple_2_t290BB110EB3014D32465EC182EF13C96648CDAB2 L_15 = V_2;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_Cysharp_Threading_Tasks_IUniTaskSource_GetResult_m7D725E88444255C7157B07FE6B09642B6C2A1B7D_gshared (MemoizeSource_tF3E74A3B60F21D568DFAE0A35900C84F9B029D04* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___0_token;
		ValueTuple_2_t290BB110EB3014D32465EC182EF13C96648CDAB2 L_1;
		L_1 = MemoizeSource_GetResult_m6570653AF8890D84C999E3CA6E84F261CF678A03(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_GetStatus_mB7F90659B776E4625A9DA8E098AD0C7A0D3512AE_gshared (MemoizeSource_tF3E74A3B60F21D568DFAE0A35900C84F9B029D04* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0027;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		int16_t L_4 = ___0_token;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_3, L_4);
		V_1 = L_5;
		goto IL_0027;
	}

IL_0027:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_OnCompleted_m32A04F2406A44368C96ED30981458AA714E0F177_gshared (MemoizeSource_tF3E74A3B60F21D568DFAE0A35900C84F9B029D04* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = ___0_continuation;
		RuntimeObject* L_3 = ___1_state;
		NullCheck(L_2);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_2, L_3, NULL);
		goto IL_002b;
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->___source;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ___0_continuation;
		RuntimeObject* L_6 = ___1_state;
		int16_t L_7 = ___2_token;
		NullCheck(L_4);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_4, L_5, L_6, L_7);
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_UnsafeGetStatus_m185505338D501806B0B2B30DE114909B793BE93D_gshared (MemoizeSource_tF3E74A3B60F21D568DFAE0A35900C84F9B029D04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0026;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(3, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
		V_1 = L_4;
		goto IL_0026;
	}

IL_0026:
	{
		int32_t L_5 = V_1;
		return L_5;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource__ctor_mF858DBEE46256AAAC1EE340D6E40CF9F1CF288DD_gshared (MemoizeSource_tD6683A8DE463F34C3148559778641D0559CAF6BD* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tAB12458160F7EEB98903FBFDF624C4E37DB5B0C4 MemoizeSource_GetResult_mE123C67A43DD11F7D132525F986EF848680ACA92_gshared (MemoizeSource_tD6683A8DE463F34C3148559778641D0559CAF6BD* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	ValueTuple_2_tAB12458160F7EEB98903FBFDF624C4E37DB5B0C4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	bool V_4 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->___exception;
		V_1 = (bool)((!(((RuntimeObject*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_4 = __this->___exception;
		NullCheck(L_4);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_4, NULL);
	}

IL_002a:
	{
		ValueTuple_2_tAB12458160F7EEB98903FBFDF624C4E37DB5B0C4 L_5 = __this->___result;
		V_2 = L_5;
		goto IL_0094;
	}

IL_0033:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008a:
			{
				__this->___source = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)(RuntimeObject*)NULL);
				return;
			}
		});
		try
		{
			try
			{
				RuntimeObject* L_6 = __this->___source;
				int16_t L_7 = ___0_token;
				NullCheck(L_6);
				ValueTuple_2_tAB12458160F7EEB98903FBFDF624C4E37DB5B0C4 L_8;
				L_8 = InterfaceFuncInvoker1< ValueTuple_2_tAB12458160F7EEB98903FBFDF624C4E37DB5B0C4, int16_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_6, L_7);
				__this->___result = L_8;
				__this->___status = (int32_t)1;
				ValueTuple_2_tAB12458160F7EEB98903FBFDF624C4E37DB5B0C4 L_9 = __this->___result;
				V_2 = L_9;
				goto IL_0094;
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0057_1;
				}
				throw e;
			}

CATCH_0057_1:
			{
				{
					Exception_t* L_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
					V_3 = L_10;
					Exception_t* L_11 = V_3;
					ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_12;
					L_12 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_11, NULL);
					__this->___exception = L_12;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___exception), (void*)L_12);
					Exception_t* L_13 = V_3;
					V_4 = (bool)((!(((RuntimeObject*)(OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_13, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var))))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
					bool L_14 = V_4;
					if (!L_14)
					{
						goto IL_007f_1;
					}
				}
				{
					__this->___status = (int32_t)3;
					goto IL_0088_1;
				}

IL_007f_1:
				{
					__this->___status = (int32_t)2;
				}

IL_0088_1:
				{
					IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
				}
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0094:
	{
		ValueTuple_2_tAB12458160F7EEB98903FBFDF624C4E37DB5B0C4 L_15 = V_2;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_Cysharp_Threading_Tasks_IUniTaskSource_GetResult_mAC990BC9502B985522AAF3CF7FA3EB5CF7F71189_gshared (MemoizeSource_tD6683A8DE463F34C3148559778641D0559CAF6BD* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___0_token;
		ValueTuple_2_tAB12458160F7EEB98903FBFDF624C4E37DB5B0C4 L_1;
		L_1 = MemoizeSource_GetResult_mE123C67A43DD11F7D132525F986EF848680ACA92(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_GetStatus_m9E32BD035FA215AE5EBD46097EB43715765551D3_gshared (MemoizeSource_tD6683A8DE463F34C3148559778641D0559CAF6BD* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0027;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		int16_t L_4 = ___0_token;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_3, L_4);
		V_1 = L_5;
		goto IL_0027;
	}

IL_0027:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_OnCompleted_m474775AD1518018975A22292E742CA8A1EC8A5DB_gshared (MemoizeSource_tD6683A8DE463F34C3148559778641D0559CAF6BD* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = ___0_continuation;
		RuntimeObject* L_3 = ___1_state;
		NullCheck(L_2);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_2, L_3, NULL);
		goto IL_002b;
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->___source;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ___0_continuation;
		RuntimeObject* L_6 = ___1_state;
		int16_t L_7 = ___2_token;
		NullCheck(L_4);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_4, L_5, L_6, L_7);
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_UnsafeGetStatus_m08CBD30BC01EA53D35A53239AE9D774313C1C914_gshared (MemoizeSource_tD6683A8DE463F34C3148559778641D0559CAF6BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0026;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(3, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
		V_1 = L_4;
		goto IL_0026;
	}

IL_0026:
	{
		int32_t L_5 = V_1;
		return L_5;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource__ctor_m08069DF04B1FF97B8ACB4029BE37A5C80280010D_gshared (MemoizeSource_t27D10A136D46431400AD10521E516314BAD6E704* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t935465950D2698EFE54FE47D5D8151B83FCB6E16 MemoizeSource_GetResult_m847058F4209E1B335E485C062DB02C3CAC0B0F75_gshared (MemoizeSource_t27D10A136D46431400AD10521E516314BAD6E704* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	ValueTuple_2_t935465950D2698EFE54FE47D5D8151B83FCB6E16 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	bool V_4 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->___exception;
		V_1 = (bool)((!(((RuntimeObject*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_4 = __this->___exception;
		NullCheck(L_4);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_4, NULL);
	}

IL_002a:
	{
		ValueTuple_2_t935465950D2698EFE54FE47D5D8151B83FCB6E16 L_5 = __this->___result;
		V_2 = L_5;
		goto IL_0094;
	}

IL_0033:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008a:
			{
				__this->___source = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)(RuntimeObject*)NULL);
				return;
			}
		});
		try
		{
			try
			{
				RuntimeObject* L_6 = __this->___source;
				int16_t L_7 = ___0_token;
				NullCheck(L_6);
				ValueTuple_2_t935465950D2698EFE54FE47D5D8151B83FCB6E16 L_8;
				L_8 = InterfaceFuncInvoker1< ValueTuple_2_t935465950D2698EFE54FE47D5D8151B83FCB6E16, int16_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_6, L_7);
				__this->___result = L_8;
				__this->___status = (int32_t)1;
				ValueTuple_2_t935465950D2698EFE54FE47D5D8151B83FCB6E16 L_9 = __this->___result;
				V_2 = L_9;
				goto IL_0094;
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0057_1;
				}
				throw e;
			}

CATCH_0057_1:
			{
				{
					Exception_t* L_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
					V_3 = L_10;
					Exception_t* L_11 = V_3;
					ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_12;
					L_12 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_11, NULL);
					__this->___exception = L_12;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___exception), (void*)L_12);
					Exception_t* L_13 = V_3;
					V_4 = (bool)((!(((RuntimeObject*)(OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_13, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var))))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
					bool L_14 = V_4;
					if (!L_14)
					{
						goto IL_007f_1;
					}
				}
				{
					__this->___status = (int32_t)3;
					goto IL_0088_1;
				}

IL_007f_1:
				{
					__this->___status = (int32_t)2;
				}

IL_0088_1:
				{
					IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
				}
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0094:
	{
		ValueTuple_2_t935465950D2698EFE54FE47D5D8151B83FCB6E16 L_15 = V_2;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_Cysharp_Threading_Tasks_IUniTaskSource_GetResult_m7614FFA783EA895D2FDC88BD3E1C16ECFB364111_gshared (MemoizeSource_t27D10A136D46431400AD10521E516314BAD6E704* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___0_token;
		ValueTuple_2_t935465950D2698EFE54FE47D5D8151B83FCB6E16 L_1;
		L_1 = MemoizeSource_GetResult_m847058F4209E1B335E485C062DB02C3CAC0B0F75(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_GetStatus_m05CEA7967702B4E166BC1E9B782274BF64AEADF3_gshared (MemoizeSource_t27D10A136D46431400AD10521E516314BAD6E704* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0027;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		int16_t L_4 = ___0_token;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_3, L_4);
		V_1 = L_5;
		goto IL_0027;
	}

IL_0027:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_OnCompleted_m62776B7E05D3CB96385F34315BD01A046C47F886_gshared (MemoizeSource_t27D10A136D46431400AD10521E516314BAD6E704* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = ___0_continuation;
		RuntimeObject* L_3 = ___1_state;
		NullCheck(L_2);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_2, L_3, NULL);
		goto IL_002b;
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->___source;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ___0_continuation;
		RuntimeObject* L_6 = ___1_state;
		int16_t L_7 = ___2_token;
		NullCheck(L_4);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_4, L_5, L_6, L_7);
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_UnsafeGetStatus_m92BA8ECEAE019BB8BEADB80401EF3B27CE59F2F8_gshared (MemoizeSource_t27D10A136D46431400AD10521E516314BAD6E704* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0026;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(3, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
		V_1 = L_4;
		goto IL_0026;
	}

IL_0026:
	{
		int32_t L_5 = V_1;
		return L_5;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource__ctor_m38F7D9770B961A06F0495219DC896979595D419A_gshared (MemoizeSource_t1BB5620374CA89421E3294A788BD4B28A99714C7* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t6A10DF53546071B4ED19D939589673347CEC5702 MemoizeSource_GetResult_m1ECEEA3E0C7A64CA4AA4188B1206CB68A55886C0_gshared (MemoizeSource_t1BB5620374CA89421E3294A788BD4B28A99714C7* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	ValueTuple_2_t6A10DF53546071B4ED19D939589673347CEC5702 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	bool V_4 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->___exception;
		V_1 = (bool)((!(((RuntimeObject*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_4 = __this->___exception;
		NullCheck(L_4);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_4, NULL);
	}

IL_002a:
	{
		ValueTuple_2_t6A10DF53546071B4ED19D939589673347CEC5702 L_5 = __this->___result;
		V_2 = L_5;
		goto IL_0094;
	}

IL_0033:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008a:
			{
				__this->___source = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)(RuntimeObject*)NULL);
				return;
			}
		});
		try
		{
			try
			{
				RuntimeObject* L_6 = __this->___source;
				int16_t L_7 = ___0_token;
				NullCheck(L_6);
				ValueTuple_2_t6A10DF53546071B4ED19D939589673347CEC5702 L_8;
				L_8 = InterfaceFuncInvoker1< ValueTuple_2_t6A10DF53546071B4ED19D939589673347CEC5702, int16_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_6, L_7);
				__this->___result = L_8;
				Il2CppCodeGenWriteBarrier((void**)&((&((&((&((&(((&__this->___result))->___Item2))->___Item2))->___Item2))->___Item2))->___Item2), (void*)NULL);
				__this->___status = (int32_t)1;
				ValueTuple_2_t6A10DF53546071B4ED19D939589673347CEC5702 L_9 = __this->___result;
				V_2 = L_9;
				goto IL_0094;
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0057_1;
				}
				throw e;
			}

CATCH_0057_1:
			{
				{
					Exception_t* L_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
					V_3 = L_10;
					Exception_t* L_11 = V_3;
					ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_12;
					L_12 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_11, NULL);
					__this->___exception = L_12;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___exception), (void*)L_12);
					Exception_t* L_13 = V_3;
					V_4 = (bool)((!(((RuntimeObject*)(OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_13, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var))))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
					bool L_14 = V_4;
					if (!L_14)
					{
						goto IL_007f_1;
					}
				}
				{
					__this->___status = (int32_t)3;
					goto IL_0088_1;
				}

IL_007f_1:
				{
					__this->___status = (int32_t)2;
				}

IL_0088_1:
				{
					IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
				}
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0094:
	{
		ValueTuple_2_t6A10DF53546071B4ED19D939589673347CEC5702 L_15 = V_2;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_Cysharp_Threading_Tasks_IUniTaskSource_GetResult_m7C1C52E86E1E1A19F51E063BCB6E6D3B83E0AB00_gshared (MemoizeSource_t1BB5620374CA89421E3294A788BD4B28A99714C7* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___0_token;
		ValueTuple_2_t6A10DF53546071B4ED19D939589673347CEC5702 L_1;
		L_1 = MemoizeSource_GetResult_m1ECEEA3E0C7A64CA4AA4188B1206CB68A55886C0(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_GetStatus_m7EC6441E6BF1910C8C6D10BEFD3D4FDD46A78E03_gshared (MemoizeSource_t1BB5620374CA89421E3294A788BD4B28A99714C7* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0027;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		int16_t L_4 = ___0_token;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_3, L_4);
		V_1 = L_5;
		goto IL_0027;
	}

IL_0027:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_OnCompleted_m5C9415D8622E885BDD0907052B58A83674F554CE_gshared (MemoizeSource_t1BB5620374CA89421E3294A788BD4B28A99714C7* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = ___0_continuation;
		RuntimeObject* L_3 = ___1_state;
		NullCheck(L_2);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_2, L_3, NULL);
		goto IL_002b;
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->___source;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ___0_continuation;
		RuntimeObject* L_6 = ___1_state;
		int16_t L_7 = ___2_token;
		NullCheck(L_4);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_4, L_5, L_6, L_7);
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_UnsafeGetStatus_m1F8B9235E6BE26F5ED4225B7944D29E07D706396_gshared (MemoizeSource_t1BB5620374CA89421E3294A788BD4B28A99714C7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0026;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(3, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
		V_1 = L_4;
		goto IL_0026;
	}

IL_0026:
	{
		int32_t L_5 = V_1;
		return L_5;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource__ctor_mA72C8DE9D5DADADEE9AB266A2FD5EA8DDBB6AF5F_gshared (MemoizeSource_t4AC1D09959B35856B6BA4446DAC696ED75E020E4* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tBB1248EBF0017304413829627AA66F8E210F2836 MemoizeSource_GetResult_mF37B3DAC77966747BC84059E92AC0AEB7FFCA79C_gshared (MemoizeSource_t4AC1D09959B35856B6BA4446DAC696ED75E020E4* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	ValueTuple_2_tBB1248EBF0017304413829627AA66F8E210F2836 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	bool V_4 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->___exception;
		V_1 = (bool)((!(((RuntimeObject*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_4 = __this->___exception;
		NullCheck(L_4);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_4, NULL);
	}

IL_002a:
	{
		ValueTuple_2_tBB1248EBF0017304413829627AA66F8E210F2836 L_5 = __this->___result;
		V_2 = L_5;
		goto IL_0094;
	}

IL_0033:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008a:
			{
				__this->___source = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)(RuntimeObject*)NULL);
				return;
			}
		});
		try
		{
			try
			{
				RuntimeObject* L_6 = __this->___source;
				int16_t L_7 = ___0_token;
				NullCheck(L_6);
				ValueTuple_2_tBB1248EBF0017304413829627AA66F8E210F2836 L_8;
				L_8 = InterfaceFuncInvoker1< ValueTuple_2_tBB1248EBF0017304413829627AA66F8E210F2836, int16_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_6, L_7);
				__this->___result = L_8;
				__this->___status = (int32_t)1;
				ValueTuple_2_tBB1248EBF0017304413829627AA66F8E210F2836 L_9 = __this->___result;
				V_2 = L_9;
				goto IL_0094;
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0057_1;
				}
				throw e;
			}

CATCH_0057_1:
			{
				{
					Exception_t* L_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
					V_3 = L_10;
					Exception_t* L_11 = V_3;
					ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_12;
					L_12 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_11, NULL);
					__this->___exception = L_12;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___exception), (void*)L_12);
					Exception_t* L_13 = V_3;
					V_4 = (bool)((!(((RuntimeObject*)(OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_13, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var))))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
					bool L_14 = V_4;
					if (!L_14)
					{
						goto IL_007f_1;
					}
				}
				{
					__this->___status = (int32_t)3;
					goto IL_0088_1;
				}

IL_007f_1:
				{
					__this->___status = (int32_t)2;
				}

IL_0088_1:
				{
					IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
				}
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0094:
	{
		ValueTuple_2_tBB1248EBF0017304413829627AA66F8E210F2836 L_15 = V_2;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_Cysharp_Threading_Tasks_IUniTaskSource_GetResult_m3870D83805CACD9A1AEFB927B4EEFFD4B2B8B235_gshared (MemoizeSource_t4AC1D09959B35856B6BA4446DAC696ED75E020E4* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___0_token;
		ValueTuple_2_tBB1248EBF0017304413829627AA66F8E210F2836 L_1;
		L_1 = MemoizeSource_GetResult_mF37B3DAC77966747BC84059E92AC0AEB7FFCA79C(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_GetStatus_mB63A0A974259E50021C51BBFD32AB1FA12463638_gshared (MemoizeSource_t4AC1D09959B35856B6BA4446DAC696ED75E020E4* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0027;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		int16_t L_4 = ___0_token;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_3, L_4);
		V_1 = L_5;
		goto IL_0027;
	}

IL_0027:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_OnCompleted_m503E51EF9D4763426B75F79B7198A45ACBA17218_gshared (MemoizeSource_t4AC1D09959B35856B6BA4446DAC696ED75E020E4* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = ___0_continuation;
		RuntimeObject* L_3 = ___1_state;
		NullCheck(L_2);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_2, L_3, NULL);
		goto IL_002b;
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->___source;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ___0_continuation;
		RuntimeObject* L_6 = ___1_state;
		int16_t L_7 = ___2_token;
		NullCheck(L_4);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_4, L_5, L_6, L_7);
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_UnsafeGetStatus_m882C8932D14156915982C4D033F3DBCC726BA514_gshared (MemoizeSource_t4AC1D09959B35856B6BA4446DAC696ED75E020E4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0026;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(3, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
		V_1 = L_4;
		goto IL_0026;
	}

IL_0026:
	{
		int32_t L_5 = V_1;
		return L_5;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource__ctor_mA6DFD5242651E11C00E81B3760480CA904E448F0_gshared (MemoizeSource_t9E9462BD8A21248A2EC46FFD9CB9B754E4394D6C* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t330479F0733611828EC447EC3AF37E7D3B6C13C6 MemoizeSource_GetResult_m7DC9B90CE5CC9BA202197E359DB90B35D33AF4C7_gshared (MemoizeSource_t9E9462BD8A21248A2EC46FFD9CB9B754E4394D6C* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	ValueTuple_2_t330479F0733611828EC447EC3AF37E7D3B6C13C6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	bool V_4 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->___exception;
		V_1 = (bool)((!(((RuntimeObject*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_4 = __this->___exception;
		NullCheck(L_4);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_4, NULL);
	}

IL_002a:
	{
		ValueTuple_2_t330479F0733611828EC447EC3AF37E7D3B6C13C6 L_5 = __this->___result;
		V_2 = L_5;
		goto IL_0094;
	}

IL_0033:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008a:
			{
				__this->___source = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)(RuntimeObject*)NULL);
				return;
			}
		});
		try
		{
			try
			{
				RuntimeObject* L_6 = __this->___source;
				int16_t L_7 = ___0_token;
				NullCheck(L_6);
				ValueTuple_2_t330479F0733611828EC447EC3AF37E7D3B6C13C6 L_8;
				L_8 = InterfaceFuncInvoker1< ValueTuple_2_t330479F0733611828EC447EC3AF37E7D3B6C13C6, int16_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_6, L_7);
				__this->___result = L_8;
				Il2CppCodeGenWriteBarrier((void**)&((&((&((&((&((&(((&__this->___result))->___Item2))->___Item2))->___Item2))->___Item2))->___Item2))->___m_Operation), (void*)NULL);
				__this->___status = (int32_t)1;
				ValueTuple_2_t330479F0733611828EC447EC3AF37E7D3B6C13C6 L_9 = __this->___result;
				V_2 = L_9;
				goto IL_0094;
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0057_1;
				}
				throw e;
			}

CATCH_0057_1:
			{
				{
					Exception_t* L_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
					V_3 = L_10;
					Exception_t* L_11 = V_3;
					ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_12;
					L_12 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_11, NULL);
					__this->___exception = L_12;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___exception), (void*)L_12);
					Exception_t* L_13 = V_3;
					V_4 = (bool)((!(((RuntimeObject*)(OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_13, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var))))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
					bool L_14 = V_4;
					if (!L_14)
					{
						goto IL_007f_1;
					}
				}
				{
					__this->___status = (int32_t)3;
					goto IL_0088_1;
				}

IL_007f_1:
				{
					__this->___status = (int32_t)2;
				}

IL_0088_1:
				{
					IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
				}
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0094:
	{
		ValueTuple_2_t330479F0733611828EC447EC3AF37E7D3B6C13C6 L_15 = V_2;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_Cysharp_Threading_Tasks_IUniTaskSource_GetResult_m9886D992016B183E5CA5C025438C1400C172444E_gshared (MemoizeSource_t9E9462BD8A21248A2EC46FFD9CB9B754E4394D6C* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___0_token;
		ValueTuple_2_t330479F0733611828EC447EC3AF37E7D3B6C13C6 L_1;
		L_1 = MemoizeSource_GetResult_m7DC9B90CE5CC9BA202197E359DB90B35D33AF4C7(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_GetStatus_mBF41D9714EE0891777A006C96F18C74118598452_gshared (MemoizeSource_t9E9462BD8A21248A2EC46FFD9CB9B754E4394D6C* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0027;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		int16_t L_4 = ___0_token;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_3, L_4);
		V_1 = L_5;
		goto IL_0027;
	}

IL_0027:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_OnCompleted_m8B0A7CAA69C049FA7057F935D3EA3D83597BFD3F_gshared (MemoizeSource_t9E9462BD8A21248A2EC46FFD9CB9B754E4394D6C* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = ___0_continuation;
		RuntimeObject* L_3 = ___1_state;
		NullCheck(L_2);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_2, L_3, NULL);
		goto IL_002b;
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->___source;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ___0_continuation;
		RuntimeObject* L_6 = ___1_state;
		int16_t L_7 = ___2_token;
		NullCheck(L_4);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_4, L_5, L_6, L_7);
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_UnsafeGetStatus_m7DC3805BF26CEEB12515D0BB4C06D89243609A0D_gshared (MemoizeSource_t9E9462BD8A21248A2EC46FFD9CB9B754E4394D6C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0026;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(3, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
		V_1 = L_4;
		goto IL_0026;
	}

IL_0026:
	{
		int32_t L_5 = V_1;
		return L_5;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource__ctor_mEA597EABFC7F3D5CF507B4F3CA08FAD946F810CA_gshared (MemoizeSource_t015C121B64F928ECEF0D84837D2FA062738D63BB* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tEB14017B363793A13469D8BB47D121AE3737431A MemoizeSource_GetResult_m9D905BC88D8B76AB7CAFB5646F80A28E12502DCA_gshared (MemoizeSource_t015C121B64F928ECEF0D84837D2FA062738D63BB* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	ValueTuple_2_tEB14017B363793A13469D8BB47D121AE3737431A V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	bool V_4 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->___exception;
		V_1 = (bool)((!(((RuntimeObject*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_4 = __this->___exception;
		NullCheck(L_4);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_4, NULL);
	}

IL_002a:
	{
		ValueTuple_2_tEB14017B363793A13469D8BB47D121AE3737431A L_5 = __this->___result;
		V_2 = L_5;
		goto IL_0094;
	}

IL_0033:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008a:
			{
				__this->___source = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)(RuntimeObject*)NULL);
				return;
			}
		});
		try
		{
			try
			{
				RuntimeObject* L_6 = __this->___source;
				int16_t L_7 = ___0_token;
				NullCheck(L_6);
				ValueTuple_2_tEB14017B363793A13469D8BB47D121AE3737431A L_8;
				L_8 = InterfaceFuncInvoker1< ValueTuple_2_tEB14017B363793A13469D8BB47D121AE3737431A, int16_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_6, L_7);
				__this->___result = L_8;
				__this->___status = (int32_t)1;
				ValueTuple_2_tEB14017B363793A13469D8BB47D121AE3737431A L_9 = __this->___result;
				V_2 = L_9;
				goto IL_0094;
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0057_1;
				}
				throw e;
			}

CATCH_0057_1:
			{
				{
					Exception_t* L_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
					V_3 = L_10;
					Exception_t* L_11 = V_3;
					ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_12;
					L_12 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_11, NULL);
					__this->___exception = L_12;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___exception), (void*)L_12);
					Exception_t* L_13 = V_3;
					V_4 = (bool)((!(((RuntimeObject*)(OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_13, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var))))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
					bool L_14 = V_4;
					if (!L_14)
					{
						goto IL_007f_1;
					}
				}
				{
					__this->___status = (int32_t)3;
					goto IL_0088_1;
				}

IL_007f_1:
				{
					__this->___status = (int32_t)2;
				}

IL_0088_1:
				{
					IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
				}
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0094:
	{
		ValueTuple_2_tEB14017B363793A13469D8BB47D121AE3737431A L_15 = V_2;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_Cysharp_Threading_Tasks_IUniTaskSource_GetResult_m0370CCA1BE518343F288E251B8EAD9E76B85F04B_gshared (MemoizeSource_t015C121B64F928ECEF0D84837D2FA062738D63BB* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___0_token;
		ValueTuple_2_tEB14017B363793A13469D8BB47D121AE3737431A L_1;
		L_1 = MemoizeSource_GetResult_m9D905BC88D8B76AB7CAFB5646F80A28E12502DCA(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_GetStatus_m969CF8177C170EB7B06DD3E31C86A01755CE19DA_gshared (MemoizeSource_t015C121B64F928ECEF0D84837D2FA062738D63BB* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0027;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		int16_t L_4 = ___0_token;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_3, L_4);
		V_1 = L_5;
		goto IL_0027;
	}

IL_0027:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_OnCompleted_m0603FEA969D4B645AE3A598EED9B3D824A8D95D0_gshared (MemoizeSource_t015C121B64F928ECEF0D84837D2FA062738D63BB* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = ___0_continuation;
		RuntimeObject* L_3 = ___1_state;
		NullCheck(L_2);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_2, L_3, NULL);
		goto IL_002b;
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->___source;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ___0_continuation;
		RuntimeObject* L_6 = ___1_state;
		int16_t L_7 = ___2_token;
		NullCheck(L_4);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_4, L_5, L_6, L_7);
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_UnsafeGetStatus_m60C03713DD7B2E06C2D63E2B174120BF8A69B55D_gshared (MemoizeSource_t015C121B64F928ECEF0D84837D2FA062738D63BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0026;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(3, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
		V_1 = L_4;
		goto IL_0026;
	}

IL_0026:
	{
		int32_t L_5 = V_1;
		return L_5;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource__ctor_mA101425471E7AC709C0CF7C1259E80171BA17492_gshared (MemoizeSource_tF1CD7C88E1188F0C65ADB3C27970D1D1D710EDB5* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tF8D7503A349FA562D1850AE4FA8AA15C5EF3A628 MemoizeSource_GetResult_m78C355348BC346EF6F9C476C0F3E3D8CE95F577B_gshared (MemoizeSource_tF1CD7C88E1188F0C65ADB3C27970D1D1D710EDB5* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	ValueTuple_2_tF8D7503A349FA562D1850AE4FA8AA15C5EF3A628 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	bool V_4 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->___exception;
		V_1 = (bool)((!(((RuntimeObject*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_4 = __this->___exception;
		NullCheck(L_4);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_4, NULL);
	}

IL_002a:
	{
		ValueTuple_2_tF8D7503A349FA562D1850AE4FA8AA15C5EF3A628 L_5 = __this->___result;
		V_2 = L_5;
		goto IL_0094;
	}

IL_0033:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008a:
			{
				__this->___source = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)(RuntimeObject*)NULL);
				return;
			}
		});
		try
		{
			try
			{
				RuntimeObject* L_6 = __this->___source;
				int16_t L_7 = ___0_token;
				NullCheck(L_6);
				ValueTuple_2_tF8D7503A349FA562D1850AE4FA8AA15C5EF3A628 L_8;
				L_8 = InterfaceFuncInvoker1< ValueTuple_2_tF8D7503A349FA562D1850AE4FA8AA15C5EF3A628, int16_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_6, L_7);
				__this->___result = L_8;
				Il2CppCodeGenWriteBarrier((void**)&((&((&((&((&((&(((&__this->___result))->___Item2))->___Item2))->___Item2))->___Item2))->___Item2))->___source), (void*)NULL);
				__this->___status = (int32_t)1;
				ValueTuple_2_tF8D7503A349FA562D1850AE4FA8AA15C5EF3A628 L_9 = __this->___result;
				V_2 = L_9;
				goto IL_0094;
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0057_1;
				}
				throw e;
			}

CATCH_0057_1:
			{
				{
					Exception_t* L_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
					V_3 = L_10;
					Exception_t* L_11 = V_3;
					ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_12;
					L_12 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_11, NULL);
					__this->___exception = L_12;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___exception), (void*)L_12);
					Exception_t* L_13 = V_3;
					V_4 = (bool)((!(((RuntimeObject*)(OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_13, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var))))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
					bool L_14 = V_4;
					if (!L_14)
					{
						goto IL_007f_1;
					}
				}
				{
					__this->___status = (int32_t)3;
					goto IL_0088_1;
				}

IL_007f_1:
				{
					__this->___status = (int32_t)2;
				}

IL_0088_1:
				{
					IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
				}
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0094:
	{
		ValueTuple_2_tF8D7503A349FA562D1850AE4FA8AA15C5EF3A628 L_15 = V_2;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_Cysharp_Threading_Tasks_IUniTaskSource_GetResult_mD337B5992A239437230E3A0FADE05213D547B66D_gshared (MemoizeSource_tF1CD7C88E1188F0C65ADB3C27970D1D1D710EDB5* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___0_token;
		ValueTuple_2_tF8D7503A349FA562D1850AE4FA8AA15C5EF3A628 L_1;
		L_1 = MemoizeSource_GetResult_m78C355348BC346EF6F9C476C0F3E3D8CE95F577B(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_GetStatus_m747F09226F6FE9DF67DC80007E968E27A079FC3A_gshared (MemoizeSource_tF1CD7C88E1188F0C65ADB3C27970D1D1D710EDB5* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0027;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		int16_t L_4 = ___0_token;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_3, L_4);
		V_1 = L_5;
		goto IL_0027;
	}

IL_0027:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_OnCompleted_m03AE47225030F5EF67B759D97C09DCF72A88CBE8_gshared (MemoizeSource_tF1CD7C88E1188F0C65ADB3C27970D1D1D710EDB5* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = ___0_continuation;
		RuntimeObject* L_3 = ___1_state;
		NullCheck(L_2);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_2, L_3, NULL);
		goto IL_002b;
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->___source;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ___0_continuation;
		RuntimeObject* L_6 = ___1_state;
		int16_t L_7 = ___2_token;
		NullCheck(L_4);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_4, L_5, L_6, L_7);
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_UnsafeGetStatus_mF6731C8C25E4CA8A1213BF6B7E5DC924ABF52DA0_gshared (MemoizeSource_tF1CD7C88E1188F0C65ADB3C27970D1D1D710EDB5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0026;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(3, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
		V_1 = L_4;
		goto IL_0026;
	}

IL_0026:
	{
		int32_t L_5 = V_1;
		return L_5;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource__ctor_mCB204C568DCDF1A4D92989DFED222998BDC0020A_gshared (MemoizeSource_t2ED223A676DCA53FD8FA71E6A088B3FFE496AA22* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tC8B5C2FAF38BC3CC478737FF4E0493A3B8D6683E MemoizeSource_GetResult_m8F8EB9328FDABDA09DC1D21F513287F80D4F1B87_gshared (MemoizeSource_t2ED223A676DCA53FD8FA71E6A088B3FFE496AA22* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	ValueTuple_2_tC8B5C2FAF38BC3CC478737FF4E0493A3B8D6683E V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	bool V_4 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->___exception;
		V_1 = (bool)((!(((RuntimeObject*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_4 = __this->___exception;
		NullCheck(L_4);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_4, NULL);
	}

IL_002a:
	{
		ValueTuple_2_tC8B5C2FAF38BC3CC478737FF4E0493A3B8D6683E L_5 = __this->___result;
		V_2 = L_5;
		goto IL_0094;
	}

IL_0033:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008a:
			{
				__this->___source = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)(RuntimeObject*)NULL);
				return;
			}
		});
		try
		{
			try
			{
				RuntimeObject* L_6 = __this->___source;
				int16_t L_7 = ___0_token;
				NullCheck(L_6);
				ValueTuple_2_tC8B5C2FAF38BC3CC478737FF4E0493A3B8D6683E L_8;
				L_8 = InterfaceFuncInvoker1< ValueTuple_2_tC8B5C2FAF38BC3CC478737FF4E0493A3B8D6683E, int16_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_6, L_7);
				__this->___result = L_8;
				__this->___status = (int32_t)1;
				ValueTuple_2_tC8B5C2FAF38BC3CC478737FF4E0493A3B8D6683E L_9 = __this->___result;
				V_2 = L_9;
				goto IL_0094;
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0057_1;
				}
				throw e;
			}

CATCH_0057_1:
			{
				{
					Exception_t* L_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
					V_3 = L_10;
					Exception_t* L_11 = V_3;
					ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_12;
					L_12 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_11, NULL);
					__this->___exception = L_12;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___exception), (void*)L_12);
					Exception_t* L_13 = V_3;
					V_4 = (bool)((!(((RuntimeObject*)(OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_13, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var))))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
					bool L_14 = V_4;
					if (!L_14)
					{
						goto IL_007f_1;
					}
				}
				{
					__this->___status = (int32_t)3;
					goto IL_0088_1;
				}

IL_007f_1:
				{
					__this->___status = (int32_t)2;
				}

IL_0088_1:
				{
					IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
				}
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0094:
	{
		ValueTuple_2_tC8B5C2FAF38BC3CC478737FF4E0493A3B8D6683E L_15 = V_2;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_Cysharp_Threading_Tasks_IUniTaskSource_GetResult_mAEA0951C6FA3777B3449E1A14B4B44E1ABCA53E9_gshared (MemoizeSource_t2ED223A676DCA53FD8FA71E6A088B3FFE496AA22* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___0_token;
		ValueTuple_2_tC8B5C2FAF38BC3CC478737FF4E0493A3B8D6683E L_1;
		L_1 = MemoizeSource_GetResult_m8F8EB9328FDABDA09DC1D21F513287F80D4F1B87(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_GetStatus_m2381ED0C749520A127F4CBE00DF4857A841D4EED_gshared (MemoizeSource_t2ED223A676DCA53FD8FA71E6A088B3FFE496AA22* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0027;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		int16_t L_4 = ___0_token;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_3, L_4);
		V_1 = L_5;
		goto IL_0027;
	}

IL_0027:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_OnCompleted_m9F84D7F5E154C66A378E63D21D8D87A630A7AEB6_gshared (MemoizeSource_t2ED223A676DCA53FD8FA71E6A088B3FFE496AA22* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = ___0_continuation;
		RuntimeObject* L_3 = ___1_state;
		NullCheck(L_2);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_2, L_3, NULL);
		goto IL_002b;
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->___source;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ___0_continuation;
		RuntimeObject* L_6 = ___1_state;
		int16_t L_7 = ___2_token;
		NullCheck(L_4);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_4, L_5, L_6, L_7);
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_UnsafeGetStatus_m2E55BD2E98BD63D9B06A1C22A29F025A1709AA03_gshared (MemoizeSource_t2ED223A676DCA53FD8FA71E6A088B3FFE496AA22* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0026;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(3, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
		V_1 = L_4;
		goto IL_0026;
	}

IL_0026:
	{
		int32_t L_5 = V_1;
		return L_5;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource__ctor_m2A677E4C9F3D62722EEF1E654F4BFA9F7C223489_gshared (MemoizeSource_t49C4AB20ECB8647FDDC6F869F071E757E142AF51* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t080CA831DC414BEAA50894A0E00736068C362266 MemoizeSource_GetResult_m99E466CF252DE280470F633ACC6181C6D5E0F704_gshared (MemoizeSource_t49C4AB20ECB8647FDDC6F869F071E757E142AF51* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	ValueTuple_2_t080CA831DC414BEAA50894A0E00736068C362266 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	bool V_4 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->___exception;
		V_1 = (bool)((!(((RuntimeObject*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_4 = __this->___exception;
		NullCheck(L_4);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_4, NULL);
	}

IL_002a:
	{
		ValueTuple_2_t080CA831DC414BEAA50894A0E00736068C362266 L_5 = __this->___result;
		V_2 = L_5;
		goto IL_0094;
	}

IL_0033:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008a:
			{
				__this->___source = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)(RuntimeObject*)NULL);
				return;
			}
		});
		try
		{
			try
			{
				RuntimeObject* L_6 = __this->___source;
				int16_t L_7 = ___0_token;
				NullCheck(L_6);
				ValueTuple_2_t080CA831DC414BEAA50894A0E00736068C362266 L_8;
				L_8 = InterfaceFuncInvoker1< ValueTuple_2_t080CA831DC414BEAA50894A0E00736068C362266, int16_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_6, L_7);
				__this->___result = L_8;
				Il2CppCodeGenWriteBarrier((void**)&((&((&((&((&(((&__this->___result))->___Item2))->___Item2))->___Item2))->___Item2))->___Item1), (void*)NULL);
				__this->___status = (int32_t)1;
				ValueTuple_2_t080CA831DC414BEAA50894A0E00736068C362266 L_9 = __this->___result;
				V_2 = L_9;
				goto IL_0094;
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0057_1;
				}
				throw e;
			}

CATCH_0057_1:
			{
				{
					Exception_t* L_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
					V_3 = L_10;
					Exception_t* L_11 = V_3;
					ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_12;
					L_12 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_11, NULL);
					__this->___exception = L_12;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___exception), (void*)L_12);
					Exception_t* L_13 = V_3;
					V_4 = (bool)((!(((RuntimeObject*)(OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_13, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var))))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
					bool L_14 = V_4;
					if (!L_14)
					{
						goto IL_007f_1;
					}
				}
				{
					__this->___status = (int32_t)3;
					goto IL_0088_1;
				}

IL_007f_1:
				{
					__this->___status = (int32_t)2;
				}

IL_0088_1:
				{
					IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
				}
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0094:
	{
		ValueTuple_2_t080CA831DC414BEAA50894A0E00736068C362266 L_15 = V_2;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_Cysharp_Threading_Tasks_IUniTaskSource_GetResult_mFF4BC70C596909E4AB268C5296D812C91C59A7CA_gshared (MemoizeSource_t49C4AB20ECB8647FDDC6F869F071E757E142AF51* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___0_token;
		ValueTuple_2_t080CA831DC414BEAA50894A0E00736068C362266 L_1;
		L_1 = MemoizeSource_GetResult_m99E466CF252DE280470F633ACC6181C6D5E0F704(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_GetStatus_m792F7050E7A8A18593CE6CCCE83A0CAC90D8401F_gshared (MemoizeSource_t49C4AB20ECB8647FDDC6F869F071E757E142AF51* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0027;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		int16_t L_4 = ___0_token;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_3, L_4);
		V_1 = L_5;
		goto IL_0027;
	}

IL_0027:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_OnCompleted_m9B395E102D861588CDE5EC9F4917D4EC3ED588D3_gshared (MemoizeSource_t49C4AB20ECB8647FDDC6F869F071E757E142AF51* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = ___0_continuation;
		RuntimeObject* L_3 = ___1_state;
		NullCheck(L_2);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_2, L_3, NULL);
		goto IL_002b;
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->___source;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ___0_continuation;
		RuntimeObject* L_6 = ___1_state;
		int16_t L_7 = ___2_token;
		NullCheck(L_4);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_4, L_5, L_6, L_7);
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_UnsafeGetStatus_m4BF567E9D396DCA4D8E0020F9DC0C09369CB915F_gshared (MemoizeSource_t49C4AB20ECB8647FDDC6F869F071E757E142AF51* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0026;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(3, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
		V_1 = L_4;
		goto IL_0026;
	}

IL_0026:
	{
		int32_t L_5 = V_1;
		return L_5;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource__ctor_m175AF0AFBF717A0F822435BD7BBF5F1D7E3BF552_gshared (MemoizeSource_t8B81C7A1772F56F643374AA53C7ABB9DD7BA00AC* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tBC8C6CC7124E84BF6A0E396AEFF5DAF55A74BFD0 MemoizeSource_GetResult_m5BC416C15BBC1195A06505CD10078CEA9A11D492_gshared (MemoizeSource_t8B81C7A1772F56F643374AA53C7ABB9DD7BA00AC* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	ValueTuple_2_tBC8C6CC7124E84BF6A0E396AEFF5DAF55A74BFD0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	bool V_4 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->___exception;
		V_1 = (bool)((!(((RuntimeObject*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_4 = __this->___exception;
		NullCheck(L_4);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_4, NULL);
	}

IL_002a:
	{
		ValueTuple_2_tBC8C6CC7124E84BF6A0E396AEFF5DAF55A74BFD0 L_5 = __this->___result;
		V_2 = L_5;
		goto IL_0094;
	}

IL_0033:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008a:
			{
				__this->___source = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)(RuntimeObject*)NULL);
				return;
			}
		});
		try
		{
			try
			{
				RuntimeObject* L_6 = __this->___source;
				int16_t L_7 = ___0_token;
				NullCheck(L_6);
				ValueTuple_2_tBC8C6CC7124E84BF6A0E396AEFF5DAF55A74BFD0 L_8;
				L_8 = InterfaceFuncInvoker1< ValueTuple_2_tBC8C6CC7124E84BF6A0E396AEFF5DAF55A74BFD0, int16_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_6, L_7);
				__this->___result = L_8;
				Il2CppCodeGenWriteBarrier((void**)&((&((&((&((&(((&__this->___result))->___Item2))->___Item2))->___Item2))->___Item2))->___Item1), (void*)NULL);
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&((&((&((&((&(((&__this->___result))->___Item2))->___Item2))->___Item2))->___Item2))->___Item2), (void*)NULL);
				#endif
				__this->___status = (int32_t)1;
				ValueTuple_2_tBC8C6CC7124E84BF6A0E396AEFF5DAF55A74BFD0 L_9 = __this->___result;
				V_2 = L_9;
				goto IL_0094;
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0057_1;
				}
				throw e;
			}

CATCH_0057_1:
			{
				{
					Exception_t* L_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
					V_3 = L_10;
					Exception_t* L_11 = V_3;
					ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_12;
					L_12 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_11, NULL);
					__this->___exception = L_12;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___exception), (void*)L_12);
					Exception_t* L_13 = V_3;
					V_4 = (bool)((!(((RuntimeObject*)(OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_13, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var))))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
					bool L_14 = V_4;
					if (!L_14)
					{
						goto IL_007f_1;
					}
				}
				{
					__this->___status = (int32_t)3;
					goto IL_0088_1;
				}

IL_007f_1:
				{
					__this->___status = (int32_t)2;
				}

IL_0088_1:
				{
					IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
				}
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0094:
	{
		ValueTuple_2_tBC8C6CC7124E84BF6A0E396AEFF5DAF55A74BFD0 L_15 = V_2;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_Cysharp_Threading_Tasks_IUniTaskSource_GetResult_m8F74D0649F943F9175A1E6CA136CDE775A04F4E7_gshared (MemoizeSource_t8B81C7A1772F56F643374AA53C7ABB9DD7BA00AC* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___0_token;
		ValueTuple_2_tBC8C6CC7124E84BF6A0E396AEFF5DAF55A74BFD0 L_1;
		L_1 = MemoizeSource_GetResult_m5BC416C15BBC1195A06505CD10078CEA9A11D492(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_GetStatus_m5F196DFBD41BB7503F24E8EEB15F3CFEEDDE681F_gshared (MemoizeSource_t8B81C7A1772F56F643374AA53C7ABB9DD7BA00AC* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0027;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		int16_t L_4 = ___0_token;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_3, L_4);
		V_1 = L_5;
		goto IL_0027;
	}

IL_0027:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_OnCompleted_mB7DD4C7774ECBC7ABE7F65A8333CBC631D999D4F_gshared (MemoizeSource_t8B81C7A1772F56F643374AA53C7ABB9DD7BA00AC* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = ___0_continuation;
		RuntimeObject* L_3 = ___1_state;
		NullCheck(L_2);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_2, L_3, NULL);
		goto IL_002b;
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->___source;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ___0_continuation;
		RuntimeObject* L_6 = ___1_state;
		int16_t L_7 = ___2_token;
		NullCheck(L_4);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_4, L_5, L_6, L_7);
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_UnsafeGetStatus_m62B9F9E99CB70763624AD4B577A96941D3F762C4_gshared (MemoizeSource_t8B81C7A1772F56F643374AA53C7ABB9DD7BA00AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0026;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(3, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
		V_1 = L_4;
		goto IL_0026;
	}

IL_0026:
	{
		int32_t L_5 = V_1;
		return L_5;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource__ctor_m02A642300736BBD5D4946F1CB99ECF09C679EC35_gshared (MemoizeSource_t8515139432089A796262B47AC0026B9DE7E1F747* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tED7ED363573DADFC91A594D0018E4E56CEC3D9FA MemoizeSource_GetResult_mDCBC19B12A77205DC67BE96D045FDF74F6914158_gshared (MemoizeSource_t8515139432089A796262B47AC0026B9DE7E1F747* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	ValueTuple_2_tED7ED363573DADFC91A594D0018E4E56CEC3D9FA V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	bool V_4 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->___exception;
		V_1 = (bool)((!(((RuntimeObject*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_4 = __this->___exception;
		NullCheck(L_4);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_4, NULL);
	}

IL_002a:
	{
		ValueTuple_2_tED7ED363573DADFC91A594D0018E4E56CEC3D9FA L_5 = __this->___result;
		V_2 = L_5;
		goto IL_0094;
	}

IL_0033:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008a:
			{
				__this->___source = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)(RuntimeObject*)NULL);
				return;
			}
		});
		try
		{
			try
			{
				RuntimeObject* L_6 = __this->___source;
				int16_t L_7 = ___0_token;
				NullCheck(L_6);
				ValueTuple_2_tED7ED363573DADFC91A594D0018E4E56CEC3D9FA L_8;
				L_8 = InterfaceFuncInvoker1< ValueTuple_2_tED7ED363573DADFC91A594D0018E4E56CEC3D9FA, int16_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_6, L_7);
				__this->___result = L_8;
				__this->___status = (int32_t)1;
				ValueTuple_2_tED7ED363573DADFC91A594D0018E4E56CEC3D9FA L_9 = __this->___result;
				V_2 = L_9;
				goto IL_0094;
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0057_1;
				}
				throw e;
			}

CATCH_0057_1:
			{
				{
					Exception_t* L_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
					V_3 = L_10;
					Exception_t* L_11 = V_3;
					ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_12;
					L_12 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_11, NULL);
					__this->___exception = L_12;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___exception), (void*)L_12);
					Exception_t* L_13 = V_3;
					V_4 = (bool)((!(((RuntimeObject*)(OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_13, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var))))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
					bool L_14 = V_4;
					if (!L_14)
					{
						goto IL_007f_1;
					}
				}
				{
					__this->___status = (int32_t)3;
					goto IL_0088_1;
				}

IL_007f_1:
				{
					__this->___status = (int32_t)2;
				}

IL_0088_1:
				{
					IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
				}
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0094:
	{
		ValueTuple_2_tED7ED363573DADFC91A594D0018E4E56CEC3D9FA L_15 = V_2;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_Cysharp_Threading_Tasks_IUniTaskSource_GetResult_mC2B1810AEE65829581C517BA8DA7CAD15D8D4BDD_gshared (MemoizeSource_t8515139432089A796262B47AC0026B9DE7E1F747* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___0_token;
		ValueTuple_2_tED7ED363573DADFC91A594D0018E4E56CEC3D9FA L_1;
		L_1 = MemoizeSource_GetResult_mDCBC19B12A77205DC67BE96D045FDF74F6914158(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_GetStatus_mFFD0E017C3D3A48228049181EDCCE240CADE985F_gshared (MemoizeSource_t8515139432089A796262B47AC0026B9DE7E1F747* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0027;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		int16_t L_4 = ___0_token;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_3, L_4);
		V_1 = L_5;
		goto IL_0027;
	}

IL_0027:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_OnCompleted_mDAEBD88A4C24A5C40688849365CDE709C141DC4A_gshared (MemoizeSource_t8515139432089A796262B47AC0026B9DE7E1F747* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = ___0_continuation;
		RuntimeObject* L_3 = ___1_state;
		NullCheck(L_2);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_2, L_3, NULL);
		goto IL_002b;
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->___source;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ___0_continuation;
		RuntimeObject* L_6 = ___1_state;
		int16_t L_7 = ___2_token;
		NullCheck(L_4);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_4, L_5, L_6, L_7);
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_UnsafeGetStatus_m790A4656A3E2B4125E0E457DB010CF394D750FBD_gshared (MemoizeSource_t8515139432089A796262B47AC0026B9DE7E1F747* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0026;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(3, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
		V_1 = L_4;
		goto IL_0026;
	}

IL_0026:
	{
		int32_t L_5 = V_1;
		return L_5;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource__ctor_mB92D24974E7951E119732E71D91B80F1127C7A8A_gshared (MemoizeSource_t670AFF0D5F06553D5D7657F9571EFAD5E11D7DC4* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tBF06E5ADE07E63499D2282FB433BF73667B3F0FC MemoizeSource_GetResult_m6ACE9C181FE76B3B6016B2E483D450AF15AC78AB_gshared (MemoizeSource_t670AFF0D5F06553D5D7657F9571EFAD5E11D7DC4* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	ValueTuple_2_tBF06E5ADE07E63499D2282FB433BF73667B3F0FC V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	bool V_4 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->___exception;
		V_1 = (bool)((!(((RuntimeObject*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_4 = __this->___exception;
		NullCheck(L_4);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_4, NULL);
	}

IL_002a:
	{
		ValueTuple_2_tBF06E5ADE07E63499D2282FB433BF73667B3F0FC L_5 = __this->___result;
		V_2 = L_5;
		goto IL_0094;
	}

IL_0033:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008a:
			{
				__this->___source = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)(RuntimeObject*)NULL);
				return;
			}
		});
		try
		{
			try
			{
				RuntimeObject* L_6 = __this->___source;
				int16_t L_7 = ___0_token;
				NullCheck(L_6);
				ValueTuple_2_tBF06E5ADE07E63499D2282FB433BF73667B3F0FC L_8;
				L_8 = InterfaceFuncInvoker1< ValueTuple_2_tBF06E5ADE07E63499D2282FB433BF73667B3F0FC, int16_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_6, L_7);
				__this->___result = L_8;
				__this->___status = (int32_t)1;
				ValueTuple_2_tBF06E5ADE07E63499D2282FB433BF73667B3F0FC L_9 = __this->___result;
				V_2 = L_9;
				goto IL_0094;
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0057_1;
				}
				throw e;
			}

CATCH_0057_1:
			{
				{
					Exception_t* L_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
					V_3 = L_10;
					Exception_t* L_11 = V_3;
					ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_12;
					L_12 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_11, NULL);
					__this->___exception = L_12;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___exception), (void*)L_12);
					Exception_t* L_13 = V_3;
					V_4 = (bool)((!(((RuntimeObject*)(OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_13, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var))))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
					bool L_14 = V_4;
					if (!L_14)
					{
						goto IL_007f_1;
					}
				}
				{
					__this->___status = (int32_t)3;
					goto IL_0088_1;
				}

IL_007f_1:
				{
					__this->___status = (int32_t)2;
				}

IL_0088_1:
				{
					IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
				}
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0094:
	{
		ValueTuple_2_tBF06E5ADE07E63499D2282FB433BF73667B3F0FC L_15 = V_2;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_Cysharp_Threading_Tasks_IUniTaskSource_GetResult_m78F5BE3055956D1BB2C7C0F9AEBC9280BC68430E_gshared (MemoizeSource_t670AFF0D5F06553D5D7657F9571EFAD5E11D7DC4* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___0_token;
		ValueTuple_2_tBF06E5ADE07E63499D2282FB433BF73667B3F0FC L_1;
		L_1 = MemoizeSource_GetResult_m6ACE9C181FE76B3B6016B2E483D450AF15AC78AB(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_GetStatus_m75295E4B9FDBC5262943B91A84110946B6B822B1_gshared (MemoizeSource_t670AFF0D5F06553D5D7657F9571EFAD5E11D7DC4* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0027;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		int16_t L_4 = ___0_token;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_3, L_4);
		V_1 = L_5;
		goto IL_0027;
	}

IL_0027:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_OnCompleted_mB8ED6B2AE9FACC4C342567C35D6DFCD799B005DB_gshared (MemoizeSource_t670AFF0D5F06553D5D7657F9571EFAD5E11D7DC4* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = ___0_continuation;
		RuntimeObject* L_3 = ___1_state;
		NullCheck(L_2);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_2, L_3, NULL);
		goto IL_002b;
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->___source;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ___0_continuation;
		RuntimeObject* L_6 = ___1_state;
		int16_t L_7 = ___2_token;
		NullCheck(L_4);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_4, L_5, L_6, L_7);
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_UnsafeGetStatus_m8B7B9E260D8A2AEA28314684C505BC8FC2D33716_gshared (MemoizeSource_t670AFF0D5F06553D5D7657F9571EFAD5E11D7DC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0026;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(3, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
		V_1 = L_4;
		goto IL_0026;
	}

IL_0026:
	{
		int32_t L_5 = V_1;
		return L_5;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource__ctor_m60D4E2F23C038E0D8F40BBD90AEC6D368BD714F1_gshared (MemoizeSource_t53DB4D4310BA19FE28DF1A4330092F558BD01F66* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tD2D276F149DD827077A198ACBB06694D4A9CAA4E MemoizeSource_GetResult_m29D885C746705BCA7E36BEDAC813897296A6E5D6_gshared (MemoizeSource_t53DB4D4310BA19FE28DF1A4330092F558BD01F66* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	ValueTuple_2_tD2D276F149DD827077A198ACBB06694D4A9CAA4E V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	bool V_4 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->___exception;
		V_1 = (bool)((!(((RuntimeObject*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_4 = __this->___exception;
		NullCheck(L_4);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_4, NULL);
	}

IL_002a:
	{
		ValueTuple_2_tD2D276F149DD827077A198ACBB06694D4A9CAA4E L_5 = __this->___result;
		V_2 = L_5;
		goto IL_0094;
	}

IL_0033:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008a:
			{
				__this->___source = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)(RuntimeObject*)NULL);
				return;
			}
		});
		try
		{
			try
			{
				RuntimeObject* L_6 = __this->___source;
				int16_t L_7 = ___0_token;
				NullCheck(L_6);
				ValueTuple_2_tD2D276F149DD827077A198ACBB06694D4A9CAA4E L_8;
				L_8 = InterfaceFuncInvoker1< ValueTuple_2_tD2D276F149DD827077A198ACBB06694D4A9CAA4E, int16_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_6, L_7);
				__this->___result = L_8;
				__this->___status = (int32_t)1;
				ValueTuple_2_tD2D276F149DD827077A198ACBB06694D4A9CAA4E L_9 = __this->___result;
				V_2 = L_9;
				goto IL_0094;
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0057_1;
				}
				throw e;
			}

CATCH_0057_1:
			{
				{
					Exception_t* L_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
					V_3 = L_10;
					Exception_t* L_11 = V_3;
					ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_12;
					L_12 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_11, NULL);
					__this->___exception = L_12;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___exception), (void*)L_12);
					Exception_t* L_13 = V_3;
					V_4 = (bool)((!(((RuntimeObject*)(OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_13, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var))))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
					bool L_14 = V_4;
					if (!L_14)
					{
						goto IL_007f_1;
					}
				}
				{
					__this->___status = (int32_t)3;
					goto IL_0088_1;
				}

IL_007f_1:
				{
					__this->___status = (int32_t)2;
				}

IL_0088_1:
				{
					IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
				}
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0094:
	{
		ValueTuple_2_tD2D276F149DD827077A198ACBB06694D4A9CAA4E L_15 = V_2;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_Cysharp_Threading_Tasks_IUniTaskSource_GetResult_mE5134F96E7F3DACCFCD6C76CCE9C19C7B599FC23_gshared (MemoizeSource_t53DB4D4310BA19FE28DF1A4330092F558BD01F66* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___0_token;
		ValueTuple_2_tD2D276F149DD827077A198ACBB06694D4A9CAA4E L_1;
		L_1 = MemoizeSource_GetResult_m29D885C746705BCA7E36BEDAC813897296A6E5D6(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_GetStatus_m250A9366EDC21956C496CD95044B9BBC1B4C5D1D_gshared (MemoizeSource_t53DB4D4310BA19FE28DF1A4330092F558BD01F66* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0027;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		int16_t L_4 = ___0_token;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_3, L_4);
		V_1 = L_5;
		goto IL_0027;
	}

IL_0027:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_OnCompleted_m2B8B4412591A090913942A37848E6F5C7B519AC4_gshared (MemoizeSource_t53DB4D4310BA19FE28DF1A4330092F558BD01F66* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = ___0_continuation;
		RuntimeObject* L_3 = ___1_state;
		NullCheck(L_2);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_2, L_3, NULL);
		goto IL_002b;
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->___source;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ___0_continuation;
		RuntimeObject* L_6 = ___1_state;
		int16_t L_7 = ___2_token;
		NullCheck(L_4);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_4, L_5, L_6, L_7);
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_UnsafeGetStatus_m4ACEE55F5028F510B73221F06DCCF0A900A99357_gshared (MemoizeSource_t53DB4D4310BA19FE28DF1A4330092F558BD01F66* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0026;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(3, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
		V_1 = L_4;
		goto IL_0026;
	}

IL_0026:
	{
		int32_t L_5 = V_1;
		return L_5;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource__ctor_m1B4EB656B10C7E45132BDB0A0CA882203AD7D1F2_gshared (MemoizeSource_t21EF441B70AC2C2BA32B8DA5B160242EB7453DBF* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tF14F6641CFA2C7B5CFBD0075A310DF96EF5F1554 MemoizeSource_GetResult_mCE1D7658830CE92AD5B88FA514F829C636466FE1_gshared (MemoizeSource_t21EF441B70AC2C2BA32B8DA5B160242EB7453DBF* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	ValueTuple_2_tF14F6641CFA2C7B5CFBD0075A310DF96EF5F1554 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	bool V_4 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->___exception;
		V_1 = (bool)((!(((RuntimeObject*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_4 = __this->___exception;
		NullCheck(L_4);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_4, NULL);
	}

IL_002a:
	{
		ValueTuple_2_tF14F6641CFA2C7B5CFBD0075A310DF96EF5F1554 L_5 = __this->___result;
		V_2 = L_5;
		goto IL_0094;
	}

IL_0033:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008a:
			{
				__this->___source = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)(RuntimeObject*)NULL);
				return;
			}
		});
		try
		{
			try
			{
				RuntimeObject* L_6 = __this->___source;
				int16_t L_7 = ___0_token;
				NullCheck(L_6);
				ValueTuple_2_tF14F6641CFA2C7B5CFBD0075A310DF96EF5F1554 L_8;
				L_8 = InterfaceFuncInvoker1< ValueTuple_2_tF14F6641CFA2C7B5CFBD0075A310DF96EF5F1554, int16_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_6, L_7);
				__this->___result = L_8;
				__this->___status = (int32_t)1;
				ValueTuple_2_tF14F6641CFA2C7B5CFBD0075A310DF96EF5F1554 L_9 = __this->___result;
				V_2 = L_9;
				goto IL_0094;
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0057_1;
				}
				throw e;
			}

CATCH_0057_1:
			{
				{
					Exception_t* L_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
					V_3 = L_10;
					Exception_t* L_11 = V_3;
					ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_12;
					L_12 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_11, NULL);
					__this->___exception = L_12;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___exception), (void*)L_12);
					Exception_t* L_13 = V_3;
					V_4 = (bool)((!(((RuntimeObject*)(OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_13, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var))))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
					bool L_14 = V_4;
					if (!L_14)
					{
						goto IL_007f_1;
					}
				}
				{
					__this->___status = (int32_t)3;
					goto IL_0088_1;
				}

IL_007f_1:
				{
					__this->___status = (int32_t)2;
				}

IL_0088_1:
				{
					IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
				}
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0094:
	{
		ValueTuple_2_tF14F6641CFA2C7B5CFBD0075A310DF96EF5F1554 L_15 = V_2;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_Cysharp_Threading_Tasks_IUniTaskSource_GetResult_m1FB35ED066B33FF28698846A5EE2F90B611BFBAF_gshared (MemoizeSource_t21EF441B70AC2C2BA32B8DA5B160242EB7453DBF* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___0_token;
		ValueTuple_2_tF14F6641CFA2C7B5CFBD0075A310DF96EF5F1554 L_1;
		L_1 = MemoizeSource_GetResult_mCE1D7658830CE92AD5B88FA514F829C636466FE1(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_GetStatus_mC129C9CD08E499F9B4304C794E095AA57EF8A63E_gshared (MemoizeSource_t21EF441B70AC2C2BA32B8DA5B160242EB7453DBF* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0027;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		int16_t L_4 = ___0_token;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_3, L_4);
		V_1 = L_5;
		goto IL_0027;
	}

IL_0027:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_OnCompleted_mF3DC1D8DB0F4C153D2403039D2D6E8D1F6E3B2BC_gshared (MemoizeSource_t21EF441B70AC2C2BA32B8DA5B160242EB7453DBF* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = ___0_continuation;
		RuntimeObject* L_3 = ___1_state;
		NullCheck(L_2);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_2, L_3, NULL);
		goto IL_002b;
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->___source;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ___0_continuation;
		RuntimeObject* L_6 = ___1_state;
		int16_t L_7 = ___2_token;
		NullCheck(L_4);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_4, L_5, L_6, L_7);
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_UnsafeGetStatus_m050DAE5076A393E3A9C6618ECB40FC4D7B5C2469_gshared (MemoizeSource_t21EF441B70AC2C2BA32B8DA5B160242EB7453DBF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0026;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(3, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
		V_1 = L_4;
		goto IL_0026;
	}

IL_0026:
	{
		int32_t L_5 = V_1;
		return L_5;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource__ctor_m5D96AAD5FA2C0CB890B0D90ECC30E418CF06E4D7_gshared (MemoizeSource_tBE0C4BF3BC7E24BACB262D0B2228DA8399895051* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t97A7CEA19B461989D818D347826BF07FB96CA07B MemoizeSource_GetResult_m351B5901EF7FC71C66AF3D46D754A367428ED775_gshared (MemoizeSource_tBE0C4BF3BC7E24BACB262D0B2228DA8399895051* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	ValueTuple_2_t97A7CEA19B461989D818D347826BF07FB96CA07B V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	bool V_4 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->___exception;
		V_1 = (bool)((!(((RuntimeObject*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_4 = __this->___exception;
		NullCheck(L_4);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_4, NULL);
	}

IL_002a:
	{
		ValueTuple_2_t97A7CEA19B461989D818D347826BF07FB96CA07B L_5 = __this->___result;
		V_2 = L_5;
		goto IL_0094;
	}

IL_0033:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008a:
			{
				__this->___source = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)(RuntimeObject*)NULL);
				return;
			}
		});
		try
		{
			try
			{
				RuntimeObject* L_6 = __this->___source;
				int16_t L_7 = ___0_token;
				NullCheck(L_6);
				ValueTuple_2_t97A7CEA19B461989D818D347826BF07FB96CA07B L_8;
				L_8 = InterfaceFuncInvoker1< ValueTuple_2_t97A7CEA19B461989D818D347826BF07FB96CA07B, int16_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_6, L_7);
				__this->___result = L_8;
				__this->___status = (int32_t)1;
				ValueTuple_2_t97A7CEA19B461989D818D347826BF07FB96CA07B L_9 = __this->___result;
				V_2 = L_9;
				goto IL_0094;
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0057_1;
				}
				throw e;
			}

CATCH_0057_1:
			{
				{
					Exception_t* L_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
					V_3 = L_10;
					Exception_t* L_11 = V_3;
					ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_12;
					L_12 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_11, NULL);
					__this->___exception = L_12;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___exception), (void*)L_12);
					Exception_t* L_13 = V_3;
					V_4 = (bool)((!(((RuntimeObject*)(OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_13, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var))))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
					bool L_14 = V_4;
					if (!L_14)
					{
						goto IL_007f_1;
					}
				}
				{
					__this->___status = (int32_t)3;
					goto IL_0088_1;
				}

IL_007f_1:
				{
					__this->___status = (int32_t)2;
				}

IL_0088_1:
				{
					IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
				}
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0094:
	{
		ValueTuple_2_t97A7CEA19B461989D818D347826BF07FB96CA07B L_15 = V_2;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_Cysharp_Threading_Tasks_IUniTaskSource_GetResult_mCFD593146C10BD0D6299DC0B23BF6CE05AB28463_gshared (MemoizeSource_tBE0C4BF3BC7E24BACB262D0B2228DA8399895051* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___0_token;
		ValueTuple_2_t97A7CEA19B461989D818D347826BF07FB96CA07B L_1;
		L_1 = MemoizeSource_GetResult_m351B5901EF7FC71C66AF3D46D754A367428ED775(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_GetStatus_m57474C61B04B920266E07CAF2C7419A7A2B30A2C_gshared (MemoizeSource_tBE0C4BF3BC7E24BACB262D0B2228DA8399895051* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0027;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		int16_t L_4 = ___0_token;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_3, L_4);
		V_1 = L_5;
		goto IL_0027;
	}

IL_0027:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_OnCompleted_mC6FDF58101C98CACC443DA91C02F711C5467C5C8_gshared (MemoizeSource_tBE0C4BF3BC7E24BACB262D0B2228DA8399895051* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = ___0_continuation;
		RuntimeObject* L_3 = ___1_state;
		NullCheck(L_2);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_2, L_3, NULL);
		goto IL_002b;
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->___source;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ___0_continuation;
		RuntimeObject* L_6 = ___1_state;
		int16_t L_7 = ___2_token;
		NullCheck(L_4);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_4, L_5, L_6, L_7);
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_UnsafeGetStatus_m3AC38B5EABD37600D0C0B199C4395AF98F0EE750_gshared (MemoizeSource_tBE0C4BF3BC7E24BACB262D0B2228DA8399895051* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0026;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(3, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
		V_1 = L_4;
		goto IL_0026;
	}

IL_0026:
	{
		int32_t L_5 = V_1;
		return L_5;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource__ctor_m4FF253B143143BA5E8EE808D85A48433B6E12CB1_gshared (MemoizeSource_t78D318D9F5BA39C803E43096B403B20EF6F37CE9* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t9B66A65935FC3A7480FE6E45C87AA4ED045DAE0A MemoizeSource_GetResult_m3D2733A0AD7633B533536DC8BE1258E683E61632_gshared (MemoizeSource_t78D318D9F5BA39C803E43096B403B20EF6F37CE9* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	ValueTuple_2_t9B66A65935FC3A7480FE6E45C87AA4ED045DAE0A V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	bool V_4 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->___exception;
		V_1 = (bool)((!(((RuntimeObject*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_4 = __this->___exception;
		NullCheck(L_4);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_4, NULL);
	}

IL_002a:
	{
		ValueTuple_2_t9B66A65935FC3A7480FE6E45C87AA4ED045DAE0A L_5 = __this->___result;
		V_2 = L_5;
		goto IL_0094;
	}

IL_0033:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008a:
			{
				__this->___source = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)(RuntimeObject*)NULL);
				return;
			}
		});
		try
		{
			try
			{
				RuntimeObject* L_6 = __this->___source;
				int16_t L_7 = ___0_token;
				NullCheck(L_6);
				ValueTuple_2_t9B66A65935FC3A7480FE6E45C87AA4ED045DAE0A L_8;
				L_8 = InterfaceFuncInvoker1< ValueTuple_2_t9B66A65935FC3A7480FE6E45C87AA4ED045DAE0A, int16_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_6, L_7);
				__this->___result = L_8;
				__this->___status = (int32_t)1;
				ValueTuple_2_t9B66A65935FC3A7480FE6E45C87AA4ED045DAE0A L_9 = __this->___result;
				V_2 = L_9;
				goto IL_0094;
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0057_1;
				}
				throw e;
			}

CATCH_0057_1:
			{
				{
					Exception_t* L_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
					V_3 = L_10;
					Exception_t* L_11 = V_3;
					ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_12;
					L_12 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_11, NULL);
					__this->___exception = L_12;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___exception), (void*)L_12);
					Exception_t* L_13 = V_3;
					V_4 = (bool)((!(((RuntimeObject*)(OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_13, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var))))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
					bool L_14 = V_4;
					if (!L_14)
					{
						goto IL_007f_1;
					}
				}
				{
					__this->___status = (int32_t)3;
					goto IL_0088_1;
				}

IL_007f_1:
				{
					__this->___status = (int32_t)2;
				}

IL_0088_1:
				{
					IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
				}
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0094:
	{
		ValueTuple_2_t9B66A65935FC3A7480FE6E45C87AA4ED045DAE0A L_15 = V_2;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_Cysharp_Threading_Tasks_IUniTaskSource_GetResult_m0A10E8F0FB8E351C582F16307F3D61C80F5A796F_gshared (MemoizeSource_t78D318D9F5BA39C803E43096B403B20EF6F37CE9* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___0_token;
		ValueTuple_2_t9B66A65935FC3A7480FE6E45C87AA4ED045DAE0A L_1;
		L_1 = MemoizeSource_GetResult_m3D2733A0AD7633B533536DC8BE1258E683E61632(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_GetStatus_m9A922840BBD29EF7FBB5E08491DAD8ABDC260511_gshared (MemoizeSource_t78D318D9F5BA39C803E43096B403B20EF6F37CE9* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0027;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		int16_t L_4 = ___0_token;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_3, L_4);
		V_1 = L_5;
		goto IL_0027;
	}

IL_0027:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_OnCompleted_m9932775AEFF1EBE493BF52940640FC3FD2AADA48_gshared (MemoizeSource_t78D318D9F5BA39C803E43096B403B20EF6F37CE9* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = ___0_continuation;
		RuntimeObject* L_3 = ___1_state;
		NullCheck(L_2);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_2, L_3, NULL);
		goto IL_002b;
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->___source;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ___0_continuation;
		RuntimeObject* L_6 = ___1_state;
		int16_t L_7 = ___2_token;
		NullCheck(L_4);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_4, L_5, L_6, L_7);
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_UnsafeGetStatus_m1B7356143CEA34DDAA0ADC29159A01A637AD75E8_gshared (MemoizeSource_t78D318D9F5BA39C803E43096B403B20EF6F37CE9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0026;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(3, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
		V_1 = L_4;
		goto IL_0026;
	}

IL_0026:
	{
		int32_t L_5 = V_1;
		return L_5;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource__ctor_m20867B85EFD640EAD0BA005143FC2DB5F46B6974_gshared (MemoizeSource_tF2CD325E9978D8B7905DB1D1D10BC6EF0A4B6D44* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t5A6143A93BAFD4601C2B326EB00E4193D3D47A31 MemoizeSource_GetResult_m04E7B66328AEE9E6C31FB2A9DA471B506D5CCB7F_gshared (MemoizeSource_tF2CD325E9978D8B7905DB1D1D10BC6EF0A4B6D44* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	ValueTuple_2_t5A6143A93BAFD4601C2B326EB00E4193D3D47A31 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	bool V_4 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->___exception;
		V_1 = (bool)((!(((RuntimeObject*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_4 = __this->___exception;
		NullCheck(L_4);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_4, NULL);
	}

IL_002a:
	{
		ValueTuple_2_t5A6143A93BAFD4601C2B326EB00E4193D3D47A31 L_5 = __this->___result;
		V_2 = L_5;
		goto IL_0094;
	}

IL_0033:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008a:
			{
				__this->___source = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)(RuntimeObject*)NULL);
				return;
			}
		});
		try
		{
			try
			{
				RuntimeObject* L_6 = __this->___source;
				int16_t L_7 = ___0_token;
				NullCheck(L_6);
				ValueTuple_2_t5A6143A93BAFD4601C2B326EB00E4193D3D47A31 L_8;
				L_8 = InterfaceFuncInvoker1< ValueTuple_2_t5A6143A93BAFD4601C2B326EB00E4193D3D47A31, int16_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_6, L_7);
				__this->___result = L_8;
				Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&__this->___result))->___Item2))->___Item2))->___Item2))->___Item2), (void*)NULL);
				__this->___status = (int32_t)1;
				ValueTuple_2_t5A6143A93BAFD4601C2B326EB00E4193D3D47A31 L_9 = __this->___result;
				V_2 = L_9;
				goto IL_0094;
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0057_1;
				}
				throw e;
			}

CATCH_0057_1:
			{
				{
					Exception_t* L_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
					V_3 = L_10;
					Exception_t* L_11 = V_3;
					ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_12;
					L_12 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_11, NULL);
					__this->___exception = L_12;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___exception), (void*)L_12);
					Exception_t* L_13 = V_3;
					V_4 = (bool)((!(((RuntimeObject*)(OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_13, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var))))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
					bool L_14 = V_4;
					if (!L_14)
					{
						goto IL_007f_1;
					}
				}
				{
					__this->___status = (int32_t)3;
					goto IL_0088_1;
				}

IL_007f_1:
				{
					__this->___status = (int32_t)2;
				}

IL_0088_1:
				{
					IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
				}
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0094:
	{
		ValueTuple_2_t5A6143A93BAFD4601C2B326EB00E4193D3D47A31 L_15 = V_2;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_Cysharp_Threading_Tasks_IUniTaskSource_GetResult_m79B1EE1F70200457242E16A391DDD6D8C630ABF8_gshared (MemoizeSource_tF2CD325E9978D8B7905DB1D1D10BC6EF0A4B6D44* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___0_token;
		ValueTuple_2_t5A6143A93BAFD4601C2B326EB00E4193D3D47A31 L_1;
		L_1 = MemoizeSource_GetResult_m04E7B66328AEE9E6C31FB2A9DA471B506D5CCB7F(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_GetStatus_mDE70788EA6A49BEA9ACCC27F08CC2C1945CB4301_gshared (MemoizeSource_tF2CD325E9978D8B7905DB1D1D10BC6EF0A4B6D44* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0027;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		int16_t L_4 = ___0_token;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_3, L_4);
		V_1 = L_5;
		goto IL_0027;
	}

IL_0027:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_OnCompleted_m20BE5F61A4CEECA38831964FCF9B5BFAD38C6640_gshared (MemoizeSource_tF2CD325E9978D8B7905DB1D1D10BC6EF0A4B6D44* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = ___0_continuation;
		RuntimeObject* L_3 = ___1_state;
		NullCheck(L_2);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_2, L_3, NULL);
		goto IL_002b;
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->___source;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ___0_continuation;
		RuntimeObject* L_6 = ___1_state;
		int16_t L_7 = ___2_token;
		NullCheck(L_4);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_4, L_5, L_6, L_7);
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_UnsafeGetStatus_mD26D85DA5B321573965C26B3A5D78C10F44657C1_gshared (MemoizeSource_tF2CD325E9978D8B7905DB1D1D10BC6EF0A4B6D44* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0026;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(3, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
		V_1 = L_4;
		goto IL_0026;
	}

IL_0026:
	{
		int32_t L_5 = V_1;
		return L_5;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource__ctor_m96B9EC08DDBF887BC540A851146967FA00AB0FA7_gshared (MemoizeSource_t4C627C0F0DCFB973BDC6E629C4985F69E4658986* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t9CF6F79C7C82BC044136DFB2797E299E226BB8E0 MemoizeSource_GetResult_mA05306101EDE54F9E9EE783E6CC53FD855D3819D_gshared (MemoizeSource_t4C627C0F0DCFB973BDC6E629C4985F69E4658986* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	ValueTuple_2_t9CF6F79C7C82BC044136DFB2797E299E226BB8E0 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	bool V_4 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->___exception;
		V_1 = (bool)((!(((RuntimeObject*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_4 = __this->___exception;
		NullCheck(L_4);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_4, NULL);
	}

IL_002a:
	{
		ValueTuple_2_t9CF6F79C7C82BC044136DFB2797E299E226BB8E0 L_5 = __this->___result;
		V_2 = L_5;
		goto IL_0094;
	}

IL_0033:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008a:
			{
				__this->___source = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)(RuntimeObject*)NULL);
				return;
			}
		});
		try
		{
			try
			{
				RuntimeObject* L_6 = __this->___source;
				int16_t L_7 = ___0_token;
				NullCheck(L_6);
				ValueTuple_2_t9CF6F79C7C82BC044136DFB2797E299E226BB8E0 L_8;
				L_8 = InterfaceFuncInvoker1< ValueTuple_2_t9CF6F79C7C82BC044136DFB2797E299E226BB8E0, int16_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_6, L_7);
				__this->___result = L_8;
				__this->___status = (int32_t)1;
				ValueTuple_2_t9CF6F79C7C82BC044136DFB2797E299E226BB8E0 L_9 = __this->___result;
				V_2 = L_9;
				goto IL_0094;
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0057_1;
				}
				throw e;
			}

CATCH_0057_1:
			{
				{
					Exception_t* L_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
					V_3 = L_10;
					Exception_t* L_11 = V_3;
					ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_12;
					L_12 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_11, NULL);
					__this->___exception = L_12;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___exception), (void*)L_12);
					Exception_t* L_13 = V_3;
					V_4 = (bool)((!(((RuntimeObject*)(OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_13, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var))))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
					bool L_14 = V_4;
					if (!L_14)
					{
						goto IL_007f_1;
					}
				}
				{
					__this->___status = (int32_t)3;
					goto IL_0088_1;
				}

IL_007f_1:
				{
					__this->___status = (int32_t)2;
				}

IL_0088_1:
				{
					IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
				}
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0094:
	{
		ValueTuple_2_t9CF6F79C7C82BC044136DFB2797E299E226BB8E0 L_15 = V_2;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_Cysharp_Threading_Tasks_IUniTaskSource_GetResult_mCB18CFE0F9644E670EAE5185FE63DA8AB39B71CD_gshared (MemoizeSource_t4C627C0F0DCFB973BDC6E629C4985F69E4658986* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___0_token;
		ValueTuple_2_t9CF6F79C7C82BC044136DFB2797E299E226BB8E0 L_1;
		L_1 = MemoizeSource_GetResult_mA05306101EDE54F9E9EE783E6CC53FD855D3819D(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_GetStatus_mA1D4326B789366FA47F744D099063FCD9D86FCF6_gshared (MemoizeSource_t4C627C0F0DCFB973BDC6E629C4985F69E4658986* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0027;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		int16_t L_4 = ___0_token;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_3, L_4);
		V_1 = L_5;
		goto IL_0027;
	}

IL_0027:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_OnCompleted_m12E24895B0DDB24E1D68AF16917AE0B99FBB2C2B_gshared (MemoizeSource_t4C627C0F0DCFB973BDC6E629C4985F69E4658986* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = ___0_continuation;
		RuntimeObject* L_3 = ___1_state;
		NullCheck(L_2);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_2, L_3, NULL);
		goto IL_002b;
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->___source;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ___0_continuation;
		RuntimeObject* L_6 = ___1_state;
		int16_t L_7 = ___2_token;
		NullCheck(L_4);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_4, L_5, L_6, L_7);
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_UnsafeGetStatus_mE3DD2EC045082E7C942396D4742A869A62F09AC8_gshared (MemoizeSource_t4C627C0F0DCFB973BDC6E629C4985F69E4658986* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0026;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(3, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
		V_1 = L_4;
		goto IL_0026;
	}

IL_0026:
	{
		int32_t L_5 = V_1;
		return L_5;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource__ctor_m25FB94F9F86876BE040DF2A6A4FC77C7DB2D36B1_gshared (MemoizeSource_tEFC28095C5428DF2E08610353C11E5105050BF35* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t12C85C8C55F6FB3E8A592CA974C972FD46DA8693 MemoizeSource_GetResult_m685E5A6E142DF7E1584F9F4AD4D414F3A4B75CB4_gshared (MemoizeSource_tEFC28095C5428DF2E08610353C11E5105050BF35* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	ValueTuple_2_t12C85C8C55F6FB3E8A592CA974C972FD46DA8693 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	bool V_4 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->___exception;
		V_1 = (bool)((!(((RuntimeObject*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_4 = __this->___exception;
		NullCheck(L_4);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_4, NULL);
	}

IL_002a:
	{
		ValueTuple_2_t12C85C8C55F6FB3E8A592CA974C972FD46DA8693 L_5 = __this->___result;
		V_2 = L_5;
		goto IL_0094;
	}

IL_0033:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008a:
			{
				__this->___source = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)(RuntimeObject*)NULL);
				return;
			}
		});
		try
		{
			try
			{
				RuntimeObject* L_6 = __this->___source;
				int16_t L_7 = ___0_token;
				NullCheck(L_6);
				ValueTuple_2_t12C85C8C55F6FB3E8A592CA974C972FD46DA8693 L_8;
				L_8 = InterfaceFuncInvoker1< ValueTuple_2_t12C85C8C55F6FB3E8A592CA974C972FD46DA8693, int16_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_6, L_7);
				__this->___result = L_8;
				Il2CppCodeGenWriteBarrier((void**)&((&((&((&((&(((&__this->___result))->___Item2))->___Item2))->___Item2))->___Item2))->___m_Operation), (void*)NULL);
				__this->___status = (int32_t)1;
				ValueTuple_2_t12C85C8C55F6FB3E8A592CA974C972FD46DA8693 L_9 = __this->___result;
				V_2 = L_9;
				goto IL_0094;
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0057_1;
				}
				throw e;
			}

CATCH_0057_1:
			{
				{
					Exception_t* L_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
					V_3 = L_10;
					Exception_t* L_11 = V_3;
					ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_12;
					L_12 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_11, NULL);
					__this->___exception = L_12;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___exception), (void*)L_12);
					Exception_t* L_13 = V_3;
					V_4 = (bool)((!(((RuntimeObject*)(OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_13, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var))))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
					bool L_14 = V_4;
					if (!L_14)
					{
						goto IL_007f_1;
					}
				}
				{
					__this->___status = (int32_t)3;
					goto IL_0088_1;
				}

IL_007f_1:
				{
					__this->___status = (int32_t)2;
				}

IL_0088_1:
				{
					IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
				}
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0094:
	{
		ValueTuple_2_t12C85C8C55F6FB3E8A592CA974C972FD46DA8693 L_15 = V_2;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_Cysharp_Threading_Tasks_IUniTaskSource_GetResult_mBE31875D79A0CFDDFBB92863C4992314D309BC02_gshared (MemoizeSource_tEFC28095C5428DF2E08610353C11E5105050BF35* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___0_token;
		ValueTuple_2_t12C85C8C55F6FB3E8A592CA974C972FD46DA8693 L_1;
		L_1 = MemoizeSource_GetResult_m685E5A6E142DF7E1584F9F4AD4D414F3A4B75CB4(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_GetStatus_m0FD7A9E2904064A1BEDC911581B1C939972B82DF_gshared (MemoizeSource_tEFC28095C5428DF2E08610353C11E5105050BF35* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0027;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		int16_t L_4 = ___0_token;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_3, L_4);
		V_1 = L_5;
		goto IL_0027;
	}

IL_0027:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_OnCompleted_mE05B3D89DB54A8F9E3DCC77D1CEFE6BF29F91488_gshared (MemoizeSource_tEFC28095C5428DF2E08610353C11E5105050BF35* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = ___0_continuation;
		RuntimeObject* L_3 = ___1_state;
		NullCheck(L_2);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_2, L_3, NULL);
		goto IL_002b;
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->___source;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ___0_continuation;
		RuntimeObject* L_6 = ___1_state;
		int16_t L_7 = ___2_token;
		NullCheck(L_4);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_4, L_5, L_6, L_7);
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_UnsafeGetStatus_m29FD2EDD1521E98F5200A921CA20593F4ADE506F_gshared (MemoizeSource_tEFC28095C5428DF2E08610353C11E5105050BF35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0026;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(3, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
		V_1 = L_4;
		goto IL_0026;
	}

IL_0026:
	{
		int32_t L_5 = V_1;
		return L_5;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource__ctor_m12042F915E64B173DF4FE8FA136999CA7A10FCB1_gshared (MemoizeSource_tFBA14165BCBCFC59D01EC962C36F4F8166B9046A* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t5D1952D15E56B34C82F917988745983CF8A3126A MemoizeSource_GetResult_mC70906C573C4F5CD86642349E73B8FB2483DAC83_gshared (MemoizeSource_tFBA14165BCBCFC59D01EC962C36F4F8166B9046A* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	ValueTuple_2_t5D1952D15E56B34C82F917988745983CF8A3126A V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	bool V_4 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->___exception;
		V_1 = (bool)((!(((RuntimeObject*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_4 = __this->___exception;
		NullCheck(L_4);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_4, NULL);
	}

IL_002a:
	{
		ValueTuple_2_t5D1952D15E56B34C82F917988745983CF8A3126A L_5 = __this->___result;
		V_2 = L_5;
		goto IL_0094;
	}

IL_0033:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008a:
			{
				__this->___source = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)(RuntimeObject*)NULL);
				return;
			}
		});
		try
		{
			try
			{
				RuntimeObject* L_6 = __this->___source;
				int16_t L_7 = ___0_token;
				NullCheck(L_6);
				ValueTuple_2_t5D1952D15E56B34C82F917988745983CF8A3126A L_8;
				L_8 = InterfaceFuncInvoker1< ValueTuple_2_t5D1952D15E56B34C82F917988745983CF8A3126A, int16_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_6, L_7);
				__this->___result = L_8;
				__this->___status = (int32_t)1;
				ValueTuple_2_t5D1952D15E56B34C82F917988745983CF8A3126A L_9 = __this->___result;
				V_2 = L_9;
				goto IL_0094;
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0057_1;
				}
				throw e;
			}

CATCH_0057_1:
			{
				{
					Exception_t* L_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
					V_3 = L_10;
					Exception_t* L_11 = V_3;
					ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_12;
					L_12 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_11, NULL);
					__this->___exception = L_12;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___exception), (void*)L_12);
					Exception_t* L_13 = V_3;
					V_4 = (bool)((!(((RuntimeObject*)(OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_13, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var))))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
					bool L_14 = V_4;
					if (!L_14)
					{
						goto IL_007f_1;
					}
				}
				{
					__this->___status = (int32_t)3;
					goto IL_0088_1;
				}

IL_007f_1:
				{
					__this->___status = (int32_t)2;
				}

IL_0088_1:
				{
					IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
				}
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0094:
	{
		ValueTuple_2_t5D1952D15E56B34C82F917988745983CF8A3126A L_15 = V_2;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_Cysharp_Threading_Tasks_IUniTaskSource_GetResult_mAA13AEB07B68D0BA26D490CD43DC8EF2860561B3_gshared (MemoizeSource_tFBA14165BCBCFC59D01EC962C36F4F8166B9046A* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___0_token;
		ValueTuple_2_t5D1952D15E56B34C82F917988745983CF8A3126A L_1;
		L_1 = MemoizeSource_GetResult_mC70906C573C4F5CD86642349E73B8FB2483DAC83(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_GetStatus_m36AFD3C00061B983DC2B6E0949C38445C17BA604_gshared (MemoizeSource_tFBA14165BCBCFC59D01EC962C36F4F8166B9046A* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0027;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		int16_t L_4 = ___0_token;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_3, L_4);
		V_1 = L_5;
		goto IL_0027;
	}

IL_0027:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_OnCompleted_m9CD71E53F47553DC03DE005C0986A6CE75012CC8_gshared (MemoizeSource_tFBA14165BCBCFC59D01EC962C36F4F8166B9046A* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = ___0_continuation;
		RuntimeObject* L_3 = ___1_state;
		NullCheck(L_2);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_2, L_3, NULL);
		goto IL_002b;
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->___source;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ___0_continuation;
		RuntimeObject* L_6 = ___1_state;
		int16_t L_7 = ___2_token;
		NullCheck(L_4);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_4, L_5, L_6, L_7);
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_UnsafeGetStatus_mD3380C25CEDFE312FA73452A5DFC049FD05950E0_gshared (MemoizeSource_tFBA14165BCBCFC59D01EC962C36F4F8166B9046A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0026;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(3, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
		V_1 = L_4;
		goto IL_0026;
	}

IL_0026:
	{
		int32_t L_5 = V_1;
		return L_5;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource__ctor_mFEE43A02671C082BAC6B1EAC41F4C787C9EBC36A_gshared (MemoizeSource_tB0CAE3B009C8E612B0C18D814360A44A8A148009* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t71BD02D0D3F9D07AC18F3B68DDA577AFF1A3F365 MemoizeSource_GetResult_m760F9930CE7F2AF258DA0E6E0A039E9BED18A134_gshared (MemoizeSource_tB0CAE3B009C8E612B0C18D814360A44A8A148009* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	ValueTuple_2_t71BD02D0D3F9D07AC18F3B68DDA577AFF1A3F365 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	bool V_4 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->___exception;
		V_1 = (bool)((!(((RuntimeObject*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_4 = __this->___exception;
		NullCheck(L_4);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_4, NULL);
	}

IL_002a:
	{
		ValueTuple_2_t71BD02D0D3F9D07AC18F3B68DDA577AFF1A3F365 L_5 = __this->___result;
		V_2 = L_5;
		goto IL_0094;
	}

IL_0033:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008a:
			{
				__this->___source = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)(RuntimeObject*)NULL);
				return;
			}
		});
		try
		{
			try
			{
				RuntimeObject* L_6 = __this->___source;
				int16_t L_7 = ___0_token;
				NullCheck(L_6);
				ValueTuple_2_t71BD02D0D3F9D07AC18F3B68DDA577AFF1A3F365 L_8;
				L_8 = InterfaceFuncInvoker1< ValueTuple_2_t71BD02D0D3F9D07AC18F3B68DDA577AFF1A3F365, int16_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_6, L_7);
				__this->___result = L_8;
				Il2CppCodeGenWriteBarrier((void**)&((&((&((&((&(((&__this->___result))->___Item2))->___Item2))->___Item2))->___Item2))->___source), (void*)NULL);
				__this->___status = (int32_t)1;
				ValueTuple_2_t71BD02D0D3F9D07AC18F3B68DDA577AFF1A3F365 L_9 = __this->___result;
				V_2 = L_9;
				goto IL_0094;
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0057_1;
				}
				throw e;
			}

CATCH_0057_1:
			{
				{
					Exception_t* L_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
					V_3 = L_10;
					Exception_t* L_11 = V_3;
					ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_12;
					L_12 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_11, NULL);
					__this->___exception = L_12;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___exception), (void*)L_12);
					Exception_t* L_13 = V_3;
					V_4 = (bool)((!(((RuntimeObject*)(OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_13, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var))))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
					bool L_14 = V_4;
					if (!L_14)
					{
						goto IL_007f_1;
					}
				}
				{
					__this->___status = (int32_t)3;
					goto IL_0088_1;
				}

IL_007f_1:
				{
					__this->___status = (int32_t)2;
				}

IL_0088_1:
				{
					IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
				}
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0094:
	{
		ValueTuple_2_t71BD02D0D3F9D07AC18F3B68DDA577AFF1A3F365 L_15 = V_2;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_Cysharp_Threading_Tasks_IUniTaskSource_GetResult_m25DDD5207AA95D46DAFBA546FC51162978D93B23_gshared (MemoizeSource_tB0CAE3B009C8E612B0C18D814360A44A8A148009* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___0_token;
		ValueTuple_2_t71BD02D0D3F9D07AC18F3B68DDA577AFF1A3F365 L_1;
		L_1 = MemoizeSource_GetResult_m760F9930CE7F2AF258DA0E6E0A039E9BED18A134(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_GetStatus_m454A531106E7663F6675E9B6FC8FD73EF579DC36_gshared (MemoizeSource_tB0CAE3B009C8E612B0C18D814360A44A8A148009* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0027;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		int16_t L_4 = ___0_token;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_3, L_4);
		V_1 = L_5;
		goto IL_0027;
	}

IL_0027:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_OnCompleted_mD73A737910AA4147EBB4D38753779777267A6D26_gshared (MemoizeSource_tB0CAE3B009C8E612B0C18D814360A44A8A148009* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = ___0_continuation;
		RuntimeObject* L_3 = ___1_state;
		NullCheck(L_2);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_2, L_3, NULL);
		goto IL_002b;
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->___source;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ___0_continuation;
		RuntimeObject* L_6 = ___1_state;
		int16_t L_7 = ___2_token;
		NullCheck(L_4);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_4, L_5, L_6, L_7);
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_UnsafeGetStatus_m5E40452535B6D9BB6B8B57CEF92BEF95A93068A5_gshared (MemoizeSource_tB0CAE3B009C8E612B0C18D814360A44A8A148009* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0026;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(3, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
		V_1 = L_4;
		goto IL_0026;
	}

IL_0026:
	{
		int32_t L_5 = V_1;
		return L_5;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource__ctor_mA091B03E6A878D20E6013EF784802DDF5C0E1792_gshared (MemoizeSource_tFEFF99B6CA94EC734E787DC51DD166ED1D95FC77* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tD513E55490BCB12535D03A77FDAD2DC66E9760A7 MemoizeSource_GetResult_mFF2E5CB42FEDA52A68A5DBF88899B5D6CBE979B8_gshared (MemoizeSource_tFEFF99B6CA94EC734E787DC51DD166ED1D95FC77* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	ValueTuple_2_tD513E55490BCB12535D03A77FDAD2DC66E9760A7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	bool V_4 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->___exception;
		V_1 = (bool)((!(((RuntimeObject*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_4 = __this->___exception;
		NullCheck(L_4);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_4, NULL);
	}

IL_002a:
	{
		ValueTuple_2_tD513E55490BCB12535D03A77FDAD2DC66E9760A7 L_5 = __this->___result;
		V_2 = L_5;
		goto IL_0094;
	}

IL_0033:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008a:
			{
				__this->___source = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)(RuntimeObject*)NULL);
				return;
			}
		});
		try
		{
			try
			{
				RuntimeObject* L_6 = __this->___source;
				int16_t L_7 = ___0_token;
				NullCheck(L_6);
				ValueTuple_2_tD513E55490BCB12535D03A77FDAD2DC66E9760A7 L_8;
				L_8 = InterfaceFuncInvoker1< ValueTuple_2_tD513E55490BCB12535D03A77FDAD2DC66E9760A7, int16_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_6, L_7);
				__this->___result = L_8;
				__this->___status = (int32_t)1;
				ValueTuple_2_tD513E55490BCB12535D03A77FDAD2DC66E9760A7 L_9 = __this->___result;
				V_2 = L_9;
				goto IL_0094;
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0057_1;
				}
				throw e;
			}

CATCH_0057_1:
			{
				{
					Exception_t* L_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
					V_3 = L_10;
					Exception_t* L_11 = V_3;
					ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_12;
					L_12 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_11, NULL);
					__this->___exception = L_12;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___exception), (void*)L_12);
					Exception_t* L_13 = V_3;
					V_4 = (bool)((!(((RuntimeObject*)(OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_13, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var))))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
					bool L_14 = V_4;
					if (!L_14)
					{
						goto IL_007f_1;
					}
				}
				{
					__this->___status = (int32_t)3;
					goto IL_0088_1;
				}

IL_007f_1:
				{
					__this->___status = (int32_t)2;
				}

IL_0088_1:
				{
					IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
				}
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0094:
	{
		ValueTuple_2_tD513E55490BCB12535D03A77FDAD2DC66E9760A7 L_15 = V_2;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_Cysharp_Threading_Tasks_IUniTaskSource_GetResult_m2ED1E16A4FDBCB286FF8F3337343695CDDB36D5D_gshared (MemoizeSource_tFEFF99B6CA94EC734E787DC51DD166ED1D95FC77* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___0_token;
		ValueTuple_2_tD513E55490BCB12535D03A77FDAD2DC66E9760A7 L_1;
		L_1 = MemoizeSource_GetResult_mFF2E5CB42FEDA52A68A5DBF88899B5D6CBE979B8(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_GetStatus_m05FBE802AFDB398278C7C5210FD60FAF757C6044_gshared (MemoizeSource_tFEFF99B6CA94EC734E787DC51DD166ED1D95FC77* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0027;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		int16_t L_4 = ___0_token;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_3, L_4);
		V_1 = L_5;
		goto IL_0027;
	}

IL_0027:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_OnCompleted_mA3392855008671FF430BD22A5E69EBCE5A62B5EF_gshared (MemoizeSource_tFEFF99B6CA94EC734E787DC51DD166ED1D95FC77* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = ___0_continuation;
		RuntimeObject* L_3 = ___1_state;
		NullCheck(L_2);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_2, L_3, NULL);
		goto IL_002b;
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->___source;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ___0_continuation;
		RuntimeObject* L_6 = ___1_state;
		int16_t L_7 = ___2_token;
		NullCheck(L_4);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_4, L_5, L_6, L_7);
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_UnsafeGetStatus_mD90A10006786924441B5D1EC7FA9036C4A22D095_gshared (MemoizeSource_tFEFF99B6CA94EC734E787DC51DD166ED1D95FC77* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0026;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(3, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
		V_1 = L_4;
		goto IL_0026;
	}

IL_0026:
	{
		int32_t L_5 = V_1;
		return L_5;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource__ctor_m9846B6E2AF29C41F812DE5FCC61051F80C22C5DE_gshared (MemoizeSource_tA496F9380C7AF07E3422F84834B64735B26DC573* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tD892015C67259A7424294FA5093B451BF8AA43CD MemoizeSource_GetResult_mC85661224867BB90C79063481862FC1BE3C77EC0_gshared (MemoizeSource_tA496F9380C7AF07E3422F84834B64735B26DC573* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	ValueTuple_2_tD892015C67259A7424294FA5093B451BF8AA43CD V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	bool V_4 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->___exception;
		V_1 = (bool)((!(((RuntimeObject*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_4 = __this->___exception;
		NullCheck(L_4);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_4, NULL);
	}

IL_002a:
	{
		ValueTuple_2_tD892015C67259A7424294FA5093B451BF8AA43CD L_5 = __this->___result;
		V_2 = L_5;
		goto IL_0094;
	}

IL_0033:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008a:
			{
				__this->___source = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)(RuntimeObject*)NULL);
				return;
			}
		});
		try
		{
			try
			{
				RuntimeObject* L_6 = __this->___source;
				int16_t L_7 = ___0_token;
				NullCheck(L_6);
				ValueTuple_2_tD892015C67259A7424294FA5093B451BF8AA43CD L_8;
				L_8 = InterfaceFuncInvoker1< ValueTuple_2_tD892015C67259A7424294FA5093B451BF8AA43CD, int16_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_6, L_7);
				__this->___result = L_8;
				Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&__this->___result))->___Item2))->___Item2))->___Item2))->___Item1), (void*)NULL);
				__this->___status = (int32_t)1;
				ValueTuple_2_tD892015C67259A7424294FA5093B451BF8AA43CD L_9 = __this->___result;
				V_2 = L_9;
				goto IL_0094;
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0057_1;
				}
				throw e;
			}

CATCH_0057_1:
			{
				{
					Exception_t* L_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
					V_3 = L_10;
					Exception_t* L_11 = V_3;
					ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_12;
					L_12 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_11, NULL);
					__this->___exception = L_12;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___exception), (void*)L_12);
					Exception_t* L_13 = V_3;
					V_4 = (bool)((!(((RuntimeObject*)(OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_13, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var))))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
					bool L_14 = V_4;
					if (!L_14)
					{
						goto IL_007f_1;
					}
				}
				{
					__this->___status = (int32_t)3;
					goto IL_0088_1;
				}

IL_007f_1:
				{
					__this->___status = (int32_t)2;
				}

IL_0088_1:
				{
					IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
				}
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0094:
	{
		ValueTuple_2_tD892015C67259A7424294FA5093B451BF8AA43CD L_15 = V_2;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_Cysharp_Threading_Tasks_IUniTaskSource_GetResult_mDDAF9FD3F617D5AA50ABE4130AABBCF85ADDC16F_gshared (MemoizeSource_tA496F9380C7AF07E3422F84834B64735B26DC573* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___0_token;
		ValueTuple_2_tD892015C67259A7424294FA5093B451BF8AA43CD L_1;
		L_1 = MemoizeSource_GetResult_mC85661224867BB90C79063481862FC1BE3C77EC0(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_GetStatus_m60FF725DFF16333EE65A274E45E49F6E717D61F2_gshared (MemoizeSource_tA496F9380C7AF07E3422F84834B64735B26DC573* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0027;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		int16_t L_4 = ___0_token;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_3, L_4);
		V_1 = L_5;
		goto IL_0027;
	}

IL_0027:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_OnCompleted_m4F87B98B6900C3C36206D8E1AB1F9492D163E086_gshared (MemoizeSource_tA496F9380C7AF07E3422F84834B64735B26DC573* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = ___0_continuation;
		RuntimeObject* L_3 = ___1_state;
		NullCheck(L_2);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_2, L_3, NULL);
		goto IL_002b;
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->___source;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ___0_continuation;
		RuntimeObject* L_6 = ___1_state;
		int16_t L_7 = ___2_token;
		NullCheck(L_4);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_4, L_5, L_6, L_7);
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_UnsafeGetStatus_m16FB9739449915D60F0FA69DE9717C5AF6FAFFA8_gshared (MemoizeSource_tA496F9380C7AF07E3422F84834B64735B26DC573* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0026;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(3, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
		V_1 = L_4;
		goto IL_0026;
	}

IL_0026:
	{
		int32_t L_5 = V_1;
		return L_5;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource__ctor_mD0A4C2665EE441AC58462CA27383864CE0EF6F2B_gshared (MemoizeSource_tA63F286F2271661711033949CD911948ABD8CB73* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tB5CA42715211C37328A84B7ADB9D11C32D8EB35B MemoizeSource_GetResult_m19A9064965128E829BB32396781D5645DAB25D67_gshared (MemoizeSource_tA63F286F2271661711033949CD911948ABD8CB73* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	ValueTuple_2_tB5CA42715211C37328A84B7ADB9D11C32D8EB35B V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	bool V_4 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->___exception;
		V_1 = (bool)((!(((RuntimeObject*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_4 = __this->___exception;
		NullCheck(L_4);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_4, NULL);
	}

IL_002a:
	{
		ValueTuple_2_tB5CA42715211C37328A84B7ADB9D11C32D8EB35B L_5 = __this->___result;
		V_2 = L_5;
		goto IL_0094;
	}

IL_0033:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008a:
			{
				__this->___source = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)(RuntimeObject*)NULL);
				return;
			}
		});
		try
		{
			try
			{
				RuntimeObject* L_6 = __this->___source;
				int16_t L_7 = ___0_token;
				NullCheck(L_6);
				ValueTuple_2_tB5CA42715211C37328A84B7ADB9D11C32D8EB35B L_8;
				L_8 = InterfaceFuncInvoker1< ValueTuple_2_tB5CA42715211C37328A84B7ADB9D11C32D8EB35B, int16_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_6, L_7);
				__this->___result = L_8;
				Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&__this->___result))->___Item2))->___Item2))->___Item2))->___Item1), (void*)NULL);
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&__this->___result))->___Item2))->___Item2))->___Item2))->___Item2), (void*)NULL);
				#endif
				__this->___status = (int32_t)1;
				ValueTuple_2_tB5CA42715211C37328A84B7ADB9D11C32D8EB35B L_9 = __this->___result;
				V_2 = L_9;
				goto IL_0094;
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0057_1;
				}
				throw e;
			}

CATCH_0057_1:
			{
				{
					Exception_t* L_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
					V_3 = L_10;
					Exception_t* L_11 = V_3;
					ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_12;
					L_12 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_11, NULL);
					__this->___exception = L_12;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___exception), (void*)L_12);
					Exception_t* L_13 = V_3;
					V_4 = (bool)((!(((RuntimeObject*)(OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_13, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var))))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
					bool L_14 = V_4;
					if (!L_14)
					{
						goto IL_007f_1;
					}
				}
				{
					__this->___status = (int32_t)3;
					goto IL_0088_1;
				}

IL_007f_1:
				{
					__this->___status = (int32_t)2;
				}

IL_0088_1:
				{
					IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
				}
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0094:
	{
		ValueTuple_2_tB5CA42715211C37328A84B7ADB9D11C32D8EB35B L_15 = V_2;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_Cysharp_Threading_Tasks_IUniTaskSource_GetResult_mBF9CC11BC87FF649946355E761EA7AB2EC893067_gshared (MemoizeSource_tA63F286F2271661711033949CD911948ABD8CB73* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___0_token;
		ValueTuple_2_tB5CA42715211C37328A84B7ADB9D11C32D8EB35B L_1;
		L_1 = MemoizeSource_GetResult_m19A9064965128E829BB32396781D5645DAB25D67(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_GetStatus_m77788E8865A95F53326FEC077B6A6E84F52955CD_gshared (MemoizeSource_tA63F286F2271661711033949CD911948ABD8CB73* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0027;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		int16_t L_4 = ___0_token;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_3, L_4);
		V_1 = L_5;
		goto IL_0027;
	}

IL_0027:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_OnCompleted_m9D094E1743C25B0FEB2E83D01068187C4930F050_gshared (MemoizeSource_tA63F286F2271661711033949CD911948ABD8CB73* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = ___0_continuation;
		RuntimeObject* L_3 = ___1_state;
		NullCheck(L_2);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_2, L_3, NULL);
		goto IL_002b;
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->___source;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ___0_continuation;
		RuntimeObject* L_6 = ___1_state;
		int16_t L_7 = ___2_token;
		NullCheck(L_4);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_4, L_5, L_6, L_7);
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_UnsafeGetStatus_mE01E3B64581BBBA9CBBE51060B3D591E6709FF87_gshared (MemoizeSource_tA63F286F2271661711033949CD911948ABD8CB73* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0026;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(3, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
		V_1 = L_4;
		goto IL_0026;
	}

IL_0026:
	{
		int32_t L_5 = V_1;
		return L_5;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource__ctor_mB5388D9C8D695D32E38907C7E73C2DE8B26D90C3_gshared (MemoizeSource_tCA4B4611DF38506DD4237D55981135B1E0F97199* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t52E63268B5601A67D99E98851A669CC2902A98CC MemoizeSource_GetResult_m20FD6E1839F74F2D896656573B54FCE86DD18F0B_gshared (MemoizeSource_tCA4B4611DF38506DD4237D55981135B1E0F97199* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	ValueTuple_2_t52E63268B5601A67D99E98851A669CC2902A98CC V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	bool V_4 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->___exception;
		V_1 = (bool)((!(((RuntimeObject*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_4 = __this->___exception;
		NullCheck(L_4);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_4, NULL);
	}

IL_002a:
	{
		ValueTuple_2_t52E63268B5601A67D99E98851A669CC2902A98CC L_5 = __this->___result;
		V_2 = L_5;
		goto IL_0094;
	}

IL_0033:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008a:
			{
				__this->___source = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)(RuntimeObject*)NULL);
				return;
			}
		});
		try
		{
			try
			{
				RuntimeObject* L_6 = __this->___source;
				int16_t L_7 = ___0_token;
				NullCheck(L_6);
				ValueTuple_2_t52E63268B5601A67D99E98851A669CC2902A98CC L_8;
				L_8 = InterfaceFuncInvoker1< ValueTuple_2_t52E63268B5601A67D99E98851A669CC2902A98CC, int16_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_6, L_7);
				__this->___result = L_8;
				__this->___status = (int32_t)1;
				ValueTuple_2_t52E63268B5601A67D99E98851A669CC2902A98CC L_9 = __this->___result;
				V_2 = L_9;
				goto IL_0094;
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0057_1;
				}
				throw e;
			}

CATCH_0057_1:
			{
				{
					Exception_t* L_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
					V_3 = L_10;
					Exception_t* L_11 = V_3;
					ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_12;
					L_12 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_11, NULL);
					__this->___exception = L_12;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___exception), (void*)L_12);
					Exception_t* L_13 = V_3;
					V_4 = (bool)((!(((RuntimeObject*)(OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_13, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var))))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
					bool L_14 = V_4;
					if (!L_14)
					{
						goto IL_007f_1;
					}
				}
				{
					__this->___status = (int32_t)3;
					goto IL_0088_1;
				}

IL_007f_1:
				{
					__this->___status = (int32_t)2;
				}

IL_0088_1:
				{
					IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
				}
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0094:
	{
		ValueTuple_2_t52E63268B5601A67D99E98851A669CC2902A98CC L_15 = V_2;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_Cysharp_Threading_Tasks_IUniTaskSource_GetResult_mA751835F65985A76D75449D07B9BFAE050158BEB_gshared (MemoizeSource_tCA4B4611DF38506DD4237D55981135B1E0F97199* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___0_token;
		ValueTuple_2_t52E63268B5601A67D99E98851A669CC2902A98CC L_1;
		L_1 = MemoizeSource_GetResult_m20FD6E1839F74F2D896656573B54FCE86DD18F0B(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_GetStatus_m101BA64B86703169AC2A49CAA864D59A3CEF6001_gshared (MemoizeSource_tCA4B4611DF38506DD4237D55981135B1E0F97199* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0027;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		int16_t L_4 = ___0_token;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_3, L_4);
		V_1 = L_5;
		goto IL_0027;
	}

IL_0027:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_OnCompleted_m9E2D6015CF62B067C6821A04936D260ABE996377_gshared (MemoizeSource_tCA4B4611DF38506DD4237D55981135B1E0F97199* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = ___0_continuation;
		RuntimeObject* L_3 = ___1_state;
		NullCheck(L_2);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_2, L_3, NULL);
		goto IL_002b;
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->___source;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ___0_continuation;
		RuntimeObject* L_6 = ___1_state;
		int16_t L_7 = ___2_token;
		NullCheck(L_4);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_4, L_5, L_6, L_7);
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_UnsafeGetStatus_m646FDCEFC6B161818A76F6CE8163A81B2B940A68_gshared (MemoizeSource_tCA4B4611DF38506DD4237D55981135B1E0F97199* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0026;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(3, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
		V_1 = L_4;
		goto IL_0026;
	}

IL_0026:
	{
		int32_t L_5 = V_1;
		return L_5;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource__ctor_m325AB475A4CCDD76B397227238B436FD06BB7899_gshared (MemoizeSource_t1184411DF9A67FC31DCB16211873336ACFD4C4C2* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tB862623003F51B20CE4E36B2AE1BCF1A3DB5A5A4 MemoizeSource_GetResult_m2BE28BA9B898C96C23992A6AA791000201B51E27_gshared (MemoizeSource_t1184411DF9A67FC31DCB16211873336ACFD4C4C2* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	ValueTuple_2_tB862623003F51B20CE4E36B2AE1BCF1A3DB5A5A4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	bool V_4 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->___exception;
		V_1 = (bool)((!(((RuntimeObject*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_4 = __this->___exception;
		NullCheck(L_4);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_4, NULL);
	}

IL_002a:
	{
		ValueTuple_2_tB862623003F51B20CE4E36B2AE1BCF1A3DB5A5A4 L_5 = __this->___result;
		V_2 = L_5;
		goto IL_0094;
	}

IL_0033:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008a:
			{
				__this->___source = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)(RuntimeObject*)NULL);
				return;
			}
		});
		try
		{
			try
			{
				RuntimeObject* L_6 = __this->___source;
				int16_t L_7 = ___0_token;
				NullCheck(L_6);
				ValueTuple_2_tB862623003F51B20CE4E36B2AE1BCF1A3DB5A5A4 L_8;
				L_8 = InterfaceFuncInvoker1< ValueTuple_2_tB862623003F51B20CE4E36B2AE1BCF1A3DB5A5A4, int16_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_6, L_7);
				__this->___result = L_8;
				__this->___status = (int32_t)1;
				ValueTuple_2_tB862623003F51B20CE4E36B2AE1BCF1A3DB5A5A4 L_9 = __this->___result;
				V_2 = L_9;
				goto IL_0094;
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0057_1;
				}
				throw e;
			}

CATCH_0057_1:
			{
				{
					Exception_t* L_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
					V_3 = L_10;
					Exception_t* L_11 = V_3;
					ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_12;
					L_12 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_11, NULL);
					__this->___exception = L_12;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___exception), (void*)L_12);
					Exception_t* L_13 = V_3;
					V_4 = (bool)((!(((RuntimeObject*)(OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_13, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var))))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
					bool L_14 = V_4;
					if (!L_14)
					{
						goto IL_007f_1;
					}
				}
				{
					__this->___status = (int32_t)3;
					goto IL_0088_1;
				}

IL_007f_1:
				{
					__this->___status = (int32_t)2;
				}

IL_0088_1:
				{
					IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
				}
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0094:
	{
		ValueTuple_2_tB862623003F51B20CE4E36B2AE1BCF1A3DB5A5A4 L_15 = V_2;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_Cysharp_Threading_Tasks_IUniTaskSource_GetResult_m239768087CDBA217B562238E7BD5376B6D65F44D_gshared (MemoizeSource_t1184411DF9A67FC31DCB16211873336ACFD4C4C2* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___0_token;
		ValueTuple_2_tB862623003F51B20CE4E36B2AE1BCF1A3DB5A5A4 L_1;
		L_1 = MemoizeSource_GetResult_m2BE28BA9B898C96C23992A6AA791000201B51E27(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_GetStatus_mB58EDA407CA1AC5C41331584E34CD3E55FA301CA_gshared (MemoizeSource_t1184411DF9A67FC31DCB16211873336ACFD4C4C2* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0027;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		int16_t L_4 = ___0_token;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_3, L_4);
		V_1 = L_5;
		goto IL_0027;
	}

IL_0027:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_OnCompleted_mAE84F3F4E7C22E5FBCA957F614FAA2079681E198_gshared (MemoizeSource_t1184411DF9A67FC31DCB16211873336ACFD4C4C2* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = ___0_continuation;
		RuntimeObject* L_3 = ___1_state;
		NullCheck(L_2);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_2, L_3, NULL);
		goto IL_002b;
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->___source;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ___0_continuation;
		RuntimeObject* L_6 = ___1_state;
		int16_t L_7 = ___2_token;
		NullCheck(L_4);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_4, L_5, L_6, L_7);
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_UnsafeGetStatus_m2C95DEC86295542B3BAF04CEE4822AD0C3FBAF12_gshared (MemoizeSource_t1184411DF9A67FC31DCB16211873336ACFD4C4C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0026;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(3, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
		V_1 = L_4;
		goto IL_0026;
	}

IL_0026:
	{
		int32_t L_5 = V_1;
		return L_5;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource__ctor_m9A66F76B7FADC872C4F3BED43B5FBE75BA903EB5_gshared (MemoizeSource_t74CBB552A0B5909901EBC1BC50442F56F5FE81A6* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t31FC349FE1CF0C2BF4E1437F0DF1D14D14A65B79 MemoizeSource_GetResult_m3FA28197AE01525D47CBBF5C6E884E00A0AB6E66_gshared (MemoizeSource_t74CBB552A0B5909901EBC1BC50442F56F5FE81A6* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	ValueTuple_2_t31FC349FE1CF0C2BF4E1437F0DF1D14D14A65B79 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	bool V_4 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->___exception;
		V_1 = (bool)((!(((RuntimeObject*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_4 = __this->___exception;
		NullCheck(L_4);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_4, NULL);
	}

IL_002a:
	{
		ValueTuple_2_t31FC349FE1CF0C2BF4E1437F0DF1D14D14A65B79 L_5 = __this->___result;
		V_2 = L_5;
		goto IL_0094;
	}

IL_0033:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008a:
			{
				__this->___source = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)(RuntimeObject*)NULL);
				return;
			}
		});
		try
		{
			try
			{
				RuntimeObject* L_6 = __this->___source;
				int16_t L_7 = ___0_token;
				NullCheck(L_6);
				ValueTuple_2_t31FC349FE1CF0C2BF4E1437F0DF1D14D14A65B79 L_8;
				L_8 = InterfaceFuncInvoker1< ValueTuple_2_t31FC349FE1CF0C2BF4E1437F0DF1D14D14A65B79, int16_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_6, L_7);
				__this->___result = L_8;
				__this->___status = (int32_t)1;
				ValueTuple_2_t31FC349FE1CF0C2BF4E1437F0DF1D14D14A65B79 L_9 = __this->___result;
				V_2 = L_9;
				goto IL_0094;
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0057_1;
				}
				throw e;
			}

CATCH_0057_1:
			{
				{
					Exception_t* L_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
					V_3 = L_10;
					Exception_t* L_11 = V_3;
					ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_12;
					L_12 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_11, NULL);
					__this->___exception = L_12;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___exception), (void*)L_12);
					Exception_t* L_13 = V_3;
					V_4 = (bool)((!(((RuntimeObject*)(OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_13, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var))))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
					bool L_14 = V_4;
					if (!L_14)
					{
						goto IL_007f_1;
					}
				}
				{
					__this->___status = (int32_t)3;
					goto IL_0088_1;
				}

IL_007f_1:
				{
					__this->___status = (int32_t)2;
				}

IL_0088_1:
				{
					IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
				}
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0094:
	{
		ValueTuple_2_t31FC349FE1CF0C2BF4E1437F0DF1D14D14A65B79 L_15 = V_2;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_Cysharp_Threading_Tasks_IUniTaskSource_GetResult_mDA8C4BF536EDA612BA50189087CB72B321A83B0B_gshared (MemoizeSource_t74CBB552A0B5909901EBC1BC50442F56F5FE81A6* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___0_token;
		ValueTuple_2_t31FC349FE1CF0C2BF4E1437F0DF1D14D14A65B79 L_1;
		L_1 = MemoizeSource_GetResult_m3FA28197AE01525D47CBBF5C6E884E00A0AB6E66(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_GetStatus_m5EA772C777483A3D1CF3D435211F996DB8DF15B4_gshared (MemoizeSource_t74CBB552A0B5909901EBC1BC50442F56F5FE81A6* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0027;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		int16_t L_4 = ___0_token;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_3, L_4);
		V_1 = L_5;
		goto IL_0027;
	}

IL_0027:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_OnCompleted_m4B7CDD12E90A2355016637B036B3E0AA5D5906E1_gshared (MemoizeSource_t74CBB552A0B5909901EBC1BC50442F56F5FE81A6* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = ___0_continuation;
		RuntimeObject* L_3 = ___1_state;
		NullCheck(L_2);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_2, L_3, NULL);
		goto IL_002b;
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->___source;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ___0_continuation;
		RuntimeObject* L_6 = ___1_state;
		int16_t L_7 = ___2_token;
		NullCheck(L_4);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_4, L_5, L_6, L_7);
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_UnsafeGetStatus_mCA6119A5F1AABBF6AB19445844E8A9D8EAC6008F_gshared (MemoizeSource_t74CBB552A0B5909901EBC1BC50442F56F5FE81A6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0026;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(3, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
		V_1 = L_4;
		goto IL_0026;
	}

IL_0026:
	{
		int32_t L_5 = V_1;
		return L_5;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource__ctor_mBB38E3B578D9390E2463145C087FE8D55766B375_gshared (MemoizeSource_tFB4BE9B6B9177E2D747FA257DFFCB7ECD4059D35* __this, RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tB6C5EB8B1097DA5E36DC437A3AB809D0EB919B4D MemoizeSource_GetResult_m72A7F9DD46F55F02B4D798C0C84AF8930B551D89_gshared (MemoizeSource_tFB4BE9B6B9177E2D747FA257DFFCB7ECD4059D35* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	ValueTuple_2_tB6C5EB8B1097DA5E36DC437A3AB809D0EB919B4D V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	bool V_4 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->___exception;
		V_1 = (bool)((!(((RuntimeObject*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_4 = __this->___exception;
		NullCheck(L_4);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_4, NULL);
	}

IL_002a:
	{
		ValueTuple_2_tB6C5EB8B1097DA5E36DC437A3AB809D0EB919B4D L_5 = __this->___result;
		V_2 = L_5;
		goto IL_0094;
	}

IL_0033:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008a:
			{
				__this->___source = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)(RuntimeObject*)NULL);
				return;
			}
		});
		try
		{
			try
			{
				RuntimeObject* L_6 = __this->___source;
				int16_t L_7 = ___0_token;
				NullCheck(L_6);
				ValueTuple_2_tB6C5EB8B1097DA5E36DC437A3AB809D0EB919B4D L_8;
				L_8 = InterfaceFuncInvoker1< ValueTuple_2_tB6C5EB8B1097DA5E36DC437A3AB809D0EB919B4D, int16_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_6, L_7);
				__this->___result = L_8;
				__this->___status = (int32_t)1;
				ValueTuple_2_tB6C5EB8B1097DA5E36DC437A3AB809D0EB919B4D L_9 = __this->___result;
				V_2 = L_9;
				goto IL_0094;
			}
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0057_1;
				}
				throw e;
			}

CATCH_0057_1:
			{
				{
					Exception_t* L_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
					V_3 = L_10;
					Exception_t* L_11 = V_3;
					ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_12;
					L_12 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_11, NULL);
					__this->___exception = L_12;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___exception), (void*)L_12);
					Exception_t* L_13 = V_3;
					V_4 = (bool)((!(((RuntimeObject*)(OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_13, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var))))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
					bool L_14 = V_4;
					if (!L_14)
					{
						goto IL_007f_1;
					}
				}
				{
					__this->___status = (int32_t)3;
					goto IL_0088_1;
				}

IL_007f_1:
				{
					__this->___status = (int32_t)2;
				}

IL_0088_1:
				{
					IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
				}
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0094:
	{
		ValueTuple_2_tB6C5EB8B1097DA5E36DC437A3AB809D0EB919B4D L_15 = V_2;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_Cysharp_Threading_Tasks_IUniTaskSource_GetResult_m4EF2082291479F6F5A8B39497DD6D238D7A0FE17_gshared (MemoizeSource_tFB4BE9B6B9177E2D747FA257DFFCB7ECD4059D35* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___0_token;
		ValueTuple_2_tB6C5EB8B1097DA5E36DC437A3AB809D0EB919B4D L_1;
		L_1 = MemoizeSource_GetResult_m72A7F9DD46F55F02B4D798C0C84AF8930B551D89(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_GetStatus_mEDC5B27F9B86EFF6F2639313393A7ACDB9EEDC0E_gshared (MemoizeSource_tFB4BE9B6B9177E2D747FA257DFFCB7ECD4059D35* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0027;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		int16_t L_4 = ___0_token;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_3, L_4);
		V_1 = L_5;
		goto IL_0027;
	}

IL_0027:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoizeSource_OnCompleted_mFB38CCB126A525A905DD89E751C13F38D106F72F_gshared (MemoizeSource_tFB4BE9B6B9177E2D747FA257DFFCB7ECD4059D35* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = ___0_continuation;
		RuntimeObject* L_3 = ___1_state;
		NullCheck(L_2);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_2, L_3, NULL);
		goto IL_002b;
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->___source;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ___0_continuation;
		RuntimeObject* L_6 = ___1_state;
		int16_t L_7 = ___2_token;
		NullCheck(L_4);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(2, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_4, L_5, L_6, L_7);
	}

IL_002b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoizeSource_UnsafeGetStatus_m79B19C31676BBFCDB2EFCA241ED95BA157858DD2_gshared (MemoizeSource_tFB4BE9B6B9177E2D747FA257DFFCB7ECD4059D35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___source;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = __this->___status;
		V_1 = L_2;
		goto IL_0026;
	}

IL_0018:
	{
		RuntimeObject* L_3 = __this->___source;
		NullCheck((RuntimeObject*)L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(3, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
		V_1 = L_4;
		goto IL_0026;
	}

IL_0026:
	{
		int32_t L_5 = V_1;
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mA97FD9B61331596E4585203CFD321A5A614A089D_gshared_inline (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___0_item, const RuntimeMethod* method) 
{
	ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ColumnStateU5BU5D_t0FFA0C38CD44D738D50B935EA357157A41C99290* L_6 = V_0;
		int32_t L_7 = V_1;
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957)L_8);
		return;
	}

IL_0034:
	{
		ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 L_9 = ___0_item;
		List_1_AddWithResize_mC767DD2E08464C2A9BFD3F2AE86A83F85BFCC9A2(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mECD525A7CE3BC7B0E3FE954F13BC663410201A64_gshared_inline (List_1_t9FCF421D436E7388FC34EB04CC1A4AF55A14F565* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m10C29B9B5B4D26958247572D94A85AD8008FBD3A_gshared_inline (Predicate_1_tE6CEF83377C879013E736AC152429530BFBE7BD7* __this, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m0E4885731BC5FB5682B2F9AAFE2051895D1E43DE_gshared_inline (Action_1_t2518DEA327D7ACE4C30B14D8AFF5D4CFF5221B6F* __this, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957 ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ColumnState_tC563C18EC36392C792E3E0645B1CE344DCC75957, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m40316F9C09C447101208FB71D2B4C7EDE087F1D6_gshared_inline (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E ___0_item, const RuntimeMethod* method) 
{
	ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ItemU5BU5D_t638DDCABC89F9C1BBC0D855DBA0E4C5E3637D94C* L_6 = V_0;
		int32_t L_7 = V_1;
		Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E)L_8);
		return;
	}

IL_0034:
	{
		Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E L_9 = ___0_item;
		List_1_AddWithResize_mAD3C558E9DE455512864C32580168C63670F671B(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m22E00E30D2A3314CBE9F16BBF390E271EA8FBCBD_gshared_inline (List_1_tEF1F730575B559C751675A2E35F61E0555D1E7C4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m8CACEA4E17FB9648171CCB77D5CA3EDF7248F332_gshared_inline (Predicate_1_t4217DDE556AA2DD5A06797A7B6ADC3C6E795D010* __this, Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m530925ADE5205080923A6AF7ECAEC6BF0F05602C_gshared_inline (Action_1_tABD04F977BAE1165FCC3D57AAB3F5C16F3E97674* __this, Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Item_t590AA2925A38AA7EA48963775F482E9BA8525B4E, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mC950522AE5F5CFBEEF0E76878C42C6A16B38362D_gshared_inline (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E ___0_item, const RuntimeMethod* method) 
{
	RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		RecordingItemU5BU5D_tBC43F24DB9030B7D8D3BBDA956335EFDE6FB09B8* L_6 = V_0;
		int32_t L_7 = V_1;
		RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E)L_8);
		return;
	}

IL_0034:
	{
		RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E L_9 = ___0_item;
		List_1_AddWithResize_m07ACD6768A0967EF7A094F9E52196EEC6093937A(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m401900762AD72612336502EA7DF602A79F433BCD_gshared_inline (List_1_t065A1950A0B1D84B65A5256E8063120B10018641* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m3546977A385098FD45CF8006D8613DAE78078B15_gshared_inline (Predicate_1_t8A5AF3450E7B0054E5339AB18FD29FA24A371BC1* __this, RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m428A1EAD709638EC1BF95DEFA4A3FB88ED859E65_gshared_inline (Action_1_tA19957CC720A8A8732F921D4AD3702951E7762AF* __this, RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RecordingItem_t5CE44E9AB838D651799847F74609435470D50A1E, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_0 = NULL;
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_0 = ((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m6AC449189DCEE89A4FA2A2B724DE296A1DFB6A9B_gshared_inline (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
