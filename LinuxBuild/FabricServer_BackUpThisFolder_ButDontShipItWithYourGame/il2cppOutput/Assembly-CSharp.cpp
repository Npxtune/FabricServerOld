#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,Client>
struct Dictionary_2_t7ABF92427955B899A00760057F6517A757958842;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// System.Collections.Generic.Dictionary`2<System.Int32,Server/PacketHandler>
struct Dictionary_2_t8ADD0927441CE234D6856F51E50B8C95DD29FBA5;
// System.Collections.Generic.IEnumerable`1<System.Action>
struct IEnumerable_1_t6CEED8910660964668522055C0010B575E62C702;
// System.Collections.Generic.IEnumerable`1<System.Byte>
struct IEnumerable_1_t87C38B0EE9F1DE9AFC8F366EEAE5D497C061B4E1;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Client>
struct KeyCollection_t8433CA7FF9D180E3320BE0D4BADF864B5FAD94DC;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Server/PacketHandler>
struct KeyCollection_tB73F44AF63E7A0511EDD60A9BC778422C3B17D88;
// System.Collections.Generic.List`1<System.Action>
struct List_1_t458734AF850139150AB40DFB2B5D1BCE23178235;
// System.Collections.Generic.List`1<System.Byte>
struct List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Client>
struct ValueCollection_t538035F08B6A6C12CC3F5CBFE9033D6967AD3185;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Server/PacketHandler>
struct ValueCollection_tF111EE037C4C79A584BB0542C6263433B2B97922;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Client>[]
struct EntryU5BU5D_t7481F166DA3F7168CA6F491A2FEA461D9830CDFB;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Server/PacketHandler>[]
struct EntryU5BU5D_t95C45F38F4D59C7EFCFD795E702D4A551E04C4F3;
// System.Action[]
struct ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2;
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.UInt16[]
struct UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Client
struct Client_t8953F633032099609444F417EEFFBED62649CECB;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// Constants
struct Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Net.EndPoint
struct EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IOAsyncCallback
struct IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E;
// System.Net.IPAddress
struct IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE;
// System.Net.IPEndPoint
struct IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// NetworkManager
struct NetworkManager_tDA8A4BECD3B0245AF4351E9ABC199B1B185BF606;
// System.Net.Sockets.NetworkStream
struct NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Packet
struct Packet_t9AE66670972832E2A1F334616B45353CF46A4B68;
// Player
struct Player_t5689617909B48F7640EA0892D85C92C13CC22C6F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Net.Sockets.SafeSocketHandle
struct SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// Server
struct Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273;
// ServerHandle
struct ServerHandle_t8240C03B10FC3261048A301B9720F3AA855A928F;
// ServerSend
struct ServerSend_t8746A858E0EB05CD5B894DC774249E267F58B806;
// System.Net.Sockets.Socket
struct Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09;
// System.String
struct String_t;
// System.Net.Sockets.TcpClient
struct TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE;
// System.Net.Sockets.TcpListener
struct TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B;
// ThreadManager
struct ThreadManager_tA8AFCF4EC354801306F01FDC18C608291549ADBD;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Net.Sockets.UdpClient
struct UdpClient_tB1B7578C96A20B6A0B58AC3FD3E1CB469375B920;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Client/TCP
struct TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F;
// Client/UDP
struct UDP_tFFDFA9C4A0D7E358A406440CC04A78608DE47451;
// Server/PacketHandler
struct PacketHandler_tF3182DDA9983ED609FD815750B65802DE9536286;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;
// Client/TCP/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t41B4F144D7381A00E3DC598CBEE4D2D4E3F43279;
// Client/UDP/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tD827CB36CA9701E47BAB4E94B329EA1AA3B99C42;

IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Client_t8953F633032099609444F417EEFFBED62649CECB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t7ABF92427955B899A00760057F6517A757958842_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t8ADD0927441CE234D6856F51E50B8C95DD29FBA5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t458734AF850139150AB40DFB2B5D1BCE23178235_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkManager_tDA8A4BECD3B0245AF4351E9ABC199B1B185BF606_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PacketHandler_tF3182DDA9983ED609FD815750B65802DE9536286_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Packet_t9AE66670972832E2A1F334616B45353CF46A4B68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadManager_tA8AFCF4EC354801306F01FDC18C608291549ADBD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_tD827CB36CA9701E47BAB4E94B329EA1AA3B99C42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass9_0_t41B4F144D7381A00E3DC598CBEE4D2D4E3F43279_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UDP_tFFDFA9C4A0D7E358A406440CC04A78608DE47451_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UdpClient_tB1B7578C96A20B6A0B58AC3FD3E1CB469375B920_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral08329E95DECE698B83A3B87087FC527124446958;
IL2CPP_EXTERN_C String_t* _stringLiteral0858DB783B757ECA14D336F69D192ADBC7FFD25F;
IL2CPP_EXTERN_C String_t* _stringLiteral0C96EF172B5251960B6663CAB9370BD62FCF0A7C;
IL2CPP_EXTERN_C String_t* _stringLiteral0CA7075A235BD3636AC6068832CF7303FBA2E2FD;
IL2CPP_EXTERN_C String_t* _stringLiteral236B9E73A29874E7D15820672595F556FFB1B241;
IL2CPP_EXTERN_C String_t* _stringLiteral2E8478BECF6599AD7D02CB69FE271A4E2AB11AD2;
IL2CPP_EXTERN_C String_t* _stringLiteral327976042FBF2A6A61342BA4C0B93047EFCEA46A;
IL2CPP_EXTERN_C String_t* _stringLiteral334E70EF250850CE33D2C6D935E66ED0256F9D88;
IL2CPP_EXTERN_C String_t* _stringLiteral4DA6605C3DF4D6C880DF4ED47C327E3C0B26DAD9;
IL2CPP_EXTERN_C String_t* _stringLiteral5807EE5F1E7C873A5D333D20F013A8936CF776B0;
IL2CPP_EXTERN_C String_t* _stringLiteral60220D6B4786C9BE0D76AE71641B5555F1A55030;
IL2CPP_EXTERN_C String_t* _stringLiteral66031200623AE4E82DCAFB1E5564C9C7CB0AE041;
IL2CPP_EXTERN_C String_t* _stringLiteral689A3729F15139D3B056F72DA092672920DD905A;
IL2CPP_EXTERN_C String_t* _stringLiteral6A0B0D64E849533D2EE44E5E82BD6CDD4E36999A;
IL2CPP_EXTERN_C String_t* _stringLiteral8F75059E2B51C0CE09883FEBF01BF06004657EB5;
IL2CPP_EXTERN_C String_t* _stringLiteral920600362200F1D16F6C3C76DE191C7F8788D270;
IL2CPP_EXTERN_C String_t* _stringLiteralB7A55FCEA6E2546F355A1B0988E553E7739E84C3;
IL2CPP_EXTERN_C String_t* _stringLiteralB859421A9D790444A7B9ECE4BFE8E4D64FC796ED;
IL2CPP_EXTERN_C String_t* _stringLiteralBADA71C640CF53792306296B3909356D97D0CC7E;
IL2CPP_EXTERN_C String_t* _stringLiteralDD694BE6D566A08A62BD761743A2050C0CB27C91;
IL2CPP_EXTERN_C String_t* _stringLiteralE47EF02920FBA624376505268B4974B34B19D162;
IL2CPP_EXTERN_C String_t* _stringLiteralE6DFAACE6503D0E427C9B379D610DA8192C28119;
IL2CPP_EXTERN_C String_t* _stringLiteralFF31DA9350857E7D141A5F6AF5746C18D7F3D1F1;
IL2CPP_EXTERN_C const RuntimeMethod* Client_U3CDisconnectU3Eb__9_0_mBF532E1F468E3BCF0B9DCA561E1797FF30C1E4FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m43B06DD1A94572D8905C8322834BCF4F12ECD05E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mD0511B860657C5445B0DE56F6227DF994EBA9FCE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCB9F422245DC4D635D3AD3ACE7971B72FBCF3422_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mEDF3E3367A598ECE86C6D31E3C665CB555F11E92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m3A4EC04719D2C48FF27A5ABB0D4F909483D50034_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mD0515F8A61ABD101438BFE061B88CEE89F1B1004_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_m3411FBF00DC9928DFADE1A3CAEB086478CFDC8B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m999C882B57B245989B4203797DA595CCA1196F53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m0025FB98966D2133C69B2C397F302710B35B070C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m4C23A711A36D019C00794322E90E8056E9B95A82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m207006733154C20C7F72BFDD693CF79C1B8F4B5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mC32923569CAAE589250C6AD9DCEEBFEC2AE11335_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0591BACA7245EA90F64F4C1E30A6809F74537CED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m7701B455B6EA0411642596847118B51F91DA8BC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mAFD3E92217FFE1CC0A595FC5C1394D30FECC3BC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mC92A676A3C9BFEFF1C88BADCAF85070A2DCABED4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetRange_mD85F219E3DAB0C570BFCC53A7A0789013CA820FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_InsertRange_mFF2A777632BF8ECBE5AA5BB73EB4CEB9E297EBE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mB2B88CFBC15DDCA705C411F3EF596B2E6C56997E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m42BD5721699395D9FC6B6D889CE5A29C4C2F1778_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8F3A8E6C64C39DA66FF5F99E7A6BB97B41A482BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m1C5E87EEF4B8F8CB985E6C4FD69D863ABAD79F14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m62C12145DD437794F8660D2396A00A7B2BA480C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m9F0A626A47DAE7452E139A6961335BE81507E551_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Packet_ReadBool_m7F694CE2AAF877AE06E4DBC1A70E15DD1D8D0A8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Packet_ReadByte_mE7C0DE3021F7E6EC0DB9226B52A1D1C7ED62FF24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Packet_ReadBytes_mC990811110E0B0A02D489453635CF81DFE16FA0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Packet_ReadFloat_m7593E3FC9D71870BB02F88F2659801ED65BA878E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Packet_ReadInt_m7C7C7168F3119B364182D2B3DE98718C919966A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Packet_ReadLong_mF6F540FEAA406E571C5777ED021AE4C8298DE49B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Packet_ReadShort_m564E187655BE53ED0164F26AF7AD36B4EDC618EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Packet_ReadString_mD6F9D09E50728912C91AC4D2450296FF5371F015_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServerHandle_PlayerMovement_m9C27F7D1BD8CC2B01207000A8E9271D521D838D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServerHandle_WelcomeReceived_m9E6F51E9214367B2E22AA47875750EC6ED299D41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Server_TCPConnectCallback_m3448142AB53DC47D8FAA9C1A19DCC3ACDCC311E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Server_UDPReceiveCallback_mE0FC6ECDB90B754BC40227B5BB17C617B8DC9FAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TCP_ReceiveCallback_mD80429339F3000EFF23B65BF5C2B89A2B945AF17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3CHandleDataU3Eb__0_m29FA4F914E3DDEA7E3BB20E907D3D019DF4E99D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass9_0_U3CHandleDataU3Eb__0_mBA9BD0CEC019C14F69E4F14668CC5948177A48B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_m5835077945412B254EEF3A8EA84C35F2A1E9EF3A_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.Int32,Client>
struct Dictionary_2_t7ABF92427955B899A00760057F6517A757958842  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t7481F166DA3F7168CA6F491A2FEA461D9830CDFB* ___entries_1;
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
	KeyCollection_t8433CA7FF9D180E3320BE0D4BADF864B5FAD94DC * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t538035F08B6A6C12CC3F5CBFE9033D6967AD3185 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t7ABF92427955B899A00760057F6517A757958842, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t7ABF92427955B899A00760057F6517A757958842, ___entries_1)); }
	inline EntryU5BU5D_t7481F166DA3F7168CA6F491A2FEA461D9830CDFB* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t7481F166DA3F7168CA6F491A2FEA461D9830CDFB** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t7481F166DA3F7168CA6F491A2FEA461D9830CDFB* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t7ABF92427955B899A00760057F6517A757958842, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t7ABF92427955B899A00760057F6517A757958842, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t7ABF92427955B899A00760057F6517A757958842, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t7ABF92427955B899A00760057F6517A757958842, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t7ABF92427955B899A00760057F6517A757958842, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t7ABF92427955B899A00760057F6517A757958842, ___keys_7)); }
	inline KeyCollection_t8433CA7FF9D180E3320BE0D4BADF864B5FAD94DC * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t8433CA7FF9D180E3320BE0D4BADF864B5FAD94DC ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t8433CA7FF9D180E3320BE0D4BADF864B5FAD94DC * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t7ABF92427955B899A00760057F6517A757958842, ___values_8)); }
	inline ValueCollection_t538035F08B6A6C12CC3F5CBFE9033D6967AD3185 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t538035F08B6A6C12CC3F5CBFE9033D6967AD3185 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t538035F08B6A6C12CC3F5CBFE9033D6967AD3185 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t7ABF92427955B899A00760057F6517A757958842, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,Server/PacketHandler>
struct Dictionary_2_t8ADD0927441CE234D6856F51E50B8C95DD29FBA5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t95C45F38F4D59C7EFCFD795E702D4A551E04C4F3* ___entries_1;
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
	KeyCollection_tB73F44AF63E7A0511EDD60A9BC778422C3B17D88 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tF111EE037C4C79A584BB0542C6263433B2B97922 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t8ADD0927441CE234D6856F51E50B8C95DD29FBA5, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t8ADD0927441CE234D6856F51E50B8C95DD29FBA5, ___entries_1)); }
	inline EntryU5BU5D_t95C45F38F4D59C7EFCFD795E702D4A551E04C4F3* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t95C45F38F4D59C7EFCFD795E702D4A551E04C4F3** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t95C45F38F4D59C7EFCFD795E702D4A551E04C4F3* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t8ADD0927441CE234D6856F51E50B8C95DD29FBA5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t8ADD0927441CE234D6856F51E50B8C95DD29FBA5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t8ADD0927441CE234D6856F51E50B8C95DD29FBA5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t8ADD0927441CE234D6856F51E50B8C95DD29FBA5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t8ADD0927441CE234D6856F51E50B8C95DD29FBA5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t8ADD0927441CE234D6856F51E50B8C95DD29FBA5, ___keys_7)); }
	inline KeyCollection_tB73F44AF63E7A0511EDD60A9BC778422C3B17D88 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tB73F44AF63E7A0511EDD60A9BC778422C3B17D88 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tB73F44AF63E7A0511EDD60A9BC778422C3B17D88 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t8ADD0927441CE234D6856F51E50B8C95DD29FBA5, ___values_8)); }
	inline ValueCollection_tF111EE037C4C79A584BB0542C6263433B2B97922 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tF111EE037C4C79A584BB0542C6263433B2B97922 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tF111EE037C4C79A584BB0542C6263433B2B97922 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t8ADD0927441CE234D6856F51E50B8C95DD29FBA5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Action>
struct List_1_t458734AF850139150AB40DFB2B5D1BCE23178235  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235, ____items_1)); }
	inline ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* get__items_1() const { return ____items_1; }
	inline ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t458734AF850139150AB40DFB2B5D1BCE23178235_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235_StaticFields, ____emptyArray_5)); }
	inline ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ActionU5BU5D_t4184CD78B103476FA93E685EDBF3C083DBA9E2C2* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Byte>
struct List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF, ____items_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__items_1() const { return ____items_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF_StaticFields, ____emptyArray_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
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


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Client>
struct ValueCollection_t538035F08B6A6C12CC3F5CBFE9033D6967AD3185  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t7ABF92427955B899A00760057F6517A757958842 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t538035F08B6A6C12CC3F5CBFE9033D6967AD3185, ___dictionary_0)); }
	inline Dictionary_2_t7ABF92427955B899A00760057F6517A757958842 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t7ABF92427955B899A00760057F6517A757958842 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t7ABF92427955B899A00760057F6517A757958842 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Client
struct Client_t8953F633032099609444F417EEFFBED62649CECB  : public RuntimeObject
{
public:
	// System.Int32 Client::id
	int32_t ___id_1;
	// Player Client::player
	Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * ___player_2;
	// Client/TCP Client::tcp
	TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F * ___tcp_3;
	// Client/UDP Client::udp
	UDP_tFFDFA9C4A0D7E358A406440CC04A78608DE47451 * ___udp_4;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(Client_t8953F633032099609444F417EEFFBED62649CECB, ___id_1)); }
	inline int32_t get_id_1() const { return ___id_1; }
	inline int32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(int32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(Client_t8953F633032099609444F417EEFFBED62649CECB, ___player_2)); }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * get_player_2() const { return ___player_2; }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_2), (void*)value);
	}

	inline static int32_t get_offset_of_tcp_3() { return static_cast<int32_t>(offsetof(Client_t8953F633032099609444F417EEFFBED62649CECB, ___tcp_3)); }
	inline TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F * get_tcp_3() const { return ___tcp_3; }
	inline TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F ** get_address_of_tcp_3() { return &___tcp_3; }
	inline void set_tcp_3(TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F * value)
	{
		___tcp_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tcp_3), (void*)value);
	}

	inline static int32_t get_offset_of_udp_4() { return static_cast<int32_t>(offsetof(Client_t8953F633032099609444F417EEFFBED62649CECB, ___udp_4)); }
	inline UDP_tFFDFA9C4A0D7E358A406440CC04A78608DE47451 * get_udp_4() const { return ___udp_4; }
	inline UDP_tFFDFA9C4A0D7E358A406440CC04A78608DE47451 ** get_address_of_udp_4() { return &___udp_4; }
	inline void set_udp_4(UDP_tFFDFA9C4A0D7E358A406440CC04A78608DE47451 * value)
	{
		___udp_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___udp_4), (void*)value);
	}
};

struct Client_t8953F633032099609444F417EEFFBED62649CECB_StaticFields
{
public:
	// System.Int32 Client::dataBufferSize
	int32_t ___dataBufferSize_0;

public:
	inline static int32_t get_offset_of_dataBufferSize_0() { return static_cast<int32_t>(offsetof(Client_t8953F633032099609444F417EEFFBED62649CECB_StaticFields, ___dataBufferSize_0)); }
	inline int32_t get_dataBufferSize_0() const { return ___dataBufferSize_0; }
	inline int32_t* get_address_of_dataBufferSize_0() { return &___dataBufferSize_0; }
	inline void set_dataBufferSize_0(int32_t value)
	{
		___dataBufferSize_0 = value;
	}
};


// Constants
struct Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02  : public RuntimeObject
{
public:

public:
};


// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// System.Net.EndPoint
struct EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA  : public RuntimeObject
{
public:

public:
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// Packet
struct Packet_t9AE66670972832E2A1F334616B45353CF46A4B68  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Byte> Packet::buffer
	List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * ___buffer_0;
	// System.Byte[] Packet::readableBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___readableBuffer_1;
	// System.Int32 Packet::readPos
	int32_t ___readPos_2;
	// System.Boolean Packet::disposed
	bool ___disposed_3;

public:
	inline static int32_t get_offset_of_buffer_0() { return static_cast<int32_t>(offsetof(Packet_t9AE66670972832E2A1F334616B45353CF46A4B68, ___buffer_0)); }
	inline List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * get_buffer_0() const { return ___buffer_0; }
	inline List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF ** get_address_of_buffer_0() { return &___buffer_0; }
	inline void set_buffer_0(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * value)
	{
		___buffer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_0), (void*)value);
	}

	inline static int32_t get_offset_of_readableBuffer_1() { return static_cast<int32_t>(offsetof(Packet_t9AE66670972832E2A1F334616B45353CF46A4B68, ___readableBuffer_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_readableBuffer_1() const { return ___readableBuffer_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_readableBuffer_1() { return &___readableBuffer_1; }
	inline void set_readableBuffer_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___readableBuffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___readableBuffer_1), (void*)value);
	}

	inline static int32_t get_offset_of_readPos_2() { return static_cast<int32_t>(offsetof(Packet_t9AE66670972832E2A1F334616B45353CF46A4B68, ___readPos_2)); }
	inline int32_t get_readPos_2() const { return ___readPos_2; }
	inline int32_t* get_address_of_readPos_2() { return &___readPos_2; }
	inline void set_readPos_2(int32_t value)
	{
		___readPos_2 = value;
	}

	inline static int32_t get_offset_of_disposed_3() { return static_cast<int32_t>(offsetof(Packet_t9AE66670972832E2A1F334616B45353CF46A4B68, ___disposed_3)); }
	inline bool get_disposed_3() const { return ___disposed_3; }
	inline bool* get_address_of_disposed_3() { return &___disposed_3; }
	inline void set_disposed_3(bool value)
	{
		___disposed_3 = value;
	}
};


// Server
struct Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273  : public RuntimeObject
{
public:

public:
};

struct Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_StaticFields
{
public:
	// System.Int32 Server::<MaxPlayers>k__BackingField
	int32_t ___U3CMaxPlayersU3Ek__BackingField_0;
	// System.Int32 Server::<Port>k__BackingField
	int32_t ___U3CPortU3Ek__BackingField_1;
	// System.Collections.Generic.Dictionary`2<System.Int32,Client> Server::clients
	Dictionary_2_t7ABF92427955B899A00760057F6517A757958842 * ___clients_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,Server/PacketHandler> Server::packetHandlers
	Dictionary_2_t8ADD0927441CE234D6856F51E50B8C95DD29FBA5 * ___packetHandlers_3;
	// System.Net.Sockets.TcpListener Server::tcpListener
	TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * ___tcpListener_4;
	// System.Net.Sockets.UdpClient Server::udpListener
	UdpClient_tB1B7578C96A20B6A0B58AC3FD3E1CB469375B920 * ___udpListener_5;

public:
	inline static int32_t get_offset_of_U3CMaxPlayersU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_StaticFields, ___U3CMaxPlayersU3Ek__BackingField_0)); }
	inline int32_t get_U3CMaxPlayersU3Ek__BackingField_0() const { return ___U3CMaxPlayersU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CMaxPlayersU3Ek__BackingField_0() { return &___U3CMaxPlayersU3Ek__BackingField_0; }
	inline void set_U3CMaxPlayersU3Ek__BackingField_0(int32_t value)
	{
		___U3CMaxPlayersU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CPortU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_StaticFields, ___U3CPortU3Ek__BackingField_1)); }
	inline int32_t get_U3CPortU3Ek__BackingField_1() const { return ___U3CPortU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CPortU3Ek__BackingField_1() { return &___U3CPortU3Ek__BackingField_1; }
	inline void set_U3CPortU3Ek__BackingField_1(int32_t value)
	{
		___U3CPortU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_clients_2() { return static_cast<int32_t>(offsetof(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_StaticFields, ___clients_2)); }
	inline Dictionary_2_t7ABF92427955B899A00760057F6517A757958842 * get_clients_2() const { return ___clients_2; }
	inline Dictionary_2_t7ABF92427955B899A00760057F6517A757958842 ** get_address_of_clients_2() { return &___clients_2; }
	inline void set_clients_2(Dictionary_2_t7ABF92427955B899A00760057F6517A757958842 * value)
	{
		___clients_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clients_2), (void*)value);
	}

	inline static int32_t get_offset_of_packetHandlers_3() { return static_cast<int32_t>(offsetof(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_StaticFields, ___packetHandlers_3)); }
	inline Dictionary_2_t8ADD0927441CE234D6856F51E50B8C95DD29FBA5 * get_packetHandlers_3() const { return ___packetHandlers_3; }
	inline Dictionary_2_t8ADD0927441CE234D6856F51E50B8C95DD29FBA5 ** get_address_of_packetHandlers_3() { return &___packetHandlers_3; }
	inline void set_packetHandlers_3(Dictionary_2_t8ADD0927441CE234D6856F51E50B8C95DD29FBA5 * value)
	{
		___packetHandlers_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___packetHandlers_3), (void*)value);
	}

	inline static int32_t get_offset_of_tcpListener_4() { return static_cast<int32_t>(offsetof(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_StaticFields, ___tcpListener_4)); }
	inline TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * get_tcpListener_4() const { return ___tcpListener_4; }
	inline TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B ** get_address_of_tcpListener_4() { return &___tcpListener_4; }
	inline void set_tcpListener_4(TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * value)
	{
		___tcpListener_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tcpListener_4), (void*)value);
	}

	inline static int32_t get_offset_of_udpListener_5() { return static_cast<int32_t>(offsetof(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_StaticFields, ___udpListener_5)); }
	inline UdpClient_tB1B7578C96A20B6A0B58AC3FD3E1CB469375B920 * get_udpListener_5() const { return ___udpListener_5; }
	inline UdpClient_tB1B7578C96A20B6A0B58AC3FD3E1CB469375B920 ** get_address_of_udpListener_5() { return &___udpListener_5; }
	inline void set_udpListener_5(UdpClient_tB1B7578C96A20B6A0B58AC3FD3E1CB469375B920 * value)
	{
		___udpListener_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___udpListener_5), (void*)value);
	}
};


// ServerHandle
struct ServerHandle_t8240C03B10FC3261048A301B9720F3AA855A928F  : public RuntimeObject
{
public:

public:
};


// ServerSend
struct ServerSend_t8746A858E0EB05CD5B894DC774249E267F58B806  : public RuntimeObject
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


// System.Net.Sockets.TcpListener
struct TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B  : public RuntimeObject
{
public:
	// System.Net.IPEndPoint System.Net.Sockets.TcpListener::m_ServerSocketEP
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___m_ServerSocketEP_0;
	// System.Net.Sockets.Socket System.Net.Sockets.TcpListener::m_ServerSocket
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___m_ServerSocket_1;
	// System.Boolean System.Net.Sockets.TcpListener::m_Active
	bool ___m_Active_2;
	// System.Boolean System.Net.Sockets.TcpListener::m_ExclusiveAddressUse
	bool ___m_ExclusiveAddressUse_3;

public:
	inline static int32_t get_offset_of_m_ServerSocketEP_0() { return static_cast<int32_t>(offsetof(TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B, ___m_ServerSocketEP_0)); }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * get_m_ServerSocketEP_0() const { return ___m_ServerSocketEP_0; }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E ** get_address_of_m_ServerSocketEP_0() { return &___m_ServerSocketEP_0; }
	inline void set_m_ServerSocketEP_0(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * value)
	{
		___m_ServerSocketEP_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ServerSocketEP_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ServerSocket_1() { return static_cast<int32_t>(offsetof(TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B, ___m_ServerSocket_1)); }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * get_m_ServerSocket_1() const { return ___m_ServerSocket_1; }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 ** get_address_of_m_ServerSocket_1() { return &___m_ServerSocket_1; }
	inline void set_m_ServerSocket_1(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * value)
	{
		___m_ServerSocket_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ServerSocket_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Active_2() { return static_cast<int32_t>(offsetof(TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B, ___m_Active_2)); }
	inline bool get_m_Active_2() const { return ___m_Active_2; }
	inline bool* get_address_of_m_Active_2() { return &___m_Active_2; }
	inline void set_m_Active_2(bool value)
	{
		___m_Active_2 = value;
	}

	inline static int32_t get_offset_of_m_ExclusiveAddressUse_3() { return static_cast<int32_t>(offsetof(TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B, ___m_ExclusiveAddressUse_3)); }
	inline bool get_m_ExclusiveAddressUse_3() const { return ___m_ExclusiveAddressUse_3; }
	inline bool* get_address_of_m_ExclusiveAddressUse_3() { return &___m_ExclusiveAddressUse_3; }
	inline void set_m_ExclusiveAddressUse_3(bool value)
	{
		___m_ExclusiveAddressUse_3 = value;
	}
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

// Client/TCP
struct TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F  : public RuntimeObject
{
public:
	// System.Net.Sockets.TcpClient Client/TCP::socket
	TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * ___socket_0;
	// System.Int32 Client/TCP::id
	int32_t ___id_1;
	// System.Net.Sockets.NetworkStream Client/TCP::stream
	NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * ___stream_2;
	// Packet Client/TCP::receivedData
	Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * ___receivedData_3;
	// System.Byte[] Client/TCP::receiveBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___receiveBuffer_4;

public:
	inline static int32_t get_offset_of_socket_0() { return static_cast<int32_t>(offsetof(TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F, ___socket_0)); }
	inline TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * get_socket_0() const { return ___socket_0; }
	inline TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE ** get_address_of_socket_0() { return &___socket_0; }
	inline void set_socket_0(TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * value)
	{
		___socket_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___socket_0), (void*)value);
	}

	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F, ___id_1)); }
	inline int32_t get_id_1() const { return ___id_1; }
	inline int32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(int32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_stream_2() { return static_cast<int32_t>(offsetof(TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F, ___stream_2)); }
	inline NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * get_stream_2() const { return ___stream_2; }
	inline NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 ** get_address_of_stream_2() { return &___stream_2; }
	inline void set_stream_2(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * value)
	{
		___stream_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_2), (void*)value);
	}

	inline static int32_t get_offset_of_receivedData_3() { return static_cast<int32_t>(offsetof(TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F, ___receivedData_3)); }
	inline Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * get_receivedData_3() const { return ___receivedData_3; }
	inline Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 ** get_address_of_receivedData_3() { return &___receivedData_3; }
	inline void set_receivedData_3(Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * value)
	{
		___receivedData_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___receivedData_3), (void*)value);
	}

	inline static int32_t get_offset_of_receiveBuffer_4() { return static_cast<int32_t>(offsetof(TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F, ___receiveBuffer_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_receiveBuffer_4() const { return ___receiveBuffer_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_receiveBuffer_4() { return &___receiveBuffer_4; }
	inline void set_receiveBuffer_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___receiveBuffer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___receiveBuffer_4), (void*)value);
	}
};


// Client/UDP
struct UDP_tFFDFA9C4A0D7E358A406440CC04A78608DE47451  : public RuntimeObject
{
public:
	// System.Net.IPEndPoint Client/UDP::endPoint
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___endPoint_0;
	// System.Int32 Client/UDP::id
	int32_t ___id_1;

public:
	inline static int32_t get_offset_of_endPoint_0() { return static_cast<int32_t>(offsetof(UDP_tFFDFA9C4A0D7E358A406440CC04A78608DE47451, ___endPoint_0)); }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * get_endPoint_0() const { return ___endPoint_0; }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E ** get_address_of_endPoint_0() { return &___endPoint_0; }
	inline void set_endPoint_0(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * value)
	{
		___endPoint_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endPoint_0), (void*)value);
	}

	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(UDP_tFFDFA9C4A0D7E358A406440CC04A78608DE47451, ___id_1)); }
	inline int32_t get_id_1() const { return ___id_1; }
	inline int32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(int32_t value)
	{
		___id_1 = value;
	}
};


// Client/TCP/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t41B4F144D7381A00E3DC598CBEE4D2D4E3F43279  : public RuntimeObject
{
public:
	// System.Byte[] Client/TCP/<>c__DisplayClass9_0::_packetBytes
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____packetBytes_0;
	// Client/TCP Client/TCP/<>c__DisplayClass9_0::<>4__this
	TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of__packetBytes_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_t41B4F144D7381A00E3DC598CBEE4D2D4E3F43279, ____packetBytes_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__packetBytes_0() const { return ____packetBytes_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__packetBytes_0() { return &____packetBytes_0; }
	inline void set__packetBytes_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____packetBytes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____packetBytes_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_t41B4F144D7381A00E3DC598CBEE4D2D4E3F43279, ___U3CU3E4__this_1)); }
	inline TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// Client/UDP/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tD827CB36CA9701E47BAB4E94B329EA1AA3B99C42  : public RuntimeObject
{
public:
	// System.Byte[] Client/UDP/<>c__DisplayClass5_0::_packetBytes
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____packetBytes_0;
	// Client/UDP Client/UDP/<>c__DisplayClass5_0::<>4__this
	UDP_tFFDFA9C4A0D7E358A406440CC04A78608DE47451 * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of__packetBytes_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_tD827CB36CA9701E47BAB4E94B329EA1AA3B99C42, ____packetBytes_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__packetBytes_0() const { return ____packetBytes_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__packetBytes_0() { return &____packetBytes_0; }
	inline void set__packetBytes_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____packetBytes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____packetBytes_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_tD827CB36CA9701E47BAB4E94B329EA1AA3B99C42, ___U3CU3E4__this_1)); }
	inline UDP_tFFDFA9C4A0D7E358A406440CC04A78608DE47451 * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline UDP_tFFDFA9C4A0D7E358A406440CC04A78608DE47451 ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(UDP_tFFDFA9C4A0D7E358A406440CC04A78608DE47451 * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,Client>
struct Enumerator_t9A3556BDEA503A884CD611508C385D49EDBAA642 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::dictionary
	Dictionary_2_t7ABF92427955B899A00760057F6517A757958842 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::currentValue
	Client_t8953F633032099609444F417EEFFBED62649CECB * ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t9A3556BDEA503A884CD611508C385D49EDBAA642, ___dictionary_0)); }
	inline Dictionary_2_t7ABF92427955B899A00760057F6517A757958842 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t7ABF92427955B899A00760057F6517A757958842 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t7ABF92427955B899A00760057F6517A757958842 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t9A3556BDEA503A884CD611508C385D49EDBAA642, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t9A3556BDEA503A884CD611508C385D49EDBAA642, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_t9A3556BDEA503A884CD611508C385D49EDBAA642, ___currentValue_3)); }
	inline Client_t8953F633032099609444F417EEFFBED62649CECB * get_currentValue_3() const { return ___currentValue_3; }
	inline Client_t8953F633032099609444F417EEFFBED62649CECB ** get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(Client_t8953F633032099609444F417EEFFBED62649CECB * value)
	{
		___currentValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentValue_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>
struct Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::dictionary
	Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::currentValue
	RuntimeObject * ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F, ___dictionary_0)); }
	inline Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F, ___currentValue_3)); }
	inline RuntimeObject * get_currentValue_3() const { return ___currentValue_3; }
	inline RuntimeObject ** get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(RuntimeObject * value)
	{
		___currentValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentValue_3), (void*)value);
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

// System.Net.IPEndPoint
struct IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E  : public EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA
{
public:
	// System.Net.IPAddress System.Net.IPEndPoint::m_Address
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___m_Address_0;
	// System.Int32 System.Net.IPEndPoint::m_Port
	int32_t ___m_Port_1;

public:
	inline static int32_t get_offset_of_m_Address_0() { return static_cast<int32_t>(offsetof(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E, ___m_Address_0)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_m_Address_0() const { return ___m_Address_0; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_m_Address_0() { return &___m_Address_0; }
	inline void set_m_Address_0(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___m_Address_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Address_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Port_1() { return static_cast<int32_t>(offsetof(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E, ___m_Port_1)); }
	inline int32_t get_m_Port_1() const { return ___m_Port_1; }
	inline int32_t* get_address_of_m_Port_1() { return &___m_Port_1; }
	inline void set_m_Port_1(int32_t value)
	{
		___m_Port_1 = value;
	}
};

struct IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_StaticFields
{
public:
	// System.Net.IPEndPoint System.Net.IPEndPoint::Any
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___Any_2;
	// System.Net.IPEndPoint System.Net.IPEndPoint::IPv6Any
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___IPv6Any_3;

public:
	inline static int32_t get_offset_of_Any_2() { return static_cast<int32_t>(offsetof(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_StaticFields, ___Any_2)); }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * get_Any_2() const { return ___Any_2; }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E ** get_address_of_Any_2() { return &___Any_2; }
	inline void set_Any_2(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * value)
	{
		___Any_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Any_2), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Any_3() { return static_cast<int32_t>(offsetof(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_StaticFields, ___IPv6Any_3)); }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * get_IPv6Any_3() const { return ___IPv6Any_3; }
	inline IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E ** get_address_of_IPv6Any_3() { return &___IPv6Any_3; }
	inline void set_IPv6Any_3(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * value)
	{
		___IPv6Any_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Any_3), (void*)value);
	}
};


// System.Int16
struct Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
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


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_3), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
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


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_0;
	// System.Single UnityEngine.Vector3::y
	float ___y_1;
	// System.Single UnityEngine.Vector3::z
	float ___z_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_3;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_12;

public:
	inline static int32_t get_offset_of_zeroVector_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_3() const { return ___zeroVector_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_3() { return &___zeroVector_3; }
	inline void set_zeroVector_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_3 = value;
	}

	inline static int32_t get_offset_of_oneVector_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_4() const { return ___oneVector_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_4() { return &___oneVector_4; }
	inline void set_oneVector_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_4 = value;
	}

	inline static int32_t get_offset_of_upVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_5() const { return ___upVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_5() { return &___upVector_5; }
	inline void set_upVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_5 = value;
	}

	inline static int32_t get_offset_of_downVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_6() const { return ___downVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_6() { return &___downVector_6; }
	inline void set_downVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_6 = value;
	}

	inline static int32_t get_offset_of_leftVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_7() const { return ___leftVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_7() { return &___leftVector_7; }
	inline void set_leftVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_7 = value;
	}

	inline static int32_t get_offset_of_rightVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_8() const { return ___rightVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_8() { return &___rightVector_8; }
	inline void set_rightVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_8 = value;
	}

	inline static int32_t get_offset_of_forwardVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_9() const { return ___forwardVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_9() { return &___forwardVector_9; }
	inline void set_forwardVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_9 = value;
	}

	inline static int32_t get_offset_of_backVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_10() const { return ___backVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_10() { return &___backVector_10; }
	inline void set_backVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_10 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_11() const { return ___positiveInfinityVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_11() { return &___positiveInfinityVector_11; }
	inline void set_positiveInfinityVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_11 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_12() const { return ___negativeInfinityVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_12() { return &___negativeInfinityVector_12; }
	inline void set_negativeInfinityVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_12 = value;
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


// System.Net.Sockets.AddressFamily
struct AddressFamily_tFCF4C888B95C069AB2D4720EC8C2E19453C28B33 
{
public:
	// System.Int32 System.Net.Sockets.AddressFamily::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AddressFamily_tFCF4C888B95C069AB2D4720EC8C2E19453C28B33, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ClientPackets
struct ClientPackets_t13855749EA59312CC9B48A45431897B659E09F5D 
{
public:
	// System.Int32 ClientPackets::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ClientPackets_t13855749EA59312CC9B48A45431897B659E09F5D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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

// System.Net.Sockets.NetworkStream
struct NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Net.Sockets.Socket System.Net.Sockets.NetworkStream::m_StreamSocket
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___m_StreamSocket_4;
	// System.Boolean System.Net.Sockets.NetworkStream::m_Readable
	bool ___m_Readable_5;
	// System.Boolean System.Net.Sockets.NetworkStream::m_Writeable
	bool ___m_Writeable_6;
	// System.Boolean System.Net.Sockets.NetworkStream::m_OwnsSocket
	bool ___m_OwnsSocket_7;
	// System.Int32 System.Net.Sockets.NetworkStream::m_CloseTimeout
	int32_t ___m_CloseTimeout_8;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.NetworkStream::m_CleanedUp
	bool ___m_CleanedUp_9;
	// System.Int32 System.Net.Sockets.NetworkStream::m_CurrentReadTimeout
	int32_t ___m_CurrentReadTimeout_10;
	// System.Int32 System.Net.Sockets.NetworkStream::m_CurrentWriteTimeout
	int32_t ___m_CurrentWriteTimeout_11;

public:
	inline static int32_t get_offset_of_m_StreamSocket_4() { return static_cast<int32_t>(offsetof(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48, ___m_StreamSocket_4)); }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * get_m_StreamSocket_4() const { return ___m_StreamSocket_4; }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 ** get_address_of_m_StreamSocket_4() { return &___m_StreamSocket_4; }
	inline void set_m_StreamSocket_4(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * value)
	{
		___m_StreamSocket_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StreamSocket_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Readable_5() { return static_cast<int32_t>(offsetof(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48, ___m_Readable_5)); }
	inline bool get_m_Readable_5() const { return ___m_Readable_5; }
	inline bool* get_address_of_m_Readable_5() { return &___m_Readable_5; }
	inline void set_m_Readable_5(bool value)
	{
		___m_Readable_5 = value;
	}

	inline static int32_t get_offset_of_m_Writeable_6() { return static_cast<int32_t>(offsetof(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48, ___m_Writeable_6)); }
	inline bool get_m_Writeable_6() const { return ___m_Writeable_6; }
	inline bool* get_address_of_m_Writeable_6() { return &___m_Writeable_6; }
	inline void set_m_Writeable_6(bool value)
	{
		___m_Writeable_6 = value;
	}

	inline static int32_t get_offset_of_m_OwnsSocket_7() { return static_cast<int32_t>(offsetof(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48, ___m_OwnsSocket_7)); }
	inline bool get_m_OwnsSocket_7() const { return ___m_OwnsSocket_7; }
	inline bool* get_address_of_m_OwnsSocket_7() { return &___m_OwnsSocket_7; }
	inline void set_m_OwnsSocket_7(bool value)
	{
		___m_OwnsSocket_7 = value;
	}

	inline static int32_t get_offset_of_m_CloseTimeout_8() { return static_cast<int32_t>(offsetof(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48, ___m_CloseTimeout_8)); }
	inline int32_t get_m_CloseTimeout_8() const { return ___m_CloseTimeout_8; }
	inline int32_t* get_address_of_m_CloseTimeout_8() { return &___m_CloseTimeout_8; }
	inline void set_m_CloseTimeout_8(int32_t value)
	{
		___m_CloseTimeout_8 = value;
	}

	inline static int32_t get_offset_of_m_CleanedUp_9() { return static_cast<int32_t>(offsetof(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48, ___m_CleanedUp_9)); }
	inline bool get_m_CleanedUp_9() const { return ___m_CleanedUp_9; }
	inline bool* get_address_of_m_CleanedUp_9() { return &___m_CleanedUp_9; }
	inline void set_m_CleanedUp_9(bool value)
	{
		___m_CleanedUp_9 = value;
	}

	inline static int32_t get_offset_of_m_CurrentReadTimeout_10() { return static_cast<int32_t>(offsetof(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48, ___m_CurrentReadTimeout_10)); }
	inline int32_t get_m_CurrentReadTimeout_10() const { return ___m_CurrentReadTimeout_10; }
	inline int32_t* get_address_of_m_CurrentReadTimeout_10() { return &___m_CurrentReadTimeout_10; }
	inline void set_m_CurrentReadTimeout_10(int32_t value)
	{
		___m_CurrentReadTimeout_10 = value;
	}

	inline static int32_t get_offset_of_m_CurrentWriteTimeout_11() { return static_cast<int32_t>(offsetof(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48, ___m_CurrentWriteTimeout_11)); }
	inline int32_t get_m_CurrentWriteTimeout_11() const { return ___m_CurrentWriteTimeout_11; }
	inline int32_t* get_address_of_m_CurrentWriteTimeout_11() { return &___m_CurrentWriteTimeout_11; }
	inline void set_m_CurrentWriteTimeout_11(int32_t value)
	{
		___m_CurrentWriteTimeout_11 = value;
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

// System.Net.Sockets.ProtocolType
struct ProtocolType_t07C7AB65B583B132A2D99BC06BB2A909BDDCE156 
{
public:
	// System.Int32 System.Net.Sockets.ProtocolType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProtocolType_t07C7AB65B583B132A2D99BC06BB2A909BDDCE156, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ServerPackets
struct ServerPackets_tAAFA8F71F2ADBDE78704D96C287DBB85FB3023EB 
{
public:
	// System.Int32 ServerPackets::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ServerPackets_tAAFA8F71F2ADBDE78704D96C287DBB85FB3023EB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.SocketType
struct SocketType_t234FBD298C115F92305ABC40D2E592FC535DFF94 
{
public:
	// System.Int32 System.Net.Sockets.SocketType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketType_t234FBD298C115F92305ABC40D2E592FC535DFF94, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.Net.IPAddress
struct IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE  : public RuntimeObject
{
public:
	// System.Int64 System.Net.IPAddress::m_Address
	int64_t ___m_Address_5;
	// System.String System.Net.IPAddress::m_ToString
	String_t* ___m_ToString_6;
	// System.Net.Sockets.AddressFamily System.Net.IPAddress::m_Family
	int32_t ___m_Family_10;
	// System.UInt16[] System.Net.IPAddress::m_Numbers
	UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* ___m_Numbers_11;
	// System.Int64 System.Net.IPAddress::m_ScopeId
	int64_t ___m_ScopeId_12;
	// System.Int32 System.Net.IPAddress::m_HashCode
	int32_t ___m_HashCode_13;

public:
	inline static int32_t get_offset_of_m_Address_5() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_Address_5)); }
	inline int64_t get_m_Address_5() const { return ___m_Address_5; }
	inline int64_t* get_address_of_m_Address_5() { return &___m_Address_5; }
	inline void set_m_Address_5(int64_t value)
	{
		___m_Address_5 = value;
	}

	inline static int32_t get_offset_of_m_ToString_6() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_ToString_6)); }
	inline String_t* get_m_ToString_6() const { return ___m_ToString_6; }
	inline String_t** get_address_of_m_ToString_6() { return &___m_ToString_6; }
	inline void set_m_ToString_6(String_t* value)
	{
		___m_ToString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ToString_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Family_10() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_Family_10)); }
	inline int32_t get_m_Family_10() const { return ___m_Family_10; }
	inline int32_t* get_address_of_m_Family_10() { return &___m_Family_10; }
	inline void set_m_Family_10(int32_t value)
	{
		___m_Family_10 = value;
	}

	inline static int32_t get_offset_of_m_Numbers_11() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_Numbers_11)); }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* get_m_Numbers_11() const { return ___m_Numbers_11; }
	inline UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67** get_address_of_m_Numbers_11() { return &___m_Numbers_11; }
	inline void set_m_Numbers_11(UInt16U5BU5D_t42D35C587B07DCDBCFDADF572C6D733AE85B2A67* value)
	{
		___m_Numbers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Numbers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScopeId_12() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_ScopeId_12)); }
	inline int64_t get_m_ScopeId_12() const { return ___m_ScopeId_12; }
	inline int64_t* get_address_of_m_ScopeId_12() { return &___m_ScopeId_12; }
	inline void set_m_ScopeId_12(int64_t value)
	{
		___m_ScopeId_12 = value;
	}

	inline static int32_t get_offset_of_m_HashCode_13() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE, ___m_HashCode_13)); }
	inline int32_t get_m_HashCode_13() const { return ___m_HashCode_13; }
	inline int32_t* get_address_of_m_HashCode_13() { return &___m_HashCode_13; }
	inline void set_m_HashCode_13(int32_t value)
	{
		___m_HashCode_13 = value;
	}
};

struct IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields
{
public:
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___Any_0;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___Loopback_1;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___Broadcast_2;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___None_3;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___IPv6Any_7;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___IPv6Loopback_8;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___IPv6None_9;

public:
	inline static int32_t get_offset_of_Any_0() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___Any_0)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_Any_0() const { return ___Any_0; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_Any_0() { return &___Any_0; }
	inline void set_Any_0(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___Any_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Any_0), (void*)value);
	}

	inline static int32_t get_offset_of_Loopback_1() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___Loopback_1)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_Loopback_1() const { return ___Loopback_1; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_Loopback_1() { return &___Loopback_1; }
	inline void set_Loopback_1(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___Loopback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Loopback_1), (void*)value);
	}

	inline static int32_t get_offset_of_Broadcast_2() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___Broadcast_2)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_Broadcast_2() const { return ___Broadcast_2; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_Broadcast_2() { return &___Broadcast_2; }
	inline void set_Broadcast_2(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___Broadcast_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Broadcast_2), (void*)value);
	}

	inline static int32_t get_offset_of_None_3() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___None_3)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_None_3() const { return ___None_3; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_None_3() { return &___None_3; }
	inline void set_None_3(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___None_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___None_3), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Any_7() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___IPv6Any_7)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_IPv6Any_7() const { return ___IPv6Any_7; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_IPv6Any_7() { return &___IPv6Any_7; }
	inline void set_IPv6Any_7(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___IPv6Any_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Any_7), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Loopback_8() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___IPv6Loopback_8)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_IPv6Loopback_8() const { return ___IPv6Loopback_8; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_IPv6Loopback_8() { return &___IPv6Loopback_8; }
	inline void set_IPv6Loopback_8(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___IPv6Loopback_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Loopback_8), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6None_9() { return static_cast<int32_t>(offsetof(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields, ___IPv6None_9)); }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * get_IPv6None_9() const { return ___IPv6None_9; }
	inline IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE ** get_address_of_IPv6None_9() { return &___IPv6None_9; }
	inline void set_IPv6None_9(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * value)
	{
		___IPv6None_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6None_9), (void*)value);
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Net.Sockets.Socket
struct Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09  : public RuntimeObject
{
public:
	// System.Boolean System.Net.Sockets.Socket::is_closed
	bool ___is_closed_6;
	// System.Boolean System.Net.Sockets.Socket::is_listening
	bool ___is_listening_7;
	// System.Boolean System.Net.Sockets.Socket::useOverlappedIO
	bool ___useOverlappedIO_8;
	// System.Int32 System.Net.Sockets.Socket::linger_timeout
	int32_t ___linger_timeout_9;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::addressFamily
	int32_t ___addressFamily_10;
	// System.Net.Sockets.SocketType System.Net.Sockets.Socket::socketType
	int32_t ___socketType_11;
	// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::protocolType
	int32_t ___protocolType_12;
	// System.Net.Sockets.SafeSocketHandle System.Net.Sockets.Socket::m_Handle
	SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9 * ___m_Handle_13;
	// System.Net.EndPoint System.Net.Sockets.Socket::seed_endpoint
	EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * ___seed_endpoint_14;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::ReadSem
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ___ReadSem_15;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::WriteSem
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ___WriteSem_16;
	// System.Boolean System.Net.Sockets.Socket::is_blocking
	bool ___is_blocking_17;
	// System.Boolean System.Net.Sockets.Socket::is_bound
	bool ___is_bound_18;
	// System.Boolean System.Net.Sockets.Socket::is_connected
	bool ___is_connected_19;
	// System.Int32 System.Net.Sockets.Socket::m_IntCleanedUp
	int32_t ___m_IntCleanedUp_20;
	// System.Boolean System.Net.Sockets.Socket::connect_in_progress
	bool ___connect_in_progress_21;
	// System.Int32 System.Net.Sockets.Socket::ID
	int32_t ___ID_22;

public:
	inline static int32_t get_offset_of_is_closed_6() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___is_closed_6)); }
	inline bool get_is_closed_6() const { return ___is_closed_6; }
	inline bool* get_address_of_is_closed_6() { return &___is_closed_6; }
	inline void set_is_closed_6(bool value)
	{
		___is_closed_6 = value;
	}

	inline static int32_t get_offset_of_is_listening_7() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___is_listening_7)); }
	inline bool get_is_listening_7() const { return ___is_listening_7; }
	inline bool* get_address_of_is_listening_7() { return &___is_listening_7; }
	inline void set_is_listening_7(bool value)
	{
		___is_listening_7 = value;
	}

	inline static int32_t get_offset_of_useOverlappedIO_8() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___useOverlappedIO_8)); }
	inline bool get_useOverlappedIO_8() const { return ___useOverlappedIO_8; }
	inline bool* get_address_of_useOverlappedIO_8() { return &___useOverlappedIO_8; }
	inline void set_useOverlappedIO_8(bool value)
	{
		___useOverlappedIO_8 = value;
	}

	inline static int32_t get_offset_of_linger_timeout_9() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___linger_timeout_9)); }
	inline int32_t get_linger_timeout_9() const { return ___linger_timeout_9; }
	inline int32_t* get_address_of_linger_timeout_9() { return &___linger_timeout_9; }
	inline void set_linger_timeout_9(int32_t value)
	{
		___linger_timeout_9 = value;
	}

	inline static int32_t get_offset_of_addressFamily_10() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___addressFamily_10)); }
	inline int32_t get_addressFamily_10() const { return ___addressFamily_10; }
	inline int32_t* get_address_of_addressFamily_10() { return &___addressFamily_10; }
	inline void set_addressFamily_10(int32_t value)
	{
		___addressFamily_10 = value;
	}

	inline static int32_t get_offset_of_socketType_11() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___socketType_11)); }
	inline int32_t get_socketType_11() const { return ___socketType_11; }
	inline int32_t* get_address_of_socketType_11() { return &___socketType_11; }
	inline void set_socketType_11(int32_t value)
	{
		___socketType_11 = value;
	}

	inline static int32_t get_offset_of_protocolType_12() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___protocolType_12)); }
	inline int32_t get_protocolType_12() const { return ___protocolType_12; }
	inline int32_t* get_address_of_protocolType_12() { return &___protocolType_12; }
	inline void set_protocolType_12(int32_t value)
	{
		___protocolType_12 = value;
	}

	inline static int32_t get_offset_of_m_Handle_13() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___m_Handle_13)); }
	inline SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9 * get_m_Handle_13() const { return ___m_Handle_13; }
	inline SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9 ** get_address_of_m_Handle_13() { return &___m_Handle_13; }
	inline void set_m_Handle_13(SafeSocketHandle_t5050671179FB886DA1763A0E4EFB3FCD072363C9 * value)
	{
		___m_Handle_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Handle_13), (void*)value);
	}

	inline static int32_t get_offset_of_seed_endpoint_14() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___seed_endpoint_14)); }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * get_seed_endpoint_14() const { return ___seed_endpoint_14; }
	inline EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA ** get_address_of_seed_endpoint_14() { return &___seed_endpoint_14; }
	inline void set_seed_endpoint_14(EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * value)
	{
		___seed_endpoint_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___seed_endpoint_14), (void*)value);
	}

	inline static int32_t get_offset_of_ReadSem_15() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___ReadSem_15)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get_ReadSem_15() const { return ___ReadSem_15; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of_ReadSem_15() { return &___ReadSem_15; }
	inline void set_ReadSem_15(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		___ReadSem_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReadSem_15), (void*)value);
	}

	inline static int32_t get_offset_of_WriteSem_16() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___WriteSem_16)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get_WriteSem_16() const { return ___WriteSem_16; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of_WriteSem_16() { return &___WriteSem_16; }
	inline void set_WriteSem_16(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		___WriteSem_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WriteSem_16), (void*)value);
	}

	inline static int32_t get_offset_of_is_blocking_17() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___is_blocking_17)); }
	inline bool get_is_blocking_17() const { return ___is_blocking_17; }
	inline bool* get_address_of_is_blocking_17() { return &___is_blocking_17; }
	inline void set_is_blocking_17(bool value)
	{
		___is_blocking_17 = value;
	}

	inline static int32_t get_offset_of_is_bound_18() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___is_bound_18)); }
	inline bool get_is_bound_18() const { return ___is_bound_18; }
	inline bool* get_address_of_is_bound_18() { return &___is_bound_18; }
	inline void set_is_bound_18(bool value)
	{
		___is_bound_18 = value;
	}

	inline static int32_t get_offset_of_is_connected_19() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___is_connected_19)); }
	inline bool get_is_connected_19() const { return ___is_connected_19; }
	inline bool* get_address_of_is_connected_19() { return &___is_connected_19; }
	inline void set_is_connected_19(bool value)
	{
		___is_connected_19 = value;
	}

	inline static int32_t get_offset_of_m_IntCleanedUp_20() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___m_IntCleanedUp_20)); }
	inline int32_t get_m_IntCleanedUp_20() const { return ___m_IntCleanedUp_20; }
	inline int32_t* get_address_of_m_IntCleanedUp_20() { return &___m_IntCleanedUp_20; }
	inline void set_m_IntCleanedUp_20(int32_t value)
	{
		___m_IntCleanedUp_20 = value;
	}

	inline static int32_t get_offset_of_connect_in_progress_21() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___connect_in_progress_21)); }
	inline bool get_connect_in_progress_21() const { return ___connect_in_progress_21; }
	inline bool* get_address_of_connect_in_progress_21() { return &___connect_in_progress_21; }
	inline void set_connect_in_progress_21(bool value)
	{
		___connect_in_progress_21 = value;
	}

	inline static int32_t get_offset_of_ID_22() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09, ___ID_22)); }
	inline int32_t get_ID_22() const { return ___ID_22; }
	inline int32_t* get_address_of_ID_22() { return &___ID_22; }
	inline void set_ID_22(int32_t value)
	{
		___ID_22 = value;
	}
};

struct Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields
{
public:
	// System.Object System.Net.Sockets.Socket::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_0;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv4
	bool ___s_SupportsIPv4_1;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv6
	bool ___s_SupportsIPv6_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_OSSupportsIPv6
	bool ___s_OSSupportsIPv6_3;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_Initialized
	bool ___s_Initialized_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_LoggingEnabled
	bool ___s_LoggingEnabled_5;
	// System.AsyncCallback System.Net.Sockets.Socket::AcceptAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___AcceptAsyncCallback_23;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginAcceptCallback_24;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptReceiveCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginAcceptReceiveCallback_25;
	// System.AsyncCallback System.Net.Sockets.Socket::ConnectAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___ConnectAsyncCallback_26;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginConnectCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginConnectCallback_27;
	// System.AsyncCallback System.Net.Sockets.Socket::DisconnectAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___DisconnectAsyncCallback_28;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginDisconnectCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginDisconnectCallback_29;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___ReceiveAsyncCallback_30;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginReceiveCallback_31;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveGenericCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginReceiveGenericCallback_32;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveFromAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___ReceiveFromAsyncCallback_33;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveFromCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginReceiveFromCallback_34;
	// System.AsyncCallback System.Net.Sockets.Socket::SendAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___SendAsyncCallback_35;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginSendGenericCallback
	IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * ___BeginSendGenericCallback_36;
	// System.AsyncCallback System.Net.Sockets.Socket::SendToAsyncCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___SendToAsyncCallback_37;

public:
	inline static int32_t get_offset_of_s_InternalSyncObject_0() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_InternalSyncObject_0)); }
	inline RuntimeObject * get_s_InternalSyncObject_0() const { return ___s_InternalSyncObject_0; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_0() { return &___s_InternalSyncObject_0; }
	inline void set_s_InternalSyncObject_0(RuntimeObject * value)
	{
		___s_InternalSyncObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_SupportsIPv4_1() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_SupportsIPv4_1)); }
	inline bool get_s_SupportsIPv4_1() const { return ___s_SupportsIPv4_1; }
	inline bool* get_address_of_s_SupportsIPv4_1() { return &___s_SupportsIPv4_1; }
	inline void set_s_SupportsIPv4_1(bool value)
	{
		___s_SupportsIPv4_1 = value;
	}

	inline static int32_t get_offset_of_s_SupportsIPv6_2() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_SupportsIPv6_2)); }
	inline bool get_s_SupportsIPv6_2() const { return ___s_SupportsIPv6_2; }
	inline bool* get_address_of_s_SupportsIPv6_2() { return &___s_SupportsIPv6_2; }
	inline void set_s_SupportsIPv6_2(bool value)
	{
		___s_SupportsIPv6_2 = value;
	}

	inline static int32_t get_offset_of_s_OSSupportsIPv6_3() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_OSSupportsIPv6_3)); }
	inline bool get_s_OSSupportsIPv6_3() const { return ___s_OSSupportsIPv6_3; }
	inline bool* get_address_of_s_OSSupportsIPv6_3() { return &___s_OSSupportsIPv6_3; }
	inline void set_s_OSSupportsIPv6_3(bool value)
	{
		___s_OSSupportsIPv6_3 = value;
	}

	inline static int32_t get_offset_of_s_Initialized_4() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_Initialized_4)); }
	inline bool get_s_Initialized_4() const { return ___s_Initialized_4; }
	inline bool* get_address_of_s_Initialized_4() { return &___s_Initialized_4; }
	inline void set_s_Initialized_4(bool value)
	{
		___s_Initialized_4 = value;
	}

	inline static int32_t get_offset_of_s_LoggingEnabled_5() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___s_LoggingEnabled_5)); }
	inline bool get_s_LoggingEnabled_5() const { return ___s_LoggingEnabled_5; }
	inline bool* get_address_of_s_LoggingEnabled_5() { return &___s_LoggingEnabled_5; }
	inline void set_s_LoggingEnabled_5(bool value)
	{
		___s_LoggingEnabled_5 = value;
	}

	inline static int32_t get_offset_of_AcceptAsyncCallback_23() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___AcceptAsyncCallback_23)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_AcceptAsyncCallback_23() const { return ___AcceptAsyncCallback_23; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_AcceptAsyncCallback_23() { return &___AcceptAsyncCallback_23; }
	inline void set_AcceptAsyncCallback_23(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___AcceptAsyncCallback_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AcceptAsyncCallback_23), (void*)value);
	}

	inline static int32_t get_offset_of_BeginAcceptCallback_24() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginAcceptCallback_24)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginAcceptCallback_24() const { return ___BeginAcceptCallback_24; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginAcceptCallback_24() { return &___BeginAcceptCallback_24; }
	inline void set_BeginAcceptCallback_24(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginAcceptCallback_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginAcceptCallback_24), (void*)value);
	}

	inline static int32_t get_offset_of_BeginAcceptReceiveCallback_25() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginAcceptReceiveCallback_25)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginAcceptReceiveCallback_25() const { return ___BeginAcceptReceiveCallback_25; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginAcceptReceiveCallback_25() { return &___BeginAcceptReceiveCallback_25; }
	inline void set_BeginAcceptReceiveCallback_25(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginAcceptReceiveCallback_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginAcceptReceiveCallback_25), (void*)value);
	}

	inline static int32_t get_offset_of_ConnectAsyncCallback_26() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___ConnectAsyncCallback_26)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_ConnectAsyncCallback_26() const { return ___ConnectAsyncCallback_26; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_ConnectAsyncCallback_26() { return &___ConnectAsyncCallback_26; }
	inline void set_ConnectAsyncCallback_26(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___ConnectAsyncCallback_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConnectAsyncCallback_26), (void*)value);
	}

	inline static int32_t get_offset_of_BeginConnectCallback_27() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginConnectCallback_27)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginConnectCallback_27() const { return ___BeginConnectCallback_27; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginConnectCallback_27() { return &___BeginConnectCallback_27; }
	inline void set_BeginConnectCallback_27(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginConnectCallback_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginConnectCallback_27), (void*)value);
	}

	inline static int32_t get_offset_of_DisconnectAsyncCallback_28() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___DisconnectAsyncCallback_28)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_DisconnectAsyncCallback_28() const { return ___DisconnectAsyncCallback_28; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_DisconnectAsyncCallback_28() { return &___DisconnectAsyncCallback_28; }
	inline void set_DisconnectAsyncCallback_28(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___DisconnectAsyncCallback_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DisconnectAsyncCallback_28), (void*)value);
	}

	inline static int32_t get_offset_of_BeginDisconnectCallback_29() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginDisconnectCallback_29)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginDisconnectCallback_29() const { return ___BeginDisconnectCallback_29; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginDisconnectCallback_29() { return &___BeginDisconnectCallback_29; }
	inline void set_BeginDisconnectCallback_29(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginDisconnectCallback_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginDisconnectCallback_29), (void*)value);
	}

	inline static int32_t get_offset_of_ReceiveAsyncCallback_30() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___ReceiveAsyncCallback_30)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_ReceiveAsyncCallback_30() const { return ___ReceiveAsyncCallback_30; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_ReceiveAsyncCallback_30() { return &___ReceiveAsyncCallback_30; }
	inline void set_ReceiveAsyncCallback_30(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___ReceiveAsyncCallback_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReceiveAsyncCallback_30), (void*)value);
	}

	inline static int32_t get_offset_of_BeginReceiveCallback_31() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginReceiveCallback_31)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginReceiveCallback_31() const { return ___BeginReceiveCallback_31; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginReceiveCallback_31() { return &___BeginReceiveCallback_31; }
	inline void set_BeginReceiveCallback_31(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginReceiveCallback_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginReceiveCallback_31), (void*)value);
	}

	inline static int32_t get_offset_of_BeginReceiveGenericCallback_32() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginReceiveGenericCallback_32)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginReceiveGenericCallback_32() const { return ___BeginReceiveGenericCallback_32; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginReceiveGenericCallback_32() { return &___BeginReceiveGenericCallback_32; }
	inline void set_BeginReceiveGenericCallback_32(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginReceiveGenericCallback_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginReceiveGenericCallback_32), (void*)value);
	}

	inline static int32_t get_offset_of_ReceiveFromAsyncCallback_33() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___ReceiveFromAsyncCallback_33)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_ReceiveFromAsyncCallback_33() const { return ___ReceiveFromAsyncCallback_33; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_ReceiveFromAsyncCallback_33() { return &___ReceiveFromAsyncCallback_33; }
	inline void set_ReceiveFromAsyncCallback_33(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___ReceiveFromAsyncCallback_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReceiveFromAsyncCallback_33), (void*)value);
	}

	inline static int32_t get_offset_of_BeginReceiveFromCallback_34() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginReceiveFromCallback_34)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginReceiveFromCallback_34() const { return ___BeginReceiveFromCallback_34; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginReceiveFromCallback_34() { return &___BeginReceiveFromCallback_34; }
	inline void set_BeginReceiveFromCallback_34(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginReceiveFromCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginReceiveFromCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_SendAsyncCallback_35() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___SendAsyncCallback_35)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_SendAsyncCallback_35() const { return ___SendAsyncCallback_35; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_SendAsyncCallback_35() { return &___SendAsyncCallback_35; }
	inline void set_SendAsyncCallback_35(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___SendAsyncCallback_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendAsyncCallback_35), (void*)value);
	}

	inline static int32_t get_offset_of_BeginSendGenericCallback_36() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___BeginSendGenericCallback_36)); }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * get_BeginSendGenericCallback_36() const { return ___BeginSendGenericCallback_36; }
	inline IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E ** get_address_of_BeginSendGenericCallback_36() { return &___BeginSendGenericCallback_36; }
	inline void set_BeginSendGenericCallback_36(IOAsyncCallback_tB965FCE75DB2822B784F36808F71EA447D5F977E * value)
	{
		___BeginSendGenericCallback_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginSendGenericCallback_36), (void*)value);
	}

	inline static int32_t get_offset_of_SendToAsyncCallback_37() { return static_cast<int32_t>(offsetof(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09_StaticFields, ___SendToAsyncCallback_37)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get_SendToAsyncCallback_37() const { return ___SendToAsyncCallback_37; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of_SendToAsyncCallback_37() { return &___SendToAsyncCallback_37; }
	inline void set_SendToAsyncCallback_37(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		___SendToAsyncCallback_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendToAsyncCallback_37), (void*)value);
	}
};


// System.Net.Sockets.TcpClient
struct TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE  : public RuntimeObject
{
public:
	// System.Net.Sockets.Socket System.Net.Sockets.TcpClient::m_ClientSocket
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___m_ClientSocket_0;
	// System.Boolean System.Net.Sockets.TcpClient::m_Active
	bool ___m_Active_1;
	// System.Net.Sockets.NetworkStream System.Net.Sockets.TcpClient::m_DataStream
	NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * ___m_DataStream_2;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.TcpClient::m_Family
	int32_t ___m_Family_3;
	// System.Boolean System.Net.Sockets.TcpClient::m_CleanedUp
	bool ___m_CleanedUp_4;

public:
	inline static int32_t get_offset_of_m_ClientSocket_0() { return static_cast<int32_t>(offsetof(TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE, ___m_ClientSocket_0)); }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * get_m_ClientSocket_0() const { return ___m_ClientSocket_0; }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 ** get_address_of_m_ClientSocket_0() { return &___m_ClientSocket_0; }
	inline void set_m_ClientSocket_0(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * value)
	{
		___m_ClientSocket_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ClientSocket_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Active_1() { return static_cast<int32_t>(offsetof(TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE, ___m_Active_1)); }
	inline bool get_m_Active_1() const { return ___m_Active_1; }
	inline bool* get_address_of_m_Active_1() { return &___m_Active_1; }
	inline void set_m_Active_1(bool value)
	{
		___m_Active_1 = value;
	}

	inline static int32_t get_offset_of_m_DataStream_2() { return static_cast<int32_t>(offsetof(TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE, ___m_DataStream_2)); }
	inline NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * get_m_DataStream_2() const { return ___m_DataStream_2; }
	inline NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 ** get_address_of_m_DataStream_2() { return &___m_DataStream_2; }
	inline void set_m_DataStream_2(NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * value)
	{
		___m_DataStream_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DataStream_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Family_3() { return static_cast<int32_t>(offsetof(TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE, ___m_Family_3)); }
	inline int32_t get_m_Family_3() const { return ___m_Family_3; }
	inline int32_t* get_address_of_m_Family_3() { return &___m_Family_3; }
	inline void set_m_Family_3(int32_t value)
	{
		___m_Family_3 = value;
	}

	inline static int32_t get_offset_of_m_CleanedUp_4() { return static_cast<int32_t>(offsetof(TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE, ___m_CleanedUp_4)); }
	inline bool get_m_CleanedUp_4() const { return ___m_CleanedUp_4; }
	inline bool* get_address_of_m_CleanedUp_4() { return &___m_CleanedUp_4; }
	inline void set_m_CleanedUp_4(bool value)
	{
		___m_CleanedUp_4 = value;
	}
};


// System.Net.Sockets.UdpClient
struct UdpClient_tB1B7578C96A20B6A0B58AC3FD3E1CB469375B920  : public RuntimeObject
{
public:
	// System.Net.Sockets.Socket System.Net.Sockets.UdpClient::m_ClientSocket
	Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * ___m_ClientSocket_0;
	// System.Boolean System.Net.Sockets.UdpClient::m_Active
	bool ___m_Active_1;
	// System.Byte[] System.Net.Sockets.UdpClient::m_Buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___m_Buffer_2;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.UdpClient::m_Family
	int32_t ___m_Family_3;
	// System.Boolean System.Net.Sockets.UdpClient::m_CleanedUp
	bool ___m_CleanedUp_4;
	// System.Boolean System.Net.Sockets.UdpClient::m_IsBroadcast
	bool ___m_IsBroadcast_5;

public:
	inline static int32_t get_offset_of_m_ClientSocket_0() { return static_cast<int32_t>(offsetof(UdpClient_tB1B7578C96A20B6A0B58AC3FD3E1CB469375B920, ___m_ClientSocket_0)); }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * get_m_ClientSocket_0() const { return ___m_ClientSocket_0; }
	inline Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 ** get_address_of_m_ClientSocket_0() { return &___m_ClientSocket_0; }
	inline void set_m_ClientSocket_0(Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * value)
	{
		___m_ClientSocket_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ClientSocket_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Active_1() { return static_cast<int32_t>(offsetof(UdpClient_tB1B7578C96A20B6A0B58AC3FD3E1CB469375B920, ___m_Active_1)); }
	inline bool get_m_Active_1() const { return ___m_Active_1; }
	inline bool* get_address_of_m_Active_1() { return &___m_Active_1; }
	inline void set_m_Active_1(bool value)
	{
		___m_Active_1 = value;
	}

	inline static int32_t get_offset_of_m_Buffer_2() { return static_cast<int32_t>(offsetof(UdpClient_tB1B7578C96A20B6A0B58AC3FD3E1CB469375B920, ___m_Buffer_2)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_m_Buffer_2() const { return ___m_Buffer_2; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_m_Buffer_2() { return &___m_Buffer_2; }
	inline void set_m_Buffer_2(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___m_Buffer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Buffer_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Family_3() { return static_cast<int32_t>(offsetof(UdpClient_tB1B7578C96A20B6A0B58AC3FD3E1CB469375B920, ___m_Family_3)); }
	inline int32_t get_m_Family_3() const { return ___m_Family_3; }
	inline int32_t* get_address_of_m_Family_3() { return &___m_Family_3; }
	inline void set_m_Family_3(int32_t value)
	{
		___m_Family_3 = value;
	}

	inline static int32_t get_offset_of_m_CleanedUp_4() { return static_cast<int32_t>(offsetof(UdpClient_tB1B7578C96A20B6A0B58AC3FD3E1CB469375B920, ___m_CleanedUp_4)); }
	inline bool get_m_CleanedUp_4() const { return ___m_CleanedUp_4; }
	inline bool* get_address_of_m_CleanedUp_4() { return &___m_CleanedUp_4; }
	inline void set_m_CleanedUp_4(bool value)
	{
		___m_CleanedUp_4 = value;
	}

	inline static int32_t get_offset_of_m_IsBroadcast_5() { return static_cast<int32_t>(offsetof(UdpClient_tB1B7578C96A20B6A0B58AC3FD3E1CB469375B920, ___m_IsBroadcast_5)); }
	inline bool get_m_IsBroadcast_5() const { return ___m_IsBroadcast_5; }
	inline bool* get_address_of_m_IsBroadcast_5() { return &___m_IsBroadcast_5; }
	inline void set_m_IsBroadcast_5(bool value)
	{
		___m_IsBroadcast_5 = value;
	}
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Server/PacketHandler
struct PacketHandler_tF3182DDA9983ED609FD815750B65802DE9536286  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// NetworkManager
struct NetworkManager_tDA8A4BECD3B0245AF4351E9ABC199B1B185BF606  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject NetworkManager::playerPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___playerPrefab_5;

public:
	inline static int32_t get_offset_of_playerPrefab_5() { return static_cast<int32_t>(offsetof(NetworkManager_tDA8A4BECD3B0245AF4351E9ABC199B1B185BF606, ___playerPrefab_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_playerPrefab_5() const { return ___playerPrefab_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_playerPrefab_5() { return &___playerPrefab_5; }
	inline void set_playerPrefab_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___playerPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerPrefab_5), (void*)value);
	}
};

struct NetworkManager_tDA8A4BECD3B0245AF4351E9ABC199B1B185BF606_StaticFields
{
public:
	// NetworkManager NetworkManager::instance
	NetworkManager_tDA8A4BECD3B0245AF4351E9ABC199B1B185BF606 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(NetworkManager_tDA8A4BECD3B0245AF4351E9ABC199B1B185BF606_StaticFields, ___instance_4)); }
	inline NetworkManager_tDA8A4BECD3B0245AF4351E9ABC199B1B185BF606 * get_instance_4() const { return ___instance_4; }
	inline NetworkManager_tDA8A4BECD3B0245AF4351E9ABC199B1B185BF606 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(NetworkManager_tDA8A4BECD3B0245AF4351E9ABC199B1B185BF606 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}
};


// Player
struct Player_t5689617909B48F7640EA0892D85C92C13CC22C6F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 Player::id
	int32_t ___id_4;
	// System.String Player::username
	String_t* ___username_5;
	// System.Single Player::moveSpeed
	float ___moveSpeed_6;
	// System.Boolean[] Player::inputs
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___inputs_7;

public:
	inline static int32_t get_offset_of_id_4() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___id_4)); }
	inline int32_t get_id_4() const { return ___id_4; }
	inline int32_t* get_address_of_id_4() { return &___id_4; }
	inline void set_id_4(int32_t value)
	{
		___id_4 = value;
	}

	inline static int32_t get_offset_of_username_5() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___username_5)); }
	inline String_t* get_username_5() const { return ___username_5; }
	inline String_t** get_address_of_username_5() { return &___username_5; }
	inline void set_username_5(String_t* value)
	{
		___username_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___username_5), (void*)value);
	}

	inline static int32_t get_offset_of_moveSpeed_6() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___moveSpeed_6)); }
	inline float get_moveSpeed_6() const { return ___moveSpeed_6; }
	inline float* get_address_of_moveSpeed_6() { return &___moveSpeed_6; }
	inline void set_moveSpeed_6(float value)
	{
		___moveSpeed_6 = value;
	}

	inline static int32_t get_offset_of_inputs_7() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___inputs_7)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_inputs_7() const { return ___inputs_7; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_inputs_7() { return &___inputs_7; }
	inline void set_inputs_7(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___inputs_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputs_7), (void*)value);
	}
};


// ThreadManager
struct ThreadManager_tA8AFCF4EC354801306F01FDC18C608291549ADBD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct ThreadManager_tA8AFCF4EC354801306F01FDC18C608291549ADBD_StaticFields
{
public:
	// System.Collections.Generic.List`1<System.Action> ThreadManager::executeOnMainThread
	List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * ___executeOnMainThread_4;
	// System.Collections.Generic.List`1<System.Action> ThreadManager::executeCopiedOnMainThread
	List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * ___executeCopiedOnMainThread_5;
	// System.Boolean ThreadManager::actionToExecuteOnMainThread
	bool ___actionToExecuteOnMainThread_6;

public:
	inline static int32_t get_offset_of_executeOnMainThread_4() { return static_cast<int32_t>(offsetof(ThreadManager_tA8AFCF4EC354801306F01FDC18C608291549ADBD_StaticFields, ___executeOnMainThread_4)); }
	inline List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * get_executeOnMainThread_4() const { return ___executeOnMainThread_4; }
	inline List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 ** get_address_of_executeOnMainThread_4() { return &___executeOnMainThread_4; }
	inline void set_executeOnMainThread_4(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * value)
	{
		___executeOnMainThread_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___executeOnMainThread_4), (void*)value);
	}

	inline static int32_t get_offset_of_executeCopiedOnMainThread_5() { return static_cast<int32_t>(offsetof(ThreadManager_tA8AFCF4EC354801306F01FDC18C608291549ADBD_StaticFields, ___executeCopiedOnMainThread_5)); }
	inline List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * get_executeCopiedOnMainThread_5() const { return ___executeCopiedOnMainThread_5; }
	inline List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 ** get_address_of_executeCopiedOnMainThread_5() { return &___executeCopiedOnMainThread_5; }
	inline void set_executeCopiedOnMainThread_5(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * value)
	{
		___executeCopiedOnMainThread_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___executeCopiedOnMainThread_5), (void*)value);
	}

	inline static int32_t get_offset_of_actionToExecuteOnMainThread_6() { return static_cast<int32_t>(offsetof(ThreadManager_tA8AFCF4EC354801306F01FDC18C608291549ADBD_StaticFields, ___actionToExecuteOnMainThread_6)); }
	inline bool get_actionToExecuteOnMainThread_6() const { return ___actionToExecuteOnMainThread_6; }
	inline bool* get_address_of_actionToExecuteOnMainThread_6() { return &___actionToExecuteOnMainThread_6; }
	inline void set_actionToExecuteOnMainThread_6(bool value)
	{
		___actionToExecuteOnMainThread_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
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
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF * Dictionary_2_get_Values_m868DAE374D8442BD5F1CD20B1A6AD5123898B604_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F  ValueCollection_GetEnumerator_m448E577BC7E4AAC47F0FAD6DB8C1A5E4976BA64C_gshared (ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mC05D3D6AD41313CA564794A0750EB5BC5AA04948_gshared_inline (Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m78AD7EE99253D01FE03BC9917F994D4E2014DAA4_gshared (Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m2FEEBA0F2315272E479E7EB8288DC2012D9A334A_gshared (Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m42BD5721699395D9FC6B6D889CE5A29C4C2F1778_gshared (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * __this, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Byte>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* List_1_ToArray_mB2B88CFBC15DDCA705C411F3EF596B2E6C56997E_gshared (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Byte>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m1C5E87EEF4B8F8CB985E6C4FD69D863ABAD79F14_gshared_inline (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_InsertRange_mFF2A777632BF8ECBE5AA5BB73EB4CEB9E297EBE5_gshared (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * __this, int32_t ___index0, RuntimeObject* ___collection1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mC92A676A3C9BFEFF1C88BADCAF85070A2DCABED4_gshared (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m0591BACA7245EA90F64F4C1E30A6809F74537CED_gshared (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * __this, uint8_t ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m207006733154C20C7F72BFDD693CF79C1B8F4B5F_gshared (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!0> System.Collections.Generic.List`1<System.Byte>::GetRange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * List_1_GetRange_mD85F219E3DAB0C570BFCC53A7A0789013CA820FB_gshared (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mD43F161D674E625D0DA61EE00A30B1EF39ECA8C6_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Client/TCP::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP__ctor_m5B160CCB7BC4C0D33C050267CFB3B6D9F48250CE (TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F * __this, int32_t ____id0, const RuntimeMethod* method);
// System.Void Client/UDP::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDP__ctor_m34E3346FC89478475493219077ECB19D003A612A (UDP_tFFDFA9C4A0D7E358A406440CC04A78608DE47451 * __this, int32_t ____id0, const RuntimeMethod* method);
// Player NetworkManager::InstantiatePlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * NetworkManager_InstantiatePlayer_m5D26CB7C918D8595BDAA408893EE909BF2E4073A (NetworkManager_tDA8A4BECD3B0245AF4351E9ABC199B1B185BF606 * __this, const RuntimeMethod* method);
// System.Void Player::Initialize(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Initialize_m016AD73AC7E82312C410DCA6FC1D595A8B805A84 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, int32_t ____id0, String_t* ____username1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,Client>::get_Values()
inline ValueCollection_t538035F08B6A6C12CC3F5CBFE9033D6967AD3185 * Dictionary_2_get_Values_m3411FBF00DC9928DFADE1A3CAEB086478CFDC8B1 (Dictionary_2_t7ABF92427955B899A00760057F6517A757958842 * __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t538035F08B6A6C12CC3F5CBFE9033D6967AD3185 * (*) (Dictionary_2_t7ABF92427955B899A00760057F6517A757958842 *, const RuntimeMethod*))Dictionary_2_get_Values_m868DAE374D8442BD5F1CD20B1A6AD5123898B604_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Client>::GetEnumerator()
inline Enumerator_t9A3556BDEA503A884CD611508C385D49EDBAA642  ValueCollection_GetEnumerator_m5835077945412B254EEF3A8EA84C35F2A1E9EF3A (ValueCollection_t538035F08B6A6C12CC3F5CBFE9033D6967AD3185 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9A3556BDEA503A884CD611508C385D49EDBAA642  (*) (ValueCollection_t538035F08B6A6C12CC3F5CBFE9033D6967AD3185 *, const RuntimeMethod*))ValueCollection_GetEnumerator_m448E577BC7E4AAC47F0FAD6DB8C1A5E4976BA64C_gshared)(__this, method);
}
// !1 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,Client>::get_Current()
inline Client_t8953F633032099609444F417EEFFBED62649CECB * Enumerator_get_Current_m4C23A711A36D019C00794322E90E8056E9B95A82_inline (Enumerator_t9A3556BDEA503A884CD611508C385D49EDBAA642 * __this, const RuntimeMethod* method)
{
	return ((  Client_t8953F633032099609444F417EEFFBED62649CECB * (*) (Enumerator_t9A3556BDEA503A884CD611508C385D49EDBAA642 *, const RuntimeMethod*))Enumerator_get_Current_mC05D3D6AD41313CA564794A0750EB5BC5AA04948_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void ServerSend::SpawnPlayer(System.Int32,Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerSend_SpawnPlayer_m04A73F9E89C4151A12CD97597AC532945BF4C364 (int32_t ____toClient0, Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * ____player1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,Client>::MoveNext()
inline bool Enumerator_MoveNext_m0025FB98966D2133C69B2C397F302710B35B070C (Enumerator_t9A3556BDEA503A884CD611508C385D49EDBAA642 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9A3556BDEA503A884CD611508C385D49EDBAA642 *, const RuntimeMethod*))Enumerator_MoveNext_m78AD7EE99253D01FE03BC9917F994D4E2014DAA4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,Client>::Dispose()
inline void Enumerator_Dispose_m999C882B57B245989B4203797DA595CCA1196F53 (Enumerator_t9A3556BDEA503A884CD611508C385D49EDBAA642 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9A3556BDEA503A884CD611508C385D49EDBAA642 *, const RuntimeMethod*))Enumerator_Dispose_m2FEEBA0F2315272E479E7EB8288DC2012D9A334A_gshared)(__this, method);
}
// System.Net.Sockets.Socket System.Net.Sockets.TcpClient::get_Client()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * TcpClient_get_Client_mC5F4444D9A96380DC38E84E8A2B9E864D600C9A7_inline (TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * __this, const RuntimeMethod* method);
// System.Net.EndPoint System.Net.Sockets.Socket::get_RemoteEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * Socket_get_RemoteEndPoint_m262E08E8CD25A908CB87450FC73683AB9DF636A7 (Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void ThreadManager::ExecuteOnMainThread(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadManager_ExecuteOnMainThread_m8CB16531E7297D2D8A3D1E677D261D9D9A38C9A5 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ____action0, const RuntimeMethod* method);
// System.Void Client/TCP::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP_Disconnect_m603956CCAEB92E4D282C8137AA64BB4A5C28877D (TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F * __this, const RuntimeMethod* method);
// System.Void Client/UDP::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDP_Disconnect_m60DD8548EF64D7BE640AF467F9D53086AB72590B (UDP_tFFDFA9C4A0D7E358A406440CC04A78608DE47451 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.QualitySettings::set_vSyncCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QualitySettings_set_vSyncCount_mE91593C022E003EC0028C9F86751FDF160F32A9E (int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_set_targetFrameRate_m0F44C8D07060E17D9D44D176888D14DBABE0CBFC (int32_t ___value0, const RuntimeMethod* method);
// System.Void Server::Start(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Server_Start_m2972A53FBF742CA1BBDE16B3F5AE26E7E135A143 (int32_t ____maxPlayers0, int32_t ____port1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// !!0 UnityEngine.GameObject::GetComponent<Player>()
inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor()
inline void List_1__ctor_m42BD5721699395D9FC6B6D889CE5A29C4C2F1778 (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *, const RuntimeMethod*))List_1__ctor_m42BD5721699395D9FC6B6D889CE5A29C4C2F1778_gshared)(__this, method);
}
// System.Void Packet::Write(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Packet_Write_mC49636594BF6314C48A57ECCABF6F8A0CAD16D01 (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * __this, int32_t ____value0, const RuntimeMethod* method);
// System.Void Packet::SetBytes(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Packet_SetBytes_m3B6E29091B9E8D14BD9D98FD55B4135E195B805D (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____data0, const RuntimeMethod* method);
// System.Void Packet::Write(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Packet_Write_m954F1A47819B29D9B1926636B520566D888102FC (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____value0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Byte>::ToArray()
inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* List_1_ToArray_mB2B88CFBC15DDCA705C411F3EF596B2E6C56997E (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* (*) (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *, const RuntimeMethod*))List_1_ToArray_mB2B88CFBC15DDCA705C411F3EF596B2E6C56997E_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Byte>::get_Count()
inline int32_t List_1_get_Count_m1C5E87EEF4B8F8CB985E6C4FD69D863ABAD79F14_inline (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *, const RuntimeMethod*))List_1_get_Count_m1C5E87EEF4B8F8CB985E6C4FD69D863ABAD79F14_gshared_inline)(__this, method);
}
// System.Byte[] System.BitConverter::GetBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* BitConverter_GetBytes_m5C926FE938C878F7E4E95A5DED46C34DB1431D39 (int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_InsertRange_mFF2A777632BF8ECBE5AA5BB73EB4CEB9E297EBE5 (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * __this, int32_t ___index0, RuntimeObject* ___collection1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_InsertRange_mFF2A777632BF8ECBE5AA5BB73EB4CEB9E297EBE5_gshared)(__this, ___index0, ___collection1, method);
}
// System.Int32 Packet::Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Packet_Length_mEDFD969DB9E45281A1B3FB6C54DDACA009E2D1EE (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte>::Clear()
inline void List_1_Clear_mC92A676A3C9BFEFF1C88BADCAF85070A2DCABED4 (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *, const RuntimeMethod*))List_1_Clear_mC92A676A3C9BFEFF1C88BADCAF85070A2DCABED4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Byte>::Add(!0)
inline void List_1_Add_m0591BACA7245EA90F64F4C1E30A6809F74537CED (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * __this, uint8_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *, uint8_t, const RuntimeMethod*))List_1_Add_m0591BACA7245EA90F64F4C1E30A6809F74537CED_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Byte>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_m207006733154C20C7F72BFDD693CF79C1B8F4B5F (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m207006733154C20C7F72BFDD693CF79C1B8F4B5F_gshared)(__this, ___collection0, method);
}
// System.Byte[] System.BitConverter::GetBytes(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* BitConverter_GetBytes_m4178DFE7B47F12FAF452AA4742B16FC3BA9618A8 (int16_t ___value0, const RuntimeMethod* method);
// System.Byte[] System.BitConverter::GetBytes(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* BitConverter_GetBytes_m4BCB9C5EF4286885A640995E44AB52E5F629E3C7 (int64_t ___value0, const RuntimeMethod* method);
// System.Byte[] System.BitConverter::GetBytes(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* BitConverter_GetBytes_m7ED1DB1B6D850DF7D04A7122E1229883226C10D2 (float ___value0, const RuntimeMethod* method);
// System.Byte[] System.BitConverter::GetBytes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* BitConverter_GetBytes_mE6E5FC94391A9B5951CD8A9D61B00F8B3FA41970 (bool ___value0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_ASCII()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_ASCII_mD3E8370997347A3F6822BDA50BC0A1DBC0059173 (const RuntimeMethod* method);
// System.Void Packet::Write(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Packet_Write_mE5C084185B94AFDD0E402E25377FC5A1F5E81689 (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * __this, float ____value0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!0> System.Collections.Generic.List`1<System.Byte>::GetRange(System.Int32,System.Int32)
inline List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * List_1_GetRange_mD85F219E3DAB0C570BFCC53A7A0789013CA820FB (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method)
{
	return ((  List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * (*) (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *, int32_t, int32_t, const RuntimeMethod*))List_1_GetRange_mD85F219E3DAB0C570BFCC53A7A0789013CA820FB_gshared)(__this, ___index0, ___count1, method);
}
// System.Int16 System.BitConverter::ToInt16(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t BitConverter_ToInt16_mD217955ED0C3E56F79DECE745A38857E4A8F6C8E (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, int32_t ___startIndex1, const RuntimeMethod* method);
// System.Int32 System.BitConverter::ToInt32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitConverter_ToInt32_m09562D0C66673FA4883600754E82F22CAFED8892 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, int32_t ___startIndex1, const RuntimeMethod* method);
// System.Int64 System.BitConverter::ToInt64(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BitConverter_ToInt64_m6B5A5B4C68D036256417E9348FA25A257015B37E (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, int32_t ___startIndex1, const RuntimeMethod* method);
// System.Single System.BitConverter::ToSingle(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BitConverter_ToSingle_mF9F12631D5CA7C2D4BFE3F89A22D39FB45E1986F (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, int32_t ___startIndex1, const RuntimeMethod* method);
// System.Boolean System.BitConverter::ToBoolean(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitConverter_ToBoolean_m13119336C6C1F7756B434E5667627B41BE125AB2 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, int32_t ___startIndex1, const RuntimeMethod* method);
// System.Int32 Packet::ReadInt(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Packet_ReadInt_m7C7C7168F3119B364182D2B3DE98718C919966A5 (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * __this, bool ____moveReadPos0, const RuntimeMethod* method);
// System.Single Packet::ReadFloat(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Packet_ReadFloat_m7593E3FC9D71870BB02F88F2659801ED65BA878E (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * __this, bool ____moveReadPos0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion__ctor_m564FA9302F5B9DA8BAB97B0A2D86FFE83ACAA421 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828 (const RuntimeMethod* method);
// System.Void Player::Move(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Move_m6D004C7D5D216998D464CCF34BD672185557CC1B (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ____inputDirection0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void ServerSend::PlayerPosition(Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerSend_PlayerPosition_m59EA88BA57257A446905567D3B85459E29FFA584 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * ____player0, const RuntimeMethod* method);
// System.Void ServerSend::PlayerRotation(Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerSend_PlayerRotation_m041BCD426D1D652B52C015C6778D4C1BB3DCDDBC (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * ____player0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void Server::set_MaxPlayers(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Server_set_MaxPlayers_m2E7E6A75CE7524FEDCE5BC756DF5C2A5714651D5_inline (int32_t ___value0, const RuntimeMethod* method);
// System.Void Server::set_Port(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Server_set_Port_mAB7D8B90A5CCB1DB4B96B39A501EB2EAAE581BED_inline (int32_t ___value0, const RuntimeMethod* method);
// System.Void Server::InitializeServerData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Server_InitializeServerData_m860294022C7C6C583DAC55C16AFF52CB1F4B9A98 (const RuntimeMethod* method);
// System.Int32 Server::get_Port()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Server_get_Port_m272775376BE0B9E98FD64224D4F97F346DFA013F_inline (const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpListener::.ctor(System.Net.IPAddress,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpListener__ctor_mD4633F7821C1F6412EFE88DB42F8A6C7E1A914F0 (TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * __this, IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___localaddr0, int32_t ___port1, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpListener::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpListener_Start_m95F4F504E8BF63D90E857AF6C794AC25EF971C68 (TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * __this, const RuntimeMethod* method);
// System.Void System.AsyncCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncCallback__ctor_m90AB9820D2F8B0B06E5E51AF3E9086415A122D05 (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.IAsyncResult System.Net.Sockets.TcpListener::BeginAcceptTcpClient(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TcpListener_BeginAcceptTcpClient_mD026EBFD9527C042FAA26B9E6F04518B9763DE5F (TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___state1, const RuntimeMethod* method);
// System.Void System.Net.Sockets.UdpClient::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpClient__ctor_mC4EE84F3374B208F583F429E848EE55BC4EF7488 (UdpClient_tB1B7578C96A20B6A0B58AC3FD3E1CB469375B920 * __this, int32_t ___port0, const RuntimeMethod* method);
// System.IAsyncResult System.Net.Sockets.UdpClient::BeginReceive(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UdpClient_BeginReceive_mD014D2418870232E79472CD1EDEB3BD209FA87D9 (UdpClient_tB1B7578C96A20B6A0B58AC3FD3E1CB469375B920 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___requestCallback0, RuntimeObject * ___state1, const RuntimeMethod* method);
// System.Net.Sockets.TcpClient System.Net.Sockets.TcpListener::EndAcceptTcpClient(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * TcpListener_EndAcceptTcpClient_m8CC22D3ACD902963F3F754628567A4EB8CF68785 (TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * __this, RuntimeObject* ___asyncResult0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Int32,Client>::get_Item(!0)
inline Client_t8953F633032099609444F417EEFFBED62649CECB * Dictionary_2_get_Item_m3A4EC04719D2C48FF27A5ABB0D4F909483D50034 (Dictionary_2_t7ABF92427955B899A00760057F6517A757958842 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  Client_t8953F633032099609444F417EEFFBED62649CECB * (*) (Dictionary_2_t7ABF92427955B899A00760057F6517A757958842 *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mD43F161D674E625D0DA61EE00A30B1EF39ECA8C6_gshared)(__this, ___key0, method);
}
// System.Void Client/TCP::Connect(System.Net.Sockets.TcpClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP_Connect_mBFE7D5177B48F233241F9A694CA417C770FBF79C (TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F * __this, TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * ____socket0, const RuntimeMethod* method);
// System.Int32 Server::get_MaxPlayers()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Server_get_MaxPlayers_m3F7A8B7BB253AA6368118B66DCCDBF205ACB560A_inline (const RuntimeMethod* method);
// System.Void System.Net.IPEndPoint::.ctor(System.Net.IPAddress,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPEndPoint__ctor_m22783A215BA0B38674F6A6CB6803804268561321 (IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * __this, IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * ___address0, int32_t ___port1, const RuntimeMethod* method);
// System.Byte[] System.Net.Sockets.UdpClient::EndReceive(System.IAsyncResult,System.Net.IPEndPoint&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* UdpClient_EndReceive_m44902B05E598334F79E1C1F4EA148C68185498DE (UdpClient_tB1B7578C96A20B6A0B58AC3FD3E1CB469375B920 * __this, RuntimeObject* ___asyncResult0, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E ** ___remoteEP1, const RuntimeMethod* method);
// System.Void Packet::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Packet__ctor_m1EA0D1BFB8E2F573993470A7EE9F8DCAE197AF3C (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____data0, const RuntimeMethod* method);
// System.Void Client/UDP::Connect(System.Net.IPEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDP_Connect_m18189CA4A3A8C2D1C971C1B0B990A0D800952099 (UDP_tFFDFA9C4A0D7E358A406440CC04A78608DE47451 * __this, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ____endPoint0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void Client/UDP::HandleData(Packet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDP_HandleData_m6F27C818ACC6EDF120F7E9665D655F130957B5EF (UDP_tFFDFA9C4A0D7E358A406440CC04A78608DE47451 * __this, Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * ____packetData0, const RuntimeMethod* method);
// System.Byte[] Packet::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Packet_ToArray_m979D2597878458D03805683B169F659D4DC7AFA8 (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * __this, const RuntimeMethod* method);
// System.IAsyncResult System.Net.Sockets.UdpClient::BeginSend(System.Byte[],System.Int32,System.Net.IPEndPoint,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UdpClient_BeginSend_mC48A39C069187B4AD2E9319D7C953AFF187C5E03 (UdpClient_tB1B7578C96A20B6A0B58AC3FD3E1CB469375B920 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___datagram0, int32_t ___bytes1, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ___endPoint2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___requestCallback3, RuntimeObject * ___state4, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void Client::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client__ctor_mB4D2D032B1110D6FDBEACEC5C34DBC4FFD17D032 (Client_t8953F633032099609444F417EEFFBED62649CECB * __this, int32_t ____clientId0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Client>::Add(!0,!1)
inline void Dictionary_2_Add_mD0511B860657C5445B0DE56F6227DF994EBA9FCE (Dictionary_2_t7ABF92427955B899A00760057F6517A757958842 * __this, int32_t ___key0, Client_t8953F633032099609444F417EEFFBED62649CECB * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7ABF92427955B899A00760057F6517A757958842 *, int32_t, Client_t8953F633032099609444F417EEFFBED62649CECB *, const RuntimeMethod*))Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Server/PacketHandler>::.ctor()
inline void Dictionary_2__ctor_mCB9F422245DC4D635D3AD3ACE7971B72FBCF3422 (Dictionary_2_t8ADD0927441CE234D6856F51E50B8C95DD29FBA5 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8ADD0927441CE234D6856F51E50B8C95DD29FBA5 *, const RuntimeMethod*))Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared)(__this, method);
}
// System.Void Server/PacketHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PacketHandler__ctor_m3BD77F81992F898EE0A42EC0BFE7C7231720421C (PacketHandler_tF3182DDA9983ED609FD815750B65802DE9536286 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Server/PacketHandler>::Add(!0,!1)
inline void Dictionary_2_Add_m43B06DD1A94572D8905C8322834BCF4F12ECD05E (Dictionary_2_t8ADD0927441CE234D6856F51E50B8C95DD29FBA5 * __this, int32_t ___key0, PacketHandler_tF3182DDA9983ED609FD815750B65802DE9536286 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8ADD0927441CE234D6856F51E50B8C95DD29FBA5 *, int32_t, PacketHandler_tF3182DDA9983ED609FD815750B65802DE9536286 *, const RuntimeMethod*))Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Client>::.ctor()
inline void Dictionary_2__ctor_mEDF3E3367A598ECE86C6D31E3C665CB555F11E92 (Dictionary_2_t7ABF92427955B899A00760057F6517A757958842 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7ABF92427955B899A00760057F6517A757958842 *, const RuntimeMethod*))Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared)(__this, method);
}
// System.String Packet::ReadString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Packet_ReadString_mD6F9D09E50728912C91AC4D2450296FF5371F015 (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * __this, bool ____moveReadPos0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.Void Client::SendIntoGame(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_SendIntoGame_mFF866BC264181A9CA17FAC7B49739AF22171B2CD (Client_t8953F633032099609444F417EEFFBED62649CECB * __this, String_t* ____playerName0, const RuntimeMethod* method);
// System.Boolean Packet::ReadBool(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Packet_ReadBool_m7F694CE2AAF877AE06E4DBC1A70E15DD1D8D0A8C (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * __this, bool ____moveReadPos0, const RuntimeMethod* method);
// UnityEngine.Quaternion Packet::ReadQuaternion(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Packet_ReadQuaternion_mB549BAF71312050895A62E0657DF13670258EF68 (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * __this, bool ____moveReadPos0, const RuntimeMethod* method);
// System.Void Player::SetInput(System.Boolean[],UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_SetInput_m552567E7B702FF7D84CE3D6D6D6798F66B7054A3 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ____inputs0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ____rotation1, const RuntimeMethod* method);
// System.Void Packet::WriteLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Packet_WriteLength_mD8E838ED42269317E9D520DF79AE406A29F052F8 (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * __this, const RuntimeMethod* method);
// System.Void Client/TCP::SendData(Packet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP_SendData_mDD06EFD3A051B1FB6F1C3DED8678FE9497195A6E (TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F * __this, Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * ____packet0, const RuntimeMethod* method);
// System.Void Client/UDP::SendData(Packet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDP_SendData_mEA97B13B8D47895B56A29D6C74E77C35F9951AEF (UDP_tFFDFA9C4A0D7E358A406440CC04A78608DE47451 * __this, Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * ____packet0, const RuntimeMethod* method);
// System.Void Packet::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Packet__ctor_mC1342F761E2948FA4CCC10BECE3AD126C07E676D (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * __this, int32_t ____id0, const RuntimeMethod* method);
// System.Void Packet::Write(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Packet_Write_m85641572D1BD2BF1DB5ED82EA8BD352F1D7E6F6D (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * __this, String_t* ____value0, const RuntimeMethod* method);
// System.Void ServerSend::SendTCPData(System.Int32,Packet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerSend_SendTCPData_m84773071DA30863C7AC235999689DB219E3FC0F7 (int32_t ____toClient0, Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * ____packet1, const RuntimeMethod* method);
// System.Void Packet::Write(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Packet_Write_mBB60F6EB2D18CCE21AF5ACD9518A2B46642B4C8F (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void Packet::Write(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Packet_Write_m7B8307F96B7DD96056F5A22241C54DB419E18B67 (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ____value0, const RuntimeMethod* method);
// System.Void ServerSend::SendUDPDataToAll(Packet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerSend_SendUDPDataToAll_mF4B1C5DA62BDE586B181F7BD3315923B7E03D638 (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * ____packet0, const RuntimeMethod* method);
// System.Void ServerSend::SendUDPDataToAll(System.Int32,Packet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerSend_SendUDPDataToAll_m282A9031FE82808CC101FEAAB41B88186B31777C (int32_t ____exceptClient0, Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * ____packet1, const RuntimeMethod* method);
// System.Void ThreadManager::UpdateMain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadManager_UpdateMain_m90636448B10DDCAE1D5E76FF9106B86F4340CC45 (const RuntimeMethod* method);
// System.Void System.Console::WriteLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Console_WriteLine_mE9EEA95C541D41E36A0F4844153A67EAAA0D12F7 (String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Action>::Add(!0)
inline void List_1_Add_m7701B455B6EA0411642596847118B51F91DA8BC9 (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 *, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Action>::Clear()
inline void List_1_Clear_mAFD3E92217FFE1CC0A595FC5C1394D30FECC3BC4 (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Action>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_mC32923569CAAE589250C6AD9DCEEBFEC2AE11335 (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_gshared)(__this, ___collection0, method);
}
// !0 System.Collections.Generic.List`1<System.Action>::get_Item(System.Int32)
inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * List_1_get_Item_m9F0A626A47DAE7452E139A6961335BE81507E551_inline (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * (*) (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Action>::get_Count()
inline int32_t List_1_get_Count_m62C12145DD437794F8660D2396A00A7B2BA480C5_inline (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Action>::.ctor()
inline void List_1__ctor_m8F3A8E6C64C39DA66FF5F99E7A6BB97B41A482BB (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Net.Sockets.TcpClient::set_ReceiveBufferSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClient_set_ReceiveBufferSize_m9451660573B28BD95582D1215CF064FAD4A474F0 (TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpClient::set_SendBufferSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClient_set_SendBufferSize_m7DA51C3FA45E79EC33648F6817F5AC036556B714 (TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Net.Sockets.NetworkStream System.Net.Sockets.TcpClient::GetStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * TcpClient_GetStream_mBBF27B06916830198E0E3BA323142793E9B2C5FC (TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * __this, const RuntimeMethod* method);
// System.Void Packet::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Packet__ctor_mE2FEB2512B8EEB697985D72083A1A47D03C2CD06 (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * __this, const RuntimeMethod* method);
// System.Void ServerSend::Welcome(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerSend_Welcome_m63549FAB23ED93B1BA415181057C1DB693BDA214 (int32_t ____toClient0, String_t* ____msg1, const RuntimeMethod* method);
// System.Void Client::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_Disconnect_m62DEBF109E88207BA5B05FDD48CC39E5A4890B50 (Client_t8953F633032099609444F417EEFFBED62649CECB * __this, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m40103AA97DC582C557B912CF4BBE86A4D166F803 (RuntimeArray * ___sourceArray0, RuntimeArray * ___destinationArray1, int32_t ___length2, const RuntimeMethod* method);
// System.Boolean Client/TCP::HandleData(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TCP_HandleData_m82C4D4020CDA7986E9A111E7F49D4C114BF983AD (TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____data0, const RuntimeMethod* method);
// System.Void Packet::Reset(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Packet_Reset_m38600E247A064753754D21711D55770D1791C636 (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * __this, bool ____shouldReset0, const RuntimeMethod* method);
// System.Int32 Packet::UnreadLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Packet_UnreadLength_m35FB45ADAE9E5387F1586DDA9C3AC8D4ECC56B00 (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * __this, const RuntimeMethod* method);
// System.Void Client/TCP/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_m1FAB2D291AF76B455B3CEEAD6C2571E2F666D049 (U3CU3Ec__DisplayClass9_0_t41B4F144D7381A00E3DC598CBEE4D2D4E3F43279 * __this, const RuntimeMethod* method);
// System.Byte[] Packet::ReadBytes(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Packet_ReadBytes_mC990811110E0B0A02D489453635CF81DFE16FA0A (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * __this, int32_t ____length0, bool ____moveReadPos1, const RuntimeMethod* method);
// System.Void System.Net.Sockets.TcpClient::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TcpClient_Close_mCF4B20FF3721D82A8C9F8136E5CB1F4C68AFD5B3 (TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * __this, const RuntimeMethod* method);
// System.Void Server::SendUDPData(System.Net.IPEndPoint,Packet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Server_SendUDPData_m8B630B7EC31715D1B65AD5E93C6961B5C54C6FEB (IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ____clientEndPoint0, Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * ____packet1, const RuntimeMethod* method);
// System.Void Client/UDP/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m0CDF2AD2DD9142077ED758350655B13977AAD6F4 (U3CU3Ec__DisplayClass5_0_tD827CB36CA9701E47BAB4E94B329EA1AA3B99C42 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Int32,Server/PacketHandler>::get_Item(!0)
inline PacketHandler_tF3182DDA9983ED609FD815750B65802DE9536286 * Dictionary_2_get_Item_mD0515F8A61ABD101438BFE061B88CEE89F1B1004 (Dictionary_2_t8ADD0927441CE234D6856F51E50B8C95DD29FBA5 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  PacketHandler_tF3182DDA9983ED609FD815750B65802DE9536286 * (*) (Dictionary_2_t8ADD0927441CE234D6856F51E50B8C95DD29FBA5 *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mD43F161D674E625D0DA61EE00A30B1EF39ECA8C6_gshared)(__this, ___key0, method);
}
// System.Void Server/PacketHandler::Invoke(System.Int32,Packet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PacketHandler_Invoke_m443B571271BBA8E99DB959508659F7D449CA28B9 (PacketHandler_tF3182DDA9983ED609FD815750B65802DE9536286 * __this, int32_t ____fromClient0, Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * ____packet1, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void Client::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client__ctor_mB4D2D032B1110D6FDBEACEC5C34DBC4FFD17D032 (Client_t8953F633032099609444F417EEFFBED62649CECB * __this, int32_t ____clientId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UDP_tFFDFA9C4A0D7E358A406440CC04A78608DE47451_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Client(int _clientId)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// id = _clientId;
		int32_t L_0 = ____clientId0;
		__this->set_id_1(L_0);
		// tcp = new TCP(id);
		int32_t L_1 = __this->get_id_1();
		TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F * L_2 = (TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F *)il2cpp_codegen_object_new(TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F_il2cpp_TypeInfo_var);
		TCP__ctor_m5B160CCB7BC4C0D33C050267CFB3B6D9F48250CE(L_2, L_1, /*hidden argument*/NULL);
		__this->set_tcp_3(L_2);
		// udp = new UDP(id);
		int32_t L_3 = __this->get_id_1();
		UDP_tFFDFA9C4A0D7E358A406440CC04A78608DE47451 * L_4 = (UDP_tFFDFA9C4A0D7E358A406440CC04A78608DE47451 *)il2cpp_codegen_object_new(UDP_tFFDFA9C4A0D7E358A406440CC04A78608DE47451_il2cpp_TypeInfo_var);
		UDP__ctor_m34E3346FC89478475493219077ECB19D003A612A(L_4, L_3, /*hidden argument*/NULL);
		__this->set_udp_4(L_4);
		// }
		return;
	}
}
// System.Void Client::SendIntoGame(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_SendIntoGame_mFF866BC264181A9CA17FAC7B49739AF22171B2CD (Client_t8953F633032099609444F417EEFFBED62649CECB * __this, String_t* ____playerName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m3411FBF00DC9928DFADE1A3CAEB086478CFDC8B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m999C882B57B245989B4203797DA595CCA1196F53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m0025FB98966D2133C69B2C397F302710B35B070C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4C23A711A36D019C00794322E90E8056E9B95A82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkManager_tDA8A4BECD3B0245AF4351E9ABC199B1B185BF606_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_m5835077945412B254EEF3A8EA84C35F2A1E9EF3A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t9A3556BDEA503A884CD611508C385D49EDBAA642  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Client_t8953F633032099609444F417EEFFBED62649CECB * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	Enumerator_t9A3556BDEA503A884CD611508C385D49EDBAA642  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Client_t8953F633032099609444F417EEFFBED62649CECB * V_5 = NULL;
	bool V_6 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// player = NetworkManager.instance.InstantiatePlayer();
		NetworkManager_tDA8A4BECD3B0245AF4351E9ABC199B1B185BF606 * L_0 = ((NetworkManager_tDA8A4BECD3B0245AF4351E9ABC199B1B185BF606_StaticFields*)il2cpp_codegen_static_fields_for(NetworkManager_tDA8A4BECD3B0245AF4351E9ABC199B1B185BF606_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_0);
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_1;
		L_1 = NetworkManager_InstantiatePlayer_m5D26CB7C918D8595BDAA408893EE909BF2E4073A(L_0, /*hidden argument*/NULL);
		__this->set_player_2(L_1);
		// player.Initialize(id, _playerName);
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_2 = __this->get_player_2();
		int32_t L_3 = __this->get_id_1();
		String_t* L_4 = ____playerName0;
		NullCheck(L_2);
		Player_Initialize_m016AD73AC7E82312C410DCA6FC1D595A8B805A84(L_2, L_3, L_4, /*hidden argument*/NULL);
		// foreach (Client _client in Server.clients.Values)
		IL2CPP_RUNTIME_CLASS_INIT(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		Dictionary_2_t7ABF92427955B899A00760057F6517A757958842 * L_5 = ((Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_StaticFields*)il2cpp_codegen_static_fields_for(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var))->get_clients_2();
		NullCheck(L_5);
		ValueCollection_t538035F08B6A6C12CC3F5CBFE9033D6967AD3185 * L_6;
		L_6 = Dictionary_2_get_Values_m3411FBF00DC9928DFADE1A3CAEB086478CFDC8B1(L_5, /*hidden argument*/Dictionary_2_get_Values_m3411FBF00DC9928DFADE1A3CAEB086478CFDC8B1_RuntimeMethod_var);
		NullCheck(L_6);
		Enumerator_t9A3556BDEA503A884CD611508C385D49EDBAA642  L_7;
		L_7 = ValueCollection_GetEnumerator_m5835077945412B254EEF3A8EA84C35F2A1E9EF3A(L_6, /*hidden argument*/ValueCollection_GetEnumerator_m5835077945412B254EEF3A8EA84C35F2A1E9EF3A_RuntimeMethod_var);
		V_0 = L_7;
	}

IL_0035:
	try
	{ // begin try (depth: 1)
		{
			goto IL_007c;
		}

IL_0037:
		{
			// foreach (Client _client in Server.clients.Values)
			Client_t8953F633032099609444F417EEFFBED62649CECB * L_8;
			L_8 = Enumerator_get_Current_m4C23A711A36D019C00794322E90E8056E9B95A82_inline((Enumerator_t9A3556BDEA503A884CD611508C385D49EDBAA642 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m4C23A711A36D019C00794322E90E8056E9B95A82_RuntimeMethod_var);
			V_1 = L_8;
			// if (_client.player != null)
			Client_t8953F633032099609444F417EEFFBED62649CECB * L_9 = V_1;
			NullCheck(L_9);
			Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_10 = L_9->get_player_2();
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_11;
			L_11 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_10, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			V_2 = L_11;
			bool L_12 = V_2;
			if (!L_12)
			{
				goto IL_007b;
			}
		}

IL_0050:
		{
			// if (_client.id != id)
			Client_t8953F633032099609444F417EEFFBED62649CECB * L_13 = V_1;
			NullCheck(L_13);
			int32_t L_14 = L_13->get_id_1();
			int32_t L_15 = __this->get_id_1();
			V_3 = (bool)((((int32_t)((((int32_t)L_14) == ((int32_t)L_15))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_16 = V_3;
			if (!L_16)
			{
				goto IL_007a;
			}
		}

IL_0066:
		{
			// ServerSend.SpawnPlayer(id, _client.player);
			int32_t L_17 = __this->get_id_1();
			Client_t8953F633032099609444F417EEFFBED62649CECB * L_18 = V_1;
			NullCheck(L_18);
			Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_19 = L_18->get_player_2();
			ServerSend_SpawnPlayer_m04A73F9E89C4151A12CD97597AC532945BF4C364(L_17, L_19, /*hidden argument*/NULL);
		}

IL_007a:
		{
		}

IL_007b:
		{
		}

IL_007c:
		{
			// foreach (Client _client in Server.clients.Values)
			bool L_20;
			L_20 = Enumerator_MoveNext_m0025FB98966D2133C69B2C397F302710B35B070C((Enumerator_t9A3556BDEA503A884CD611508C385D49EDBAA642 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m0025FB98966D2133C69B2C397F302710B35B070C_RuntimeMethod_var);
			if (L_20)
			{
				goto IL_0037;
			}
		}

IL_0085:
		{
			IL2CPP_LEAVE(0x96, FINALLY_0087);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0087;
	}

FINALLY_0087:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m999C882B57B245989B4203797DA595CCA1196F53((Enumerator_t9A3556BDEA503A884CD611508C385D49EDBAA642 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m999C882B57B245989B4203797DA595CCA1196F53_RuntimeMethod_var);
		IL2CPP_END_FINALLY(135)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(135)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x96, IL_0096)
	}

IL_0096:
	{
		// foreach (Client _client in Server.clients.Values)
		IL2CPP_RUNTIME_CLASS_INIT(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		Dictionary_2_t7ABF92427955B899A00760057F6517A757958842 * L_21 = ((Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_StaticFields*)il2cpp_codegen_static_fields_for(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var))->get_clients_2();
		NullCheck(L_21);
		ValueCollection_t538035F08B6A6C12CC3F5CBFE9033D6967AD3185 * L_22;
		L_22 = Dictionary_2_get_Values_m3411FBF00DC9928DFADE1A3CAEB086478CFDC8B1(L_21, /*hidden argument*/Dictionary_2_get_Values_m3411FBF00DC9928DFADE1A3CAEB086478CFDC8B1_RuntimeMethod_var);
		NullCheck(L_22);
		Enumerator_t9A3556BDEA503A884CD611508C385D49EDBAA642  L_23;
		L_23 = ValueCollection_GetEnumerator_m5835077945412B254EEF3A8EA84C35F2A1E9EF3A(L_22, /*hidden argument*/ValueCollection_GetEnumerator_m5835077945412B254EEF3A8EA84C35F2A1E9EF3A_RuntimeMethod_var);
		V_4 = L_23;
	}

IL_00a8:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00dd;
		}

IL_00aa:
		{
			// foreach (Client _client in Server.clients.Values)
			Client_t8953F633032099609444F417EEFFBED62649CECB * L_24;
			L_24 = Enumerator_get_Current_m4C23A711A36D019C00794322E90E8056E9B95A82_inline((Enumerator_t9A3556BDEA503A884CD611508C385D49EDBAA642 *)(&V_4), /*hidden argument*/Enumerator_get_Current_m4C23A711A36D019C00794322E90E8056E9B95A82_RuntimeMethod_var);
			V_5 = L_24;
			// if (_client.player != null)
			Client_t8953F633032099609444F417EEFFBED62649CECB * L_25 = V_5;
			NullCheck(L_25);
			Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_26 = L_25->get_player_2();
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_27;
			L_27 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_26, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			V_6 = L_27;
			bool L_28 = V_6;
			if (!L_28)
			{
				goto IL_00dc;
			}
		}

IL_00c7:
		{
			// ServerSend.SpawnPlayer(_client.id, player);
			Client_t8953F633032099609444F417EEFFBED62649CECB * L_29 = V_5;
			NullCheck(L_29);
			int32_t L_30 = L_29->get_id_1();
			Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_31 = __this->get_player_2();
			ServerSend_SpawnPlayer_m04A73F9E89C4151A12CD97597AC532945BF4C364(L_30, L_31, /*hidden argument*/NULL);
		}

IL_00dc:
		{
		}

IL_00dd:
		{
			// foreach (Client _client in Server.clients.Values)
			bool L_32;
			L_32 = Enumerator_MoveNext_m0025FB98966D2133C69B2C397F302710B35B070C((Enumerator_t9A3556BDEA503A884CD611508C385D49EDBAA642 *)(&V_4), /*hidden argument*/Enumerator_MoveNext_m0025FB98966D2133C69B2C397F302710B35B070C_RuntimeMethod_var);
			if (L_32)
			{
				goto IL_00aa;
			}
		}

IL_00e6:
		{
			IL2CPP_LEAVE(0xF7, FINALLY_00e8);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00e8;
	}

FINALLY_00e8:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m999C882B57B245989B4203797DA595CCA1196F53((Enumerator_t9A3556BDEA503A884CD611508C385D49EDBAA642 *)(&V_4), /*hidden argument*/Enumerator_Dispose_m999C882B57B245989B4203797DA595CCA1196F53_RuntimeMethod_var);
		IL2CPP_END_FINALLY(232)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(232)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xF7, IL_00f7)
	}

IL_00f7:
	{
		// }
		return;
	}
}
// System.Void Client::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_Disconnect_m62DEBF109E88207BA5B05FDD48CC39E5A4890B50 (Client_t8953F633032099609444F417EEFFBED62649CECB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Client_U3CDisconnectU3Eb__9_0_mBF532E1F468E3BCF0B9DCA561E1797FF30C1E4FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadManager_tA8AFCF4EC354801306F01FDC18C608291549ADBD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CA7075A235BD3636AC6068832CF7303FBA2E2FD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"{tcp.socket.Client.RemoteEndPoint} has disconnected.");
		TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F * L_0 = __this->get_tcp_3();
		NullCheck(L_0);
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_1 = L_0->get_socket_0();
		NullCheck(L_1);
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_2;
		L_2 = TcpClient_get_Client_mC5F4444D9A96380DC38E84E8A2B9E864D600C9A7_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_3;
		L_3 = Socket_get_RemoteEndPoint_m262E08E8CD25A908CB87450FC73683AB9DF636A7(L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral0CA7075A235BD3636AC6068832CF7303FBA2E2FD, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_4, /*hidden argument*/NULL);
		// ThreadManager.ExecuteOnMainThread(() =>
		// {
		//     UnityEngine.Object.Destroy(player.gameObject);
		//     player = null;
		// });
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_5, __this, (intptr_t)((intptr_t)Client_U3CDisconnectU3Eb__9_0_mBF532E1F468E3BCF0B9DCA561E1797FF30C1E4FB_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ThreadManager_tA8AFCF4EC354801306F01FDC18C608291549ADBD_il2cpp_TypeInfo_var);
		ThreadManager_ExecuteOnMainThread_m8CB16531E7297D2D8A3D1E677D261D9D9A38C9A5(L_5, /*hidden argument*/NULL);
		// tcp.Disconnect();
		TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F * L_6 = __this->get_tcp_3();
		NullCheck(L_6);
		TCP_Disconnect_m603956CCAEB92E4D282C8137AA64BB4A5C28877D(L_6, /*hidden argument*/NULL);
		// udp.Disconnect();
		UDP_tFFDFA9C4A0D7E358A406440CC04A78608DE47451 * L_7 = __this->get_udp_4();
		NullCheck(L_7);
		UDP_Disconnect_m60DD8548EF64D7BE640AF467F9D53086AB72590B(L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Client::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client__cctor_m5C60BAD649F302A787619657A38D96FECD07698A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Client_t8953F633032099609444F417EEFFBED62649CECB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int dataBufferSize = 4096;
		((Client_t8953F633032099609444F417EEFFBED62649CECB_StaticFields*)il2cpp_codegen_static_fields_for(Client_t8953F633032099609444F417EEFFBED62649CECB_il2cpp_TypeInfo_var))->set_dataBufferSize_0(((int32_t)4096));
		return;
	}
}
// System.Void Client::<Disconnect>b__9_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_U3CDisconnectU3Eb__9_0_mBF532E1F468E3BCF0B9DCA561E1797FF30C1E4FB (Client_t8953F633032099609444F417EEFFBED62649CECB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.Object.Destroy(player.gameObject);
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_0 = __this->get_player_2();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_1, /*hidden argument*/NULL);
		// player = null;
		__this->set_player_2((Player_t5689617909B48F7640EA0892D85C92C13CC22C6F *)NULL);
		// });
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Constants::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Constants__ctor_m0EA1262B0E2FEAFEEA315AD5C2CF86C2B64DF6AF (Constants_t78794D7BFCCA2B1FCD918F9F9E1B108B6147AC02 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void NetworkManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManager_Awake_m264F69270EE58EA94BD639B7CFC5DBB6CEAD7E2F (NetworkManager_tDA8A4BECD3B0245AF4351E9ABC199B1B185BF606 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkManager_tDA8A4BECD3B0245AF4351E9ABC199B1B185BF606_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0858DB783B757ECA14D336F69D192ADBC7FFD25F);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (instance == null)
		NetworkManager_tDA8A4BECD3B0245AF4351E9ABC199B1B185BF606 * L_0 = ((NetworkManager_tDA8A4BECD3B0245AF4351E9ABC199B1B185BF606_StaticFields*)il2cpp_codegen_static_fields_for(NetworkManager_tDA8A4BECD3B0245AF4351E9ABC199B1B185BF606_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// instance = this;
		((NetworkManager_tDA8A4BECD3B0245AF4351E9ABC199B1B185BF606_StaticFields*)il2cpp_codegen_static_fields_for(NetworkManager_tDA8A4BECD3B0245AF4351E9ABC199B1B185BF606_il2cpp_TypeInfo_var))->set_instance_4(__this);
		goto IL_003d;
	}

IL_001a:
	{
		// else if (instance != this)
		NetworkManager_tDA8A4BECD3B0245AF4351E9ABC199B1B185BF606 * L_3 = ((NetworkManager_tDA8A4BECD3B0245AF4351E9ABC199B1B185BF606_StaticFields*)il2cpp_codegen_static_fields_for(NetworkManager_tDA8A4BECD3B0245AF4351E9ABC199B1B185BF606_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, __this, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_003d;
		}
	}
	{
		// Debug.Log("Instance already exists, destroying objects!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral0858DB783B757ECA14D336F69D192ADBC7FFD25F, /*hidden argument*/NULL);
		// Destroy(this);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(__this, /*hidden argument*/NULL);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void NetworkManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManager_Start_mF62F7D5D531194AFEF4C3FFAC8BFE07E10F72365 (NetworkManager_tDA8A4BECD3B0245AF4351E9ABC199B1B185BF606 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// QualitySettings.vSyncCount = 0;
		QualitySettings_set_vSyncCount_mE91593C022E003EC0028C9F86751FDF160F32A9E(0, /*hidden argument*/NULL);
		// Application.targetFrameRate = 50;
		Application_set_targetFrameRate_m0F44C8D07060E17D9D44D176888D14DBABE0CBFC(((int32_t)50), /*hidden argument*/NULL);
		// Server.Start(10, 42069);
		IL2CPP_RUNTIME_CLASS_INIT(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		Server_Start_m2972A53FBF742CA1BBDE16B3F5AE26E7E135A143(((int32_t)10), ((int32_t)42069), /*hidden argument*/NULL);
		// }
		return;
	}
}
// Player NetworkManager::InstantiatePlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * NetworkManager_InstantiatePlayer_m5D26CB7C918D8595BDAA408893EE909BF2E4073A (NetworkManager_tDA8A4BECD3B0245AF4351E9ABC199B1B185BF606 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * V_0 = NULL;
	{
		// return Instantiate(playerPrefab, Vector3.zero, Quaternion.identity).GetComponent<Player>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_playerPrefab_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_2;
		L_2 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_0, L_1, L_2, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		NullCheck(L_3);
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_4;
		L_4 = GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906(L_3, /*hidden argument*/GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906_RuntimeMethod_var);
		V_0 = L_4;
		goto IL_001e;
	}

IL_001e:
	{
		// }
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_5 = V_0;
		return L_5;
	}
}
// System.Void NetworkManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManager__ctor_m1C3DBB165C04540C090C4D74FEDBD83DEFC5C62F (NetworkManager_tDA8A4BECD3B0245AF4351E9ABC199B1B185BF606 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Packet::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Packet__ctor_mE2FEB2512B8EEB697985D72083A1A47D03C2CD06 (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m42BD5721699395D9FC6B6D889CE5A29C4C2F1778_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool disposed = false;
		__this->set_disposed_3((bool)0);
		// public Packet()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// buffer = new List<byte>(); // Initialize buffer
		List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * L_0 = (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)il2cpp_codegen_object_new(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF_il2cpp_TypeInfo_var);
		List_1__ctor_m42BD5721699395D9FC6B6D889CE5A29C4C2F1778(L_0, /*hidden argument*/List_1__ctor_m42BD5721699395D9FC6B6D889CE5A29C4C2F1778_RuntimeMethod_var);
		__this->set_buffer_0(L_0);
		// readPos = 0; // Set readPos to 0
		__this->set_readPos_2(0);
		// }
		return;
	}
}
// System.Void Packet::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Packet__ctor_mC1342F761E2948FA4CCC10BECE3AD126C07E676D (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * __this, int32_t ____id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m42BD5721699395D9FC6B6D889CE5A29C4C2F1778_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool disposed = false;
		__this->set_disposed_3((bool)0);
		// public Packet(int _id)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// buffer = new List<byte>(); // Initialize buffer
		List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * L_0 = (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)il2cpp_codegen_object_new(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF_il2cpp_TypeInfo_var);
		List_1__ctor_m42BD5721699395D9FC6B6D889CE5A29C4C2F1778(L_0, /*hidden argument*/List_1__ctor_m42BD5721699395D9FC6B6D889CE5A29C4C2F1778_RuntimeMethod_var);
		__this->set_buffer_0(L_0);
		// readPos = 0; // Set readPos to 0
		__this->set_readPos_2(0);
		// Write(_id); // Write packet id to the buffer
		int32_t L_1 = ____id0;
		Packet_Write_mC49636594BF6314C48A57ECCABF6F8A0CAD16D01(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Packet::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Packet__ctor_m1EA0D1BFB8E2F573993470A7EE9F8DCAE197AF3C (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m42BD5721699395D9FC6B6D889CE5A29C4C2F1778_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool disposed = false;
		__this->set_disposed_3((bool)0);
		// public Packet(byte[] _data)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// buffer = new List<byte>(); // Initialize buffer
		List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * L_0 = (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)il2cpp_codegen_object_new(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF_il2cpp_TypeInfo_var);
		List_1__ctor_m42BD5721699395D9FC6B6D889CE5A29C4C2F1778(L_0, /*hidden argument*/List_1__ctor_m42BD5721699395D9FC6B6D889CE5A29C4C2F1778_RuntimeMethod_var);
		__this->set_buffer_0(L_0);
		// readPos = 0; // Set readPos to 0
		__this->set_readPos_2(0);
		// SetBytes(_data);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ____data0;
		Packet_SetBytes_m3B6E29091B9E8D14BD9D98FD55B4135E195B805D(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Packet::SetBytes(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Packet_SetBytes_m3B6E29091B9E8D14BD9D98FD55B4135E195B805D (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mB2B88CFBC15DDCA705C411F3EF596B2E6C56997E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Write(_data);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ____data0;
		Packet_Write_m954F1A47819B29D9B1926636B520566D888102FC(__this, L_0, /*hidden argument*/NULL);
		// readableBuffer = buffer.ToArray();
		List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * L_1 = __this->get_buffer_0();
		NullCheck(L_1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = List_1_ToArray_mB2B88CFBC15DDCA705C411F3EF596B2E6C56997E(L_1, /*hidden argument*/List_1_ToArray_mB2B88CFBC15DDCA705C411F3EF596B2E6C56997E_RuntimeMethod_var);
		__this->set_readableBuffer_1(L_2);
		// }
		return;
	}
}
// System.Void Packet::WriteLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Packet_WriteLength_mD8E838ED42269317E9D520DF79AE406A29F052F8 (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_InsertRange_mFF2A777632BF8ECBE5AA5BB73EB4CEB9E297EBE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1C5E87EEF4B8F8CB985E6C4FD69D863ABAD79F14_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buffer.InsertRange(0, BitConverter.GetBytes(buffer.Count)); // Insert the byte length of the packet at the very beginning
		List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * L_0 = __this->get_buffer_0();
		List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * L_1 = __this->get_buffer_0();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m1C5E87EEF4B8F8CB985E6C4FD69D863ABAD79F14_inline(L_1, /*hidden argument*/List_1_get_Count_m1C5E87EEF4B8F8CB985E6C4FD69D863ABAD79F14_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3;
		L_3 = BitConverter_GetBytes_m5C926FE938C878F7E4E95A5DED46C34DB1431D39(L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		List_1_InsertRange_mFF2A777632BF8ECBE5AA5BB73EB4CEB9E297EBE5(L_0, 0, (RuntimeObject*)(RuntimeObject*)L_3, /*hidden argument*/List_1_InsertRange_mFF2A777632BF8ECBE5AA5BB73EB4CEB9E297EBE5_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Packet::InsertInt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Packet_InsertInt_mD8D79FCD7F4CA1E9D3F23B4F3712DAD695077991 (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * __this, int32_t ____value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_InsertRange_mFF2A777632BF8ECBE5AA5BB73EB4CEB9E297EBE5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buffer.InsertRange(0, BitConverter.GetBytes(_value)); // Insert the int at the start of the buffer
		List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * L_0 = __this->get_buffer_0();
		int32_t L_1 = ____value0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = BitConverter_GetBytes_m5C926FE938C878F7E4E95A5DED46C34DB1431D39(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		List_1_InsertRange_mFF2A777632BF8ECBE5AA5BB73EB4CEB9E297EBE5(L_0, 0, (RuntimeObject*)(RuntimeObject*)L_2, /*hidden argument*/List_1_InsertRange_mFF2A777632BF8ECBE5AA5BB73EB4CEB9E297EBE5_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Byte[] Packet::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Packet_ToArray_m979D2597878458D03805683B169F659D4DC7AFA8 (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mB2B88CFBC15DDCA705C411F3EF596B2E6C56997E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		// readableBuffer = buffer.ToArray();
		List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * L_0 = __this->get_buffer_0();
		NullCheck(L_0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1;
		L_1 = List_1_ToArray_mB2B88CFBC15DDCA705C411F3EF596B2E6C56997E(L_0, /*hidden argument*/List_1_ToArray_mB2B88CFBC15DDCA705C411F3EF596B2E6C56997E_RuntimeMethod_var);
		__this->set_readableBuffer_1(L_1);
		// return readableBuffer;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = __this->get_readableBuffer_1();
		V_0 = L_2;
		goto IL_001b;
	}

IL_001b:
	{
		// }
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = V_0;
		return L_3;
	}
}
// System.Int32 Packet::Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Packet_Length_mEDFD969DB9E45281A1B3FB6C54DDACA009E2D1EE (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1C5E87EEF4B8F8CB985E6C4FD69D863ABAD79F14_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// return buffer.Count; // Return the length of buffer
		List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * L_0 = __this->get_buffer_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m1C5E87EEF4B8F8CB985E6C4FD69D863ABAD79F14_inline(L_0, /*hidden argument*/List_1_get_Count_m1C5E87EEF4B8F8CB985E6C4FD69D863ABAD79F14_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Packet::UnreadLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Packet_UnreadLength_m35FB45ADAE9E5387F1586DDA9C3AC8D4ECC56B00 (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return Length() - readPos; // Return the remaining length (unread)
		int32_t L_0;
		L_0 = Packet_Length_mEDFD969DB9E45281A1B3FB6C54DDACA009E2D1EE(__this, /*hidden argument*/NULL);
		int32_t L_1 = __this->get_readPos_2();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_0011;
	}

IL_0011:
	{
		// }
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void Packet::Reset(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Packet_Reset_m38600E247A064753754D21711D55770D1791C636 (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * __this, bool ____shouldReset0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mC92A676A3C9BFEFF1C88BADCAF85070A2DCABED4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (_shouldReset)
		bool L_0 = ____shouldReset0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// buffer.Clear(); // Clear buffer
		List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * L_2 = __this->get_buffer_0();
		NullCheck(L_2);
		List_1_Clear_mC92A676A3C9BFEFF1C88BADCAF85070A2DCABED4(L_2, /*hidden argument*/List_1_Clear_mC92A676A3C9BFEFF1C88BADCAF85070A2DCABED4_RuntimeMethod_var);
		// readableBuffer = null;
		__this->set_readableBuffer_1((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL);
		// readPos = 0; // Reset readPos
		__this->set_readPos_2(0);
		goto IL_0034;
	}

IL_0024:
	{
		// readPos -= 4; // "Unread" the last read int
		int32_t L_3 = __this->get_readPos_2();
		__this->set_readPos_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)4)));
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void Packet::Write(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Packet_Write_m2C1E06149D87D18EACC830B82B41960D100B7DBA (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * __this, uint8_t ____value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0591BACA7245EA90F64F4C1E30A6809F74537CED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buffer.Add(_value);
		List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * L_0 = __this->get_buffer_0();
		uint8_t L_1 = ____value0;
		NullCheck(L_0);
		List_1_Add_m0591BACA7245EA90F64F4C1E30A6809F74537CED(L_0, L_1, /*hidden argument*/List_1_Add_m0591BACA7245EA90F64F4C1E30A6809F74537CED_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Packet::Write(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Packet_Write_m954F1A47819B29D9B1926636B520566D888102FC (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m207006733154C20C7F72BFDD693CF79C1B8F4B5F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buffer.AddRange(_value);
		List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * L_0 = __this->get_buffer_0();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ____value0;
		NullCheck(L_0);
		List_1_AddRange_m207006733154C20C7F72BFDD693CF79C1B8F4B5F(L_0, (RuntimeObject*)(RuntimeObject*)L_1, /*hidden argument*/List_1_AddRange_m207006733154C20C7F72BFDD693CF79C1B8F4B5F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Packet::Write(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Packet_Write_m2D7B9825AAC037D58580AB16A02F63F0CCBABBE4 (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * __this, int16_t ____value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m207006733154C20C7F72BFDD693CF79C1B8F4B5F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buffer.AddRange(BitConverter.GetBytes(_value));
		List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * L_0 = __this->get_buffer_0();
		int16_t L_1 = ____value0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = BitConverter_GetBytes_m4178DFE7B47F12FAF452AA4742B16FC3BA9618A8(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		List_1_AddRange_m207006733154C20C7F72BFDD693CF79C1B8F4B5F(L_0, (RuntimeObject*)(RuntimeObject*)L_2, /*hidden argument*/List_1_AddRange_m207006733154C20C7F72BFDD693CF79C1B8F4B5F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Packet::Write(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Packet_Write_mC49636594BF6314C48A57ECCABF6F8A0CAD16D01 (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * __this, int32_t ____value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m207006733154C20C7F72BFDD693CF79C1B8F4B5F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buffer.AddRange(BitConverter.GetBytes(_value));
		List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * L_0 = __this->get_buffer_0();
		int32_t L_1 = ____value0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = BitConverter_GetBytes_m5C926FE938C878F7E4E95A5DED46C34DB1431D39(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		List_1_AddRange_m207006733154C20C7F72BFDD693CF79C1B8F4B5F(L_0, (RuntimeObject*)(RuntimeObject*)L_2, /*hidden argument*/List_1_AddRange_m207006733154C20C7F72BFDD693CF79C1B8F4B5F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Packet::Write(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Packet_Write_m164EB94645BE5DAEFB9B92C32022D8F13321946C (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * __this, int64_t ____value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m207006733154C20C7F72BFDD693CF79C1B8F4B5F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buffer.AddRange(BitConverter.GetBytes(_value));
		List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * L_0 = __this->get_buffer_0();
		int64_t L_1 = ____value0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = BitConverter_GetBytes_m4BCB9C5EF4286885A640995E44AB52E5F629E3C7(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		List_1_AddRange_m207006733154C20C7F72BFDD693CF79C1B8F4B5F(L_0, (RuntimeObject*)(RuntimeObject*)L_2, /*hidden argument*/List_1_AddRange_m207006733154C20C7F72BFDD693CF79C1B8F4B5F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Packet::Write(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Packet_Write_mE5C084185B94AFDD0E402E25377FC5A1F5E81689 (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * __this, float ____value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m207006733154C20C7F72BFDD693CF79C1B8F4B5F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buffer.AddRange(BitConverter.GetBytes(_value));
		List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * L_0 = __this->get_buffer_0();
		float L_1 = ____value0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = BitConverter_GetBytes_m7ED1DB1B6D850DF7D04A7122E1229883226C10D2(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		List_1_AddRange_m207006733154C20C7F72BFDD693CF79C1B8F4B5F(L_0, (RuntimeObject*)(RuntimeObject*)L_2, /*hidden argument*/List_1_AddRange_m207006733154C20C7F72BFDD693CF79C1B8F4B5F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Packet::Write(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Packet_Write_m6C6032BE38478927B27064E867F61FFA8A251D98 (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * __this, bool ____value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m207006733154C20C7F72BFDD693CF79C1B8F4B5F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buffer.AddRange(BitConverter.GetBytes(_value));
		List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * L_0 = __this->get_buffer_0();
		bool L_1 = ____value0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = BitConverter_GetBytes_mE6E5FC94391A9B5951CD8A9D61B00F8B3FA41970(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		List_1_AddRange_m207006733154C20C7F72BFDD693CF79C1B8F4B5F(L_0, (RuntimeObject*)(RuntimeObject*)L_2, /*hidden argument*/List_1_AddRange_m207006733154C20C7F72BFDD693CF79C1B8F4B5F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Packet::Write(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Packet_Write_m85641572D1BD2BF1DB5ED82EA8BD352F1D7E6F6D (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * __this, String_t* ____value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m207006733154C20C7F72BFDD693CF79C1B8F4B5F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Write(_value.Length); // Add the length of the string to the packet
		String_t* L_0 = ____value0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_0, /*hidden argument*/NULL);
		Packet_Write_mC49636594BF6314C48A57ECCABF6F8A0CAD16D01(__this, L_1, /*hidden argument*/NULL);
		// buffer.AddRange(Encoding.ASCII.GetBytes(_value)); // Add the string itself
		List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * L_2 = __this->get_buffer_0();
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_3;
		L_3 = Encoding_get_ASCII_mD3E8370997347A3F6822BDA50BC0A1DBC0059173(/*hidden argument*/NULL);
		String_t* L_4 = ____value0;
		NullCheck(L_3);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5;
		L_5 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(15 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_3, L_4);
		NullCheck(L_2);
		List_1_AddRange_m207006733154C20C7F72BFDD693CF79C1B8F4B5F(L_2, (RuntimeObject*)(RuntimeObject*)L_5, /*hidden argument*/List_1_AddRange_m207006733154C20C7F72BFDD693CF79C1B8F4B5F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Packet::Write(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Packet_Write_mBB60F6EB2D18CCE21AF5ACD9518A2B46642B4C8F (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____value0, const RuntimeMethod* method)
{
	{
		// Write(_value.x);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ____value0;
		float L_1 = L_0.get_x_0();
		Packet_Write_mE5C084185B94AFDD0E402E25377FC5A1F5E81689(__this, L_1, /*hidden argument*/NULL);
		// Write(_value.y);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ____value0;
		float L_3 = L_2.get_y_1();
		Packet_Write_mE5C084185B94AFDD0E402E25377FC5A1F5E81689(__this, L_3, /*hidden argument*/NULL);
		// Write(_value.z);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ____value0;
		float L_5 = L_4.get_z_2();
		Packet_Write_mE5C084185B94AFDD0E402E25377FC5A1F5E81689(__this, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Packet::Write(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Packet_Write_m7B8307F96B7DD96056F5A22241C54DB419E18B67 (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ____value0, const RuntimeMethod* method)
{
	{
		// Write(_value.x);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = ____value0;
		float L_1 = L_0.get_x_0();
		Packet_Write_mE5C084185B94AFDD0E402E25377FC5A1F5E81689(__this, L_1, /*hidden argument*/NULL);
		// Write(_value.y);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_2 = ____value0;
		float L_3 = L_2.get_y_1();
		Packet_Write_mE5C084185B94AFDD0E402E25377FC5A1F5E81689(__this, L_3, /*hidden argument*/NULL);
		// Write(_value.z);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4 = ____value0;
		float L_5 = L_4.get_z_2();
		Packet_Write_mE5C084185B94AFDD0E402E25377FC5A1F5E81689(__this, L_5, /*hidden argument*/NULL);
		// Write(_value.w);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6 = ____value0;
		float L_7 = L_6.get_w_3();
		Packet_Write_mE5C084185B94AFDD0E402E25377FC5A1F5E81689(__this, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Byte Packet::ReadByte(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Packet_ReadByte_mE7C0DE3021F7E6EC0DB9226B52A1D1C7ED62FF24 (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * __this, bool ____moveReadPos0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1C5E87EEF4B8F8CB985E6C4FD69D863ABAD79F14_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	uint8_t V_1 = 0x0;
	bool V_2 = false;
	uint8_t V_3 = 0x0;
	{
		// if (buffer.Count > readPos)
		List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * L_0 = __this->get_buffer_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m1C5E87EEF4B8F8CB985E6C4FD69D863ABAD79F14_inline(L_0, /*hidden argument*/List_1_get_Count_m1C5E87EEF4B8F8CB985E6C4FD69D863ABAD79F14_RuntimeMethod_var);
		int32_t L_2 = __this->get_readPos_2();
		V_0 = (bool)((((int32_t)L_1) > ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0040;
		}
	}
	{
		// byte _value = readableBuffer[readPos]; // Get the byte at readPos' position
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = __this->get_readableBuffer_1();
		int32_t L_5 = __this->get_readPos_2();
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		// if (_moveReadPos)
		bool L_8 = ____moveReadPos0;
		V_2 = L_8;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_003c;
		}
	}
	{
		// readPos += 1; // Increase readPos by 1
		int32_t L_10 = __this->get_readPos_2();
		__this->set_readPos_2(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)));
	}

IL_003c:
	{
		// return _value; // Return the byte
		uint8_t L_11 = V_1;
		V_3 = L_11;
		goto IL_004c;
	}

IL_0040:
	{
		// throw new Exception("Could not read value of type 'byte'!");
		Exception_t * L_12 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6A0B0D64E849533D2EE44E5E82BD6CDD4E36999A)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Packet_ReadByte_mE7C0DE3021F7E6EC0DB9226B52A1D1C7ED62FF24_RuntimeMethod_var)));
	}

IL_004c:
	{
		// }
		uint8_t L_13 = V_3;
		return L_13;
	}
}
// System.Byte[] Packet::ReadBytes(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* Packet_ReadBytes_mC990811110E0B0A02D489453635CF81DFE16FA0A (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * __this, int32_t ____length0, bool ____moveReadPos1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetRange_mD85F219E3DAB0C570BFCC53A7A0789013CA820FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mB2B88CFBC15DDCA705C411F3EF596B2E6C56997E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1C5E87EEF4B8F8CB985E6C4FD69D863ABAD79F14_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	bool V_2 = false;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_3 = NULL;
	{
		// if (buffer.Count > readPos)
		List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * L_0 = __this->get_buffer_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m1C5E87EEF4B8F8CB985E6C4FD69D863ABAD79F14_inline(L_0, /*hidden argument*/List_1_get_Count_m1C5E87EEF4B8F8CB985E6C4FD69D863ABAD79F14_RuntimeMethod_var);
		int32_t L_2 = __this->get_readPos_2();
		V_0 = (bool)((((int32_t)L_1) > ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_004a;
		}
	}
	{
		// byte[] _value = buffer.GetRange(readPos, _length).ToArray(); // Get the bytes at readPos' position with a range of _length
		List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * L_4 = __this->get_buffer_0();
		int32_t L_5 = __this->get_readPos_2();
		int32_t L_6 = ____length0;
		NullCheck(L_4);
		List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * L_7;
		L_7 = List_1_GetRange_mD85F219E3DAB0C570BFCC53A7A0789013CA820FB(L_4, L_5, L_6, /*hidden argument*/List_1_GetRange_mD85F219E3DAB0C570BFCC53A7A0789013CA820FB_RuntimeMethod_var);
		NullCheck(L_7);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8;
		L_8 = List_1_ToArray_mB2B88CFBC15DDCA705C411F3EF596B2E6C56997E(L_7, /*hidden argument*/List_1_ToArray_mB2B88CFBC15DDCA705C411F3EF596B2E6C56997E_RuntimeMethod_var);
		V_1 = L_8;
		// if (_moveReadPos)
		bool L_9 = ____moveReadPos1;
		V_2 = L_9;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0046;
		}
	}
	{
		// readPos += _length; // Increase readPos by _length
		int32_t L_11 = __this->get_readPos_2();
		int32_t L_12 = ____length0;
		__this->set_readPos_2(((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)L_12)));
	}

IL_0046:
	{
		// return _value; // Return the bytes
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = V_1;
		V_3 = L_13;
		goto IL_0056;
	}

IL_004a:
	{
		// throw new Exception("Could not read value of type 'byte[]'!");
		Exception_t * L_14 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2E8478BECF6599AD7D02CB69FE271A4E2AB11AD2)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Packet_ReadBytes_mC990811110E0B0A02D489453635CF81DFE16FA0A_RuntimeMethod_var)));
	}

IL_0056:
	{
		// }
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = V_3;
		return L_15;
	}
}
// System.Int16 Packet::ReadShort(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Packet_ReadShort_m564E187655BE53ED0164F26AF7AD36B4EDC618EE (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * __this, bool ____moveReadPos0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1C5E87EEF4B8F8CB985E6C4FD69D863ABAD79F14_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int16_t V_1 = 0;
	bool V_2 = false;
	int16_t V_3 = 0;
	{
		// if (buffer.Count > readPos)
		List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * L_0 = __this->get_buffer_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m1C5E87EEF4B8F8CB985E6C4FD69D863ABAD79F14_inline(L_0, /*hidden argument*/List_1_get_Count_m1C5E87EEF4B8F8CB985E6C4FD69D863ABAD79F14_RuntimeMethod_var);
		int32_t L_2 = __this->get_readPos_2();
		V_0 = (bool)((((int32_t)L_1) > ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0044;
		}
	}
	{
		// short _value = BitConverter.ToInt16(readableBuffer, readPos); // Convert the bytes to a short
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = __this->get_readableBuffer_1();
		int32_t L_5 = __this->get_readPos_2();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		int16_t L_6;
		L_6 = BitConverter_ToInt16_mD217955ED0C3E56F79DECE745A38857E4A8F6C8E(L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// if (_moveReadPos)
		bool L_7 = ____moveReadPos0;
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0040;
		}
	}
	{
		// readPos += 2; // Increase readPos by 2
		int32_t L_9 = __this->get_readPos_2();
		__this->set_readPos_2(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)2)));
	}

IL_0040:
	{
		// return _value; // Return the short
		int16_t L_10 = V_1;
		V_3 = L_10;
		goto IL_0050;
	}

IL_0044:
	{
		// throw new Exception("Could not read value of type 'short'!");
		Exception_t * L_11 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66031200623AE4E82DCAFB1E5564C9C7CB0AE041)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Packet_ReadShort_m564E187655BE53ED0164F26AF7AD36B4EDC618EE_RuntimeMethod_var)));
	}

IL_0050:
	{
		// }
		int16_t L_12 = V_3;
		return L_12;
	}
}
// System.Int32 Packet::ReadInt(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Packet_ReadInt_m7C7C7168F3119B364182D2B3DE98718C919966A5 (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * __this, bool ____moveReadPos0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1C5E87EEF4B8F8CB985E6C4FD69D863ABAD79F14_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		// if (buffer.Count > readPos)
		List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * L_0 = __this->get_buffer_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m1C5E87EEF4B8F8CB985E6C4FD69D863ABAD79F14_inline(L_0, /*hidden argument*/List_1_get_Count_m1C5E87EEF4B8F8CB985E6C4FD69D863ABAD79F14_RuntimeMethod_var);
		int32_t L_2 = __this->get_readPos_2();
		V_0 = (bool)((((int32_t)L_1) > ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0044;
		}
	}
	{
		// int _value = BitConverter.ToInt32(readableBuffer, readPos); // Convert the bytes to an int
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = __this->get_readableBuffer_1();
		int32_t L_5 = __this->get_readPos_2();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = BitConverter_ToInt32_m09562D0C66673FA4883600754E82F22CAFED8892(L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// if (_moveReadPos)
		bool L_7 = ____moveReadPos0;
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0040;
		}
	}
	{
		// readPos += 4; // Increase readPos by 4
		int32_t L_9 = __this->get_readPos_2();
		__this->set_readPos_2(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)4)));
	}

IL_0040:
	{
		// return _value; // Return the int
		int32_t L_10 = V_1;
		V_3 = L_10;
		goto IL_0050;
	}

IL_0044:
	{
		// throw new Exception("Could not read value of type 'int'!");
		Exception_t * L_11 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDD694BE6D566A08A62BD761743A2050C0CB27C91)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Packet_ReadInt_m7C7C7168F3119B364182D2B3DE98718C919966A5_RuntimeMethod_var)));
	}

IL_0050:
	{
		// }
		int32_t L_12 = V_3;
		return L_12;
	}
}
// System.Int64 Packet::ReadLong(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Packet_ReadLong_mF6F540FEAA406E571C5777ED021AE4C8298DE49B (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * __this, bool ____moveReadPos0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1C5E87EEF4B8F8CB985E6C4FD69D863ABAD79F14_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int64_t V_1 = 0;
	bool V_2 = false;
	int64_t V_3 = 0;
	{
		// if (buffer.Count > readPos)
		List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * L_0 = __this->get_buffer_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m1C5E87EEF4B8F8CB985E6C4FD69D863ABAD79F14_inline(L_0, /*hidden argument*/List_1_get_Count_m1C5E87EEF4B8F8CB985E6C4FD69D863ABAD79F14_RuntimeMethod_var);
		int32_t L_2 = __this->get_readPos_2();
		V_0 = (bool)((((int32_t)L_1) > ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0044;
		}
	}
	{
		// long _value = BitConverter.ToInt64(readableBuffer, readPos); // Convert the bytes to a long
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = __this->get_readableBuffer_1();
		int32_t L_5 = __this->get_readPos_2();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		int64_t L_6;
		L_6 = BitConverter_ToInt64_m6B5A5B4C68D036256417E9348FA25A257015B37E(L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// if (_moveReadPos)
		bool L_7 = ____moveReadPos0;
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0040;
		}
	}
	{
		// readPos += 8; // Increase readPos by 8
		int32_t L_9 = __this->get_readPos_2();
		__this->set_readPos_2(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)8)));
	}

IL_0040:
	{
		// return _value; // Return the long
		int64_t L_10 = V_1;
		V_3 = L_10;
		goto IL_0050;
	}

IL_0044:
	{
		// throw new Exception("Could not read value of type 'long'!");
		Exception_t * L_11 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral08329E95DECE698B83A3B87087FC527124446958)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Packet_ReadLong_mF6F540FEAA406E571C5777ED021AE4C8298DE49B_RuntimeMethod_var)));
	}

IL_0050:
	{
		// }
		int64_t L_12 = V_3;
		return L_12;
	}
}
// System.Single Packet::ReadFloat(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Packet_ReadFloat_m7593E3FC9D71870BB02F88F2659801ED65BA878E (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * __this, bool ____moveReadPos0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1C5E87EEF4B8F8CB985E6C4FD69D863ABAD79F14_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	{
		// if (buffer.Count > readPos)
		List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * L_0 = __this->get_buffer_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m1C5E87EEF4B8F8CB985E6C4FD69D863ABAD79F14_inline(L_0, /*hidden argument*/List_1_get_Count_m1C5E87EEF4B8F8CB985E6C4FD69D863ABAD79F14_RuntimeMethod_var);
		int32_t L_2 = __this->get_readPos_2();
		V_0 = (bool)((((int32_t)L_1) > ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0044;
		}
	}
	{
		// float _value = BitConverter.ToSingle(readableBuffer, readPos); // Convert the bytes to a float
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = __this->get_readableBuffer_1();
		int32_t L_5 = __this->get_readPos_2();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		float L_6;
		L_6 = BitConverter_ToSingle_mF9F12631D5CA7C2D4BFE3F89A22D39FB45E1986F(L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// if (_moveReadPos)
		bool L_7 = ____moveReadPos0;
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0040;
		}
	}
	{
		// readPos += 4; // Increase readPos by 4
		int32_t L_9 = __this->get_readPos_2();
		__this->set_readPos_2(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)4)));
	}

IL_0040:
	{
		// return _value; // Return the float
		float L_10 = V_1;
		V_3 = L_10;
		goto IL_0050;
	}

IL_0044:
	{
		// throw new Exception("Could not read value of type 'float'!");
		Exception_t * L_11 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB859421A9D790444A7B9ECE4BFE8E4D64FC796ED)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Packet_ReadFloat_m7593E3FC9D71870BB02F88F2659801ED65BA878E_RuntimeMethod_var)));
	}

IL_0050:
	{
		// }
		float L_12 = V_3;
		return L_12;
	}
}
// System.Boolean Packet::ReadBool(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Packet_ReadBool_m7F694CE2AAF877AE06E4DBC1A70E15DD1D8D0A8C (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * __this, bool ____moveReadPos0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1C5E87EEF4B8F8CB985E6C4FD69D863ABAD79F14_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (buffer.Count > readPos)
		List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * L_0 = __this->get_buffer_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m1C5E87EEF4B8F8CB985E6C4FD69D863ABAD79F14_inline(L_0, /*hidden argument*/List_1_get_Count_m1C5E87EEF4B8F8CB985E6C4FD69D863ABAD79F14_RuntimeMethod_var);
		int32_t L_2 = __this->get_readPos_2();
		V_0 = (bool)((((int32_t)L_1) > ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0044;
		}
	}
	{
		// bool _value = BitConverter.ToBoolean(readableBuffer, readPos); // Convert the bytes to a bool
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = __this->get_readableBuffer_1();
		int32_t L_5 = __this->get_readPos_2();
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = BitConverter_ToBoolean_m13119336C6C1F7756B434E5667627B41BE125AB2(L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// if (_moveReadPos)
		bool L_7 = ____moveReadPos0;
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0040;
		}
	}
	{
		// readPos += 1; // Increase readPos by 1
		int32_t L_9 = __this->get_readPos_2();
		__this->set_readPos_2(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)));
	}

IL_0040:
	{
		// return _value; // Return the bool
		bool L_10 = V_1;
		V_3 = L_10;
		goto IL_0050;
	}

IL_0044:
	{
		// throw new Exception("Could not read value of type 'bool'!");
		Exception_t * L_11 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFF31DA9350857E7D141A5F6AF5746C18D7F3D1F1)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Packet_ReadBool_m7F694CE2AAF877AE06E4DBC1A70E15DD1D8D0A8C_RuntimeMethod_var)));
	}

IL_0050:
	{
		// }
		bool L_12 = V_3;
		return L_12;
	}
}
// System.String Packet::ReadString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Packet_ReadString_mD6F9D09E50728912C91AC4D2450296FF5371F015 (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * __this, bool ____moveReadPos0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	bool V_2 = false;
	String_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	int32_t G_B4_0 = 0;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			// int _length = ReadInt(); // Get the length of the string
			int32_t L_0;
			L_0 = Packet_ReadInt_m7C7C7168F3119B364182D2B3DE98718C919966A5(__this, (bool)1, /*hidden argument*/NULL);
			V_0 = L_0;
			// string _value = Encoding.ASCII.GetString(readableBuffer, readPos, _length); // Convert the bytes to a string
			Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_1;
			L_1 = Encoding_get_ASCII_mD3E8370997347A3F6822BDA50BC0A1DBC0059173(/*hidden argument*/NULL);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = __this->get_readableBuffer_1();
			int32_t L_3 = __this->get_readPos_2();
			int32_t L_4 = V_0;
			NullCheck(L_1);
			String_t* L_5;
			L_5 = VirtFuncInvoker3< String_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(32 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_1, L_2, L_3, L_4);
			V_1 = L_5;
			// if (_moveReadPos && _value.Length > 0)
			bool L_6 = ____moveReadPos0;
			if (!L_6)
			{
				goto IL_0030;
			}
		}

IL_0025:
		{
			String_t* L_7 = V_1;
			NullCheck(L_7);
			int32_t L_8;
			L_8 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_7, /*hidden argument*/NULL);
			G_B4_0 = ((((int32_t)L_8) > ((int32_t)0))? 1 : 0);
			goto IL_0031;
		}

IL_0030:
		{
			G_B4_0 = 0;
		}

IL_0031:
		{
			V_2 = (bool)G_B4_0;
			bool L_9 = V_2;
			if (!L_9)
			{
				goto IL_0045;
			}
		}

IL_0035:
		{
			// readPos += _length; // Increase readPos by the length of the string
			int32_t L_10 = __this->get_readPos_2();
			int32_t L_11 = V_0;
			__this->set_readPos_2(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_11)));
		}

IL_0045:
		{
			// return _value; // Return the string
			String_t* L_12 = V_1;
			V_3 = L_12;
			goto IL_0056;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0049;
		}
		throw e;
	}

CATCH_0049:
	{ // begin catch(System.Object)
		// catch
		// throw new Exception("Could not read value of type 'string'!");
		Exception_t * L_13 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE6DFAACE6503D0E427C9B379D610DA8192C28119)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Packet_ReadString_mD6F9D09E50728912C91AC4D2450296FF5371F015_RuntimeMethod_var)));
	} // end catch (depth: 1)

IL_0056:
	{
		// }
		String_t* L_14 = V_3;
		return L_14;
	}
}
// UnityEngine.Vector3 Packet::ReadVector3(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Packet_ReadVector3_mCCC44440C63EFCD9A119554A7BCCDA1301955AB9 (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * __this, bool ____moveReadPos0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Vector3(ReadFloat(_moveReadPos), ReadFloat(_moveReadPos), ReadFloat(_moveReadPos));
		bool L_0 = ____moveReadPos0;
		float L_1;
		L_1 = Packet_ReadFloat_m7593E3FC9D71870BB02F88F2659801ED65BA878E(__this, L_0, /*hidden argument*/NULL);
		bool L_2 = ____moveReadPos0;
		float L_3;
		L_3 = Packet_ReadFloat_m7593E3FC9D71870BB02F88F2659801ED65BA878E(__this, L_2, /*hidden argument*/NULL);
		bool L_4 = ____moveReadPos0;
		float L_5;
		L_5 = Packet_ReadFloat_m7593E3FC9D71870BB02F88F2659801ED65BA878E(__this, L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), L_1, L_3, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		// }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Quaternion Packet::ReadQuaternion(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Packet_ReadQuaternion_mB549BAF71312050895A62E0657DF13670258EF68 (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * __this, bool ____moveReadPos0, const RuntimeMethod* method)
{
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Quaternion(ReadFloat(_moveReadPos), ReadFloat(_moveReadPos), ReadFloat(_moveReadPos), ReadFloat(_moveReadPos));
		bool L_0 = ____moveReadPos0;
		float L_1;
		L_1 = Packet_ReadFloat_m7593E3FC9D71870BB02F88F2659801ED65BA878E(__this, L_0, /*hidden argument*/NULL);
		bool L_2 = ____moveReadPos0;
		float L_3;
		L_3 = Packet_ReadFloat_m7593E3FC9D71870BB02F88F2659801ED65BA878E(__this, L_2, /*hidden argument*/NULL);
		bool L_4 = ____moveReadPos0;
		float L_5;
		L_5 = Packet_ReadFloat_m7593E3FC9D71870BB02F88F2659801ED65BA878E(__this, L_4, /*hidden argument*/NULL);
		bool L_6 = ____moveReadPos0;
		float L_7;
		L_7 = Packet_ReadFloat_m7593E3FC9D71870BB02F88F2659801ED65BA878E(__this, L_6, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Quaternion__ctor_m564FA9302F5B9DA8BAB97B0A2D86FFE83ACAA421((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0025;
	}

IL_0025:
	{
		// }
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9 = V_0;
		return L_9;
	}
}
// System.Void Packet::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Packet_Dispose_m47B3A07948008F17F27BAEB2B4D19A0DFD86EC37 (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * __this, bool ____disposing0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (!disposed)
		bool L_0 = __this->get_disposed_3();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		// if (_disposing)
		bool L_2 = ____disposing0;
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// buffer = null;
		__this->set_buffer_0((List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)NULL);
		// readableBuffer = null;
		__this->set_readableBuffer_1((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL);
		// readPos = 0;
		__this->set_readPos_2(0);
	}

IL_002b:
	{
		// disposed = true;
		__this->set_disposed_3((bool)1);
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void Packet::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Packet_Dispose_m558D6DD5BFA44756BDDE7C685B9EB6BA3A426CFC (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Dispose(true);
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void Packet::Dispose(System.Boolean) */, __this, (bool)1);
		// GC.SuppressFinalize(this);
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
		// }
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
// System.Void Player::Initialize(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Initialize_m016AD73AC7E82312C410DCA6FC1D595A8B805A84 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, int32_t ____id0, String_t* ____username1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// id = _id;
		int32_t L_0 = ____id0;
		__this->set_id_4(L_0);
		// username = _username;
		String_t* L_1 = ____username1;
		__this->set_username_5(L_1);
		// inputs = new bool[4];
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_2 = (BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)SZArrayNew(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->set_inputs_7(L_2);
		// }
		return;
	}
}
// System.Void Player::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_FixedUpdate_mD7447EDFC86F29A3E5FBDEF7E0139535BD4C5088 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// Vector2 _inputDirection = Vector2.zero;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		L_0 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (inputs[0])
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_1 = __this->get_inputs_7();
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint8_t L_3 = (uint8_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_1 = (bool)L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		// _inputDirection.y += 1;
		float* L_5 = (&V_0)->get_address_of_y_1();
		float* L_6 = L_5;
		float L_7 = *((float*)L_6);
		*((float*)L_6) = (float)((float)il2cpp_codegen_add((float)L_7, (float)(1.0f)));
	}

IL_0025:
	{
		// if (inputs[1])
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_8 = __this->get_inputs_7();
		NullCheck(L_8);
		int32_t L_9 = 1;
		uint8_t L_10 = (uint8_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_2 = (bool)L_10;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0043;
		}
	}
	{
		// _inputDirection.y -= 1;
		float* L_12 = (&V_0)->get_address_of_y_1();
		float* L_13 = L_12;
		float L_14 = *((float*)L_13);
		*((float*)L_13) = (float)((float)il2cpp_codegen_subtract((float)L_14, (float)(1.0f)));
	}

IL_0043:
	{
		// if (inputs[2])
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_15 = __this->get_inputs_7();
		NullCheck(L_15);
		int32_t L_16 = 2;
		uint8_t L_17 = (uint8_t)(L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_3 = (bool)L_17;
		bool L_18 = V_3;
		if (!L_18)
		{
			goto IL_0061;
		}
	}
	{
		// _inputDirection.x -= 1;
		float* L_19 = (&V_0)->get_address_of_x_0();
		float* L_20 = L_19;
		float L_21 = *((float*)L_20);
		*((float*)L_20) = (float)((float)il2cpp_codegen_subtract((float)L_21, (float)(1.0f)));
	}

IL_0061:
	{
		// if (inputs[3])
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_22 = __this->get_inputs_7();
		NullCheck(L_22);
		int32_t L_23 = 3;
		uint8_t L_24 = (uint8_t)(L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_4 = (bool)L_24;
		bool L_25 = V_4;
		if (!L_25)
		{
			goto IL_0081;
		}
	}
	{
		// _inputDirection.x += 1;
		float* L_26 = (&V_0)->get_address_of_x_0();
		float* L_27 = L_26;
		float L_28 = *((float*)L_27);
		*((float*)L_27) = (float)((float)il2cpp_codegen_add((float)L_28, (float)(1.0f)));
	}

IL_0081:
	{
		// Move(_inputDirection);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_29 = V_0;
		Player_Move_m6D004C7D5D216998D464CCF34BD672185557CC1B(__this, L_29, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Player::Move(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Move_m6D004C7D5D216998D464CCF34BD672185557CC1B (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ____inputDirection0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 _moveDirection = transform.right * _inputDirection.x + transform.forward * _inputDirection.y;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE(L_0, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ____inputDirection0;
		float L_3 = L_2.get_x_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_1, L_3, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_5, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = ____inputDirection0;
		float L_8 = L_7.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_6, L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_4, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		// transform.position += _moveDirection * moveSpeed;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12 = L_11;
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = V_0;
		float L_15 = __this->get_moveSpeed_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_14, L_15, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_13, L_16, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_12, L_17, /*hidden argument*/NULL);
		// ServerSend.PlayerPosition(this);
		ServerSend_PlayerPosition_m59EA88BA57257A446905567D3B85459E29FFA584(__this, /*hidden argument*/NULL);
		// ServerSend.PlayerRotation(this);
		ServerSend_PlayerRotation_m041BCD426D1D652B52C015C6778D4C1BB3DCDDBC(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Player::SetInput(System.Boolean[],UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_SetInput_m552567E7B702FF7D84CE3D6D6D6798F66B7054A3 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ____inputs0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ____rotation1, const RuntimeMethod* method)
{
	{
		// inputs = _inputs;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_0 = ____inputs0;
		__this->set_inputs_7(L_0);
		// transform.rotation = _rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_2 = ____rotation1;
		NullCheck(L_1);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_mDE8EB5B351975D4E7E24DE341B8B49B8A29CC2B7 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// private float moveSpeed = 5f / Constants.TICKS_PER_SEC;
		__this->set_moveSpeed_6((0.100000001f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Int32 Server::get_MaxPlayers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Server_get_MaxPlayers_m3F7A8B7BB253AA6368118B66DCCDBF205ACB560A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int MaxPlayers { get; private set; }
		IL2CPP_RUNTIME_CLASS_INIT(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_StaticFields*)il2cpp_codegen_static_fields_for(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var))->get_U3CMaxPlayersU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Server::set_MaxPlayers(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Server_set_MaxPlayers_m2E7E6A75CE7524FEDCE5BC756DF5C2A5714651D5 (int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int MaxPlayers { get; private set; }
		int32_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		((Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_StaticFields*)il2cpp_codegen_static_fields_for(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var))->set_U3CMaxPlayersU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Int32 Server::get_Port()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Server_get_Port_m272775376BE0B9E98FD64224D4F97F346DFA013F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int Port { get; private set; }
		IL2CPP_RUNTIME_CLASS_INIT(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_StaticFields*)il2cpp_codegen_static_fields_for(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var))->get_U3CPortU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Server::set_Port(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Server_set_Port_mAB7D8B90A5CCB1DB4B96B39A501EB2EAAE581BED (int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int Port { get; private set; }
		int32_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		((Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_StaticFields*)il2cpp_codegen_static_fields_for(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var))->set_U3CPortU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void Server::Start(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Server_Start_m2972A53FBF742CA1BBDE16B3F5AE26E7E135A143 (int32_t ____maxPlayers0, int32_t ____port1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Server_TCPConnectCallback_m3448142AB53DC47D8FAA9C1A19DCC3ACDCC311E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Server_UDPReceiveCallback_mE0FC6ECDB90B754BC40227B5BB17C617B8DC9FAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpClient_tB1B7578C96A20B6A0B58AC3FD3E1CB469375B920_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral236B9E73A29874E7D15820672595F556FFB1B241);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60220D6B4786C9BE0D76AE71641B5555F1A55030);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MaxPlayers = _maxPlayers;
		int32_t L_0 = ____maxPlayers0;
		IL2CPP_RUNTIME_CLASS_INIT(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		Server_set_MaxPlayers_m2E7E6A75CE7524FEDCE5BC756DF5C2A5714651D5_inline(L_0, /*hidden argument*/NULL);
		// Port = _port;
		int32_t L_1 = ____port1;
		Server_set_Port_mAB7D8B90A5CCB1DB4B96B39A501EB2EAAE581BED_inline(L_1, /*hidden argument*/NULL);
		// Debug.Log("Starting server...");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral60220D6B4786C9BE0D76AE71641B5555F1A55030, /*hidden argument*/NULL);
		// InitializeServerData();
		Server_InitializeServerData_m860294022C7C6C583DAC55C16AFF52CB1F4B9A98(/*hidden argument*/NULL);
		// tcpListener = new TcpListener(IPAddress.Any, Port);
		IL2CPP_RUNTIME_CLASS_INIT(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_il2cpp_TypeInfo_var);
		IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_2 = ((IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_il2cpp_TypeInfo_var))->get_Any_0();
		int32_t L_3;
		L_3 = Server_get_Port_m272775376BE0B9E98FD64224D4F97F346DFA013F_inline(/*hidden argument*/NULL);
		TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * L_4 = (TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B *)il2cpp_codegen_object_new(TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B_il2cpp_TypeInfo_var);
		TcpListener__ctor_mD4633F7821C1F6412EFE88DB42F8A6C7E1A914F0(L_4, L_2, L_3, /*hidden argument*/NULL);
		((Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_StaticFields*)il2cpp_codegen_static_fields_for(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var))->set_tcpListener_4(L_4);
		// tcpListener.Start();
		TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * L_5 = ((Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_StaticFields*)il2cpp_codegen_static_fields_for(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var))->get_tcpListener_4();
		NullCheck(L_5);
		TcpListener_Start_m95F4F504E8BF63D90E857AF6C794AC25EF971C68(L_5, /*hidden argument*/NULL);
		// tcpListener.BeginAcceptTcpClient(TCPConnectCallback, null);
		TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * L_6 = ((Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_StaticFields*)il2cpp_codegen_static_fields_for(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var))->get_tcpListener_4();
		AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_7 = (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)il2cpp_codegen_object_new(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var);
		AsyncCallback__ctor_m90AB9820D2F8B0B06E5E51AF3E9086415A122D05(L_7, NULL, (intptr_t)((intptr_t)Server_TCPConnectCallback_m3448142AB53DC47D8FAA9C1A19DCC3ACDCC311E8_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_6);
		RuntimeObject* L_8;
		L_8 = TcpListener_BeginAcceptTcpClient_mD026EBFD9527C042FAA26B9E6F04518B9763DE5F(L_6, L_7, NULL, /*hidden argument*/NULL);
		// udpListener = new UdpClient(Port);
		int32_t L_9;
		L_9 = Server_get_Port_m272775376BE0B9E98FD64224D4F97F346DFA013F_inline(/*hidden argument*/NULL);
		UdpClient_tB1B7578C96A20B6A0B58AC3FD3E1CB469375B920 * L_10 = (UdpClient_tB1B7578C96A20B6A0B58AC3FD3E1CB469375B920 *)il2cpp_codegen_object_new(UdpClient_tB1B7578C96A20B6A0B58AC3FD3E1CB469375B920_il2cpp_TypeInfo_var);
		UdpClient__ctor_mC4EE84F3374B208F583F429E848EE55BC4EF7488(L_10, L_9, /*hidden argument*/NULL);
		((Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_StaticFields*)il2cpp_codegen_static_fields_for(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var))->set_udpListener_5(L_10);
		// udpListener.BeginReceive(UDPReceiveCallback, null);
		UdpClient_tB1B7578C96A20B6A0B58AC3FD3E1CB469375B920 * L_11 = ((Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_StaticFields*)il2cpp_codegen_static_fields_for(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var))->get_udpListener_5();
		AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_12 = (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)il2cpp_codegen_object_new(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var);
		AsyncCallback__ctor_m90AB9820D2F8B0B06E5E51AF3E9086415A122D05(L_12, NULL, (intptr_t)((intptr_t)Server_UDPReceiveCallback_mE0FC6ECDB90B754BC40227B5BB17C617B8DC9FAE_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = UdpClient_BeginReceive_mD014D2418870232E79472CD1EDEB3BD209FA87D9(L_11, L_12, NULL, /*hidden argument*/NULL);
		// Debug.Log($"Server started on port {Port}.");
		int32_t L_14;
		L_14 = Server_get_Port_m272775376BE0B9E98FD64224D4F97F346DFA013F_inline(/*hidden argument*/NULL);
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral236B9E73A29874E7D15820672595F556FFB1B241, L_16, /*hidden argument*/NULL);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_17, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Server::TCPConnectCallback(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Server_TCPConnectCallback_m3448142AB53DC47D8FAA9C1A19DCC3ACDCC311E8 (RuntimeObject* ____result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m3A4EC04719D2C48FF27A5ABB0D4F909483D50034_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Server_TCPConnectCallback_m3448142AB53DC47D8FAA9C1A19DCC3ACDCC311E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F75059E2B51C0CE09883FEBF01BF06004657EB5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE47EF02920FBA624376505268B4974B34B19D162);
		s_Il2CppMethodInitialized = true;
	}
	TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		// TcpClient _client = tcpListener.EndAcceptTcpClient(_result);
		IL2CPP_RUNTIME_CLASS_INIT(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * L_0 = ((Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_StaticFields*)il2cpp_codegen_static_fields_for(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var))->get_tcpListener_4();
		RuntimeObject* L_1 = ____result0;
		NullCheck(L_0);
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_2;
		L_2 = TcpListener_EndAcceptTcpClient_m8CC22D3ACD902963F3F754628567A4EB8CF68785(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// tcpListener.BeginAcceptTcpClient(TCPConnectCallback, null);
		TcpListener_t96F905EC8A8737637341F4D6BC425E5188FDA14B * L_3 = ((Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_StaticFields*)il2cpp_codegen_static_fields_for(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var))->get_tcpListener_4();
		AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_4 = (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)il2cpp_codegen_object_new(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var);
		AsyncCallback__ctor_m90AB9820D2F8B0B06E5E51AF3E9086415A122D05(L_4, NULL, (intptr_t)((intptr_t)Server_TCPConnectCallback_m3448142AB53DC47D8FAA9C1A19DCC3ACDCC311E8_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_3);
		RuntimeObject* L_5;
		L_5 = TcpListener_BeginAcceptTcpClient_mD026EBFD9527C042FAA26B9E6F04518B9763DE5F(L_3, L_4, NULL, /*hidden argument*/NULL);
		// Debug.Log($"Incoming connection from {_client.Client.RemoteEndPoint}...");
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_6 = V_0;
		NullCheck(L_6);
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_7;
		L_7 = TcpClient_get_Client_mC5F4444D9A96380DC38E84E8A2B9E864D600C9A7_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_8;
		L_8 = Socket_get_RemoteEndPoint_m262E08E8CD25A908CB87450FC73683AB9DF636A7(L_7, /*hidden argument*/NULL);
		String_t* L_9;
		L_9 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralE47EF02920FBA624376505268B4974B34B19D162, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_9, /*hidden argument*/NULL);
		// for (int i = 1; i <= MaxPlayers; i++)
		V_1 = 1;
		goto IL_0080;
	}

IL_0044:
	{
		// if (clients[i].tcp.socket == null)
		IL2CPP_RUNTIME_CLASS_INIT(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		Dictionary_2_t7ABF92427955B899A00760057F6517A757958842 * L_10 = ((Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_StaticFields*)il2cpp_codegen_static_fields_for(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var))->get_clients_2();
		int32_t L_11 = V_1;
		NullCheck(L_10);
		Client_t8953F633032099609444F417EEFFBED62649CECB * L_12;
		L_12 = Dictionary_2_get_Item_m3A4EC04719D2C48FF27A5ABB0D4F909483D50034(L_10, L_11, /*hidden argument*/Dictionary_2_get_Item_m3A4EC04719D2C48FF27A5ABB0D4F909483D50034_RuntimeMethod_var);
		NullCheck(L_12);
		TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F * L_13 = L_12->get_tcp_3();
		NullCheck(L_13);
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_14 = L_13->get_socket_0();
		V_2 = (bool)((((RuntimeObject*)(TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE *)L_14) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_15 = V_2;
		if (!L_15)
		{
			goto IL_007b;
		}
	}
	{
		// clients[i].tcp.Connect(_client);
		IL2CPP_RUNTIME_CLASS_INIT(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		Dictionary_2_t7ABF92427955B899A00760057F6517A757958842 * L_16 = ((Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_StaticFields*)il2cpp_codegen_static_fields_for(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var))->get_clients_2();
		int32_t L_17 = V_1;
		NullCheck(L_16);
		Client_t8953F633032099609444F417EEFFBED62649CECB * L_18;
		L_18 = Dictionary_2_get_Item_m3A4EC04719D2C48FF27A5ABB0D4F909483D50034(L_16, L_17, /*hidden argument*/Dictionary_2_get_Item_m3A4EC04719D2C48FF27A5ABB0D4F909483D50034_RuntimeMethod_var);
		NullCheck(L_18);
		TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F * L_19 = L_18->get_tcp_3();
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_20 = V_0;
		NullCheck(L_19);
		TCP_Connect_mBFE7D5177B48F233241F9A694CA417C770FBF79C(L_19, L_20, /*hidden argument*/NULL);
		// return;
		goto IL_00aa;
	}

IL_007b:
	{
		// for (int i = 1; i <= MaxPlayers; i++)
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_0080:
	{
		// for (int i = 1; i <= MaxPlayers; i++)
		int32_t L_22 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		int32_t L_23;
		L_23 = Server_get_MaxPlayers_m3F7A8B7BB253AA6368118B66DCCDBF205ACB560A_inline(/*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)((((int32_t)L_22) > ((int32_t)L_23))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_24 = V_3;
		if (L_24)
		{
			goto IL_0044;
		}
	}
	{
		// Debug.Log($"{_client.Client.RemoteEndPoint} failed to connect: Server full!");
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_25 = V_0;
		NullCheck(L_25);
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_26;
		L_26 = TcpClient_get_Client_mC5F4444D9A96380DC38E84E8A2B9E864D600C9A7_inline(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_27;
		L_27 = Socket_get_RemoteEndPoint_m262E08E8CD25A908CB87450FC73683AB9DF636A7(L_26, /*hidden argument*/NULL);
		String_t* L_28;
		L_28 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral8F75059E2B51C0CE09883FEBF01BF06004657EB5, L_27, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_28, /*hidden argument*/NULL);
	}

IL_00aa:
	{
		// }
		return;
	}
}
// System.Void Server::UDPReceiveCallback(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Server_UDPReceiveCallback_mE0FC6ECDB90B754BC40227B5BB17C617B8DC9FAE (RuntimeObject* ____result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m3A4EC04719D2C48FF27A5ABB0D4F909483D50034_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Packet_t9AE66670972832E2A1F334616B45353CF46A4B68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Server_UDPReceiveCallback_mE0FC6ECDB90B754BC40227B5BB17C617B8DC9FAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * V_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	bool V_2 = false;
	Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * V_3 = NULL;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	Exception_t * V_8 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 6> __leave_targets;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			// IPEndPoint _clientEndPoint = new IPEndPoint(IPAddress.Any, 0);
			IL2CPP_RUNTIME_CLASS_INIT(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_il2cpp_TypeInfo_var);
			IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE * L_0 = ((IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2B5F1762B4B9935BA6CA8FB12C87282C72E035AE_il2cpp_TypeInfo_var))->get_Any_0();
			IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_1 = (IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *)il2cpp_codegen_object_new(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E_il2cpp_TypeInfo_var);
			IPEndPoint__ctor_m22783A215BA0B38674F6A6CB6803804268561321(L_1, L_0, 0, /*hidden argument*/NULL);
			V_0 = L_1;
			// byte[] _data = udpListener.EndReceive(_result, ref _clientEndPoint);
			IL2CPP_RUNTIME_CLASS_INIT(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
			UdpClient_tB1B7578C96A20B6A0B58AC3FD3E1CB469375B920 * L_2 = ((Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_StaticFields*)il2cpp_codegen_static_fields_for(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var))->get_udpListener_5();
			RuntimeObject* L_3 = ____result0;
			NullCheck(L_2);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4;
			L_4 = UdpClient_EndReceive_m44902B05E598334F79E1C1F4EA148C68185498DE(L_2, L_3, (IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E **)(&V_0), /*hidden argument*/NULL);
			V_1 = L_4;
			// udpListener.BeginReceive(UDPReceiveCallback, null);
			UdpClient_tB1B7578C96A20B6A0B58AC3FD3E1CB469375B920 * L_5 = ((Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_StaticFields*)il2cpp_codegen_static_fields_for(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var))->get_udpListener_5();
			AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_6 = (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)il2cpp_codegen_object_new(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var);
			AsyncCallback__ctor_m90AB9820D2F8B0B06E5E51AF3E9086415A122D05(L_6, NULL, (intptr_t)((intptr_t)Server_UDPReceiveCallback_mE0FC6ECDB90B754BC40227B5BB17C617B8DC9FAE_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_5);
			RuntimeObject* L_7;
			L_7 = UdpClient_BeginReceive_mD014D2418870232E79472CD1EDEB3BD209FA87D9(L_5, L_6, NULL, /*hidden argument*/NULL);
			// if (_data.Length < 4)
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = V_1;
			NullCheck(L_8);
			V_2 = (bool)((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))) < ((int32_t)4))? 1 : 0);
			bool L_9 = V_2;
			if (!L_9)
			{
				goto IL_0044;
			}
		}

IL_003e:
		{
			// return;
			goto IL_010f;
		}

IL_0044:
		{
			// using (Packet _packet = new Packet(_data))
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = V_1;
			Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_11 = (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 *)il2cpp_codegen_object_new(Packet_t9AE66670972832E2A1F334616B45353CF46A4B68_il2cpp_TypeInfo_var);
			Packet__ctor_m1EA0D1BFB8E2F573993470A7EE9F8DCAE197AF3C(L_11, L_10, /*hidden argument*/NULL);
			V_3 = L_11;
		}

IL_004b:
		try
		{ // begin try (depth: 2)
			{
				// int _clientId = _packet.ReadInt();
				Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_12 = V_3;
				NullCheck(L_12);
				int32_t L_13;
				L_13 = Packet_ReadInt_m7C7C7168F3119B364182D2B3DE98718C919966A5(L_12, (bool)1, /*hidden argument*/NULL);
				V_4 = L_13;
				// if (_clientId == 0)
				int32_t L_14 = V_4;
				V_5 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
				bool L_15 = V_5;
				if (!L_15)
				{
					goto IL_0066;
				}
			}

IL_0060:
			{
				// return;
				IL2CPP_LEAVE(0x10F, FINALLY_00e9);
			}

IL_0066:
			{
				// if (clients[_clientId].udp.endPoint == null)
				IL2CPP_RUNTIME_CLASS_INIT(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
				Dictionary_2_t7ABF92427955B899A00760057F6517A757958842 * L_16 = ((Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_StaticFields*)il2cpp_codegen_static_fields_for(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var))->get_clients_2();
				int32_t L_17 = V_4;
				NullCheck(L_16);
				Client_t8953F633032099609444F417EEFFBED62649CECB * L_18;
				L_18 = Dictionary_2_get_Item_m3A4EC04719D2C48FF27A5ABB0D4F909483D50034(L_16, L_17, /*hidden argument*/Dictionary_2_get_Item_m3A4EC04719D2C48FF27A5ABB0D4F909483D50034_RuntimeMethod_var);
				NullCheck(L_18);
				UDP_tFFDFA9C4A0D7E358A406440CC04A78608DE47451 * L_19 = L_18->get_udp_4();
				NullCheck(L_19);
				IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_20 = L_19->get_endPoint_0();
				V_6 = (bool)((((RuntimeObject*)(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *)L_20) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
				bool L_21 = V_6;
				if (!L_21)
				{
					goto IL_00a0;
				}
			}

IL_0085:
			{
				// clients[_clientId].udp.Connect(_clientEndPoint);
				IL2CPP_RUNTIME_CLASS_INIT(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
				Dictionary_2_t7ABF92427955B899A00760057F6517A757958842 * L_22 = ((Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_StaticFields*)il2cpp_codegen_static_fields_for(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var))->get_clients_2();
				int32_t L_23 = V_4;
				NullCheck(L_22);
				Client_t8953F633032099609444F417EEFFBED62649CECB * L_24;
				L_24 = Dictionary_2_get_Item_m3A4EC04719D2C48FF27A5ABB0D4F909483D50034(L_22, L_23, /*hidden argument*/Dictionary_2_get_Item_m3A4EC04719D2C48FF27A5ABB0D4F909483D50034_RuntimeMethod_var);
				NullCheck(L_24);
				UDP_tFFDFA9C4A0D7E358A406440CC04A78608DE47451 * L_25 = L_24->get_udp_4();
				IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_26 = V_0;
				NullCheck(L_25);
				UDP_Connect_m18189CA4A3A8C2D1C971C1B0B990A0D800952099(L_25, L_26, /*hidden argument*/NULL);
				// return;
				IL2CPP_LEAVE(0x10F, FINALLY_00e9);
			}

IL_00a0:
			{
				// if (clients[_clientId].udp.endPoint.ToString() == _clientEndPoint.ToString())
				IL2CPP_RUNTIME_CLASS_INIT(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
				Dictionary_2_t7ABF92427955B899A00760057F6517A757958842 * L_27 = ((Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_StaticFields*)il2cpp_codegen_static_fields_for(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var))->get_clients_2();
				int32_t L_28 = V_4;
				NullCheck(L_27);
				Client_t8953F633032099609444F417EEFFBED62649CECB * L_29;
				L_29 = Dictionary_2_get_Item_m3A4EC04719D2C48FF27A5ABB0D4F909483D50034(L_27, L_28, /*hidden argument*/Dictionary_2_get_Item_m3A4EC04719D2C48FF27A5ABB0D4F909483D50034_RuntimeMethod_var);
				NullCheck(L_29);
				UDP_tFFDFA9C4A0D7E358A406440CC04A78608DE47451 * L_30 = L_29->get_udp_4();
				NullCheck(L_30);
				IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_31 = L_30->get_endPoint_0();
				NullCheck(L_31);
				String_t* L_32;
				L_32 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_31);
				IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_33 = V_0;
				NullCheck(L_33);
				String_t* L_34;
				L_34 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_33);
				bool L_35;
				L_35 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_32, L_34, /*hidden argument*/NULL);
				V_7 = L_35;
				bool L_36 = V_7;
				if (!L_36)
				{
					goto IL_00e6;
				}
			}

IL_00cc:
			{
				// clients[_clientId].udp.HandleData(_packet);
				IL2CPP_RUNTIME_CLASS_INIT(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
				Dictionary_2_t7ABF92427955B899A00760057F6517A757958842 * L_37 = ((Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_StaticFields*)il2cpp_codegen_static_fields_for(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var))->get_clients_2();
				int32_t L_38 = V_4;
				NullCheck(L_37);
				Client_t8953F633032099609444F417EEFFBED62649CECB * L_39;
				L_39 = Dictionary_2_get_Item_m3A4EC04719D2C48FF27A5ABB0D4F909483D50034(L_37, L_38, /*hidden argument*/Dictionary_2_get_Item_m3A4EC04719D2C48FF27A5ABB0D4F909483D50034_RuntimeMethod_var);
				NullCheck(L_39);
				UDP_tFFDFA9C4A0D7E358A406440CC04A78608DE47451 * L_40 = L_39->get_udp_4();
				Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_41 = V_3;
				NullCheck(L_40);
				UDP_HandleData_m6F27C818ACC6EDF120F7E9665D655F130957B5EF(L_40, L_41, /*hidden argument*/NULL);
			}

IL_00e6:
			{
				IL2CPP_LEAVE(0xF4, FINALLY_00e9);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00e9;
		}

FINALLY_00e9:
		{ // begin finally (depth: 2)
			{
				Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_42 = V_3;
				if (!L_42)
				{
					goto IL_00f3;
				}
			}

IL_00ec:
			{
				Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_43 = V_3;
				NullCheck(L_43);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_43);
			}

IL_00f3:
			{
				IL2CPP_END_FINALLY(233)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(233)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x10F, IL_010f)
			IL2CPP_JUMP_TBL(0xF4, IL_00f4)
		}

IL_00f4:
		{
			goto IL_010f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00f7;
		}
		throw e;
	}

CATCH_00f7:
	{ // begin catch(System.Exception)
		// catch (Exception _ex)
		V_8 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		// Debug.Log($"Error receiving UDP data: {_ex}");
		Exception_t * L_44 = V_8;
		String_t* L_45;
		L_45 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5807EE5F1E7C873A5D333D20F013A8936CF776B0)), L_44, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_45, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_010f;
	} // end catch (depth: 1)

IL_010f:
	{
		// }
		return;
	}
}
// System.Void Server::SendUDPData(System.Net.IPEndPoint,Packet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Server_SendUDPData_m8B630B7EC31715D1B65AD5E93C6961B5C54C6FEB (IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ____clientEndPoint0, Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * ____packet1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Exception_t * V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			// if (_clientEndPoint != null)
			IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_0 = ____clientEndPoint0;
			V_0 = (bool)((!(((RuntimeObject*)(IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_1 = V_0;
			if (!L_1)
			{
				goto IL_0026;
			}
		}

IL_000a:
		{
			// udpListener.BeginSend(_packet.ToArray(), _packet.Length(), _clientEndPoint, null, null);
			IL2CPP_RUNTIME_CLASS_INIT(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
			UdpClient_tB1B7578C96A20B6A0B58AC3FD3E1CB469375B920 * L_2 = ((Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_StaticFields*)il2cpp_codegen_static_fields_for(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var))->get_udpListener_5();
			Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_3 = ____packet1;
			NullCheck(L_3);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4;
			L_4 = Packet_ToArray_m979D2597878458D03805683B169F659D4DC7AFA8(L_3, /*hidden argument*/NULL);
			Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_5 = ____packet1;
			NullCheck(L_5);
			int32_t L_6;
			L_6 = Packet_Length_mEDFD969DB9E45281A1B3FB6C54DDACA009E2D1EE(L_5, /*hidden argument*/NULL);
			IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_7 = ____clientEndPoint0;
			NullCheck(L_2);
			RuntimeObject* L_8;
			L_8 = UdpClient_BeginSend_mC48A39C069187B4AD2E9319D7C953AFF187C5E03(L_2, L_4, L_6, L_7, (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)NULL, NULL, /*hidden argument*/NULL);
		}

IL_0026:
		{
			goto IL_0040;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0029;
		}
		throw e;
	}

CATCH_0029:
	{ // begin catch(System.Exception)
		// catch (Exception _ex)
		V_1 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		// Debug.Log($"Error sending data to {_clientEndPoint} via UDP: {_ex}");
		IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_9 = ____clientEndPoint0;
		Exception_t * L_10 = V_1;
		String_t* L_11;
		L_11 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral334E70EF250850CE33D2C6D935E66ED0256F9D88)), L_9, L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_11, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0040;
	} // end catch (depth: 1)

IL_0040:
	{
		// }
		return;
	}
}
// System.Void Server::InitializeServerData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Server_InitializeServerData_m860294022C7C6C583DAC55C16AFF52CB1F4B9A98 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Client_t8953F633032099609444F417EEFFBED62649CECB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m43B06DD1A94572D8905C8322834BCF4F12ECD05E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mD0511B860657C5445B0DE56F6227DF994EBA9FCE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mCB9F422245DC4D635D3AD3ACE7971B72FBCF3422_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t8ADD0927441CE234D6856F51E50B8C95DD29FBA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PacketHandler_tF3182DDA9983ED609FD815750B65802DE9536286_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServerHandle_PlayerMovement_m9C27F7D1BD8CC2B01207000A8E9271D521D838D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServerHandle_WelcomeReceived_m9E6F51E9214367B2E22AA47875750EC6ED299D41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C96EF172B5251960B6663CAB9370BD62FCF0A7C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	Dictionary_2_t8ADD0927441CE234D6856F51E50B8C95DD29FBA5 * V_2 = NULL;
	{
		// for (int i = 1; i <= MaxPlayers; i++)
		V_0 = 1;
		goto IL_001d;
	}

IL_0005:
	{
		// clients.Add(i, new Client(i));
		IL2CPP_RUNTIME_CLASS_INIT(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		Dictionary_2_t7ABF92427955B899A00760057F6517A757958842 * L_0 = ((Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_StaticFields*)il2cpp_codegen_static_fields_for(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var))->get_clients_2();
		int32_t L_1 = V_0;
		int32_t L_2 = V_0;
		Client_t8953F633032099609444F417EEFFBED62649CECB * L_3 = (Client_t8953F633032099609444F417EEFFBED62649CECB *)il2cpp_codegen_object_new(Client_t8953F633032099609444F417EEFFBED62649CECB_il2cpp_TypeInfo_var);
		Client__ctor_mB4D2D032B1110D6FDBEACEC5C34DBC4FFD17D032(L_3, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		Dictionary_2_Add_mD0511B860657C5445B0DE56F6227DF994EBA9FCE(L_0, L_1, L_3, /*hidden argument*/Dictionary_2_Add_mD0511B860657C5445B0DE56F6227DF994EBA9FCE_RuntimeMethod_var);
		// for (int i = 1; i <= MaxPlayers; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_001d:
	{
		// for (int i = 1; i <= MaxPlayers; i++)
		int32_t L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Server_get_MaxPlayers_m3F7A8B7BB253AA6368118B66DCCDBF205ACB560A_inline(/*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_5) > ((int32_t)L_6))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_1;
		if (L_7)
		{
			goto IL_0005;
		}
	}
	{
		// packetHandlers = new Dictionary<int, PacketHandler>()
		//     {
		//         { (int)ClientPackets.welcomeReceived, ServerHandle.WelcomeReceived },
		//         { (int)ClientPackets.playerMovement, ServerHandle.PlayerMovement },
		//     };
		Dictionary_2_t8ADD0927441CE234D6856F51E50B8C95DD29FBA5 * L_8 = (Dictionary_2_t8ADD0927441CE234D6856F51E50B8C95DD29FBA5 *)il2cpp_codegen_object_new(Dictionary_2_t8ADD0927441CE234D6856F51E50B8C95DD29FBA5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCB9F422245DC4D635D3AD3ACE7971B72FBCF3422(L_8, /*hidden argument*/Dictionary_2__ctor_mCB9F422245DC4D635D3AD3ACE7971B72FBCF3422_RuntimeMethod_var);
		V_2 = L_8;
		Dictionary_2_t8ADD0927441CE234D6856F51E50B8C95DD29FBA5 * L_9 = V_2;
		PacketHandler_tF3182DDA9983ED609FD815750B65802DE9536286 * L_10 = (PacketHandler_tF3182DDA9983ED609FD815750B65802DE9536286 *)il2cpp_codegen_object_new(PacketHandler_tF3182DDA9983ED609FD815750B65802DE9536286_il2cpp_TypeInfo_var);
		PacketHandler__ctor_m3BD77F81992F898EE0A42EC0BFE7C7231720421C(L_10, NULL, (intptr_t)((intptr_t)ServerHandle_WelcomeReceived_m9E6F51E9214367B2E22AA47875750EC6ED299D41_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_9);
		Dictionary_2_Add_m43B06DD1A94572D8905C8322834BCF4F12ECD05E(L_9, 1, L_10, /*hidden argument*/Dictionary_2_Add_m43B06DD1A94572D8905C8322834BCF4F12ECD05E_RuntimeMethod_var);
		Dictionary_2_t8ADD0927441CE234D6856F51E50B8C95DD29FBA5 * L_11 = V_2;
		PacketHandler_tF3182DDA9983ED609FD815750B65802DE9536286 * L_12 = (PacketHandler_tF3182DDA9983ED609FD815750B65802DE9536286 *)il2cpp_codegen_object_new(PacketHandler_tF3182DDA9983ED609FD815750B65802DE9536286_il2cpp_TypeInfo_var);
		PacketHandler__ctor_m3BD77F81992F898EE0A42EC0BFE7C7231720421C(L_12, NULL, (intptr_t)((intptr_t)ServerHandle_PlayerMovement_m9C27F7D1BD8CC2B01207000A8E9271D521D838D2_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_11);
		Dictionary_2_Add_m43B06DD1A94572D8905C8322834BCF4F12ECD05E(L_11, 2, L_12, /*hidden argument*/Dictionary_2_Add_m43B06DD1A94572D8905C8322834BCF4F12ECD05E_RuntimeMethod_var);
		Dictionary_2_t8ADD0927441CE234D6856F51E50B8C95DD29FBA5 * L_13 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		((Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_StaticFields*)il2cpp_codegen_static_fields_for(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var))->set_packetHandlers_3(L_13);
		// Debug.Log("Initialized packets.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral0C96EF172B5251960B6663CAB9370BD62FCF0A7C, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Server::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Server__ctor_m6B8BA5160800C8C0C908BB87079C08476F6709A4 (Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Server::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Server__cctor_m6742B47859DD2D666BFC11AC78A314EFB02E4742 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mEDF3E3367A598ECE86C6D31E3C665CB555F11E92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t7ABF92427955B899A00760057F6517A757958842_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Dictionary<int, Client> clients = new Dictionary<int, Client>();
		Dictionary_2_t7ABF92427955B899A00760057F6517A757958842 * L_0 = (Dictionary_2_t7ABF92427955B899A00760057F6517A757958842 *)il2cpp_codegen_object_new(Dictionary_2_t7ABF92427955B899A00760057F6517A757958842_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mEDF3E3367A598ECE86C6D31E3C665CB555F11E92(L_0, /*hidden argument*/Dictionary_2__ctor_mEDF3E3367A598ECE86C6D31E3C665CB555F11E92_RuntimeMethod_var);
		((Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_StaticFields*)il2cpp_codegen_static_fields_for(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var))->set_clients_2(L_0);
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
// System.Void ServerHandle::WelcomeReceived(System.Int32,Packet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerHandle_WelcomeReceived_m9E6F51E9214367B2E22AA47875750EC6ED299D41 (int32_t ____fromClient0, Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * ____packet1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m3A4EC04719D2C48FF27A5ABB0D4F909483D50034_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral689A3729F15139D3B056F72DA092672920DD905A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7A55FCEA6E2546F355A1B0988E553E7739E84C3);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	bool V_2 = false;
	{
		// int _clientIdCheck = _packet.ReadInt();
		Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_0 = ____packet1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Packet_ReadInt_m7C7C7168F3119B364182D2B3DE98718C919966A5(L_0, (bool)1, /*hidden argument*/NULL);
		V_0 = L_1;
		// string _username = _packet.ReadString();
		Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_2 = ____packet1;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Packet_ReadString_mD6F9D09E50728912C91AC4D2450296FF5371F015(L_2, (bool)1, /*hidden argument*/NULL);
		V_1 = L_3;
		// Debug.Log($"{Server.clients[_fromClient].tcp.socket.Client.RemoteEndPoint} connected successfully and is now player {_fromClient}.");
		IL2CPP_RUNTIME_CLASS_INIT(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		Dictionary_2_t7ABF92427955B899A00760057F6517A757958842 * L_4 = ((Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_StaticFields*)il2cpp_codegen_static_fields_for(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var))->get_clients_2();
		int32_t L_5 = ____fromClient0;
		NullCheck(L_4);
		Client_t8953F633032099609444F417EEFFBED62649CECB * L_6;
		L_6 = Dictionary_2_get_Item_m3A4EC04719D2C48FF27A5ABB0D4F909483D50034(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_m3A4EC04719D2C48FF27A5ABB0D4F909483D50034_RuntimeMethod_var);
		NullCheck(L_6);
		TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F * L_7 = L_6->get_tcp_3();
		NullCheck(L_7);
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_8 = L_7->get_socket_0();
		NullCheck(L_8);
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_9;
		L_9 = TcpClient_get_Client_mC5F4444D9A96380DC38E84E8A2B9E864D600C9A7_inline(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		EndPoint_t18D4AE8D03090A2B262136E59F95CE61418C34DA * L_10;
		L_10 = Socket_get_RemoteEndPoint_m262E08E8CD25A908CB87450FC73683AB9DF636A7(L_9, /*hidden argument*/NULL);
		int32_t L_11 = ____fromClient0;
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_12);
		String_t* L_14;
		L_14 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral689A3729F15139D3B056F72DA092672920DD905A, L_10, L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_14, /*hidden argument*/NULL);
		// if (_fromClient != _clientIdCheck)
		int32_t L_15 = ____fromClient0;
		int32_t L_16 = V_0;
		V_2 = (bool)((((int32_t)((((int32_t)L_15) == ((int32_t)L_16))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_2;
		if (!L_17)
		{
			goto IL_0070;
		}
	}
	{
		// Debug.Log($"Player \"{_username}\" (ID: {_fromClient}) has assumed the wrong client ID ({_clientIdCheck})!");
		String_t* L_18 = V_1;
		int32_t L_19 = ____fromClient0;
		int32_t L_20 = L_19;
		RuntimeObject * L_21 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_20);
		int32_t L_22 = V_0;
		int32_t L_23 = L_22;
		RuntimeObject * L_24 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_23);
		String_t* L_25;
		L_25 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(_stringLiteralB7A55FCEA6E2546F355A1B0988E553E7739E84C3, L_18, L_21, L_24, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_25, /*hidden argument*/NULL);
	}

IL_0070:
	{
		// Server.clients[_fromClient].SendIntoGame(_username);
		IL2CPP_RUNTIME_CLASS_INIT(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		Dictionary_2_t7ABF92427955B899A00760057F6517A757958842 * L_26 = ((Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_StaticFields*)il2cpp_codegen_static_fields_for(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var))->get_clients_2();
		int32_t L_27 = ____fromClient0;
		NullCheck(L_26);
		Client_t8953F633032099609444F417EEFFBED62649CECB * L_28;
		L_28 = Dictionary_2_get_Item_m3A4EC04719D2C48FF27A5ABB0D4F909483D50034(L_26, L_27, /*hidden argument*/Dictionary_2_get_Item_m3A4EC04719D2C48FF27A5ABB0D4F909483D50034_RuntimeMethod_var);
		String_t* L_29 = V_1;
		NullCheck(L_28);
		Client_SendIntoGame_mFF866BC264181A9CA17FAC7B49739AF22171B2CD(L_28, L_29, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ServerHandle::PlayerMovement(System.Int32,Packet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerHandle_PlayerMovement_m9C27F7D1BD8CC2B01207000A8E9271D521D838D2 (int32_t ____fromClient0, Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * ____packet1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m3A4EC04719D2C48FF27A5ABB0D4F909483D50034_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* V_0 = NULL;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		// bool[] _inputs = new bool[_packet.ReadInt()];
		Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_0 = ____packet1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Packet_ReadInt_m7C7C7168F3119B364182D2B3DE98718C919966A5(L_0, (bool)1, /*hidden argument*/NULL);
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_2 = (BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)SZArrayNew(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_0 = L_2;
		// for (int i = 0; i < _inputs.Length; i++)
		V_2 = 0;
		goto IL_0022;
	}

IL_0012:
	{
		// _inputs[i] = _packet.ReadBool();
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_3 = V_0;
		int32_t L_4 = V_2;
		Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_5 = ____packet1;
		NullCheck(L_5);
		bool L_6;
		L_6 = Packet_ReadBool_m7F694CE2AAF877AE06E4DBC1A70E15DD1D8D0A8C(L_5, (bool)1, /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (bool)L_6);
		// for (int i = 0; i < _inputs.Length; i++)
		int32_t L_7 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0022:
	{
		// for (int i = 0; i < _inputs.Length; i++)
		int32_t L_8 = V_2;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_9 = V_0;
		NullCheck(L_9);
		V_3 = (bool)((((int32_t)L_8) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))? 1 : 0);
		bool L_10 = V_3;
		if (L_10)
		{
			goto IL_0012;
		}
	}
	{
		// Quaternion _rotation = _packet.ReadQuaternion();
		Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_11 = ____packet1;
		NullCheck(L_11);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_12;
		L_12 = Packet_ReadQuaternion_mB549BAF71312050895A62E0657DF13670258EF68(L_11, (bool)1, /*hidden argument*/NULL);
		V_1 = L_12;
		// Server.clients[_fromClient].player.SetInput(_inputs, _rotation);
		IL2CPP_RUNTIME_CLASS_INIT(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		Dictionary_2_t7ABF92427955B899A00760057F6517A757958842 * L_13 = ((Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_StaticFields*)il2cpp_codegen_static_fields_for(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var))->get_clients_2();
		int32_t L_14 = ____fromClient0;
		NullCheck(L_13);
		Client_t8953F633032099609444F417EEFFBED62649CECB * L_15;
		L_15 = Dictionary_2_get_Item_m3A4EC04719D2C48FF27A5ABB0D4F909483D50034(L_13, L_14, /*hidden argument*/Dictionary_2_get_Item_m3A4EC04719D2C48FF27A5ABB0D4F909483D50034_RuntimeMethod_var);
		NullCheck(L_15);
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_16 = L_15->get_player_2();
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_17 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_18 = V_1;
		NullCheck(L_16);
		Player_SetInput_m552567E7B702FF7D84CE3D6D6D6798F66B7054A3(L_16, L_17, L_18, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ServerHandle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerHandle__ctor_m7992EDF8CE12A70881D6B17C3F7194C27BDCFEE7 (ServerHandle_t8240C03B10FC3261048A301B9720F3AA855A928F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ServerSend::SendTCPData(System.Int32,Packet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerSend_SendTCPData_m84773071DA30863C7AC235999689DB219E3FC0F7 (int32_t ____toClient0, Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * ____packet1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m3A4EC04719D2C48FF27A5ABB0D4F909483D50034_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _packet.WriteLength();
		Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_0 = ____packet1;
		NullCheck(L_0);
		Packet_WriteLength_mD8E838ED42269317E9D520DF79AE406A29F052F8(L_0, /*hidden argument*/NULL);
		// Server.clients[_toClient].tcp.SendData(_packet);
		IL2CPP_RUNTIME_CLASS_INIT(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		Dictionary_2_t7ABF92427955B899A00760057F6517A757958842 * L_1 = ((Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_StaticFields*)il2cpp_codegen_static_fields_for(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var))->get_clients_2();
		int32_t L_2 = ____toClient0;
		NullCheck(L_1);
		Client_t8953F633032099609444F417EEFFBED62649CECB * L_3;
		L_3 = Dictionary_2_get_Item_m3A4EC04719D2C48FF27A5ABB0D4F909483D50034(L_1, L_2, /*hidden argument*/Dictionary_2_get_Item_m3A4EC04719D2C48FF27A5ABB0D4F909483D50034_RuntimeMethod_var);
		NullCheck(L_3);
		TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F * L_4 = L_3->get_tcp_3();
		Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_5 = ____packet1;
		NullCheck(L_4);
		TCP_SendData_mDD06EFD3A051B1FB6F1C3DED8678FE9497195A6E(L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ServerSend::SendUDPData(System.Int32,Packet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerSend_SendUDPData_mD664D7CB34D8765E0A57B287DB37ED91C20B1EB9 (int32_t ____toClient0, Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * ____packet1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m3A4EC04719D2C48FF27A5ABB0D4F909483D50034_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _packet.WriteLength();
		Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_0 = ____packet1;
		NullCheck(L_0);
		Packet_WriteLength_mD8E838ED42269317E9D520DF79AE406A29F052F8(L_0, /*hidden argument*/NULL);
		// Server.clients[_toClient].udp.SendData(_packet);
		IL2CPP_RUNTIME_CLASS_INIT(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		Dictionary_2_t7ABF92427955B899A00760057F6517A757958842 * L_1 = ((Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_StaticFields*)il2cpp_codegen_static_fields_for(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var))->get_clients_2();
		int32_t L_2 = ____toClient0;
		NullCheck(L_1);
		Client_t8953F633032099609444F417EEFFBED62649CECB * L_3;
		L_3 = Dictionary_2_get_Item_m3A4EC04719D2C48FF27A5ABB0D4F909483D50034(L_1, L_2, /*hidden argument*/Dictionary_2_get_Item_m3A4EC04719D2C48FF27A5ABB0D4F909483D50034_RuntimeMethod_var);
		NullCheck(L_3);
		UDP_tFFDFA9C4A0D7E358A406440CC04A78608DE47451 * L_4 = L_3->get_udp_4();
		Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_5 = ____packet1;
		NullCheck(L_4);
		UDP_SendData_mEA97B13B8D47895B56A29D6C74E77C35F9951AEF(L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ServerSend::SendTCPDataToAll(Packet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerSend_SendTCPDataToAll_mD9E49A1CEB810F3CDDE88F6B416ED7F5F9630F8F (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * ____packet0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m3A4EC04719D2C48FF27A5ABB0D4F909483D50034_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// _packet.WriteLength();
		Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_0 = ____packet0;
		NullCheck(L_0);
		Packet_WriteLength_mD8E838ED42269317E9D520DF79AE406A29F052F8(L_0, /*hidden argument*/NULL);
		// for (int i = 1; i <= Server.MaxPlayers; i++)
		V_0 = 1;
		goto IL_0029;
	}

IL_000c:
	{
		// Server.clients[i].tcp.SendData(_packet);
		IL2CPP_RUNTIME_CLASS_INIT(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		Dictionary_2_t7ABF92427955B899A00760057F6517A757958842 * L_1 = ((Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_StaticFields*)il2cpp_codegen_static_fields_for(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var))->get_clients_2();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		Client_t8953F633032099609444F417EEFFBED62649CECB * L_3;
		L_3 = Dictionary_2_get_Item_m3A4EC04719D2C48FF27A5ABB0D4F909483D50034(L_1, L_2, /*hidden argument*/Dictionary_2_get_Item_m3A4EC04719D2C48FF27A5ABB0D4F909483D50034_RuntimeMethod_var);
		NullCheck(L_3);
		TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F * L_4 = L_3->get_tcp_3();
		Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_5 = ____packet0;
		NullCheck(L_4);
		TCP_SendData_mDD06EFD3A051B1FB6F1C3DED8678FE9497195A6E(L_4, L_5, /*hidden argument*/NULL);
		// for (int i = 1; i <= Server.MaxPlayers; i++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0029:
	{
		// for (int i = 1; i <= Server.MaxPlayers; i++)
		int32_t L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = Server_get_MaxPlayers_m3F7A8B7BB253AA6368118B66DCCDBF205ACB560A_inline(/*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_7) > ((int32_t)L_8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_1;
		if (L_9)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ServerSend::SendTCPDataToAll(System.Int32,Packet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerSend_SendTCPDataToAll_mDE5F3912FEBFC92A5A8278C76E03860BD9198A3E (int32_t ____exceptClient0, Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * ____packet1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m3A4EC04719D2C48FF27A5ABB0D4F909483D50034_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		// _packet.WriteLength();
		Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_0 = ____packet1;
		NullCheck(L_0);
		Packet_WriteLength_mD8E838ED42269317E9D520DF79AE406A29F052F8(L_0, /*hidden argument*/NULL);
		// for (int i = 1; i <= Server.MaxPlayers; i++)
		V_0 = 1;
		goto IL_0036;
	}

IL_000c:
	{
		// if (i != _exceptClient)
		int32_t L_1 = V_0;
		int32_t L_2 = ____exceptClient0;
		V_1 = (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		// Server.clients[i].tcp.SendData(_packet);
		IL2CPP_RUNTIME_CLASS_INIT(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		Dictionary_2_t7ABF92427955B899A00760057F6517A757958842 * L_4 = ((Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_StaticFields*)il2cpp_codegen_static_fields_for(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var))->get_clients_2();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Client_t8953F633032099609444F417EEFFBED62649CECB * L_6;
		L_6 = Dictionary_2_get_Item_m3A4EC04719D2C48FF27A5ABB0D4F909483D50034(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_m3A4EC04719D2C48FF27A5ABB0D4F909483D50034_RuntimeMethod_var);
		NullCheck(L_6);
		TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F * L_7 = L_6->get_tcp_3();
		Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_8 = ____packet1;
		NullCheck(L_7);
		TCP_SendData_mDD06EFD3A051B1FB6F1C3DED8678FE9497195A6E(L_7, L_8, /*hidden argument*/NULL);
	}

IL_0031:
	{
		// for (int i = 1; i <= Server.MaxPlayers; i++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0036:
	{
		// for (int i = 1; i <= Server.MaxPlayers; i++)
		int32_t L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = Server_get_MaxPlayers_m3F7A8B7BB253AA6368118B66DCCDBF205ACB560A_inline(/*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_10) > ((int32_t)L_11))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_2;
		if (L_12)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ServerSend::SendUDPDataToAll(Packet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerSend_SendUDPDataToAll_mF4B1C5DA62BDE586B181F7BD3315923B7E03D638 (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * ____packet0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m3A4EC04719D2C48FF27A5ABB0D4F909483D50034_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// _packet.WriteLength();
		Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_0 = ____packet0;
		NullCheck(L_0);
		Packet_WriteLength_mD8E838ED42269317E9D520DF79AE406A29F052F8(L_0, /*hidden argument*/NULL);
		// for (int i = 1; i <= Server.MaxPlayers; i++)
		V_0 = 1;
		goto IL_0029;
	}

IL_000c:
	{
		// Server.clients[i].udp.SendData(_packet);
		IL2CPP_RUNTIME_CLASS_INIT(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		Dictionary_2_t7ABF92427955B899A00760057F6517A757958842 * L_1 = ((Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_StaticFields*)il2cpp_codegen_static_fields_for(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var))->get_clients_2();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		Client_t8953F633032099609444F417EEFFBED62649CECB * L_3;
		L_3 = Dictionary_2_get_Item_m3A4EC04719D2C48FF27A5ABB0D4F909483D50034(L_1, L_2, /*hidden argument*/Dictionary_2_get_Item_m3A4EC04719D2C48FF27A5ABB0D4F909483D50034_RuntimeMethod_var);
		NullCheck(L_3);
		UDP_tFFDFA9C4A0D7E358A406440CC04A78608DE47451 * L_4 = L_3->get_udp_4();
		Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_5 = ____packet0;
		NullCheck(L_4);
		UDP_SendData_mEA97B13B8D47895B56A29D6C74E77C35F9951AEF(L_4, L_5, /*hidden argument*/NULL);
		// for (int i = 1; i <= Server.MaxPlayers; i++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0029:
	{
		// for (int i = 1; i <= Server.MaxPlayers; i++)
		int32_t L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = Server_get_MaxPlayers_m3F7A8B7BB253AA6368118B66DCCDBF205ACB560A_inline(/*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_7) > ((int32_t)L_8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_1;
		if (L_9)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ServerSend::SendUDPDataToAll(System.Int32,Packet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerSend_SendUDPDataToAll_m282A9031FE82808CC101FEAAB41B88186B31777C (int32_t ____exceptClient0, Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * ____packet1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m3A4EC04719D2C48FF27A5ABB0D4F909483D50034_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		// _packet.WriteLength();
		Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_0 = ____packet1;
		NullCheck(L_0);
		Packet_WriteLength_mD8E838ED42269317E9D520DF79AE406A29F052F8(L_0, /*hidden argument*/NULL);
		// for (int i = 1; i <= Server.MaxPlayers; i++)
		V_0 = 1;
		goto IL_0036;
	}

IL_000c:
	{
		// if (i != _exceptClient)
		int32_t L_1 = V_0;
		int32_t L_2 = ____exceptClient0;
		V_1 = (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		// Server.clients[i].udp.SendData(_packet);
		IL2CPP_RUNTIME_CLASS_INIT(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		Dictionary_2_t7ABF92427955B899A00760057F6517A757958842 * L_4 = ((Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_StaticFields*)il2cpp_codegen_static_fields_for(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var))->get_clients_2();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Client_t8953F633032099609444F417EEFFBED62649CECB * L_6;
		L_6 = Dictionary_2_get_Item_m3A4EC04719D2C48FF27A5ABB0D4F909483D50034(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_m3A4EC04719D2C48FF27A5ABB0D4F909483D50034_RuntimeMethod_var);
		NullCheck(L_6);
		UDP_tFFDFA9C4A0D7E358A406440CC04A78608DE47451 * L_7 = L_6->get_udp_4();
		Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_8 = ____packet1;
		NullCheck(L_7);
		UDP_SendData_mEA97B13B8D47895B56A29D6C74E77C35F9951AEF(L_7, L_8, /*hidden argument*/NULL);
	}

IL_0031:
	{
		// for (int i = 1; i <= Server.MaxPlayers; i++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0036:
	{
		// for (int i = 1; i <= Server.MaxPlayers; i++)
		int32_t L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = Server_get_MaxPlayers_m3F7A8B7BB253AA6368118B66DCCDBF205ACB560A_inline(/*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_10) > ((int32_t)L_11))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_2;
		if (L_12)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ServerSend::Welcome(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerSend_Welcome_m63549FAB23ED93B1BA415181057C1DB693BDA214 (int32_t ____toClient0, String_t* ____msg1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Packet_t9AE66670972832E2A1F334616B45353CF46A4B68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// using (Packet _packet = new Packet((int)ServerPackets.welcome))
		Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_0 = (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 *)il2cpp_codegen_object_new(Packet_t9AE66670972832E2A1F334616B45353CF46A4B68_il2cpp_TypeInfo_var);
		Packet__ctor_mC1342F761E2948FA4CCC10BECE3AD126C07E676D(L_0, 1, /*hidden argument*/NULL);
		V_0 = L_0;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		// _packet.Write(_msg);
		Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_1 = V_0;
		String_t* L_2 = ____msg1;
		NullCheck(L_1);
		Packet_Write_m85641572D1BD2BF1DB5ED82EA8BD352F1D7E6F6D(L_1, L_2, /*hidden argument*/NULL);
		// _packet.Write(_toClient);
		Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_3 = V_0;
		int32_t L_4 = ____toClient0;
		NullCheck(L_3);
		Packet_Write_mC49636594BF6314C48A57ECCABF6F8A0CAD16D01(L_3, L_4, /*hidden argument*/NULL);
		// SendTCPData(_toClient, _packet);
		int32_t L_5 = ____toClient0;
		Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_6 = V_0;
		ServerSend_SendTCPData_m84773071DA30863C7AC235999689DB219E3FC0F7(L_5, L_6, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x2F, FINALLY_0024);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0024;
	}

FINALLY_0024:
	{ // begin finally (depth: 1)
		{
			Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_7 = V_0;
			if (!L_7)
			{
				goto IL_002e;
			}
		}

IL_0027:
		{
			Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_8 = V_0;
			NullCheck(L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_8);
		}

IL_002e:
		{
			IL2CPP_END_FINALLY(36)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(36)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2F, IL_002f)
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void ServerSend::SpawnPlayer(System.Int32,Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerSend_SpawnPlayer_m04A73F9E89C4151A12CD97597AC532945BF4C364 (int32_t ____toClient0, Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * ____player1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Packet_t9AE66670972832E2A1F334616B45353CF46A4B68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// using (Packet _packet = new Packet((int)ServerPackets.spawnPlayer))
		Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_0 = (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 *)il2cpp_codegen_object_new(Packet_t9AE66670972832E2A1F334616B45353CF46A4B68_il2cpp_TypeInfo_var);
		Packet__ctor_mC1342F761E2948FA4CCC10BECE3AD126C07E676D(L_0, 2, /*hidden argument*/NULL);
		V_0 = L_0;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		// _packet.Write(_player.id);
		Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_1 = V_0;
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_2 = ____player1;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_id_4();
		NullCheck(L_1);
		Packet_Write_mC49636594BF6314C48A57ECCABF6F8A0CAD16D01(L_1, L_3, /*hidden argument*/NULL);
		// _packet.Write(_player.username);
		Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_4 = V_0;
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_5 = ____player1;
		NullCheck(L_5);
		String_t* L_6 = L_5->get_username_5();
		NullCheck(L_4);
		Packet_Write_m85641572D1BD2BF1DB5ED82EA8BD352F1D7E6F6D(L_4, L_6, /*hidden argument*/NULL);
		// _packet.Write(_player.transform.position);
		Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_7 = V_0;
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_8 = ____player1;
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		Packet_Write_mBB60F6EB2D18CCE21AF5ACD9518A2B46642B4C8F(L_7, L_10, /*hidden argument*/NULL);
		// _packet.Write(_player.transform.rotation);
		Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_11 = V_0;
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_12 = ____player1;
		NullCheck(L_12);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_14;
		L_14 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_13, /*hidden argument*/NULL);
		NullCheck(L_11);
		Packet_Write_m7B8307F96B7DD96056F5A22241C54DB419E18B67(L_11, L_14, /*hidden argument*/NULL);
		// SendTCPData(_toClient, _packet);
		int32_t L_15 = ____toClient0;
		Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_16 = V_0;
		ServerSend_SendTCPData_m84773071DA30863C7AC235999689DB219E3FC0F7(L_15, L_16, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x5D, FINALLY_0052);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0052;
	}

FINALLY_0052:
	{ // begin finally (depth: 1)
		{
			Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_17 = V_0;
			if (!L_17)
			{
				goto IL_005c;
			}
		}

IL_0055:
		{
			Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_18 = V_0;
			NullCheck(L_18);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_18);
		}

IL_005c:
		{
			IL2CPP_END_FINALLY(82)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(82)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5D, IL_005d)
	}

IL_005d:
	{
		// }
		return;
	}
}
// System.Void ServerSend::PlayerPosition(Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerSend_PlayerPosition_m59EA88BA57257A446905567D3B85459E29FFA584 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * ____player0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Packet_t9AE66670972832E2A1F334616B45353CF46A4B68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// using (Packet _packet = new Packet((int)ServerPackets.playerPosition))
		Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_0 = (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 *)il2cpp_codegen_object_new(Packet_t9AE66670972832E2A1F334616B45353CF46A4B68_il2cpp_TypeInfo_var);
		Packet__ctor_mC1342F761E2948FA4CCC10BECE3AD126C07E676D(L_0, 3, /*hidden argument*/NULL);
		V_0 = L_0;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		// _packet.Write(_player.id);
		Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_1 = V_0;
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_2 = ____player0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_id_4();
		NullCheck(L_1);
		Packet_Write_mC49636594BF6314C48A57ECCABF6F8A0CAD16D01(L_1, L_3, /*hidden argument*/NULL);
		// _packet.Write(_player.transform.position);
		Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_4 = V_0;
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_5 = ____player0;
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		Packet_Write_mBB60F6EB2D18CCE21AF5ACD9518A2B46642B4C8F(L_4, L_7, /*hidden argument*/NULL);
		// SendUDPDataToAll(_packet);
		Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_8 = V_0;
		ServerSend_SendUDPDataToAll_mF4B1C5DA62BDE586B181F7BD3315923B7E03D638(L_8, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x3D, FINALLY_0032);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0032;
	}

FINALLY_0032:
	{ // begin finally (depth: 1)
		{
			Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_9 = V_0;
			if (!L_9)
			{
				goto IL_003c;
			}
		}

IL_0035:
		{
			Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_10 = V_0;
			NullCheck(L_10);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_10);
		}

IL_003c:
		{
			IL2CPP_END_FINALLY(50)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(50)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3D, IL_003d)
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void ServerSend::PlayerRotation(Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerSend_PlayerRotation_m041BCD426D1D652B52C015C6778D4C1BB3DCDDBC (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * ____player0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Packet_t9AE66670972832E2A1F334616B45353CF46A4B68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// using (Packet _packet = new Packet((int)ServerPackets.playerRotation))
		Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_0 = (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 *)il2cpp_codegen_object_new(Packet_t9AE66670972832E2A1F334616B45353CF46A4B68_il2cpp_TypeInfo_var);
		Packet__ctor_mC1342F761E2948FA4CCC10BECE3AD126C07E676D(L_0, 4, /*hidden argument*/NULL);
		V_0 = L_0;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		// _packet.Write(_player.id);
		Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_1 = V_0;
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_2 = ____player0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_id_4();
		NullCheck(L_1);
		Packet_Write_mC49636594BF6314C48A57ECCABF6F8A0CAD16D01(L_1, L_3, /*hidden argument*/NULL);
		// _packet.Write(_player.transform.rotation);
		Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_4 = V_0;
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_5 = ____player0;
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7;
		L_7 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		Packet_Write_m7B8307F96B7DD96056F5A22241C54DB419E18B67(L_4, L_7, /*hidden argument*/NULL);
		// SendUDPDataToAll(_player.id, _packet);
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_8 = ____player0;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_id_4();
		Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_10 = V_0;
		ServerSend_SendUDPDataToAll_m282A9031FE82808CC101FEAAB41B88186B31777C(L_9, L_10, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x43, FINALLY_0038);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0038;
	}

FINALLY_0038:
	{ // begin finally (depth: 1)
		{
			Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_11 = V_0;
			if (!L_11)
			{
				goto IL_0042;
			}
		}

IL_003b:
		{
			Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_12 = V_0;
			NullCheck(L_12);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_12);
		}

IL_0042:
		{
			IL2CPP_END_FINALLY(56)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(56)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x43, IL_0043)
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void ServerSend::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServerSend__ctor_mA11AE97EC57B61D74856F731612A6AEC7AC637AC (ServerSend_t8746A858E0EB05CD5B894DC774249E267F58B806 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void ThreadManager::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadManager_FixedUpdate_m5664AD42FB4323746BA263C5A4637252F6DE710D (ThreadManager_tA8AFCF4EC354801306F01FDC18C608291549ADBD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadManager_tA8AFCF4EC354801306F01FDC18C608291549ADBD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UpdateMain();
		IL2CPP_RUNTIME_CLASS_INIT(ThreadManager_tA8AFCF4EC354801306F01FDC18C608291549ADBD_il2cpp_TypeInfo_var);
		ThreadManager_UpdateMain_m90636448B10DDCAE1D5E76FF9106B86F4340CC45(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ThreadManager::ExecuteOnMainThread(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadManager_ExecuteOnMainThread_m8CB16531E7297D2D8A3D1E677D261D9D9A38C9A5 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ____action0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m7701B455B6EA0411642596847118B51F91DA8BC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadManager_tA8AFCF4EC354801306F01FDC18C608291549ADBD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DA6605C3DF4D6C880DF4ED47C327E3C0B26DAD9);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * V_1 = NULL;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (_action == null)
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ____action0;
		V_0 = (bool)((((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// Console.WriteLine("No action to execute on main thread!");
		IL2CPP_RUNTIME_CLASS_INIT(Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_il2cpp_TypeInfo_var);
		Console_WriteLine_mE9EEA95C541D41E36A0F4844153A67EAAA0D12F7(_stringLiteral4DA6605C3DF4D6C880DF4ED47C327E3C0B26DAD9, /*hidden argument*/NULL);
		// return;
		goto IL_0049;
	}

IL_0017:
	{
		// lock (executeOnMainThread)
		IL2CPP_RUNTIME_CLASS_INIT(ThreadManager_tA8AFCF4EC354801306F01FDC18C608291549ADBD_il2cpp_TypeInfo_var);
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_2 = ((ThreadManager_tA8AFCF4EC354801306F01FDC18C608291549ADBD_StaticFields*)il2cpp_codegen_static_fields_for(ThreadManager_tA8AFCF4EC354801306F01FDC18C608291549ADBD_il2cpp_TypeInfo_var))->get_executeOnMainThread_4();
		V_1 = L_2;
		V_2 = (bool)0;
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_3 = V_1;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_3, (bool*)(&V_2), /*hidden argument*/NULL);
		// executeOnMainThread.Add(_action);
		IL2CPP_RUNTIME_CLASS_INIT(ThreadManager_tA8AFCF4EC354801306F01FDC18C608291549ADBD_il2cpp_TypeInfo_var);
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_4 = ((ThreadManager_tA8AFCF4EC354801306F01FDC18C608291549ADBD_StaticFields*)il2cpp_codegen_static_fields_for(ThreadManager_tA8AFCF4EC354801306F01FDC18C608291549ADBD_il2cpp_TypeInfo_var))->get_executeOnMainThread_4();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = ____action0;
		NullCheck(L_4);
		List_1_Add_m7701B455B6EA0411642596847118B51F91DA8BC9(L_4, L_5, /*hidden argument*/List_1_Add_m7701B455B6EA0411642596847118B51F91DA8BC9_RuntimeMethod_var);
		// actionToExecuteOnMainThread = true;
		((ThreadManager_tA8AFCF4EC354801306F01FDC18C608291549ADBD_StaticFields*)il2cpp_codegen_static_fields_for(ThreadManager_tA8AFCF4EC354801306F01FDC18C608291549ADBD_il2cpp_TypeInfo_var))->set_actionToExecuteOnMainThread_6((bool)1);
		IL2CPP_LEAVE(0x49, FINALLY_003e);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003e;
	}

FINALLY_003e:
	{ // begin finally (depth: 1)
		{
			bool L_6 = V_2;
			if (!L_6)
			{
				goto IL_0048;
			}
		}

IL_0041:
		{
			List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_7 = V_1;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_7, /*hidden argument*/NULL);
		}

IL_0048:
		{
			IL2CPP_END_FINALLY(62)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(62)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x49, IL_0049)
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void ThreadManager::UpdateMain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadManager_UpdateMain_m90636448B10DDCAE1D5E76FF9106B86F4340CC45 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mC32923569CAAE589250C6AD9DCEEBFEC2AE11335_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mAFD3E92217FFE1CC0A595FC5C1394D30FECC3BC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m62C12145DD437794F8660D2396A00A7B2BA480C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9F0A626A47DAE7452E139A6961335BE81507E551_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadManager_tA8AFCF4EC354801306F01FDC18C608291549ADBD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (actionToExecuteOnMainThread)
		IL2CPP_RUNTIME_CLASS_INIT(ThreadManager_tA8AFCF4EC354801306F01FDC18C608291549ADBD_il2cpp_TypeInfo_var);
		bool L_0 = ((ThreadManager_tA8AFCF4EC354801306F01FDC18C608291549ADBD_StaticFields*)il2cpp_codegen_static_fields_for(ThreadManager_tA8AFCF4EC354801306F01FDC18C608291549ADBD_il2cpp_TypeInfo_var))->get_actionToExecuteOnMainThread_6();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0086;
		}
	}
	{
		// executeCopiedOnMainThread.Clear();
		IL2CPP_RUNTIME_CLASS_INIT(ThreadManager_tA8AFCF4EC354801306F01FDC18C608291549ADBD_il2cpp_TypeInfo_var);
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_2 = ((ThreadManager_tA8AFCF4EC354801306F01FDC18C608291549ADBD_StaticFields*)il2cpp_codegen_static_fields_for(ThreadManager_tA8AFCF4EC354801306F01FDC18C608291549ADBD_il2cpp_TypeInfo_var))->get_executeCopiedOnMainThread_5();
		NullCheck(L_2);
		List_1_Clear_mAFD3E92217FFE1CC0A595FC5C1394D30FECC3BC4(L_2, /*hidden argument*/List_1_Clear_mAFD3E92217FFE1CC0A595FC5C1394D30FECC3BC4_RuntimeMethod_var);
		// lock (executeOnMainThread)
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_3 = ((ThreadManager_tA8AFCF4EC354801306F01FDC18C608291549ADBD_StaticFields*)il2cpp_codegen_static_fields_for(ThreadManager_tA8AFCF4EC354801306F01FDC18C608291549ADBD_il2cpp_TypeInfo_var))->get_executeOnMainThread_4();
		V_1 = L_3;
		V_2 = (bool)0;
	}

IL_001e:
	try
	{ // begin try (depth: 1)
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_4 = V_1;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_4, (bool*)(&V_2), /*hidden argument*/NULL);
		// executeCopiedOnMainThread.AddRange(executeOnMainThread);
		IL2CPP_RUNTIME_CLASS_INIT(ThreadManager_tA8AFCF4EC354801306F01FDC18C608291549ADBD_il2cpp_TypeInfo_var);
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_5 = ((ThreadManager_tA8AFCF4EC354801306F01FDC18C608291549ADBD_StaticFields*)il2cpp_codegen_static_fields_for(ThreadManager_tA8AFCF4EC354801306F01FDC18C608291549ADBD_il2cpp_TypeInfo_var))->get_executeCopiedOnMainThread_5();
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_6 = ((ThreadManager_tA8AFCF4EC354801306F01FDC18C608291549ADBD_StaticFields*)il2cpp_codegen_static_fields_for(ThreadManager_tA8AFCF4EC354801306F01FDC18C608291549ADBD_il2cpp_TypeInfo_var))->get_executeOnMainThread_4();
		NullCheck(L_5);
		List_1_AddRange_mC32923569CAAE589250C6AD9DCEEBFEC2AE11335(L_5, L_6, /*hidden argument*/List_1_AddRange_mC32923569CAAE589250C6AD9DCEEBFEC2AE11335_RuntimeMethod_var);
		// executeOnMainThread.Clear();
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_7 = ((ThreadManager_tA8AFCF4EC354801306F01FDC18C608291549ADBD_StaticFields*)il2cpp_codegen_static_fields_for(ThreadManager_tA8AFCF4EC354801306F01FDC18C608291549ADBD_il2cpp_TypeInfo_var))->get_executeOnMainThread_4();
		NullCheck(L_7);
		List_1_Clear_mAFD3E92217FFE1CC0A595FC5C1394D30FECC3BC4(L_7, /*hidden argument*/List_1_Clear_mAFD3E92217FFE1CC0A595FC5C1394D30FECC3BC4_RuntimeMethod_var);
		// actionToExecuteOnMainThread = false;
		((ThreadManager_tA8AFCF4EC354801306F01FDC18C608291549ADBD_StaticFields*)il2cpp_codegen_static_fields_for(ThreadManager_tA8AFCF4EC354801306F01FDC18C608291549ADBD_il2cpp_TypeInfo_var))->set_actionToExecuteOnMainThread_6((bool)0);
		IL2CPP_LEAVE(0x57, FINALLY_004c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004c;
	}

FINALLY_004c:
	{ // begin finally (depth: 1)
		{
			bool L_8 = V_2;
			if (!L_8)
			{
				goto IL_0056;
			}
		}

IL_004f:
		{
			List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_9 = V_1;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_9, /*hidden argument*/NULL);
		}

IL_0056:
		{
			IL2CPP_END_FINALLY(76)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(76)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x57, IL_0057)
	}

IL_0057:
	{
		// for (int i = 0; i < executeCopiedOnMainThread.Count; i++)
		V_3 = 0;
		goto IL_0072;
	}

IL_005b:
	{
		// executeCopiedOnMainThread[i]();
		IL2CPP_RUNTIME_CLASS_INIT(ThreadManager_tA8AFCF4EC354801306F01FDC18C608291549ADBD_il2cpp_TypeInfo_var);
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_10 = ((ThreadManager_tA8AFCF4EC354801306F01FDC18C608291549ADBD_StaticFields*)il2cpp_codegen_static_fields_for(ThreadManager_tA8AFCF4EC354801306F01FDC18C608291549ADBD_il2cpp_TypeInfo_var))->get_executeCopiedOnMainThread_5();
		int32_t L_11 = V_3;
		NullCheck(L_10);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_12;
		L_12 = List_1_get_Item_m9F0A626A47DAE7452E139A6961335BE81507E551_inline(L_10, L_11, /*hidden argument*/List_1_get_Item_m9F0A626A47DAE7452E139A6961335BE81507E551_RuntimeMethod_var);
		NullCheck(L_12);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_12, /*hidden argument*/NULL);
		// for (int i = 0; i < executeCopiedOnMainThread.Count; i++)
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0072:
	{
		// for (int i = 0; i < executeCopiedOnMainThread.Count; i++)
		int32_t L_14 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(ThreadManager_tA8AFCF4EC354801306F01FDC18C608291549ADBD_il2cpp_TypeInfo_var);
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_15 = ((ThreadManager_tA8AFCF4EC354801306F01FDC18C608291549ADBD_StaticFields*)il2cpp_codegen_static_fields_for(ThreadManager_tA8AFCF4EC354801306F01FDC18C608291549ADBD_il2cpp_TypeInfo_var))->get_executeCopiedOnMainThread_5();
		NullCheck(L_15);
		int32_t L_16;
		L_16 = List_1_get_Count_m62C12145DD437794F8660D2396A00A7B2BA480C5_inline(L_15, /*hidden argument*/List_1_get_Count_m62C12145DD437794F8660D2396A00A7B2BA480C5_RuntimeMethod_var);
		V_4 = (bool)((((int32_t)L_14) < ((int32_t)L_16))? 1 : 0);
		bool L_17 = V_4;
		if (L_17)
		{
			goto IL_005b;
		}
	}
	{
	}

IL_0086:
	{
		// }
		return;
	}
}
// System.Void ThreadManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadManager__ctor_mB50BCEAC4B9AB917658EB212383C5818ECF04F6C (ThreadManager_tA8AFCF4EC354801306F01FDC18C608291549ADBD * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ThreadManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadManager__cctor_mB5878A8B678FF9EE9D68FB21864F24C854E88B2C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8F3A8E6C64C39DA66FF5F99E7A6BB97B41A482BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t458734AF850139150AB40DFB2B5D1BCE23178235_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadManager_tA8AFCF4EC354801306F01FDC18C608291549ADBD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly List<Action> executeOnMainThread = new List<Action>();
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_0 = (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 *)il2cpp_codegen_object_new(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235_il2cpp_TypeInfo_var);
		List_1__ctor_m8F3A8E6C64C39DA66FF5F99E7A6BB97B41A482BB(L_0, /*hidden argument*/List_1__ctor_m8F3A8E6C64C39DA66FF5F99E7A6BB97B41A482BB_RuntimeMethod_var);
		((ThreadManager_tA8AFCF4EC354801306F01FDC18C608291549ADBD_StaticFields*)il2cpp_codegen_static_fields_for(ThreadManager_tA8AFCF4EC354801306F01FDC18C608291549ADBD_il2cpp_TypeInfo_var))->set_executeOnMainThread_4(L_0);
		// private static readonly List<Action> executeCopiedOnMainThread = new List<Action>();
		List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 * L_1 = (List_1_t458734AF850139150AB40DFB2B5D1BCE23178235 *)il2cpp_codegen_object_new(List_1_t458734AF850139150AB40DFB2B5D1BCE23178235_il2cpp_TypeInfo_var);
		List_1__ctor_m8F3A8E6C64C39DA66FF5F99E7A6BB97B41A482BB(L_1, /*hidden argument*/List_1__ctor_m8F3A8E6C64C39DA66FF5F99E7A6BB97B41A482BB_RuntimeMethod_var);
		((ThreadManager_tA8AFCF4EC354801306F01FDC18C608291549ADBD_StaticFields*)il2cpp_codegen_static_fields_for(ThreadManager_tA8AFCF4EC354801306F01FDC18C608291549ADBD_il2cpp_TypeInfo_var))->set_executeCopiedOnMainThread_5(L_1);
		// private static bool actionToExecuteOnMainThread = false;
		((ThreadManager_tA8AFCF4EC354801306F01FDC18C608291549ADBD_StaticFields*)il2cpp_codegen_static_fields_for(ThreadManager_tA8AFCF4EC354801306F01FDC18C608291549ADBD_il2cpp_TypeInfo_var))->set_actionToExecuteOnMainThread_6((bool)0);
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
// System.Void Client/TCP::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP__ctor_m5B160CCB7BC4C0D33C050267CFB3B6D9F48250CE (TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F * __this, int32_t ____id0, const RuntimeMethod* method)
{
	{
		// public TCP(int _id)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// id = _id;
		int32_t L_0 = ____id0;
		__this->set_id_1(L_0);
		// }
		return;
	}
}
// System.Void Client/TCP::Connect(System.Net.Sockets.TcpClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP_Connect_mBFE7D5177B48F233241F9A694CA417C770FBF79C (TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F * __this, TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * ____socket0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Client_t8953F633032099609444F417EEFFBED62649CECB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Packet_t9AE66670972832E2A1F334616B45353CF46A4B68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TCP_ReceiveCallback_mD80429339F3000EFF23B65BF5C2B89A2B945AF17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral327976042FBF2A6A61342BA4C0B93047EFCEA46A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// socket = _socket;
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_0 = ____socket0;
		__this->set_socket_0(L_0);
		// socket.ReceiveBufferSize = dataBufferSize;
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_1 = __this->get_socket_0();
		IL2CPP_RUNTIME_CLASS_INIT(Client_t8953F633032099609444F417EEFFBED62649CECB_il2cpp_TypeInfo_var);
		int32_t L_2 = ((Client_t8953F633032099609444F417EEFFBED62649CECB_StaticFields*)il2cpp_codegen_static_fields_for(Client_t8953F633032099609444F417EEFFBED62649CECB_il2cpp_TypeInfo_var))->get_dataBufferSize_0();
		NullCheck(L_1);
		TcpClient_set_ReceiveBufferSize_m9451660573B28BD95582D1215CF064FAD4A474F0(L_1, L_2, /*hidden argument*/NULL);
		// socket.SendBufferSize = dataBufferSize;
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_3 = __this->get_socket_0();
		int32_t L_4 = ((Client_t8953F633032099609444F417EEFFBED62649CECB_StaticFields*)il2cpp_codegen_static_fields_for(Client_t8953F633032099609444F417EEFFBED62649CECB_il2cpp_TypeInfo_var))->get_dataBufferSize_0();
		NullCheck(L_3);
		TcpClient_set_SendBufferSize_m7DA51C3FA45E79EC33648F6817F5AC036556B714(L_3, L_4, /*hidden argument*/NULL);
		// stream = socket.GetStream();
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_5 = __this->get_socket_0();
		NullCheck(L_5);
		NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * L_6;
		L_6 = TcpClient_GetStream_mBBF27B06916830198E0E3BA323142793E9B2C5FC(L_5, /*hidden argument*/NULL);
		__this->set_stream_2(L_6);
		// receivedData = new Packet();
		Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_7 = (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 *)il2cpp_codegen_object_new(Packet_t9AE66670972832E2A1F334616B45353CF46A4B68_il2cpp_TypeInfo_var);
		Packet__ctor_mE2FEB2512B8EEB697985D72083A1A47D03C2CD06(L_7, /*hidden argument*/NULL);
		__this->set_receivedData_3(L_7);
		// receiveBuffer = new byte[dataBufferSize];
		int32_t L_8 = ((Client_t8953F633032099609444F417EEFFBED62649CECB_StaticFields*)il2cpp_codegen_static_fields_for(Client_t8953F633032099609444F417EEFFBED62649CECB_il2cpp_TypeInfo_var))->get_dataBufferSize_0();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_8);
		__this->set_receiveBuffer_4(L_9);
		// stream.BeginRead(receiveBuffer, 0, dataBufferSize, ReceiveCallback, null);
		NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * L_10 = __this->get_stream_2();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = __this->get_receiveBuffer_4();
		int32_t L_12 = ((Client_t8953F633032099609444F417EEFFBED62649CECB_StaticFields*)il2cpp_codegen_static_fields_for(Client_t8953F633032099609444F417EEFFBED62649CECB_il2cpp_TypeInfo_var))->get_dataBufferSize_0();
		AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_13 = (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)il2cpp_codegen_object_new(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var);
		AsyncCallback__ctor_m90AB9820D2F8B0B06E5E51AF3E9086415A122D05(L_13, __this, (intptr_t)((intptr_t)TCP_ReceiveCallback_mD80429339F3000EFF23B65BF5C2B89A2B945AF17_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_10);
		RuntimeObject* L_14;
		L_14 = VirtFuncInvoker5< RuntimeObject*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *, RuntimeObject * >::Invoke(16 /* System.IAsyncResult System.IO.Stream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object) */, L_10, L_11, 0, L_12, L_13, NULL);
		// ServerSend.Welcome(id, "Welcome to the server!");
		int32_t L_15 = __this->get_id_1();
		ServerSend_Welcome_m63549FAB23ED93B1BA415181057C1DB693BDA214(L_15, _stringLiteral327976042FBF2A6A61342BA4C0B93047EFCEA46A, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Client/TCP::SendData(Packet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP_SendData_mDD06EFD3A051B1FB6F1C3DED8678FE9497195A6E (TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F * __this, Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * ____packet0, const RuntimeMethod* method)
{
	bool V_0 = false;
	Exception_t * V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			// if (socket != null)
			TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_0 = __this->get_socket_0();
			V_0 = (bool)((!(((RuntimeObject*)(TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			bool L_1 = V_0;
			if (!L_1)
			{
				goto IL_002c;
			}
		}

IL_000f:
		{
			// stream.BeginWrite(_packet.ToArray(), 0, _packet.Length(), null, null); // Send data to appropriate client
			NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * L_2 = __this->get_stream_2();
			Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_3 = ____packet0;
			NullCheck(L_3);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4;
			L_4 = Packet_ToArray_m979D2597878458D03805683B169F659D4DC7AFA8(L_3, /*hidden argument*/NULL);
			Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_5 = ____packet0;
			NullCheck(L_5);
			int32_t L_6;
			L_6 = Packet_Length_mEDFD969DB9E45281A1B3FB6C54DDACA009E2D1EE(L_5, /*hidden argument*/NULL);
			NullCheck(L_2);
			RuntimeObject* L_7;
			L_7 = VirtFuncInvoker5< RuntimeObject*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *, RuntimeObject * >::Invoke(18 /* System.IAsyncResult System.IO.Stream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object) */, L_2, L_4, 0, L_6, (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)NULL, NULL);
		}

IL_002c:
		{
			goto IL_0050;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002f;
		}
		throw e;
	}

CATCH_002f:
	{ // begin catch(System.Exception)
		// catch (Exception _ex)
		V_1 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		// Debug.Log($"Error sending data to player {id} via TCP: {_ex}");
		int32_t L_8 = __this->get_id_1();
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_9);
		Exception_t * L_11 = V_1;
		String_t* L_12;
		L_12 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBADA71C640CF53792306296B3909356D97D0CC7E)), L_10, L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_12, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0050;
	} // end catch (depth: 1)

IL_0050:
	{
		// }
		return;
	}
}
// System.Void Client/TCP::ReceiveCallback(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP_ReceiveCallback_mD80429339F3000EFF23B65BF5C2B89A2B945AF17 (TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F * __this, RuntimeObject* ____result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Client_t8953F633032099609444F417EEFFBED62649CECB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m3A4EC04719D2C48FF27A5ABB0D4F909483D50034_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TCP_ReceiveCallback_mD80429339F3000EFF23B65BF5C2B89A2B945AF17_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	bool V_2 = false;
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			// int _byteLength = stream.EndRead(_result);
			NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * L_0 = __this->get_stream_2();
			RuntimeObject* L_1 = ____result0;
			NullCheck(L_0);
			int32_t L_2;
			L_2 = VirtFuncInvoker1< int32_t, RuntimeObject* >::Invoke(17 /* System.Int32 System.IO.Stream::EndRead(System.IAsyncResult) */, L_0, L_1);
			V_0 = L_2;
			// if (_byteLength <= 0)
			int32_t L_3 = V_0;
			V_2 = (bool)((((int32_t)((((int32_t)L_3) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_4 = V_2;
			if (!L_4)
			{
				goto IL_0033;
			}
		}

IL_001a:
		{
			// Server.clients[id].Disconnect();
			IL2CPP_RUNTIME_CLASS_INIT(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
			Dictionary_2_t7ABF92427955B899A00760057F6517A757958842 * L_5 = ((Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_StaticFields*)il2cpp_codegen_static_fields_for(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var))->get_clients_2();
			int32_t L_6 = __this->get_id_1();
			NullCheck(L_5);
			Client_t8953F633032099609444F417EEFFBED62649CECB * L_7;
			L_7 = Dictionary_2_get_Item_m3A4EC04719D2C48FF27A5ABB0D4F909483D50034(L_5, L_6, /*hidden argument*/Dictionary_2_get_Item_m3A4EC04719D2C48FF27A5ABB0D4F909483D50034_RuntimeMethod_var);
			NullCheck(L_7);
			Client_Disconnect_m62DEBF109E88207BA5B05FDD48CC39E5A4890B50(L_7, /*hidden argument*/NULL);
			// return;
			goto IL_00af;
		}

IL_0033:
		{
			// byte[] _data = new byte[_byteLength];
			int32_t L_8 = V_0;
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_8);
			V_1 = L_9;
			// Array.Copy(receiveBuffer, _data, _byteLength);
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_10 = __this->get_receiveBuffer_4();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = V_1;
			int32_t L_12 = V_0;
			Array_Copy_m40103AA97DC582C557B912CF4BBE86A4D166F803((RuntimeArray *)(RuntimeArray *)L_10, (RuntimeArray *)(RuntimeArray *)L_11, L_12, /*hidden argument*/NULL);
			// receivedData.Reset(HandleData(_data)); // Reset receivedData if all data was handled
			Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_13 = __this->get_receivedData_3();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = V_1;
			bool L_15;
			L_15 = TCP_HandleData_m82C4D4020CDA7986E9A111E7F49D4C114BF983AD(__this, L_14, /*hidden argument*/NULL);
			NullCheck(L_13);
			Packet_Reset_m38600E247A064753754D21711D55770D1791C636(L_13, L_15, /*hidden argument*/NULL);
			// stream.BeginRead(receiveBuffer, 0, dataBufferSize, ReceiveCallback, null);
			NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 * L_16 = __this->get_stream_2();
			ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = __this->get_receiveBuffer_4();
			IL2CPP_RUNTIME_CLASS_INIT(Client_t8953F633032099609444F417EEFFBED62649CECB_il2cpp_TypeInfo_var);
			int32_t L_18 = ((Client_t8953F633032099609444F417EEFFBED62649CECB_StaticFields*)il2cpp_codegen_static_fields_for(Client_t8953F633032099609444F417EEFFBED62649CECB_il2cpp_TypeInfo_var))->get_dataBufferSize_0();
			AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_19 = (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)il2cpp_codegen_object_new(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA_il2cpp_TypeInfo_var);
			AsyncCallback__ctor_m90AB9820D2F8B0B06E5E51AF3E9086415A122D05(L_19, __this, (intptr_t)((intptr_t)TCP_ReceiveCallback_mD80429339F3000EFF23B65BF5C2B89A2B945AF17_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_16);
			RuntimeObject* L_20;
			L_20 = VirtFuncInvoker5< RuntimeObject*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *, RuntimeObject * >::Invoke(16 /* System.IAsyncResult System.IO.Stream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object) */, L_16, L_17, 0, L_18, L_19, NULL);
			goto IL_00af;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0083;
		}
		throw e;
	}

CATCH_0083:
	{ // begin catch(System.Exception)
		// catch (Exception _ex)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		// Debug.Log($"Error receiving TCP data: {_ex}");
		Exception_t * L_21 = V_3;
		String_t* L_22;
		L_22 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral920600362200F1D16F6C3C76DE191C7F8788D270)), L_21, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_22, /*hidden argument*/NULL);
		// Server.clients[id].Disconnect();
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var)));
		Dictionary_2_t7ABF92427955B899A00760057F6517A757958842 * L_23 = ((Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var))))->get_clients_2();
		int32_t L_24 = __this->get_id_1();
		NullCheck(L_23);
		Client_t8953F633032099609444F417EEFFBED62649CECB * L_25;
		L_25 = Dictionary_2_get_Item_m3A4EC04719D2C48FF27A5ABB0D4F909483D50034(L_23, L_24, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Dictionary_2_get_Item_m3A4EC04719D2C48FF27A5ABB0D4F909483D50034_RuntimeMethod_var)));
		NullCheck(L_25);
		Client_Disconnect_m62DEBF109E88207BA5B05FDD48CC39E5A4890B50(L_25, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00af;
	} // end catch (depth: 1)

IL_00af:
	{
		// }
		return;
	}
}
// System.Boolean Client/TCP::HandleData(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TCP_HandleData_m82C4D4020CDA7986E9A111E7F49D4C114BF983AD (TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadManager_tA8AFCF4EC354801306F01FDC18C608291549ADBD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_U3CHandleDataU3Eb__0_mBA9BD0CEC019C14F69E4F14668CC5948177A48B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_t41B4F144D7381A00E3DC598CBEE4D2D4E3F43279_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	U3CU3Ec__DisplayClass9_0_t41B4F144D7381A00E3DC598CBEE4D2D4E3F43279 * V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B13_0 = 0;
	{
		// int _packetLength = 0;
		V_0 = 0;
		// receivedData.SetBytes(_data);
		Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_0 = __this->get_receivedData_3();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ____data0;
		NullCheck(L_0);
		Packet_SetBytes_m3B6E29091B9E8D14BD9D98FD55B4135E195B805D(L_0, L_1, /*hidden argument*/NULL);
		// if (receivedData.UnreadLength() >= 4)
		Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_2 = __this->get_receivedData_3();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Packet_UnreadLength_m35FB45ADAE9E5387F1586DDA9C3AC8D4ECC56B00(L_2, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_3) < ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0047;
		}
	}
	{
		// _packetLength = receivedData.ReadInt();
		Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_5 = __this->get_receivedData_3();
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Packet_ReadInt_m7C7C7168F3119B364182D2B3DE98718C919966A5(L_5, (bool)1, /*hidden argument*/NULL);
		V_0 = L_6;
		// if (_packetLength <= 0)
		int32_t L_7 = V_0;
		V_2 = (bool)((((int32_t)((((int32_t)L_7) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0046;
		}
	}
	{
		// return true; // Reset receivedData instance to allow it to be reused
		V_3 = (bool)1;
		goto IL_00f2;
	}

IL_0046:
	{
	}

IL_0047:
	{
		goto IL_00bb;
	}

IL_0049:
	{
		U3CU3Ec__DisplayClass9_0_t41B4F144D7381A00E3DC598CBEE4D2D4E3F43279 * L_9 = (U3CU3Ec__DisplayClass9_0_t41B4F144D7381A00E3DC598CBEE4D2D4E3F43279 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass9_0_t41B4F144D7381A00E3DC598CBEE4D2D4E3F43279_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass9_0__ctor_m1FAB2D291AF76B455B3CEEAD6C2571E2F666D049(L_9, /*hidden argument*/NULL);
		V_4 = L_9;
		U3CU3Ec__DisplayClass9_0_t41B4F144D7381A00E3DC598CBEE4D2D4E3F43279 * L_10 = V_4;
		NullCheck(L_10);
		L_10->set_U3CU3E4__this_1(__this);
		// byte[] _packetBytes = receivedData.ReadBytes(_packetLength);
		U3CU3Ec__DisplayClass9_0_t41B4F144D7381A00E3DC598CBEE4D2D4E3F43279 * L_11 = V_4;
		Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_12 = __this->get_receivedData_3();
		int32_t L_13 = V_0;
		NullCheck(L_12);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14;
		L_14 = Packet_ReadBytes_mC990811110E0B0A02D489453635CF81DFE16FA0A(L_12, L_13, (bool)1, /*hidden argument*/NULL);
		NullCheck(L_11);
		L_11->set__packetBytes_0(L_14);
		// ThreadManager.ExecuteOnMainThread(() =>
		// {
		//     using (Packet _packet = new Packet(_packetBytes))
		//     {
		//         int _packetId = _packet.ReadInt();
		//         Server.packetHandlers[_packetId](id, _packet); // Call appropriate method to handle the packet
		//     }
		// });
		U3CU3Ec__DisplayClass9_0_t41B4F144D7381A00E3DC598CBEE4D2D4E3F43279 * L_15 = V_4;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_16 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_16, L_15, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass9_0_U3CHandleDataU3Eb__0_mBA9BD0CEC019C14F69E4F14668CC5948177A48B8_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ThreadManager_tA8AFCF4EC354801306F01FDC18C608291549ADBD_il2cpp_TypeInfo_var);
		ThreadManager_ExecuteOnMainThread_m8CB16531E7297D2D8A3D1E677D261D9D9A38C9A5(L_16, /*hidden argument*/NULL);
		// _packetLength = 0; // Reset packet length
		V_0 = 0;
		// if (receivedData.UnreadLength() >= 4)
		Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_17 = __this->get_receivedData_3();
		NullCheck(L_17);
		int32_t L_18;
		L_18 = Packet_UnreadLength_m35FB45ADAE9E5387F1586DDA9C3AC8D4ECC56B00(L_17, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)((((int32_t)L_18) < ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_00ba;
		}
	}
	{
		// _packetLength = receivedData.ReadInt();
		Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_20 = __this->get_receivedData_3();
		NullCheck(L_20);
		int32_t L_21;
		L_21 = Packet_ReadInt_m7C7C7168F3119B364182D2B3DE98718C919966A5(L_20, (bool)1, /*hidden argument*/NULL);
		V_0 = L_21;
		// if (_packetLength <= 0)
		int32_t L_22 = V_0;
		V_6 = (bool)((((int32_t)((((int32_t)L_22) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_6;
		if (!L_23)
		{
			goto IL_00b9;
		}
	}
	{
		// return true; // Reset receivedData instance to allow it to be reused
		V_3 = (bool)1;
		goto IL_00f2;
	}

IL_00b9:
	{
	}

IL_00ba:
	{
	}

IL_00bb:
	{
		// while (_packetLength > 0 && _packetLength <= receivedData.UnreadLength())
		int32_t L_24 = V_0;
		if ((((int32_t)L_24) <= ((int32_t)0)))
		{
			goto IL_00d2;
		}
	}
	{
		int32_t L_25 = V_0;
		Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_26 = __this->get_receivedData_3();
		NullCheck(L_26);
		int32_t L_27;
		L_27 = Packet_UnreadLength_m35FB45ADAE9E5387F1586DDA9C3AC8D4ECC56B00(L_26, /*hidden argument*/NULL);
		G_B13_0 = ((((int32_t)((((int32_t)L_25) > ((int32_t)L_27))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00d3;
	}

IL_00d2:
	{
		G_B13_0 = 0;
	}

IL_00d3:
	{
		V_7 = (bool)G_B13_0;
		bool L_28 = V_7;
		if (L_28)
		{
			goto IL_0049;
		}
	}
	{
		// if (_packetLength <= 1)
		int32_t L_29 = V_0;
		V_8 = (bool)((((int32_t)((((int32_t)L_29) > ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_30 = V_8;
		if (!L_30)
		{
			goto IL_00ee;
		}
	}
	{
		// return true; // Reset receivedData instance to allow it to be reused
		V_3 = (bool)1;
		goto IL_00f2;
	}

IL_00ee:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_00f2;
	}

IL_00f2:
	{
		// }
		bool L_31 = V_3;
		return L_31;
	}
}
// System.Void Client/TCP::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TCP_Disconnect_m603956CCAEB92E4D282C8137AA64BB4A5C28877D (TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F * __this, const RuntimeMethod* method)
{
	{
		// socket.Close();
		TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * L_0 = __this->get_socket_0();
		NullCheck(L_0);
		TcpClient_Close_mCF4B20FF3721D82A8C9F8136E5CB1F4C68AFD5B3(L_0, /*hidden argument*/NULL);
		// stream = null;
		__this->set_stream_2((NetworkStream_t160A2538024FE3EC707872435D01F1C20B3B1A48 *)NULL);
		// receivedData = null;
		__this->set_receivedData_3((Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 *)NULL);
		// receiveBuffer = null;
		__this->set_receiveBuffer_4((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)NULL);
		// socket = null;
		__this->set_socket_0((TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE *)NULL);
		// }
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
// System.Void Client/UDP::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDP__ctor_m34E3346FC89478475493219077ECB19D003A612A (UDP_tFFDFA9C4A0D7E358A406440CC04A78608DE47451 * __this, int32_t ____id0, const RuntimeMethod* method)
{
	{
		// public UDP(int _id)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// id = _id;
		int32_t L_0 = ____id0;
		__this->set_id_1(L_0);
		// }
		return;
	}
}
// System.Void Client/UDP::Connect(System.Net.IPEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDP_Connect_m18189CA4A3A8C2D1C971C1B0B990A0D800952099 (UDP_tFFDFA9C4A0D7E358A406440CC04A78608DE47451 * __this, IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * ____endPoint0, const RuntimeMethod* method)
{
	{
		// endPoint = _endPoint;
		IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_0 = ____endPoint0;
		__this->set_endPoint_0(L_0);
		// }
		return;
	}
}
// System.Void Client/UDP::SendData(Packet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDP_SendData_mEA97B13B8D47895B56A29D6C74E77C35F9951AEF (UDP_tFFDFA9C4A0D7E358A406440CC04A78608DE47451 * __this, Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * ____packet0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Server.SendUDPData(endPoint, _packet);
		IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E * L_0 = __this->get_endPoint_0();
		Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_1 = ____packet0;
		IL2CPP_RUNTIME_CLASS_INIT(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		Server_SendUDPData_m8B630B7EC31715D1B65AD5E93C6961B5C54C6FEB(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Client/UDP::HandleData(Packet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDP_HandleData_m6F27C818ACC6EDF120F7E9665D655F130957B5EF (UDP_tFFDFA9C4A0D7E358A406440CC04A78608DE47451 * __this, Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * ____packetData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadManager_tA8AFCF4EC354801306F01FDC18C608291549ADBD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3CHandleDataU3Eb__0_m29FA4F914E3DDEA7E3BB20E907D3D019DF4E99D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_tD827CB36CA9701E47BAB4E94B329EA1AA3B99C42_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass5_0_tD827CB36CA9701E47BAB4E94B329EA1AA3B99C42 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		U3CU3Ec__DisplayClass5_0_tD827CB36CA9701E47BAB4E94B329EA1AA3B99C42 * L_0 = (U3CU3Ec__DisplayClass5_0_tD827CB36CA9701E47BAB4E94B329EA1AA3B99C42 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_tD827CB36CA9701E47BAB4E94B329EA1AA3B99C42_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass5_0__ctor_m0CDF2AD2DD9142077ED758350655B13977AAD6F4(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass5_0_tD827CB36CA9701E47BAB4E94B329EA1AA3B99C42 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_1(__this);
		// int _packetLength = _packetData.ReadInt();
		Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_2 = ____packetData0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Packet_ReadInt_m7C7C7168F3119B364182D2B3DE98718C919966A5(L_2, (bool)1, /*hidden argument*/NULL);
		V_1 = L_3;
		// byte[] _packetBytes = _packetData.ReadBytes(_packetLength);
		U3CU3Ec__DisplayClass5_0_tD827CB36CA9701E47BAB4E94B329EA1AA3B99C42 * L_4 = V_0;
		Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_5 = ____packetData0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7;
		L_7 = Packet_ReadBytes_mC990811110E0B0A02D489453635CF81DFE16FA0A(L_5, L_6, (bool)1, /*hidden argument*/NULL);
		NullCheck(L_4);
		L_4->set__packetBytes_0(L_7);
		// ThreadManager.ExecuteOnMainThread(() =>
		// {
		//     using (Packet _packet = new Packet(_packetBytes))
		//     {
		//         int _packetId = _packet.ReadInt();
		//         Server.packetHandlers[_packetId](id, _packet); // Call appropriate method to handle the packet
		//     }
		// });
		U3CU3Ec__DisplayClass5_0_tD827CB36CA9701E47BAB4E94B329EA1AA3B99C42 * L_8 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_9, L_8, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass5_0_U3CHandleDataU3Eb__0_m29FA4F914E3DDEA7E3BB20E907D3D019DF4E99D2_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ThreadManager_tA8AFCF4EC354801306F01FDC18C608291549ADBD_il2cpp_TypeInfo_var);
		ThreadManager_ExecuteOnMainThread_m8CB16531E7297D2D8A3D1E677D261D9D9A38C9A5(L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Client/UDP::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UDP_Disconnect_m60DD8548EF64D7BE640AF467F9D53086AB72590B (UDP_tFFDFA9C4A0D7E358A406440CC04A78608DE47451 * __this, const RuntimeMethod* method)
{
	{
		// endPoint = null;
		__this->set_endPoint_0((IPEndPoint_t41C675C79A8B4EA6D5211D9B907137A2C015EA3E *)NULL);
		// }
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
// System.Void Server/PacketHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PacketHandler__ctor_m3BD77F81992F898EE0A42EC0BFE7C7231720421C (PacketHandler_tF3182DDA9983ED609FD815750B65802DE9536286 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Server/PacketHandler::Invoke(System.Int32,Packet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PacketHandler_Invoke_m443B571271BBA8E99DB959508659F7D449CA28B9 (PacketHandler_tF3182DDA9983ED609FD815750B65802DE9536286 * __this, int32_t ____fromClient0, Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * ____packet1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(____fromClient0, ____packet1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ____fromClient0, ____packet1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * >::Invoke(targetMethod, targetThis, ____fromClient0, ____packet1);
					else
						GenericVirtActionInvoker2< int32_t, Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * >::Invoke(targetMethod, targetThis, ____fromClient0, ____packet1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ____fromClient0, ____packet1);
					else
						VirtActionInvoker2< int32_t, Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ____fromClient0, ____packet1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ____fromClient0, ____packet1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Server/PacketHandler::BeginInvoke(System.Int32,Packet,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PacketHandler_BeginInvoke_m92ABC7B973547691591996C9687CEB63765ED043 (PacketHandler_tF3182DDA9983ED609FD815750B65802DE9536286 * __this, int32_t ____fromClient0, Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * ____packet1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &____fromClient0);
	__d_args[1] = ____packet1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Server/PacketHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PacketHandler_EndInvoke_m5A67C8F2F658267FD89C7800B7F979F956F43BDD (PacketHandler_tF3182DDA9983ED609FD815750B65802DE9536286 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Client/TCP/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_m1FAB2D291AF76B455B3CEEAD6C2571E2F666D049 (U3CU3Ec__DisplayClass9_0_t41B4F144D7381A00E3DC598CBEE4D2D4E3F43279 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Client/TCP/<>c__DisplayClass9_0::<HandleData>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0_U3CHandleDataU3Eb__0_mBA9BD0CEC019C14F69E4F14668CC5948177A48B8 (U3CU3Ec__DisplayClass9_0_t41B4F144D7381A00E3DC598CBEE4D2D4E3F43279 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mD0515F8A61ABD101438BFE061B88CEE89F1B1004_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Packet_t9AE66670972832E2A1F334616B45353CF46A4B68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * V_0 = NULL;
	int32_t V_1 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// using (Packet _packet = new Packet(_packetBytes))
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get__packetBytes_0();
		Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_1 = (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 *)il2cpp_codegen_object_new(Packet_t9AE66670972832E2A1F334616B45353CF46A4B68_il2cpp_TypeInfo_var);
		Packet__ctor_m1EA0D1BFB8E2F573993470A7EE9F8DCAE197AF3C(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		// int _packetId = _packet.ReadInt();
		Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Packet_ReadInt_m7C7C7168F3119B364182D2B3DE98718C919966A5(L_2, (bool)1, /*hidden argument*/NULL);
		V_1 = L_3;
		// Server.packetHandlers[_packetId](id, _packet); // Call appropriate method to handle the packet
		IL2CPP_RUNTIME_CLASS_INIT(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		Dictionary_2_t8ADD0927441CE234D6856F51E50B8C95DD29FBA5 * L_4 = ((Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_StaticFields*)il2cpp_codegen_static_fields_for(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var))->get_packetHandlers_3();
		int32_t L_5 = V_1;
		NullCheck(L_4);
		PacketHandler_tF3182DDA9983ED609FD815750B65802DE9536286 * L_6;
		L_6 = Dictionary_2_get_Item_mD0515F8A61ABD101438BFE061B88CEE89F1B1004(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_mD0515F8A61ABD101438BFE061B88CEE89F1B1004_RuntimeMethod_var);
		TCP_t2AE99B0E6CE9C92F9F066D72BBCE286FAB59263F * L_7 = __this->get_U3CU3E4__this_1();
		NullCheck(L_7);
		int32_t L_8 = L_7->get_id_1();
		Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_9 = V_0;
		NullCheck(L_6);
		PacketHandler_Invoke_m443B571271BBA8E99DB959508659F7D449CA28B9(L_6, L_8, L_9, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x41, FINALLY_0036);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0036;
	}

FINALLY_0036:
	{ // begin finally (depth: 1)
		{
			Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_10 = V_0;
			if (!L_10)
			{
				goto IL_0040;
			}
		}

IL_0039:
		{
			Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_11 = V_0;
			NullCheck(L_11);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_11);
		}

IL_0040:
		{
			IL2CPP_END_FINALLY(54)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(54)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x41, IL_0041)
	}

IL_0041:
	{
		// });
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
// System.Void Client/UDP/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m0CDF2AD2DD9142077ED758350655B13977AAD6F4 (U3CU3Ec__DisplayClass5_0_tD827CB36CA9701E47BAB4E94B329EA1AA3B99C42 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Client/UDP/<>c__DisplayClass5_0::<HandleData>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3CHandleDataU3Eb__0_m29FA4F914E3DDEA7E3BB20E907D3D019DF4E99D2 (U3CU3Ec__DisplayClass5_0_tD827CB36CA9701E47BAB4E94B329EA1AA3B99C42 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mD0515F8A61ABD101438BFE061B88CEE89F1B1004_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Packet_t9AE66670972832E2A1F334616B45353CF46A4B68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * V_0 = NULL;
	int32_t V_1 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// using (Packet _packet = new Packet(_packetBytes))
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get__packetBytes_0();
		Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_1 = (Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 *)il2cpp_codegen_object_new(Packet_t9AE66670972832E2A1F334616B45353CF46A4B68_il2cpp_TypeInfo_var);
		Packet__ctor_m1EA0D1BFB8E2F573993470A7EE9F8DCAE197AF3C(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		// int _packetId = _packet.ReadInt();
		Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Packet_ReadInt_m7C7C7168F3119B364182D2B3DE98718C919966A5(L_2, (bool)1, /*hidden argument*/NULL);
		V_1 = L_3;
		// Server.packetHandlers[_packetId](id, _packet); // Call appropriate method to handle the packet
		IL2CPP_RUNTIME_CLASS_INIT(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		Dictionary_2_t8ADD0927441CE234D6856F51E50B8C95DD29FBA5 * L_4 = ((Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_StaticFields*)il2cpp_codegen_static_fields_for(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var))->get_packetHandlers_3();
		int32_t L_5 = V_1;
		NullCheck(L_4);
		PacketHandler_tF3182DDA9983ED609FD815750B65802DE9536286 * L_6;
		L_6 = Dictionary_2_get_Item_mD0515F8A61ABD101438BFE061B88CEE89F1B1004(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_mD0515F8A61ABD101438BFE061B88CEE89F1B1004_RuntimeMethod_var);
		UDP_tFFDFA9C4A0D7E358A406440CC04A78608DE47451 * L_7 = __this->get_U3CU3E4__this_1();
		NullCheck(L_7);
		int32_t L_8 = L_7->get_id_1();
		Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_9 = V_0;
		NullCheck(L_6);
		PacketHandler_Invoke_m443B571271BBA8E99DB959508659F7D449CA28B9(L_6, L_8, L_9, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x41, FINALLY_0036);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0036;
	}

FINALLY_0036:
	{ // begin finally (depth: 1)
		{
			Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_10 = V_0;
			if (!L_10)
			{
				goto IL_0040;
			}
		}

IL_0039:
		{
			Packet_t9AE66670972832E2A1F334616B45353CF46A4B68 * L_11 = V_0;
			NullCheck(L_11);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_11);
		}

IL_0040:
		{
			IL2CPP_END_FINALLY(54)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(54)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x41, IL_0041)
	}

IL_0041:
	{
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * TcpClient_get_Client_mC5F4444D9A96380DC38E84E8A2B9E864D600C9A7_inline (TcpClient_t0EEB05EA031F6AFD93D46116F5E33A9C4E3350EE * __this, const RuntimeMethod* method)
{
	{
		Socket_tD9721140F91BE95BA05B87DD26A855B215D84D09 * L_0 = __this->get_m_ClientSocket_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		float L_2 = ___z2;
		__this->set_z_2(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_2();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Server_set_MaxPlayers_m2E7E6A75CE7524FEDCE5BC756DF5C2A5714651D5_inline (int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int MaxPlayers { get; private set; }
		int32_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		((Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_StaticFields*)il2cpp_codegen_static_fields_for(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var))->set_U3CMaxPlayersU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Server_set_Port_mAB7D8B90A5CCB1DB4B96B39A501EB2EAAE581BED_inline (int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int Port { get; private set; }
		int32_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		((Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_StaticFields*)il2cpp_codegen_static_fields_for(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var))->set_U3CPortU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Server_get_Port_m272775376BE0B9E98FD64224D4F97F346DFA013F_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int Port { get; private set; }
		IL2CPP_RUNTIME_CLASS_INIT(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_StaticFields*)il2cpp_codegen_static_fields_for(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var))->get_U3CPortU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Server_get_MaxPlayers_m3F7A8B7BB253AA6368118B66DCCDBF205ACB560A_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int MaxPlayers { get; private set; }
		IL2CPP_RUNTIME_CLASS_INIT(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_StaticFields*)il2cpp_codegen_static_fields_for(Server_tBD0461D98AFC74F7EAFC966BA1FD7D0E7867D273_il2cpp_TypeInfo_var))->get_U3CMaxPlayersU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mC05D3D6AD41313CA564794A0750EB5BC5AA04948_gshared_inline (Enumerator_tC388053BE5235308C1C6087681EC24B2B659648F * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_currentValue_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m1C5E87EEF4B8F8CB985E6C4FD69D863ABAD79F14_gshared_inline (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
