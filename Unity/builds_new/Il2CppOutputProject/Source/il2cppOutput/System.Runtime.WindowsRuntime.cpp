﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InterfaceActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`2<System.Object,System.Object>
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C;
// System.Action`2<System.Threading.Tasks.Task,System.Object>
struct Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB;
// System.Threading.Tasks.AsyncInfoToTaskBridge`1<System.VoidValueTypeParameter>
struct AsyncInfoToTaskBridge_1_t3F837B3047E80D2A3A6A19CB1CA845D924B9B44D;
// Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>
struct AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52;
// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D;
// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.Object,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_t76CDBC511557B0E87C4033A92975BBFDD28CC57F;
// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>
struct ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.IO.Stream>
struct ConditionalWeakTable_2_t854A212DF03C231A1FCD6A2CCD8FC269D295B27C;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.IO.Stream,System.IO.NetFxToWinRtStreamAdapter>
struct ConditionalWeakTable_2_t24BE7D16606E76A4491061A2E9F3E241D476135E;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Threading.Tasks.TaskScheduler,System.Object>
struct ConditionalWeakTable_2_t815A43BFBA64EC1F9F92AD042622E80EED65712E;
// System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.Object>
struct CreateValueCallback_t85D075DDCAD202B428EC47723590605681FE2BD1;
// System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.IO.Stream>
struct CreateValueCallback_tDDCD9D271D51B07C7E7946A50CDE83F171F5AD66;
// System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.IO.Stream,System.IO.NetFxToWinRtStreamAdapter>
struct CreateValueCallback_t67AEB55E60D5609661C588762443963DBD29C224;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs>
struct EventHandler_1_tE698654C3F437D97ABCCA3FD0AD8F86E776DC77A;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<System.Threading.CancellationToken,System.Threading.Tasks.Task`1<System.Boolean>>
struct Func_2_t6B60A4875CD5D79B29837A45D46D91F7128AA5C3;
// System.Func`2<System.Threading.CancellationToken,System.Object>
struct Func_2_t63A605CFD3E127FF85B2D60C8B97B6BF49E31634;
// System.Func`3<System.Threading.CancellationToken,System.IProgress`1<System.UInt32>,System.Threading.Tasks.Task`1<Windows.Storage.Streams.IBuffer>>
struct Func_3_tAC8FE9F123579F0F0724C2106222C88580347FC8;
// System.Func`3<System.Threading.CancellationToken,System.IProgress`1<System.UInt32>,System.Threading.Tasks.Task`1<System.Object>>
struct Func_3_t617418B3C4A5DD62E4F65335D8B8219A01CDC912;
// System.Func`3<System.Threading.CancellationToken,System.IProgress`1<System.UInt32>,System.Threading.Tasks.Task`1<System.UInt32>>
struct Func_3_t336F4190B9586A5D924C832BF5F023727A04707D;
// System.Func`3<System.Threading.CancellationToken,System.Object,System.Object>
struct Func_3_t136D2A34659708AF07F81A852FD6AB4258A1ADD1;
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8;
// Windows.Foundation.IAsyncOperationWithProgress`2<System.Object,System.UInt32>
struct IAsyncOperationWithProgress_2_tBF19993F9020707D84ABE40140A24DA51AD604E1;
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>
struct IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C;
// Windows.Foundation.IAsyncOperation`1<System.Boolean>
struct IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9;
// System.IProgress`1<System.UInt32>
struct IProgress_1_t95EDA14BCDEA36DD399575FF88CE05C2309101B3;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.SparselyPopulatedArrayFragment`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayFragment_1_tB32DA8C2B7461E80CE4C271B76C103629BDFA035;
// System.Threading.Tasks.TaskCompletionSource`1<System.VoidValueTypeParameter>
struct TaskCompletionSource_1_t2EED03A6AEF435DC304FDCC21ACC7EF6EBED79E7;
// System.Threading.Tasks.TaskFactory`1<System.Boolean>
struct TaskFactory_1_tFAEAC22A1E986463E6956C344A78A7C7197288E0;
// System.Threading.Tasks.TaskFactory`1<Windows.Storage.Streams.IBuffer>
struct TaskFactory_1_t0A7E59A0F5E2CA4232D089230C538B23505825AC;
// System.Threading.Tasks.TaskFactory`1<System.Int32>
struct TaskFactory_1_t0BEF06D58E44525B9135AB0B22D016856EE69FF3;
// System.Threading.Tasks.TaskFactory`1<System.UInt32>
struct TaskFactory_1_t13F924BE259FDF3ABF1144CA41338C34578B3600;
// System.Threading.Tasks.TaskFactory`1<System.VoidValueTypeParameter>
struct TaskFactory_1_tCA210ADC3269D13A32C5E78F040667B0BC52B6BB;
// System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncActionCompletedHandler,System.VoidReferenceTypeParameter,System.VoidValueTypeParameter,System.VoidValueTypeParameter>
struct TaskToAsyncInfoAdapter_4_t253617E9AD8E16A1018418DBCA9ECB3B1595EED9;
// System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.VoidValueTypeParameter,System.VoidValueTypeParameter>
struct TaskToAsyncInfoAdapter_4_tD4A410D665454F797F89C76CF816D5A006A43620;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043;
// System.Threading.Tasks.Task`1<Windows.Storage.Streams.IBuffer>
struct Task_1_t34C529965D1945277B370D1A5EEB7D54EADF44F5;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Threading.Tasks.Task`1<System.UInt32>
struct Task_1_t9BFF20A5BC78A3DB3701691B789BBBFB88555060;
// System.Threading.Tasks.Task`1<System.VoidValueTypeParameter>
struct Task_1_tB82A632CF7C85E91A9F7491058C7BDF8F744E211;
// System.Threading.SparselyPopulatedArray`1<System.Threading.CancellationCallbackInfo>[]
struct SparselyPopulatedArray_1U5BU5D_t8E75A036E16E53CF08AAAF37EB6621DE3B26307E;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Runtime.CompilerServices.Ephemeron[]
struct EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// Windows.Foundation.AsyncActionCompletedHandler
struct AsyncActionCompletedHandler_tC851091B8156847FF3756ADAC162533166114B39;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.IO.BufferedStream
struct BufferedStream_t9D0E8599EB0482BE778F25C62AA8954A68D94BEE;
// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
// System.Threading.CancellationCallbackInfo
struct CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E;
// System.Exception
struct Exception_t;
// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757;
// Windows.Foundation.IAsyncAction
struct IAsyncAction_t22D4C50DFEEE7E0C6D935892BAEA22708722474B;
// Windows.Foundation.IAsyncInfo
struct IAsyncInfo_t06F1B6F69BB42B42818C2FB052DCCC101801540D;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// Windows.Storage.Streams.IBuffer
struct IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// Windows.Storage.Streams.IInputStream
struct IInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71;
// System.Runtime.InteropServices.IMarshal
struct IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD;
// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910;
// Windows.Storage.Streams.IOutputStream
struct IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284;
// Windows.Storage.Streams.IRandomAccessStream
struct IRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Threading.Lock
struct Lock_t529C04C831C120E5FFD6039EC3CB76F9956BCDD7;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.IO.NetFxToWinRtStreamAdapter
struct NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB;
// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
// System.Runtime.InteropServices.SafeBuffer
struct SafeBuffer_t75FD9565BE645665AB242CA8C8BB22E1A933DFCE;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.IO.StreamFlushAsyncResult
struct StreamFlushAsyncResult_t04C0AAEDCD3CB5F458A11C4E275F2577786A8103;
// System.IO.StreamOperationAsyncResult
struct StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5;
// System.IO.StreamReadAsyncResult
struct StreamReadAsyncResult_t1F47DFA1E32A8FBC434C3B74D239D2F4888DDFBF;
// System.IO.StreamWriteAsyncResult
struct StreamWriteAsyncResult_t57A8AF219966DDDB17A8D7F1F4AC8DB8D8500693;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Threading.Tasks.TaskToAsyncActionAdapter
struct TaskToAsyncActionAdapter_t91D08EB4436456401F093BFB3A40A13BE5E8D8F3;
// System.Threading.Timer
struct Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00;
// System.Threading.TimerCallback
struct TimerCallback_t7455CAFACC7054E62879920AFC84C5DA98B8C7CD;
// System.Type
struct Type_t;
// System.UnauthorizedAccessException
struct UnauthorizedAccessException_t8FC1F1DE7AA62456E9E25EFDFC658A623A626791;
// System.IO.UnmanagedMemoryStream
struct UnmanagedMemoryStream_t83B223BCEF722E04E3AB3A7F6B73416F59BE630D;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.VoidReferenceTypeParameter
struct VoidReferenceTypeParameter_tDAF59F790028947925DE9798A35700F6B8EBF63D;
// System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8;
// System.IO.WinRtToNetFxStreamAdapter
struct WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D;
// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer
struct WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9;
// System.Threading.Tasks.ExceptionDispatchHelper/<>c
struct U3CU3Ec_t474B044207AC3819954D9AE072ACC1AEACA8B5CE;
// System.IO.NetFxToWinRtStreamAdapter/InputOutputStream
struct InputOutputStream_t5862300BC55FC7221B062054B4F1A743E433D95B;
// System.IO.NetFxToWinRtStreamAdapter/InputStream
struct InputStream_t5337674C27D910998AD03237067CD14A65B18403;
// System.IO.NetFxToWinRtStreamAdapter/OutputStream
struct OutputStream_t44EF2F4DE5310B5C3D243ABF0412D78134F6E7A8;
// System.IO.NetFxToWinRtStreamAdapter/RandomAccessStream
struct RandomAccessStream_t26E619D7F88DBC344D0337DE719FB2702640730D;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t05B790464823435BFCF2DDD9EDD15BD109799D30;
// System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t6E434BA73EA5DB3511A12C0C5CF9456D30D25FC5;
// System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tB7212D23536AE37D5E6EEFABD29F7A1DCCC5BFAA;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions/WindowsRuntimeBufferUnmanagedMemoryStream
struct WindowsRuntimeBufferUnmanagedMemoryStream_t30CA79558CFD4D7E1E1AE41F7DCC9589EE2809BE;
// System.IO.WindowsRuntimeStreamExtensions/<>c
struct U3CU3Ec_t0031EA3631AC4363828C98AED7D52630379E6919;
// System.IO.WindowsRuntimeStreamExtensions/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_t37D3E76CFB42D6FC4250C48FC0277A97E9401D3C;
// System.WindowsRuntimeSystemExtensions/<>c
struct U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncActionCompletedHandler_tC851091B8156847FF3756ADAC162533166114B39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncInfoIdGenerator_t9A2B1D1850C86EBEEBDF53B62B5CD99F97D87C96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncInfoToTaskBridge_1_t3F837B3047E80D2A3A6A19CB1CA845D924B9B44D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t4102E0362C7437C556E4FEA7D535D2783F408A78_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t8FB785F8228EA6285573F7790C8F8A3CDEEA7CD2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BufferedStream_t9D0E8599EB0482BE778F25C62AA8954A68D94BEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConditionalWeakTable_2_t24BE7D16606E76A4491061A2E9F3E241D476135E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConditionalWeakTable_2_t854A212DF03C231A1FCD6A2CCD8FC269D295B27C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CreateValueCallback_t67AEB55E60D5609661C588762443963DBD29C224_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CreateValueCallback_tDDCD9D271D51B07C7E7946A50CDE83F171F5AD66_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DllNotFoundException_t8CAE636A394C482C9FCF38FB7B7929506319D534_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t6B60A4875CD5D79B29837A45D46D91F7128AA5C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_3_t336F4190B9586A5D924C832BF5F023727A04707D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_3_tAC8FE9F123579F0F0724C2106222C88580347FC8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAsyncAction_t22D4C50DFEEE7E0C6D935892BAEA22708722474B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAsyncInfo_t06F1B6F69BB42B42818C2FB052DCCC101801540D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBufferByteAccess_t5DAA0FD27148380C9E304D7589F3F7F930734E5D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProgress_1_t95EDA14BCDEA36DD399575FF88CE05C2309101B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputOutputStream_t5862300BC55FC7221B062054B4F1A743E433D95B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputStream_t5337674C27D910998AD03237067CD14A65B18403_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutputStream_t44EF2F4DE5310B5C3D243ABF0412D78134F6E7A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RandomAccessStream_t26E619D7F88DBC344D0337DE719FB2702640730D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamFlushAsyncResult_t04C0AAEDCD3CB5F458A11C4E275F2577786A8103_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamReadAsyncResult_t1F47DFA1E32A8FBC434C3B74D239D2F4888DDFBF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamWriteAsyncResult_t57A8AF219966DDDB17A8D7F1F4AC8DB8D8500693_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskToAsyncActionAdapter_t91D08EB4436456401F093BFB3A40A13BE5E8D8F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass12_0_t37D3E76CFB42D6FC4250C48FC0277A97E9401D3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass1_0_t05B790464823435BFCF2DDD9EDD15BD109799D30_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_t6E434BA73EA5DB3511A12C0C5CF9456D30D25FC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_0_tB7212D23536AE37D5E6EEFABD29F7A1DCCC5BFAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t0031EA3631AC4363828C98AED7D52630379E6919_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t474B044207AC3819954D9AE072ACC1AEACA8B5CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnauthorizedAccessException_t8FC1F1DE7AA62456E9E25EFDFC658A623A626791_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsRuntimeBufferUnmanagedMemoryStream_t30CA79558CFD4D7E1E1AE41F7DCC9589EE2809BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsRuntimeStreamExtensions_tB43F7551D4AF6F5480829903106AD0FFEDC81D9B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral075E3039D77F4010416D02768A2D30DAE372D363;
IL2CPP_EXTERN_C String_t* _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626;
IL2CPP_EXTERN_C String_t* _stringLiteral0912D38B42FE9BCC62BFD75AF83A08ADBFBA17E0;
IL2CPP_EXTERN_C String_t* _stringLiteral0E63620A6C98BA77261B0ABD0BCB5F1C9F62D8B3;
IL2CPP_EXTERN_C String_t* _stringLiteral104D147DBCB46F57262B84F93DA55697DB41041F;
IL2CPP_EXTERN_C String_t* _stringLiteral164F50649DB9AD66D8010884BCD2E7EF6D9586C3;
IL2CPP_EXTERN_C String_t* _stringLiteral1DC3E9BAB1967154F459206DFF1A44D42E192D30;
IL2CPP_EXTERN_C String_t* _stringLiteral1F15B34FDCB1544A2AB6DD55379F791BDA5A40EC;
IL2CPP_EXTERN_C String_t* _stringLiteral206124D23601B8F9E63F2CA19EEEC41CA93E9581;
IL2CPP_EXTERN_C String_t* _stringLiteral213C267FBE52C6C33B5523EDCF2F7345CC49B041;
IL2CPP_EXTERN_C String_t* _stringLiteral2ED816718FBC3E178D3367429A74D7E71535575A;
IL2CPP_EXTERN_C String_t* _stringLiteral30025877E7ECF450F2047975152F5007CA8F7082;
IL2CPP_EXTERN_C String_t* _stringLiteral30229D6B21994D5E54514122E793E9EC27F8EB67;
IL2CPP_EXTERN_C String_t* _stringLiteral31D728CD5FA12D28FCC14C579DF7875E7C174534;
IL2CPP_EXTERN_C String_t* _stringLiteral32189949CB1CA4A6EBB1A643EBE2DB69713D5407;
IL2CPP_EXTERN_C String_t* _stringLiteral429196CDBC5C83755E08CBDCD12E38AF3ECC1161;
IL2CPP_EXTERN_C String_t* _stringLiteral453A1400C5EBA45D0DD93B54ED1EC6D42377A4B5;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral4839FA0EB649348E4C333F51DDFC1E62AEDDBA34;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral528B01FB578E1644A959C494D637A7F8756C1A8C;
IL2CPP_EXTERN_C String_t* _stringLiteral52B2BD21832AF0B449CFD652E1B844BE0BC454D9;
IL2CPP_EXTERN_C String_t* _stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4;
IL2CPP_EXTERN_C String_t* _stringLiteral570A8C820BD3B01A870C767E1B234057A3ABC60F;
IL2CPP_EXTERN_C String_t* _stringLiteral597B697A0554A8988A81FC9F2B357D6027857CEA;
IL2CPP_EXTERN_C String_t* _stringLiteral5BA7A44B1DE46A65F9B23F2B378BE25B1D67FF8A;
IL2CPP_EXTERN_C String_t* _stringLiteral5D8BB5FCB34FE62BC4A2414D9447587D01FFE3DC;
IL2CPP_EXTERN_C String_t* _stringLiteral620486778739FAD6CE34F68B1C2B4BF67B0C7857;
IL2CPP_EXTERN_C String_t* _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5;
IL2CPP_EXTERN_C String_t* _stringLiteral6D4329369EF62761B3095A26E3F1C75F73BC86AD;
IL2CPP_EXTERN_C String_t* _stringLiteral6E244A75EDAD97000428673DBA8215456B776073;
IL2CPP_EXTERN_C String_t* _stringLiteral6EC63F13E8EF6446434D8DD192E33F499A18F921;
IL2CPP_EXTERN_C String_t* _stringLiteral74CC3B7E957B3E7555158404BFDECEF3E64B046B;
IL2CPP_EXTERN_C String_t* _stringLiteral77FC6A45AA037417CBD14210CD02B3B9F4A3A680;
IL2CPP_EXTERN_C String_t* _stringLiteral81B3831FCAA702A03FE2F7FCE058D367DE8559B0;
IL2CPP_EXTERN_C String_t* _stringLiteral832C4F81E24CCBFF4E7EB3B607EF3F2014F042CD;
IL2CPP_EXTERN_C String_t* _stringLiteral86026AF0E517D49DA08ECB5085428B0DD45FB264;
IL2CPP_EXTERN_C String_t* _stringLiteral873B6C8A4B1BCC0DE87008C0BEE9C272FF746BEE;
IL2CPP_EXTERN_C String_t* _stringLiteral87E93D65632F2787675566D82B8FBFD0856FEAB0;
IL2CPP_EXTERN_C String_t* _stringLiteral885F28AD0F275CAABA9BEB917A5AE6307D96F9C1;
IL2CPP_EXTERN_C String_t* _stringLiteral8A415D789D919AD88B5D9DEA8D8716351276D26B;
IL2CPP_EXTERN_C String_t* _stringLiteral8C3A3A1EF78E97D30D83A241EC63AF8261967F3A;
IL2CPP_EXTERN_C String_t* _stringLiteral8CAE028FE0FF584518029338B63A30B7FFB4132A;
IL2CPP_EXTERN_C String_t* _stringLiteral8D02CF110EAE277BF80B0ABB2DDF1E5C34A5EAA5;
IL2CPP_EXTERN_C String_t* _stringLiteral9051F83C0785BDA27338FED014D0A4D698A2598A;
IL2CPP_EXTERN_C String_t* _stringLiteral90FE78598A19B3BDD30AE2B14F02A7C553E63A7C;
IL2CPP_EXTERN_C String_t* _stringLiteral92196344FD1BC529F2C783D1184779BAB239C616;
IL2CPP_EXTERN_C String_t* _stringLiteral97A6DE11F0A437842D0A2AE6CCB91D8BA5E81213;
IL2CPP_EXTERN_C String_t* _stringLiteral97B5D9A9C1E93F6D1C82708532506E0F66173640;
IL2CPP_EXTERN_C String_t* _stringLiteral98997B148C010D1AA3341A7CE29C43B075E5D416;
IL2CPP_EXTERN_C String_t* _stringLiteral9984D214B8859DAF6BBE42889F849EDDB7C7CC84;
IL2CPP_EXTERN_C String_t* _stringLiteralA1A89E50A90934499ED855F3DDECC1AF3F1A2B88;
IL2CPP_EXTERN_C String_t* _stringLiteralA3E15F3966AD512F9574C14581C3AC30B635D1C1;
IL2CPP_EXTERN_C String_t* _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469;
IL2CPP_EXTERN_C String_t* _stringLiteralA47F6922CBC47935F33073D4990D85481289C7B2;
IL2CPP_EXTERN_C String_t* _stringLiteralAE5B93CA94D95A3EFBF2D90DB76C2A6B2204A89C;
IL2CPP_EXTERN_C String_t* _stringLiteralB05CC11CA67D7FCD20736A7DBD8C65EEA11AA548;
IL2CPP_EXTERN_C String_t* _stringLiteralB4792D73601AFAC8241C44E882B3149512DDA812;
IL2CPP_EXTERN_C String_t* _stringLiteralB5FAF5AE74B9C40ED31265C48562D4856880CFC9;
IL2CPP_EXTERN_C String_t* _stringLiteralBDD1D563FA17E9B82D37BD73BEA7DE8AF3BFF909;
IL2CPP_EXTERN_C String_t* _stringLiteralBF16CB6EAF2A1F143A075008C091BEF301FE5C4F;
IL2CPP_EXTERN_C String_t* _stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10;
IL2CPP_EXTERN_C String_t* _stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7;
IL2CPP_EXTERN_C String_t* _stringLiteralC572FE41E8E4C5A824E966055EB754531EA8F74F;
IL2CPP_EXTERN_C String_t* _stringLiteralC8FE4FB2F0C7351CCB064A9D9BD65C0FC83D4E12;
IL2CPP_EXTERN_C String_t* _stringLiteralCC6CCF4B282C357742ED68E704F568ED2482BF22;
IL2CPP_EXTERN_C String_t* _stringLiteralCEC49CE5B8EEBB0AE649A7794608079E6C355F17;
IL2CPP_EXTERN_C String_t* _stringLiteralCF7DF948FC4905FED1A56776B9DFCCB86C46912A;
IL2CPP_EXTERN_C String_t* _stringLiteralCFAC928B9632979CA328C6C33549FD409AEF4B74;
IL2CPP_EXTERN_C String_t* _stringLiteralD170D006841B596DCF7410F1FDBFBB378C531F14;
IL2CPP_EXTERN_C String_t* _stringLiteralD80E33EE75795F0CD6F15429F6C597A90B5E2DA6;
IL2CPP_EXTERN_C String_t* _stringLiteralD89ADD2DB1FBF30630EEA02FAAF144060CA0E908;
IL2CPP_EXTERN_C String_t* _stringLiteralDE88FB7F7A400DD8C3FDB11F48D50F6D76160556;
IL2CPP_EXTERN_C String_t* _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB;
IL2CPP_EXTERN_C String_t* _stringLiteralF48A59EF6A2D1A2B5003A4E8EC274199F2C46032;
IL2CPP_EXTERN_C String_t* _stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914;
IL2CPP_EXTERN_C String_t* _stringLiteralFAAA1D4C74B19E4EA70FF43057879BAF549456EC;
IL2CPP_EXTERN_C String_t* _stringLiteralFAC57901EC8544C5A7E2C0595D8334FEDA1ED6AE;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncInfoToTaskBridge_1_CompleteFromAsyncAction_m6FFC52A7DAC6B0B54212A18D43BE2878D6F4448A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncInfoToTaskBridge_1_RegisterForCancellation_mE11505DDE53B9CB26612D9B0926828E0CE9D4F8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncInfoToTaskBridge_1__ctor_m8FABCFD55BE870775D720E8E32FAF1C75EE30E17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncInfo_CreateCompletedOperation_TisIBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD7FE1D70D2387EE8A6B5121D1C7F09FD38E45EAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncInfo_CreateFaultedOperation_TisIBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m50310AB23A3C1EFA6CE88FC31766E6357F63F149_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncInfo_Run_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF3F4B81C8AC925547AE45FFF5A42D5D96DFC0D25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncInfo_Run_TisIBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m09FBD96A7A9CACA30EB79F6D9AA33E95E9A6F552_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncInfo_Run_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mA43421DA084D5E390EBDED0FE707689FF161AEE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t59FDFE1F6491ED41D3F1F28C14509DFEAC2D0C60_TisU3CReadAsyncInternalU3Ed__43_t30E8CDC69A0B1E1AE4981CFFD05F1CF764DD6968_m9875CEDF56A98DCB760FB86FDEBBE83BD450CD3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_tCAE4779681542A3A44DA232D516892B2CFB4DC34_mC604299296C2DBE4678EA7BF22562AC6BA10526A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t03D234E0E36C92DA9A5CA3811A6B2E30D9639AF2_m32DB4E2BD524F293AC0379E6D347EC091FF8A90E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t15BC749CED41367E2893FD2B368726119BD8EDA2_m0F8066B387E3646E4696CFD624C11C2041D7C4A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80_TisU3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tB607A35AD145FE4406070D15E921A3F6FA68C63C_m87835D25F1C7F9EE719DF091E01916FD343A8957_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m0E49F68E6F39F0BD87C360F456EBC20310B732BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m87F9D91A42876EB5F19F155C2BF170FA6DD06B57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_mA528202B7118D53568DC446DD648245DCD3D81CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_mA86694527610A40A01A943B16F0ECDDD8F00982D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m62045F0DC88FCFFAE8B54C1A9C36373187D21A13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m9EAE10842FB26165FAD37D29E1810C3A612AA4AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mB7C693CAA9243017E03D801A487E0EA9B6AAD575_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m5041801AE00206CAADE10C105F2F580E0CAC659F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m76EFCFDD50DEC8282C1EE86AA3722EE407C16C9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mC4BAC830514CDB105730FF11F7744A4424A4009B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m4F4BB17D6A5F9922EBDAE1ECEF9DBE6945E70DA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_mE240BA4A6F123BC93D5804E5D453D7EE55FE9EBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_mFA173982D2C309A46F4285F60DC4FE0DC659F32C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CReadAsyncInternalU3Ed__43_t30E8CDC69A0B1E1AE4981CFFD05F1CF764DD6968_m13E673E00BEFF7E47A59726BACC49256CB40AB26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_tCAE4779681542A3A44DA232D516892B2CFB4DC34_m1797CF010076782E1F6756123A031313EF8D6611_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tB607A35AD145FE4406070D15E921A3F6FA68C63C_mD6D8B6F50709BBA2608087AB2D7177FE7AF0E2BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t03D234E0E36C92DA9A5CA3811A6B2E30D9639AF2_mB199C3DEC061F88605F35CAFD88E6C1295B3025C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t15BC749CED41367E2893FD2B368726119BD8EDA2_m48B0345C032F514709701DDCD0FD52267D6F6450_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m2DCDBC59910811D107353C5752AD58B28C2D97FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_mDE9568F3E8450FB3A4019BCDF81FF2F82C7942B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_mE69A021EF16494D0E3684C697F4948865EF7BEDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_GetValue_m9565B962066EB9A23F8AB92AF2550E7AA46BB4C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_GetValue_mC1F65C9D190A7B9A2554784DDC71B7454957C35E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_TryGetValue_m5A667E9026FFDE0FF1E2EE79A5CFA7A1CFF8BED1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_TryGetValue_mAAA7661CB097AF2549135730576D4727F4E99773_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2__ctor_m768EC987180F75B2C7E25ECB757C2F37C5447A44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2__ctor_m8C1B4AF4E7D62A741442A4502DE8E8CF8E4467A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaitable_1_GetAwaiter_m7A77B1981FEC19CC7E1570EDC3F16AC5C14B4439_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaitable_1_GetAwaiter_m914DC775D703ABDC3AA070FDEC45F4777DF21040_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_GetResult_mD346529D92FA68BABCE8F83FFA3B7066E4A2755D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_GetResult_mF1FF6CBD66A3F581D413793BA8C2AF58B707D9CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_get_IsCompleted_mD70263ED42C8E379EE20DBC2F218C3E629B4B4D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConfiguredTaskAwaiter_get_IsCompleted_mF6F9BD383D1A869D82F90ED1B9C489D4C4E3689A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetFxToWinRtStreamAdapter_Create_mA1D7422D99BF8432BCBBDE154570AD8FB0C2A25B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetFxToWinRtStreamAdapter_EnsureNotDisposed_mF96B332E0313DBAECC34BD8C4623646D66C1E122_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetFxToWinRtStreamAdapter_ReadAsync_m231492E456CD2D904B058DF51869D9963F2F5B14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetFxToWinRtStreamAdapter_Seek_m9AC81223CCC143CF53DAEF7CA809E8C45526E52C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetFxToWinRtStreamAdapter_ThrowCloningNotSupported_m7E8B9378F6721B003F1357E2B992EC6F1AF4117F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetFxToWinRtStreamAdapter_WriteAsync_m422DE3E5805307499CFE818FFA9C18E6EFEEE7A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetFxToWinRtStreamAdapter_set_Size_m0D858B7B2DEE0B0116A14E473201B44AB92FDD80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StreamOperationAsyncResult_ProcessCompletedOperation_InvalidOperationThrowHelper_m43EFC5D374210D84BCBC38FDB13A3E3774ECEE88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StreamOperationAsyncResult_ProcessCompletedOperation_m40E4883B3BAF7C60094786695F9E4A154DE3C055_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StreamOperationAsyncResult_StreamOperationCompletedCallback_m681CE9DF8053BDB244E7293C353AF24845592AC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StreamOperationAsyncResult__ctor_mEB14441257810BF82A855A8FA545D99A14659A05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StreamReadAsyncResult__ctor_m176A96FFBB03EE86C985427F09FC017FA049B393_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_m9B716A966057DE59BCF359AED609AEDA36EBECBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_GetResultsInternal_m6F1928D5886F367904697C268A4E4AC9CA33EA6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_CancelTokenSource_m81CD9E731A092B7BF96E7A62B0F442EC8999ED16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_CompletedSynchronously_m91F86C3DFD94FF545C2ABFF103F41FA07C0F53F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToAsyncInfoAdapter_4_get_Task_mB35A83F4B62D6A9F1A10D59BC2869EF7C8E535E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ConfigureAwait_m16D57A2BDD33A3BD596FDCDE674D2E8996BC3CEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ConfigureAwait_m8203F4D13209C12845066A383E5B850D0486B209_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CAsWindowsRuntimeStreamInternalFactoryHelperU3Eb__18_0_mCADD9B776F0AC6D3DB507A3B3F1B09315E6ECBAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_0_mD977D076DE0943CCA179A1479BE87E7DD9DD5FFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_1_mF86A2FC994E549444C290DF7259F9D64C6CFD209_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CThrowAsyncU3Eb__0_0_mD18D5AC7CDE989D1C83792DAADAF72653DF5563B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CThrowAsyncU3Eb__0_1_m50457F8A46DF5F5E732C8BD5CB1BB69F4D4F9207_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CWinRtToNetFxAdapterMap_GetValueU3Eb__11_0_m842AEF029659468D656C0D559BAFE82B4A078BBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass12_0_U3CWinRtToNetFxAdapterMap_GetValueU3Eb__0_m9D50328DD626D2F7554F3701931717AE37321CF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_0_U3CReadAsync_AbstractStreamU3Eb__0_m63E60969CED7742406E61479AE3DF40BFAF608E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3CWriteAsync_AbstractStreamU3Eb__0_m438D77197990487CB3E4E36A01FA839D55E7EEAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3CWriteAsync_AbstractStreamU3Eb__1_m60D749A2ECFFEEDB96BC6189C4B763783C24BC8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3CFlushAsync_AbstractStreamU3Eb__0_mF032EF2649DF33BC23715C19B970AB0575E57942_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinRtToNetFxStreamAdapter_BeginRead_mD7465C8237229E7B25054F6B13CF042119CC584B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinRtToNetFxStreamAdapter_BeginWrite_m1FDE8E7AF654937E142825D525D95CE85A4172B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinRtToNetFxStreamAdapter_Create_mB55C9B6428631D630A28BC687A4412251686E77A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinRtToNetFxStreamAdapter_EndRead_m7E53107FEBFAE6C1C49EE5F82D62A53AAC8308B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinRtToNetFxStreamAdapter_EndWrite_mC310A537B9DB152B26BA445F57AECEAE5A11E44B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinRtToNetFxStreamAdapter_EnsureCanRead_m8CAD7A89069DF1522511D86F3F99D865936B7909_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinRtToNetFxStreamAdapter_EnsureCanWrite_m2622BF473755E46C831CB010D4961F7BBD6DAAFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71_m9C3503831C27EAF79D7E14C9F404094C101B2CF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284_m717FCA40D60416774137E427B0386318EFF9E186_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D_m0204EE882DA19B82E531C1D3909A6D52BF4E7D62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinRtToNetFxStreamAdapter_EnsureNotDisposed_m2380D3C575831B4E4571ED577B331B123B7FCC59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinRtToNetFxStreamAdapter_GetWindowsRuntimeStream_TisRuntimeObject_mD5C79C84E5B20F3841E83C7AF833EDEBF1A9B2BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinRtToNetFxStreamAdapter_ReadAsync_mF566E2C859FF309392DF56F98B34F854A4C15471_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinRtToNetFxStreamAdapter_Seek_mA01B99FF1DFB8EC1EC2C072F579217B12C9009CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinRtToNetFxStreamAdapter_SetLength_m8A4EA850EAC861F8C4CF1DB4E4C99D5174234634_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinRtToNetFxStreamAdapter_WriteAsync_mD51FF953F06E046D23A61479F2FE6E49229BD8D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinRtToNetFxStreamAdapter_get_Length_mFD3523B73508203BA1A0A18F7F983511CB77A8FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinRtToNetFxStreamAdapter_get_Position_mA988A62345ADBF17EC13DF95D5DBB3278CA2D36B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WinRtToNetFxStreamAdapter_set_Position_m02F6431C966D0FDD8F9969B717A0360B8ABC1937_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeBufferExtensions_AsBuffer_mDF46860EDFDC37E0F4052AF67A11A6FBC4150890_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeBufferExtensions_AsStream_mF1266A683784D7F888A72D5E7E3A0A6E3CDC9F1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeBufferExtensions_CopyTo_mBA9D132D89ECE053390B9679C59EC679A238D5F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeBufferExtensions_CopyTo_mDC3857DDA9BB0055E8D3DA4FCB570220BC5B698E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeBufferExtensions_GetWindowsRuntimeBuffer_m4B7F32994ECCB0CD5BA38E9B77260B949478A850_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeBufferExtensions_IsSameData_m245201A2EA5EA798640445380269F19C234DA784_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeBufferExtensions_TryGetUnderlyingData_m81061F2A3D08AECCF3DAB66F6F00BDD143F2DD57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeBuffer_Create_m3483BEBC639FBC349AA9E45718AC11D2BF2E83B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeBuffer_EnsureHasMarshalProxy_m4A245D3DA9E93B1475B8AE163D14B948005AF275_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_put_Length_m78A2576CA21D9AA2884A336BFD86C4D30E653611_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeBuffer__ctor_m4AFA5F9564839D60895E35E00FBBD997399C8528_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeBuffer__ctor_mE5DB313A9BAD6A0EFC98994A94B71AB976A6741A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeStreamExtensions_AsInputStream_mE4944CCCA4BDB0DAC42B18BBC8624258805D1A65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeStreamExtensions_AsOutputStream_m9352D8DF823B254F2B6DBAA7ECF049B37AB9A6D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeStreamExtensions_AsStreamInternal_m7B11D44B9E825CE63B6415B9F5877E066E51045B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeStreamExtensions_AsWindowsRuntimeStreamInternal_m975E800073D3F332AF2C1DDD170BC8337490C14B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeStreamExtensions_EnsureAdapterBufferSize_m45873229B6C84BCCE713F0E252775273849092D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeSystemExtensions_AsTask_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAFEA206F914571AA59814865AAAE5729B5572B5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeSystemExtensions_AsTask_TisIBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mEDAB9858D96E4B4787ADDA22E002B28DA627CD9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeSystemExtensions_AsTask_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m06B407572D6562F6F155E1B0A322B1AE1B5E7D0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeSystemExtensions_AsTask_mF9FE6AC518F897C24E4019925AE17ACD9247BF71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Exception_t_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Guid_t;
struct IAsyncActionCompletedHandler_tC851091B8156847FF3756ADAC162533166114B39_ComCallableWrapper;
struct IAsyncAction_t22D4C50DFEEE7E0C6D935892BAEA22708722474B;
struct IAsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52_ComCallableWrapper;
struct IAsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_ComCallableWrapper;
struct IAsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_ComCallableWrapper;
struct IAsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_ComCallableWrapper;
struct IAsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_ComCallableWrapper;
struct IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8;
struct IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C;
struct IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9;
struct IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127;
struct IInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71;
struct IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284;
struct IRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct NOVTABLE IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Progress_m78372DBE4F177F35DC3DF46F37BBEB79AF797324(IAsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_ComCallableWrapper* ___0_handler) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Progress_m78D1DF310E63719722F86C83A512DCF35728D4F2(IAsyncOperationProgressHandler_2_tD92A69B3127162C041BDC25B2F49774B92DD050C_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Completed_m71DB6DDEDCC8DB4230CCAF913BA6ECAAA9ABF6D4(IAsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_ComCallableWrapper* ___0_handler) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Completed_mBCA3BB43C118936A44B20F8A8F83F1CAB59E7DB4(IAsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_GetResults_mD7DFCC1D0421F836CB3B4499AAEB89D5DAA229F5(IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127** comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>
struct NOVTABLE IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Progress_m9F67F4B3AA2396D2CDE6EE93B3D3B1B1F2D99685(IAsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_ComCallableWrapper* ___0_handler) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Progress_mA7040C532ABD06DCBC2B397B09EB32EC4A9AF5EB(IAsyncOperationProgressHandler_2_tDE823C146D616560069B36F5313F30D5C35116AE_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Completed_m79A0FBC05E913306F00FE582D6AEF52CB4F6F0D6(IAsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_ComCallableWrapper* ___0_handler) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Completed_m9D9F6AE5C27EC4CEB0A3CC17C83048A39994C5F0(IAsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_GetResults_m259594E576D8DE8D92DBA9A4EC9321BFA9006BCD(uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperation`1<System.Boolean>
struct NOVTABLE IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m040A37BF97ECAB4FD4C51481285B1BA9F4DAD352(IAsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52_ComCallableWrapper* ___0_handler) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_mF5D7D584EB42725EB00B767AB45D3C01D86179E6(IAsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m8DC9B66CF8C9CACC2DB3433EE8B997F9C73BF2BF(bool* comReturnValue) = 0;
};

// <Module>
struct U3CModuleU3E_t894B2B5A3362895139D0DBC8AC91F6CF31FBD3BA 
{
};
// System.Runtime.InteropServices.IAgileObject
struct NOVTABLE IAgileObject_t9A5FB61122CF23D29526EB1324D5EA655374D48B : Il2CppIUnknown
{
	static const Il2CppGuid IID;
};
// Windows.Foundation.IAsyncAction
struct NOVTABLE IAsyncAction_t22D4C50DFEEE7E0C6D935892BAEA22708722474B : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncAction_put_Completed_m0E81E3334963F4FCCEA16CF79F1BB12229F2476E(IAsyncActionCompletedHandler_tC851091B8156847FF3756ADAC162533166114B39_ComCallableWrapper* ___0_handler) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncAction_get_Completed_m5827DB95142ABF764B16B370D2E7D4F757522830(IAsyncActionCompletedHandler_tC851091B8156847FF3756ADAC162533166114B39_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncAction_GetResults_mB7401D9975EB9B981781DEFDC4FDF586F4DFCC8E() = 0;
};
// Windows.Foundation.IAsyncInfo
struct NOVTABLE IAsyncInfo_t06F1B6F69BB42B42818C2FB052DCCC101801540D : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_Id_m4F3F3BA173A376976E527252D3CE5EEDF2231931(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_Status_m92A4A761AEF5B205028083C5DB8D42D3130122D9(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_ErrorCode_m41A40F6B559BA6F942CEBB107DFAABA33D065595(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_Cancel_mBF9B24A7C8F503AFC59278143056C87F8A1EE8B6() = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_Close_mA60AE4CB25AC58A37E11E8304C023D38B640B85F() = 0;
};
// Windows.Storage.Streams.IBuffer
struct NOVTABLE IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBuffer_get_Capacity_mCDCAF874CA48FAD12C3C50CC2F76FD425D82C060(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBuffer_get_Length_mFDEBAF5BE18872689664196233CDE3187ADD562B(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBuffer_put_Length_m027C5E15C55C227EC7C2C18B4A4B63AAE8B8FC43(uint32_t ___0_value) = 0;
};
// Windows.Storage.Streams.IInputStream
struct NOVTABLE IInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IInputStream_ReadAsync_mCC47181BBC2E58BA8D4D8B71799B1C20920DCC97(IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127* ___0_buffer, uint32_t ___1_count, uint32_t ___2_options, IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8** comReturnValue) = 0;
};
// Windows.Storage.Streams.IOutputStream
struct NOVTABLE IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IOutputStream_WriteAsync_m52316062762E0FEC0546BEED439285E021000FE5(IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127* ___0_buffer, IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IOutputStream_FlushAsync_m796374D3CCD59F3811EEA00FC9D9F4D9BD6379E6(IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9** comReturnValue) = 0;
};
// Windows.Storage.Streams.IRandomAccessStream
struct NOVTABLE IRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_Size_m29F4D8681FB7E60088E7A665F319EADAF14696BA(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_put_Size_mF541E936AB539C97B96018952B00DAF943C8E658(uint64_t ___0_value) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_GetInputStreamAt_m5B59AEE63C2736D9CCBB8A4987C5316A34CD343F(uint64_t ___0_position, IInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_GetOutputStreamAt_mE15EFF78D7AB63C66957863FE3D54FA33D66CCB8(uint64_t ___0_position, IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_Position_m3BBAFE5846C2C4581E7E509DC125E3AB508D591A(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_Seek_m1DDCF62775B861D7FDD3EF761EE05251C13FA512(uint64_t ___0_position) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_CloneStream_mFD31B358478E07E6281E4D329FAC8B6DABE36191(IRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_CanRead_m599EC4BE14290138A7DCE9D82AF647993B4049E1(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_CanWrite_m76930DBC1CC5718B50A9CCFFBB604AF6137C223B(bool* comReturnValue) = 0;
};

// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.IO.Stream>
struct ConditionalWeakTable_2_t854A212DF03C231A1FCD6A2CCD8FC269D295B27C  : public RuntimeObject
{
	// System.Runtime.CompilerServices.Ephemeron[] System.Runtime.CompilerServices.ConditionalWeakTable`2::data
	EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* ___data_4;
	// System.Object System.Runtime.CompilerServices.ConditionalWeakTable`2::_lock
	RuntimeObject* ____lock_5;
	// System.Int32 System.Runtime.CompilerServices.ConditionalWeakTable`2::size
	int32_t ___size_6;
};

// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.IO.Stream,System.IO.NetFxToWinRtStreamAdapter>
struct ConditionalWeakTable_2_t24BE7D16606E76A4491061A2E9F3E241D476135E  : public RuntimeObject
{
	// System.Runtime.CompilerServices.Ephemeron[] System.Runtime.CompilerServices.ConditionalWeakTable`2::data
	EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* ___data_4;
	// System.Object System.Runtime.CompilerServices.ConditionalWeakTable`2::_lock
	RuntimeObject* ____lock_5;
	// System.Int32 System.Runtime.CompilerServices.ConditionalWeakTable`2::size
	int32_t ___size_6;
};

// System.Threading.Tasks.TaskCompletionSource`1<System.VoidValueTypeParameter>
struct TaskCompletionSource_1_t2EED03A6AEF435DC304FDCC21ACC7EF6EBED79E7  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_tB82A632CF7C85E91A9F7491058C7BDF8F744E211* ____task_0;
};

// System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncActionCompletedHandler,System.VoidReferenceTypeParameter,System.VoidValueTypeParameter,System.VoidValueTypeParameter>
struct TaskToAsyncInfoAdapter_4_t253617E9AD8E16A1018418DBCA9ECB3B1595EED9  : public RuntimeObject
{
	// System.Threading.CancellationTokenSource System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_cancelTokenSource
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____cancelTokenSource_0;
	// System.UInt32 System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_id
	uint32_t ____id_1;
	// System.Exception System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_error
	Exception_t* ____error_2;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_state
	int32_t ____state_3;
	// System.Object System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_dataContainer
	RuntimeObject* ____dataContainer_4;
	// TCompletedHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_completedHandler
	AsyncActionCompletedHandler_tC851091B8156847FF3756ADAC162533166114B39* ____completedHandler_5;
	// TProgressHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_progressHandler
	VoidReferenceTypeParameter_tDAF59F790028947925DE9798A35700F6B8EBF63D* ____progressHandler_6;
	// System.Threading.SynchronizationContext System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_startingContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ____startingContext_7;
};

// System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.VoidValueTypeParameter,System.VoidValueTypeParameter>
struct TaskToAsyncInfoAdapter_4_tD4A410D665454F797F89C76CF816D5A006A43620  : public RuntimeObject
{
	// System.Threading.CancellationTokenSource System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_cancelTokenSource
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____cancelTokenSource_0;
	// System.UInt32 System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_id
	uint32_t ____id_1;
	// System.Exception System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_error
	Exception_t* ____error_2;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_state
	int32_t ____state_3;
	// System.Object System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_dataContainer
	RuntimeObject* ____dataContainer_4;
	// TCompletedHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_completedHandler
	RuntimeObject* ____completedHandler_5;
	// TProgressHandler System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_progressHandler
	RuntimeObject* ____progressHandler_6;
	// System.Threading.SynchronizationContext System.Threading.Tasks.TaskToAsyncInfoAdapter`4::_startingContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ____startingContext_7;
};

// System.Runtime.InteropServices.WindowsRuntime.AsyncInfo
struct AsyncInfo_tAB5BB353BB3A2EC435925F96044439E284F56404  : public RuntimeObject
{
};

// System.Threading.Tasks.AsyncInfoIdGenerator
struct AsyncInfoIdGenerator_t9A2B1D1850C86EBEEBDF53B62B5CD99F97D87C96  : public RuntimeObject
{
};

// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B  : public RuntimeObject
{
	// System.Threading.ManualResetEvent modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_kernelEvent
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ____kernelEvent_3;
	// System.Threading.SparselyPopulatedArray`1<System.Threading.CancellationCallbackInfo>[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_registeredCallbacksLists
	SparselyPopulatedArray_1U5BU5D_t8E75A036E16E53CF08AAAF37EB6621DE3B26307E* ____registeredCallbacksLists_4;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_state
	int32_t ____state_9;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_threadIDExecutingCallbacks
	int32_t ____threadIDExecutingCallbacks_10;
	// System.Boolean System.Threading.CancellationTokenSource::_disposed
	bool ____disposed_11;
	// System.Threading.CancellationCallbackInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_executingCallback
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ____executingCallback_12;
	// System.Threading.Timer modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_timer
	Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00* ____timer_13;
};

// System.Threading.Tasks.ExceptionDispatchHelper
struct ExceptionDispatchHelper_tDC3C728879D475F710BCD47F74BD07B119EF7522  : public RuntimeObject
{
};

// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757  : public RuntimeObject
{
	// System.Exception System.Runtime.ExceptionServices.ExceptionDispatchInfo::m_Exception
	Exception_t* ___m_Exception_0;
	// System.Object System.Runtime.ExceptionServices.ExceptionDispatchInfo::m_stackTrace
	RuntimeObject* ___m_stackTrace_1;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.IO.NetFxToWinRtStreamAdapter
struct NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737  : public RuntimeObject
{
	// System.IO.Stream System.IO.NetFxToWinRtStreamAdapter::_managedStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____managedStream_0;
	// System.Boolean System.IO.NetFxToWinRtStreamAdapter::_leaveUnderlyingStreamOpen
	bool ____leaveUnderlyingStreamOpen_1;
	// System.IO.NetFxToWinRtStreamAdapter/StreamReadOperationOptimization System.IO.NetFxToWinRtStreamAdapter::_readOptimization
	int32_t ____readOptimization_2;
};

// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472  : public RuntimeObject
{
	// System.Int32[] System.Globalization.NumberFormatInfo::numberGroupSizes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___numberGroupSizes_1;
	// System.Int32[] System.Globalization.NumberFormatInfo::currencyGroupSizes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___currencyGroupSizes_2;
	// System.Int32[] System.Globalization.NumberFormatInfo::percentGroupSizes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___percentGroupSizes_3;
	// System.String System.Globalization.NumberFormatInfo::positiveSign
	String_t* ___positiveSign_4;
	// System.String System.Globalization.NumberFormatInfo::negativeSign
	String_t* ___negativeSign_5;
	// System.String System.Globalization.NumberFormatInfo::numberDecimalSeparator
	String_t* ___numberDecimalSeparator_6;
	// System.String System.Globalization.NumberFormatInfo::numberGroupSeparator
	String_t* ___numberGroupSeparator_7;
	// System.String System.Globalization.NumberFormatInfo::currencyGroupSeparator
	String_t* ___currencyGroupSeparator_8;
	// System.String System.Globalization.NumberFormatInfo::currencyDecimalSeparator
	String_t* ___currencyDecimalSeparator_9;
	// System.String System.Globalization.NumberFormatInfo::currencySymbol
	String_t* ___currencySymbol_10;
	// System.String System.Globalization.NumberFormatInfo::ansiCurrencySymbol
	String_t* ___ansiCurrencySymbol_11;
	// System.String System.Globalization.NumberFormatInfo::nanSymbol
	String_t* ___nanSymbol_12;
	// System.String System.Globalization.NumberFormatInfo::positiveInfinitySymbol
	String_t* ___positiveInfinitySymbol_13;
	// System.String System.Globalization.NumberFormatInfo::negativeInfinitySymbol
	String_t* ___negativeInfinitySymbol_14;
	// System.String System.Globalization.NumberFormatInfo::percentDecimalSeparator
	String_t* ___percentDecimalSeparator_15;
	// System.String System.Globalization.NumberFormatInfo::percentGroupSeparator
	String_t* ___percentGroupSeparator_16;
	// System.String System.Globalization.NumberFormatInfo::percentSymbol
	String_t* ___percentSymbol_17;
	// System.String System.Globalization.NumberFormatInfo::perMilleSymbol
	String_t* ___perMilleSymbol_18;
	// System.String[] System.Globalization.NumberFormatInfo::nativeDigits
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___nativeDigits_19;
	// System.Int32 System.Globalization.NumberFormatInfo::m_dataItem
	int32_t ___m_dataItem_20;
	// System.Int32 System.Globalization.NumberFormatInfo::numberDecimalDigits
	int32_t ___numberDecimalDigits_21;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyDecimalDigits
	int32_t ___currencyDecimalDigits_22;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyPositivePattern
	int32_t ___currencyPositivePattern_23;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyNegativePattern
	int32_t ___currencyNegativePattern_24;
	// System.Int32 System.Globalization.NumberFormatInfo::numberNegativePattern
	int32_t ___numberNegativePattern_25;
	// System.Int32 System.Globalization.NumberFormatInfo::percentPositivePattern
	int32_t ___percentPositivePattern_26;
	// System.Int32 System.Globalization.NumberFormatInfo::percentNegativePattern
	int32_t ___percentNegativePattern_27;
	// System.Int32 System.Globalization.NumberFormatInfo::percentDecimalDigits
	int32_t ___percentDecimalDigits_28;
	// System.Int32 System.Globalization.NumberFormatInfo::digitSubstitution
	int32_t ___digitSubstitution_29;
	// System.Boolean System.Globalization.NumberFormatInfo::isReadOnly
	bool ___isReadOnly_30;
	// System.Boolean System.Globalization.NumberFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_31;
	// System.Boolean System.Globalization.NumberFormatInfo::m_isInvariant
	bool ___m_isInvariant_32;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsNumber
	bool ___validForParseAsNumber_33;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsCurrency
	bool ___validForParseAsCurrency_34;
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	// System.Int32 System.Random::_inext
	int32_t ____inext_0;
	// System.Int32 System.Random::_inextp
	int32_t ____inextp_1;
	// System.Int32[] System.Random::_seedArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray_2;
};

// System.IO.StreamOperationAsyncResult
struct StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5  : public RuntimeObject
{
	// System.AsyncCallback System.IO.StreamOperationAsyncResult::_userCompletionCallback
	AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ____userCompletionCallback_0;
	// System.Object System.IO.StreamOperationAsyncResult::_userAsyncStateInfo
	RuntimeObject* ____userAsyncStateInfo_1;
	// Windows.Foundation.IAsyncInfo System.IO.StreamOperationAsyncResult::_asyncStreamOperation
	RuntimeObject* ____asyncStreamOperation_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamOperationAsyncResult::_completed
	bool ____completed_3;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamOperationAsyncResult::_callbackInvoked
	bool ____callbackInvoked_4;
	// System.Threading.ManualResetEvent modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamOperationAsyncResult::_waitHandle
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ____waitHandle_5;
	// System.Int64 System.IO.StreamOperationAsyncResult::_bytesCompleted
	int64_t ____bytesCompleted_6;
	// System.Runtime.ExceptionServices.ExceptionDispatchInfo System.IO.StreamOperationAsyncResult::_errorInfo
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____errorInfo_7;
	// System.Boolean System.IO.StreamOperationAsyncResult::_processCompletedOperationInCallback
	bool ____processCompletedOperationInCallback_8;
	// Windows.Foundation.IAsyncInfo System.IO.StreamOperationAsyncResult::_completedOperation
	RuntimeObject* ____completedOperation_9;
};

// System.IO.StreamOperationsImplementation
struct StreamOperationsImplementation_tFDF6366BE6C27BE5A6001AB0A93D5C487A07798F  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0  : public RuntimeObject
{
	// System.Threading.SynchronizationContextProperties System.Threading.SynchronizationContext::_props
	int32_t ____props_0;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_23;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_26;
};

// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.TaskScheduler::m_taskSchedulerId
	int32_t ___m_taskSchedulerId_3;
};

// Windows.Foundation.TokenizerHelper
struct TokenizerHelper_t1A1FDF4DB0F4C8B0A4727721AFD64637A876433B  : public RuntimeObject
{
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

// System.VoidReferenceTypeParameter
struct VoidReferenceTypeParameter_tDAF59F790028947925DE9798A35700F6B8EBF63D  : public RuntimeObject
{
};

// System.IO.WinRtIOHelper
struct WinRtIOHelper_t330E1365D56609F5E4994769DFBF26730B331F49  : public RuntimeObject
{
};

// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions
struct WindowsRuntimeBufferExtensions_t78395D60B6AF8C2363502142AD0B763E5A78D3DB  : public RuntimeObject
{
};

// System.IO.WindowsRuntimeStreamExtensions
struct WindowsRuntimeStreamExtensions_tB43F7551D4AF6F5480829903106AD0FFEDC81D9B  : public RuntimeObject
{
};

// System.WindowsRuntimeSystemExtensions
struct WindowsRuntimeSystemExtensions_tEDF4DAA53DC87A4A33D83BFDDDB6C404612648A6  : public RuntimeObject
{
};

// System.Threading.Tasks.ExceptionDispatchHelper/<>c
struct U3CU3Ec_t474B044207AC3819954D9AE072ACC1AEACA8B5CE  : public RuntimeObject
{
};

// System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t05B790464823435BFCF2DDD9EDD15BD109799D30  : public RuntimeObject
{
	// Windows.Storage.Streams.IBuffer System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0::dataBuffer
	RuntimeObject* ___dataBuffer_0;
	// System.IO.Stream System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0::stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream_1;
	// System.Int32 System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0::bytesRequested
	int32_t ___bytesRequested_2;
	// Windows.Storage.Streams.InputStreamOptions System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0::options
	uint32_t ___options_3;
};

// System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t6E434BA73EA5DB3511A12C0C5CF9456D30D25FC5  : public RuntimeObject
{
	// Windows.Storage.Streams.IBuffer System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0::buffer
	RuntimeObject* ___buffer_0;
	// System.IO.Stream System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0::stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream_1;
	// System.Byte[] System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0::data
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data_2;
	// System.Int32 System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0::offset
	int32_t ___offset_3;
};

// System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tB7212D23536AE37D5E6EEFABD29F7A1DCCC5BFAA  : public RuntimeObject
{
	// System.IO.Stream System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0::stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream_0;
};

// System.IO.WindowsRuntimeStreamExtensions/<>c
struct U3CU3Ec_t0031EA3631AC4363828C98AED7D52630379E6919  : public RuntimeObject
{
};

// System.IO.WindowsRuntimeStreamExtensions/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_t37D3E76CFB42D6FC4250C48FC0277A97E9401D3C  : public RuntimeObject
{
	// System.Int32 System.IO.WindowsRuntimeStreamExtensions/<>c__DisplayClass12_0::bufferSize
	int32_t ___bufferSize_0;
};

// System.WindowsRuntimeSystemExtensions/<>c
struct U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2  : public RuntimeObject
{
};

// System.ArraySegment`1<System.Byte>
struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 
{
	// T[] System.ArraySegment`1::_array
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____array_1;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_2;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_3;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Windows.Storage.Streams.IBuffer>
struct ConfiguredTaskAwaiter_t59FDFE1F6491ED41D3F1F28C14509DFEAC2D0C60 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_t34C529965D1945277B370D1A5EEB7D54EADF44F5* ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>
struct ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>
struct ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;
};

// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 
{
	// System.Threading.SparselyPopulatedArrayFragment`1<T> System.Threading.SparselyPopulatedArrayAddInfo`1::_source
	SparselyPopulatedArrayFragment_1_tB32DA8C2B7461E80CE4C271B76C103629BDFA035* ____source_0;
	// System.Int32 System.Threading.SparselyPopulatedArrayAddInfo`1::_index
	int32_t ____index_1;
};

// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	bool ___m_result_38;
};

// System.Threading.Tasks.Task`1<Windows.Storage.Streams.IBuffer>
struct Task_1_t34C529965D1945277B370D1A5EEB7D54EADF44F5  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_38;
};

// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_38;
};

// System.Threading.Tasks.Task`1<System.UInt32>
struct Task_1_t9BFF20A5BC78A3DB3701691B789BBBFB88555060  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	uint32_t ___m_result_38;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// Windows.Foundation.Point
struct Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18 
{
	// System.Single Windows.Foundation.Point::_x
	float ____x_0;
	// System.Single Windows.Foundation.Point::_y
	float ____y_1;
};

// Windows.Foundation.Rect
struct Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48 
{
	// System.Single Windows.Foundation.Rect::_x
	float ____x_0;
	// System.Single Windows.Foundation.Rect::_y
	float ____y_1;
	// System.Single Windows.Foundation.Rect::_width
	float ____width_2;
	// System.Single Windows.Foundation.Rect::_height
	float ____height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// Windows.Foundation.Size
struct Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05 
{
	// System.Single Windows.Foundation.Size::_width
	float ____width_0;
	// System.Single Windows.Foundation.Size::_height
	float ____height_1;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

// System.IO.StreamFlushAsyncResult
struct StreamFlushAsyncResult_t04C0AAEDCD3CB5F458A11C4E275F2577786A8103  : public StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5
{
};

// System.IO.StreamReadAsyncResult
struct StreamReadAsyncResult_t1F47DFA1E32A8FBC434C3B74D239D2F4888DDFBF  : public StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5
{
	// Windows.Storage.Streams.IBuffer System.IO.StreamReadAsyncResult::_userBuffer
	RuntimeObject* ____userBuffer_10;
};

// System.IO.StreamWriteAsyncResult
struct StreamWriteAsyncResult_t57A8AF219966DDDB17A8D7F1F4AC8DB8D8500693  : public StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5
{
};

// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};

// System.Threading.Tasks.TaskToAsyncActionAdapter
struct TaskToAsyncActionAdapter_t91D08EB4436456401F093BFB3A40A13BE5E8D8F3  : public TaskToAsyncInfoAdapter_4_t253617E9AD8E16A1018418DBCA9ECB3B1595EED9
{
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
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

// System.VoidValueTypeParameter
struct VoidValueTypeParameter_t2A6A9B3BB1BA26C930A8F73CC53A63192C124F4C 
{
	union
	{
		struct
		{
		};
		uint8_t VoidValueTypeParameter_t2A6A9B3BB1BA26C930A8F73CC53A63192C124F4C__padding[1];
	};
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};

// System.IO.NetFxToWinRtStreamAdapter/InputOutputStream
struct InputOutputStream_t5862300BC55FC7221B062054B4F1A743E433D95B  : public NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737
{
};

// System.IO.NetFxToWinRtStreamAdapter/InputStream
struct InputStream_t5337674C27D910998AD03237067CD14A65B18403  : public NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737
{
};

// System.IO.NetFxToWinRtStreamAdapter/OutputStream
struct OutputStream_t44EF2F4DE5310B5C3D243ABF0412D78134F6E7A8  : public NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737
{
};

// System.IO.NetFxToWinRtStreamAdapter/RandomAccessStream
struct RandomAccessStream_t26E619D7F88DBC344D0337DE719FB2702640730D  : public NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737
{
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>
struct AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___m_task_2;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Windows.Storage.Streams.IBuffer>
struct AsyncTaskMethodBuilder_1_t4102E0362C7437C556E4FEA7D535D2783F408A78 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t34C529965D1945277B370D1A5EEB7D54EADF44F5* ___m_task_2;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>
struct AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ___m_task_2;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_2;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>
struct AsyncTaskMethodBuilder_1_t8FB785F8228EA6285573F7790C8F8A3CDEEA7CD2 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t9BFF20A5BC78A3DB3701691B789BBBFB88555060* ___m_task_2;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<Windows.Storage.Streams.IBuffer>
struct ConfiguredTaskAwaitable_1_t321A8DE5D259177E3DFE3069C6DC2CCD6F00761A 
{
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t59FDFE1F6491ED41D3F1F28C14509DFEAC2D0C60 ___m_configuredTaskAwaiter_0;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Int32>
struct ConfiguredTaskAwaitable_1_t5186C81524388C1718E9AC37792D8771A443417A 
{
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80 ___m_configuredTaskAwaiter_0;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>
struct ConfiguredTaskAwaitable_1_t97C129EA63015240E6F9E767F4A120CC9122FEF8 
{
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2 ___m_configuredTaskAwaiter_0;
};

// System.Threading.Tasks.Task`1<System.VoidValueTypeParameter>
struct Task_1_tB82A632CF7C85E91A9F7491058C7BDF8F744E211  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	VoidValueTypeParameter_t2A6A9B3BB1BA26C930A8F73CC53A63192C124F4C ___m_result_38;
};

// System.IO.BufferedStream
struct BufferedStream_t9D0E8599EB0482BE778F25C62AA8954A68D94BEE  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.IO.Stream System.IO.BufferedStream::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_4;
	// System.Byte[] System.IO.BufferedStream::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_5;
	// System.Int32 System.IO.BufferedStream::_bufferSize
	int32_t ____bufferSize_6;
	// System.Int32 System.IO.BufferedStream::_readPos
	int32_t ____readPos_7;
	// System.Int32 System.IO.BufferedStream::_readLen
	int32_t ____readLen_8;
	// System.Int32 System.IO.BufferedStream::_writePos
	int32_t ____writePos_9;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.BufferedStream::_lastSyncCompletedReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastSyncCompletedReadTask_10;
	// System.Threading.SemaphoreSlim System.IO.BufferedStream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_11;
};

// System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 
{
	// System.Threading.CancellationCallbackInfo System.Threading.CancellationTokenRegistration::m_callbackInfo
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo_0;
	// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo> System.Threading.CancellationTokenRegistration::m_registrationInfo
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo_1;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshaled_pinvoke
{
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo_1;
};
// Native definition for COM marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshaled_com
{
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo_1;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C 
{
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ___m_configuredTaskAwaiter_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C_marshaled_pinvoke
{
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshaled_pinvoke ___m_configuredTaskAwaiter_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C_marshaled_com
{
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshaled_com ___m_configuredTaskAwaiter_0;
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

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};
// System.Runtime.InteropServices.WindowsRuntime.IBufferByteAccess
struct NOVTABLE IBufferByteAccess_t5DAA0FD27148380C9E304D7589F3F7F930734E5D : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBufferByteAccess_GetBuffer_mBA6848D6A3CFAD329102327259F8217FD4548B87(intptr_t* comReturnValue) = 0;
};
// System.Runtime.InteropServices.IMarshal
struct NOVTABLE IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMarshal_GetUnmarshalClass_mB9ABCA3786D1E21D118F0ECD9C234DB33EDB3A61(Guid_t* ___0_riid, intptr_t ___1_pv, uint32_t ___2_dwDestContext, intptr_t ___3_pvDestContext, uint32_t ___4_mshlFlags, Guid_t* ___5_pCid) = 0;
	virtual il2cpp_hresult_t STDCALL IMarshal_GetMarshalSizeMax_mA332FF5CFA5F26A0AADF110B4ED010159630427C(Guid_t* ___0_riid, intptr_t ___1_pv, uint32_t ___2_dwDestContext, intptr_t ___3_pvDestContext, uint32_t ___4_mshlflags, uint32_t* ___5_pSize) = 0;
	virtual il2cpp_hresult_t STDCALL IMarshal_MarshalInterface_mB663BD143FAC8D2F96C7E2744BD2B95F857CD7CA(intptr_t ___0_pStm, Guid_t* ___1_riid, intptr_t ___2_pv, uint32_t ___3_dwDestContext, intptr_t ___4_pvDestContext, uint32_t ___5_mshlflags) = 0;
	virtual il2cpp_hresult_t STDCALL IMarshal_UnmarshalInterface_m9E4F5841DE07B28FB4435CB1F9F2D6EEF116E3AE(intptr_t ___0_pStm, Guid_t* ___1_riid, intptr_t* ___2_ppv) = 0;
	virtual il2cpp_hresult_t STDCALL IMarshal_ReleaseMarshalData_m44A4DCDCFB3E06580D3B09CECF5869BCB9F11E66(intptr_t ___0_pStm) = 0;
	virtual il2cpp_hresult_t STDCALL IMarshal_DisconnectObject_mFB20C6B2DF6512AEDA1371F44E4A59DAFB77E92C(uint32_t ___0_dwReserved) = 0;
};

// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_4;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_5;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_6;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_7;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_8;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_9;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_10;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_11;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_13;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.IO.UnmanagedMemoryStream
struct UnmanagedMemoryStream_t83B223BCEF722E04E3AB3A7F6B73416F59BE630D  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Runtime.InteropServices.SafeBuffer System.IO.UnmanagedMemoryStream::_buffer
	SafeBuffer_t75FD9565BE645665AB242CA8C8BB22E1A933DFCE* ____buffer_4;
	// System.Byte* System.IO.UnmanagedMemoryStream::_mem
	uint8_t* ____mem_5;
	// System.Int64 System.IO.UnmanagedMemoryStream::_length
	int64_t ____length_6;
	// System.Int64 System.IO.UnmanagedMemoryStream::_capacity
	int64_t ____capacity_7;
	// System.Int64 System.IO.UnmanagedMemoryStream::_position
	int64_t ____position_8;
	// System.Int64 System.IO.UnmanagedMemoryStream::_offset
	int64_t ____offset_9;
	// System.IO.FileAccess System.IO.UnmanagedMemoryStream::_access
	int32_t ____access_10;
	// System.Boolean System.IO.UnmanagedMemoryStream::_isOpen
	bool ____isOpen_11;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.UnmanagedMemoryStream::_lastReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_12;
};

// System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449* ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;
};
// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_pinvoke : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_com : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// System.IO.WinRtToNetFxStreamAdapter
struct WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.WinRtToNetFxStreamAdapter::_oneByteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____oneByteBuffer_4;
	// System.Boolean System.IO.WinRtToNetFxStreamAdapter::_leaveUnderlyingStreamOpen
	bool ____leaveUnderlyingStreamOpen_5;
	// System.Object System.IO.WinRtToNetFxStreamAdapter::_winRtStream
	RuntimeObject* ____winRtStream_6;
	// System.Boolean System.IO.WinRtToNetFxStreamAdapter::_canRead
	bool ____canRead_7;
	// System.Boolean System.IO.WinRtToNetFxStreamAdapter::_canWrite
	bool ____canWrite_8;
	// System.Boolean System.IO.WinRtToNetFxStreamAdapter::_canSeek
	bool ____canSeek_9;
};

// System.Threading.Tasks.AsyncInfoToTaskBridge`1<System.VoidValueTypeParameter>
struct AsyncInfoToTaskBridge_1_t3F837B3047E80D2A3A6A19CB1CA845D924B9B44D  : public TaskCompletionSource_1_t2EED03A6AEF435DC304FDCC21ACC7EF6EBED79E7
{
	// System.Threading.CancellationToken System.Threading.Tasks.AsyncInfoToTaskBridge`1::_ct
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ____ct_1;
	// System.Threading.CancellationTokenRegistration System.Threading.Tasks.AsyncInfoToTaskBridge`1::_ctr
	CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 ____ctr_2;
	// System.Boolean System.Threading.Tasks.AsyncInfoToTaskBridge`1::_completing
	bool ____completing_3;
};

// System.Threading.EventWaitHandle
struct EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E  : public WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer
struct WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9  : public RuntimeObject
{
	// System.Byte[] System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_data
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____data_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_dataStartOffs
	int32_t ____dataStartOffs_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_usefulDataLength
	int32_t ____usefulDataLength_3;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_maxDataCapacity
	int32_t ____maxDataCapacity_4;
	// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_pinHandle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ____pinHandle_5;
	// System.IntPtr System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::_dataPtr
	intptr_t ____dataPtr_6;
};

// System.IO.WinRtToNetFxStreamAdapter/<ReadAsyncInternal>d__43
struct U3CReadAsyncInternalU3Ed__43_t30E8CDC69A0B1E1AE4981CFFD05F1CF764DD6968 
{
	// System.Int32 System.IO.WinRtToNetFxStreamAdapter/<ReadAsyncInternal>d__43::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32> System.IO.WinRtToNetFxStreamAdapter/<ReadAsyncInternal>d__43::<>t__builder
	AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019 ___U3CU3Et__builder_1;
	// System.IO.WinRtToNetFxStreamAdapter System.IO.WinRtToNetFxStreamAdapter/<ReadAsyncInternal>d__43::<>4__this
	WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* ___U3CU3E4__this_2;
	// System.Byte[] System.IO.WinRtToNetFxStreamAdapter/<ReadAsyncInternal>d__43::buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer_3;
	// System.Int32 System.IO.WinRtToNetFxStreamAdapter/<ReadAsyncInternal>d__43::offset
	int32_t ___offset_4;
	// System.Int32 System.IO.WinRtToNetFxStreamAdapter/<ReadAsyncInternal>d__43::count
	int32_t ___count_5;
	// System.Threading.CancellationToken System.IO.WinRtToNetFxStreamAdapter/<ReadAsyncInternal>d__43::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_6;
	// Windows.Storage.Streams.IBuffer System.IO.WinRtToNetFxStreamAdapter/<ReadAsyncInternal>d__43::<userBuffer>5__2
	RuntimeObject* ___U3CuserBufferU3E5__2_7;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Windows.Storage.Streams.IBuffer> System.IO.WinRtToNetFxStreamAdapter/<ReadAsyncInternal>d__43::<>u__1
	ConfiguredTaskAwaiter_t59FDFE1F6491ED41D3F1F28C14509DFEAC2D0C60 ___U3CU3Eu__1_8;
};

// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions/WindowsRuntimeBufferUnmanagedMemoryStream
struct WindowsRuntimeBufferUnmanagedMemoryStream_t30CA79558CFD4D7E1E1AE41F7DCC9589EE2809BE  : public UnmanagedMemoryStream_t83B223BCEF722E04E3AB3A7F6B73416F59BE630D
{
	// Windows.Storage.Streams.IBuffer System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions/WindowsRuntimeBufferUnmanagedMemoryStream::_sourceBuffer
	RuntimeObject* ____sourceBuffer_13;
};

// System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d
struct U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tB607A35AD145FE4406070D15E921A3F6FA68C63C 
{
	// System.Int32 System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Windows.Storage.Streams.IBuffer> System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d::<>t__builder
	AsyncTaskMethodBuilder_1_t4102E0362C7437C556E4FEA7D535D2783F408A78 ___U3CU3Et__builder_1;
	// System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0 System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d::<>4__this
	U3CU3Ec__DisplayClass1_0_t05B790464823435BFCF2DDD9EDD15BD109799D30* ___U3CU3E4__this_2;
	// System.Threading.CancellationToken System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d::cancelToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancelToken_3;
	// System.IProgress`1<System.UInt32> System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d::progressListener
	RuntimeObject* ___progressListener_4;
	// System.Byte[] System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d::<data>5__2
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CdataU3E5__2_5;
	// System.Int32 System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d::<offset>5__3
	int32_t ___U3CoffsetU3E5__3_6;
	// System.Int32 System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d::<bytesCompleted>5__4
	int32_t ___U3CbytesCompletedU3E5__4_7;
	// System.Int32 System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d::<bytesRead>5__5
	int32_t ___U3CbytesReadU3E5__5_8;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32> System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d::<>u__1
	ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80 ___U3CU3Eu__1_9;
};

// System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__0>d
struct U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t03D234E0E36C92DA9A5CA3811A6B2E30D9639AF2 
{
	// System.Int32 System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__0>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32> System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__0>d::<>t__builder
	AsyncTaskMethodBuilder_1_t8FB785F8228EA6285573F7790C8F8A3CDEEA7CD2 ___U3CU3Et__builder_1;
	// System.Threading.CancellationToken System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__0>d::cancelToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancelToken_2;
	// System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0 System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__0>d::<>4__this
	U3CU3Ec__DisplayClass2_0_t6E434BA73EA5DB3511A12C0C5CF9456D30D25FC5* ___U3CU3E4__this_3;
	// System.IProgress`1<System.UInt32> System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__0>d::progressListener
	RuntimeObject* ___progressListener_4;
	// System.Int32 System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__0>d::<bytesToWrite>5__2
	int32_t ___U3CbytesToWriteU3E5__2_5;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__0>d::<>u__1
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ___U3CU3Eu__1_6;
};

// System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__1>d
struct U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t15BC749CED41367E2893FD2B368726119BD8EDA2 
{
	// System.Int32 System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__1>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32> System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__1>d::<>t__builder
	AsyncTaskMethodBuilder_1_t8FB785F8228EA6285573F7790C8F8A3CDEEA7CD2 ___U3CU3Et__builder_1;
	// System.Threading.CancellationToken System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__1>d::cancelToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancelToken_2;
	// System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0 System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__1>d::<>4__this
	U3CU3Ec__DisplayClass2_0_t6E434BA73EA5DB3511A12C0C5CF9456D30D25FC5* ___U3CU3E4__this_3;
	// System.IProgress`1<System.UInt32> System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__1>d::progressListener
	RuntimeObject* ___progressListener_4;
	// System.UInt32 System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__1>d::<bytesToWrite>5__2
	uint32_t ___U3CbytesToWriteU3E5__2_5;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__1>d::<>u__1
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ___U3CU3Eu__1_6;
};

// System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0/<<FlushAsync_AbstractStream>b__0>d
struct U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_tCAE4779681542A3A44DA232D516892B2CFB4DC34 
{
	// System.Int32 System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0/<<FlushAsync_AbstractStream>b__0>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0/<<FlushAsync_AbstractStream>b__0>d::<>t__builder
	AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA ___U3CU3Et__builder_1;
	// System.Threading.CancellationToken System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0/<<FlushAsync_AbstractStream>b__0>d::cancelToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancelToken_2;
	// System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0 System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0/<<FlushAsync_AbstractStream>b__0>d::<>4__this
	U3CU3Ec__DisplayClass3_0_tB7212D23536AE37D5E6EEFABD29F7A1DCCC5BFAA* ___U3CU3E4__this_3;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0/<<FlushAsync_AbstractStream>b__0>d::<>u__1
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ___U3CU3Eu__1_4;
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`2<System.Threading.Tasks.Task,System.Object>
struct Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB  : public MulticastDelegate_t
{
};

// Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>
struct AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52  : public MulticastDelegate_t
{
};
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>
struct IAsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9* ___0_asyncInfo, int32_t ___1_asyncStatus) = 0;
};


// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D  : public MulticastDelegate_t
{
};
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct IAsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8* ___0_asyncInfo, int32_t ___1_asyncStatus) = 0;
};


// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78  : public MulticastDelegate_t
{
};
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>
struct IAsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C* ___0_asyncInfo, int32_t ___1_asyncStatus) = 0;
};


// System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.IO.Stream>
struct CreateValueCallback_tDDCD9D271D51B07C7E7946A50CDE83F171F5AD66  : public MulticastDelegate_t
{
};

// System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.IO.Stream,System.IO.NetFxToWinRtStreamAdapter>
struct CreateValueCallback_t67AEB55E60D5609661C588762443963DBD29C224  : public MulticastDelegate_t
{
};

// System.Func`2<System.Threading.CancellationToken,System.Threading.Tasks.Task`1<System.Boolean>>
struct Func_2_t6B60A4875CD5D79B29837A45D46D91F7128AA5C3  : public MulticastDelegate_t
{
};

// System.Func`3<System.Threading.CancellationToken,System.IProgress`1<System.UInt32>,System.Threading.Tasks.Task`1<Windows.Storage.Streams.IBuffer>>
struct Func_3_tAC8FE9F123579F0F0724C2106222C88580347FC8  : public MulticastDelegate_t
{
};

// System.Func`3<System.Threading.CancellationToken,System.IProgress`1<System.UInt32>,System.Threading.Tasks.Task`1<System.UInt32>>
struct Func_3_t336F4190B9586A5D924C832BF5F023727A04707D  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// Windows.Foundation.AsyncActionCompletedHandler
struct AsyncActionCompletedHandler_tC851091B8156847FF3756ADAC162533166114B39  : public MulticastDelegate_t
{
};
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncActionCompletedHandler
struct IAsyncActionCompletedHandler_tC851091B8156847FF3756ADAC162533166114B39_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncAction_t22D4C50DFEEE7E0C6D935892BAEA22708722474B* ___0_asyncInfo, int32_t ___1_asyncStatus) = 0;
};


// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Threading.ManualResetEvent
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158  : public EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E
{
};

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.OperationCanceledException
struct OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.Threading.CancellationToken System.OperationCanceledException::_cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ____cancellationToken_18;
};

// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E  : public MulticastDelegate_t
{
};

// System.TypeLoadException
struct TypeLoadException_t6333E3083F7BFF1A582969E6F67ACBA8B0035C32  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.TypeLoadException::ClassName
	String_t* ___ClassName_18;
	// System.String System.TypeLoadException::AssemblyName
	String_t* ___AssemblyName_19;
	// System.String System.TypeLoadException::MessageArg
	String_t* ___MessageArg_20;
	// System.Int32 System.TypeLoadException::ResourceId
	int32_t ___ResourceId_21;
};

// System.UnauthorizedAccessException
struct UnauthorizedAccessException_t8FC1F1DE7AA62456E9E25EFDFC658A623A626791  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// System.DllNotFoundException
struct DllNotFoundException_t8CAE636A394C482C9FCF38FB7B7929506319D534  : public TypeLoadException_t6333E3083F7BFF1A582969E6F67ACBA8B0035C32
{
};

// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
	// System.String System.ObjectDisposedException::_objectName
	String_t* ____objectName_18;
};

// <Module>

// <Module>

// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.IO.Stream>

// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.IO.Stream>

// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.IO.Stream,System.IO.NetFxToWinRtStreamAdapter>

// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.IO.Stream,System.IO.NetFxToWinRtStreamAdapter>

// System.Threading.Tasks.TaskCompletionSource`1<System.VoidValueTypeParameter>

// System.Threading.Tasks.TaskCompletionSource`1<System.VoidValueTypeParameter>

// System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncActionCompletedHandler,System.VoidReferenceTypeParameter,System.VoidValueTypeParameter,System.VoidValueTypeParameter>

// System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncActionCompletedHandler,System.VoidReferenceTypeParameter,System.VoidValueTypeParameter,System.VoidValueTypeParameter>

// System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.VoidValueTypeParameter,System.VoidValueTypeParameter>

// System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.VoidValueTypeParameter,System.VoidValueTypeParameter>

// System.Runtime.InteropServices.WindowsRuntime.AsyncInfo

// System.Runtime.InteropServices.WindowsRuntime.AsyncInfo

// System.Threading.Tasks.AsyncInfoIdGenerator
struct AsyncInfoIdGenerator_t9A2B1D1850C86EBEEBDF53B62B5CD99F97D87C96_StaticFields
{
	// System.Random System.Threading.Tasks.AsyncInfoIdGenerator::s_idGenerator
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_idGenerator_0;
};

// System.Threading.Tasks.AsyncInfoIdGenerator

// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_StaticFields
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationTokenSource::s_canceledSource
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___s_canceledSource_0;
	// System.Threading.CancellationTokenSource System.Threading.CancellationTokenSource::s_neverCanceledSource
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___s_neverCanceledSource_1;
	// System.Int32 System.Threading.CancellationTokenSource::s_nLists
	int32_t ___s_nLists_2;
	// System.Threading.TimerCallback System.Threading.CancellationTokenSource::s_timerCallback
	TimerCallback_t7455CAFACC7054E62879920AFC84C5DA98B8C7CD* ___s_timerCallback_14;
};

// System.Threading.CancellationTokenSource

// System.Threading.Tasks.ExceptionDispatchHelper

// System.Threading.Tasks.ExceptionDispatchHelper

// System.Runtime.ExceptionServices.ExceptionDispatchInfo

// System.Runtime.ExceptionServices.ExceptionDispatchInfo

// System.MarshalByRefObject

// System.MarshalByRefObject

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// System.IO.NetFxToWinRtStreamAdapter

// System.IO.NetFxToWinRtStreamAdapter

// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472_StaticFields
{
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.NumberFormatInfo::invariantInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___invariantInfo_0;
};

// System.Globalization.NumberFormatInfo

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	// System.Random System.Random::s_globalRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom_4;
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	// System.Random System.Random::t_threadRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom_3;
};

// System.IO.StreamOperationAsyncResult

// System.IO.StreamOperationAsyncResult

// System.IO.StreamOperationsImplementation

// System.IO.StreamOperationsImplementation

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_StaticFields
{
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType1
	Type_t* ___s_cachedPreparedType1_1;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType2
	Type_t* ___s_cachedPreparedType2_2;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType3
	Type_t* ___s_cachedPreparedType3_3;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType4
	Type_t* ___s_cachedPreparedType4_4;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType5
	Type_t* ___s_cachedPreparedType5_5;
};

// System.Threading.SynchronizationContext

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_24;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_25;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_27;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_30;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_31;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_32;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_33;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_34;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_36;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_37;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_28;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_29;
};

// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticFields
{
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Threading.Tasks.TaskScheduler,System.Object> System.Threading.Tasks.TaskScheduler::s_activeTaskSchedulers
	ConditionalWeakTable_2_t815A43BFBA64EC1F9F92AD042622E80EED65712E* ___s_activeTaskSchedulers_0;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::s_defaultTaskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___s_defaultTaskScheduler_1;
	// System.Int32 System.Threading.Tasks.TaskScheduler::s_taskSchedulerIdCounter
	int32_t ___s_taskSchedulerIdCounter_2;
	// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs> System.Threading.Tasks.TaskScheduler::_unobservedTaskException
	EventHandler_1_tE698654C3F437D97ABCCA3FD0AD8F86E776DC77A* ____unobservedTaskException_4;
	// System.Threading.Lock System.Threading.Tasks.TaskScheduler::_unobservedTaskExceptionLockObject
	Lock_t529C04C831C120E5FFD6039EC3CB76F9956BCDD7* ____unobservedTaskExceptionLockObject_5;
};

// System.Threading.Tasks.TaskScheduler

// Windows.Foundation.TokenizerHelper

// Windows.Foundation.TokenizerHelper

// System.ValueType

// System.ValueType

// System.VoidReferenceTypeParameter

// System.VoidReferenceTypeParameter

// System.IO.WinRtIOHelper

// System.IO.WinRtIOHelper

// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions

// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions

// System.IO.WindowsRuntimeStreamExtensions
struct WindowsRuntimeStreamExtensions_tB43F7551D4AF6F5480829903106AD0FFEDC81D9B_StaticFields
{
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.IO.Stream> System.IO.WindowsRuntimeStreamExtensions::s_winRtToNetFxAdapterMap
	ConditionalWeakTable_2_t854A212DF03C231A1FCD6A2CCD8FC269D295B27C* ___s_winRtToNetFxAdapterMap_0;
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.IO.Stream,System.IO.NetFxToWinRtStreamAdapter> System.IO.WindowsRuntimeStreamExtensions::s_netFxToWinRtAdapterMap
	ConditionalWeakTable_2_t24BE7D16606E76A4491061A2E9F3E241D476135E* ___s_netFxToWinRtAdapterMap_1;
};

// System.IO.WindowsRuntimeStreamExtensions

// System.WindowsRuntimeSystemExtensions

// System.WindowsRuntimeSystemExtensions

// System.Threading.Tasks.ExceptionDispatchHelper/<>c
struct U3CU3Ec_t474B044207AC3819954D9AE072ACC1AEACA8B5CE_StaticFields
{
	// System.Threading.Tasks.ExceptionDispatchHelper/<>c System.Threading.Tasks.ExceptionDispatchHelper/<>c::<>9
	U3CU3Ec_t474B044207AC3819954D9AE072ACC1AEACA8B5CE* ___U3CU3E9_0;
	// System.Threading.SendOrPostCallback System.Threading.Tasks.ExceptionDispatchHelper/<>c::<>9__0_0
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__0_0_1;
	// System.Threading.SendOrPostCallback System.Threading.Tasks.ExceptionDispatchHelper/<>c::<>9__0_1
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__0_1_2;
};

// System.Threading.Tasks.ExceptionDispatchHelper/<>c

// System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0

// System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0

// System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0

// System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0

// System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0

// System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0

// System.IO.WindowsRuntimeStreamExtensions/<>c
struct U3CU3Ec_t0031EA3631AC4363828C98AED7D52630379E6919_StaticFields
{
	// System.IO.WindowsRuntimeStreamExtensions/<>c System.IO.WindowsRuntimeStreamExtensions/<>c::<>9
	U3CU3Ec_t0031EA3631AC4363828C98AED7D52630379E6919* ___U3CU3E9_0;
	// System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.IO.Stream> System.IO.WindowsRuntimeStreamExtensions/<>c::<>9__11_0
	CreateValueCallback_tDDCD9D271D51B07C7E7946A50CDE83F171F5AD66* ___U3CU3E9__11_0_1;
	// System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.IO.Stream,System.IO.NetFxToWinRtStreamAdapter> System.IO.WindowsRuntimeStreamExtensions/<>c::<>9__18_0
	CreateValueCallback_t67AEB55E60D5609661C588762443963DBD29C224* ___U3CU3E9__18_0_2;
};

// System.IO.WindowsRuntimeStreamExtensions/<>c

// System.IO.WindowsRuntimeStreamExtensions/<>c__DisplayClass12_0

// System.IO.WindowsRuntimeStreamExtensions/<>c__DisplayClass12_0

// System.WindowsRuntimeSystemExtensions/<>c
struct U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_StaticFields
{
	// System.WindowsRuntimeSystemExtensions/<>c System.WindowsRuntimeSystemExtensions/<>c::<>9
	U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2* ___U3CU3E9_0;
	// System.Action`1<System.Object> System.WindowsRuntimeSystemExtensions/<>c::<>9__0_0
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___U3CU3E9__0_0_1;
	// System.Action`2<System.Threading.Tasks.Task,System.Object> System.WindowsRuntimeSystemExtensions/<>c::<>9__0_1
	Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB* ___U3CU3E9__0_1_2;
};

// System.WindowsRuntimeSystemExtensions/<>c

// System.ArraySegment`1<System.Byte>
struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_StaticFields
{
	// System.ArraySegment`1<T> System.ArraySegment`1::<Empty>k__BackingField
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___U3CEmptyU3Ek__BackingField_0;
};

// System.ArraySegment`1<System.Byte>

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Windows.Storage.Streams.IBuffer>

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Windows.Storage.Streams.IBuffer>

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>

// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo>

// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo>

// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tFAEAC22A1E986463E6956C344A78A7C7197288E0* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.Boolean>

// System.Threading.Tasks.Task`1<Windows.Storage.Streams.IBuffer>
struct Task_1_t34C529965D1945277B370D1A5EEB7D54EADF44F5_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t0A7E59A0F5E2CA4232D089230C538B23505825AC* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<Windows.Storage.Streams.IBuffer>

// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t0BEF06D58E44525B9135AB0B22D016856EE69FF3* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.Int32>

// System.Threading.Tasks.Task`1<System.UInt32>
struct Task_1_t9BFF20A5BC78A3DB3701691B789BBBFB88555060_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t13F924BE259FDF3ABF1144CA41338C34578B3600* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.UInt32>

// System.Runtime.CompilerServices.AsyncMethodBuilderCore

// System.Runtime.CompilerServices.AsyncMethodBuilderCore

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};

// System.Threading.CancellationToken

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// System.Double

// System.Double

// System.Guid
struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Guid

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// Windows.Foundation.Point

// Windows.Foundation.Point

// Windows.Foundation.Rect

// Windows.Foundation.Rect

// System.Single

// System.Single

// Windows.Foundation.Size

// Windows.Foundation.Size

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.IO.Stream

// System.IO.StreamFlushAsyncResult

// System.IO.StreamFlushAsyncResult

// System.IO.StreamReadAsyncResult

// System.IO.StreamReadAsyncResult

// System.IO.StreamWriteAsyncResult

// System.IO.StreamWriteAsyncResult

// System.Runtime.CompilerServices.TaskAwaiter

// System.Runtime.CompilerServices.TaskAwaiter

// System.Threading.Tasks.TaskToAsyncActionAdapter

// System.Threading.Tasks.TaskToAsyncActionAdapter

// System.UInt32

// System.UInt32

// System.UInt64

// System.UInt64

// System.Void

// System.Void

// System.VoidValueTypeParameter

// System.VoidValueTypeParameter

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter

// System.IO.NetFxToWinRtStreamAdapter/InputOutputStream

// System.IO.NetFxToWinRtStreamAdapter/InputOutputStream

// System.IO.NetFxToWinRtStreamAdapter/InputStream

// System.IO.NetFxToWinRtStreamAdapter/InputStream

// System.IO.NetFxToWinRtStreamAdapter/OutputStream

// System.IO.NetFxToWinRtStreamAdapter/OutputStream

// System.IO.NetFxToWinRtStreamAdapter/RandomAccessStream

// System.IO.NetFxToWinRtStreamAdapter/RandomAccessStream

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>
struct AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Windows.Storage.Streams.IBuffer>
struct AsyncTaskMethodBuilder_1_t4102E0362C7437C556E4FEA7D535D2783F408A78_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t34C529965D1945277B370D1A5EEB7D54EADF44F5* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Windows.Storage.Streams.IBuffer>

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>
struct AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>
struct AsyncTaskMethodBuilder_1_t8FB785F8228EA6285573F7790C8F8A3CDEEA7CD2_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t9BFF20A5BC78A3DB3701691B789BBBFB88555060* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<Windows.Storage.Streams.IBuffer>

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<Windows.Storage.Streams.IBuffer>

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Int32>

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Int32>

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>

// System.Threading.Tasks.Task`1<System.VoidValueTypeParameter>
struct Task_1_tB82A632CF7C85E91A9F7491058C7BDF8F744E211_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tCA210ADC3269D13A32C5E78F040667B0BC52B6BB* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.VoidValueTypeParameter>

// System.IO.BufferedStream

// System.IO.BufferedStream

// System.Threading.CancellationTokenRegistration

// System.Threading.CancellationTokenRegistration

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.Runtime.InteropServices.GCHandle

// System.Runtime.InteropServices.GCHandle

// System.IO.MemoryStream

// System.IO.MemoryStream

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// System.IO.UnmanagedMemoryStream

// System.IO.UnmanagedMemoryStream

// System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_StaticFields
{
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_11;
};

// System.Threading.WaitHandle

// System.IO.WinRtToNetFxStreamAdapter

// System.IO.WinRtToNetFxStreamAdapter

// System.Threading.Tasks.AsyncInfoToTaskBridge`1<System.VoidValueTypeParameter>

// System.Threading.Tasks.AsyncInfoToTaskBridge`1<System.VoidValueTypeParameter>

// System.Threading.EventWaitHandle

// System.Threading.EventWaitHandle

// System.MulticastDelegate

// System.MulticastDelegate

// System.SystemException

// System.SystemException

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer

// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer
struct WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_ThreadStaticFields
{
	// System.Runtime.InteropServices.IMarshal System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::s_winRtMarshalProxy
	RuntimeObject* ___s_winRtMarshalProxy_0;
};

// System.IO.WinRtToNetFxStreamAdapter/<ReadAsyncInternal>d__43

// System.IO.WinRtToNetFxStreamAdapter/<ReadAsyncInternal>d__43

// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions/WindowsRuntimeBufferUnmanagedMemoryStream

// System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions/WindowsRuntimeBufferUnmanagedMemoryStream

// System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d

// System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d

// System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__0>d

// System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__0>d

// System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__1>d

// System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__1>d

// System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0/<<FlushAsync_AbstractStream>b__0>d

// System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0/<<FlushAsync_AbstractStream>b__0>d

// System.Action`1<System.Object>

// System.Action`1<System.Object>

// System.Action`2<System.Threading.Tasks.Task,System.Object>

// System.Action`2<System.Threading.Tasks.Task,System.Object>

// Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>

// Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>

// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>

// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>

// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>

// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>

// System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.IO.Stream>

// System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.IO.Stream>

// System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.IO.Stream,System.IO.NetFxToWinRtStreamAdapter>

// System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.IO.Stream,System.IO.NetFxToWinRtStreamAdapter>

// System.Func`2<System.Threading.CancellationToken,System.Threading.Tasks.Task`1<System.Boolean>>

// System.Func`2<System.Threading.CancellationToken,System.Threading.Tasks.Task`1<System.Boolean>>

// System.Func`3<System.Threading.CancellationToken,System.IProgress`1<System.UInt32>,System.Threading.Tasks.Task`1<Windows.Storage.Streams.IBuffer>>

// System.Func`3<System.Threading.CancellationToken,System.IProgress`1<System.UInt32>,System.Threading.Tasks.Task`1<Windows.Storage.Streams.IBuffer>>

// System.Func`3<System.Threading.CancellationToken,System.IProgress`1<System.UInt32>,System.Threading.Tasks.Task`1<System.UInt32>>

// System.Func`3<System.Threading.CancellationToken,System.IProgress`1<System.UInt32>,System.Threading.Tasks.Task`1<System.UInt32>>

// System.ArgumentException

// System.ArgumentException

// Windows.Foundation.AsyncActionCompletedHandler

// Windows.Foundation.AsyncActionCompletedHandler

// System.AsyncCallback

// System.AsyncCallback

// System.IO.IOException

// System.IO.IOException

// System.InvalidOperationException

// System.InvalidOperationException

// System.Threading.ManualResetEvent

// System.Threading.ManualResetEvent

// System.NotImplementedException

// System.NotImplementedException

// System.NotSupportedException

// System.NotSupportedException

// System.NullReferenceException

// System.NullReferenceException

// System.OperationCanceledException

// System.OperationCanceledException

// System.Threading.SendOrPostCallback

// System.Threading.SendOrPostCallback

// System.TypeLoadException

// System.TypeLoadException

// System.UnauthorizedAccessException

// System.UnauthorizedAccessException

// System.ArgumentNullException

// System.ArgumentNullException

// System.ArgumentOutOfRangeException

// System.ArgumentOutOfRangeException

// System.DllNotFoundException

// System.DllNotFoundException

// System.ObjectDisposedException

// System.ObjectDisposedException
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Byte[]
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


// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m6A0E7FE9DF9AE6C4BEE58611CB55F64FC3D79052_gshared (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.VoidValueTypeParameter,System.VoidValueTypeParameter>::get_CompletedSynchronously()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskToAsyncInfoAdapter_4_get_CompletedSynchronously_m1863F9217967EF4150D95DEB6880752380BE2E1A_gshared (TaskToAsyncInfoAdapter_4_tD4A410D665454F797F89C76CF816D5A006A43620* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.VoidValueTypeParameter,System.VoidValueTypeParameter>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskToAsyncInfoAdapter_4_get_Task_m484FEB8B96FAC6ED1918E2AAC89057F33C30BA60_gshared (TaskToAsyncInfoAdapter_4_tD4A410D665454F797F89C76CF816D5A006A43620* __this, const RuntimeMethod* method) ;
// System.Threading.CancellationTokenSource System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.VoidValueTypeParameter,System.VoidValueTypeParameter>::get_CancelTokenSource()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* TaskToAsyncInfoAdapter_4_get_CancelTokenSource_m8D55A6E3369CE9C20D10F59C66B835338DF0D25E_gshared_inline (TaskToAsyncInfoAdapter_4_tD4A410D665454F797F89C76CF816D5A006A43620* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.AsyncInfoToTaskBridge`1<System.VoidValueTypeParameter>::.ctor(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncInfoToTaskBridge_1__ctor_m8FABCFD55BE870775D720E8E32FAF1C75EE30E17_gshared (AsyncInfoToTaskBridge_1_t3F837B3047E80D2A3A6A19CB1CA845D924B9B44D* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.AsyncInfoToTaskBridge`1<System.VoidValueTypeParameter>::RegisterForCancellation(Windows.Foundation.IAsyncInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncInfoToTaskBridge_1_RegisterForCancellation_mE11505DDE53B9CB26612D9B0926828E0CE9D4F8E_gshared (AsyncInfoToTaskBridge_1_t3F837B3047E80D2A3A6A19CB1CA845D924B9B44D* __this, RuntimeObject* ___0_asyncInfo, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<System.VoidValueTypeParameter>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_tB82A632CF7C85E91A9F7491058C7BDF8F744E211* TaskCompletionSource_1_get_Task_m9B716A966057DE59BCF359AED609AEDA36EBECBE_gshared_inline (TaskCompletionSource_1_t2EED03A6AEF435DC304FDCC21ACC7EF6EBED79E7* __this, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.TaskToAsyncInfoAdapter`4<System.Object,System.Object,System.VoidValueTypeParameter,System.VoidValueTypeParameter>::GetResultsInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VoidValueTypeParameter_t2A6A9B3BB1BA26C930A8F73CC53A63192C124F4C TaskToAsyncInfoAdapter_4_GetResultsInternal_mF6554FE3C1DEB51E2C3C446243EFC2537BE639A7_gshared (TaskToAsyncInfoAdapter_4_tD4A410D665454F797F89C76CF816D5A006A43620* __this, const RuntimeMethod* method) ;
// System.Int32 System.ArraySegment`1<System.Byte>::get_Offset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) ;
// T[] System.ArraySegment`1<System.Byte>::get_Array()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) ;
// System.Void Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.Object,System.UInt32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationWithProgressCompletedHandler_2__ctor_m595DF0D751AF2DB18D1E41EEAC49A11F77E87D32_gshared (AsyncOperationWithProgressCompletedHandler_2_t76CDBC511557B0E87C4033A92975BBFDD28CC57F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationWithProgressCompletedHandler_2__ctor_m14725DFB9E0EBE8C71B482E21D8C7DF835C5FAD7_gshared (AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationCompletedHandler_1__ctor_m042D4610F2555E099ECE66E556C6121BFDB1266F_gshared (AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress> System.Runtime.InteropServices.WindowsRuntime.AsyncInfo::CreateCompletedOperation<System.Object,System.UInt32>(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncInfo_CreateCompletedOperation_TisRuntimeObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m8F863BBF81E483469FCE7535C451272FCC642EF3_gshared (RuntimeObject* ___0_synchronousResult, const RuntimeMethod* method) ;
// Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress> System.Runtime.InteropServices.WindowsRuntime.AsyncInfo::CreateFaultedOperation<System.Object,System.UInt32>(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncInfo_CreateFaultedOperation_TisRuntimeObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m0F19A18A1FF06ECD956BFA800EA4E25167BB482B_gshared (Exception_t* ___0_error, const RuntimeMethod* method) ;
// System.Void System.Func`3<System.Threading.CancellationToken,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_3__ctor_m5DD243D0EFB8C53C49761475675244E4D8044C2C_gshared (Func_3_t136D2A34659708AF07F81A852FD6AB4258A1ADD1* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress> System.Runtime.InteropServices.WindowsRuntime.AsyncInfo::Run<System.Object,System.UInt32>(System.Func`3<System.Threading.CancellationToken,System.IProgress`1<TProgress>,System.Threading.Tasks.Task`1<TResult>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncInfo_Run_TisRuntimeObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m75D0453576373642387A8739216E59D14E02A607_gshared (Func_3_t617418B3C4A5DD62E4F65335D8B8219A01CDC912* ___0_taskProvider, const RuntimeMethod* method) ;
// Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress> System.Runtime.InteropServices.WindowsRuntime.AsyncInfo::Run<System.UInt32,System.UInt32>(System.Func`3<System.Threading.CancellationToken,System.IProgress`1<TProgress>,System.Threading.Tasks.Task`1<TResult>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncInfo_Run_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mA43421DA084D5E390EBDED0FE707689FF161AEE0_gshared (Func_3_t336F4190B9586A5D924C832BF5F023727A04707D* ___0_taskProvider, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Threading.CancellationToken,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m031FFE054AC916D9042F6212B75C1CCD0084C1A2_gshared (Func_2_t63A605CFD3E127FF85B2D60C8B97B6BF49E31634* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// Windows.Foundation.IAsyncOperation`1<TResult> System.Runtime.InteropServices.WindowsRuntime.AsyncInfo::Run<System.Boolean>(System.Func`2<System.Threading.CancellationToken,System.Threading.Tasks.Task`1<TResult>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncInfo_Run_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF3F4B81C8AC925547AE45FFF5A42D5D96DFC0D25_gshared (Func_2_t6B60A4875CD5D79B29837A45D46D91F7128AA5C3* ___0_taskProvider, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tB607A35AD145FE4406070D15E921A3F6FA68C63C_mD8ADCB15E0DA90FE4565340C85A67D11156DFAC7_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tB607A35AD145FE4406070D15E921A3F6FA68C63C* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<TResult> System.Threading.Tasks.Task`1<System.Int32>::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_1_t5186C81524388C1718E9AC37792D8771A443417A Task_1_ConfigureAwait_m8203F4D13209C12845066A383E5B850D0486B209_gshared (Task_1_t4C228DE57804012969575431CFF12D57C875552D* __this, bool ___0_continueOnCapturedContext, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Int32>::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80 ConfiguredTaskAwaitable_1_GetAwaiter_m7A77B1981FEC19CC7E1570EDC3F16AC5C14B4439_gshared_inline (ConfiguredTaskAwaitable_1_t5186C81524388C1718E9AC37792D8771A443417A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_get_IsCompleted_mD70263ED42C8E379EE20DBC2F218C3E629B4B4D3_gshared (ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>,System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80_TisU3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tB607A35AD145FE4406070D15E921A3F6FA68C63C_m9936741FC259A7FB9718D3730B48A6310A06CD26_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80* ___0_awaiter, U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tB607A35AD145FE4406070D15E921A3F6FA68C63C* ___1_stateMachine, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConfiguredTaskAwaiter_GetResult_mF1FF6CBD66A3F581D413793BA8C2AF58B707D9CC_gshared (ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_t8FB785F8228EA6285573F7790C8F8A3CDEEA7CD2 AsyncTaskMethodBuilder_1_Create_m87F9D91A42876EB5F19F155C2BF170FA6DD06B57_gshared (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::Start<System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__0>d>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t03D234E0E36C92DA9A5CA3811A6B2E30D9639AF2_mB199C3DEC061F88605F35CAFD88E6C1295B3025C_gshared (AsyncTaskMethodBuilder_1_t8FB785F8228EA6285573F7790C8F8A3CDEEA7CD2* __this, U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t03D234E0E36C92DA9A5CA3811A6B2E30D9639AF2* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t9BFF20A5BC78A3DB3701691B789BBBFB88555060* AsyncTaskMethodBuilder_1_get_Task_mE69A021EF16494D0E3684C697F4948865EF7BEDA_gshared (AsyncTaskMethodBuilder_1_t8FB785F8228EA6285573F7790C8F8A3CDEEA7CD2* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::Start<System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__1>d>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t15BC749CED41367E2893FD2B368726119BD8EDA2_m48B0345C032F514709701DDCD0FD52267D6F6450_gshared (AsyncTaskMethodBuilder_1_t8FB785F8228EA6285573F7790C8F8A3CDEEA7CD2* __this, U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t15BC749CED41367E2893FD2B368726119BD8EDA2* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__0>d>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t03D234E0E36C92DA9A5CA3811A6B2E30D9639AF2_m32DB4E2BD524F293AC0379E6D347EC091FF8A90E_gshared (AsyncTaskMethodBuilder_1_t8FB785F8228EA6285573F7790C8F8A3CDEEA7CD2* __this, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* ___0_awaiter, U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t03D234E0E36C92DA9A5CA3811A6B2E30D9639AF2* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m62045F0DC88FCFFAE8B54C1A9C36373187D21A13_gshared (AsyncTaskMethodBuilder_1_t8FB785F8228EA6285573F7790C8F8A3CDEEA7CD2* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m5041801AE00206CAADE10C105F2F580E0CAC659F_gshared (AsyncTaskMethodBuilder_1_t8FB785F8228EA6285573F7790C8F8A3CDEEA7CD2* __this, uint32_t ___0_result, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m4F4BB17D6A5F9922EBDAE1ECEF9DBE6945E70DA9_gshared (AsyncTaskMethodBuilder_1_t8FB785F8228EA6285573F7790C8F8A3CDEEA7CD2* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__1>d>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t15BC749CED41367E2893FD2B368726119BD8EDA2_m0F8066B387E3646E4696CFD624C11C2041D7C4A7_gshared (AsyncTaskMethodBuilder_1_t8FB785F8228EA6285573F7790C8F8A3CDEEA7CD2* __this, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* ___0_awaiter, U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t15BC749CED41367E2893FD2B368726119BD8EDA2* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA AsyncTaskMethodBuilder_1_Create_mA86694527610A40A01A943B16F0ECDDD8F00982D_gshared (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Start<System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0/<<FlushAsync_AbstractStream>b__0>d>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_tCAE4779681542A3A44DA232D516892B2CFB4DC34_m1797CF010076782E1F6756123A031313EF8D6611_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_tCAE4779681542A3A44DA232D516892B2CFB4DC34* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0/<<FlushAsync_AbstractStream>b__0>d>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_tCAE4779681542A3A44DA232D516892B2CFB4DC34_mC604299296C2DBE4678EA7BF22562AC6BA10526A_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* ___0_awaiter, U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_tCAE4779681542A3A44DA232D516892B2CFB4DC34* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, bool ___0_result, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8_gshared (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionalWeakTable_2_TryGetValue_mA6697354DA1D2A76999FFDCC072C62AC5C364124_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateValueCallback__ctor_mDBD11BE5B28EC0300CF9FE05ADB688420B83703A_gshared (CreateValueCallback_t85D075DDCAD202B428EC47723590605681FE2BD1* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// TValue System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::GetValue(TKey,System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConditionalWeakTable_2_GetValue_mD02297B46B37D3AF2884B5BD1B6A74C563F0DC42_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___0_key, CreateValueCallback_t85D075DDCAD202B428EC47723590605681FE2BD1* ___1_createValueCallback, const RuntimeMethod* method) ;
// TWinRtStream System.IO.WinRtToNetFxStreamAdapter::GetWindowsRuntimeStream<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WinRtToNetFxStreamAdapter_GetWindowsRuntimeStream_TisRuntimeObject_mD5C79C84E5B20F3841E83C7AF833EDEBF1A9B2BA_gshared (WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalWeakTable_2__ctor_m853F59C8991DABC257AA9EE373CF4061CDD53E94_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, const RuntimeMethod* method) ;
// TWinRtStream System.IO.WinRtToNetFxStreamAdapter::EnsureNotDisposed<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisRuntimeObject_m15959F0CE1C57895A3567BEBFB0E6E5359722EC5_gshared (WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.WindowsRuntimeSystemExtensions::AsTask<System.UInt32,System.UInt32>(Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t9BFF20A5BC78A3DB3701691B789BBBFB88555060* WindowsRuntimeSystemExtensions_AsTask_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m06B407572D6562F6F155E1B0A322B1AE1B5E7D0E_gshared (RuntimeObject* ___0_source, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.WindowsRuntimeSystemExtensions::AsTask<System.Boolean>(Windows.Foundation.IAsyncOperation`1<TResult>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* WindowsRuntimeSystemExtensions_AsTask_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAFEA206F914571AA59814865AAAE5729B5572B5A_gshared (RuntimeObject* ___0_source, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019 AsyncTaskMethodBuilder_1_Create_m0E49F68E6F39F0BD87C360F456EBC20310B732BE_gshared (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::Start<System.IO.WinRtToNetFxStreamAdapter/<ReadAsyncInternal>d__43>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CReadAsyncInternalU3Ed__43_t30E8CDC69A0B1E1AE4981CFFD05F1CF764DD6968_m13E673E00BEFF7E47A59726BACC49256CB40AB26_gshared (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, U3CReadAsyncInternalU3Ed__43_t30E8CDC69A0B1E1AE4981CFFD05F1CF764DD6968* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* AsyncTaskMethodBuilder_1_get_Task_m2DCDBC59910811D107353C5752AD58B28C2D97FE_gshared (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.WindowsRuntimeSystemExtensions::AsTask<System.Object,System.UInt32>(Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* WindowsRuntimeSystemExtensions_AsTask_TisRuntimeObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD349CCAA8004E42C5A3179EFAE38D9390CF356AE_gshared (RuntimeObject* ___0_source, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<TResult> System.Threading.Tasks.Task`1<System.Object>::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_1_t97C129EA63015240E6F9E767F4A120CC9122FEF8 Task_1_ConfigureAwait_m9D6420C859925B7C250DED7586DD770C91632070_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, bool ___0_continueOnCapturedContext, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Object>::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2 ConfiguredTaskAwaitable_1_GetAwaiter_m10364C3B0A904803E890B2D75674665F986BDAB2_gshared_inline (ConfiguredTaskAwaitable_1_t97C129EA63015240E6F9E767F4A120CC9122FEF8* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_get_IsCompleted_mD6243A7544181F96816A5F81459F4B66908ADB5E_gshared (ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>,System.IO.WinRtToNetFxStreamAdapter/<ReadAsyncInternal>d__43>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2_TisU3CReadAsyncInternalU3Ed__43_t30E8CDC69A0B1E1AE4981CFFD05F1CF764DD6968_m310F6409BEC2B7D94533A85176AB99A84736D124_gshared (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2* ___0_awaiter, U3CReadAsyncInternalU3Ed__43_t30E8CDC69A0B1E1AE4981CFFD05F1CF764DD6968* ___1_stateMachine, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConfiguredTaskAwaiter_GetResult_m00ABE5C46A983C38086438B7A7CB2C62296B3383_gshared (ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mB7C693CAA9243017E03D801A487E0EA9B6AAD575_gshared (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mC4BAC830514CDB105730FF11F7744A4424A4009B_gshared (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, int32_t ___0_result, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_mFA173982D2C309A46F4285F60DC4FE0DC659F32C_gshared (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;

// System.Double Windows.Foundation.Point::get_X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Point_get_X_mAC668FF9BEC8F6D62D6DDC90567E405F6475F516 (Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* __this, const RuntimeMethod* method) ;
// System.Double Windows.Foundation.Point::get_Y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Point_get_Y_mE07C0D23EC483956CD4BC17D82DF0A3E9A68519F (Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* __this, const RuntimeMethod* method) ;
// System.String Windows.Foundation.Point::ConvertToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Point_ConvertToString_m0DC34AF9991926CE7D4D79FF0517B342B2F5D7EF (Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
// System.String Windows.Foundation.Point::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Point_ToString_mD92EE026CA4B0524D7122A4C9D30CA4A1E0B808F (Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* __this, const RuntimeMethod* method) ;
// System.String Windows.Foundation.Point::System.IFormattable.ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Point_System_IFormattable_ToString_m05AA01B5C1E1FEB8C2A0A489247E6D9CC7E73C8F (Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
// System.Char Windows.Foundation.TokenizerHelper::GetNumericListSeparator(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar TokenizerHelper_GetNumericListSeparator_m4871D4F3FC86E6FCB24A4954FCC75AE60284CE86 (RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mF8E53122BE8F0F617357DFB75C3912D1242DE263 (RuntimeObject* ___0_provider, String_t* ___1_format, RuntimeObject* ___2_arg0, RuntimeObject* ___3_arg1, RuntimeObject* ___4_arg2, const RuntimeMethod* method) ;
// System.Boolean Windows.Foundation.Point::op_Equality(Windows.Foundation.Point,Windows.Foundation.Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Point_op_Equality_m33D33491E850D700F297C2B13B4F1343299603B5 (Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18 ___0_point1, Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18 ___1_point2, const RuntimeMethod* method) ;
// System.Boolean Windows.Foundation.Point::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Point_Equals_mC7D88653F9E85729F692CBA388FF2E182C3D217A (Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) ;
// System.Int32 System.Double::GetHashCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline (double* __this, const RuntimeMethod* method) ;
// System.Int32 Windows.Foundation.Point::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Point_GetHashCode_m6E49F6C60648744F723EBE490838421732F67368 (Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* __this, const RuntimeMethod* method) ;
// System.Double Windows.Foundation.Rect::get_X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rect_get_X_mD53DE44C127855D2EEE420F1EF777FEDA2011606 (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, const RuntimeMethod* method) ;
// System.Double Windows.Foundation.Rect::get_Y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rect_get_Y_m5C69D6C5901069AB84553C51AEDD94096988053E (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, const RuntimeMethod* method) ;
// System.Double Windows.Foundation.Rect::get_Width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rect_get_Width_m9F80175790EF10CDDBC216C3E9434D936D1B12B2 (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, const RuntimeMethod* method) ;
// System.Double Windows.Foundation.Rect::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rect_get_Height_m0E800E01DB6AB38F617A715FF725E5E691A7712E (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, const RuntimeMethod* method) ;
// System.Boolean Windows.Foundation.Rect::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_get_IsEmpty_mA4E8E88591999DF4390CDB167A38392AA4F922CF (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, const RuntimeMethod* method) ;
// System.String Windows.Foundation.Rect::ConvertToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Rect_ConvertToString_m76A88C92773CF34913735C03618E9A7EF248C8B0 (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
// System.String Windows.Foundation.Rect::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Rect_ToString_m575A0803BF911384D5067E59D3735BEAADB38E79 (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, const RuntimeMethod* method) ;
// System.String Windows.Foundation.Rect::System.IFormattable.ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Rect_System_IFormattable_ToString_mBDA6BC5865066A42E190F9F02E106C3C59DDDAC4 (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75 (RuntimeObject* ___0_provider, String_t* ___1_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, const RuntimeMethod* method) ;
// System.Boolean Windows.Foundation.Rect::op_Equality(Windows.Foundation.Rect,Windows.Foundation.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_op_Equality_m3549FFF5B7DC54E7376C0F93F2951D97466ECF34 (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48 ___0_rect1, Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48 ___1_rect2, const RuntimeMethod* method) ;
// System.Boolean Windows.Foundation.Rect::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_Equals_m6AD03C1D21160F8EC6CF7D4976FFBD1DEB620F28 (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) ;
// System.Int32 Windows.Foundation.Rect::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rect_GetHashCode_m5123E2AC802F26FEE118D65606BC3F1E3586F561 (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, const RuntimeMethod* method) ;
// System.Double Windows.Foundation.Size::get_Width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Size_get_Width_m74FFF679A5ADEB42DD824E74ACA768528013B9FE (Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* __this, const RuntimeMethod* method) ;
// System.Double Windows.Foundation.Size::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Size_get_Height_mD0F7CCD33744D910C1A649C10405B305A653C438 (Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* __this, const RuntimeMethod* method) ;
// System.Boolean Windows.Foundation.Size::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Size_get_IsEmpty_m233BF3475EAD36A1EF8D7250E152DDD8869DEDBD (Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* __this, const RuntimeMethod* method) ;
// System.Boolean Windows.Foundation.Size::Equals(Windows.Foundation.Size,Windows.Foundation.Size)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Size_Equals_m66FBC9547822C931D7BD48CDE633BD8E1A939C42 (Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05 ___0_size1, Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05 ___1_size2, const RuntimeMethod* method) ;
// System.Boolean Windows.Foundation.Size::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Size_Equals_m99B137315F21F8D280C7DCA393C49CAE375CB9BE (Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) ;
// System.Int32 Windows.Foundation.Size::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Size_GetHashCode_m04D8F41A1214F62E428C5009BEDE49D7E320E720 (Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* __this, const RuntimeMethod* method) ;
// System.Boolean System.Double::Equals(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_Equals_mAB526D98719C44EA42107A297B23A739F2E14138 (double* __this, double ___0_obj, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.String Windows.Foundation.Size::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Size_ToString_m8DF428BA923955EFDBF12C368AFCB2CFA0D6C919 (Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* __this, const RuntimeMethod* method) ;
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::GetInstance(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* NumberFormatInfo_GetInstance_m705987E5E7D3E5EC5C5DD2D088FBC9BCBA0FC31F (RuntimeObject* ___0_formatProvider, const RuntimeMethod* method) ;
// System.String System.Globalization.NumberFormatInfo::get_NumberDecimalSeparator()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_NumberDecimalSeparator_m7413FA8739F3FA6F5D61B54331DBF3232FC6BFC7_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4 (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Threading.CancellationTokenRegistration System.Threading.CancellationToken::Register(System.Action`1<System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 CancellationToken_Register_m3FF09C47C4EE3D6677023BE242DF174594B81859 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_callback, RuntimeObject* ___1_state, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Threading.Tasks.Task,System.Object>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mCB8799E12AB6CA46E55E300245D89C3B2A3955E9 (Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_m6A0E7FE9DF9AE6C4BEE58611CB55F64FC3D79052_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Threading.CancellationToken System.Threading.CancellationToken::get_None()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53 (const RuntimeMethod* method) ;
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::get_Default()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline (const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::ContinueWith(System.Action`2<System.Threading.Tasks.Task,System.Object>,System.Object,System.Threading.CancellationToken,System.Threading.Tasks.TaskContinuationOptions,System.Threading.Tasks.TaskScheduler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_ContinueWith_m332FAFE0E12D9D53BEEDE60B086EB4816462834F (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB* ___0_continuationAction, RuntimeObject* ___1_state, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, int32_t ___3_continuationOptions, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___4_scheduler, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.WindowsRuntimeSystemExtensions::AsTask(Windows.Foundation.IAsyncAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WindowsRuntimeSystemExtensions_AsTask_mB8E6965E9E677F434F657CA710C845F1F1CF1871 (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.WindowsRuntimeSystemExtensions::AsTask(Windows.Foundation.IAsyncAction,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WindowsRuntimeSystemExtensions_AsTask_mF9FE6AC518F897C24E4019925AE17ACD9247BF71 (RuntimeObject* ___0_source, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncActionCompletedHandler,System.VoidReferenceTypeParameter,System.VoidValueTypeParameter,System.VoidValueTypeParameter>::get_CompletedSynchronously()
inline bool TaskToAsyncInfoAdapter_4_get_CompletedSynchronously_m91F86C3DFD94FF545C2ABFF103F41FA07C0F53F1 (TaskToAsyncInfoAdapter_4_t253617E9AD8E16A1018418DBCA9ECB3B1595EED9* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskToAsyncInfoAdapter_4_t253617E9AD8E16A1018418DBCA9ECB3B1595EED9*, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_CompletedSynchronously_m1863F9217967EF4150D95DEB6880752380BE2E1A_gshared)(__this, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncActionCompletedHandler,System.VoidReferenceTypeParameter,System.VoidValueTypeParameter,System.VoidValueTypeParameter>::get_Task()
inline Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskToAsyncInfoAdapter_4_get_Task_mB35A83F4B62D6A9F1A10D59BC2869EF7C8E535E9 (TaskToAsyncInfoAdapter_4_t253617E9AD8E16A1018418DBCA9ECB3B1595EED9* __this, const RuntimeMethod* method)
{
	return ((  Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* (*) (TaskToAsyncInfoAdapter_4_t253617E9AD8E16A1018418DBCA9ECB3B1595EED9*, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_Task_m484FEB8B96FAC6ED1918E2AAC89057F33C30BA60_gshared)(__this, method);
}
// System.Boolean System.Threading.Tasks.Task::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.CancellationToken::get_CanBeCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_get_CanBeCanceled_mC3751330B171DB14B70B9BAAD90A7D098A2309EC (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, const RuntimeMethod* method) ;
// System.Threading.CancellationTokenSource System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncActionCompletedHandler,System.VoidReferenceTypeParameter,System.VoidValueTypeParameter,System.VoidValueTypeParameter>::get_CancelTokenSource()
inline CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* TaskToAsyncInfoAdapter_4_get_CancelTokenSource_m81CD9E731A092B7BF96E7A62B0F442EC8999ED16_inline (TaskToAsyncInfoAdapter_4_t253617E9AD8E16A1018418DBCA9ECB3B1595EED9* __this, const RuntimeMethod* method)
{
	return ((  CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* (*) (TaskToAsyncInfoAdapter_4_t253617E9AD8E16A1018418DBCA9ECB3B1595EED9*, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_get_CancelTokenSource_m8D55A6E3369CE9C20D10F59C66B835338DF0D25E_gshared_inline)(__this, method);
}
// System.Void System.WindowsRuntimeSystemExtensions::ConcatenateCancelTokens(System.Threading.CancellationToken,System.Threading.CancellationTokenSource,System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeSystemExtensions_ConcatenateCancelTokens_m3133AB9959425B6E90C6C15E896B41053ACD051E (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_source, CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___1_sink, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___2_concatenationLifetime, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::get_CompletedTask()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline (const RuntimeMethod* method) ;
// System.Exception System.WindowsRuntimeSystemExtensions::AttachRestrictedErrorInfo(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* WindowsRuntimeSystemExtensions_AttachRestrictedErrorInfo_mDDF5CD061CF17571ADA590A19F8C391BCDB24271 (Exception_t* ___0_e, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::FromException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_FromException_m7E03FBDDCA95F6577A18B1D1F708738734F63195 (Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Boolean System.Threading.CancellationToken::get_IsCancellationRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.CancellationToken::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationToken__ctor_m5DAD339D4A9DEF9962B7EF1E30564BADC78E9BD6 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, bool ___0_canceled, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::FromCanceled(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_FromCanceled_m2C682C247C1D89F6DD5A186BBBFEC1544921308E (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.AsyncInfoToTaskBridge`1<System.VoidValueTypeParameter>::.ctor(System.Threading.CancellationToken)
inline void AsyncInfoToTaskBridge_1__ctor_m8FABCFD55BE870775D720E8E32FAF1C75EE30E17 (AsyncInfoToTaskBridge_1_t3F837B3047E80D2A3A6A19CB1CA845D924B9B44D* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method)
{
	((  void (*) (AsyncInfoToTaskBridge_1_t3F837B3047E80D2A3A6A19CB1CA845D924B9B44D*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))AsyncInfoToTaskBridge_1__ctor_m8FABCFD55BE870775D720E8E32FAF1C75EE30E17_gshared)(__this, ___0_cancellationToken, method);
}
// System.Void Windows.Foundation.AsyncActionCompletedHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncActionCompletedHandler__ctor_mF61474211F61B3BF75C11C5E012E1717D87BCFE4 (AsyncActionCompletedHandler_tC851091B8156847FF3756ADAC162533166114B39* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.AsyncInfoToTaskBridge`1<System.VoidValueTypeParameter>::RegisterForCancellation(Windows.Foundation.IAsyncInfo)
inline void AsyncInfoToTaskBridge_1_RegisterForCancellation_mE11505DDE53B9CB26612D9B0926828E0CE9D4F8E (AsyncInfoToTaskBridge_1_t3F837B3047E80D2A3A6A19CB1CA845D924B9B44D* __this, RuntimeObject* ___0_asyncInfo, const RuntimeMethod* method)
{
	((  void (*) (AsyncInfoToTaskBridge_1_t3F837B3047E80D2A3A6A19CB1CA845D924B9B44D*, RuntimeObject*, const RuntimeMethod*))AsyncInfoToTaskBridge_1_RegisterForCancellation_mE11505DDE53B9CB26612D9B0926828E0CE9D4F8E_gshared)(__this, ___0_asyncInfo, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<System.VoidValueTypeParameter>::get_Task()
inline Task_1_tB82A632CF7C85E91A9F7491058C7BDF8F744E211* TaskCompletionSource_1_get_Task_m9B716A966057DE59BCF359AED609AEDA36EBECBE_inline (TaskCompletionSource_1_t2EED03A6AEF435DC304FDCC21ACC7EF6EBED79E7* __this, const RuntimeMethod* method)
{
	return ((  Task_1_tB82A632CF7C85E91A9F7491058C7BDF8F744E211* (*) (TaskCompletionSource_1_t2EED03A6AEF435DC304FDCC21ACC7EF6EBED79E7*, const RuntimeMethod*))TaskCompletionSource_1_get_Task_m9B716A966057DE59BCF359AED609AEDA36EBECBE_gshared_inline)(__this, method);
}
// System.Void System.WindowsRuntimeSystemExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m631504CD719194B811BEC204BAFE9BBB734B3163 (U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.CancellationTokenSource::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationTokenSource_Cancel_m64C48B9DCD25A9EBEC8DC170C79441564BC3755B (CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.CancellationTokenRegistration::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationTokenRegistration_Dispose_m9EAF1228573E8278DDF7A3BEB5EE0E18DA6DC0E1 (CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
// System.UInt32 System.Threading.Tasks.AsyncInfoIdGenerator::CreateNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AsyncInfoIdGenerator_CreateNext_m932AB52C3010D5CA99C5A71D842D95D1902381B2 (const RuntimeMethod* method) ;
// System.Int32 System.Threading.Interlocked::CompareExchange(System.Int32&,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717 (int32_t* ___0_location1, int32_t ___1_value, int32_t ___2_comparand, const RuntimeMethod* method) ;
// System.Void System.Random::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_mFB386F0C0ED85F26CD069C3527052B81878A2F1E (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* __this, int32_t ___0_Seed, const RuntimeMethod* method) ;
// System.Runtime.ExceptionServices.ExceptionDispatchInfo System.Runtime.ExceptionServices.ExceptionDispatchInfo::Capture(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803 (Exception_t* ___0_source, const RuntimeMethod* method) ;
// System.Void System.Threading.SendOrPostCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37 (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.ExceptionDispatchHelper::ThrowAsync(System.Exception,System.Threading.SynchronizationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDispatchHelper_ThrowAsync_m7294BE2E3C7CC75168DD9784E42CC4E91498508D (Exception_t* ___0_exception, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___1_targetContext, const RuntimeMethod* method) ;
// System.Void System.Threading.SynchronizationContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SynchronizationContext__ctor_m37D995A90765D897A69B7767A14E70E8F1845532 (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.ExceptionServices.ExceptionDispatchInfo::Throw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330 (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.ExceptionDispatchHelper/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD160B80D5A454A15058602D7D874F5BF944B164F (U3CU3Ec_t474B044207AC3819954D9AE072ACC1AEACA8B5CE* __this, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncActionCompletedHandler,System.VoidReferenceTypeParameter,System.VoidValueTypeParameter,System.VoidValueTypeParameter>::GetResultsInternal()
inline VoidValueTypeParameter_t2A6A9B3BB1BA26C930A8F73CC53A63192C124F4C TaskToAsyncInfoAdapter_4_GetResultsInternal_m6F1928D5886F367904697C268A4E4AC9CA33EA6F (TaskToAsyncInfoAdapter_4_t253617E9AD8E16A1018418DBCA9ECB3B1595EED9* __this, const RuntimeMethod* method)
{
	return ((  VoidValueTypeParameter_t2A6A9B3BB1BA26C930A8F73CC53A63192C124F4C (*) (TaskToAsyncInfoAdapter_4_t253617E9AD8E16A1018418DBCA9ECB3B1595EED9*, const RuntimeMethod*))TaskToAsyncInfoAdapter_4_GetResultsInternal_mF6554FE3C1DEB51E2C3C446243EFC2537BE639A7_gshared)(__this, method);
}
// System.Void Windows.Foundation.AsyncActionCompletedHandler::Invoke(Windows.Foundation.IAsyncAction,Windows.Foundation.AsyncStatus)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncActionCompletedHandler_Invoke_mC17CE275AEA1DD37BD4F15849A18C43C11BB880C_inline (AsyncActionCompletedHandler_tC851091B8156847FF3756ADAC162533166114B39* __this, RuntimeObject* ___0_asyncInfo, int32_t ___1_asyncStatus, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer__ctor_m4AFA5F9564839D60895E35E00FBBD997399C8528 (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::RoGetBufferMarshaler(System.Runtime.InteropServices.IMarshal&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsRuntimeBuffer_RoGetBufferMarshaler_mCA6584CE743CE14250AE58C76F5465C5A4867019 (RuntimeObject** ___0_bufferMarshalerPtr, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Exception::SetErrorCode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception_SetErrorCode_m4EDE5390355B87C0E533678B7BD03EDF4ECDDE25 (Exception_t* __this, int32_t ___0_hr, const RuntimeMethod* method) ;
// System.Void System.NullReferenceException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mA41317A57F5C1C0E3F59C7EB25ABD484564B23D4 (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m7D5EA9EB4644D419A13488168B8695B3630B9683 (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, String_t* ___0_message, Exception_t* ___1_inner, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC (RuntimeObject* ___0_value, int32_t ___1_type, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.GCHandle::AddrOfPinnedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.IntPtr System.IntPtr::op_Addition(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A (intptr_t ___0_pointer, int32_t ___1_offset, const RuntimeMethod* method) ;
// System.IntPtr System.Threading.Interlocked::CompareExchange(System.IntPtr&,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Interlocked_CompareExchange_m7AC708A0F5F20CADA50F64E6E2F34262D3BC45C6 (intptr_t* ___0_location1, intptr_t ___1_value, intptr_t ___2_comparand, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___0_value, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Byte* System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::PinUnderlyingData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* WindowsRuntimeBuffer_PinUnderlyingData_mC044FE299E97DB7BFB74BBD4804BF8BA00BADF38 (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* __this, const RuntimeMethod* method) ;
// System.Void System.IntPtr::.ctor(System.Void*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::EnsureHasMarshalProxy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_EnsureHasMarshalProxy_m4A245D3DA9E93B1475B8AE163D14B948005AF275 (const RuntimeMethod* method) ;
// Windows.Storage.Streams.IBuffer System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::AsBuffer(System.Byte[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowsRuntimeBufferExtensions_AsBuffer_mDF46860EDFDC37E0F4052AF67A11A6FBC4150890 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_source, int32_t ___1_offset, int32_t ___2_length, int32_t ___3_capacity, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::.ctor(System.Byte[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer__ctor_mE5DB313A9BAD6A0EFC98994A94B71AB976A6741A (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, int32_t ___1_offset, int32_t ___2_length, int32_t ___3_capacity, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::CopyTo(Windows.Storage.Streams.IBuffer,System.UInt32,Windows.Storage.Streams.IBuffer,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBufferExtensions_CopyTo_mBA9D132D89ECE053390B9679C59EC679A238D5F9 (RuntimeObject* ___0_source, uint32_t ___1_sourceIndex, RuntimeObject* ___2_destination, uint32_t ___3_destinationIndex, uint32_t ___4_count, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::TryGetUnderlyingData(Windows.Storage.Streams.IBuffer,System.Byte[]&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsRuntimeBufferExtensions_TryGetUnderlyingData_m81061F2A3D08AECCF3DAB66F6F00BDD143F2DD57 (RuntimeObject* ___0_buffer, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** ___1_underlyingDataArray, int32_t* ___2_underlyingDataArrayStartOffset, const RuntimeMethod* method) ;
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358 (RuntimeArray* ___0_src, int32_t ___1_srcOffset, RuntimeArray* ___2_dst, int32_t ___3_dstOffset, int32_t ___4_count, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::GetPointerAtOffset(Windows.Storage.Streams.IBuffer,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t WindowsRuntimeBufferExtensions_GetPointerAtOffset_mBAD4D95E0FC18FFF6749956815FF28BFF9124ACE (RuntimeObject* ___0_buffer, uint32_t ___1_offset, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.Byte[],System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m0FD7BFE70EE28FC67B67A6225AD58F95FEE7EB85 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_source, int32_t ___1_startIndex, intptr_t ___2_destination, int32_t ___3_length, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77 (intptr_t ___0_source, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_destination, int32_t ___2_startIndex, int32_t ___3_length, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::MemCopy(System.IntPtr,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBufferExtensions_MemCopy_m2593AF120CEA5FAB94BD6346DF85531D42CB5356 (intptr_t ___0_src, intptr_t ___1_dst, uint32_t ___2_count, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::GetUnderlyingData(System.Byte[]&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_GetUnderlyingData_mE3831B9372E5D28FEFB73E9AE11687F4D948E6E9 (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** ___0_underlyingDataArray, int32_t* ___1_underlyingDataArrayStartOffset, const RuntimeMethod* method) ;
// System.Void System.UnauthorizedAccessException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnauthorizedAccessException__ctor_mED94291A37165C0D7A5A573AE6866429DF1712F6 (UnauthorizedAccessException_t8FC1F1DE7AA62456E9E25EFDFC658A623A626791* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Int32 System.ArraySegment`1<System.Byte>::get_Offset()
inline int32_t ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, const RuntimeMethod*))ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_gshared_inline)(__this, method);
}
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
// T[] System.ArraySegment`1<System.Byte>::get_Array()
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, const RuntimeMethod*))ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_gshared_inline)(__this, method);
}
// System.Void System.IO.MemoryStream::.ctor(System.Byte[],System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_mC2A08AF3FC30A1DF60B2CFC5668637DF88B66444 (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_index, int32_t ___2_count, bool ___3_writable, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions/WindowsRuntimeBufferUnmanagedMemoryStream::.ctor(Windows.Storage.Streams.IBuffer,System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBufferUnmanagedMemoryStream__ctor_m56ED8883E99D5867E8E49F3707EB6296B6FD7780 (WindowsRuntimeBufferUnmanagedMemoryStream_t30CA79558CFD4D7E1E1AE41F7DCC9589EE2809BE* __this, RuntimeObject* ___0_sourceBuffer, uint8_t* ___1_dataPtr, const RuntimeMethod* method) ;
// System.Void System.IO.UnmanagedMemoryStream::.ctor(System.Byte*,System.Int64,System.Int64,System.IO.FileAccess)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedMemoryStream__ctor_m6B13BA44C847480F432AB75E6436D47B424B8C33 (UnmanagedMemoryStream_t83B223BCEF722E04E3AB3A7F6B73416F59BE630D* __this, uint8_t* ___0_pointer, int64_t ___1_length, int64_t ___2_capacity, int32_t ___3_access, const RuntimeMethod* method) ;
// System.IO.NetFxToWinRtStreamAdapter/StreamReadOperationOptimization System.IO.NetFxToWinRtStreamAdapter::DetermineStreamReadOptimization(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetFxToWinRtStreamAdapter_DetermineStreamReadOptimization_mF55EAFB1ED656777358BE51A2E9FB00E52CBEAD0 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) ;
// System.Void System.IO.NetFxToWinRtStreamAdapter/RandomAccessStream::.ctor(System.IO.Stream,System.IO.NetFxToWinRtStreamAdapter/StreamReadOperationOptimization)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomAccessStream__ctor_m1532372657144D192452D9D0B0E0498749A91B34 (RandomAccessStream_t26E619D7F88DBC344D0337DE719FB2702640730D* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, int32_t ___1_readOptimization, const RuntimeMethod* method) ;
// System.Void System.IO.NetFxToWinRtStreamAdapter/InputOutputStream::.ctor(System.IO.Stream,System.IO.NetFxToWinRtStreamAdapter/StreamReadOperationOptimization)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputOutputStream__ctor_mD5341531BE2594F89D2F50250FBD046BF60750C3 (InputOutputStream_t5862300BC55FC7221B062054B4F1A743E433D95B* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, int32_t ___1_readOptimization, const RuntimeMethod* method) ;
// System.Void System.IO.NetFxToWinRtStreamAdapter/InputStream::.ctor(System.IO.Stream,System.IO.NetFxToWinRtStreamAdapter/StreamReadOperationOptimization)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputStream__ctor_m48D9F27F1585B27C0E4E9A719AA1E0D046B1D832 (InputStream_t5337674C27D910998AD03237067CD14A65B18403* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, int32_t ___1_readOptimization, const RuntimeMethod* method) ;
// System.Void System.IO.NetFxToWinRtStreamAdapter/OutputStream::.ctor(System.IO.Stream,System.IO.NetFxToWinRtStreamAdapter/StreamReadOperationOptimization)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputStream__ctor_m6B51179BC5A49DE8F34C7262F9DAC4FC80DA6369 (OutputStream_t44EF2F4DE5310B5C3D243ABF0412D78134F6E7A8* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, int32_t ___1_readOptimization, const RuntimeMethod* method) ;
// System.Boolean System.IO.NetFxToWinRtStreamAdapter::CanApplyReadMemoryStreamOptimization(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetFxToWinRtStreamAdapter_CanApplyReadMemoryStreamOptimization_m70B9EECCACD84DA54357053A241DFB17DD53E98B (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) ;
// System.Void System.ObjectDisposedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48 (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* __this, String_t* ___0_objectName, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, const RuntimeMethod* method) ;
// System.IO.Stream System.IO.NetFxToWinRtStreamAdapter::EnsureNotDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* NetFxToWinRtStreamAdapter_EnsureNotDisposed_mF96B332E0313DBAECC34BD8C4623646D66C1E122 (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __this, const RuntimeMethod* method) ;
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32> System.IO.StreamOperationsImplementation::ReadAsync_MemoryStream(System.IO.Stream,Windows.Storage.Streams.IBuffer,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StreamOperationsImplementation_ReadAsync_MemoryStream_mE735436DB4E8DDBDA439345EC2A04A56285EFD56 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, RuntimeObject* ___1_buffer, uint32_t ___2_count, const RuntimeMethod* method) ;
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32> System.IO.StreamOperationsImplementation::ReadAsync_AbstractStream(System.IO.Stream,Windows.Storage.Streams.IBuffer,System.UInt32,Windows.Storage.Streams.InputStreamOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StreamOperationsImplementation_ReadAsync_AbstractStream_m6F30EB11053EE983788372A179D52D4346BF2146 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, RuntimeObject* ___1_buffer, uint32_t ___2_count, uint32_t ___3_options, const RuntimeMethod* method) ;
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32> System.IO.StreamOperationsImplementation::WriteAsync_AbstractStream(System.IO.Stream,Windows.Storage.Streams.IBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StreamOperationsImplementation_WriteAsync_AbstractStream_m5E3FEAF18F58EB5E21CA492C2AB13F9457F59665 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, RuntimeObject* ___1_buffer, const RuntimeMethod* method) ;
// Windows.Foundation.IAsyncOperation`1<System.Boolean> System.IO.StreamOperationsImplementation::FlushAsync_AbstractStream(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StreamOperationsImplementation_FlushAsync_AbstractStream_mE701CF1F7EB6513B5D18B58A56691275767D9DCC (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.IO.NetFxToWinRtStreamAdapter::ThrowCloningNotSupported(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetFxToWinRtStreamAdapter_ThrowCloningNotSupported_m7E8B9378F6721B003F1357E2B992EC6F1AF4117F (String_t* ___0_methodName, const RuntimeMethod* method) ;
// System.Void System.IO.NetFxToWinRtStreamAdapter::.ctor(System.IO.Stream,System.IO.NetFxToWinRtStreamAdapter/StreamReadOperationOptimization)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetFxToWinRtStreamAdapter__ctor_m4C98A4B0C7BE7C32300976D45A2540F476A5B914 (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, int32_t ___1_readOptimization, const RuntimeMethod* method) ;
// System.Void System.IO.NetFxToWinRtStreamAdapter::set_Size(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetFxToWinRtStreamAdapter_set_Size_m0D858B7B2DEE0B0116A14E473201B44AB92FDD80 (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __this, uint64_t ___0_value, const RuntimeMethod* method) ;
// System.Runtime.ExceptionServices.ExceptionDispatchInfo System.IO.WinRtIOHelper::NativeExceptionToIOExceptionInfo(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* WinRtIOHelper_NativeExceptionToIOExceptionInfo_mB3A83A47FB194066EB5853EEA3C94FBD0492E4EA (Exception_t* ___0_nativeException, const RuntimeMethod* method) ;
// System.Void System.Threading.ManualResetEvent::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetEvent__ctor_m361CFCF6AC28BFFF5C8790DC2B5951791A1C4CEE (ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* __this, bool ___0_initialState, const RuntimeMethod* method) ;
// System.Void System.Threading.WaitHandle::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitHandle_Dispose_m185505E6A3A6D31DEAA92725E04CAFAD3A1237C1 (WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8* __this, const RuntimeMethod* method) ;
// System.Threading.WaitHandle System.IO.StreamOperationAsyncResult::get_AsyncWaitHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8* StreamOperationAsyncResult_get_AsyncWaitHandle_m439DB1689234706AAD0A3B2433AA6F4F1054E202 (StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5* __this, const RuntimeMethod* method) ;
// System.Boolean System.IO.StreamOperationAsyncResult::CancelStreamOperation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StreamOperationAsyncResult_CancelStreamOperation_mE2076F01FA3594896984B6E58348D6CAC7E57FEF (StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5* __this, const RuntimeMethod* method) ;
// System.Exception System.Runtime.ExceptionServices.ExceptionDispatchInfo::get_SourceException()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* ExceptionDispatchInfo_get_SourceException_m981DC7F90598BE65BD4FA1A8340025A3A7CC3DBE_inline (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m63F5561BE647F655D22C8289E53A5D3A2196B668 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void System.IO.StreamOperationAsyncResult::ProcessCompletedOperation_InvalidOperationThrowHelper(System.Runtime.ExceptionServices.ExceptionDispatchInfo,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOperationAsyncResult_ProcessCompletedOperation_InvalidOperationThrowHelper_m43EFC5D374210D84BCBC38FDB13A3E3774ECEE88 (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ___0_errInfo, String_t* ___1_errMsg, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.IO.StreamOperationAsyncResult::ThrowWithIOExceptionDispatchInfo(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOperationAsyncResult_ThrowWithIOExceptionDispatchInfo_mE3F4DC492ECBE43EA92FDE9C76039241AC2D4EC0 (StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5* __this, Exception_t* ___0_e, const RuntimeMethod* method) ;
// System.Void System.Threading.Interlocked::MemoryBarrier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interlocked_MemoryBarrier_m544E79984FB21C732A4514A2EFFC126ECAA22B66 (const RuntimeMethod* method) ;
// System.Boolean System.Threading.EventWaitHandle::Set()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Set_mDF98D67F214714A9590DF82A1C51D3D851281E4D (EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* __this, const RuntimeMethod* method) ;
// System.Void System.IO.StreamOperationAsyncResult::ProcessCompletedOperation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOperationAsyncResult_ProcessCompletedOperation_m40E4883B3BAF7C60094786695F9E4A154DE3C055 (StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5* __this, const RuntimeMethod* method) ;
// System.Void System.AsyncCallback::Invoke(System.IAsyncResult)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncCallback_Invoke_mA85DEAE969B1D0FD97E934DC39439E89D7553910_inline (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* __this, RuntimeObject* ___0_ar, const RuntimeMethod* method) ;
// System.Void System.IO.StreamOperationAsyncResult::.ctor(Windows.Foundation.IAsyncInfo,System.AsyncCallback,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOperationAsyncResult__ctor_mEB14441257810BF82A855A8FA545D99A14659A05 (StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5* __this, RuntimeObject* ___0_asyncStreamOperation, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_userCompletionCallback, RuntimeObject* ___2_userAsyncStateInfo, bool ___3_processCompletedOperationInCallback, const RuntimeMethod* method) ;
// System.Void Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>::.ctor(System.Object,System.IntPtr)
inline void AsyncOperationWithProgressCompletedHandler_2__ctor_m670C4D5F2F4B1975A305F79ED95BECB45287A01F (AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D*, RuntimeObject*, intptr_t, const RuntimeMethod*))AsyncOperationWithProgressCompletedHandler_2__ctor_m595DF0D751AF2DB18D1E41EEAC49A11F77E87D32_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void System.IO.StreamReadAsyncResult::ProcessConcreteCompletedOperation(Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReadAsyncResult_ProcessConcreteCompletedOperation_m1F5E2BC6C4621FD5C5A6BB3645EA5CF092E0043D (StreamReadAsyncResult_t1F47DFA1E32A8FBC434C3B74D239D2F4888DDFBF* __this, RuntimeObject* ___0_completedOperation, int64_t* ___1_bytesCompleted, const RuntimeMethod* method) ;
// System.Void System.IO.WinRtIOHelper::EnsureResultsInUserBuffer(Windows.Storage.Streams.IBuffer,Windows.Storage.Streams.IBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRtIOHelper_EnsureResultsInUserBuffer_m38C0A807EAAB9DA37F6BB34A0A57D298CE62992E (RuntimeObject* ___0_userBuffer, RuntimeObject* ___1_resultBuffer, const RuntimeMethod* method) ;
// System.Void Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>::.ctor(System.Object,System.IntPtr)
inline void AsyncOperationWithProgressCompletedHandler_2__ctor_m14725DFB9E0EBE8C71B482E21D8C7DF835C5FAD7 (AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78*, RuntimeObject*, intptr_t, const RuntimeMethod*))AsyncOperationWithProgressCompletedHandler_2__ctor_m14725DFB9E0EBE8C71B482E21D8C7DF835C5FAD7_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void System.IO.StreamWriteAsyncResult::ProcessConcreteCompletedOperation(Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamWriteAsyncResult_ProcessConcreteCompletedOperation_mE9B9DE7E0F34981EBA08EF7F7A0037624A454CE1 (StreamWriteAsyncResult_t57A8AF219966DDDB17A8D7F1F4AC8DB8D8500693* __this, RuntimeObject* ___0_completedOperation, int64_t* ___1_bytesCompleted, const RuntimeMethod* method) ;
// System.Void Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void AsyncOperationCompletedHandler_1__ctor_m042D4610F2555E099ECE66E556C6121BFDB1266F (AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52*, RuntimeObject*, intptr_t, const RuntimeMethod*))AsyncOperationCompletedHandler_1__ctor_m042D4610F2555E099ECE66E556C6121BFDB1266F_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void System.IO.StreamFlushAsyncResult::ProcessConcreteCompletedOperation(Windows.Foundation.IAsyncOperation`1<System.Boolean>,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamFlushAsyncResult_ProcessConcreteCompletedOperation_m5ABD5DE2BAD195992CF97D067AE619FC417ACFB3 (StreamFlushAsyncResult_t04C0AAEDCD3CB5F458A11C4E275F2577786A8103* __this, RuntimeObject* ___0_completedOperation, int64_t* ___1_bytesCompleted, const RuntimeMethod* method) ;
// Windows.Storage.Streams.IBuffer System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::GetWindowsRuntimeBuffer(System.IO.MemoryStream,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowsRuntimeBufferExtensions_GetWindowsRuntimeBuffer_m4B7F32994ECCB0CD5BA38E9B77260B949478A850 (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* ___0_underlyingStream, int32_t ___1_positionInStream, int32_t ___2_length, const RuntimeMethod* method) ;
// Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress> System.Runtime.InteropServices.WindowsRuntime.AsyncInfo::CreateCompletedOperation<Windows.Storage.Streams.IBuffer,System.UInt32>(TResult)
inline RuntimeObject* AsyncInfo_CreateCompletedOperation_TisIBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD7FE1D70D2387EE8A6B5121D1C7F09FD38E45EAD (RuntimeObject* ___0_synchronousResult, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))AsyncInfo_CreateCompletedOperation_TisRuntimeObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m8F863BBF81E483469FCE7535C451272FCC642EF3_gshared)(___0_synchronousResult, method);
}
// Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress> System.Runtime.InteropServices.WindowsRuntime.AsyncInfo::CreateFaultedOperation<Windows.Storage.Streams.IBuffer,System.UInt32>(System.Exception)
inline RuntimeObject* AsyncInfo_CreateFaultedOperation_TisIBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m50310AB23A3C1EFA6CE88FC31766E6357F63F149 (Exception_t* ___0_error, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Exception_t*, const RuntimeMethod*))AsyncInfo_CreateFaultedOperation_TisRuntimeObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m0F19A18A1FF06ECD956BFA800EA4E25167BB482B_gshared)(___0_error, method);
}
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_mD1A4DBCA9CA8C623C423917C64E9BEFDC94A705B (U3CU3Ec__DisplayClass1_0_t05B790464823435BFCF2DDD9EDD15BD109799D30* __this, const RuntimeMethod* method) ;
// System.UInt32 System.Math::Min(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Math_Min_m66781C8F3800C6682369B449FFDB62FAD5E87121 (uint32_t ___0_val1, uint32_t ___1_val2, const RuntimeMethod* method) ;
// Windows.Storage.Streams.IBuffer System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::Create(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowsRuntimeBuffer_Create_m3483BEBC639FBC349AA9E45718AC11D2BF2E83B8 (int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Void System.Func`3<System.Threading.CancellationToken,System.IProgress`1<System.UInt32>,System.Threading.Tasks.Task`1<Windows.Storage.Streams.IBuffer>>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_m948C9321184EC42628031D5137CEA16610C539F0 (Func_3_tAC8FE9F123579F0F0724C2106222C88580347FC8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_3_tAC8FE9F123579F0F0724C2106222C88580347FC8*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_3__ctor_m5DD243D0EFB8C53C49761475675244E4D8044C2C_gshared)(__this, ___0_object, ___1_method, method);
}
// Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress> System.Runtime.InteropServices.WindowsRuntime.AsyncInfo::Run<Windows.Storage.Streams.IBuffer,System.UInt32>(System.Func`3<System.Threading.CancellationToken,System.IProgress`1<TProgress>,System.Threading.Tasks.Task`1<TResult>>)
inline RuntimeObject* AsyncInfo_Run_TisIBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m09FBD96A7A9CACA30EB79F6D9AA33E95E9A6F552 (Func_3_tAC8FE9F123579F0F0724C2106222C88580347FC8* ___0_taskProvider, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_3_tAC8FE9F123579F0F0724C2106222C88580347FC8*, const RuntimeMethod*))AsyncInfo_Run_TisRuntimeObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m75D0453576373642387A8739216E59D14E02A607_gshared)(___0_taskProvider, method);
}
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m3317D7C4C4D62E19B504F61FD524A1C465F246AA (U3CU3Ec__DisplayClass2_0_t6E434BA73EA5DB3511A12C0C5CF9456D30D25FC5* __this, const RuntimeMethod* method) ;
// System.Void System.Func`3<System.Threading.CancellationToken,System.IProgress`1<System.UInt32>,System.Threading.Tasks.Task`1<System.UInt32>>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_m2055F0039914A5A0ACD7CE8077100B418BBD6371 (Func_3_t336F4190B9586A5D924C832BF5F023727A04707D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_3_t336F4190B9586A5D924C832BF5F023727A04707D*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_3__ctor_m5DD243D0EFB8C53C49761475675244E4D8044C2C_gshared)(__this, ___0_object, ___1_method, method);
}
// Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress> System.Runtime.InteropServices.WindowsRuntime.AsyncInfo::Run<System.UInt32,System.UInt32>(System.Func`3<System.Threading.CancellationToken,System.IProgress`1<TProgress>,System.Threading.Tasks.Task`1<TResult>>)
inline RuntimeObject* AsyncInfo_Run_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mA43421DA084D5E390EBDED0FE707689FF161AEE0 (Func_3_t336F4190B9586A5D924C832BF5F023727A04707D* ___0_taskProvider, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_3_t336F4190B9586A5D924C832BF5F023727A04707D*, const RuntimeMethod*))AsyncInfo_Run_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mA43421DA084D5E390EBDED0FE707689FF161AEE0_gshared)(___0_taskProvider, method);
}
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m39C986939192C3E3838213D0B78807C8C88E4E70 (U3CU3Ec__DisplayClass3_0_tB7212D23536AE37D5E6EEFABD29F7A1DCCC5BFAA* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Threading.CancellationToken,System.Threading.Tasks.Task`1<System.Boolean>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mBA5135BC207552C342EEAB46EDEB68266C8DC3B9 (Func_2_t6B60A4875CD5D79B29837A45D46D91F7128AA5C3* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t6B60A4875CD5D79B29837A45D46D91F7128AA5C3*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m031FFE054AC916D9042F6212B75C1CCD0084C1A2_gshared)(__this, ___0_object, ___1_method, method);
}
// Windows.Foundation.IAsyncOperation`1<TResult> System.Runtime.InteropServices.WindowsRuntime.AsyncInfo::Run<System.Boolean>(System.Func`2<System.Threading.CancellationToken,System.Threading.Tasks.Task`1<TResult>>)
inline RuntimeObject* AsyncInfo_Run_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF3F4B81C8AC925547AE45FFF5A42D5D96DFC0D25 (Func_2_t6B60A4875CD5D79B29837A45D46D91F7128AA5C3* ___0_taskProvider, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_t6B60A4875CD5D79B29837A45D46D91F7128AA5C3*, const RuntimeMethod*))AsyncInfo_Run_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF3F4B81C8AC925547AE45FFF5A42D5D96DFC0D25_gshared)(___0_taskProvider, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Windows.Storage.Streams.IBuffer>::Create()
inline AsyncTaskMethodBuilder_1_t4102E0362C7437C556E4FEA7D535D2783F408A78 AsyncTaskMethodBuilder_1_Create_mA528202B7118D53568DC446DD648245DCD3D81CC (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t4102E0362C7437C556E4FEA7D535D2783F408A78 (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Windows.Storage.Streams.IBuffer>::Start<System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tB607A35AD145FE4406070D15E921A3F6FA68C63C_mD6D8B6F50709BBA2608087AB2D7177FE7AF0E2BE (AsyncTaskMethodBuilder_1_t4102E0362C7437C556E4FEA7D535D2783F408A78* __this, U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tB607A35AD145FE4406070D15E921A3F6FA68C63C* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t4102E0362C7437C556E4FEA7D535D2783F408A78*, U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tB607A35AD145FE4406070D15E921A3F6FA68C63C*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tB607A35AD145FE4406070D15E921A3F6FA68C63C_mD8ADCB15E0DA90FE4565340C85A67D11156DFAC7_gshared)(__this, ___0_stateMachine, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Windows.Storage.Streams.IBuffer>::get_Task()
inline Task_1_t34C529965D1945277B370D1A5EEB7D54EADF44F5* AsyncTaskMethodBuilder_1_get_Task_mDE9568F3E8450FB3A4019BCDF81FF2F82C7942B5 (AsyncTaskMethodBuilder_1_t4102E0362C7437C556E4FEA7D535D2783F408A78* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t34C529965D1945277B370D1A5EEB7D54EADF44F5* (*) (AsyncTaskMethodBuilder_1_t4102E0362C7437C556E4FEA7D535D2783F408A78*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<TResult> System.Threading.Tasks.Task`1<System.Int32>::ConfigureAwait(System.Boolean)
inline ConfiguredTaskAwaitable_1_t5186C81524388C1718E9AC37792D8771A443417A Task_1_ConfigureAwait_m8203F4D13209C12845066A383E5B850D0486B209 (Task_1_t4C228DE57804012969575431CFF12D57C875552D* __this, bool ___0_continueOnCapturedContext, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaitable_1_t5186C81524388C1718E9AC37792D8771A443417A (*) (Task_1_t4C228DE57804012969575431CFF12D57C875552D*, bool, const RuntimeMethod*))Task_1_ConfigureAwait_m8203F4D13209C12845066A383E5B850D0486B209_gshared)(__this, ___0_continueOnCapturedContext, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<System.Int32>::GetAwaiter()
inline ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80 ConfiguredTaskAwaitable_1_GetAwaiter_m7A77B1981FEC19CC7E1570EDC3F16AC5C14B4439_inline (ConfiguredTaskAwaitable_1_t5186C81524388C1718E9AC37792D8771A443417A* __this, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80 (*) (ConfiguredTaskAwaitable_1_t5186C81524388C1718E9AC37792D8771A443417A*, const RuntimeMethod*))ConfiguredTaskAwaitable_1_GetAwaiter_m7A77B1981FEC19CC7E1570EDC3F16AC5C14B4439_gshared_inline)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>::get_IsCompleted()
inline bool ConfiguredTaskAwaiter_get_IsCompleted_mD70263ED42C8E379EE20DBC2F218C3E629B4B4D3 (ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80*, const RuntimeMethod*))ConfiguredTaskAwaiter_get_IsCompleted_mD70263ED42C8E379EE20DBC2F218C3E629B4B4D3_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Windows.Storage.Streams.IBuffer>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>,System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80_TisU3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tB607A35AD145FE4406070D15E921A3F6FA68C63C_m87835D25F1C7F9EE719DF091E01916FD343A8957 (AsyncTaskMethodBuilder_1_t4102E0362C7437C556E4FEA7D535D2783F408A78* __this, ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80* ___0_awaiter, U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tB607A35AD145FE4406070D15E921A3F6FA68C63C* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t4102E0362C7437C556E4FEA7D535D2783F408A78*, ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80*, U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tB607A35AD145FE4406070D15E921A3F6FA68C63C*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80_TisU3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tB607A35AD145FE4406070D15E921A3F6FA68C63C_m9936741FC259A7FB9718D3730B48A6310A06CD26_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// TResult System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<System.Int32>::GetResult()
inline int32_t ConfiguredTaskAwaiter_GetResult_mF1FF6CBD66A3F581D413793BA8C2AF58B707D9CC (ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80*, const RuntimeMethod*))ConfiguredTaskAwaiter_GetResult_mF1FF6CBD66A3F581D413793BA8C2AF58B707D9CC_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Windows.Storage.Streams.IBuffer>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m9EAE10842FB26165FAD37D29E1810C3A612AA4AC (AsyncTaskMethodBuilder_1_t4102E0362C7437C556E4FEA7D535D2783F408A78* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t4102E0362C7437C556E4FEA7D535D2783F408A78*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___0_exception, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Windows.Storage.Streams.IBuffer>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_m76EFCFDD50DEC8282C1EE86AA3722EE407C16C9E (AsyncTaskMethodBuilder_1_t4102E0362C7437C556E4FEA7D535D2783F408A78* __this, RuntimeObject* ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t4102E0362C7437C556E4FEA7D535D2783F408A78*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___0_result, method);
}
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_m80B40C314DE7F8AB52D8CAEA8A6DE0AF1AB5E651 (U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tB607A35AD145FE4406070D15E921A3F6FA68C63C* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Windows.Storage.Streams.IBuffer>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_mE240BA4A6F123BC93D5804E5D453D7EE55FE9EBC (AsyncTaskMethodBuilder_1_t4102E0362C7437C556E4FEA7D535D2783F408A78* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t4102E0362C7437C556E4FEA7D535D2783F408A78*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___0_stateMachine, method);
}
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_m390C11560330044EB68ED37D7534226242E9D8A1 (U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tB607A35AD145FE4406070D15E921A3F6FA68C63C* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::Create()
inline AsyncTaskMethodBuilder_1_t8FB785F8228EA6285573F7790C8F8A3CDEEA7CD2 AsyncTaskMethodBuilder_1_Create_m87F9D91A42876EB5F19F155C2BF170FA6DD06B57 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t8FB785F8228EA6285573F7790C8F8A3CDEEA7CD2 (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m87F9D91A42876EB5F19F155C2BF170FA6DD06B57_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::Start<System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__0>d>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t03D234E0E36C92DA9A5CA3811A6B2E30D9639AF2_mB199C3DEC061F88605F35CAFD88E6C1295B3025C (AsyncTaskMethodBuilder_1_t8FB785F8228EA6285573F7790C8F8A3CDEEA7CD2* __this, U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t03D234E0E36C92DA9A5CA3811A6B2E30D9639AF2* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t8FB785F8228EA6285573F7790C8F8A3CDEEA7CD2*, U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t03D234E0E36C92DA9A5CA3811A6B2E30D9639AF2*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t03D234E0E36C92DA9A5CA3811A6B2E30D9639AF2_mB199C3DEC061F88605F35CAFD88E6C1295B3025C_gshared)(__this, ___0_stateMachine, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::get_Task()
inline Task_1_t9BFF20A5BC78A3DB3701691B789BBBFB88555060* AsyncTaskMethodBuilder_1_get_Task_mE69A021EF16494D0E3684C697F4948865EF7BEDA (AsyncTaskMethodBuilder_1_t8FB785F8228EA6285573F7790C8F8A3CDEEA7CD2* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t9BFF20A5BC78A3DB3701691B789BBBFB88555060* (*) (AsyncTaskMethodBuilder_1_t8FB785F8228EA6285573F7790C8F8A3CDEEA7CD2*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mE69A021EF16494D0E3684C697F4948865EF7BEDA_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::Start<System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__1>d>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t15BC749CED41367E2893FD2B368726119BD8EDA2_m48B0345C032F514709701DDCD0FD52267D6F6450 (AsyncTaskMethodBuilder_1_t8FB785F8228EA6285573F7790C8F8A3CDEEA7CD2* __this, U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t15BC749CED41367E2893FD2B368726119BD8EDA2* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t8FB785F8228EA6285573F7790C8F8A3CDEEA7CD2*, U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t15BC749CED41367E2893FD2B368726119BD8EDA2*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t15BC749CED41367E2893FD2B368726119BD8EDA2_m48B0345C032F514709701DDCD0FD52267D6F6450_gshared)(__this, ___0_stateMachine, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable System.Threading.Tasks.Task::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C Task_ConfigureAwait_m0DD682B1D29B85067C993734C12E26554D6CBFF4 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, bool ___0_continueOnCapturedContext, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline (ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfiguredTaskAwaiter_get_IsCompleted_mB189574F29658A59CC4C890B70538A9C5E835850 (ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__0>d>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t03D234E0E36C92DA9A5CA3811A6B2E30D9639AF2_m32DB4E2BD524F293AC0379E6D347EC091FF8A90E (AsyncTaskMethodBuilder_1_t8FB785F8228EA6285573F7790C8F8A3CDEEA7CD2* __this, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* ___0_awaiter, U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t03D234E0E36C92DA9A5CA3811A6B2E30D9639AF2* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t8FB785F8228EA6285573F7790C8F8A3CDEEA7CD2*, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618*, U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t03D234E0E36C92DA9A5CA3811A6B2E30D9639AF2*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t03D234E0E36C92DA9A5CA3811A6B2E30D9639AF2_m32DB4E2BD524F293AC0379E6D347EC091FF8A90E_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfiguredTaskAwaiter_GetResult_mD51FDD775D0CF7511FEE2B6C144DB003DE73AC26 (ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m62045F0DC88FCFFAE8B54C1A9C36373187D21A13 (AsyncTaskMethodBuilder_1_t8FB785F8228EA6285573F7790C8F8A3CDEEA7CD2* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t8FB785F8228EA6285573F7790C8F8A3CDEEA7CD2*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m62045F0DC88FCFFAE8B54C1A9C36373187D21A13_gshared)(__this, ___0_exception, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_m5041801AE00206CAADE10C105F2F580E0CAC659F (AsyncTaskMethodBuilder_1_t8FB785F8228EA6285573F7790C8F8A3CDEEA7CD2* __this, uint32_t ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t8FB785F8228EA6285573F7790C8F8A3CDEEA7CD2*, uint32_t, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m5041801AE00206CAADE10C105F2F580E0CAC659F_gshared)(__this, ___0_result, method);
}
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_m385630426A46211060318F1C916303EA13209878 (U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t03D234E0E36C92DA9A5CA3811A6B2E30D9639AF2* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m4F4BB17D6A5F9922EBDAE1ECEF9DBE6945E70DA9 (AsyncTaskMethodBuilder_1_t8FB785F8228EA6285573F7790C8F8A3CDEEA7CD2* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t8FB785F8228EA6285573F7790C8F8A3CDEEA7CD2*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m4F4BB17D6A5F9922EBDAE1ECEF9DBE6945E70DA9_gshared)(__this, ___0_stateMachine, method);
}
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_m280075790DDBDE36399C6A78707B6EF3DCBCCE60 (U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t03D234E0E36C92DA9A5CA3811A6B2E30D9639AF2* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.IO.Stream System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::AsStream(Windows.Storage.Streams.IBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* WindowsRuntimeBufferExtensions_AsStream_mF1266A683784D7F888A72D5E7E3A0A6E3CDC9F1B (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.UInt32>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__1>d>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t15BC749CED41367E2893FD2B368726119BD8EDA2_m0F8066B387E3646E4696CFD624C11C2041D7C4A7 (AsyncTaskMethodBuilder_1_t8FB785F8228EA6285573F7790C8F8A3CDEEA7CD2* __this, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* ___0_awaiter, U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t15BC749CED41367E2893FD2B368726119BD8EDA2* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t8FB785F8228EA6285573F7790C8F8A3CDEEA7CD2*, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618*, U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t15BC749CED41367E2893FD2B368726119BD8EDA2*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t15BC749CED41367E2893FD2B368726119BD8EDA2_m0F8066B387E3646E4696CFD624C11C2041D7C4A7_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__1>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_MoveNext_mA3085EFB69450F1620F559B1EF53B98299C9C2BC (U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t15BC749CED41367E2893FD2B368726119BD8EDA2* __this, const RuntimeMethod* method) ;
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__1>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_SetStateMachine_mB561D48F1139741C0B0F7F1F36D9BCD7E0507D37 (U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t15BC749CED41367E2893FD2B368726119BD8EDA2* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Create()
inline AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA AsyncTaskMethodBuilder_1_Create_mA86694527610A40A01A943B16F0ECDDD8F00982D (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_mA86694527610A40A01A943B16F0ECDDD8F00982D_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::Start<System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0/<<FlushAsync_AbstractStream>b__0>d>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_tCAE4779681542A3A44DA232D516892B2CFB4DC34_m1797CF010076782E1F6756123A031313EF8D6611 (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_tCAE4779681542A3A44DA232D516892B2CFB4DC34* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_tCAE4779681542A3A44DA232D516892B2CFB4DC34*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_tCAE4779681542A3A44DA232D516892B2CFB4DC34_m1797CF010076782E1F6756123A031313EF8D6611_gshared)(__this, ___0_stateMachine, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::get_Task()
inline Task_1_t824317F4B958F7512E8F7300511752937A6C6043* AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943 (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t824317F4B958F7512E8F7300511752937A6C6043* (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0/<<FlushAsync_AbstractStream>b__0>d>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_tCAE4779681542A3A44DA232D516892B2CFB4DC34_mC604299296C2DBE4678EA7BF22562AC6BA10526A (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* ___0_awaiter, U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_tCAE4779681542A3A44DA232D516892B2CFB4DC34* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618*, U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_tCAE4779681542A3A44DA232D516892B2CFB4DC34*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_tCAE4779681542A3A44DA232D516892B2CFB4DC34_mC604299296C2DBE4678EA7BF22562AC6BA10526A_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD_gshared)(__this, ___0_exception, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046 (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, bool ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, bool, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_gshared)(__this, ___0_result, method);
}
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0/<<FlushAsync_AbstractStream>b__0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_mB52A11565AEE89B0EE471C3F1C532CBFA14B4672 (U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_tCAE4779681542A3A44DA232D516892B2CFB4DC34* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8 (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8_gshared)(__this, ___0_stateMachine, method);
}
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0/<<FlushAsync_AbstractStream>b__0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_mF444E708EDF7407A732A02D8A3D1A5B1B45803FD (U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_tCAE4779681542A3A44DA232D516892B2CFB4DC34* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Int32 System.IO.BufferedStream::get_BufferSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BufferedStream_get_BufferSize_m938C648886EAD1897F9689C9D0F2A1854E4A1973_inline (BufferedStream_t9D0E8599EB0482BE778F25C62AA8954A68D94BEE* __this, const RuntimeMethod* method) ;
// System.IO.Stream System.IO.WindowsRuntimeStreamExtensions::AsStreamInternal(System.Object,System.Int32,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* WindowsRuntimeStreamExtensions_AsStreamInternal_m7B11D44B9E825CE63B6415B9F5877E066E51045B (RuntimeObject* ___0_windowsRuntimeStream, int32_t ___1_bufferSize, String_t* ___2_invokedMethodName, bool ___3_forceBufferSize, const RuntimeMethod* method) ;
// System.IO.Stream System.IO.NetFxToWinRtStreamAdapter::GetManagedStream()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* NetFxToWinRtStreamAdapter_GetManagedStream_m3CEDE8948C3D330E0BBB900C005A1A2CBD60FDBE_inline (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __this, const RuntimeMethod* method) ;
// System.Void System.ObjectDisposedException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_m5C356C25295E89559C120CB4562783AAF7F41C84 (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* __this, String_t* ___0_objectName, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.IO.Stream>::TryGetValue(TKey,TValue&)
inline bool ConditionalWeakTable_2_TryGetValue_m5A667E9026FFDE0FF1E2EE79A5CFA7A1CFF8BED1 (ConditionalWeakTable_2_t854A212DF03C231A1FCD6A2CCD8FC269D295B27C* __this, RuntimeObject* ___0_key, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t854A212DF03C231A1FCD6A2CCD8FC269D295B27C*, RuntimeObject*, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE**, const RuntimeMethod*))ConditionalWeakTable_2_TryGetValue_mA6697354DA1D2A76999FFDCC072C62AC5C364124_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.IO.WindowsRuntimeStreamExtensions::EnsureAdapterBufferSize(System.IO.Stream,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeStreamExtensions_EnsureAdapterBufferSize_m45873229B6C84BCCE713F0E252775273849092D4 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_adapter, int32_t ___1_requiredBufferSize, String_t* ___2_methodName, const RuntimeMethod* method) ;
// System.IO.Stream System.IO.WindowsRuntimeStreamExtensions::AsStreamInternalFactoryHelper(System.Object,System.Int32,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* WindowsRuntimeStreamExtensions_AsStreamInternalFactoryHelper_mEDB150B71D7D35A83BFDEEE146BA6AAD74E380C1 (RuntimeObject* ___0_windowsRuntimeStream, int32_t ___1_bufferSize, String_t* ___2_invokedMethodName, bool ___3_forceBufferSize, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.Object,System.IO.Stream>::.ctor(System.Object,System.IntPtr)
inline void CreateValueCallback__ctor_mD661CB4A2D38E6BFC019D1AC4E2FD7F8A77660C5 (CreateValueCallback_tDDCD9D271D51B07C7E7946A50CDE83F171F5AD66* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (CreateValueCallback_tDDCD9D271D51B07C7E7946A50CDE83F171F5AD66*, RuntimeObject*, intptr_t, const RuntimeMethod*))CreateValueCallback__ctor_mDBD11BE5B28EC0300CF9FE05ADB688420B83703A_gshared)(__this, ___0_object, ___1_method, method);
}
// TValue System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.IO.Stream>::GetValue(TKey,System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<TKey,TValue>)
inline Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ConditionalWeakTable_2_GetValue_mC1F65C9D190A7B9A2554784DDC71B7454957C35E (ConditionalWeakTable_2_t854A212DF03C231A1FCD6A2CCD8FC269D295B27C* __this, RuntimeObject* ___0_key, CreateValueCallback_tDDCD9D271D51B07C7E7946A50CDE83F171F5AD66* ___1_createValueCallback, const RuntimeMethod* method)
{
	return ((  Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* (*) (ConditionalWeakTable_2_t854A212DF03C231A1FCD6A2CCD8FC269D295B27C*, RuntimeObject*, CreateValueCallback_tDDCD9D271D51B07C7E7946A50CDE83F171F5AD66*, const RuntimeMethod*))ConditionalWeakTable_2_GetValue_mD02297B46B37D3AF2884B5BD1B6A74C563F0DC42_gshared)(__this, ___0_key, ___1_createValueCallback, method);
}
// System.Void System.IO.WindowsRuntimeStreamExtensions/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_m57B47C13EA2408FCFD2187740EFE6C35BA38E67C (U3CU3Ec__DisplayClass12_0_t37D3E76CFB42D6FC4250C48FC0277A97E9401D3C* __this, const RuntimeMethod* method) ;
// System.IO.Stream System.IO.WindowsRuntimeStreamExtensions::WinRtToNetFxAdapterMap_GetValue(System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* WindowsRuntimeStreamExtensions_WinRtToNetFxAdapterMap_GetValue_m04700437FAFD962CC4137C3DAF28CC76A45D21BB (RuntimeObject* ___0_winRtStream, int32_t ___1_bufferSize, const RuntimeMethod* method) ;
// System.IO.Stream System.IO.WindowsRuntimeStreamExtensions::WinRtToNetFxAdapterMap_GetValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* WindowsRuntimeStreamExtensions_WinRtToNetFxAdapterMap_GetValue_m58ED3961E11C3913170A0CD12C24014D85BE0131 (RuntimeObject* ___0_winRtStream, const RuntimeMethod* method) ;
// System.IO.Stream System.IO.BufferedStream::get_UnderlyingStream()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* BufferedStream_get_UnderlyingStream_m85027B2FF4537B66648311CE327D7085FFDBBDA9_inline (BufferedStream_t9D0E8599EB0482BE778F25C62AA8954A68D94BEE* __this, const RuntimeMethod* method) ;
// System.Void System.IO.WinRtToNetFxStreamAdapter::SetWonInitializationRace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRtToNetFxStreamAdapter_SetWonInitializationRace_mDE4E795CE7D9B879EAD1CBD8A208910D52538350 (WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* __this, const RuntimeMethod* method) ;
// System.Object System.IO.WindowsRuntimeStreamExtensions::AsWindowsRuntimeStreamInternal(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowsRuntimeStreamExtensions_AsWindowsRuntimeStreamInternal_m975E800073D3F332AF2C1DDD170BC8337490C14B (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) ;
// TWinRtStream System.IO.WinRtToNetFxStreamAdapter::GetWindowsRuntimeStream<System.Object>()
inline RuntimeObject* WinRtToNetFxStreamAdapter_GetWindowsRuntimeStream_TisRuntimeObject_mD5C79C84E5B20F3841E83C7AF833EDEBF1A9B2BA (WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D*, const RuntimeMethod*))WinRtToNetFxStreamAdapter_GetWindowsRuntimeStream_TisRuntimeObject_mD5C79C84E5B20F3841E83C7AF833EDEBF1A9B2BA_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.ConditionalWeakTable`2<System.IO.Stream,System.IO.NetFxToWinRtStreamAdapter>::TryGetValue(TKey,TValue&)
inline bool ConditionalWeakTable_2_TryGetValue_mAAA7661CB097AF2549135730576D4727F4E99773 (ConditionalWeakTable_2_t24BE7D16606E76A4491061A2E9F3E241D476135E* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_key, NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ConditionalWeakTable_2_t24BE7D16606E76A4491061A2E9F3E241D476135E*, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*, NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737**, const RuntimeMethod*))ConditionalWeakTable_2_TryGetValue_mA6697354DA1D2A76999FFDCC072C62AC5C364124_gshared)(__this, ___0_key, ___1_value, method);
}
// System.IO.NetFxToWinRtStreamAdapter System.IO.WindowsRuntimeStreamExtensions::AsWindowsRuntimeStreamInternalFactoryHelper(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* WindowsRuntimeStreamExtensions_AsWindowsRuntimeStreamInternalFactoryHelper_m386B35F3B9C48F2813855BEDEA349F267E3FDA02 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<System.IO.Stream,System.IO.NetFxToWinRtStreamAdapter>::.ctor(System.Object,System.IntPtr)
inline void CreateValueCallback__ctor_mEF9564BCE1A115A11DB76EFD4BD6C3430BFFED71 (CreateValueCallback_t67AEB55E60D5609661C588762443963DBD29C224* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (CreateValueCallback_t67AEB55E60D5609661C588762443963DBD29C224*, RuntimeObject*, intptr_t, const RuntimeMethod*))CreateValueCallback__ctor_mDBD11BE5B28EC0300CF9FE05ADB688420B83703A_gshared)(__this, ___0_object, ___1_method, method);
}
// TValue System.Runtime.CompilerServices.ConditionalWeakTable`2<System.IO.Stream,System.IO.NetFxToWinRtStreamAdapter>::GetValue(TKey,System.Runtime.CompilerServices.ConditionalWeakTable`2/CreateValueCallback<TKey,TValue>)
inline NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* ConditionalWeakTable_2_GetValue_m9565B962066EB9A23F8AB92AF2550E7AA46BB4C5 (ConditionalWeakTable_2_t24BE7D16606E76A4491061A2E9F3E241D476135E* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_key, CreateValueCallback_t67AEB55E60D5609661C588762443963DBD29C224* ___1_createValueCallback, const RuntimeMethod* method)
{
	return ((  NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* (*) (ConditionalWeakTable_2_t24BE7D16606E76A4491061A2E9F3E241D476135E*, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*, CreateValueCallback_t67AEB55E60D5609661C588762443963DBD29C224*, const RuntimeMethod*))ConditionalWeakTable_2_GetValue_mD02297B46B37D3AF2884B5BD1B6A74C563F0DC42_gshared)(__this, ___0_key, ___1_createValueCallback, method);
}
// System.Void System.IO.NetFxToWinRtStreamAdapter::SetWonInitializationRace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetFxToWinRtStreamAdapter_SetWonInitializationRace_m16AB325FD4545F08DF062D6A9FEDE112CF312B28 (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.IO.Stream>::.ctor()
inline void ConditionalWeakTable_2__ctor_m8C1B4AF4E7D62A741442A4502DE8E8CF8E4467A3 (ConditionalWeakTable_2_t854A212DF03C231A1FCD6A2CCD8FC269D295B27C* __this, const RuntimeMethod* method)
{
	((  void (*) (ConditionalWeakTable_2_t854A212DF03C231A1FCD6A2CCD8FC269D295B27C*, const RuntimeMethod*))ConditionalWeakTable_2__ctor_m853F59C8991DABC257AA9EE373CF4061CDD53E94_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.IO.Stream,System.IO.NetFxToWinRtStreamAdapter>::.ctor()
inline void ConditionalWeakTable_2__ctor_m768EC987180F75B2C7E25ECB757C2F37C5447A44 (ConditionalWeakTable_2_t24BE7D16606E76A4491061A2E9F3E241D476135E* __this, const RuntimeMethod* method)
{
	((  void (*) (ConditionalWeakTable_2_t24BE7D16606E76A4491061A2E9F3E241D476135E*, const RuntimeMethod*))ConditionalWeakTable_2__ctor_m853F59C8991DABC257AA9EE373CF4061CDD53E94_gshared)(__this, method);
}
// System.Void System.IO.WindowsRuntimeStreamExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3033F9D489AB2727DC876D3CEC94D7717768DBD3 (U3CU3Ec_t0031EA3631AC4363828C98AED7D52630379E6919* __this, const RuntimeMethod* method) ;
// System.IO.WinRtToNetFxStreamAdapter System.IO.WinRtToNetFxStreamAdapter::Create(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* WinRtToNetFxStreamAdapter_Create_mB55C9B6428631D630A28BC687A4412251686E77A (RuntimeObject* ___0_windowsRuntimeStream, const RuntimeMethod* method) ;
// System.IO.NetFxToWinRtStreamAdapter System.IO.NetFxToWinRtStreamAdapter::Create(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* NetFxToWinRtStreamAdapter_Create_mA1D7422D99BF8432BCBBDE154570AD8FB0C2A25B (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) ;
// System.Void System.IO.BufferedStream::.ctor(System.IO.Stream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferedStream__ctor_m056A9E38CA9E613F4A53028E99ECBC6E40026B36 (BufferedStream_t9D0E8599EB0482BE778F25C62AA8954A68D94BEE* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, int32_t ___1_bufferSize, const RuntimeMethod* method) ;
// System.Type System.Exception::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Exception_GetType_mAD1230385BDC06119C339187CC37F22B6A79CF09 (Exception_t* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrWhiteSpace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrWhiteSpace_m42E1F3B2C358068D645E46F01CF1834DC77A5A10 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.IO.IOException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_mFA9F39D1AF43FBC40BFA68A7BFE07852D1EF8B1B (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::IsSameData(Windows.Storage.Streams.IBuffer,Windows.Storage.Streams.IBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsRuntimeBufferExtensions_IsSameData_m245201A2EA5EA798640445380269F19C234DA784 (RuntimeObject* ___0_buffer, RuntimeObject* ___1_otherBuffer, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::CopyTo(Windows.Storage.Streams.IBuffer,Windows.Storage.Streams.IBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBufferExtensions_CopyTo_mDC3857DDA9BB0055E8D3DA4FCB570220BC5B698E (RuntimeObject* ___0_source, RuntimeObject* ___1_destination, const RuntimeMethod* method) ;
// System.Void System.IO.WinRtToNetFxStreamAdapter::.ctor(System.Object,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRtToNetFxStreamAdapter__ctor_mB4A7AFFBF3CDAAD5684E354E027D9DB5E3F60833 (WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* __this, RuntimeObject* ___0_winRtStream, bool ___1_canRead, bool ___2_canWrite, bool ___3_canSeek, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_m9B37BD21A57F8F2BD20EE353DE14405700810C5C (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, bool ___0_disposing, const RuntimeMethod* method) ;
// TWinRtStream System.IO.WinRtToNetFxStreamAdapter::EnsureNotDisposed<Windows.Storage.Streams.IRandomAccessStream>()
inline RuntimeObject* WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D_m0204EE882DA19B82E531C1D3909A6D52BF4E7D62 (WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D*, const RuntimeMethod*))WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisRuntimeObject_m15959F0CE1C57895A3567BEBFB0E6E5359722EC5_gshared)(__this, method);
}
// System.Void System.IO.IOException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
// System.Void System.IO.WinRtToNetFxStreamAdapter::EnsureCanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRtToNetFxStreamAdapter_EnsureCanWrite_m2622BF473755E46C831CB010D4961F7BBD6DAAFD (WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* __this, const RuntimeMethod* method) ;
// TWinRtStream System.IO.WinRtToNetFxStreamAdapter::EnsureNotDisposed<Windows.Storage.Streams.IInputStream>()
inline RuntimeObject* WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71_m9C3503831C27EAF79D7E14C9F404094C101B2CF6 (WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D*, const RuntimeMethod*))WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisRuntimeObject_m15959F0CE1C57895A3567BEBFB0E6E5359722EC5_gshared)(__this, method);
}
// System.Void System.IO.WinRtToNetFxStreamAdapter::EnsureCanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRtToNetFxStreamAdapter_EnsureCanRead_m8CAD7A89069DF1522511D86F3F99D865936B7909 (WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* __this, const RuntimeMethod* method) ;
// Windows.Storage.Streams.IBuffer System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::AsBuffer(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowsRuntimeBufferExtensions_AsBuffer_m8A0EB9B2849FF09CADAA2F875357CD5D873EAE9E (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_source, int32_t ___1_offset, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Void System.IO.StreamReadAsyncResult::.ctor(Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Storage.Streams.IBuffer,System.AsyncCallback,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReadAsyncResult__ctor_m176A96FFBB03EE86C985427F09FC017FA049B393 (StreamReadAsyncResult_t1F47DFA1E32A8FBC434C3B74D239D2F4888DDFBF* __this, RuntimeObject* ___0_asyncStreamReadOperation, RuntimeObject* ___1_buffer, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_userCompletionCallback, RuntimeObject* ___3_userAsyncStateInfo, bool ___4_processCompletedOperationInCallback, const RuntimeMethod* method) ;
// System.Void System.IO.WinRtToNetFxStreamAdapter::EnsureNotDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRtToNetFxStreamAdapter_EnsureNotDisposed_m2380D3C575831B4E4571ED577B331B123B7FCC59 (WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* __this, const RuntimeMethod* method) ;
// System.Void System.IO.StreamOperationAsyncResult::Wait()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOperationAsyncResult_Wait_m0B398079EB6A2B147CE10149B4E1F0A672CFB07D (StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5* __this, const RuntimeMethod* method) ;
// System.Void System.IO.StreamOperationAsyncResult::CloseStreamOperation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOperationAsyncResult_CloseStreamOperation_m7EDC8353FDD660F2FEC14D20F92A6B3287DF72CF (StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5* __this, const RuntimeMethod* method) ;
// System.Boolean System.IO.StreamOperationAsyncResult::get_ProcessCompletedOperationInCallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool StreamOperationAsyncResult_get_ProcessCompletedOperationInCallback_m8470600DA8B333697D8129A0D3F1AAA66D146F41_inline (StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5* __this, const RuntimeMethod* method) ;
// System.Boolean System.IO.StreamOperationAsyncResult::get_HasError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StreamOperationAsyncResult_get_HasError_m496A745E349A4B25765F291FE07008844EC4C903 (StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5* __this, const RuntimeMethod* method) ;
// System.Void System.IO.StreamOperationAsyncResult::ThrowCachedError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOperationAsyncResult_ThrowCachedError_m045627B786B647E31F4140BF2C6A902AD52E53B2 (StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5* __this, const RuntimeMethod* method) ;
// System.Int64 System.IO.StreamOperationAsyncResult::get_BytesCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t StreamOperationAsyncResult_get_BytesCompleted_m39550759FF8B759BFD58B476BA8D509EF454A7DE_inline (StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.CancellationToken::ThrowIfCancellationRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<System.Int32> System.IO.WinRtToNetFxStreamAdapter::ReadAsyncInternal(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* WinRtToNetFxStreamAdapter_ReadAsyncInternal_m59ED37E7560D24D0953E41D43D096560CEA7F378 (WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_offset, int32_t ___2_count, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_cancellationToken, const RuntimeMethod* method) ;
// System.IAsyncResult System.IO.WinRtToNetFxStreamAdapter::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WinRtToNetFxStreamAdapter_BeginRead_mD7465C8237229E7B25054F6B13CF042119CC584B (WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_offset, int32_t ___2_count, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_state, bool ___5_usedByBlockingWrapper, const RuntimeMethod* method) ;
// System.Byte[] System.IO.WinRtToNetFxStreamAdapter::get_OneByteBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* WinRtToNetFxStreamAdapter_get_OneByteBuffer_m288CD9E724B4A10CD143C1EF06C23E33B316D988 (WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* __this, const RuntimeMethod* method) ;
// System.IAsyncResult System.IO.WinRtToNetFxStreamAdapter::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WinRtToNetFxStreamAdapter_BeginWrite_m1FDE8E7AF654937E142825D525D95CE85A4172B9 (WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_offset, int32_t ___2_count, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_state, bool ___5_usedByBlockingWrapper, const RuntimeMethod* method) ;
// TWinRtStream System.IO.WinRtToNetFxStreamAdapter::EnsureNotDisposed<Windows.Storage.Streams.IOutputStream>()
inline RuntimeObject* WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284_m717FCA40D60416774137E427B0386318EFF9E186 (WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D*, const RuntimeMethod*))WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisRuntimeObject_m15959F0CE1C57895A3567BEBFB0E6E5359722EC5_gshared)(__this, method);
}
// System.Void System.IO.StreamWriteAsyncResult::.ctor(Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>,System.AsyncCallback,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamWriteAsyncResult__ctor_m3AE1404D8B26860EA1AAC59E0DE9E39E6EE6BD0A (StreamWriteAsyncResult_t57A8AF219966DDDB17A8D7F1F4AC8DB8D8500693* __this, RuntimeObject* ___0_asyncStreamWriteOperation, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_userCompletionCallback, RuntimeObject* ___2_userAsyncStateInfo, bool ___3_processCompletedOperationInCallback, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.WindowsRuntimeSystemExtensions::AsTask<System.UInt32,System.UInt32>(Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress>,System.Threading.CancellationToken)
inline Task_1_t9BFF20A5BC78A3DB3701691B789BBBFB88555060* WindowsRuntimeSystemExtensions_AsTask_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m06B407572D6562F6F155E1B0A322B1AE1B5E7D0E (RuntimeObject* ___0_source, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method)
{
	return ((  Task_1_t9BFF20A5BC78A3DB3701691B789BBBFB88555060* (*) (RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))WindowsRuntimeSystemExtensions_AsTask_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m06B407572D6562F6F155E1B0A322B1AE1B5E7D0E_gshared)(___0_source, ___1_cancellationToken, method);
}
// System.Void System.IO.StreamFlushAsyncResult::.ctor(Windows.Foundation.IAsyncOperation`1<System.Boolean>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamFlushAsyncResult__ctor_m1A20179746FD6C2C0819FB47226D1061277738B1 (StreamFlushAsyncResult_t04C0AAEDCD3CB5F458A11C4E275F2577786A8103* __this, RuntimeObject* ___0_asyncStreamFlushOperation, bool ___1_processCompletedOperationInCallback, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.WindowsRuntimeSystemExtensions::AsTask<System.Boolean>(Windows.Foundation.IAsyncOperation`1<TResult>,System.Threading.CancellationToken)
inline Task_1_t824317F4B958F7512E8F7300511752937A6C6043* WindowsRuntimeSystemExtensions_AsTask_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAFEA206F914571AA59814865AAAE5729B5572B5A (RuntimeObject* ___0_source, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method)
{
	return ((  Task_1_t824317F4B958F7512E8F7300511752937A6C6043* (*) (RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))WindowsRuntimeSystemExtensions_AsTask_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAFEA206F914571AA59814865AAAE5729B5572B5A_gshared)(___0_source, ___1_cancellationToken, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::Create()
inline AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019 AsyncTaskMethodBuilder_1_Create_m0E49F68E6F39F0BD87C360F456EBC20310B732BE (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019 (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m0E49F68E6F39F0BD87C360F456EBC20310B732BE_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::Start<System.IO.WinRtToNetFxStreamAdapter/<ReadAsyncInternal>d__43>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CReadAsyncInternalU3Ed__43_t30E8CDC69A0B1E1AE4981CFFD05F1CF764DD6968_m13E673E00BEFF7E47A59726BACC49256CB40AB26 (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, U3CReadAsyncInternalU3Ed__43_t30E8CDC69A0B1E1AE4981CFFD05F1CF764DD6968* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019*, U3CReadAsyncInternalU3Ed__43_t30E8CDC69A0B1E1AE4981CFFD05F1CF764DD6968*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CReadAsyncInternalU3Ed__43_t30E8CDC69A0B1E1AE4981CFFD05F1CF764DD6968_m13E673E00BEFF7E47A59726BACC49256CB40AB26_gshared)(__this, ___0_stateMachine, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::get_Task()
inline Task_1_t4C228DE57804012969575431CFF12D57C875552D* AsyncTaskMethodBuilder_1_get_Task_m2DCDBC59910811D107353C5752AD58B28C2D97FE (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t4C228DE57804012969575431CFF12D57C875552D* (*) (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m2DCDBC59910811D107353C5752AD58B28C2D97FE_gshared)(__this, method);
}
// System.Threading.Tasks.Task`1<TResult> System.WindowsRuntimeSystemExtensions::AsTask<Windows.Storage.Streams.IBuffer,System.UInt32>(Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress>,System.Threading.CancellationToken)
inline Task_1_t34C529965D1945277B370D1A5EEB7D54EADF44F5* WindowsRuntimeSystemExtensions_AsTask_TisIBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mEDAB9858D96E4B4787ADDA22E002B28DA627CD9B (RuntimeObject* ___0_source, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method)
{
	return ((  Task_1_t34C529965D1945277B370D1A5EEB7D54EADF44F5* (*) (RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))WindowsRuntimeSystemExtensions_AsTask_TisRuntimeObject_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD349CCAA8004E42C5A3179EFAE38D9390CF356AE_gshared)(___0_source, ___1_cancellationToken, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<TResult> System.Threading.Tasks.Task`1<Windows.Storage.Streams.IBuffer>::ConfigureAwait(System.Boolean)
inline ConfiguredTaskAwaitable_1_t321A8DE5D259177E3DFE3069C6DC2CCD6F00761A Task_1_ConfigureAwait_m16D57A2BDD33A3BD596FDCDE674D2E8996BC3CEC (Task_1_t34C529965D1945277B370D1A5EEB7D54EADF44F5* __this, bool ___0_continueOnCapturedContext, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaitable_1_t321A8DE5D259177E3DFE3069C6DC2CCD6F00761A (*) (Task_1_t34C529965D1945277B370D1A5EEB7D54EADF44F5*, bool, const RuntimeMethod*))Task_1_ConfigureAwait_m9D6420C859925B7C250DED7586DD770C91632070_gshared)(__this, ___0_continueOnCapturedContext, method);
}
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1<Windows.Storage.Streams.IBuffer>::GetAwaiter()
inline ConfiguredTaskAwaiter_t59FDFE1F6491ED41D3F1F28C14509DFEAC2D0C60 ConfiguredTaskAwaitable_1_GetAwaiter_m914DC775D703ABDC3AA070FDEC45F4777DF21040_inline (ConfiguredTaskAwaitable_1_t321A8DE5D259177E3DFE3069C6DC2CCD6F00761A* __this, const RuntimeMethod* method)
{
	return ((  ConfiguredTaskAwaiter_t59FDFE1F6491ED41D3F1F28C14509DFEAC2D0C60 (*) (ConfiguredTaskAwaitable_1_t321A8DE5D259177E3DFE3069C6DC2CCD6F00761A*, const RuntimeMethod*))ConfiguredTaskAwaitable_1_GetAwaiter_m10364C3B0A904803E890B2D75674665F986BDAB2_gshared_inline)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Windows.Storage.Streams.IBuffer>::get_IsCompleted()
inline bool ConfiguredTaskAwaiter_get_IsCompleted_mF6F9BD383D1A869D82F90ED1B9C489D4C4E3689A (ConfiguredTaskAwaiter_t59FDFE1F6491ED41D3F1F28C14509DFEAC2D0C60* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ConfiguredTaskAwaiter_t59FDFE1F6491ED41D3F1F28C14509DFEAC2D0C60*, const RuntimeMethod*))ConfiguredTaskAwaiter_get_IsCompleted_mD6243A7544181F96816A5F81459F4B66908ADB5E_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Windows.Storage.Streams.IBuffer>,System.IO.WinRtToNetFxStreamAdapter/<ReadAsyncInternal>d__43>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t59FDFE1F6491ED41D3F1F28C14509DFEAC2D0C60_TisU3CReadAsyncInternalU3Ed__43_t30E8CDC69A0B1E1AE4981CFFD05F1CF764DD6968_m9875CEDF56A98DCB760FB86FDEBBE83BD450CD3A (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, ConfiguredTaskAwaiter_t59FDFE1F6491ED41D3F1F28C14509DFEAC2D0C60* ___0_awaiter, U3CReadAsyncInternalU3Ed__43_t30E8CDC69A0B1E1AE4981CFFD05F1CF764DD6968* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019*, ConfiguredTaskAwaiter_t59FDFE1F6491ED41D3F1F28C14509DFEAC2D0C60*, U3CReadAsyncInternalU3Ed__43_t30E8CDC69A0B1E1AE4981CFFD05F1CF764DD6968*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2_TisU3CReadAsyncInternalU3Ed__43_t30E8CDC69A0B1E1AE4981CFFD05F1CF764DD6968_m310F6409BEC2B7D94533A85176AB99A84736D124_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// TResult System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Windows.Storage.Streams.IBuffer>::GetResult()
inline RuntimeObject* ConfiguredTaskAwaiter_GetResult_mD346529D92FA68BABCE8F83FFA3B7066E4A2755D (ConfiguredTaskAwaiter_t59FDFE1F6491ED41D3F1F28C14509DFEAC2D0C60* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ConfiguredTaskAwaiter_t59FDFE1F6491ED41D3F1F28C14509DFEAC2D0C60*, const RuntimeMethod*))ConfiguredTaskAwaiter_GetResult_m00ABE5C46A983C38086438B7A7CB2C62296B3383_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_mB7C693CAA9243017E03D801A487E0EA9B6AAD575 (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mB7C693CAA9243017E03D801A487E0EA9B6AAD575_gshared)(__this, ___0_exception, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_mC4BAC830514CDB105730FF11F7744A4424A4009B (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, int32_t ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019*, int32_t, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_mC4BAC830514CDB105730FF11F7744A4424A4009B_gshared)(__this, ___0_result, method);
}
// System.Void System.IO.WinRtToNetFxStreamAdapter/<ReadAsyncInternal>d__43::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadAsyncInternalU3Ed__43_MoveNext_m76456C1B1F1911A9C8D64D552B2A287605F7F95E (U3CReadAsyncInternalU3Ed__43_t30E8CDC69A0B1E1AE4981CFFD05F1CF764DD6968* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Int32>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_mFA173982D2C309A46F4285F60DC4FE0DC659F32C (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_mFA173982D2C309A46F4285F60DC4FE0DC659F32C_gshared)(__this, ___0_stateMachine, method);
}
// System.Void System.IO.WinRtToNetFxStreamAdapter/<ReadAsyncInternal>d__43::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadAsyncInternalU3Ed__43_SetStateMachine_mE164AC648188C9DD886DDB935AC0883FB455D1C2 (U3CReadAsyncInternalU3Ed__43_t30E8CDC69A0B1E1AE4981CFFD05F1CF764DD6968* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Int64 System.BitConverter::DoubleToInt64Bits(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline (double ___0_value, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WinTypes_INTERNAL
IL2CPP_EXTERN_C int32_t STDCALL RoGetBufferMarshaler(IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD**);
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
// System.Double Windows.Foundation.Point::get_X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Point_get_X_mAC668FF9BEC8F6D62D6DDC90567E405F6475F516 (Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->____x_0;
		return ((double)L_0);
	}
}
IL2CPP_EXTERN_C  double Point_get_X_mAC668FF9BEC8F6D62D6DDC90567E405F6475F516_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18*>(__this + _offset);
	double _returnValue;
	_returnValue = Point_get_X_mAC668FF9BEC8F6D62D6DDC90567E405F6475F516(_thisAdjusted, method);
	return _returnValue;
}
// System.Double Windows.Foundation.Point::get_Y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Point_get_Y_mE07C0D23EC483956CD4BC17D82DF0A3E9A68519F (Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->____y_1;
		return ((double)L_0);
	}
}
IL2CPP_EXTERN_C  double Point_get_Y_mE07C0D23EC483956CD4BC17D82DF0A3E9A68519F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18*>(__this + _offset);
	double _returnValue;
	_returnValue = Point_get_Y_mE07C0D23EC483956CD4BC17D82DF0A3E9A68519F(_thisAdjusted, method);
	return _returnValue;
}
// System.String Windows.Foundation.Point::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Point_ToString_mD92EE026CA4B0524D7122A4C9D30CA4A1E0B808F (Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = Point_ConvertToString_m0DC34AF9991926CE7D4D79FF0517B342B2F5D7EF(__this, (String_t*)NULL, (RuntimeObject*)NULL, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Point_ToString_mD92EE026CA4B0524D7122A4C9D30CA4A1E0B808F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Point_ToString_mD92EE026CA4B0524D7122A4C9D30CA4A1E0B808F(_thisAdjusted, method);
	return _returnValue;
}
// System.String Windows.Foundation.Point::System.IFormattable.ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Point_System_IFormattable_ToString_m05AA01B5C1E1FEB8C2A0A489247E6D9CC7E73C8F (Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_format;
		RuntimeObject* L_1 = ___1_provider;
		String_t* L_2;
		L_2 = Point_ConvertToString_m0DC34AF9991926CE7D4D79FF0517B342B2F5D7EF(__this, L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  String_t* Point_System_IFormattable_ToString_m05AA01B5C1E1FEB8C2A0A489247E6D9CC7E73C8F_AdjustorThunk (RuntimeObject* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method)
{
	Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Point_System_IFormattable_ToString_m05AA01B5C1E1FEB8C2A0A489247E6D9CC7E73C8F(_thisAdjusted, ___0_format, ___1_provider, method);
	return _returnValue;
}
// System.String Windows.Foundation.Point::ConvertToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Point_ConvertToString_m0DC34AF9991926CE7D4D79FF0517B342B2F5D7EF (Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31D728CD5FA12D28FCC14C579DF7875E7C174534);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral885F28AD0F275CAABA9BEB917A5AE6307D96F9C1);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		RuntimeObject* L_0 = ___1_provider;
		Il2CppChar L_1;
		L_1 = TokenizerHelper_GetNumericListSeparator_m4871D4F3FC86E6FCB24A4954FCC75AE60284CE86(L_0, NULL);
		V_0 = L_1;
		RuntimeObject* L_2 = ___1_provider;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral31D728CD5FA12D28FCC14C579DF7875E7C174534);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral31D728CD5FA12D28FCC14C579DF7875E7C174534);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		String_t* L_6 = ___0_format;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_5;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral885F28AD0F275CAABA9BEB917A5AE6307D96F9C1);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral885F28AD0F275CAABA9BEB917A5AE6307D96F9C1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		String_t* L_9 = ___0_format;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_8;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		String_t* L_11;
		L_11 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_10, NULL);
		Il2CppChar L_12 = V_0;
		Il2CppChar L_13 = L_12;
		RuntimeObject* L_14 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_13);
		double L_15;
		L_15 = Point_get_X_mAC668FF9BEC8F6D62D6DDC90567E405F6475F516(__this, NULL);
		double L_16 = L_15;
		RuntimeObject* L_17 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_16);
		double L_18;
		L_18 = Point_get_Y_mE07C0D23EC483956CD4BC17D82DF0A3E9A68519F(__this, NULL);
		double L_19 = L_18;
		RuntimeObject* L_20 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_19);
		String_t* L_21;
		L_21 = String_Format_mF8E53122BE8F0F617357DFB75C3912D1242DE263(L_2, L_11, L_14, L_17, L_20, NULL);
		return L_21;
	}
}
IL2CPP_EXTERN_C  String_t* Point_ConvertToString_m0DC34AF9991926CE7D4D79FF0517B342B2F5D7EF_AdjustorThunk (RuntimeObject* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method)
{
	Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Point_ConvertToString_m0DC34AF9991926CE7D4D79FF0517B342B2F5D7EF(_thisAdjusted, ___0_format, ___1_provider, method);
	return _returnValue;
}
// System.Boolean Windows.Foundation.Point::op_Equality(Windows.Foundation.Point,Windows.Foundation.Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Point_op_Equality_m33D33491E850D700F297C2B13B4F1343299603B5 (Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18 ___0_point1, Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18 ___1_point2, const RuntimeMethod* method) 
{
	{
		double L_0;
		L_0 = Point_get_X_mAC668FF9BEC8F6D62D6DDC90567E405F6475F516((&___0_point1), NULL);
		double L_1;
		L_1 = Point_get_X_mAC668FF9BEC8F6D62D6DDC90567E405F6475F516((&___1_point2), NULL);
		if ((!(((double)L_0) == ((double)L_1))))
		{
			goto IL_0021;
		}
	}
	{
		double L_2;
		L_2 = Point_get_Y_mE07C0D23EC483956CD4BC17D82DF0A3E9A68519F((&___0_point1), NULL);
		double L_3;
		L_3 = Point_get_Y_mE07C0D23EC483956CD4BC17D82DF0A3E9A68519F((&___1_point2), NULL);
		return (bool)((((double)L_2) == ((double)L_3))? 1 : 0);
	}

IL_0021:
	{
		return (bool)0;
	}
}
// System.Boolean Windows.Foundation.Point::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Point_Equals_mC7D88653F9E85729F692CBA388FF2E182C3D217A (Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_o;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18 L_1 = (*(Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18*)__this);
		RuntimeObject* L_2 = ___0_o;
		bool L_3;
		L_3 = Point_op_Equality_m33D33491E850D700F297C2B13B4F1343299603B5(L_1, ((*(Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18*)((Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18*)(Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18*)UnBox(L_2, Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18_il2cpp_TypeInfo_var)))), NULL);
		return L_3;
	}

IL_001a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Point_Equals_mC7D88653F9E85729F692CBA388FF2E182C3D217A_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_o, const RuntimeMethod* method)
{
	Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18*>(__this + _offset);
	bool _returnValue;
	_returnValue = Point_Equals_mC7D88653F9E85729F692CBA388FF2E182C3D217A(_thisAdjusted, ___0_o, method);
	return _returnValue;
}
// System.Int32 Windows.Foundation.Point::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Point_GetHashCode_m6E49F6C60648744F723EBE490838421732F67368 (Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* __this, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		double L_0;
		L_0 = Point_get_X_mAC668FF9BEC8F6D62D6DDC90567E405F6475F516(__this, NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline((&V_0), NULL);
		double L_2;
		L_2 = Point_get_Y_mE07C0D23EC483956CD4BC17D82DF0A3E9A68519F(__this, NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline((&V_0), NULL);
		return ((int32_t)(L_1^L_3));
	}
}
IL2CPP_EXTERN_C  int32_t Point_GetHashCode_m6E49F6C60648744F723EBE490838421732F67368_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Point_tC7E550DD1555DAAAA7CA4F85656FA70F81C23B18*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Point_GetHashCode_m6E49F6C60648744F723EBE490838421732F67368(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Double Windows.Foundation.Rect::get_X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rect_get_X_mD53DE44C127855D2EEE420F1EF777FEDA2011606 (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->____x_0;
		return ((double)L_0);
	}
}
IL2CPP_EXTERN_C  double Rect_get_X_mD53DE44C127855D2EEE420F1EF777FEDA2011606_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48*>(__this + _offset);
	double _returnValue;
	_returnValue = Rect_get_X_mD53DE44C127855D2EEE420F1EF777FEDA2011606(_thisAdjusted, method);
	return _returnValue;
}
// System.Double Windows.Foundation.Rect::get_Y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rect_get_Y_m5C69D6C5901069AB84553C51AEDD94096988053E (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->____y_1;
		return ((double)L_0);
	}
}
IL2CPP_EXTERN_C  double Rect_get_Y_m5C69D6C5901069AB84553C51AEDD94096988053E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48*>(__this + _offset);
	double _returnValue;
	_returnValue = Rect_get_Y_m5C69D6C5901069AB84553C51AEDD94096988053E(_thisAdjusted, method);
	return _returnValue;
}
// System.Double Windows.Foundation.Rect::get_Width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rect_get_Width_m9F80175790EF10CDDBC216C3E9434D936D1B12B2 (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->____width_2;
		return ((double)L_0);
	}
}
IL2CPP_EXTERN_C  double Rect_get_Width_m9F80175790EF10CDDBC216C3E9434D936D1B12B2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48*>(__this + _offset);
	double _returnValue;
	_returnValue = Rect_get_Width_m9F80175790EF10CDDBC216C3E9434D936D1B12B2(_thisAdjusted, method);
	return _returnValue;
}
// System.Double Windows.Foundation.Rect::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rect_get_Height_m0E800E01DB6AB38F617A715FF725E5E691A7712E (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->____height_3;
		return ((double)L_0);
	}
}
IL2CPP_EXTERN_C  double Rect_get_Height_m0E800E01DB6AB38F617A715FF725E5E691A7712E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48*>(__this + _offset);
	double _returnValue;
	_returnValue = Rect_get_Height_m0E800E01DB6AB38F617A715FF725E5E691A7712E(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Windows.Foundation.Rect::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_get_IsEmpty_mA4E8E88591999DF4390CDB167A38392AA4F922CF (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->____width_2;
		return (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool Rect_get_IsEmpty_mA4E8E88591999DF4390CDB167A38392AA4F922CF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48*>(__this + _offset);
	bool _returnValue;
	_returnValue = Rect_get_IsEmpty_mA4E8E88591999DF4390CDB167A38392AA4F922CF(_thisAdjusted, method);
	return _returnValue;
}
// System.String Windows.Foundation.Rect::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Rect_ToString_m575A0803BF911384D5067E59D3735BEAADB38E79 (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = Rect_ConvertToString_m76A88C92773CF34913735C03618E9A7EF248C8B0(__this, (String_t*)NULL, (RuntimeObject*)NULL, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Rect_ToString_m575A0803BF911384D5067E59D3735BEAADB38E79_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Rect_ToString_m575A0803BF911384D5067E59D3735BEAADB38E79(_thisAdjusted, method);
	return _returnValue;
}
// System.String Windows.Foundation.Rect::System.IFormattable.ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Rect_System_IFormattable_ToString_mBDA6BC5865066A42E190F9F02E106C3C59DDDAC4 (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_format;
		RuntimeObject* L_1 = ___1_provider;
		String_t* L_2;
		L_2 = Rect_ConvertToString_m76A88C92773CF34913735C03618E9A7EF248C8B0(__this, L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  String_t* Rect_System_IFormattable_ToString_mBDA6BC5865066A42E190F9F02E106C3C59DDDAC4_AdjustorThunk (RuntimeObject* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method)
{
	Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Rect_System_IFormattable_ToString_mBDA6BC5865066A42E190F9F02E106C3C59DDDAC4(_thisAdjusted, ___0_format, ___1_provider, method);
	return _returnValue;
}
// System.String Windows.Foundation.Rect::ConvertToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Rect_ConvertToString_m76A88C92773CF34913735C03618E9A7EF248C8B0 (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31D728CD5FA12D28FCC14C579DF7875E7C174534);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D8BB5FCB34FE62BC4A2414D9447587D01FFE3DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral885F28AD0F275CAABA9BEB917A5AE6307D96F9C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5FAF5AE74B9C40ED31265C48562D4856880CFC9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD80E33EE75795F0CD6F15429F6C597A90B5E2DA6);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		bool L_0;
		L_0 = Rect_get_IsEmpty_mA4E8E88591999DF4390CDB167A38392AA4F922CF(__this, NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		return _stringLiteralD80E33EE75795F0CD6F15429F6C597A90B5E2DA6;
	}

IL_000e:
	{
		RuntimeObject* L_1 = ___1_provider;
		Il2CppChar L_2;
		L_2 = TokenizerHelper_GetNumericListSeparator_m4871D4F3FC86E6FCB24A4954FCC75AE60284CE86(L_1, NULL);
		V_0 = L_2;
		RuntimeObject* L_3 = ___1_provider;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral31D728CD5FA12D28FCC14C579DF7875E7C174534);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral31D728CD5FA12D28FCC14C579DF7875E7C174534);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		String_t* L_7 = ___0_format;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_6;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral885F28AD0F275CAABA9BEB917A5AE6307D96F9C1);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral885F28AD0F275CAABA9BEB917A5AE6307D96F9C1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		String_t* L_10 = ___0_format;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_9;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral5D8BB5FCB34FE62BC4A2414D9447587D01FFE3DC);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral5D8BB5FCB34FE62BC4A2414D9447587D01FFE3DC);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		String_t* L_13 = ___0_format;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_13);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_12;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteralB5FAF5AE74B9C40ED31265C48562D4856880CFC9);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralB5FAF5AE74B9C40ED31265C48562D4856880CFC9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		String_t* L_16 = ___0_format;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_16);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_15;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		String_t* L_18;
		L_18 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_17, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_19;
		Il2CppChar L_21 = V_0;
		Il2CppChar L_22 = L_21;
		RuntimeObject* L_23 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_23);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = L_20;
		float L_25 = __this->____x_0;
		float L_26 = L_25;
		RuntimeObject* L_27 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_27);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_27);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28 = L_24;
		float L_29 = __this->____y_1;
		float L_30 = L_29;
		RuntimeObject* L_31 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_31);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_31);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = L_28;
		float L_33 = __this->____width_2;
		float L_34 = L_33;
		RuntimeObject* L_35 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_34);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_35);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_35);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_36 = L_32;
		float L_37 = __this->____height_3;
		float L_38 = L_37;
		RuntimeObject* L_39 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_38);
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_39);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_39);
		String_t* L_40;
		L_40 = String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75(L_3, L_18, L_36, NULL);
		return L_40;
	}
}
IL2CPP_EXTERN_C  String_t* Rect_ConvertToString_m76A88C92773CF34913735C03618E9A7EF248C8B0_AdjustorThunk (RuntimeObject* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method)
{
	Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Rect_ConvertToString_m76A88C92773CF34913735C03618E9A7EF248C8B0(_thisAdjusted, ___0_format, ___1_provider, method);
	return _returnValue;
}
// System.Boolean Windows.Foundation.Rect::op_Equality(Windows.Foundation.Rect,Windows.Foundation.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_op_Equality_m3549FFF5B7DC54E7376C0F93F2951D97466ECF34 (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48 ___0_rect1, Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48 ___1_rect2, const RuntimeMethod* method) 
{
	{
		double L_0;
		L_0 = Rect_get_X_mD53DE44C127855D2EEE420F1EF777FEDA2011606((&___0_rect1), NULL);
		double L_1;
		L_1 = Rect_get_X_mD53DE44C127855D2EEE420F1EF777FEDA2011606((&___1_rect2), NULL);
		if ((!(((double)L_0) == ((double)L_1))))
		{
			goto IL_0041;
		}
	}
	{
		double L_2;
		L_2 = Rect_get_Y_m5C69D6C5901069AB84553C51AEDD94096988053E((&___0_rect1), NULL);
		double L_3;
		L_3 = Rect_get_Y_m5C69D6C5901069AB84553C51AEDD94096988053E((&___1_rect2), NULL);
		if ((!(((double)L_2) == ((double)L_3))))
		{
			goto IL_0041;
		}
	}
	{
		double L_4;
		L_4 = Rect_get_Width_m9F80175790EF10CDDBC216C3E9434D936D1B12B2((&___0_rect1), NULL);
		double L_5;
		L_5 = Rect_get_Width_m9F80175790EF10CDDBC216C3E9434D936D1B12B2((&___1_rect2), NULL);
		if ((!(((double)L_4) == ((double)L_5))))
		{
			goto IL_0041;
		}
	}
	{
		double L_6;
		L_6 = Rect_get_Height_m0E800E01DB6AB38F617A715FF725E5E691A7712E((&___0_rect1), NULL);
		double L_7;
		L_7 = Rect_get_Height_m0E800E01DB6AB38F617A715FF725E5E691A7712E((&___1_rect2), NULL);
		return (bool)((((double)L_6) == ((double)L_7))? 1 : 0);
	}

IL_0041:
	{
		return (bool)0;
	}
}
// System.Boolean Windows.Foundation.Rect::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_Equals_m6AD03C1D21160F8EC6CF7D4976FFBD1DEB620F28 (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_o;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48 L_1 = (*(Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48*)__this);
		RuntimeObject* L_2 = ___0_o;
		bool L_3;
		L_3 = Rect_op_Equality_m3549FFF5B7DC54E7376C0F93F2951D97466ECF34(L_1, ((*(Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48*)((Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48*)(Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48*)UnBox(L_2, Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48_il2cpp_TypeInfo_var)))), NULL);
		return L_3;
	}

IL_001a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Rect_Equals_m6AD03C1D21160F8EC6CF7D4976FFBD1DEB620F28_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_o, const RuntimeMethod* method)
{
	Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48*>(__this + _offset);
	bool _returnValue;
	_returnValue = Rect_Equals_m6AD03C1D21160F8EC6CF7D4976FFBD1DEB620F28(_thisAdjusted, ___0_o, method);
	return _returnValue;
}
// System.Int32 Windows.Foundation.Rect::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rect_GetHashCode_m5123E2AC802F26FEE118D65606BC3F1E3586F561 (Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* __this, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		double L_0;
		L_0 = Rect_get_X_mD53DE44C127855D2EEE420F1EF777FEDA2011606(__this, NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline((&V_0), NULL);
		double L_2;
		L_2 = Rect_get_Y_m5C69D6C5901069AB84553C51AEDD94096988053E(__this, NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline((&V_0), NULL);
		double L_4;
		L_4 = Rect_get_Width_m9F80175790EF10CDDBC216C3E9434D936D1B12B2(__this, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline((&V_0), NULL);
		double L_6;
		L_6 = Rect_get_Height_m0E800E01DB6AB38F617A715FF725E5E691A7712E(__this, NULL);
		V_0 = L_6;
		int32_t L_7;
		L_7 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline((&V_0), NULL);
		return ((int32_t)(((int32_t)(((int32_t)(L_1^L_3))^L_5))^L_7));
	}
}
IL2CPP_EXTERN_C  int32_t Rect_GetHashCode_m5123E2AC802F26FEE118D65606BC3F1E3586F561_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Rect_t30CC1879BAAB779EAEA49A91ACA636D57101EE48*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Rect_GetHashCode_m5123E2AC802F26FEE118D65606BC3F1E3586F561(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Double Windows.Foundation.Size::get_Width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Size_get_Width_m74FFF679A5ADEB42DD824E74ACA768528013B9FE (Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->____width_0;
		return ((double)L_0);
	}
}
IL2CPP_EXTERN_C  double Size_get_Width_m74FFF679A5ADEB42DD824E74ACA768528013B9FE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05*>(__this + _offset);
	double _returnValue;
	_returnValue = Size_get_Width_m74FFF679A5ADEB42DD824E74ACA768528013B9FE(_thisAdjusted, method);
	return _returnValue;
}
// System.Double Windows.Foundation.Size::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Size_get_Height_mD0F7CCD33744D910C1A649C10405B305A653C438 (Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->____height_1;
		return ((double)L_0);
	}
}
IL2CPP_EXTERN_C  double Size_get_Height_mD0F7CCD33744D910C1A649C10405B305A653C438_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05*>(__this + _offset);
	double _returnValue;
	_returnValue = Size_get_Height_mD0F7CCD33744D910C1A649C10405B305A653C438(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Windows.Foundation.Size::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Size_get_IsEmpty_m233BF3475EAD36A1EF8D7250E152DDD8869DEDBD (Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* __this, const RuntimeMethod* method) 
{
	{
		double L_0;
		L_0 = Size_get_Width_m74FFF679A5ADEB42DD824E74ACA768528013B9FE(__this, NULL);
		return (bool)((((double)L_0) < ((double)(0.0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool Size_get_IsEmpty_m233BF3475EAD36A1EF8D7250E152DDD8869DEDBD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05*>(__this + _offset);
	bool _returnValue;
	_returnValue = Size_get_IsEmpty_m233BF3475EAD36A1EF8D7250E152DDD8869DEDBD(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Windows.Foundation.Size::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Size_Equals_m99B137315F21F8D280C7DCA393C49CAE375CB9BE (Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* __this, RuntimeObject* ___0_o, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_o;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05 L_1 = (*(Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05*)__this);
		RuntimeObject* L_2 = ___0_o;
		bool L_3;
		L_3 = Size_Equals_m66FBC9547822C931D7BD48CDE633BD8E1A939C42(L_1, ((*(Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05*)((Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05*)(Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05*)UnBox(L_2, Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05_il2cpp_TypeInfo_var)))), NULL);
		return L_3;
	}

IL_001a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Size_Equals_m99B137315F21F8D280C7DCA393C49CAE375CB9BE_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_o, const RuntimeMethod* method)
{
	Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05*>(__this + _offset);
	bool _returnValue;
	_returnValue = Size_Equals_m99B137315F21F8D280C7DCA393C49CAE375CB9BE(_thisAdjusted, ___0_o, method);
	return _returnValue;
}
// System.Int32 Windows.Foundation.Size::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Size_GetHashCode_m04D8F41A1214F62E428C5009BEDE49D7E320E720 (Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* __this, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		bool L_0;
		L_0 = Size_get_IsEmpty_m233BF3475EAD36A1EF8D7250E152DDD8869DEDBD(__this, NULL);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		double L_1;
		L_1 = Size_get_Width_m74FFF679A5ADEB42DD824E74ACA768528013B9FE(__this, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline((&V_0), NULL);
		double L_3;
		L_3 = Size_get_Height_mD0F7CCD33744D910C1A649C10405B305A653C438(__this, NULL);
		V_0 = L_3;
		int32_t L_4;
		L_4 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline((&V_0), NULL);
		return ((int32_t)(L_2^L_4));
	}
}
IL2CPP_EXTERN_C  int32_t Size_GetHashCode_m04D8F41A1214F62E428C5009BEDE49D7E320E720_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Size_GetHashCode_m04D8F41A1214F62E428C5009BEDE49D7E320E720(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Windows.Foundation.Size::Equals(Windows.Foundation.Size,Windows.Foundation.Size)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Size_Equals_m66FBC9547822C931D7BD48CDE633BD8E1A939C42 (Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05 ___0_size1, Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05 ___1_size2, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		bool L_0;
		L_0 = Size_get_IsEmpty_m233BF3475EAD36A1EF8D7250E152DDD8869DEDBD((&___0_size1), NULL);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		bool L_1;
		L_1 = Size_get_IsEmpty_m233BF3475EAD36A1EF8D7250E152DDD8869DEDBD((&___1_size2), NULL);
		return L_1;
	}

IL_0011:
	{
		double L_2;
		L_2 = Size_get_Width_m74FFF679A5ADEB42DD824E74ACA768528013B9FE((&___0_size1), NULL);
		V_0 = L_2;
		double L_3;
		L_3 = Size_get_Width_m74FFF679A5ADEB42DD824E74ACA768528013B9FE((&___1_size2), NULL);
		bool L_4;
		L_4 = Double_Equals_mAB526D98719C44EA42107A297B23A739F2E14138((&V_0), L_3, NULL);
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		double L_5;
		L_5 = Size_get_Height_mD0F7CCD33744D910C1A649C10405B305A653C438((&___0_size1), NULL);
		V_0 = L_5;
		double L_6;
		L_6 = Size_get_Height_mD0F7CCD33744D910C1A649C10405B305A653C438((&___1_size2), NULL);
		bool L_7;
		L_7 = Double_Equals_mAB526D98719C44EA42107A297B23A739F2E14138((&V_0), L_6, NULL);
		return L_7;
	}

IL_0040:
	{
		return (bool)0;
	}
}
// System.String Windows.Foundation.Size::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Size_ToString_m8DF428BA923955EFDBF12C368AFCB2CFA0D6C919 (Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32189949CB1CA4A6EBB1A643EBE2DB69713D5407);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9051F83C0785BDA27338FED014D0A4D698A2598A);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = Size_get_IsEmpty_m233BF3475EAD36A1EF8D7250E152DDD8869DEDBD(__this, NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		return _stringLiteral32189949CB1CA4A6EBB1A643EBE2DB69713D5407;
	}

IL_000e:
	{
		float L_1 = __this->____width_0;
		float L_2 = L_1;
		RuntimeObject* L_3 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_2);
		float L_4 = __this->____height_1;
		float L_5 = L_4;
		RuntimeObject* L_6 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral9051F83C0785BDA27338FED014D0A4D698A2598A, L_3, L_6, NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C  String_t* Size_ToString_m8DF428BA923955EFDBF12C368AFCB2CFA0D6C919_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Size_t463A0E21871C29D10F032F5EF3EAF615806D8A05*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Size_ToString_m8DF428BA923955EFDBF12C368AFCB2CFA0D6C919(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Char Windows.Foundation.TokenizerHelper::GetNumericListSeparator(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar TokenizerHelper_GetNumericListSeparator_m4871D4F3FC86E6FCB24A4954FCC75AE60284CE86 (RuntimeObject* ___0_provider, const RuntimeMethod* method) 
{
	Il2CppChar V_0 = 0x0;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* V_1 = NULL;
	{
		V_0 = ((int32_t)44);
		RuntimeObject* L_0 = ___0_provider;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_1;
		L_1 = NumberFormatInfo_GetInstance_m705987E5E7D3E5EC5C5DD2D088FBC9BCBA0FC31F(L_0, NULL);
		V_1 = L_1;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_2 = V_1;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = NumberFormatInfo_get_NumberDecimalSeparator_m7413FA8739F3FA6F5D61B54331DBF3232FC6BFC7_inline(L_2, NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		Il2CppChar L_5 = V_0;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_6 = V_1;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = NumberFormatInfo_get_NumberDecimalSeparator_m7413FA8739F3FA6F5D61B54331DBF3232FC6BFC7_inline(L_6, NULL);
		NullCheck(L_7);
		Il2CppChar L_8;
		L_8 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_7, 0, NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)L_8))))
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)59);
	}

IL_002a:
	{
		Il2CppChar L_9 = V_0;
		return L_9;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.WindowsRuntimeSystemExtensions::ConcatenateCancelTokens(System.Threading.CancellationToken,System.Threading.CancellationTokenSource,System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeSystemExtensions_ConcatenateCancelTokens_m3133AB9959425B6E90C6C15E896B41053ACD051E (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_source, CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___1_sink, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___2_concatenationLifetime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_0_mD977D076DE0943CCA179A1479BE87E7DD9DD5FFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_1_mF86A2FC994E549444C290DF7259F9D64C6CFD209_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B2_0 = NULL;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* G_B2_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B1_0 = NULL;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* G_B1_1 = NULL;
	Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB* G_B4_0 = NULL;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* G_B4_1 = NULL;
	Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB* G_B3_0 = NULL;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* G_B3_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_il2cpp_TypeInfo_var);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ((U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = (&___0_source);
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = (&___0_source);
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_il2cpp_TypeInfo_var);
		U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2* L_2 = ((U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_0_mD977D076DE0943CCA179A1479BE87E7DD9DD5FFC_RuntimeMethod_var), NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4 = L_3;
		((U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1), (void*)L_4);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_0021:
	{
		CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_5 = ___1_sink;
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_6;
		L_6 = CancellationToken_Register_m3FF09C47C4EE3D6677023BE242DF174594B81859(G_B2_1, G_B2_0, L_5, NULL);
		V_0 = L_6;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_7 = ___2_concatenationLifetime;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_il2cpp_TypeInfo_var);
		Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB* L_8 = ((U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_il2cpp_TypeInfo_var))->___U3CU3E9__0_1_2;
		Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB* L_9 = L_8;
		G_B3_0 = L_9;
		G_B3_1 = L_7;
		if (L_9)
		{
			G_B4_0 = L_9;
			G_B4_1 = L_7;
			goto IL_0048;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_il2cpp_TypeInfo_var);
		U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2* L_10 = ((U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB* L_11 = (Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB*)il2cpp_codegen_object_new(Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Action_2__ctor_mCB8799E12AB6CA46E55E300245D89C3B2A3955E9(L_11, L_10, (intptr_t)((void*)U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_1_mF86A2FC994E549444C290DF7259F9D64C6CFD209_RuntimeMethod_var), NULL);
		Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB* L_12 = L_11;
		((U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_il2cpp_TypeInfo_var))->___U3CU3E9__0_1_2 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_il2cpp_TypeInfo_var))->___U3CU3E9__0_1_2), (void*)L_12);
		G_B4_0 = L_12;
		G_B4_1 = G_B3_1;
	}

IL_0048:
	{
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_13 = V_0;
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_14 = L_13;
		RuntimeObject* L_15 = Box(CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_il2cpp_TypeInfo_var, &L_14);
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_16;
		L_16 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		il2cpp_codegen_runtime_class_init_inline(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_17;
		L_17 = TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline(NULL);
		NullCheck(G_B4_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_18;
		L_18 = Task_ContinueWith_m332FAFE0E12D9D53BEEDE60B086EB4816462834F(G_B4_1, G_B4_0, L_15, L_16, ((int32_t)524288), L_17, NULL);
		return;
	}
}
// System.Runtime.CompilerServices.TaskAwaiter System.WindowsRuntimeSystemExtensions::GetAwaiter(Windows.Foundation.IAsyncAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 WindowsRuntimeSystemExtensions_GetAwaiter_m3A5E0B4F350C1081B7AC6C317A6C7A4BB48568DA (RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_source;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1;
		L_1 = WindowsRuntimeSystemExtensions_AsTask_mB8E6965E9E677F434F657CA710C845F1F1CF1871(L_0, NULL);
		NullCheck(L_1);
		TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_2;
		L_2 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_1, NULL);
		return L_2;
	}
}
// System.Threading.Tasks.Task System.WindowsRuntimeSystemExtensions::AsTask(Windows.Foundation.IAsyncAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WindowsRuntimeSystemExtensions_AsTask_mB8E6965E9E677F434F657CA710C845F1F1CF1871 (RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_source;
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1;
		L_1 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_2;
		L_2 = WindowsRuntimeSystemExtensions_AsTask_mF9FE6AC518F897C24E4019925AE17ACD9247BF71(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Threading.Tasks.Task System.WindowsRuntimeSystemExtensions::AsTask(Windows.Foundation.IAsyncAction,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WindowsRuntimeSystemExtensions_AsTask_mF9FE6AC518F897C24E4019925AE17ACD9247BF71 (RuntimeObject* ___0_source, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncActionCompletedHandler_tC851091B8156847FF3756ADAC162533166114B39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncInfoToTaskBridge_1_CompleteFromAsyncAction_m6FFC52A7DAC6B0B54212A18D43BE2878D6F4448A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncInfoToTaskBridge_1_RegisterForCancellation_mE11505DDE53B9CB26612D9B0926828E0CE9D4F8E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncInfoToTaskBridge_1__ctor_m8FABCFD55BE870775D720E8E32FAF1C75EE30E17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncInfoToTaskBridge_1_t3F837B3047E80D2A3A6A19CB1CA845D924B9B44D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncAction_t22D4C50DFEEE7E0C6D935892BAEA22708722474B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncInfo_t06F1B6F69BB42B42818C2FB052DCCC101801540D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_m9B716A966057DE59BCF359AED609AEDA36EBECBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncActionAdapter_t91D08EB4436456401F093BFB3A40A13BE5E8D8F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_CancelTokenSource_m81CD9E731A092B7BF96E7A62B0F442EC8999ED16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_CompletedSynchronously_m91F86C3DFD94FF545C2ABFF103F41FA07C0F53F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_get_Task_mB35A83F4B62D6A9F1A10D59BC2869EF7C8E535E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TaskToAsyncActionAdapter_t91D08EB4436456401F093BFB3A40A13BE5E8D8F3* V_0 = NULL;
	AsyncInfoToTaskBridge_1_t3F837B3047E80D2A3A6A19CB1CA845D924B9B44D* V_1 = NULL;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_2 = NULL;
	int32_t V_3 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED G_B16_0;
	memset((&G_B16_0), 0, sizeof(G_B16_0));
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeSystemExtensions_AsTask_mF9FE6AC518F897C24E4019925AE17ACD9247BF71_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_source;
		V_0 = ((TaskToAsyncActionAdapter_t91D08EB4436456401F093BFB3A40A13BE5E8D8F3*)IsInstClass((RuntimeObject*)L_2, TaskToAsyncActionAdapter_t91D08EB4436456401F093BFB3A40A13BE5E8D8F3_il2cpp_TypeInfo_var));
		TaskToAsyncActionAdapter_t91D08EB4436456401F093BFB3A40A13BE5E8D8F3* L_3 = V_0;
		if (!L_3)
		{
			goto IL_004f;
		}
	}
	{
		TaskToAsyncActionAdapter_t91D08EB4436456401F093BFB3A40A13BE5E8D8F3* L_4 = V_0;
		NullCheck(L_4);
		bool L_5;
		L_5 = TaskToAsyncInfoAdapter_4_get_CompletedSynchronously_m91F86C3DFD94FF545C2ABFF103F41FA07C0F53F1(L_4, TaskToAsyncInfoAdapter_4_get_CompletedSynchronously_m91F86C3DFD94FF545C2ABFF103F41FA07C0F53F1_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_004f;
		}
	}
	{
		TaskToAsyncActionAdapter_t91D08EB4436456401F093BFB3A40A13BE5E8D8F3* L_6 = V_0;
		NullCheck(L_6);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_7;
		L_7 = TaskToAsyncInfoAdapter_4_get_Task_mB35A83F4B62D6A9F1A10D59BC2869EF7C8E535E9(L_6, TaskToAsyncInfoAdapter_4_get_Task_mB35A83F4B62D6A9F1A10D59BC2869EF7C8E535E9_RuntimeMethod_var);
		V_2 = L_7;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_8 = V_2;
		NullCheck(L_8);
		bool L_9;
		L_9 = Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831(L_8, NULL);
		if (L_9)
		{
			goto IL_004d;
		}
	}
	{
		bool L_10;
		L_10 = CancellationToken_get_CanBeCanceled_mC3751330B171DB14B70B9BAAD90A7D098A2309EC((&___1_cancellationToken), NULL);
		if (!L_10)
		{
			goto IL_004d;
		}
	}
	{
		TaskToAsyncActionAdapter_t91D08EB4436456401F093BFB3A40A13BE5E8D8F3* L_11 = V_0;
		NullCheck(L_11);
		CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_12;
		L_12 = TaskToAsyncInfoAdapter_4_get_CancelTokenSource_m81CD9E731A092B7BF96E7A62B0F442EC8999ED16_inline(L_11, TaskToAsyncInfoAdapter_4_get_CancelTokenSource_m81CD9E731A092B7BF96E7A62B0F442EC8999ED16_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_004d;
		}
	}
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_13 = ___1_cancellationToken;
		TaskToAsyncActionAdapter_t91D08EB4436456401F093BFB3A40A13BE5E8D8F3* L_14 = V_0;
		NullCheck(L_14);
		CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_15;
		L_15 = TaskToAsyncInfoAdapter_4_get_CancelTokenSource_m81CD9E731A092B7BF96E7A62B0F442EC8999ED16_inline(L_14, TaskToAsyncInfoAdapter_4_get_CancelTokenSource_m81CD9E731A092B7BF96E7A62B0F442EC8999ED16_RuntimeMethod_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_16 = V_2;
		WindowsRuntimeSystemExtensions_ConcatenateCancelTokens_m3133AB9959425B6E90C6C15E896B41053ACD051E(L_13, L_15, L_16, NULL);
	}

IL_004d:
	{
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_17 = V_2;
		return L_17;
	}

IL_004f:
	{
		RuntimeObject* L_18 = ___0_source;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* Windows.Foundation.AsyncStatus Windows.Foundation.IAsyncInfo::get_Status() */, IAsyncInfo_t06F1B6F69BB42B42818C2FB052DCCC101801540D_il2cpp_TypeInfo_var, L_18);
		V_3 = L_19;
		int32_t L_20 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_20, 1)))
		{
			case 0:
			{
				goto IL_006c;
			}
			case 1:
			{
				goto IL_0083;
			}
			case 2:
			{
				goto IL_0072;
			}
		}
	}
	{
		goto IL_009b;
	}

IL_006c:
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_21;
		L_21 = Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline(NULL);
		return L_21;
	}

IL_0072:
	{
		RuntimeObject* L_22 = ___0_source;
		NullCheck(L_22);
		Exception_t* L_23;
		L_23 = InterfaceFuncInvoker0< Exception_t* >::Invoke(2 /* System.Exception Windows.Foundation.IAsyncInfo::get_ErrorCode() */, IAsyncInfo_t06F1B6F69BB42B42818C2FB052DCCC101801540D_il2cpp_TypeInfo_var, L_22);
		Exception_t* L_24;
		L_24 = WindowsRuntimeSystemExtensions_AttachRestrictedErrorInfo_mDDF5CD061CF17571ADA590A19F8C391BCDB24271(L_23, NULL);
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_25;
		L_25 = Task_FromException_m7E03FBDDCA95F6577A18B1D1F708738734F63195(L_24, NULL);
		return L_25;
	}

IL_0083:
	{
		bool L_26;
		L_26 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((&___1_cancellationToken), NULL);
		if (L_26)
		{
			goto IL_0094;
		}
	}
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_27;
		memset((&L_27), 0, sizeof(L_27));
		CancellationToken__ctor_m5DAD339D4A9DEF9962B7EF1E30564BADC78E9BD6((&L_27), (bool)1, /*hidden argument*/NULL);
		G_B16_0 = L_27;
		goto IL_0095;
	}

IL_0094:
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_28 = ___1_cancellationToken;
		G_B16_0 = L_28;
	}

IL_0095:
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_29;
		L_29 = Task_FromCanceled_m2C682C247C1D89F6DD5A186BBBFEC1544921308E(G_B16_0, NULL);
		return L_29;
	}

IL_009b:
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_30 = ___1_cancellationToken;
		AsyncInfoToTaskBridge_1_t3F837B3047E80D2A3A6A19CB1CA845D924B9B44D* L_31 = (AsyncInfoToTaskBridge_1_t3F837B3047E80D2A3A6A19CB1CA845D924B9B44D*)il2cpp_codegen_object_new(AsyncInfoToTaskBridge_1_t3F837B3047E80D2A3A6A19CB1CA845D924B9B44D_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		AsyncInfoToTaskBridge_1__ctor_m8FABCFD55BE870775D720E8E32FAF1C75EE30E17(L_31, L_30, AsyncInfoToTaskBridge_1__ctor_m8FABCFD55BE870775D720E8E32FAF1C75EE30E17_RuntimeMethod_var);
		V_1 = L_31;
	}
	try
	{// begin try (depth: 1)
		RuntimeObject* L_32 = ___0_source;
		AsyncInfoToTaskBridge_1_t3F837B3047E80D2A3A6A19CB1CA845D924B9B44D* L_33 = V_1;
		AsyncActionCompletedHandler_tC851091B8156847FF3756ADAC162533166114B39* L_34 = (AsyncActionCompletedHandler_tC851091B8156847FF3756ADAC162533166114B39*)il2cpp_codegen_object_new(AsyncActionCompletedHandler_tC851091B8156847FF3756ADAC162533166114B39_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		AsyncActionCompletedHandler__ctor_mF61474211F61B3BF75C11C5E012E1717D87BCFE4(L_34, L_33, (intptr_t)((void*)AsyncInfoToTaskBridge_1_CompleteFromAsyncAction_m6FFC52A7DAC6B0B54212A18D43BE2878D6F4448A_RuntimeMethod_var), NULL);
		NullCheck(L_32);
		InterfaceActionInvoker1< AsyncActionCompletedHandler_tC851091B8156847FF3756ADAC162533166114B39* >::Invoke(0 /* System.Void Windows.Foundation.IAsyncAction::put_Completed(Windows.Foundation.AsyncActionCompletedHandler) */, IAsyncAction_t22D4C50DFEEE7E0C6D935892BAEA22708722474B_il2cpp_TypeInfo_var, L_32, L_34);
		AsyncInfoToTaskBridge_1_t3F837B3047E80D2A3A6A19CB1CA845D924B9B44D* L_35 = V_1;
		RuntimeObject* L_36 = ___0_source;
		NullCheck(L_35);
		AsyncInfoToTaskBridge_1_RegisterForCancellation_mE11505DDE53B9CB26612D9B0926828E0CE9D4F8E(L_35, L_36, AsyncInfoToTaskBridge_1_RegisterForCancellation_mE11505DDE53B9CB26612D9B0926828E0CE9D4F8E_RuntimeMethod_var);
		goto IL_00c0;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00bd;
		}
		throw e;
	}

CATCH_00bd:
	{// begin catch(System.Object)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00c0;
	}// end catch (depth: 1)

IL_00c0:
	{
		AsyncInfoToTaskBridge_1_t3F837B3047E80D2A3A6A19CB1CA845D924B9B44D* L_37 = V_1;
		NullCheck(L_37);
		Task_1_tB82A632CF7C85E91A9F7491058C7BDF8F744E211* L_38;
		L_38 = TaskCompletionSource_1_get_Task_m9B716A966057DE59BCF359AED609AEDA36EBECBE_inline(L_37, TaskCompletionSource_1_get_Task_m9B716A966057DE59BCF359AED609AEDA36EBECBE_RuntimeMethod_var);
		return L_38;
	}
}
// System.Exception System.WindowsRuntimeSystemExtensions::AttachRestrictedErrorInfo(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* WindowsRuntimeSystemExtensions_AttachRestrictedErrorInfo_mDDF5CD061CF17571ADA590A19F8C391BCDB24271 (Exception_t* ___0_e, const RuntimeMethod* method) 
{
	{
		Exception_t* L_0 = ___0_e;
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
// System.Void System.WindowsRuntimeSystemExtensions/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mE7C28A8364615B91DCD10682EE08D04CE42B6D7B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2* L_0 = (U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2*)il2cpp_codegen_object_new(U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m631504CD719194B811BEC204BAFE9BBB734B3163(L_0, NULL);
		((U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void System.WindowsRuntimeSystemExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m631504CD719194B811BEC204BAFE9BBB734B3163 (U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void System.WindowsRuntimeSystemExtensions/<>c::<ConcatenateCancelTokens>b__0_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_0_mD977D076DE0943CCA179A1479BE87E7DD9DD5FFC (U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2* __this, RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_state;
		NullCheck(((CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B*)CastclassClass((RuntimeObject*)L_0, CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_il2cpp_TypeInfo_var)));
		CancellationTokenSource_Cancel_m64C48B9DCD25A9EBEC8DC170C79441564BC3755B(((CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B*)CastclassClass((RuntimeObject*)L_0, CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_il2cpp_TypeInfo_var)), NULL);
		return;
	}
}
// System.Void System.WindowsRuntimeSystemExtensions/<>c::<ConcatenateCancelTokens>b__0_1(System.Threading.Tasks.Task,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CConcatenateCancelTokensU3Eb__0_1_mF86A2FC994E549444C290DF7259F9D64C6CFD209 (U3CU3Ec_t678B6EA47CA63511310194953B54091E28640EC2* __this, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___0__, RuntimeObject* ___1_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___1_state;
		V_0 = ((*(CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389*)((CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389*)(CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389*)UnBox(L_0, CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_il2cpp_TypeInfo_var))));
		CancellationTokenRegistration_Dispose_m9EAF1228573E8278DDF7A3BEB5EE0E18DA6DC0E1((&V_0), NULL);
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
// System.UInt32 System.Threading.Tasks.AsyncInfoIdGenerator::CreateNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AsyncInfoIdGenerator_CreateNext_m932AB52C3010D5CA99C5A71D842D95D1902381B2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncInfoIdGenerator_t9A2B1D1850C86EBEEBDF53B62B5CD99F97D87C96_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* V_0 = NULL;
	bool V_1 = false;
	uint32_t V_2 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncInfoIdGenerator_t9A2B1D1850C86EBEEBDF53B62B5CD99F97D87C96_il2cpp_TypeInfo_var);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = ((AsyncInfoIdGenerator_t9A2B1D1850C86EBEEBDF53B62B5CD99F97D87C96_StaticFields*)il2cpp_codegen_static_fields_for(AsyncInfoIdGenerator_t9A2B1D1850C86EBEEBDF53B62B5CD99F97D87C96_il2cpp_TypeInfo_var))->___s_idGenerator_0;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0023:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_002c;
					}
				}
				{
					Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_002c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			il2cpp_codegen_runtime_class_init_inline(AsyncInfoIdGenerator_t9A2B1D1850C86EBEEBDF53B62B5CD99F97D87C96_il2cpp_TypeInfo_var);
			Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_4 = ((AsyncInfoIdGenerator_t9A2B1D1850C86EBEEBDF53B62B5CD99F97D87C96_StaticFields*)il2cpp_codegen_static_fields_for(AsyncInfoIdGenerator_t9A2B1D1850C86EBEEBDF53B62B5CD99F97D87C96_il2cpp_TypeInfo_var))->___s_idGenerator_0;
			NullCheck(L_4);
			int32_t L_5;
			L_5 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_4, 1, ((int32_t)2147483647LL));
			V_2 = L_5;
			goto IL_002d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002d:
	{
		uint32_t L_6 = V_2;
		return L_6;
	}
}
// System.UInt32 System.Threading.Tasks.AsyncInfoIdGenerator::EnsureInitializedThreadsafe(System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t AsyncInfoIdGenerator_EnsureInitializedThreadsafe_mD7C04937516F372D5DDC54B259539C3254D6FBF0 (uint32_t* ___0_id, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncInfoIdGenerator_t9A2B1D1850C86EBEEBDF53B62B5CD99F97D87C96_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		uint32_t* L_0 = ___0_id;
		int32_t L_1 = *((uint32_t*)L_0);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)2147483647LL))))
		{
			goto IL_000c;
		}
	}
	{
		uint32_t* L_2 = ___0_id;
		int32_t L_3 = *((uint32_t*)L_2);
		return L_3;
	}

IL_000c:
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncInfoIdGenerator_t9A2B1D1850C86EBEEBDF53B62B5CD99F97D87C96_il2cpp_TypeInfo_var);
		uint32_t L_4;
		L_4 = AsyncInfoIdGenerator_CreateNext_m932AB52C3010D5CA99C5A71D842D95D1902381B2(NULL);
		V_0 = L_4;
		uint32_t* L_5 = ___0_id;
		V_1 = L_5;
		uint32_t* L_6 = V_1;
		uint32_t L_7 = V_0;
		int32_t L_8;
		L_8 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717((int32_t*)((uintptr_t)L_6), L_7, ((int32_t)2147483647LL), NULL);
		V_2 = L_8;
		uint32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)2147483647LL)))))
		{
			goto IL_002c;
		}
	}
	{
		uint32_t L_10 = V_0;
		return L_10;
	}

IL_002c:
	{
		uint32_t L_11 = V_2;
		return L_11;
	}
}
// System.Void System.Threading.Tasks.AsyncInfoIdGenerator::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncInfoIdGenerator__cctor_m7A5173768509360D2682E78A0560FAD32C4A8E15 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncInfoIdGenerator_t9A2B1D1850C86EBEEBDF53B62B5CD99F97D87C96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Random__ctor_mFB386F0C0ED85F26CD069C3527052B81878A2F1E(L_0, ((int32_t)19830118), NULL);
		((AsyncInfoIdGenerator_t9A2B1D1850C86EBEEBDF53B62B5CD99F97D87C96_StaticFields*)il2cpp_codegen_static_fields_for(AsyncInfoIdGenerator_t9A2B1D1850C86EBEEBDF53B62B5CD99F97D87C96_il2cpp_TypeInfo_var))->___s_idGenerator_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AsyncInfoIdGenerator_t9A2B1D1850C86EBEEBDF53B62B5CD99F97D87C96_StaticFields*)il2cpp_codegen_static_fields_for(AsyncInfoIdGenerator_t9A2B1D1850C86EBEEBDF53B62B5CD99F97D87C96_il2cpp_TypeInfo_var))->___s_idGenerator_0), (void*)L_0);
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
// System.Void System.Threading.Tasks.ExceptionDispatchHelper::ThrowAsync(System.Exception,System.Threading.SynchronizationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDispatchHelper_ThrowAsync_m7294BE2E3C7CC75168DD9784E42CC4E91498508D (Exception_t* ___0_exception, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___1_targetContext, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CThrowAsyncU3Eb__0_0_mD18D5AC7CDE989D1C83792DAADAF72653DF5563B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CThrowAsyncU3Eb__0_1_m50457F8A46DF5F5E732C8BD5CB1BB69F4D4F9207_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t474B044207AC3819954D9AE072ACC1AEACA8B5CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B5_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B5_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B4_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B4_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B11_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B11_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B10_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B10_1 = NULL;
	{
		Exception_t* L_0 = ___0_exception;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		Exception_t* L_1 = ___0_exception;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2;
		L_2 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_1, NULL);
		V_0 = L_2;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_3 = ___1_targetContext;
		if (!L_3)
		{
			goto IL_0041;
		}
	}
	try
	{// begin try (depth: 1)
		{
			SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_4 = ___1_targetContext;
			il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t474B044207AC3819954D9AE072ACC1AEACA8B5CE_il2cpp_TypeInfo_var);
			SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_5 = ((U3CU3Ec_t474B044207AC3819954D9AE072ACC1AEACA8B5CE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t474B044207AC3819954D9AE072ACC1AEACA8B5CE_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1;
			SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_6 = L_5;
			G_B4_0 = L_6;
			G_B4_1 = L_4;
			if (L_6)
			{
				G_B5_0 = L_6;
				G_B5_1 = L_4;
				goto IL_002e_1;
			}
		}
		{
			il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t474B044207AC3819954D9AE072ACC1AEACA8B5CE_il2cpp_TypeInfo_var);
			U3CU3Ec_t474B044207AC3819954D9AE072ACC1AEACA8B5CE* L_7 = ((U3CU3Ec_t474B044207AC3819954D9AE072ACC1AEACA8B5CE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t474B044207AC3819954D9AE072ACC1AEACA8B5CE_il2cpp_TypeInfo_var))->___U3CU3E9_0;
			SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_8 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
			NullCheck(L_8);
			SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_8, L_7, (intptr_t)((void*)U3CU3Ec_U3CThrowAsyncU3Eb__0_0_mD18D5AC7CDE989D1C83792DAADAF72653DF5563B_RuntimeMethod_var), NULL);
			SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_9 = L_8;
			((U3CU3Ec_t474B044207AC3819954D9AE072ACC1AEACA8B5CE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t474B044207AC3819954D9AE072ACC1AEACA8B5CE_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1 = L_9;
			Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t474B044207AC3819954D9AE072ACC1AEACA8B5CE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t474B044207AC3819954D9AE072ACC1AEACA8B5CE_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1), (void*)L_9);
			G_B5_0 = L_9;
			G_B5_1 = G_B4_1;
		}

IL_002e_1:
		{
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_10 = V_0;
			NullCheck(G_B5_1);
			VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5 /* System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object) */, G_B5_1, G_B5_0, L_10);
			goto IL_0040;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0036;
		}
		throw e;
	}

CATCH_0036:
	{// begin catch(System.Object)
		Exception_t* L_11 = ___0_exception;
		ExceptionDispatchHelper_ThrowAsync_m7294BE2E3C7CC75168DD9784E42CC4E91498508D(L_11, (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)NULL, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0040;
	}// end catch (depth: 1)

IL_0040:
	{
		return;
	}

IL_0041:
	{
		V_1 = (bool)1;
	}
	try
	{// begin try (depth: 1)
		{
			SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_12 = (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)il2cpp_codegen_object_new(SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
			NullCheck(L_12);
			SynchronizationContext__ctor_m37D995A90765D897A69B7767A14E70E8F1845532(L_12, NULL);
			il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t474B044207AC3819954D9AE072ACC1AEACA8B5CE_il2cpp_TypeInfo_var);
			SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_13 = ((U3CU3Ec_t474B044207AC3819954D9AE072ACC1AEACA8B5CE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t474B044207AC3819954D9AE072ACC1AEACA8B5CE_il2cpp_TypeInfo_var))->___U3CU3E9__0_1_2;
			SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_14 = L_13;
			G_B10_0 = L_14;
			G_B10_1 = L_12;
			if (L_14)
			{
				G_B11_0 = L_14;
				G_B11_1 = L_12;
				goto IL_0067_1;
			}
		}
		{
			il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t474B044207AC3819954D9AE072ACC1AEACA8B5CE_il2cpp_TypeInfo_var);
			U3CU3Ec_t474B044207AC3819954D9AE072ACC1AEACA8B5CE* L_15 = ((U3CU3Ec_t474B044207AC3819954D9AE072ACC1AEACA8B5CE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t474B044207AC3819954D9AE072ACC1AEACA8B5CE_il2cpp_TypeInfo_var))->___U3CU3E9_0;
			SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_16 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
			NullCheck(L_16);
			SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_16, L_15, (intptr_t)((void*)U3CU3Ec_U3CThrowAsyncU3Eb__0_1_m50457F8A46DF5F5E732C8BD5CB1BB69F4D4F9207_RuntimeMethod_var), NULL);
			SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_17 = L_16;
			((U3CU3Ec_t474B044207AC3819954D9AE072ACC1AEACA8B5CE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t474B044207AC3819954D9AE072ACC1AEACA8B5CE_il2cpp_TypeInfo_var))->___U3CU3E9__0_1_2 = L_17;
			Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t474B044207AC3819954D9AE072ACC1AEACA8B5CE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t474B044207AC3819954D9AE072ACC1AEACA8B5CE_il2cpp_TypeInfo_var))->___U3CU3E9__0_1_2), (void*)L_17);
			G_B11_0 = L_17;
			G_B11_1 = G_B10_1;
		}

IL_0067_1:
		{
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_18 = V_0;
			NullCheck(G_B11_1);
			VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5 /* System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object) */, G_B11_1, G_B11_0, L_18);
			goto IL_0074;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_006f;
		}
		throw e;
	}

CATCH_006f:
	{// begin catch(System.Object)
		V_1 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0074;
	}// end catch (depth: 1)

IL_0074:
	{
		bool L_19 = V_1;
		if (L_19)
		{
			goto IL_007d;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_20 = V_0;
		NullCheck(L_20);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_20, NULL);
	}

IL_007d:
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
// System.Void System.Threading.Tasks.ExceptionDispatchHelper/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mD887BC44EABCFB3CEC86F2FAEB58397EA74D3D7C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t474B044207AC3819954D9AE072ACC1AEACA8B5CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t474B044207AC3819954D9AE072ACC1AEACA8B5CE* L_0 = (U3CU3Ec_t474B044207AC3819954D9AE072ACC1AEACA8B5CE*)il2cpp_codegen_object_new(U3CU3Ec_t474B044207AC3819954D9AE072ACC1AEACA8B5CE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mD160B80D5A454A15058602D7D874F5BF944B164F(L_0, NULL);
		((U3CU3Ec_t474B044207AC3819954D9AE072ACC1AEACA8B5CE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t474B044207AC3819954D9AE072ACC1AEACA8B5CE_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t474B044207AC3819954D9AE072ACC1AEACA8B5CE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t474B044207AC3819954D9AE072ACC1AEACA8B5CE_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void System.Threading.Tasks.ExceptionDispatchHelper/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD160B80D5A454A15058602D7D874F5BF944B164F (U3CU3Ec_t474B044207AC3819954D9AE072ACC1AEACA8B5CE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.ExceptionDispatchHelper/<>c::<ThrowAsync>b__0_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CThrowAsyncU3Eb__0_0_mD18D5AC7CDE989D1C83792DAADAF72653DF5563B (U3CU3Ec_t474B044207AC3819954D9AE072ACC1AEACA8B5CE* __this, RuntimeObject* ___0_edi, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_edi;
		NullCheck(((ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)CastclassSealed((RuntimeObject*)L_0, ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757_il2cpp_TypeInfo_var)));
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(((ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)CastclassSealed((RuntimeObject*)L_0, ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757_il2cpp_TypeInfo_var)), NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.ExceptionDispatchHelper/<>c::<ThrowAsync>b__0_1(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CThrowAsyncU3Eb__0_1_m50457F8A46DF5F5E732C8BD5CB1BB69F4D4F9207 (U3CU3Ec_t474B044207AC3819954D9AE072ACC1AEACA8B5CE* __this, RuntimeObject* ___0_edi, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_edi;
		NullCheck(((ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)CastclassSealed((RuntimeObject*)L_0, ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757_il2cpp_TypeInfo_var)));
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(((ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)CastclassSealed((RuntimeObject*)L_0, ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757_il2cpp_TypeInfo_var)), NULL);
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
// System.Void System.Threading.Tasks.TaskToAsyncActionAdapter::GetResults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToAsyncActionAdapter_GetResults_m9456D63999ED740A43B8846086AB1BE31ABF470A (TaskToAsyncActionAdapter_t91D08EB4436456401F093BFB3A40A13BE5E8D8F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToAsyncInfoAdapter_4_GetResultsInternal_m6F1928D5886F367904697C268A4E4AC9CA33EA6F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VoidValueTypeParameter_t2A6A9B3BB1BA26C930A8F73CC53A63192C124F4C L_0;
		L_0 = TaskToAsyncInfoAdapter_4_GetResultsInternal_m6F1928D5886F367904697C268A4E4AC9CA33EA6F(__this, TaskToAsyncInfoAdapter_4_GetResultsInternal_m6F1928D5886F367904697C268A4E4AC9CA33EA6F_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Threading.Tasks.TaskToAsyncActionAdapter::OnCompleted(Windows.Foundation.AsyncActionCompletedHandler,Windows.Foundation.AsyncStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToAsyncActionAdapter_OnCompleted_m0067EF959D36B54683564BF74F3A49E66053DF8E (TaskToAsyncActionAdapter_t91D08EB4436456401F093BFB3A40A13BE5E8D8F3* __this, AsyncActionCompletedHandler_tC851091B8156847FF3756ADAC162533166114B39* ___0_userCompletionHandler, int32_t ___1_asyncStatus, const RuntimeMethod* method) 
{
	{
		AsyncActionCompletedHandler_tC851091B8156847FF3756ADAC162533166114B39* L_0 = ___0_userCompletionHandler;
		int32_t L_1 = ___1_asyncStatus;
		NullCheck(L_0);
		AsyncActionCompletedHandler_Invoke_mC17CE275AEA1DD37BD4F15849A18C43C11BB880C_inline(L_0, __this, L_1, NULL);
		return;
	}
}
// System.Void System.Threading.Tasks.TaskToAsyncActionAdapter::Windows.Foundation.IAsyncAction.put_Completed(Windows.Foundation.AsyncActionCompletedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToAsyncActionAdapter_Windows_Foundation_IAsyncAction_put_Completed_m7DAA14EE0B71FCE0254A5CF69CAB864E72C8CBC9 (TaskToAsyncActionAdapter_t91D08EB4436456401F093BFB3A40A13BE5E8D8F3* __this, AsyncActionCompletedHandler_tC851091B8156847FF3756ADAC162533166114B39* ___0_handler, const RuntimeMethod* method) 
{
	{
		AsyncActionCompletedHandler_tC851091B8156847FF3756ADAC162533166114B39* L_0 = ___0_handler;
		VirtualActionInvoker1< AsyncActionCompletedHandler_tC851091B8156847FF3756ADAC162533166114B39* >::Invoke(13 /* System.Void System.Threading.Tasks.TaskToAsyncInfoAdapter`4<Windows.Foundation.AsyncActionCompletedHandler,System.VoidReferenceTypeParameter,System.VoidValueTypeParameter,System.VoidValueTypeParameter>::set_Completed(TCompletedHandler) */, __this, L_0);
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
// System.Void System.Runtime.InteropServices.IMarshal::GetUnmarshalClass(System.Guid&,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32,System.Guid&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMarshal_GetUnmarshalClass_mB9ABCA3786D1E21D118F0ECD9C234DB33EDB3A61 (RuntimeObject* __this, Guid_t* ___0_riid, intptr_t ___1_pv, uint32_t ___2_dwDestContext, intptr_t ___3_pvDestContext, uint32_t ___4_mshlFlags, Guid_t* ___5_pCid, const RuntimeMethod* method) 
{
	IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD* ____imarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD = il2cpp_codegen_com_query_interface<IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	const il2cpp_hresult_t hr = ____imarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD->IMarshal_GetUnmarshalClass_mB9ABCA3786D1E21D118F0ECD9C234DB33EDB3A61(___0_riid, ___1_pv, ___2_dwDestContext, ___3_pvDestContext, ___4_mshlFlags, ___5_pCid);

	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

}
// System.Void System.Runtime.InteropServices.IMarshal::GetMarshalSizeMax(System.Guid&,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMarshal_GetMarshalSizeMax_mA332FF5CFA5F26A0AADF110B4ED010159630427C (RuntimeObject* __this, Guid_t* ___0_riid, intptr_t ___1_pv, uint32_t ___2_dwDestContext, intptr_t ___3_pvDestContext, uint32_t ___4_mshlflags, uint32_t* ___5_pSize, const RuntimeMethod* method) 
{
	IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD* ____imarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD = il2cpp_codegen_com_query_interface<IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	const il2cpp_hresult_t hr = ____imarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD->IMarshal_GetMarshalSizeMax_mA332FF5CFA5F26A0AADF110B4ED010159630427C(___0_riid, ___1_pv, ___2_dwDestContext, ___3_pvDestContext, ___4_mshlflags, ___5_pSize);

	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

}
// System.Void System.Runtime.InteropServices.IMarshal::MarshalInterface(System.IntPtr,System.Guid&,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMarshal_MarshalInterface_mB663BD143FAC8D2F96C7E2744BD2B95F857CD7CA (RuntimeObject* __this, intptr_t ___0_pStm, Guid_t* ___1_riid, intptr_t ___2_pv, uint32_t ___3_dwDestContext, intptr_t ___4_pvDestContext, uint32_t ___5_mshlflags, const RuntimeMethod* method) 
{
	IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD* ____imarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD = il2cpp_codegen_com_query_interface<IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	const il2cpp_hresult_t hr = ____imarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD->IMarshal_MarshalInterface_mB663BD143FAC8D2F96C7E2744BD2B95F857CD7CA(___0_pStm, ___1_riid, ___2_pv, ___3_dwDestContext, ___4_pvDestContext, ___5_mshlflags);

	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

}
// System.Void System.Runtime.InteropServices.IMarshal::UnmarshalInterface(System.IntPtr,System.Guid&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMarshal_UnmarshalInterface_m9E4F5841DE07B28FB4435CB1F9F2D6EEF116E3AE (RuntimeObject* __this, intptr_t ___0_pStm, Guid_t* ___1_riid, intptr_t* ___2_ppv, const RuntimeMethod* method) 
{
	IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD* ____imarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD = il2cpp_codegen_com_query_interface<IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	const il2cpp_hresult_t hr = ____imarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD->IMarshal_UnmarshalInterface_m9E4F5841DE07B28FB4435CB1F9F2D6EEF116E3AE(___0_pStm, ___1_riid, ___2_ppv);

	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

}
// System.Void System.Runtime.InteropServices.IMarshal::ReleaseMarshalData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMarshal_ReleaseMarshalData_m44A4DCDCFB3E06580D3B09CECF5869BCB9F11E66 (RuntimeObject* __this, intptr_t ___0_pStm, const RuntimeMethod* method) 
{
	IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD* ____imarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD = il2cpp_codegen_com_query_interface<IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	const il2cpp_hresult_t hr = ____imarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD->IMarshal_ReleaseMarshalData_m44A4DCDCFB3E06580D3B09CECF5869BCB9F11E66(___0_pStm);

	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

}
// System.Void System.Runtime.InteropServices.IMarshal::DisconnectObject(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMarshal_DisconnectObject_mFB20C6B2DF6512AEDA1371F44E4A59DAFB77E92C (RuntimeObject* __this, uint32_t ___0_dwReserved, const RuntimeMethod* method) 
{
	IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD* ____imarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD = il2cpp_codegen_com_query_interface<IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	const il2cpp_hresult_t hr = ____imarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD->IMarshal_DisconnectObject_mFB20C6B2DF6512AEDA1371F44E4A59DAFB77E92C(___0_dwReserved);

	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

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
// System.IntPtr System.Runtime.InteropServices.WindowsRuntime.IBufferByteAccess::GetBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IBufferByteAccess_GetBuffer_mBA6848D6A3CFAD329102327259F8217FD4548B87 (RuntimeObject* __this, const RuntimeMethod* method) 
{
	IBufferByteAccess_t5DAA0FD27148380C9E304D7589F3F7F930734E5D* ____ibufferByteAccess_t5DAA0FD27148380C9E304D7589F3F7F930734E5D = il2cpp_codegen_com_query_interface<IBufferByteAccess_t5DAA0FD27148380C9E304D7589F3F7F930734E5D>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	intptr_t returnValue = 0;
	const il2cpp_hresult_t hr = ____ibufferByteAccess_t5DAA0FD27148380C9E304D7589F3F7F930734E5D->IBufferByteAccess_GetBuffer_mBA6848D6A3CFAD329102327259F8217FD4548B87(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Storage.Streams.IBuffer System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::Create(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowsRuntimeBuffer_Create_m3483BEBC639FBC349AA9E45718AC11D2BF2E83B8 (int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBuffer_Create_m3483BEBC639FBC349AA9E45718AC11D2BF2E83B8_RuntimeMethod_var)));
	}

IL_000f:
	{
		int32_t L_2 = ___0_capacity;
		WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* L_3 = (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9*)il2cpp_codegen_object_new(WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WindowsRuntimeBuffer__ctor_m4AFA5F9564839D60895E35E00FBBD997399C8528(L_3, L_2, NULL);
		return L_3;
	}
}
// System.Int32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::RoGetBufferMarshaler(System.Runtime.InteropServices.IMarshal&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsRuntimeBuffer_RoGetBufferMarshaler_mCA6584CE743CE14250AE58C76F5465C5A4867019 (RuntimeObject** ___0_bufferMarshalerPtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	typedef int32_t (STDCALL *PInvokeFunc) (IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD**);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_WinTypes_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD**);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("WinTypes.dll"), "RoGetBufferMarshaler", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___0_bufferMarshalerPtr' to native representation
	IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD* ____0_bufferMarshalerPtr_empty = NULL;
	IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD** ____0_bufferMarshalerPtr_marshaled = &____0_bufferMarshalerPtr_empty;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_WinTypes_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(RoGetBufferMarshaler)(____0_bufferMarshalerPtr_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____0_bufferMarshalerPtr_marshaled);
	#endif

	// Marshaling of parameter '___0_bufferMarshalerPtr' back from native representation
	RuntimeObject* _____0_bufferMarshalerPtr_marshaled_unmarshaled_dereferenced = NULL;
	if (*____0_bufferMarshalerPtr_marshaled != NULL)
	{
		_____0_bufferMarshalerPtr_marshaled_unmarshaled_dereferenced = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(*____0_bufferMarshalerPtr_marshaled, Il2CppComObject_il2cpp_TypeInfo_var);

		if (il2cpp_codegen_is_import_or_windows_runtime(_____0_bufferMarshalerPtr_marshaled_unmarshaled_dereferenced))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(_____0_bufferMarshalerPtr_marshaled_unmarshaled_dereferenced), IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD::IID, *____0_bufferMarshalerPtr_marshaled);
		}
	}
	else
	{
		_____0_bufferMarshalerPtr_marshaled_unmarshaled_dereferenced = NULL;
	}
	*___0_bufferMarshalerPtr = _____0_bufferMarshalerPtr_marshaled_unmarshaled_dereferenced;
	Il2CppCodeGenWriteBarrier((void**)___0_bufferMarshalerPtr, (void*)____0_bufferMarshalerPtr_marshaled);

	// Marshaling cleanup of parameter '___0_bufferMarshalerPtr' native representation
	if (*____0_bufferMarshalerPtr_marshaled != NULL)
	{
		(*____0_bufferMarshalerPtr_marshaled)->Release();
		*____0_bufferMarshalerPtr_marshaled = NULL;
	}

	return returnValue;
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::EnsureHasMarshalProxy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_EnsureHasMarshalProxy_m4A245D3DA9E93B1475B8AE163D14B948005AF275 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	DllNotFoundException_t8CAE636A394C482C9FCF38FB7B7929506319D534* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ((WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_il2cpp_TypeInfo_var))->___s_winRtMarshalProxy_0;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		return;
	}

IL_0008:
	{
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1;
			L_1 = WindowsRuntimeBuffer_RoGetBufferMarshaler_mCA6584CE743CE14250AE58C76F5465C5A4867019((&V_0), NULL);
			V_1 = L_1;
			RuntimeObject* L_2 = V_0;
			((WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_il2cpp_TypeInfo_var))->___s_winRtMarshalProxy_0 = L_2;
			Il2CppCodeGenWriteBarrier((void**)(&((WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_il2cpp_TypeInfo_var))->___s_winRtMarshalProxy_0), (void*)L_2);
			int32_t L_3 = V_1;
			if (!L_3)
			{
				goto IL_003b_1;
			}
		}
		{
			String_t* L_4;
			L_4 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCC6CCF4B282C357742ED68E704F568ED2482BF22)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDE88FB7F7A400DD8C3FDB11F48D50F6D76160556)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6E244A75EDAD97000428673DBA8215456B776073)), NULL);
			Exception_t* L_5 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
			NullCheck(L_5);
			Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_5, L_4, NULL);
			Exception_t* L_6 = L_5;
			int32_t L_7 = V_1;
			NullCheck(L_6);
			Exception_SetErrorCode_m4EDE5390355B87C0E533678B7BD03EDF4ECDDE25(L_6, L_7, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBuffer_EnsureHasMarshalProxy_m4A245D3DA9E93B1475B8AE163D14B948005AF275_RuntimeMethod_var)));
		}

IL_003b_1:
		{
			RuntimeObject* L_8 = V_0;
			if (L_8)
			{
				goto IL_0058_1;
			}
		}
		{
			String_t* L_9;
			L_9 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCC6CCF4B282C357742ED68E704F568ED2482BF22)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDE88FB7F7A400DD8C3FDB11F48D50F6D76160556)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6E244A75EDAD97000428673DBA8215456B776073)), NULL);
			NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_10 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var)));
			NullCheck(L_10);
			NullReferenceException__ctor_mA41317A57F5C1C0E3F59C7EB25ABD484564B23D4(L_10, L_9, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBuffer_EnsureHasMarshalProxy_m4A245D3DA9E93B1475B8AE163D14B948005AF275_RuntimeMethod_var)));
		}

IL_0058_1:
		{
			goto IL_0067;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DllNotFoundException_t8CAE636A394C482C9FCF38FB7B7929506319D534_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_005a;
		}
		throw e;
	}

CATCH_005a:
	{// begin catch(System.DllNotFoundException)
		V_2 = ((DllNotFoundException_t8CAE636A394C482C9FCF38FB7B7929506319D534*)IL2CPP_GET_ACTIVE_EXCEPTION(DllNotFoundException_t8CAE636A394C482C9FCF38FB7B7929506319D534*));
		DllNotFoundException_t8CAE636A394C482C9FCF38FB7B7929506319D534* L_11 = V_2;
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_12 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		NotImplementedException__ctor_m7D5EA9EB4644D419A13488168B8695B3630B9683(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral77FC6A45AA037417CBD14210CD02B3B9F4A3A680)), L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBuffer_EnsureHasMarshalProxy_m4A245D3DA9E93B1475B8AE163D14B948005AF275_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0067:
	{
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer__ctor_m4AFA5F9564839D60895E35E00FBBD997399C8528 (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->____dataPtr_6 = L_0;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBuffer__ctor_m4AFA5F9564839D60895E35E00FBBD997399C8528_RuntimeMethod_var)));
	}

IL_0020:
	{
		int32_t L_3 = ___0_capacity;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_3);
		__this->____data_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_1), (void*)L_4);
		__this->____dataStartOffs_2 = 0;
		__this->____usefulDataLength_3 = 0;
		int32_t L_5 = ___0_capacity;
		__this->____maxDataCapacity_4 = L_5;
		intptr_t L_6 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->____dataPtr_6 = L_6;
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::.ctor(System.Byte[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer__ctor_mE5DB313A9BAD6A0EFC98994A94B71AB976A6741A (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, int32_t ___1_offset, int32_t ___2_length, int32_t ___3_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->____dataPtr_6 = L_0;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_data;
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBuffer__ctor_mE5DB313A9BAD6A0EFC98994A94B71AB976A6741A_RuntimeMethod_var)));
	}

IL_001f:
	{
		int32_t L_3 = ___1_offset;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBuffer__ctor_mE5DB313A9BAD6A0EFC98994A94B71AB976A6741A_RuntimeMethod_var)));
	}

IL_002e:
	{
		int32_t L_5 = ___2_length;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBuffer__ctor_mE5DB313A9BAD6A0EFC98994A94B71AB976A6741A_RuntimeMethod_var)));
	}

IL_003d:
	{
		int32_t L_7 = ___3_capacity;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_8 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBuffer__ctor_mE5DB313A9BAD6A0EFC98994A94B71AB976A6741A_RuntimeMethod_var)));
	}

IL_004d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_data;
		NullCheck(L_9);
		int32_t L_10 = ___1_offset;
		int32_t L_11 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10))) >= ((int32_t)L_11)))
		{
			goto IL_0060;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBDD1D563FA17E9B82D37BD73BEA7DE8AF3BFF909)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBuffer__ctor_mE5DB313A9BAD6A0EFC98994A94B71AB976A6741A_RuntimeMethod_var)));
	}

IL_0060:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___0_data;
		NullCheck(L_13);
		int32_t L_14 = ___1_offset;
		int32_t L_15 = ___3_capacity;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14))) >= ((int32_t)L_15)))
		{
			goto IL_0074;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_16 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_16);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBDD1D563FA17E9B82D37BD73BEA7DE8AF3BFF909)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBuffer__ctor_mE5DB313A9BAD6A0EFC98994A94B71AB976A6741A_RuntimeMethod_var)));
	}

IL_0074:
	{
		int32_t L_17 = ___3_capacity;
		int32_t L_18 = ___2_length;
		if ((((int32_t)L_17) >= ((int32_t)L_18)))
		{
			goto IL_0084;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_19 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_19);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0E63620A6C98BA77261B0ABD0BCB5F1C9F62D8B3)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBuffer__ctor_mE5DB313A9BAD6A0EFC98994A94B71AB976A6741A_RuntimeMethod_var)));
	}

IL_0084:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___0_data;
		__this->____data_1 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_1), (void*)L_20);
		int32_t L_21 = ___1_offset;
		__this->____dataStartOffs_2 = L_21;
		int32_t L_22 = ___2_length;
		__this->____usefulDataLength_3 = L_22;
		int32_t L_23 = ___3_capacity;
		__this->____maxDataCapacity_4 = L_23;
		intptr_t L_24 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		__this->____dataPtr_6 = L_24;
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::GetUnderlyingData(System.Byte[]&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_GetUnderlyingData_mE3831B9372E5D28FEFB73E9AE11687F4D948E6E9 (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** ___0_underlyingDataArray, int32_t* ___1_underlyingDataArrayStartOffset, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_0 = ___0_underlyingDataArray;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->____data_1;
		*((RuntimeObject**)L_0) = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)L_1);
		int32_t* L_2 = ___1_underlyingDataArrayStartOffset;
		int32_t L_3 = __this->____dataStartOffs_2;
		*((int32_t*)L_2) = (int32_t)L_3;
		return;
	}
}
// System.Byte* System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::PinUnderlyingData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* WindowsRuntimeBuffer_PinUnderlyingData_mC044FE299E97DB7BFB74BBD4804BF8BA00BADF38 (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC));
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000c:
			{// begin finally (depth: 1)
				{
				}
				{
					auto __finallyBlock = il2cpp::utils::Finally([&]
					{

FINALLY_004b:
						{// begin finally (depth: 2)
							{
								bool L_0 = V_1;
								if (L_0)
								{
									goto IL_0057;
								}
							}
							{
								GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3((&V_0), NULL);
								goto IL_0076;
							}

IL_0057:
							{
								GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_1 = (&__this->____pinHandle_5);
								bool L_2;
								L_2 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843(L_1, NULL);
								if (!L_2)
								{
									goto IL_006f;
								}
							}
							{
								GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_3 = (&__this->____pinHandle_5);
								GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3(L_3, NULL);
							}

IL_006f:
							{
								GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_4 = V_0;
								__this->____pinHandle_5 = L_4;
							}

IL_0076:
							{
								return;
							}
						}// end finally (depth: 2)
					});
					try
					{// begin try (depth: 2)
						ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->____data_1;
						GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_6;
						L_6 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC((RuntimeObject*)L_5, 3, NULL);
						V_0 = L_6;
						intptr_t L_7;
						L_7 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6((&V_0), NULL);
						int32_t L_8 = __this->____dataStartOffs_2;
						intptr_t L_9;
						L_9 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_7, L_8, NULL);
						V_2 = L_9;
						intptr_t* L_10 = (&__this->____dataPtr_6);
						intptr_t L_11 = V_2;
						intptr_t L_12 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
						intptr_t L_13;
						L_13 = Interlocked_CompareExchange_m7AC708A0F5F20CADA50F64E6E2F34262D3BC45C6(L_10, L_11, L_12, NULL);
						intptr_t L_14 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
						bool L_15;
						L_15 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_13, L_14, NULL);
						V_1 = L_15;
						goto IL_0077;
					}// end try (depth: 2)
					catch(Il2CppExceptionWrapper& e)
					{
						__finallyBlock.StoreException(e.ex);
					}
				}

IL_0077:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_0078;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0078:
	{
		intptr_t L_16 = V_2;
		void* L_17;
		L_17 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_16, NULL);
		return (uint8_t*)(L_17);
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_Finalize_mCD002C27B2314F9CABF24CD89798DEBF9754B8FD (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001a:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_0 = (&__this->____pinHandle_5);
				bool L_1;
				L_1 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843(L_0, NULL);
				if (!L_1)
				{
					goto IL_0018_1;
				}
			}
			{
				GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_2 = (&__this->____pinHandle_5);
				GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3(L_2, NULL);
			}

IL_0018_1:
			{
				goto IL_0021;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0021:
	{
		return;
	}
}
// System.UInt32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::Windows.Storage.Streams.IBuffer.get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_get_Capacity_m1534D40E81B7565971FCB7CB6866FE08AC408DC0 (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____maxDataCapacity_4;
		return L_0;
	}
}
// System.UInt32 System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::Windows.Storage.Streams.IBuffer.get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_get_Length_m820798C41F1C8F32BD96669C46ECE5F360126178 (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____usefulDataLength_3;
		return L_0;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::Windows.Storage.Streams.IBuffer.put_Length(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_put_Length_m78A2576CA21D9AA2884A336BFD86C4D30E653611 (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = ___0_value;
		uint32_t L_1;
		L_1 = InterfaceFuncInvoker0< uint32_t >::Invoke(0 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Capacity() */, IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_il2cpp_TypeInfo_var, __this);
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0024;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral97B5D9A9C1E93F6D1C82708532506E0F66173640)), NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = L_2;
		NullCheck(L_3);
		Exception_SetErrorCode_m4EDE5390355B87C0E533678B7BD03EDF4ECDDE25(L_3, ((int32_t)-2147483637), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBuffer_Windows_Storage_Streams_IBuffer_put_Length_m78A2576CA21D9AA2884A336BFD86C4D30E653611_RuntimeMethod_var)));
	}

IL_0024:
	{
		uint32_t L_4 = ___0_value;
		__this->____usefulDataLength_3 = L_4;
		return;
	}
}
// System.IntPtr System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.WindowsRuntime.IBufferByteAccess.GetBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t WindowsRuntimeBuffer_System_Runtime_InteropServices_WindowsRuntime_IBufferByteAccess_GetBuffer_m71A95405341FEEFF857CB8033C21ECC48F6B743B (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t* L_0 = (&__this->____dataPtr_6);
		intptr_t L_1;
		L_1 = VolatileRead(L_0);
		V_0 = L_1;
		intptr_t L_2 = V_0;
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_4;
		L_4 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_001b;
		}
	}
	{
		intptr_t L_5 = V_0;
		return L_5;
	}

IL_001b:
	{
		uint8_t* L_6;
		L_6 = WindowsRuntimeBuffer_PinUnderlyingData_mC044FE299E97DB7BFB74BBD4804BF8BA00BADF38(__this, NULL);
		intptr_t L_7;
		memset((&L_7), 0, sizeof(L_7));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_7), (void*)L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.DisconnectObject(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_DisconnectObject_mC02755E756BD6C41D30DC186CAB9F1BE6A5DD192 (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* __this, uint32_t ___0_dwReserved, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		WindowsRuntimeBuffer_EnsureHasMarshalProxy_m4A245D3DA9E93B1475B8AE163D14B948005AF275(NULL);
		RuntimeObject* L_0 = ((WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_il2cpp_TypeInfo_var))->___s_winRtMarshalProxy_0;
		uint32_t L_1 = ___0_dwReserved;
		NullCheck(L_0);
		InterfaceActionInvoker1< uint32_t >::Invoke(5 /* System.Void System.Runtime.InteropServices.IMarshal::DisconnectObject(System.UInt32) */, IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.GetMarshalSizeMax(System.Guid&,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_GetMarshalSizeMax_m2F5EF22C9D0D973EF8E4BBE35657A52552956A09 (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* __this, Guid_t* ___0_riid, intptr_t ___1_pv, uint32_t ___2_dwDestContext, intptr_t ___3_pvDestContext, uint32_t ___4_mshlflags, uint32_t* ___5_pSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		WindowsRuntimeBuffer_EnsureHasMarshalProxy_m4A245D3DA9E93B1475B8AE163D14B948005AF275(NULL);
		RuntimeObject* L_0 = ((WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_il2cpp_TypeInfo_var))->___s_winRtMarshalProxy_0;
		Guid_t* L_1 = ___0_riid;
		intptr_t L_2 = ___1_pv;
		uint32_t L_3 = ___2_dwDestContext;
		intptr_t L_4 = ___3_pvDestContext;
		uint32_t L_5 = ___4_mshlflags;
		uint32_t* L_6 = ___5_pSize;
		NullCheck(L_0);
		InterfaceActionInvoker6< Guid_t*, intptr_t, uint32_t, intptr_t, uint32_t, uint32_t* >::Invoke(1 /* System.Void System.Runtime.InteropServices.IMarshal::GetMarshalSizeMax(System.Guid&,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32,System.UInt32&) */, IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4, L_5, L_6);
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.GetUnmarshalClass(System.Guid&,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32,System.Guid&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_GetUnmarshalClass_mE52057C85D3CD24521AC28C94DEDDC67248762BF (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* __this, Guid_t* ___0_riid, intptr_t ___1_pv, uint32_t ___2_dwDestContext, intptr_t ___3_pvDestContext, uint32_t ___4_mshlFlags, Guid_t* ___5_pCid, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		WindowsRuntimeBuffer_EnsureHasMarshalProxy_m4A245D3DA9E93B1475B8AE163D14B948005AF275(NULL);
		RuntimeObject* L_0 = ((WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_il2cpp_TypeInfo_var))->___s_winRtMarshalProxy_0;
		Guid_t* L_1 = ___0_riid;
		intptr_t L_2 = ___1_pv;
		uint32_t L_3 = ___2_dwDestContext;
		intptr_t L_4 = ___3_pvDestContext;
		uint32_t L_5 = ___4_mshlFlags;
		Guid_t* L_6 = ___5_pCid;
		NullCheck(L_0);
		InterfaceActionInvoker6< Guid_t*, intptr_t, uint32_t, intptr_t, uint32_t, Guid_t* >::Invoke(0 /* System.Void System.Runtime.InteropServices.IMarshal::GetUnmarshalClass(System.Guid&,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32,System.Guid&) */, IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4, L_5, L_6);
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.MarshalInterface(System.IntPtr,System.Guid&,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_MarshalInterface_mA3B6B4B6B6DD24292ADEC21EA60A118AE8AAB8D2 (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* __this, intptr_t ___0_pStm, Guid_t* ___1_riid, intptr_t ___2_pv, uint32_t ___3_dwDestContext, intptr_t ___4_pvDestContext, uint32_t ___5_mshlflags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		WindowsRuntimeBuffer_EnsureHasMarshalProxy_m4A245D3DA9E93B1475B8AE163D14B948005AF275(NULL);
		RuntimeObject* L_0 = ((WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_il2cpp_TypeInfo_var))->___s_winRtMarshalProxy_0;
		intptr_t L_1 = ___0_pStm;
		Guid_t* L_2 = ___1_riid;
		intptr_t L_3 = ___2_pv;
		uint32_t L_4 = ___3_dwDestContext;
		intptr_t L_5 = ___4_pvDestContext;
		uint32_t L_6 = ___5_mshlflags;
		NullCheck(L_0);
		InterfaceActionInvoker6< intptr_t, Guid_t*, intptr_t, uint32_t, intptr_t, uint32_t >::Invoke(2 /* System.Void System.Runtime.InteropServices.IMarshal::MarshalInterface(System.IntPtr,System.Guid&,System.IntPtr,System.UInt32,System.IntPtr,System.UInt32) */, IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4, L_5, L_6);
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.ReleaseMarshalData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_ReleaseMarshalData_m80B52A3FC8001B77804DC953C1AB3884D0D6D630 (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* __this, intptr_t ___0_pStm, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		WindowsRuntimeBuffer_EnsureHasMarshalProxy_m4A245D3DA9E93B1475B8AE163D14B948005AF275(NULL);
		RuntimeObject* L_0 = ((WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_il2cpp_TypeInfo_var))->___s_winRtMarshalProxy_0;
		intptr_t L_1 = ___0_pStm;
		NullCheck(L_0);
		InterfaceActionInvoker1< intptr_t >::Invoke(4 /* System.Void System.Runtime.InteropServices.IMarshal::ReleaseMarshalData(System.IntPtr) */, IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBuffer::System.Runtime.InteropServices.IMarshal.UnmarshalInterface(System.IntPtr,System.Guid&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBuffer_System_Runtime_InteropServices_IMarshal_UnmarshalInterface_mC087491C3040FA74493C25D95045201546EC5135 (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* __this, intptr_t ___0_pStm, Guid_t* ___1_riid, intptr_t* ___2_ppv, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		WindowsRuntimeBuffer_EnsureHasMarshalProxy_m4A245D3DA9E93B1475B8AE163D14B948005AF275(NULL);
		RuntimeObject* L_0 = ((WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_il2cpp_TypeInfo_var))->___s_winRtMarshalProxy_0;
		intptr_t L_1 = ___0_pStm;
		Guid_t* L_2 = ___1_riid;
		intptr_t* L_3 = ___2_ppv;
		NullCheck(L_0);
		InterfaceActionInvoker3< intptr_t, Guid_t*, intptr_t* >::Invoke(3 /* System.Void System.Runtime.InteropServices.IMarshal::UnmarshalInterface(System.IntPtr,System.Guid&,System.IntPtr&) */, IMarshal_t2F85CD0813408E07AFBADAF9A7905B578D2867DD_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
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
// Windows.Storage.Streams.IBuffer System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::AsBuffer(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowsRuntimeBufferExtensions_AsBuffer_m8A0EB9B2849FF09CADAA2F875357CD5D873EAE9E (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_source, int32_t ___1_offset, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_source;
		int32_t L_1 = ___1_offset;
		int32_t L_2 = ___2_length;
		int32_t L_3 = ___2_length;
		RuntimeObject* L_4;
		L_4 = WindowsRuntimeBufferExtensions_AsBuffer_mDF46860EDFDC37E0F4052AF67A11A6FBC4150890(L_0, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
// Windows.Storage.Streams.IBuffer System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::AsBuffer(System.Byte[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowsRuntimeBufferExtensions_AsBuffer_mDF46860EDFDC37E0F4052AF67A11A6FBC4150890 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_source, int32_t ___1_offset, int32_t ___2_length, int32_t ___3_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_AsBuffer_mDF46860EDFDC37E0F4052AF67A11A6FBC4150890_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___1_offset;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_AsBuffer_mDF46860EDFDC37E0F4052AF67A11A6FBC4150890_RuntimeMethod_var)));
	}

IL_001d:
	{
		int32_t L_4 = ___2_length;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_AsBuffer_mDF46860EDFDC37E0F4052AF67A11A6FBC4150890_RuntimeMethod_var)));
	}

IL_002c:
	{
		int32_t L_6 = ___3_capacity;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_7 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_AsBuffer_mDF46860EDFDC37E0F4052AF67A11A6FBC4150890_RuntimeMethod_var)));
	}

IL_003b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_source;
		NullCheck(L_8);
		int32_t L_9 = ___1_offset;
		int32_t L_10 = ___2_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), L_9))) >= ((int32_t)L_10)))
		{
			goto IL_004e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBDD1D563FA17E9B82D37BD73BEA7DE8AF3BFF909)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_AsBuffer_mDF46860EDFDC37E0F4052AF67A11A6FBC4150890_RuntimeMethod_var)));
	}

IL_004e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_source;
		NullCheck(L_12);
		int32_t L_13 = ___1_offset;
		int32_t L_14 = ___3_capacity;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13))) >= ((int32_t)L_14)))
		{
			goto IL_0061;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_15 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBDD1D563FA17E9B82D37BD73BEA7DE8AF3BFF909)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_AsBuffer_mDF46860EDFDC37E0F4052AF67A11A6FBC4150890_RuntimeMethod_var)));
	}

IL_0061:
	{
		int32_t L_16 = ___3_capacity;
		int32_t L_17 = ___2_length;
		if ((((int32_t)L_16) >= ((int32_t)L_17)))
		{
			goto IL_0070;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_18 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_18);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0E63620A6C98BA77261B0ABD0BCB5F1C9F62D8B3)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_AsBuffer_mDF46860EDFDC37E0F4052AF67A11A6FBC4150890_RuntimeMethod_var)));
	}

IL_0070:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___0_source;
		int32_t L_20 = ___1_offset;
		int32_t L_21 = ___2_length;
		int32_t L_22 = ___3_capacity;
		WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* L_23 = (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9*)il2cpp_codegen_object_new(WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		WindowsRuntimeBuffer__ctor_mE5DB313A9BAD6A0EFC98994A94B71AB976A6741A(L_23, L_19, L_20, L_21, L_22, NULL);
		return L_23;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::CopyTo(Windows.Storage.Streams.IBuffer,Windows.Storage.Streams.IBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBufferExtensions_CopyTo_mDC3857DDA9BB0055E8D3DA4FCB570220BC5B698E (RuntimeObject* ___0_source, RuntimeObject* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_CopyTo_mDC3857DDA9BB0055E8D3DA4FCB570220BC5B698E_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___1_destination;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89ADD2DB1FBF30630EEA02FAAF144060CA0E908)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_CopyTo_mDC3857DDA9BB0055E8D3DA4FCB570220BC5B698E_RuntimeMethod_var)));
	}

IL_001c:
	{
		RuntimeObject* L_4 = ___0_source;
		RuntimeObject* L_5 = ___1_destination;
		RuntimeObject* L_6 = ___0_source;
		NullCheck(L_6);
		uint32_t L_7;
		L_7 = InterfaceFuncInvoker0< uint32_t >::Invoke(1 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Length() */, IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_il2cpp_TypeInfo_var, L_6);
		WindowsRuntimeBufferExtensions_CopyTo_mBA9D132D89ECE053390B9679C59EC679A238D5F9(L_4, 0, L_5, 0, L_7, NULL);
		return;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::CopyTo(Windows.Storage.Streams.IBuffer,System.UInt32,Windows.Storage.Streams.IBuffer,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBufferExtensions_CopyTo_mBA9D132D89ECE053390B9679C59EC679A238D5F9 (RuntimeObject* ___0_source, uint32_t ___1_sourceIndex, RuntimeObject* ___2_destination, uint32_t ___3_destinationIndex, uint32_t ___4_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_CopyTo_mBA9D132D89ECE053390B9679C59EC679A238D5F9_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___2_destination;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD89ADD2DB1FBF30630EEA02FAAF144060CA0E908)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_CopyTo_mBA9D132D89ECE053390B9679C59EC679A238D5F9_RuntimeMethod_var)));
	}

IL_001c:
	{
		uint32_t L_4 = ___4_count;
		if (true)
		{
			goto IL_002c;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_CopyTo_mBA9D132D89ECE053390B9679C59EC679A238D5F9_RuntimeMethod_var)));
	}

IL_002c:
	{
		uint32_t L_6 = ___1_sourceIndex;
		if (true)
		{
			goto IL_003b;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_7 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCFAC928B9632979CA328C6C33549FD409AEF4B74)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_CopyTo_mBA9D132D89ECE053390B9679C59EC679A238D5F9_RuntimeMethod_var)));
	}

IL_003b:
	{
		uint32_t L_8 = ___3_destinationIndex;
		if (true)
		{
			goto IL_004a;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_9 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCEC49CE5B8EEBB0AE649A7794608079E6C355F17)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_CopyTo_mBA9D132D89ECE053390B9679C59EC679A238D5F9_RuntimeMethod_var)));
	}

IL_004a:
	{
		RuntimeObject* L_10 = ___0_source;
		NullCheck(L_10);
		uint32_t L_11;
		L_11 = InterfaceFuncInvoker0< uint32_t >::Invoke(0 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Capacity() */, IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_il2cpp_TypeInfo_var, L_10);
		uint32_t L_12 = ___1_sourceIndex;
		if ((!(((uint32_t)L_11) <= ((uint32_t)L_12))))
		{
			goto IL_005e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1F15B34FDCB1544A2AB6DD55379F791BDA5A40EC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_CopyTo_mBA9D132D89ECE053390B9679C59EC679A238D5F9_RuntimeMethod_var)));
	}

IL_005e:
	{
		RuntimeObject* L_14 = ___0_source;
		NullCheck(L_14);
		uint32_t L_15;
		L_15 = InterfaceFuncInvoker0< uint32_t >::Invoke(0 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Capacity() */, IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_il2cpp_TypeInfo_var, L_14);
		uint32_t L_16 = ___1_sourceIndex;
		uint32_t L_17 = ___4_count;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)L_16))) < ((uint32_t)L_17))))
		{
			goto IL_0075;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_18 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_18);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral30025877E7ECF450F2047975152F5007CA8F7082)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_CopyTo_mBA9D132D89ECE053390B9679C59EC679A238D5F9_RuntimeMethod_var)));
	}

IL_0075:
	{
		RuntimeObject* L_19 = ___2_destination;
		NullCheck(L_19);
		uint32_t L_20;
		L_20 = InterfaceFuncInvoker0< uint32_t >::Invoke(0 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Capacity() */, IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_il2cpp_TypeInfo_var, L_19);
		uint32_t L_21 = ___3_destinationIndex;
		if ((!(((uint32_t)L_20) <= ((uint32_t)L_21))))
		{
			goto IL_0089;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_22 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_22);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_22, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1F15B34FDCB1544A2AB6DD55379F791BDA5A40EC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_CopyTo_mBA9D132D89ECE053390B9679C59EC679A238D5F9_RuntimeMethod_var)));
	}

IL_0089:
	{
		RuntimeObject* L_23 = ___2_destination;
		NullCheck(L_23);
		uint32_t L_24;
		L_24 = InterfaceFuncInvoker0< uint32_t >::Invoke(0 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Capacity() */, IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_il2cpp_TypeInfo_var, L_23);
		uint32_t L_25 = ___3_destinationIndex;
		uint32_t L_26 = ___4_count;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)L_25))) < ((uint32_t)L_26))))
		{
			goto IL_00a0;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_27 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_27);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_27, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral81B3831FCAA702A03FE2F7FCE058D367DE8559B0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_CopyTo_mBA9D132D89ECE053390B9679C59EC679A238D5F9_RuntimeMethod_var)));
	}

IL_00a0:
	{
		RuntimeObject* L_28 = ___0_source;
		bool L_29;
		L_29 = WindowsRuntimeBufferExtensions_TryGetUnderlyingData_m81061F2A3D08AECCF3DAB66F6F00BDD143F2DD57(L_28, (&V_0), (&V_2), NULL);
		V_4 = L_29;
		RuntimeObject* L_30 = ___2_destination;
		bool L_31;
		L_31 = WindowsRuntimeBufferExtensions_TryGetUnderlyingData_m81061F2A3D08AECCF3DAB66F6F00BDD143F2DD57(L_30, (&V_1), (&V_3), NULL);
		V_5 = L_31;
		bool L_32 = V_4;
		bool L_33 = V_5;
		if (!((int32_t)((int32_t)L_32&(int32_t)L_33)))
		{
			goto IL_00cf;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_0;
		int32_t L_35 = V_2;
		uint32_t L_36 = ___1_sourceIndex;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = V_1;
		int32_t L_38 = V_3;
		uint32_t L_39 = ___3_destinationIndex;
		uint32_t L_40 = ___4_count;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_34, ((int32_t)il2cpp_codegen_add(L_35, (int32_t)L_36)), (RuntimeArray*)L_37, ((int32_t)il2cpp_codegen_add(L_38, (int32_t)L_39)), L_40, NULL);
		return;
	}

IL_00cf:
	{
		bool L_41 = V_4;
		if (!L_41)
		{
			goto IL_00ea;
		}
	}
	{
		RuntimeObject* L_42 = ___2_destination;
		uint32_t L_43 = ___3_destinationIndex;
		intptr_t L_44;
		L_44 = WindowsRuntimeBufferExtensions_GetPointerAtOffset_mBAD4D95E0FC18FFF6749956815FF28BFF9124ACE(L_42, L_43, NULL);
		V_6 = L_44;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = V_0;
		int32_t L_46 = V_2;
		uint32_t L_47 = ___1_sourceIndex;
		intptr_t L_48 = V_6;
		uint32_t L_49 = ___4_count;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_m0FD7BFE70EE28FC67B67A6225AD58F95FEE7EB85(L_45, ((int32_t)il2cpp_codegen_add(L_46, (int32_t)L_47)), L_48, L_49, NULL);
		return;
	}

IL_00ea:
	{
		bool L_50 = V_5;
		if (!L_50)
		{
			goto IL_0101;
		}
	}
	{
		RuntimeObject* L_51 = ___0_source;
		uint32_t L_52 = ___1_sourceIndex;
		intptr_t L_53;
		L_53 = WindowsRuntimeBufferExtensions_GetPointerAtOffset_mBAD4D95E0FC18FFF6749956815FF28BFF9124ACE(L_51, L_52, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = V_1;
		int32_t L_55 = V_3;
		uint32_t L_56 = ___3_destinationIndex;
		uint32_t L_57 = ___4_count;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77(L_53, L_54, ((int32_t)il2cpp_codegen_add(L_55, (int32_t)L_56)), L_57, NULL);
		return;
	}

IL_0101:
	{
		RuntimeObject* L_58 = ___0_source;
		uint32_t L_59 = ___1_sourceIndex;
		intptr_t L_60;
		L_60 = WindowsRuntimeBufferExtensions_GetPointerAtOffset_mBAD4D95E0FC18FFF6749956815FF28BFF9124ACE(L_58, L_59, NULL);
		RuntimeObject* L_61 = ___2_destination;
		uint32_t L_62 = ___3_destinationIndex;
		intptr_t L_63;
		L_63 = WindowsRuntimeBufferExtensions_GetPointerAtOffset_mBAD4D95E0FC18FFF6749956815FF28BFF9124ACE(L_61, L_62, NULL);
		V_6 = L_63;
		intptr_t L_64 = V_6;
		uint32_t L_65 = ___4_count;
		WindowsRuntimeBufferExtensions_MemCopy_m2593AF120CEA5FAB94BD6346DF85531D42CB5356(L_60, L_64, L_65, NULL);
		return;
	}
}
// System.Boolean System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::TryGetUnderlyingData(Windows.Storage.Streams.IBuffer,System.Byte[]&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsRuntimeBufferExtensions_TryGetUnderlyingData_m81061F2A3D08AECCF3DAB66F6F00BDD143F2DD57 (RuntimeObject* ___0_buffer, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** ___1_underlyingDataArray, int32_t* ___2_underlyingDataArrayStartOffset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_buffer;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_TryGetUnderlyingData_m81061F2A3D08AECCF3DAB66F6F00BDD143F2DD57_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_buffer;
		V_0 = ((WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9*)IsInstSealed((RuntimeObject*)L_2, WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_il2cpp_TypeInfo_var));
		WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* L_3 = V_0;
		if (L_3)
		{
			goto IL_0020;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_4 = ___1_underlyingDataArray;
		*((RuntimeObject**)L_4) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)NULL);
		int32_t* L_5 = ___2_underlyingDataArrayStartOffset;
		*((int32_t*)L_5) = (int32_t)(-1);
		return (bool)0;
	}

IL_0020:
	{
		WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* L_6 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_7 = ___1_underlyingDataArray;
		int32_t* L_8 = ___2_underlyingDataArrayStartOffset;
		NullCheck(L_6);
		WindowsRuntimeBuffer_GetUnderlyingData_mE3831B9372E5D28FEFB73E9AE11687F4D948E6E9(L_6, L_7, L_8, NULL);
		return (bool)1;
	}
}
// System.Boolean System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::IsSameData(Windows.Storage.Streams.IBuffer,Windows.Storage.Streams.IBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsRuntimeBufferExtensions_IsSameData_m245201A2EA5EA798640445380269F19C234DA784 (RuntimeObject* ___0_buffer, RuntimeObject* ___1_otherBuffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBufferByteAccess_t5DAA0FD27148380C9E304D7589F3F7F930734E5D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___0_buffer;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_IsSameData_m245201A2EA5EA798640445380269F19C234DA784_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___1_otherBuffer;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		RuntimeObject* L_3 = ___0_buffer;
		RuntimeObject* L_4 = ___1_otherBuffer;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(RuntimeObject*)L_4))))
		{
			goto IL_0019;
		}
	}
	{
		return (bool)1;
	}

IL_0019:
	{
		RuntimeObject* L_5 = ___0_buffer;
		bool L_6;
		L_6 = WindowsRuntimeBufferExtensions_TryGetUnderlyingData_m81061F2A3D08AECCF3DAB66F6F00BDD143F2DD57(L_5, (&V_0), (&V_2), NULL);
		V_4 = L_6;
		RuntimeObject* L_7 = ___1_otherBuffer;
		bool L_8;
		L_8 = WindowsRuntimeBufferExtensions_TryGetUnderlyingData_m81061F2A3D08AECCF3DAB66F6F00BDD143F2DD57(L_7, (&V_1), (&V_3), NULL);
		V_5 = L_8;
		bool L_9 = V_4;
		bool L_10 = V_5;
		if ((((int32_t)L_9) == ((int32_t)L_10)))
		{
			goto IL_0039;
		}
	}
	{
		return (bool)0;
	}

IL_0039:
	{
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_0048;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_1;
		if ((!(((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_12) == ((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_13))))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		return (bool)((((int32_t)L_14) == ((int32_t)L_15))? 1 : 0);
	}

IL_0046:
	{
		return (bool)0;
	}

IL_0048:
	{
		RuntimeObject* L_16 = ___0_buffer;
		RuntimeObject* L_17 = ___1_otherBuffer;
		V_6 = ((RuntimeObject*)Castclass((RuntimeObject*)L_17, IBufferByteAccess_t5DAA0FD27148380C9E304D7589F3F7F930734E5D_il2cpp_TypeInfo_var));
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_16, IBufferByteAccess_t5DAA0FD27148380C9E304D7589F3F7F930734E5D_il2cpp_TypeInfo_var)));
		intptr_t L_18;
		L_18 = InterfaceFuncInvoker0< intptr_t >::Invoke(0 /* System.IntPtr System.Runtime.InteropServices.WindowsRuntime.IBufferByteAccess::GetBuffer() */, IBufferByteAccess_t5DAA0FD27148380C9E304D7589F3F7F930734E5D_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_16, IBufferByteAccess_t5DAA0FD27148380C9E304D7589F3F7F930734E5D_il2cpp_TypeInfo_var)));
		RuntimeObject* L_19 = V_6;
		NullCheck(L_19);
		intptr_t L_20;
		L_20 = InterfaceFuncInvoker0< intptr_t >::Invoke(0 /* System.IntPtr System.Runtime.InteropServices.WindowsRuntime.IBufferByteAccess::GetBuffer() */, IBufferByteAccess_t5DAA0FD27148380C9E304D7589F3F7F930734E5D_il2cpp_TypeInfo_var, L_19);
		bool L_21;
		L_21 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_18, L_20, NULL);
		return L_21;
	}
}
// Windows.Storage.Streams.IBuffer System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::GetWindowsRuntimeBuffer(System.IO.MemoryStream,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowsRuntimeBufferExtensions_GetWindowsRuntimeBuffer_m4B7F32994ECCB0CD5BA38E9B77260B949478A850 (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* ___0_underlyingStream, int32_t ___1_positionInStream, int32_t ___2_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = ___0_underlyingStream;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral075E3039D77F4010416D02768A2D30DAE372D363)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_GetWindowsRuntimeBuffer_m4B7F32994ECCB0CD5BA38E9B77260B949478A850_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___1_positionInStream;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2ED816718FBC3E178D3367429A74D7E71535575A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_GetWindowsRuntimeBuffer_m4B7F32994ECCB0CD5BA38E9B77260B949478A850_RuntimeMethod_var)));
	}

IL_001d:
	{
		int32_t L_4 = ___2_length;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_GetWindowsRuntimeBuffer_m4B7F32994ECCB0CD5BA38E9B77260B949478A850_RuntimeMethod_var)));
	}

IL_002c:
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_6 = ___0_underlyingStream;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtualFuncInvoker0< int32_t >::Invoke(42 /* System.Int32 System.IO.MemoryStream::get_Capacity() */, L_6);
		int32_t L_8 = ___1_positionInStream;
		if ((((int32_t)L_7) > ((int32_t)L_8)))
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF48A59EF6A2D1A2B5003A4E8EC274199F2C46032)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_GetWindowsRuntimeBuffer_m4B7F32994ECCB0CD5BA38E9B77260B949478A850_RuntimeMethod_var)));
	}

IL_0040:
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_10 = ___0_underlyingStream;
		NullCheck(L_10);
		bool L_11;
		L_11 = VirtualFuncInvoker1< bool, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* >::Invoke(41 /* System.Boolean System.IO.MemoryStream::TryGetBuffer(System.ArraySegment`1<System.Byte>&) */, L_10, (&V_0));
		if (L_11)
		{
			goto IL_0055;
		}
	}
	{
		UnauthorizedAccessException_t8FC1F1DE7AA62456E9E25EFDFC658A623A626791* L_12 = (UnauthorizedAccessException_t8FC1F1DE7AA62456E9E25EFDFC658A623A626791*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnauthorizedAccessException_t8FC1F1DE7AA62456E9E25EFDFC658A623A626791_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		UnauthorizedAccessException__ctor_mED94291A37165C0D7A5A573AE6866429DF1712F6(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral213C267FBE52C6C33B5523EDCF2F7345CC49B041)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_GetWindowsRuntimeBuffer_m4B7F32994ECCB0CD5BA38E9B77260B949478A850_RuntimeMethod_var)));
	}

IL_0055:
	{
		int32_t L_13;
		L_13 = ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline((&V_0), ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		V_1 = L_13;
		int32_t L_14 = ___2_length;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_15 = ___0_underlyingStream;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = VirtualFuncInvoker0< int32_t >::Invoke(42 /* System.Int32 System.IO.MemoryStream::get_Capacity() */, L_15);
		int32_t L_17 = ___1_positionInStream;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_18;
		L_18 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_14, ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
		V_2 = L_18;
		int32_t L_19 = ___2_length;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_20 = ___0_underlyingStream;
		NullCheck(L_20);
		int64_t L_21;
		L_21 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_20);
		int32_t L_22 = ___1_positionInStream;
		int32_t L_23;
		L_23 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_19, ((int32_t)il2cpp_codegen_subtract(((int32_t)L_21), L_22)), NULL);
		int32_t L_24;
		L_24 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(0, L_23, NULL);
		V_3 = L_24;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25;
		L_25 = ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline((&V_0), ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		int32_t L_26 = V_1;
		int32_t L_27 = ___1_positionInStream;
		int32_t L_28 = V_3;
		int32_t L_29 = V_2;
		WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9* L_30 = (WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9*)il2cpp_codegen_object_new(WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		WindowsRuntimeBuffer__ctor_mE5DB313A9BAD6A0EFC98994A94B71AB976A6741A(L_30, L_25, ((int32_t)il2cpp_codegen_add(L_26, L_27)), L_28, L_29, NULL);
		return L_30;
	}
}
// System.IO.Stream System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::AsStream(Windows.Storage.Streams.IBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* WindowsRuntimeBufferExtensions_AsStream_mF1266A683784D7F888A72D5E7E3A0A6E3CDC9F1B (RuntimeObject* ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBufferByteAccess_t5DAA0FD27148380C9E304D7589F3F7F930734E5D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeBufferUnmanagedMemoryStream_t30CA79558CFD4D7E1E1AE41F7DCC9589EE2809BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeBufferExtensions_AsStream_mF1266A683784D7F888A72D5E7E3A0A6E3CDC9F1B_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_source;
		bool L_3;
		L_3 = WindowsRuntimeBufferExtensions_TryGetUnderlyingData_m81061F2A3D08AECCF3DAB66F6F00BDD143F2DD57(L_2, (&V_0), (&V_1), NULL);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		int32_t L_5 = V_1;
		RuntimeObject* L_6 = ___0_source;
		NullCheck(L_6);
		uint32_t L_7;
		L_7 = InterfaceFuncInvoker0< uint32_t >::Invoke(0 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Capacity() */, IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_il2cpp_TypeInfo_var, L_6);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_8 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		MemoryStream__ctor_mC2A08AF3FC30A1DF60B2CFC5668637DF88B66444(L_8, L_4, L_5, L_7, (bool)1, NULL);
		return L_8;
	}

IL_0029:
	{
		RuntimeObject* L_9 = ___0_source;
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_9, IBufferByteAccess_t5DAA0FD27148380C9E304D7589F3F7F930734E5D_il2cpp_TypeInfo_var));
		RuntimeObject* L_10 = ___0_source;
		RuntimeObject* L_11 = V_2;
		NullCheck(L_11);
		intptr_t L_12;
		L_12 = InterfaceFuncInvoker0< intptr_t >::Invoke(0 /* System.IntPtr System.Runtime.InteropServices.WindowsRuntime.IBufferByteAccess::GetBuffer() */, IBufferByteAccess_t5DAA0FD27148380C9E304D7589F3F7F930734E5D_il2cpp_TypeInfo_var, L_11);
		void* L_13;
		L_13 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_12, NULL);
		WindowsRuntimeBufferUnmanagedMemoryStream_t30CA79558CFD4D7E1E1AE41F7DCC9589EE2809BE* L_14 = (WindowsRuntimeBufferUnmanagedMemoryStream_t30CA79558CFD4D7E1E1AE41F7DCC9589EE2809BE*)il2cpp_codegen_object_new(WindowsRuntimeBufferUnmanagedMemoryStream_t30CA79558CFD4D7E1E1AE41F7DCC9589EE2809BE_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		WindowsRuntimeBufferUnmanagedMemoryStream__ctor_m56ED8883E99D5867E8E49F3707EB6296B6FD7780(L_14, L_10, (uint8_t*)L_13, NULL);
		return L_14;
	}
}
// System.IntPtr System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::GetPointerAtOffset(Windows.Storage.Streams.IBuffer,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t WindowsRuntimeBufferExtensions_GetPointerAtOffset_mBAD4D95E0FC18FFF6749956815FF28BFF9124ACE (RuntimeObject* ___0_buffer, uint32_t ___1_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBufferByteAccess_t5DAA0FD27148380C9E304D7589F3F7F930734E5D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_buffer;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_0, IBufferByteAccess_t5DAA0FD27148380C9E304D7589F3F7F930734E5D_il2cpp_TypeInfo_var)));
		intptr_t L_1;
		L_1 = InterfaceFuncInvoker0< intptr_t >::Invoke(0 /* System.IntPtr System.Runtime.InteropServices.WindowsRuntime.IBufferByteAccess::GetBuffer() */, IBufferByteAccess_t5DAA0FD27148380C9E304D7589F3F7F930734E5D_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_0, IBufferByteAccess_t5DAA0FD27148380C9E304D7589F3F7F930734E5D_il2cpp_TypeInfo_var)));
		void* L_2;
		L_2 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_1, NULL);
		uint32_t L_3 = ___1_offset;
		intptr_t L_4;
		memset((&L_4), 0, sizeof(L_4));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_4), ((void*)il2cpp_codegen_add((intptr_t)L_2, (intptr_t)((uintptr_t)L_3))), /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions::MemCopy(System.IntPtr,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBufferExtensions_MemCopy_m2593AF120CEA5FAB94BD6346DF85531D42CB5356 (intptr_t ___0_src, intptr_t ___1_dst, uint32_t ___2_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		uint32_t L_0 = ___2_count;
		if ((!(((uint32_t)L_0) > ((uint32_t)((int32_t)2147483647LL)))))
		{
			goto IL_0037;
		}
	}
	{
		intptr_t L_1 = ___0_src;
		intptr_t L_2 = ___1_dst;
		WindowsRuntimeBufferExtensions_MemCopy_m2593AF120CEA5FAB94BD6346DF85531D42CB5356(L_1, L_2, ((int32_t)2147483647LL), NULL);
		intptr_t L_3 = ___0_src;
		intptr_t L_4;
		L_4 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_3, ((int32_t)2147483647LL), NULL);
		intptr_t L_5 = ___1_dst;
		intptr_t L_6;
		L_6 = IntPtr_op_Addition_m6887593F991D01CEB382C914B7FDFA29CB900E2A(L_5, ((int32_t)2147483647LL), NULL);
		uint32_t L_7 = ___2_count;
		WindowsRuntimeBufferExtensions_MemCopy_m2593AF120CEA5FAB94BD6346DF85531D42CB5356(L_4, L_6, ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, ((int32_t)2147483647LL))), NULL);
		return;
	}

IL_0037:
	{
		uint32_t L_8 = ___2_count;
		V_0 = L_8;
		int32_t L_9 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_9);
		V_1 = L_10;
		intptr_t L_11 = ___0_src;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_1;
		int32_t L_13 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77(L_11, L_12, 0, L_13, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		intptr_t L_15 = ___1_dst;
		int32_t L_16 = V_0;
		Marshal_Copy_m0FD7BFE70EE28FC67B67A6225AD58F95FEE7EB85(L_14, 0, L_15, L_16, NULL);
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
// System.Void System.Runtime.InteropServices.WindowsRuntime.WindowsRuntimeBufferExtensions/WindowsRuntimeBufferUnmanagedMemoryStream::.ctor(Windows.Storage.Streams.IBuffer,System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeBufferUnmanagedMemoryStream__ctor_m56ED8883E99D5867E8E49F3707EB6296B6FD7780 (WindowsRuntimeBufferUnmanagedMemoryStream_t30CA79558CFD4D7E1E1AE41F7DCC9589EE2809BE* __this, RuntimeObject* ___0_sourceBuffer, uint8_t* ___1_dataPtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint8_t* L_0 = ___1_dataPtr;
		RuntimeObject* L_1 = ___0_sourceBuffer;
		NullCheck(L_1);
		uint32_t L_2;
		L_2 = InterfaceFuncInvoker0< uint32_t >::Invoke(1 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Length() */, IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_il2cpp_TypeInfo_var, L_1);
		RuntimeObject* L_3 = ___0_sourceBuffer;
		NullCheck(L_3);
		uint32_t L_4;
		L_4 = InterfaceFuncInvoker0< uint32_t >::Invoke(0 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Capacity() */, IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_il2cpp_TypeInfo_var, L_3);
		UnmanagedMemoryStream__ctor_m6B13BA44C847480F432AB75E6436D47B424B8C33(__this, L_0, ((int64_t)(uint64_t)L_2), ((int64_t)(uint64_t)L_4), 3, NULL);
		RuntimeObject* L_5 = ___0_sourceBuffer;
		__this->____sourceBuffer_13 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____sourceBuffer_13), (void*)L_5);
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
// System.IO.NetFxToWinRtStreamAdapter System.IO.NetFxToWinRtStreamAdapter::Create(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* NetFxToWinRtStreamAdapter_Create_mA1D7422D99BF8432BCBBDE154570AD8FB0C2A25B (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputOutputStream_t5862300BC55FC7221B062054B4F1A743E433D95B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputStream_t5337674C27D910998AD03237067CD14A65B18403_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OutputStream_t44EF2F4DE5310B5C3D243ABF0412D78134F6E7A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RandomAccessStream_t26E619D7F88DBC344D0337DE719FB2702640730D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* V_1 = NULL;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetFxToWinRtStreamAdapter_Create_mA1D7422D99BF8432BCBBDE154570AD8FB0C2A25B_RuntimeMethod_var)));
	}

IL_000e:
	{
		V_0 = 0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = ___0_stream;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_2);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4 = ___0_stream;
		int32_t L_5;
		L_5 = NetFxToWinRtStreamAdapter_DetermineStreamReadOptimization_mF55EAFB1ED656777358BE51A2E9FB00E52CBEAD0(L_4, NULL);
		V_0 = L_5;
	}

IL_001f:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = ___0_stream;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.IO.Stream::get_CanSeek() */, L_6);
		if (!L_7)
		{
			goto IL_0031;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_8 = ___0_stream;
		int32_t L_9 = V_0;
		RandomAccessStream_t26E619D7F88DBC344D0337DE719FB2702640730D* L_10 = (RandomAccessStream_t26E619D7F88DBC344D0337DE719FB2702640730D*)il2cpp_codegen_object_new(RandomAccessStream_t26E619D7F88DBC344D0337DE719FB2702640730D_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		RandomAccessStream__ctor_m1532372657144D192452D9D0B0E0498749A91B34(L_10, L_8, L_9, NULL);
		V_1 = L_10;
		goto IL_007a;
	}

IL_0031:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_11 = ___0_stream;
		NullCheck(L_11);
		bool L_12;
		L_12 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_11);
		if (!L_12)
		{
			goto IL_004b;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_13 = ___0_stream;
		NullCheck(L_13);
		bool L_14;
		L_14 = VirtualFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_13);
		if (!L_14)
		{
			goto IL_004b;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_15 = ___0_stream;
		int32_t L_16 = V_0;
		InputOutputStream_t5862300BC55FC7221B062054B4F1A743E433D95B* L_17 = (InputOutputStream_t5862300BC55FC7221B062054B4F1A743E433D95B*)il2cpp_codegen_object_new(InputOutputStream_t5862300BC55FC7221B062054B4F1A743E433D95B_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		InputOutputStream__ctor_mD5341531BE2594F89D2F50250FBD046BF60750C3(L_17, L_15, L_16, NULL);
		V_1 = L_17;
		goto IL_007a;
	}

IL_004b:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_18 = ___0_stream;
		NullCheck(L_18);
		bool L_19;
		L_19 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_18);
		if (!L_19)
		{
			goto IL_005d;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_20 = ___0_stream;
		int32_t L_21 = V_0;
		InputStream_t5337674C27D910998AD03237067CD14A65B18403* L_22 = (InputStream_t5337674C27D910998AD03237067CD14A65B18403*)il2cpp_codegen_object_new(InputStream_t5337674C27D910998AD03237067CD14A65B18403_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		InputStream__ctor_m48D9F27F1585B27C0E4E9A719AA1E0D046B1D832(L_22, L_20, L_21, NULL);
		V_1 = L_22;
		goto IL_007a;
	}

IL_005d:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_23 = ___0_stream;
		NullCheck(L_23);
		bool L_24;
		L_24 = VirtualFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_23);
		if (!L_24)
		{
			goto IL_006f;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_25 = ___0_stream;
		int32_t L_26 = V_0;
		OutputStream_t44EF2F4DE5310B5C3D243ABF0412D78134F6E7A8* L_27 = (OutputStream_t44EF2F4DE5310B5C3D243ABF0412D78134F6E7A8*)il2cpp_codegen_object_new(OutputStream_t44EF2F4DE5310B5C3D243ABF0412D78134F6E7A8_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		OutputStream__ctor_m6B51179BC5A49DE8F34C7262F9DAC4FC80DA6369(L_27, L_25, L_26, NULL);
		V_1 = L_27;
		goto IL_007a;
	}

IL_006f:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_28 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_28);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_28, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFAAA1D4C74B19E4EA70FF43057879BAF549456EC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetFxToWinRtStreamAdapter_Create_mA1D7422D99BF8432BCBBDE154570AD8FB0C2A25B_RuntimeMethod_var)));
	}

IL_007a:
	{
		NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* L_29 = V_1;
		return L_29;
	}
}
// System.IO.NetFxToWinRtStreamAdapter/StreamReadOperationOptimization System.IO.NetFxToWinRtStreamAdapter::DetermineStreamReadOptimization(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetFxToWinRtStreamAdapter_DetermineStreamReadOptimization_mF55EAFB1ED656777358BE51A2E9FB00E52CBEAD0 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		bool L_1;
		L_1 = NetFxToWinRtStreamAdapter_CanApplyReadMemoryStreamOptimization_m70B9EECCACD84DA54357053A241DFB17DD53E98B(L_0, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		return (int32_t)(1);
	}

IL_000a:
	{
		return (int32_t)(0);
	}
}
// System.Boolean System.IO.NetFxToWinRtStreamAdapter::CanApplyReadMemoryStreamOptimization(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetFxToWinRtStreamAdapter_CanApplyReadMemoryStreamOptimization_m70B9EECCACD84DA54357053A241DFB17DD53E98B (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		V_0 = ((MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)IsInstClass((RuntimeObject*)L_0, MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var));
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker1< bool, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* >::Invoke(41 /* System.Boolean System.IO.MemoryStream::TryGetBuffer(System.ArraySegment`1<System.Byte>&) */, L_2, (&V_1));
		return L_3;
	}
}
// System.Void System.IO.NetFxToWinRtStreamAdapter::.ctor(System.IO.Stream,System.IO.NetFxToWinRtStreamAdapter/StreamReadOperationOptimization)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetFxToWinRtStreamAdapter__ctor_m4C98A4B0C7BE7C32300976D45A2540F476A5B914 (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, int32_t ___1_readOptimization, const RuntimeMethod* method) 
{
	{
		__this->____leaveUnderlyingStreamOpen_1 = (bool)1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___1_readOptimization;
		__this->____readOptimization_2 = L_0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___0_stream;
		__this->____managedStream_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____managedStream_0), (void*)L_1);
		return;
	}
}
// System.Void System.IO.NetFxToWinRtStreamAdapter::SetWonInitializationRace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetFxToWinRtStreamAdapter_SetWonInitializationRace_m16AB325FD4545F08DF062D6A9FEDE112CF312B28 (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __this, const RuntimeMethod* method) 
{
	{
		__this->____leaveUnderlyingStreamOpen_1 = (bool)0;
		return;
	}
}
// System.IO.Stream System.IO.NetFxToWinRtStreamAdapter::GetManagedStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* NetFxToWinRtStreamAdapter_GetManagedStream_m3CEDE8948C3D330E0BBB900C005A1A2CBD60FDBE (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->____managedStream_0;
		return L_0;
	}
}
// System.IO.Stream System.IO.NetFxToWinRtStreamAdapter::EnsureNotDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* NetFxToWinRtStreamAdapter_EnsureNotDisposed_mF96B332E0313DBAECC34BD8C4623646D66C1E122 (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __this, const RuntimeMethod* method) 
{
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* G_B2_0 = NULL;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* G_B1_0 = NULL;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->____managedStream_0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001f;
		}
	}
	{
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_2 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB4792D73601AFAC8241C44E882B3149512DDA812)), NULL);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_3 = L_2;
		NullCheck(L_3);
		Exception_SetErrorCode_m4EDE5390355B87C0E533678B7BD03EDF4ECDDE25(L_3, ((int32_t)-2147483629), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetFxToWinRtStreamAdapter_EnsureNotDisposed_mF96B332E0313DBAECC34BD8C4623646D66C1E122_RuntimeMethod_var)));
	}

IL_001f:
	{
		return G_B2_0;
	}
}
// System.Void System.IO.NetFxToWinRtStreamAdapter::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetFxToWinRtStreamAdapter_System_IDisposable_Dispose_m6FFD2F1EE39FF2E72613332E72A656A04E27231E (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __this, const RuntimeMethod* method) 
{
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_0 = NULL;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->____managedStream_0;
		V_0 = L_0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = V_0;
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		__this->____managedStream_0 = (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____managedStream_0), (void*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL);
		bool L_2 = __this->____leaveUnderlyingStreamOpen_1;
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = V_0;
		NullCheck(L_3);
		Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8(L_3, NULL);
	}

IL_0020:
	{
		return;
	}
}
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32> System.IO.NetFxToWinRtStreamAdapter::ReadAsync(Windows.Storage.Streams.IBuffer,System.UInt32,Windows.Storage.Streams.InputStreamOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_ReadAsync_m231492E456CD2D904B058DF51869D9963F2F5B14 (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __this, RuntimeObject* ___0_buffer, uint32_t ___1_count, uint32_t ___2_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___0_buffer;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetFxToWinRtStreamAdapter_ReadAsync_m231492E456CD2D904B058DF51869D9963F2F5B14_RuntimeMethod_var)));
	}

IL_000e:
	{
		uint32_t L_2 = ___1_count;
		if (false)
		{
			goto IL_001a;
		}
	}
	{
		uint32_t L_3 = ___1_count;
		if ((!(((uint32_t)((int32_t)2147483647LL)) < ((uint32_t)L_3))))
		{
			goto IL_0030;
		}
	}

IL_001a:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = L_4;
		NullCheck(L_5);
		Exception_SetErrorCode_m4EDE5390355B87C0E533678B7BD03EDF4ECDDE25(L_5, ((int32_t)-2147024809), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetFxToWinRtStreamAdapter_ReadAsync_m231492E456CD2D904B058DF51869D9963F2F5B14_RuntimeMethod_var)));
	}

IL_0030:
	{
		RuntimeObject* L_6 = ___0_buffer;
		NullCheck(L_6);
		uint32_t L_7;
		L_7 = InterfaceFuncInvoker0< uint32_t >::Invoke(0 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Capacity() */, IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_il2cpp_TypeInfo_var, L_6);
		uint32_t L_8 = ___1_count;
		if ((!(((uint32_t)L_7) < ((uint32_t)L_8))))
		{
			goto IL_004f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0E63620A6C98BA77261B0ABD0BCB5F1C9F62D8B3)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = L_9;
		NullCheck(L_10);
		Exception_SetErrorCode_m4EDE5390355B87C0E533678B7BD03EDF4ECDDE25(L_10, ((int32_t)-2147024809), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetFxToWinRtStreamAdapter_ReadAsync_m231492E456CD2D904B058DF51869D9963F2F5B14_RuntimeMethod_var)));
	}

IL_004f:
	{
		uint32_t L_11 = ___2_options;
		if (!L_11)
		{
			goto IL_0075;
		}
	}
	{
		uint32_t L_12 = ___2_options;
		if ((((int32_t)L_12) == ((int32_t)1)))
		{
			goto IL_0075;
		}
	}
	{
		uint32_t L_13 = ___2_options;
		if ((((int32_t)L_13) == ((int32_t)2)))
		{
			goto IL_0075;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_14 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF7DF948FC4905FED1A56776B9DFCCB86C46912A)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral97A6DE11F0A437842D0A2AE6CCB91D8BA5E81213)), NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_15 = L_14;
		NullCheck(L_15);
		Exception_SetErrorCode_m4EDE5390355B87C0E533678B7BD03EDF4ECDDE25(L_15, ((int32_t)-2147024809), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetFxToWinRtStreamAdapter_ReadAsync_m231492E456CD2D904B058DF51869D9963F2F5B14_RuntimeMethod_var)));
	}

IL_0075:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_16;
		L_16 = NetFxToWinRtStreamAdapter_EnsureNotDisposed_mF96B332E0313DBAECC34BD8C4623646D66C1E122(__this, NULL);
		V_0 = L_16;
		int32_t L_17 = __this->____readOptimization_2;
		V_2 = L_17;
		int32_t L_18 = V_2;
		if (!L_18)
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) == ((uint32_t)1))))
		{
			goto IL_00a1;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_20 = V_0;
		RuntimeObject* L_21 = ___0_buffer;
		uint32_t L_22 = ___1_count;
		RuntimeObject* L_23;
		L_23 = StreamOperationsImplementation_ReadAsync_MemoryStream_mE735436DB4E8DDBDA439345EC2A04A56285EFD56(L_20, L_21, L_22, NULL);
		V_1 = L_23;
		goto IL_00a3;
	}

IL_0095:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_24 = V_0;
		RuntimeObject* L_25 = ___0_buffer;
		uint32_t L_26 = ___1_count;
		uint32_t L_27 = ___2_options;
		RuntimeObject* L_28;
		L_28 = StreamOperationsImplementation_ReadAsync_AbstractStream_m6F30EB11053EE983788372A179D52D4346BF2146(L_24, L_25, L_26, L_27, NULL);
		V_1 = L_28;
		goto IL_00a3;
	}

IL_00a1:
	{
		V_1 = (RuntimeObject*)NULL;
	}

IL_00a3:
	{
		RuntimeObject* L_29 = V_1;
		return L_29;
	}
}
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32> System.IO.NetFxToWinRtStreamAdapter::WriteAsync(Windows.Storage.Streams.IBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_WriteAsync_m422DE3E5805307499CFE818FFA9C18E6EFEEE7A7 (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __this, RuntimeObject* ___0_buffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_buffer;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetFxToWinRtStreamAdapter_WriteAsync_m422DE3E5805307499CFE818FFA9C18E6EFEEE7A7_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_buffer;
		NullCheck(L_2);
		uint32_t L_3;
		L_3 = InterfaceFuncInvoker0< uint32_t >::Invoke(0 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Capacity() */, IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_il2cpp_TypeInfo_var, L_2);
		RuntimeObject* L_4 = ___0_buffer;
		NullCheck(L_4);
		uint32_t L_5;
		L_5 = InterfaceFuncInvoker0< uint32_t >::Invoke(1 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Length() */, IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_il2cpp_TypeInfo_var, L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0032;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral97B5D9A9C1E93F6D1C82708532506E0F66173640)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = L_6;
		NullCheck(L_7);
		Exception_SetErrorCode_m4EDE5390355B87C0E533678B7BD03EDF4ECDDE25(L_7, ((int32_t)-2147024809), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetFxToWinRtStreamAdapter_WriteAsync_m422DE3E5805307499CFE818FFA9C18E6EFEEE7A7_RuntimeMethod_var)));
	}

IL_0032:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_8;
		L_8 = NetFxToWinRtStreamAdapter_EnsureNotDisposed_mF96B332E0313DBAECC34BD8C4623646D66C1E122(__this, NULL);
		RuntimeObject* L_9 = ___0_buffer;
		RuntimeObject* L_10;
		L_10 = StreamOperationsImplementation_WriteAsync_AbstractStream_m5E3FEAF18F58EB5E21CA492C2AB13F9457F59665(L_8, L_9, NULL);
		return L_10;
	}
}
// Windows.Foundation.IAsyncOperation`1<System.Boolean> System.IO.NetFxToWinRtStreamAdapter::FlushAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_FlushAsync_mEB94B814AFD6FBEA83B3A20A1FE7D857D15394D2 (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0;
		L_0 = NetFxToWinRtStreamAdapter_EnsureNotDisposed_mF96B332E0313DBAECC34BD8C4623646D66C1E122(__this, NULL);
		RuntimeObject* L_1;
		L_1 = StreamOperationsImplementation_FlushAsync_AbstractStream_mE701CF1F7EB6513B5D18B58A56691275767D9DCC(L_0, NULL);
		return L_1;
	}
}
// System.Void System.IO.NetFxToWinRtStreamAdapter::Seek(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetFxToWinRtStreamAdapter_Seek_m9AC81223CCC143CF53DAEF7CA809E8C45526E52C (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __this, uint64_t ___0_position, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		uint64_t L_0 = ___0_position;
		if ((!(((uint64_t)L_0) > ((uint64_t)((int64_t)(std::numeric_limits<int64_t>::max)())))))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAE5B93CA94D95A3EFBF2D90DB76C2A6B2204A89C)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = L_1;
		NullCheck(L_2);
		Exception_SetErrorCode_m4EDE5390355B87C0E533678B7BD03EDF4ECDDE25(L_2, ((int32_t)-2147024809), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetFxToWinRtStreamAdapter_Seek_m9AC81223CCC143CF53DAEF7CA809E8C45526E52C_RuntimeMethod_var)));
	}

IL_0022:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3;
		L_3 = NetFxToWinRtStreamAdapter_EnsureNotDisposed_mF96B332E0313DBAECC34BD8C4623646D66C1E122(__this, NULL);
		uint64_t L_4 = ___0_position;
		V_0 = L_4;
		int64_t L_5 = V_0;
		NullCheck(L_3);
		int64_t L_6;
		L_6 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(32 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_3, L_5, 0);
		return;
	}
}
// System.Boolean System.IO.NetFxToWinRtStreamAdapter::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetFxToWinRtStreamAdapter_get_CanRead_m9A2F71AE4F8DF5D46EBCBA7EEA0BD6E3BA5E550F (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0;
		L_0 = NetFxToWinRtStreamAdapter_EnsureNotDisposed_mF96B332E0313DBAECC34BD8C4623646D66C1E122(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_0);
		return L_1;
	}
}
// System.Boolean System.IO.NetFxToWinRtStreamAdapter::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetFxToWinRtStreamAdapter_get_CanWrite_mE15EAB11D32C7615C658F2C226266E1AD1E02214 (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0;
		L_0 = NetFxToWinRtStreamAdapter_EnsureNotDisposed_mF96B332E0313DBAECC34BD8C4623646D66C1E122(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_0);
		return L_1;
	}
}
// System.UInt64 System.IO.NetFxToWinRtStreamAdapter::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NetFxToWinRtStreamAdapter_get_Position_m9FB2167532BF6A84B75B38F2CBD2BC3C4520418B (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0;
		L_0 = NetFxToWinRtStreamAdapter_EnsureNotDisposed_mF96B332E0313DBAECC34BD8C4623646D66C1E122(__this, NULL);
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_0);
		return L_1;
	}
}
// System.UInt64 System.IO.NetFxToWinRtStreamAdapter::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NetFxToWinRtStreamAdapter_get_Size_mC7911E36EE823861F59C0BDE0744F658385F98A1 (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0;
		L_0 = NetFxToWinRtStreamAdapter_EnsureNotDisposed_mF96B332E0313DBAECC34BD8C4623646D66C1E122(__this, NULL);
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_0);
		return L_1;
	}
}
// System.Void System.IO.NetFxToWinRtStreamAdapter::set_Size(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetFxToWinRtStreamAdapter_set_Size_m0D858B7B2DEE0B0116A14E473201B44AB92FDD80 (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __this, uint64_t ___0_value, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* G_B4_0 = NULL;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* G_B3_0 = NULL;
	{
		uint64_t L_0 = ___0_value;
		if ((!(((uint64_t)L_0) > ((uint64_t)((int64_t)(std::numeric_limits<int64_t>::max)())))))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBF16CB6EAF2A1F143A075008C091BEF301FE5C4F)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = L_1;
		NullCheck(L_2);
		Exception_SetErrorCode_m4EDE5390355B87C0E533678B7BD03EDF4ECDDE25(L_2, ((int32_t)-2147024809), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetFxToWinRtStreamAdapter_set_Size_m0D858B7B2DEE0B0116A14E473201B44AB92FDD80_RuntimeMethod_var)));
	}

IL_0022:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3;
		L_3 = NetFxToWinRtStreamAdapter_EnsureNotDisposed_mF96B332E0313DBAECC34BD8C4623646D66C1E122(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4 = L_3;
		NullCheck(L_4);
		bool L_5;
		L_5 = VirtualFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_4);
		G_B3_0 = L_4;
		if (L_5)
		{
			G_B4_0 = L_4;
			goto IL_0046;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_6 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral832C4F81E24CCBFF4E7EB3B607EF3F2014F042CD)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = L_6;
		NullCheck(L_7);
		Exception_SetErrorCode_m4EDE5390355B87C0E533678B7BD03EDF4ECDDE25(L_7, ((int32_t)-2147483634), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetFxToWinRtStreamAdapter_set_Size_m0D858B7B2DEE0B0116A14E473201B44AB92FDD80_RuntimeMethod_var)));
	}

IL_0046:
	{
		uint64_t L_8 = ___0_value;
		V_0 = L_8;
		int64_t L_9 = V_0;
		NullCheck(G_B4_0);
		VirtualActionInvoker1< int64_t >::Invoke(33 /* System.Void System.IO.Stream::SetLength(System.Int64) */, G_B4_0, L_9);
		return;
	}
}
// System.Void System.IO.NetFxToWinRtStreamAdapter::ThrowCloningNotSupported(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetFxToWinRtStreamAdapter_ThrowCloningNotSupported_m7E8B9378F6721B003F1357E2B992EC6F1AF4117F (String_t* ___0_methodName, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_methodName;
		String_t* L_1;
		L_1 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC572FE41E8E4C5A824E966055EB754531EA8F74F)), L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral52B2BD21832AF0B449CFD652E1B844BE0BC454D9)), NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_2 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_2, L_1, NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_3 = L_2;
		NullCheck(L_3);
		Exception_SetErrorCode_m4EDE5390355B87C0E533678B7BD03EDF4ECDDE25(L_3, ((int32_t)-2147467263), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetFxToWinRtStreamAdapter_ThrowCloningNotSupported_m7E8B9378F6721B003F1357E2B992EC6F1AF4117F_RuntimeMethod_var)));
	}
}
// Windows.Storage.Streams.IRandomAccessStream System.IO.NetFxToWinRtStreamAdapter::CloneStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_CloneStream_m7C1D8E72959462110DE24B04DD63A1E7460EC4A7 (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA47F6922CBC47935F33073D4990D85481289C7B2);
		s_Il2CppMethodInitialized = true;
	}
	{
		NetFxToWinRtStreamAdapter_ThrowCloningNotSupported_m7E8B9378F6721B003F1357E2B992EC6F1AF4117F(_stringLiteralA47F6922CBC47935F33073D4990D85481289C7B2, NULL);
		return (RuntimeObject*)NULL;
	}
}
// Windows.Storage.Streams.IInputStream System.IO.NetFxToWinRtStreamAdapter::GetInputStreamAt(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_GetInputStreamAt_m03E7B7428D9EF51696BEB6C89842FBA7FD82D3F9 (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __this, uint64_t ___0_position, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral873B6C8A4B1BCC0DE87008C0BEE9C272FF746BEE);
		s_Il2CppMethodInitialized = true;
	}
	{
		NetFxToWinRtStreamAdapter_ThrowCloningNotSupported_m7E8B9378F6721B003F1357E2B992EC6F1AF4117F(_stringLiteral873B6C8A4B1BCC0DE87008C0BEE9C272FF746BEE, NULL);
		return (RuntimeObject*)NULL;
	}
}
// Windows.Storage.Streams.IOutputStream System.IO.NetFxToWinRtStreamAdapter::GetOutputStreamAt(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_GetOutputStreamAt_mA1AF4993CBC2A031B9DA190B67BDFEC34B7CC19F (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __this, uint64_t ___0_position, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB05CC11CA67D7FCD20736A7DBD8C65EEA11AA548);
		s_Il2CppMethodInitialized = true;
	}
	{
		NetFxToWinRtStreamAdapter_ThrowCloningNotSupported_m7E8B9378F6721B003F1357E2B992EC6F1AF4117F(_stringLiteralB05CC11CA67D7FCD20736A7DBD8C65EEA11AA548, NULL);
		return (RuntimeObject*)NULL;
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
// System.Void System.IO.NetFxToWinRtStreamAdapter/InputStream::.ctor(System.IO.Stream,System.IO.NetFxToWinRtStreamAdapter/StreamReadOperationOptimization)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputStream__ctor_m48D9F27F1585B27C0E4E9A719AA1E0D046B1D832 (InputStream_t5337674C27D910998AD03237067CD14A65B18403* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, int32_t ___1_readOptimization, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		int32_t L_1 = ___1_readOptimization;
		NetFxToWinRtStreamAdapter__ctor_m4C98A4B0C7BE7C32300976D45A2540F476A5B914(__this, L_0, L_1, NULL);
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
// System.Void System.IO.NetFxToWinRtStreamAdapter/OutputStream::.ctor(System.IO.Stream,System.IO.NetFxToWinRtStreamAdapter/StreamReadOperationOptimization)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputStream__ctor_m6B51179BC5A49DE8F34C7262F9DAC4FC80DA6369 (OutputStream_t44EF2F4DE5310B5C3D243ABF0412D78134F6E7A8* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, int32_t ___1_readOptimization, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		int32_t L_1 = ___1_readOptimization;
		NetFxToWinRtStreamAdapter__ctor_m4C98A4B0C7BE7C32300976D45A2540F476A5B914(__this, L_0, L_1, NULL);
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
// System.Void System.IO.NetFxToWinRtStreamAdapter/RandomAccessStream::.ctor(System.IO.Stream,System.IO.NetFxToWinRtStreamAdapter/StreamReadOperationOptimization)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomAccessStream__ctor_m1532372657144D192452D9D0B0E0498749A91B34 (RandomAccessStream_t26E619D7F88DBC344D0337DE719FB2702640730D* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, int32_t ___1_readOptimization, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		int32_t L_1 = ___1_readOptimization;
		NetFxToWinRtStreamAdapter__ctor_m4C98A4B0C7BE7C32300976D45A2540F476A5B914(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void System.IO.NetFxToWinRtStreamAdapter/RandomAccessStream::Windows.Storage.Streams.IRandomAccessStream.put_Size(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomAccessStream_Windows_Storage_Streams_IRandomAccessStream_put_Size_m2C0590DEFB21D9424F72CF21DD0A054F8E80C75A (RandomAccessStream_t26E619D7F88DBC344D0337DE719FB2702640730D* __this, uint64_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___0_value;
		NetFxToWinRtStreamAdapter_set_Size_m0D858B7B2DEE0B0116A14E473201B44AB92FDD80(__this, L_0, NULL);
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
// System.Void System.IO.NetFxToWinRtStreamAdapter/InputOutputStream::.ctor(System.IO.Stream,System.IO.NetFxToWinRtStreamAdapter/StreamReadOperationOptimization)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputOutputStream__ctor_mD5341531BE2594F89D2F50250FBD046BF60750C3 (InputOutputStream_t5862300BC55FC7221B062054B4F1A743E433D95B* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, int32_t ___1_readOptimization, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		int32_t L_1 = ___1_readOptimization;
		NetFxToWinRtStreamAdapter__ctor_m4C98A4B0C7BE7C32300976D45A2540F476A5B914(__this, L_0, L_1, NULL);
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
// System.Void System.IO.StreamOperationAsyncResult::ThrowWithIOExceptionDispatchInfo(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOperationAsyncResult_ThrowWithIOExceptionDispatchInfo_mE3F4DC492ECBE43EA92FDE9C76039241AC2D4EC0 (StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5* __this, Exception_t* ___0_e, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncInfo_t06F1B6F69BB42B42818C2FB052DCCC101801540D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____completedOperation_9;
		NullCheck(L_0);
		Exception_t* L_1;
		L_1 = InterfaceFuncInvoker0< Exception_t* >::Invoke(2 /* System.Exception Windows.Foundation.IAsyncInfo::get_ErrorCode() */, IAsyncInfo_t06F1B6F69BB42B42818C2FB052DCCC101801540D_il2cpp_TypeInfo_var, L_0);
		Exception_t* L_2;
		L_2 = WindowsRuntimeSystemExtensions_AttachRestrictedErrorInfo_mDDF5CD061CF17571ADA590A19F8C391BCDB24271(L_1, NULL);
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3;
		L_3 = WinRtIOHelper_NativeExceptionToIOExceptionInfo_mB3A83A47FB194066EB5853EEA3C94FBD0492E4EA(L_2, NULL);
		NullCheck(L_3);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_3, NULL);
		return;
	}
}
// System.Void System.IO.StreamOperationAsyncResult::.ctor(Windows.Foundation.IAsyncInfo,System.AsyncCallback,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOperationAsyncResult__ctor_mEB14441257810BF82A855A8FA545D99A14659A05 (StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5* __this, RuntimeObject* ___0_asyncStreamOperation, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_userCompletionCallback, RuntimeObject* ___2_userAsyncStateInfo, bool ___3_processCompletedOperationInCallback, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_asyncStreamOperation;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral86026AF0E517D49DA08ECB5085428B0DD45FB264)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamOperationAsyncResult__ctor_mEB14441257810BF82A855A8FA545D99A14659A05_RuntimeMethod_var)));
	}

IL_0014:
	{
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_2 = ___1_userCompletionCallback;
		__this->____userCompletionCallback_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____userCompletionCallback_0), (void*)L_2);
		RuntimeObject* L_3 = ___2_userAsyncStateInfo;
		__this->____userAsyncStateInfo_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____userAsyncStateInfo_1), (void*)L_3);
		RuntimeObject* L_4 = ___0_asyncStreamOperation;
		__this->____asyncStreamOperation_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____asyncStreamOperation_2), (void*)L_4);
		il2cpp_codegen_memory_barrier();
		__this->____completed_3 = (bool)0;
		il2cpp_codegen_memory_barrier();
		__this->____callbackInvoked_4 = (bool)0;
		__this->____bytesCompleted_6 = ((int64_t)0);
		__this->____errorInfo_7 = (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____errorInfo_7), (void*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL);
		bool L_5 = ___3_processCompletedOperationInCallback;
		__this->____processCompletedOperationInCallback_8 = L_5;
		return;
	}
}
// System.Object System.IO.StreamOperationAsyncResult::get_AsyncState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StreamOperationAsyncResult_get_AsyncState_m5EDC9841305CE5E5586B5F79F63098221AFACEF1 (StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____userAsyncStateInfo_1;
		return L_0;
	}
}
// System.Boolean System.IO.StreamOperationAsyncResult::get_ProcessCompletedOperationInCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StreamOperationAsyncResult_get_ProcessCompletedOperationInCallback_m8470600DA8B333697D8129A0D3F1AAA66D146F41 (StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____processCompletedOperationInCallback_8;
		return L_0;
	}
}
// System.Threading.WaitHandle System.IO.StreamOperationAsyncResult::get_AsyncWaitHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8* StreamOperationAsyncResult_get_AsyncWaitHandle_m439DB1689234706AAD0A3B2433AA6F4F1054E202 (StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* V_0 = NULL;
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* V_1 = NULL;
	{
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_0 = __this->____waitHandle_5;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_2 = V_0;
		return L_2;
	}

IL_000e:
	{
		bool L_3 = __this->____completed_3;
		il2cpp_codegen_memory_barrier();
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_4 = (ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158*)il2cpp_codegen_object_new(ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ManualResetEvent__ctor_m361CFCF6AC28BFFF5C8790DC2B5951791A1C4CEE(L_4, L_3, NULL);
		V_0 = L_4;
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158** L_5 = (&__this->____waitHandle_5);
		il2cpp_codegen_memory_barrier();
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_6 = V_0;
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_7;
		L_7 = InterlockedCompareExchangeImpl<ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158*>(L_5, L_6, (ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158*)NULL);
		V_1 = L_7;
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_8 = V_1;
		if (!L_8)
		{
			goto IL_0035;
		}
	}
	{
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_9 = V_0;
		NullCheck(L_9);
		WaitHandle_Dispose_m185505E6A3A6D31DEAA92725E04CAFAD3A1237C1(L_9, NULL);
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_10 = V_1;
		return L_10;
	}

IL_0035:
	{
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_11 = V_0;
		return L_11;
	}
}
// System.Boolean System.IO.StreamOperationAsyncResult::get_CompletedSynchronously()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StreamOperationAsyncResult_get_CompletedSynchronously_m3AF3D6B3C0B4C6CC7253EE38F0EA4270564BB13D (StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Boolean System.IO.StreamOperationAsyncResult::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StreamOperationAsyncResult_get_IsCompleted_mD731F51E84ED5190570B845F8D4F2A88FD9FB6D8 (StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____completed_3;
		il2cpp_codegen_memory_barrier();
		return L_0;
	}
}
// System.Void System.IO.StreamOperationAsyncResult::Wait()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOperationAsyncResult_Wait_m0B398079EB6A2B147CE10149B4E1F0A672CFB07D (StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5* __this, const RuntimeMethod* method) 
{
	WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8* V_0 = NULL;
	{
		bool L_0 = __this->____completed_3;
		il2cpp_codegen_memory_barrier();
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8* L_1;
		L_1 = StreamOperationAsyncResult_get_AsyncWaitHandle_m439DB1689234706AAD0A3B2433AA6F4F1054E202(__this, NULL);
		V_0 = L_1;
		goto IL_001b;
	}

IL_0014:
	{
		WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_2);
	}

IL_001b:
	{
		bool L_4 = __this->____completed_3;
		il2cpp_codegen_memory_barrier();
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		return;
	}
}
// System.Int64 System.IO.StreamOperationAsyncResult::get_BytesCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t StreamOperationAsyncResult_get_BytesCompleted_m39550759FF8B759BFD58B476BA8D509EF454A7DE (StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->____bytesCompleted_6;
		return L_0;
	}
}
// System.Boolean System.IO.StreamOperationAsyncResult::get_HasError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StreamOperationAsyncResult_get_HasError_m496A745E349A4B25765F291FE07008844EC4C903 (StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5* __this, const RuntimeMethod* method) 
{
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_0 = __this->____errorInfo_7;
		return (bool)((!(((RuntimeObject*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Void System.IO.StreamOperationAsyncResult::ThrowCachedError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOperationAsyncResult_ThrowCachedError_m045627B786B647E31F4140BF2C6A902AD52E53B2 (StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5* __this, const RuntimeMethod* method) 
{
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_0 = __this->____errorInfo_7;
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
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_1 = __this->____errorInfo_7;
		NullCheck(L_1);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_1, NULL);
		return;
	}
}
// System.Boolean System.IO.StreamOperationAsyncResult::CancelStreamOperation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StreamOperationAsyncResult_CancelStreamOperation_mE2076F01FA3594896984B6E58348D6CAC7E57FEF (StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncInfo_t06F1B6F69BB42B42818C2FB052DCCC101801540D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->____callbackInvoked_4;
		il2cpp_codegen_memory_barrier();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		RuntimeObject* L_1 = __this->____asyncStreamOperation_2;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(3 /* System.Void Windows.Foundation.IAsyncInfo::Cancel() */, IAsyncInfo_t06F1B6F69BB42B42818C2FB052DCCC101801540D_il2cpp_TypeInfo_var, L_1);
		return (bool)1;
	}
}
// System.Void System.IO.StreamOperationAsyncResult::CloseStreamOperation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOperationAsyncResult_CloseStreamOperation_m7EDC8353FDD660F2FEC14D20F92A6B3287DF72CF (StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncInfo_t06F1B6F69BB42B42818C2FB052DCCC101801540D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			RuntimeObject* L_0 = __this->____asyncStreamOperation_2;
			if (!L_0)
			{
				goto IL_0013_1;
			}
		}
		{
			RuntimeObject* L_1 = __this->____asyncStreamOperation_2;
			NullCheck(L_1);
			InterfaceActionInvoker0::Invoke(4 /* System.Void Windows.Foundation.IAsyncInfo::Close() */, IAsyncInfo_t06F1B6F69BB42B42818C2FB052DCCC101801540D_il2cpp_TypeInfo_var, L_1);
		}

IL_0013_1:
		{
			goto IL_0018;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0015;
		}
		throw e;
	}

CATCH_0015:
	{// begin catch(System.Object)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0018;
	}// end catch (depth: 1)

IL_0018:
	{
		__this->____asyncStreamOperation_2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____asyncStreamOperation_2), (void*)(RuntimeObject*)NULL);
		return;
	}
}
// System.Void System.IO.StreamOperationAsyncResult::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOperationAsyncResult_Finalize_mADB96597ACF4A10D463E15A0A0E9327096BC0A1F (StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0009:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			bool L_0;
			L_0 = StreamOperationAsyncResult_CancelStreamOperation_mE2076F01FA3594896984B6E58348D6CAC7E57FEF(__this, NULL);
			goto IL_0010;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0010:
	{
		return;
	}
}
// System.Void System.IO.StreamOperationAsyncResult::ProcessCompletedOperation_InvalidOperationThrowHelper(System.Runtime.ExceptionServices.ExceptionDispatchInfo,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOperationAsyncResult_ProcessCompletedOperation_InvalidOperationThrowHelper_m43EFC5D374210D84BCBC38FDB13A3E3774ECEE88 (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ___0_errInfo, String_t* ___1_errMsg, const RuntimeMethod* method) 
{
	Exception_t* V_0 = NULL;
	Exception_t* G_B3_0 = NULL;
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_0 = ___0_errInfo;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_1 = ___0_errInfo;
		NullCheck(L_1);
		Exception_t* L_2;
		L_2 = ExceptionDispatchInfo_get_SourceException_m981DC7F90598BE65BD4FA1A8340025A3A7CC3DBE_inline(L_1, NULL);
		G_B3_0 = L_2;
		goto IL_000c;
	}

IL_000b:
	{
		G_B3_0 = ((Exception_t*)(NULL));
	}

IL_000c:
	{
		V_0 = G_B3_0;
		Exception_t* L_3 = V_0;
		if (L_3)
		{
			goto IL_0017;
		}
	}
	{
		String_t* L_4 = ___1_errMsg;
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamOperationAsyncResult_ProcessCompletedOperation_InvalidOperationThrowHelper_m43EFC5D374210D84BCBC38FDB13A3E3774ECEE88_RuntimeMethod_var)));
	}

IL_0017:
	{
		String_t* L_6 = ___1_errMsg;
		Exception_t* L_7 = V_0;
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_8 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		InvalidOperationException__ctor_m63F5561BE647F655D22C8289E53A5D3A2196B668(L_8, L_6, L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamOperationAsyncResult_ProcessCompletedOperation_InvalidOperationThrowHelper_m43EFC5D374210D84BCBC38FDB13A3E3774ECEE88_RuntimeMethod_var)));
	}
}
// System.Void System.IO.StreamOperationAsyncResult::ProcessCompletedOperation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOperationAsyncResult_ProcessCompletedOperation_m40E4883B3BAF7C60094786695F9E4A154DE3C055 (StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncInfo_t06F1B6F69BB42B42818C2FB052DCCC101801540D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BA7A44B1DE46A65F9B23F2B378BE25B1D67FF8A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A415D789D919AD88B5D9DEA8D8716351276D26B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1A89E50A90934499ED855F3DDECC1AF3F1A2B88);
		s_Il2CppMethodInitialized = true;
	}
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* V_0 = NULL;
	Exception_t* V_1 = NULL;
	String_t* V_2 = NULL;
	Exception_t* G_B9_0 = NULL;
	{
		bool L_0 = __this->____callbackInvoked_4;
		il2cpp_codegen_memory_barrier();
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_1 = __this->____errorInfo_7;
		StreamOperationAsyncResult_ProcessCompletedOperation_InvalidOperationThrowHelper_m43EFC5D374210D84BCBC38FDB13A3E3774ECEE88(L_1, _stringLiteral5BA7A44B1DE46A65F9B23F2B378BE25B1D67FF8A, NULL);
	}

IL_001a:
	{
		bool L_2 = __this->____processCompletedOperationInCallback_8;
		if (L_2)
		{
			goto IL_003c;
		}
	}
	{
		bool L_3 = __this->____completed_3;
		il2cpp_codegen_memory_barrier();
		if (L_3)
		{
			goto IL_003c;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_4 = __this->____errorInfo_7;
		StreamOperationAsyncResult_ProcessCompletedOperation_InvalidOperationThrowHelper_m43EFC5D374210D84BCBC38FDB13A3E3774ECEE88(L_4, _stringLiteral5BA7A44B1DE46A65F9B23F2B378BE25B1D67FF8A, NULL);
	}

IL_003c:
	{
		RuntimeObject* L_5 = __this->____completedOperation_9;
		if (L_5)
		{
			goto IL_008a;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_6 = __this->____errorInfo_7;
		V_0 = L_6;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_7 = V_0;
		if (!L_7)
		{
			goto IL_0056;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_8 = V_0;
		NullCheck(L_8);
		Exception_t* L_9;
		L_9 = ExceptionDispatchInfo_get_SourceException_m981DC7F90598BE65BD4FA1A8340025A3A7CC3DBE_inline(L_8, NULL);
		G_B9_0 = L_9;
		goto IL_0057;
	}

IL_0056:
	{
		G_B9_0 = ((Exception_t*)(NULL));
	}

IL_0057:
	{
		V_1 = G_B9_0;
		V_2 = _stringLiteralA1A89E50A90934499ED855F3DDECC1AF3F1A2B88;
		Exception_t* L_10 = V_1;
		if (!L_10)
		{
			goto IL_007f;
		}
	}
	{
		Exception_t* L_11 = V_1;
		if (!((NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)IsInstClass((RuntimeObject*)L_11, NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var)))
		{
			goto IL_007f;
		}
	}
	{
		String_t* L_12 = V_2;
		Exception_t* L_13 = V_1;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_13);
		NullCheck(L_12);
		bool L_15;
		L_15 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_12, L_14, NULL);
		if (!L_15)
		{
			goto IL_007f;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_16 = V_0;
		NullCheck(L_16);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_16, NULL);
		goto IL_008a;
	}

IL_007f:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_17 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_17);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5BA7A44B1DE46A65F9B23F2B378BE25B1D67FF8A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamOperationAsyncResult_ProcessCompletedOperation_m40E4883B3BAF7C60094786695F9E4A154DE3C055_RuntimeMethod_var)));
	}

IL_008a:
	{
		RuntimeObject* L_18 = __this->____completedOperation_9;
		NullCheck(L_18);
		uint32_t L_19;
		L_19 = InterfaceFuncInvoker0< uint32_t >::Invoke(0 /* System.UInt32 Windows.Foundation.IAsyncInfo::get_Id() */, IAsyncInfo_t06F1B6F69BB42B42818C2FB052DCCC101801540D_il2cpp_TypeInfo_var, L_18);
		RuntimeObject* L_20 = __this->____asyncStreamOperation_2;
		NullCheck(L_20);
		uint32_t L_21;
		L_21 = InterfaceFuncInvoker0< uint32_t >::Invoke(0 /* System.UInt32 Windows.Foundation.IAsyncInfo::get_Id() */, IAsyncInfo_t06F1B6F69BB42B42818C2FB052DCCC101801540D_il2cpp_TypeInfo_var, L_20);
		if ((((int32_t)L_19) == ((int32_t)L_21)))
		{
			goto IL_00b2;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_22 = __this->____errorInfo_7;
		StreamOperationAsyncResult_ProcessCompletedOperation_InvalidOperationThrowHelper_m43EFC5D374210D84BCBC38FDB13A3E3774ECEE88(L_22, _stringLiteral8A415D789D919AD88B5D9DEA8D8716351276D26B, NULL);
	}

IL_00b2:
	{
		RuntimeObject* L_23 = __this->____completedOperation_9;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* Windows.Foundation.AsyncStatus Windows.Foundation.IAsyncInfo::get_Status() */, IAsyncInfo_t06F1B6F69BB42B42818C2FB052DCCC101801540D_il2cpp_TypeInfo_var, L_23);
		if ((!(((uint32_t)L_24) == ((uint32_t)3))))
		{
			goto IL_00d9;
		}
	}
	{
		__this->____bytesCompleted_6 = ((int64_t)0);
		RuntimeObject* L_25 = __this->____completedOperation_9;
		NullCheck(L_25);
		Exception_t* L_26;
		L_26 = InterfaceFuncInvoker0< Exception_t* >::Invoke(2 /* System.Exception Windows.Foundation.IAsyncInfo::get_ErrorCode() */, IAsyncInfo_t06F1B6F69BB42B42818C2FB052DCCC101801540D_il2cpp_TypeInfo_var, L_25);
		StreamOperationAsyncResult_ThrowWithIOExceptionDispatchInfo_mE3F4DC492ECBE43EA92FDE9C76039241AC2D4EC0(__this, L_26, NULL);
	}

IL_00d9:
	{
		RuntimeObject* L_27 = __this->____completedOperation_9;
		int64_t* L_28 = (&__this->____bytesCompleted_6);
		VirtualActionInvoker2< RuntimeObject*, int64_t* >::Invoke(8 /* System.Void System.IO.StreamOperationAsyncResult::ProcessConcreteCompletedOperation(Windows.Foundation.IAsyncInfo,System.Int64&) */, __this, L_27, L_28);
		return;
	}
}
// System.Void System.IO.StreamOperationAsyncResult::StreamOperationCompletedCallback(Windows.Foundation.IAsyncInfo,Windows.Foundation.AsyncStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamOperationAsyncResult_StreamOperationCompletedCallback_m681CE9DF8053BDB244E7293C353AF24845592AC0 (StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5* __this, RuntimeObject* ___0_completedOperation, int32_t ___1_unusedCompletionStatus, const RuntimeMethod* method) 
{
	Exception_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005a:
			{// begin finally (depth: 1)
				{
					il2cpp_codegen_memory_barrier();
					__this->____completed_3 = (bool)1;
					Interlocked_MemoryBarrier_m544E79984FB21C732A4514A2EFFC126ECAA22B66(NULL);
					ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_0 = __this->____waitHandle_5;
					il2cpp_codegen_memory_barrier();
					if (!L_0)
					{
						goto IL_0080;
					}
				}
				{
					ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_1 = __this->____waitHandle_5;
					il2cpp_codegen_memory_barrier();
					NullCheck(L_1);
					bool L_2;
					L_2 = EventWaitHandle_Set_mDF98D67F214714A9590DF82A1C51D3D851281E4D(L_1, NULL);
				}

IL_0080:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				{
					bool L_3 = __this->____callbackInvoked_4;
					il2cpp_codegen_memory_barrier();
					if (!L_3)
					{
						goto IL_0015_2;
					}
				}
				{
					InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
					NullCheck(L_4);
					InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral87E93D65632F2787675566D82B8FBFD0856FEAB0)), NULL);
					IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamOperationAsyncResult_StreamOperationCompletedCallback_m681CE9DF8053BDB244E7293C353AF24845592AC0_RuntimeMethod_var)));
				}

IL_0015_2:
				{
					il2cpp_codegen_memory_barrier();
					__this->____callbackInvoked_4 = (bool)1;
					RuntimeObject* L_5 = ___0_completedOperation;
					if (L_5)
					{
						goto IL_002c_2;
					}
				}
				{
					NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_6 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var)));
					NullCheck(L_6);
					NullReferenceException__ctor_mA41317A57F5C1C0E3F59C7EB25ABD484564B23D4(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA1A89E50A90934499ED855F3DDECC1AF3F1A2B88)), NULL);
					IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamOperationAsyncResult_StreamOperationCompletedCallback_m681CE9DF8053BDB244E7293C353AF24845592AC0_RuntimeMethod_var)));
				}

IL_002c_2:
				{
					RuntimeObject* L_7 = ___0_completedOperation;
					__this->____completedOperation_9 = L_7;
					Il2CppCodeGenWriteBarrier((void**)(&__this->____completedOperation_9), (void*)L_7);
					bool L_8 = __this->____processCompletedOperationInCallback_8;
					if (!L_8)
					{
						goto IL_0041_2;
					}
				}
				{
					StreamOperationAsyncResult_ProcessCompletedOperation_m40E4883B3BAF7C60094786695F9E4A154DE3C055(__this, NULL);
				}

IL_0041_2:
				{
					goto IL_0081;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0043_1;
				}
				throw e;
			}

CATCH_0043_1:
			{// begin catch(System.Exception)
				V_0 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
				__this->____bytesCompleted_6 = ((int64_t)0);
				Exception_t* L_9 = V_0;
				ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_10;
				L_10 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_9, NULL);
				__this->____errorInfo_7 = L_10;
				Il2CppCodeGenWriteBarrier((void**)(&__this->____errorInfo_7), (void*)L_10);
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_0081;
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0081:
	{
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_11 = __this->____userCompletionCallback_0;
		if (!L_11)
		{
			goto IL_0095;
		}
	}
	{
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_12 = __this->____userCompletionCallback_0;
		NullCheck(L_12);
		AsyncCallback_Invoke_mA85DEAE969B1D0FD97E934DC39439E89D7553910_inline(L_12, __this, NULL);
	}

IL_0095:
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
// System.Void System.IO.StreamReadAsyncResult::.ctor(Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>,Windows.Storage.Streams.IBuffer,System.AsyncCallback,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReadAsyncResult__ctor_m176A96FFBB03EE86C985427F09FC017FA049B393 (StreamReadAsyncResult_t1F47DFA1E32A8FBC434C3B74D239D2F4888DDFBF* __this, RuntimeObject* ___0_asyncStreamReadOperation, RuntimeObject* ___1_buffer, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_userCompletionCallback, RuntimeObject* ___3_userAsyncStateInfo, bool ___4_processCompletedOperationInCallback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamOperationAsyncResult_StreamOperationCompletedCallback_m681CE9DF8053BDB244E7293C353AF24845592AC0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_asyncStreamReadOperation;
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_1 = ___2_userCompletionCallback;
		RuntimeObject* L_2 = ___3_userAsyncStateInfo;
		bool L_3 = ___4_processCompletedOperationInCallback;
		StreamOperationAsyncResult__ctor_mEB14441257810BF82A855A8FA545D99A14659A05(__this, L_0, L_1, L_2, L_3, NULL);
		RuntimeObject* L_4 = ___1_buffer;
		if (L_4)
		{
			goto IL_001a;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StreamReadAsyncResult__ctor_m176A96FFBB03EE86C985427F09FC017FA049B393_RuntimeMethod_var)));
	}

IL_001a:
	{
		RuntimeObject* L_6 = ___1_buffer;
		__this->____userBuffer_10 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____userBuffer_10), (void*)L_6);
		RuntimeObject* L_7 = ___0_asyncStreamReadOperation;
		AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D* L_8 = (AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D*)il2cpp_codegen_object_new(AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		AsyncOperationWithProgressCompletedHandler_2__ctor_m670C4D5F2F4B1975A305F79ED95BECB45287A01F(L_8, __this, (intptr_t)((void*)StreamOperationAsyncResult_StreamOperationCompletedCallback_m681CE9DF8053BDB244E7293C353AF24845592AC0_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		InterfaceActionInvoker1< AsyncOperationWithProgressCompletedHandler_2_tCFD204E853463FB5C9DEFDDD49B7C3C9C336035D* >::Invoke(2 /* System.Void Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>::put_Completed(Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<TResult,TProgress>) */, IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8_il2cpp_TypeInfo_var, L_7, L_8);
		return;
	}
}
// System.Void System.IO.StreamReadAsyncResult::ProcessConcreteCompletedOperation(Windows.Foundation.IAsyncInfo,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReadAsyncResult_ProcessConcreteCompletedOperation_m071491C50601D1825D4589BB1F61AD821E65BB18 (StreamReadAsyncResult_t1F47DFA1E32A8FBC434C3B74D239D2F4888DDFBF* __this, RuntimeObject* ___0_completedOperation, int64_t* ___1_bytesCompleted, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_completedOperation;
		int64_t* L_1 = ___1_bytesCompleted;
		StreamReadAsyncResult_ProcessConcreteCompletedOperation_m1F5E2BC6C4621FD5C5A6BB3645EA5CF092E0043D(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_0, IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8_il2cpp_TypeInfo_var)), L_1, NULL);
		return;
	}
}
// System.Void System.IO.StreamReadAsyncResult::ProcessConcreteCompletedOperation(Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReadAsyncResult_ProcessConcreteCompletedOperation_m1F5E2BC6C4621FD5C5A6BB3645EA5CF092E0043D (StreamReadAsyncResult_t1F47DFA1E32A8FBC434C3B74D239D2F4888DDFBF* __this, RuntimeObject* ___0_completedOperation, int64_t* ___1_bytesCompleted, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_completedOperation;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* TResult Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>::GetResults() */, IAsyncOperationWithProgress_2_t257EF6B2FCEB5BE09946A7C7590EAF07EF3760F8_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		RuntimeObject* L_2 = __this->____userBuffer_10;
		RuntimeObject* L_3 = V_0;
		WinRtIOHelper_EnsureResultsInUserBuffer_m38C0A807EAAB9DA37F6BB34A0A57D298CE62992E(L_2, L_3, NULL);
		int64_t* L_4 = ___1_bytesCompleted;
		RuntimeObject* L_5 = __this->____userBuffer_10;
		NullCheck(L_5);
		uint32_t L_6;
		L_6 = InterfaceFuncInvoker0< uint32_t >::Invoke(1 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Length() */, IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_il2cpp_TypeInfo_var, L_5);
		*((int64_t*)L_4) = (int64_t)((int64_t)(uint64_t)L_6);
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
// System.Void System.IO.StreamWriteAsyncResult::.ctor(Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>,System.AsyncCallback,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamWriteAsyncResult__ctor_m3AE1404D8B26860EA1AAC59E0DE9E39E6EE6BD0A (StreamWriteAsyncResult_t57A8AF219966DDDB17A8D7F1F4AC8DB8D8500693* __this, RuntimeObject* ___0_asyncStreamWriteOperation, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_userCompletionCallback, RuntimeObject* ___2_userAsyncStateInfo, bool ___3_processCompletedOperationInCallback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamOperationAsyncResult_StreamOperationCompletedCallback_m681CE9DF8053BDB244E7293C353AF24845592AC0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_asyncStreamWriteOperation;
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_1 = ___1_userCompletionCallback;
		RuntimeObject* L_2 = ___2_userAsyncStateInfo;
		bool L_3 = ___3_processCompletedOperationInCallback;
		StreamOperationAsyncResult__ctor_mEB14441257810BF82A855A8FA545D99A14659A05(__this, L_0, L_1, L_2, L_3, NULL);
		RuntimeObject* L_4 = ___0_asyncStreamWriteOperation;
		AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78* L_5 = (AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78*)il2cpp_codegen_object_new(AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		AsyncOperationWithProgressCompletedHandler_2__ctor_m14725DFB9E0EBE8C71B482E21D8C7DF835C5FAD7(L_5, __this, (intptr_t)((void*)StreamOperationAsyncResult_StreamOperationCompletedCallback_m681CE9DF8053BDB244E7293C353AF24845592AC0_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< AsyncOperationWithProgressCompletedHandler_2_t42E9531B495FCEAAB99C0B9F91536438317F8F78* >::Invoke(2 /* System.Void Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>::put_Completed(Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<TResult,TProgress>) */, IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C_il2cpp_TypeInfo_var, L_4, L_5);
		return;
	}
}
// System.Void System.IO.StreamWriteAsyncResult::ProcessConcreteCompletedOperation(Windows.Foundation.IAsyncInfo,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamWriteAsyncResult_ProcessConcreteCompletedOperation_m6BBAD2C0A787FFAD17D8CBCE24BF252FC6AF1591 (StreamWriteAsyncResult_t57A8AF219966DDDB17A8D7F1F4AC8DB8D8500693* __this, RuntimeObject* ___0_completedOperation, int64_t* ___1_bytesCompleted, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_completedOperation;
		int64_t* L_1 = ___1_bytesCompleted;
		StreamWriteAsyncResult_ProcessConcreteCompletedOperation_mE9B9DE7E0F34981EBA08EF7F7A0037624A454CE1(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_0, IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C_il2cpp_TypeInfo_var)), L_1, NULL);
		return;
	}
}
// System.Void System.IO.StreamWriteAsyncResult::ProcessConcreteCompletedOperation(Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamWriteAsyncResult_ProcessConcreteCompletedOperation_mE9B9DE7E0F34981EBA08EF7F7A0037624A454CE1 (StreamWriteAsyncResult_t57A8AF219966DDDB17A8D7F1F4AC8DB8D8500693* __this, RuntimeObject* ___0_completedOperation, int64_t* ___1_bytesCompleted, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_completedOperation;
		NullCheck(L_0);
		uint32_t L_1;
		L_1 = InterfaceFuncInvoker0< uint32_t >::Invoke(4 /* TResult Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>::GetResults() */, IAsyncOperationWithProgress_2_tF0A68F74F1DB8EA20CAE1D3EE0B4CB911AE2045C_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		int64_t* L_2 = ___1_bytesCompleted;
		uint32_t L_3 = V_0;
		*((int64_t*)L_2) = (int64_t)((int64_t)(uint64_t)L_3);
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
// System.Void System.IO.StreamFlushAsyncResult::.ctor(Windows.Foundation.IAsyncOperation`1<System.Boolean>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamFlushAsyncResult__ctor_m1A20179746FD6C2C0819FB47226D1061277738B1 (StreamFlushAsyncResult_t04C0AAEDCD3CB5F458A11C4E275F2577786A8103* __this, RuntimeObject* ___0_asyncStreamFlushOperation, bool ___1_processCompletedOperationInCallback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamOperationAsyncResult_StreamOperationCompletedCallback_m681CE9DF8053BDB244E7293C353AF24845592AC0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_asyncStreamFlushOperation;
		bool L_1 = ___1_processCompletedOperationInCallback;
		StreamOperationAsyncResult__ctor_mEB14441257810BF82A855A8FA545D99A14659A05(__this, L_0, (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C*)NULL, NULL, L_1, NULL);
		RuntimeObject* L_2 = ___0_asyncStreamFlushOperation;
		AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52* L_3 = (AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52*)il2cpp_codegen_object_new(AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AsyncOperationCompletedHandler_1__ctor_m042D4610F2555E099ECE66E556C6121BFDB1266F(L_3, __this, (intptr_t)((void*)StreamOperationAsyncResult_StreamOperationCompletedCallback_m681CE9DF8053BDB244E7293C353AF24845592AC0_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< AsyncOperationCompletedHandler_1_tE7D7CD78AA3740F9A5F2ADC503889C28DBA92F52* >::Invoke(0 /* System.Void Windows.Foundation.IAsyncOperation`1<System.Boolean>::put_Completed(Windows.Foundation.AsyncOperationCompletedHandler`1<TResult>) */, IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9_il2cpp_TypeInfo_var, L_2, L_3);
		return;
	}
}
// System.Void System.IO.StreamFlushAsyncResult::ProcessConcreteCompletedOperation(Windows.Foundation.IAsyncInfo,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamFlushAsyncResult_ProcessConcreteCompletedOperation_m51AD71F7FA689880DB4DE1D6F8F8C7AC9FEA70B1 (StreamFlushAsyncResult_t04C0AAEDCD3CB5F458A11C4E275F2577786A8103* __this, RuntimeObject* ___0_completedOperation, int64_t* ___1_bytesCompleted, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_completedOperation;
		int64_t* L_1 = ___1_bytesCompleted;
		StreamFlushAsyncResult_ProcessConcreteCompletedOperation_m5ABD5DE2BAD195992CF97D067AE619FC417ACFB3(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_0, IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9_il2cpp_TypeInfo_var)), L_1, NULL);
		return;
	}
}
// System.Void System.IO.StreamFlushAsyncResult::ProcessConcreteCompletedOperation(Windows.Foundation.IAsyncOperation`1<System.Boolean>,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamFlushAsyncResult_ProcessConcreteCompletedOperation_m5ABD5DE2BAD195992CF97D067AE619FC417ACFB3 (StreamFlushAsyncResult_t04C0AAEDCD3CB5F458A11C4E275F2577786A8103* __this, RuntimeObject* ___0_completedOperation, int64_t* ___1_bytesCompleted, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int64_t* G_B2_0 = NULL;
	int64_t* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	int64_t* G_B3_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_completedOperation;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(2 /* TResult Windows.Foundation.IAsyncOperation`1<System.Boolean>::GetResults() */, IAsyncOperation_1_t6DDFC5779887EE2B297009C0FF6609B07F89E3B9_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		int64_t* L_2 = ___1_bytesCompleted;
		bool L_3 = V_0;
		G_B1_0 = L_2;
		if (L_3)
		{
			G_B2_0 = L_2;
			goto IL_000e;
		}
	}
	{
		G_B3_0 = (-1);
		G_B3_1 = G_B1_0;
		goto IL_000f;
	}

IL_000e:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_000f:
	{
		*((int64_t*)G_B3_1) = (int64_t)((int64_t)G_B3_0);
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
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32> System.IO.StreamOperationsImplementation::ReadAsync_MemoryStream(System.IO.Stream,Windows.Storage.Streams.IBuffer,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StreamOperationsImplementation_ReadAsync_MemoryStream_mE735436DB4E8DDBDA439345EC2A04A56285EFD56 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, RuntimeObject* ___1_buffer, uint32_t ___2_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncInfo_CreateCompletedOperation_TisIBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD7FE1D70D2387EE8A6B5121D1C7F09FD38E45EAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_buffer;
		NullCheck(L_0);
		InterfaceActionInvoker1< uint32_t >::Invoke(2 /* System.Void Windows.Storage.Streams.IBuffer::put_Length(System.UInt32) */, IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_il2cpp_TypeInfo_var, L_0, 0);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___0_stream;
		V_0 = ((MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)IsInstClass((RuntimeObject*)L_1, MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var));
	}
	try
	{// begin try (depth: 1)
		{
			MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = V_0;
			MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = V_0;
			NullCheck(L_3);
			int64_t L_4;
			L_4 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_3);
			uint32_t L_5 = ___2_count;
			RuntimeObject* L_6;
			L_6 = WindowsRuntimeBufferExtensions_GetWindowsRuntimeBuffer_m4B7F32994ECCB0CD5BA38E9B77260B949478A850(L_2, ((int32_t)L_4), L_5, NULL);
			V_1 = L_6;
			RuntimeObject* L_7 = V_1;
			NullCheck(L_7);
			uint32_t L_8;
			L_8 = InterfaceFuncInvoker0< uint32_t >::Invoke(1 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Length() */, IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_il2cpp_TypeInfo_var, L_7);
			if ((!(((uint32_t)L_8) > ((uint32_t)0))))
			{
				goto IL_0035_1;
			}
		}
		{
			MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_9 = V_0;
			RuntimeObject* L_10 = V_1;
			NullCheck(L_10);
			uint32_t L_11;
			L_11 = InterfaceFuncInvoker0< uint32_t >::Invoke(1 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Length() */, IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_il2cpp_TypeInfo_var, L_10);
			NullCheck(L_9);
			int64_t L_12;
			L_12 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(32 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_9, ((int64_t)(uint64_t)L_11), 1);
		}

IL_0035_1:
		{
			RuntimeObject* L_13 = V_1;
			RuntimeObject* L_14;
			L_14 = AsyncInfo_CreateCompletedOperation_TisIBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD7FE1D70D2387EE8A6B5121D1C7F09FD38E45EAD(L_13, AsyncInfo_CreateCompletedOperation_TisIBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD7FE1D70D2387EE8A6B5121D1C7F09FD38E45EAD_RuntimeMethod_var);
			V_2 = L_14;
			goto IL_0046;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003e;
		}
		throw e;
	}

CATCH_003e:
	{// begin catch(System.Exception)
		RuntimeObject* L_15;
		L_15 = AsyncInfo_CreateFaultedOperation_TisIBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m50310AB23A3C1EFA6CE88FC31766E6357F63F149(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncInfo_CreateFaultedOperation_TisIBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m50310AB23A3C1EFA6CE88FC31766E6357F63F149_RuntimeMethod_var)));
		V_2 = L_15;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0046;
	}// end catch (depth: 1)

IL_0046:
	{
		RuntimeObject* L_16 = V_2;
		return L_16;
	}
}
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32> System.IO.StreamOperationsImplementation::ReadAsync_AbstractStream(System.IO.Stream,Windows.Storage.Streams.IBuffer,System.UInt32,Windows.Storage.Streams.InputStreamOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StreamOperationsImplementation_ReadAsync_AbstractStream_m6F30EB11053EE983788372A179D52D4346BF2146 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, RuntimeObject* ___1_buffer, uint32_t ___2_count, uint32_t ___3_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncInfo_Run_TisIBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m09FBD96A7A9CACA30EB79F6D9AA33E95E9A6F552_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_tAC8FE9F123579F0F0724C2106222C88580347FC8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_U3CReadAsync_AbstractStreamU3Eb__0_m63E60969CED7742406E61479AE3DF40BFAF608E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_t05B790464823435BFCF2DDD9EDD15BD109799D30_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass1_0_t05B790464823435BFCF2DDD9EDD15BD109799D30* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass1_0_t05B790464823435BFCF2DDD9EDD15BD109799D30* L_0 = (U3CU3Ec__DisplayClass1_0_t05B790464823435BFCF2DDD9EDD15BD109799D30*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass1_0_t05B790464823435BFCF2DDD9EDD15BD109799D30_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass1_0__ctor_mD1A4DBCA9CA8C623C423917C64E9BEFDC94A705B(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass1_0_t05B790464823435BFCF2DDD9EDD15BD109799D30* L_1 = V_0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = ___0_stream;
		NullCheck(L_1);
		L_1->___stream_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___stream_1), (void*)L_2);
		U3CU3Ec__DisplayClass1_0_t05B790464823435BFCF2DDD9EDD15BD109799D30* L_3 = V_0;
		uint32_t L_4 = ___3_options;
		NullCheck(L_3);
		L_3->___options_3 = L_4;
		U3CU3Ec__DisplayClass1_0_t05B790464823435BFCF2DDD9EDD15BD109799D30* L_5 = V_0;
		uint32_t L_6 = ___2_count;
		NullCheck(L_5);
		L_5->___bytesRequested_2 = L_6;
		U3CU3Ec__DisplayClass1_0_t05B790464823435BFCF2DDD9EDD15BD109799D30* L_7 = V_0;
		RuntimeObject* L_8 = ___1_buffer;
		NullCheck(L_7);
		L_7->___dataBuffer_0 = ((WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9*)IsInstSealed((RuntimeObject*)L_8, WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___dataBuffer_0), (void*)((WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9*)IsInstSealed((RuntimeObject*)L_8, WindowsRuntimeBuffer_t837856A4E67694A9E92B5424D2FDD0DD073504C9_il2cpp_TypeInfo_var)));
		U3CU3Ec__DisplayClass1_0_t05B790464823435BFCF2DDD9EDD15BD109799D30* L_9 = V_0;
		NullCheck(L_9);
		RuntimeObject* L_10 = L_9->___dataBuffer_0;
		if (L_10)
		{
			goto IL_004a;
		}
	}
	{
		U3CU3Ec__DisplayClass1_0_t05B790464823435BFCF2DDD9EDD15BD109799D30* L_11 = V_0;
		RuntimeObject* L_12 = ___1_buffer;
		NullCheck(L_12);
		uint32_t L_13;
		L_13 = InterfaceFuncInvoker0< uint32_t >::Invoke(0 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Capacity() */, IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_il2cpp_TypeInfo_var, L_12);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		uint32_t L_14;
		L_14 = Math_Min_m66781C8F3800C6682369B449FFDB62FAD5E87121(((int32_t)2147483647LL), L_13, NULL);
		RuntimeObject* L_15;
		L_15 = WindowsRuntimeBuffer_Create_m3483BEBC639FBC349AA9E45718AC11D2BF2E83B8(L_14, NULL);
		NullCheck(L_11);
		L_11->___dataBuffer_0 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___dataBuffer_0), (void*)L_15);
	}

IL_004a:
	{
		U3CU3Ec__DisplayClass1_0_t05B790464823435BFCF2DDD9EDD15BD109799D30* L_16 = V_0;
		Func_3_tAC8FE9F123579F0F0724C2106222C88580347FC8* L_17 = (Func_3_tAC8FE9F123579F0F0724C2106222C88580347FC8*)il2cpp_codegen_object_new(Func_3_tAC8FE9F123579F0F0724C2106222C88580347FC8_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		Func_3__ctor_m948C9321184EC42628031D5137CEA16610C539F0(L_17, L_16, (intptr_t)((void*)U3CU3Ec__DisplayClass1_0_U3CReadAsync_AbstractStreamU3Eb__0_m63E60969CED7742406E61479AE3DF40BFAF608E5_RuntimeMethod_var), NULL);
		RuntimeObject* L_18;
		L_18 = AsyncInfo_Run_TisIBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m09FBD96A7A9CACA30EB79F6D9AA33E95E9A6F552(L_17, AsyncInfo_Run_TisIBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m09FBD96A7A9CACA30EB79F6D9AA33E95E9A6F552_RuntimeMethod_var);
		return L_18;
	}
}
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32> System.IO.StreamOperationsImplementation::WriteAsync_AbstractStream(System.IO.Stream,Windows.Storage.Streams.IBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StreamOperationsImplementation_WriteAsync_AbstractStream_m5E3FEAF18F58EB5E21CA492C2AB13F9457F59665 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, RuntimeObject* ___1_buffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncInfo_Run_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mA43421DA084D5E390EBDED0FE707689FF161AEE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_t336F4190B9586A5D924C832BF5F023727A04707D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3CWriteAsync_AbstractStreamU3Eb__0_m438D77197990487CB3E4E36A01FA839D55E7EEAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3CWriteAsync_AbstractStreamU3Eb__1_m60D749A2ECFFEEDB96BC6189C4B763783C24BC8E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_t6E434BA73EA5DB3511A12C0C5CF9456D30D25FC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass2_0_t6E434BA73EA5DB3511A12C0C5CF9456D30D25FC5* V_0 = NULL;
	Func_3_t336F4190B9586A5D924C832BF5F023727A04707D* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass2_0_t6E434BA73EA5DB3511A12C0C5CF9456D30D25FC5* L_0 = (U3CU3Ec__DisplayClass2_0_t6E434BA73EA5DB3511A12C0C5CF9456D30D25FC5*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_t6E434BA73EA5DB3511A12C0C5CF9456D30D25FC5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass2_0__ctor_m3317D7C4C4D62E19B504F61FD524A1C465F246AA(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_t6E434BA73EA5DB3511A12C0C5CF9456D30D25FC5* L_1 = V_0;
		RuntimeObject* L_2 = ___1_buffer;
		NullCheck(L_1);
		L_1->___buffer_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___buffer_0), (void*)L_2);
		U3CU3Ec__DisplayClass2_0_t6E434BA73EA5DB3511A12C0C5CF9456D30D25FC5* L_3 = V_0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4 = ___0_stream;
		NullCheck(L_3);
		L_3->___stream_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___stream_1), (void*)L_4);
		U3CU3Ec__DisplayClass2_0_t6E434BA73EA5DB3511A12C0C5CF9456D30D25FC5* L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_6 = L_5->___buffer_0;
		U3CU3Ec__DisplayClass2_0_t6E434BA73EA5DB3511A12C0C5CF9456D30D25FC5* L_7 = V_0;
		NullCheck(L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_8 = (&L_7->___data_2);
		U3CU3Ec__DisplayClass2_0_t6E434BA73EA5DB3511A12C0C5CF9456D30D25FC5* L_9 = V_0;
		NullCheck(L_9);
		int32_t* L_10 = (&L_9->___offset_3);
		bool L_11;
		L_11 = WindowsRuntimeBufferExtensions_TryGetUnderlyingData_m81061F2A3D08AECCF3DAB66F6F00BDD143F2DD57(L_6, L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_003c;
		}
	}
	{
		U3CU3Ec__DisplayClass2_0_t6E434BA73EA5DB3511A12C0C5CF9456D30D25FC5* L_12 = V_0;
		Func_3_t336F4190B9586A5D924C832BF5F023727A04707D* L_13 = (Func_3_t336F4190B9586A5D924C832BF5F023727A04707D*)il2cpp_codegen_object_new(Func_3_t336F4190B9586A5D924C832BF5F023727A04707D_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Func_3__ctor_m2055F0039914A5A0ACD7CE8077100B418BBD6371(L_13, L_12, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3CWriteAsync_AbstractStreamU3Eb__0_m438D77197990487CB3E4E36A01FA839D55E7EEAF_RuntimeMethod_var), NULL);
		V_1 = L_13;
		goto IL_0049;
	}

IL_003c:
	{
		U3CU3Ec__DisplayClass2_0_t6E434BA73EA5DB3511A12C0C5CF9456D30D25FC5* L_14 = V_0;
		Func_3_t336F4190B9586A5D924C832BF5F023727A04707D* L_15 = (Func_3_t336F4190B9586A5D924C832BF5F023727A04707D*)il2cpp_codegen_object_new(Func_3_t336F4190B9586A5D924C832BF5F023727A04707D_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Func_3__ctor_m2055F0039914A5A0ACD7CE8077100B418BBD6371(L_15, L_14, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3CWriteAsync_AbstractStreamU3Eb__1_m60D749A2ECFFEEDB96BC6189C4B763783C24BC8E_RuntimeMethod_var), NULL);
		V_1 = L_15;
	}

IL_0049:
	{
		Func_3_t336F4190B9586A5D924C832BF5F023727A04707D* L_16 = V_1;
		RuntimeObject* L_17;
		L_17 = AsyncInfo_Run_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mA43421DA084D5E390EBDED0FE707689FF161AEE0(L_16, AsyncInfo_Run_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mA43421DA084D5E390EBDED0FE707689FF161AEE0_RuntimeMethod_var);
		return L_17;
	}
}
// Windows.Foundation.IAsyncOperation`1<System.Boolean> System.IO.StreamOperationsImplementation::FlushAsync_AbstractStream(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StreamOperationsImplementation_FlushAsync_AbstractStream_mE701CF1F7EB6513B5D18B58A56691275767D9DCC (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncInfo_Run_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF3F4B81C8AC925547AE45FFF5A42D5D96DFC0D25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t6B60A4875CD5D79B29837A45D46D91F7128AA5C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3CFlushAsync_AbstractStreamU3Eb__0_mF032EF2649DF33BC23715C19B970AB0575E57942_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_tB7212D23536AE37D5E6EEFABD29F7A1DCCC5BFAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec__DisplayClass3_0_tB7212D23536AE37D5E6EEFABD29F7A1DCCC5BFAA* L_0 = (U3CU3Ec__DisplayClass3_0_tB7212D23536AE37D5E6EEFABD29F7A1DCCC5BFAA*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_tB7212D23536AE37D5E6EEFABD29F7A1DCCC5BFAA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass3_0__ctor_m39C986939192C3E3838213D0B78807C8C88E4E70(L_0, NULL);
		U3CU3Ec__DisplayClass3_0_tB7212D23536AE37D5E6EEFABD29F7A1DCCC5BFAA* L_1 = L_0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = ___0_stream;
		NullCheck(L_1);
		L_1->___stream_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___stream_0), (void*)L_2);
		Func_2_t6B60A4875CD5D79B29837A45D46D91F7128AA5C3* L_3 = (Func_2_t6B60A4875CD5D79B29837A45D46D91F7128AA5C3*)il2cpp_codegen_object_new(Func_2_t6B60A4875CD5D79B29837A45D46D91F7128AA5C3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Func_2__ctor_mBA5135BC207552C342EEAB46EDEB68266C8DC3B9(L_3, L_1, (intptr_t)((void*)U3CU3Ec__DisplayClass3_0_U3CFlushAsync_AbstractStreamU3Eb__0_mF032EF2649DF33BC23715C19B970AB0575E57942_RuntimeMethod_var), NULL);
		RuntimeObject* L_4;
		L_4 = AsyncInfo_Run_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF3F4B81C8AC925547AE45FFF5A42D5D96DFC0D25(L_3, AsyncInfo_Run_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF3F4B81C8AC925547AE45FFF5A42D5D96DFC0D25_RuntimeMethod_var);
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
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_mD1A4DBCA9CA8C623C423917C64E9BEFDC94A705B (U3CU3Ec__DisplayClass1_0_t05B790464823435BFCF2DDD9EDD15BD109799D30* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Threading.Tasks.Task`1<Windows.Storage.Streams.IBuffer> System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0::<ReadAsync_AbstractStream>b__0(System.Threading.CancellationToken,System.IProgress`1<System.UInt32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t34C529965D1945277B370D1A5EEB7D54EADF44F5* U3CU3Ec__DisplayClass1_0_U3CReadAsync_AbstractStreamU3Eb__0_m63E60969CED7742406E61479AE3DF40BFAF608E5 (U3CU3Ec__DisplayClass1_0_t05B790464823435BFCF2DDD9EDD15BD109799D30* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancelToken, RuntimeObject* ___1_progressListener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_mA528202B7118D53568DC446DD648245DCD3D81CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tB607A35AD145FE4406070D15E921A3F6FA68C63C_mD6D8B6F50709BBA2608087AB2D7177FE7AF0E2BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_mDE9568F3E8450FB3A4019BCDF81FF2F82C7942B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t4102E0362C7437C556E4FEA7D535D2783F408A78_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tB607A35AD145FE4406070D15E921A3F6FA68C63C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t4102E0362C7437C556E4FEA7D535D2783F408A78_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t4102E0362C7437C556E4FEA7D535D2783F408A78 L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_mA528202B7118D53568DC446DD648245DCD3D81CC(AsyncTaskMethodBuilder_1_Create_mA528202B7118D53568DC446DD648245DCD3D81CC_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___0_cancelToken;
		(&V_0)->___cancelToken_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___cancelToken_3))->____source_0), (void*)NULL);
		RuntimeObject* L_2 = ___1_progressListener;
		(&V_0)->___progressListener_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___progressListener_4), (void*)L_2);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t4102E0362C7437C556E4FEA7D535D2783F408A78* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tB607A35AD145FE4406070D15E921A3F6FA68C63C_mD6D8B6F50709BBA2608087AB2D7177FE7AF0E2BE(L_3, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tB607A35AD145FE4406070D15E921A3F6FA68C63C_mD6D8B6F50709BBA2608087AB2D7177FE7AF0E2BE_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t4102E0362C7437C556E4FEA7D535D2783F408A78* L_4 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t34C529965D1945277B370D1A5EEB7D54EADF44F5* L_5;
		L_5 = AsyncTaskMethodBuilder_1_get_Task_mDE9568F3E8450FB3A4019BCDF81FF2F82C7942B5(L_4, AsyncTaskMethodBuilder_1_get_Task_mDE9568F3E8450FB3A4019BCDF81FF2F82C7942B5_RuntimeMethod_var);
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
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_m80B40C314DE7F8AB52D8CAEA8A6DE0AF1AB5E651 (U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tB607A35AD145FE4406070D15E921A3F6FA68C63C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80_TisU3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tB607A35AD145FE4406070D15E921A3F6FA68C63C_m87835D25F1C7F9EE719DF091E01916FD343A8957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m76EFCFDD50DEC8282C1EE86AA3722EE407C16C9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaitable_1_GetAwaiter_m7A77B1981FEC19CC7E1570EDC3F16AC5C14B4439_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_GetResult_mF1FF6CBD66A3F581D413793BA8C2AF58B707D9CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_get_IsCompleted_mD70263ED42C8E379EE20DBC2F218C3E629B4B4D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProgress_1_t95EDA14BCDEA36DD399575FF88CE05C2309101B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ConfigureAwait_m8203F4D13209C12845066A383E5B850D0486B209_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	U3CU3Ec__DisplayClass1_0_t05B790464823435BFCF2DDD9EDD15BD109799D30* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80 V_5;
	memset((&V_5), 0, sizeof(V_5));
	ConfiguredTaskAwaitable_1_t5186C81524388C1718E9AC37792D8771A443417A V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	int32_t G_B19_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		U3CU3Ec__DisplayClass1_0_t05B790464823435BFCF2DDD9EDD15BD109799D30* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0054_1;
			}
		}
		{
			U3CU3Ec__DisplayClass1_0_t05B790464823435BFCF2DDD9EDD15BD109799D30* L_3 = V_1;
			NullCheck(L_3);
			RuntimeObject* L_4 = L_3->___dataBuffer_0;
			NullCheck(L_4);
			InterfaceActionInvoker1< uint32_t >::Invoke(2 /* System.Void Windows.Storage.Streams.IBuffer::put_Length(System.UInt32) */, IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_il2cpp_TypeInfo_var, L_4, 0);
			U3CU3Ec__DisplayClass1_0_t05B790464823435BFCF2DDD9EDD15BD109799D30* L_5 = V_1;
			NullCheck(L_5);
			RuntimeObject* L_6 = L_5->___dataBuffer_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_7 = (&__this->___U3CdataU3E5__2_5);
			int32_t* L_8 = (&__this->___U3CoffsetU3E5__3_6);
			bool L_9;
			L_9 = WindowsRuntimeBufferExtensions_TryGetUnderlyingData_m81061F2A3D08AECCF3DAB66F6F00BDD143F2DD57(L_6, L_7, L_8, NULL);
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* L_10 = (&__this->___cancelToken_3);
			bool L_11;
			L_11 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350(L_10, NULL);
			V_3 = L_11;
			__this->___U3CbytesCompletedU3E5__4_7 = 0;
			goto IL_017c_1;
		}

IL_004d_1:
		{
			__this->___U3CbytesReadU3E5__5_8 = 0;
		}

IL_0054_1:
		{
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_12 = V_0;
				if (!L_12)
				{
					goto IL_00c7_2;
				}
			}
			{
				U3CU3Ec__DisplayClass1_0_t05B790464823435BFCF2DDD9EDD15BD109799D30* L_13 = V_1;
				NullCheck(L_13);
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_14 = L_13->___stream_1;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->___U3CdataU3E5__2_5;
				int32_t L_16 = __this->___U3CoffsetU3E5__3_6;
				int32_t L_17 = __this->___U3CbytesCompletedU3E5__4_7;
				U3CU3Ec__DisplayClass1_0_t05B790464823435BFCF2DDD9EDD15BD109799D30* L_18 = V_1;
				NullCheck(L_18);
				int32_t L_19 = L_18->___bytesRequested_2;
				int32_t L_20 = __this->___U3CbytesCompletedU3E5__4_7;
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_21 = __this->___cancelToken_3;
				NullCheck(L_14);
				Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_22;
				L_22 = VirtualFuncInvoker4< Task_1_t4C228DE57804012969575431CFF12D57C875552D*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(26 /* System.Threading.Tasks.Task`1<System.Int32> System.IO.Stream::ReadAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken) */, L_14, L_15, ((int32_t)il2cpp_codegen_add(L_16, L_17)), ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), L_21);
				NullCheck(L_22);
				ConfiguredTaskAwaitable_1_t5186C81524388C1718E9AC37792D8771A443417A L_23;
				L_23 = Task_1_ConfigureAwait_m8203F4D13209C12845066A383E5B850D0486B209(L_22, (bool)0, Task_1_ConfigureAwait_m8203F4D13209C12845066A383E5B850D0486B209_RuntimeMethod_var);
				V_6 = L_23;
				ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80 L_24;
				L_24 = ConfiguredTaskAwaitable_1_GetAwaiter_m7A77B1981FEC19CC7E1570EDC3F16AC5C14B4439_inline((&V_6), ConfiguredTaskAwaitable_1_GetAwaiter_m7A77B1981FEC19CC7E1570EDC3F16AC5C14B4439_RuntimeMethod_var);
				V_5 = L_24;
				bool L_25;
				L_25 = ConfiguredTaskAwaiter_get_IsCompleted_mD70263ED42C8E379EE20DBC2F218C3E629B4B4D3((&V_5), ConfiguredTaskAwaiter_get_IsCompleted_mD70263ED42C8E379EE20DBC2F218C3E629B4B4D3_RuntimeMethod_var);
				if (L_25)
				{
					goto IL_00e4_2;
				}
			}
			{
				int32_t L_26 = 0;
				V_0 = L_26;
				__this->___U3CU3E1__state_0 = L_26;
				ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80 L_27 = V_5;
				__this->___U3CU3Eu__1_9 = L_27;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_9))->___m_task_0), (void*)NULL);
				AsyncTaskMethodBuilder_1_t4102E0362C7437C556E4FEA7D535D2783F408A78* L_28 = (&__this->___U3CU3Et__builder_1);
				AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80_TisU3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tB607A35AD145FE4406070D15E921A3F6FA68C63C_m87835D25F1C7F9EE719DF091E01916FD343A8957(L_28, (&V_5), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80_TisU3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tB607A35AD145FE4406070D15E921A3F6FA68C63C_m87835D25F1C7F9EE719DF091E01916FD343A8957_RuntimeMethod_var);
				goto IL_01c6;
			}

IL_00c7_2:
			{
				ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80 L_29 = __this->___U3CU3Eu__1_9;
				V_5 = L_29;
				ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80* L_30 = (&__this->___U3CU3Eu__1_9);
				il2cpp_codegen_initobj(L_30, sizeof(ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80));
				int32_t L_31 = (-1);
				V_0 = L_31;
				__this->___U3CU3E1__state_0 = L_31;
			}

IL_00e4_2:
			{
				int32_t L_32;
				L_32 = ConfiguredTaskAwaiter_GetResult_mF1FF6CBD66A3F581D413793BA8C2AF58B707D9CC((&V_5), ConfiguredTaskAwaiter_GetResult_mF1FF6CBD66A3F581D413793BA8C2AF58B707D9CC_RuntimeMethod_var);
				V_4 = L_32;
				int32_t L_33 = V_4;
				__this->___U3CbytesReadU3E5__5_8 = L_33;
				int32_t L_34 = __this->___U3CbytesCompletedU3E5__4_7;
				int32_t L_35 = __this->___U3CbytesReadU3E5__5_8;
				__this->___U3CbytesCompletedU3E5__4_7 = ((int32_t)il2cpp_codegen_add(L_34, L_35));
				goto IL_011f_1;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_010a_1;
			}
			throw e;
		}

CATCH_010a_1:
		{// begin catch(System.OperationCanceledException)
			{
				int32_t L_36 = __this->___U3CbytesCompletedU3E5__4_7;
				if (L_36)
				{
					goto IL_011d_1;
				}
			}
			{
				int32_t L_37 = __this->___U3CbytesReadU3E5__5_8;
				if (L_37)
				{
					goto IL_011d_1;
				}
			}
			{
				IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			}

IL_011d_1:
			{
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_011f_1;
			}
		}// end catch (depth: 2)

IL_011f_1:
		{
			U3CU3Ec__DisplayClass1_0_t05B790464823435BFCF2DDD9EDD15BD109799D30* L_38 = V_1;
			NullCheck(L_38);
			RuntimeObject* L_39 = L_38->___dataBuffer_0;
			int32_t L_40 = __this->___U3CbytesCompletedU3E5__4_7;
			NullCheck(L_39);
			InterfaceActionInvoker1< uint32_t >::Invoke(2 /* System.Void Windows.Storage.Streams.IBuffer::put_Length(System.UInt32) */, IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_il2cpp_TypeInfo_var, L_39, L_40);
			U3CU3Ec__DisplayClass1_0_t05B790464823435BFCF2DDD9EDD15BD109799D30* L_41 = V_1;
			NullCheck(L_41);
			uint32_t L_42 = L_41->___options_3;
			if ((((int32_t)L_42) == ((int32_t)1)))
			{
				goto IL_015c_1;
			}
		}
		{
			int32_t L_43 = __this->___U3CbytesReadU3E5__5_8;
			if (!L_43)
			{
				goto IL_015c_1;
			}
		}
		{
			int32_t L_44 = __this->___U3CbytesCompletedU3E5__4_7;
			U3CU3Ec__DisplayClass1_0_t05B790464823435BFCF2DDD9EDD15BD109799D30* L_45 = V_1;
			NullCheck(L_45);
			int32_t L_46 = L_45->___bytesRequested_2;
			if ((((int32_t)L_44) == ((int32_t)L_46)))
			{
				goto IL_015c_1;
			}
		}
		{
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* L_47 = (&__this->___cancelToken_3);
			bool L_48;
			L_48 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350(L_47, NULL);
			G_B19_0 = ((int32_t)(L_48));
			goto IL_015d_1;
		}

IL_015c_1:
		{
			G_B19_0 = 1;
		}

IL_015d_1:
		{
			V_3 = (bool)G_B19_0;
			RuntimeObject* L_49 = __this->___progressListener_4;
			if (!L_49)
			{
				goto IL_017c_1;
			}
		}
		{
			RuntimeObject* L_50 = __this->___progressListener_4;
			U3CU3Ec__DisplayClass1_0_t05B790464823435BFCF2DDD9EDD15BD109799D30* L_51 = V_1;
			NullCheck(L_51);
			RuntimeObject* L_52 = L_51->___dataBuffer_0;
			NullCheck(L_52);
			uint32_t L_53;
			L_53 = InterfaceFuncInvoker0< uint32_t >::Invoke(1 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Length() */, IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_il2cpp_TypeInfo_var, L_52);
			NullCheck(L_50);
			InterfaceActionInvoker1< uint32_t >::Invoke(0 /* System.Void System.IProgress`1<System.UInt32>::Report(T) */, IProgress_1_t95EDA14BCDEA36DD399575FF88CE05C2309101B3_il2cpp_TypeInfo_var, L_50, L_53);
		}

IL_017c_1:
		{
			bool L_54 = V_3;
			if (!L_54)
			{
				goto IL_004d_1;
			}
		}
		{
			U3CU3Ec__DisplayClass1_0_t05B790464823435BFCF2DDD9EDD15BD109799D30* L_55 = V_1;
			NullCheck(L_55);
			RuntimeObject* L_56 = L_55->___dataBuffer_0;
			V_2 = L_56;
			goto IL_01ab;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_018b;
		}
		throw e;
	}

CATCH_018b:
	{// begin catch(System.Exception)
		V_7 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CdataU3E5__2_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdataU3E5__2_5), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		AsyncTaskMethodBuilder_1_t4102E0362C7437C556E4FEA7D535D2783F408A78* L_57 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_58 = V_7;
		AsyncTaskMethodBuilder_1_SetException_m9EAE10842FB26165FAD37D29E1810C3A612AA4AC(L_57, L_58, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m9EAE10842FB26165FAD37D29E1810C3A612AA4AC_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01c6;
	}// end catch (depth: 1)

IL_01ab:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CdataU3E5__2_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdataU3E5__2_5), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		AsyncTaskMethodBuilder_1_t4102E0362C7437C556E4FEA7D535D2783F408A78* L_59 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_60 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m76EFCFDD50DEC8282C1EE86AA3722EE407C16C9E(L_59, L_60, AsyncTaskMethodBuilder_1_SetResult_m76EFCFDD50DEC8282C1EE86AA3722EE407C16C9E_RuntimeMethod_var);
	}

IL_01c6:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_m80B40C314DE7F8AB52D8CAEA8A6DE0AF1AB5E651_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tB607A35AD145FE4406070D15E921A3F6FA68C63C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tB607A35AD145FE4406070D15E921A3F6FA68C63C*>(__this + _offset);
	U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_m80B40C314DE7F8AB52D8CAEA8A6DE0AF1AB5E651(_thisAdjusted, method);
}
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass1_0/<<ReadAsync_AbstractStream>b__0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_m390C11560330044EB68ED37D7534226242E9D8A1 (U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tB607A35AD145FE4406070D15E921A3F6FA68C63C* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mE240BA4A6F123BC93D5804E5D453D7EE55FE9EBC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t4102E0362C7437C556E4FEA7D535D2783F408A78* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_1_SetStateMachine_mE240BA4A6F123BC93D5804E5D453D7EE55FE9EBC(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_mE240BA4A6F123BC93D5804E5D453D7EE55FE9EBC_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_m390C11560330044EB68ED37D7534226242E9D8A1_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tB607A35AD145FE4406070D15E921A3F6FA68C63C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_tB607A35AD145FE4406070D15E921A3F6FA68C63C*>(__this + _offset);
	U3CU3CReadAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_m390C11560330044EB68ED37D7534226242E9D8A1(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m3317D7C4C4D62E19B504F61FD524A1C465F246AA (U3CU3Ec__DisplayClass2_0_t6E434BA73EA5DB3511A12C0C5CF9456D30D25FC5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Threading.Tasks.Task`1<System.UInt32> System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0::<WriteAsync_AbstractStream>b__0(System.Threading.CancellationToken,System.IProgress`1<System.UInt32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t9BFF20A5BC78A3DB3701691B789BBBFB88555060* U3CU3Ec__DisplayClass2_0_U3CWriteAsync_AbstractStreamU3Eb__0_m438D77197990487CB3E4E36A01FA839D55E7EEAF (U3CU3Ec__DisplayClass2_0_t6E434BA73EA5DB3511A12C0C5CF9456D30D25FC5* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancelToken, RuntimeObject* ___1_progressListener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m87F9D91A42876EB5F19F155C2BF170FA6DD06B57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t03D234E0E36C92DA9A5CA3811A6B2E30D9639AF2_mB199C3DEC061F88605F35CAFD88E6C1295B3025C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_mE69A021EF16494D0E3684C697F4948865EF7BEDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t8FB785F8228EA6285573F7790C8F8A3CDEEA7CD2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t03D234E0E36C92DA9A5CA3811A6B2E30D9639AF2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t8FB785F8228EA6285573F7790C8F8A3CDEEA7CD2_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t8FB785F8228EA6285573F7790C8F8A3CDEEA7CD2 L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m87F9D91A42876EB5F19F155C2BF170FA6DD06B57(AsyncTaskMethodBuilder_1_Create_m87F9D91A42876EB5F19F155C2BF170FA6DD06B57_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_3), (void*)__this);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___0_cancelToken;
		(&V_0)->___cancelToken_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___cancelToken_2))->____source_0), (void*)NULL);
		RuntimeObject* L_2 = ___1_progressListener;
		(&V_0)->___progressListener_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___progressListener_4), (void*)L_2);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t8FB785F8228EA6285573F7790C8F8A3CDEEA7CD2* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t03D234E0E36C92DA9A5CA3811A6B2E30D9639AF2_mB199C3DEC061F88605F35CAFD88E6C1295B3025C(L_3, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t03D234E0E36C92DA9A5CA3811A6B2E30D9639AF2_mB199C3DEC061F88605F35CAFD88E6C1295B3025C_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t8FB785F8228EA6285573F7790C8F8A3CDEEA7CD2* L_4 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t9BFF20A5BC78A3DB3701691B789BBBFB88555060* L_5;
		L_5 = AsyncTaskMethodBuilder_1_get_Task_mE69A021EF16494D0E3684C697F4948865EF7BEDA(L_4, AsyncTaskMethodBuilder_1_get_Task_mE69A021EF16494D0E3684C697F4948865EF7BEDA_RuntimeMethod_var);
		return L_5;
	}
}
// System.Threading.Tasks.Task`1<System.UInt32> System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0::<WriteAsync_AbstractStream>b__1(System.Threading.CancellationToken,System.IProgress`1<System.UInt32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t9BFF20A5BC78A3DB3701691B789BBBFB88555060* U3CU3Ec__DisplayClass2_0_U3CWriteAsync_AbstractStreamU3Eb__1_m60D749A2ECFFEEDB96BC6189C4B763783C24BC8E (U3CU3Ec__DisplayClass2_0_t6E434BA73EA5DB3511A12C0C5CF9456D30D25FC5* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancelToken, RuntimeObject* ___1_progressListener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m87F9D91A42876EB5F19F155C2BF170FA6DD06B57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t15BC749CED41367E2893FD2B368726119BD8EDA2_m48B0345C032F514709701DDCD0FD52267D6F6450_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_mE69A021EF16494D0E3684C697F4948865EF7BEDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t8FB785F8228EA6285573F7790C8F8A3CDEEA7CD2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t15BC749CED41367E2893FD2B368726119BD8EDA2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t8FB785F8228EA6285573F7790C8F8A3CDEEA7CD2_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t8FB785F8228EA6285573F7790C8F8A3CDEEA7CD2 L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m87F9D91A42876EB5F19F155C2BF170FA6DD06B57(AsyncTaskMethodBuilder_1_Create_m87F9D91A42876EB5F19F155C2BF170FA6DD06B57_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_3), (void*)__this);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___0_cancelToken;
		(&V_0)->___cancelToken_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___cancelToken_2))->____source_0), (void*)NULL);
		RuntimeObject* L_2 = ___1_progressListener;
		(&V_0)->___progressListener_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___progressListener_4), (void*)L_2);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t8FB785F8228EA6285573F7790C8F8A3CDEEA7CD2* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t15BC749CED41367E2893FD2B368726119BD8EDA2_m48B0345C032F514709701DDCD0FD52267D6F6450(L_3, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t15BC749CED41367E2893FD2B368726119BD8EDA2_m48B0345C032F514709701DDCD0FD52267D6F6450_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t8FB785F8228EA6285573F7790C8F8A3CDEEA7CD2* L_4 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t9BFF20A5BC78A3DB3701691B789BBBFB88555060* L_5;
		L_5 = AsyncTaskMethodBuilder_1_get_Task_mE69A021EF16494D0E3684C697F4948865EF7BEDA(L_4, AsyncTaskMethodBuilder_1_get_Task_mE69A021EF16494D0E3684C697F4948865EF7BEDA_RuntimeMethod_var);
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
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_m385630426A46211060318F1C916303EA13209878 (U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t03D234E0E36C92DA9A5CA3811A6B2E30D9639AF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t03D234E0E36C92DA9A5CA3811A6B2E30D9639AF2_m32DB4E2BD524F293AC0379E6D347EC091FF8A90E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m5041801AE00206CAADE10C105F2F580E0CAC659F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProgress_1_t95EDA14BCDEA36DD399575FF88CE05C2309101B3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	U3CU3Ec__DisplayClass2_0_t6E434BA73EA5DB3511A12C0C5CF9456D30D25FC5* V_1 = NULL;
	uint32_t V_2 = 0;
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 V_3;
	memset((&V_3), 0, sizeof(V_3));
	ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_t6E434BA73EA5DB3511A12C0C5CF9456D30D25FC5* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0095_1;
			}
		}
		{
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* L_3 = (&__this->___cancelToken_2);
			bool L_4;
			L_4 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350(L_3, NULL);
			if (!L_4)
			{
				goto IL_0028_1;
			}
		}
		{
			V_2 = 0;
			goto IL_00f3;
		}

IL_0028_1:
		{
			U3CU3Ec__DisplayClass2_0_t6E434BA73EA5DB3511A12C0C5CF9456D30D25FC5* L_5 = V_1;
			NullCheck(L_5);
			RuntimeObject* L_6 = L_5->___buffer_0;
			NullCheck(L_6);
			uint32_t L_7;
			L_7 = InterfaceFuncInvoker0< uint32_t >::Invoke(1 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Length() */, IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_il2cpp_TypeInfo_var, L_6);
			__this->___U3CbytesToWriteU3E5__2_5 = L_7;
			U3CU3Ec__DisplayClass2_0_t6E434BA73EA5DB3511A12C0C5CF9456D30D25FC5* L_8 = V_1;
			NullCheck(L_8);
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_9 = L_8->___stream_1;
			U3CU3Ec__DisplayClass2_0_t6E434BA73EA5DB3511A12C0C5CF9456D30D25FC5* L_10 = V_1;
			NullCheck(L_10);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = L_10->___data_2;
			U3CU3Ec__DisplayClass2_0_t6E434BA73EA5DB3511A12C0C5CF9456D30D25FC5* L_12 = V_1;
			NullCheck(L_12);
			int32_t L_13 = L_12->___offset_3;
			int32_t L_14 = __this->___U3CbytesToWriteU3E5__2_5;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_15 = __this->___cancelToken_2;
			NullCheck(L_9);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_16;
			L_16 = VirtualFuncInvoker4< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(30 /* System.Threading.Tasks.Task System.IO.Stream::WriteAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken) */, L_9, L_11, L_13, L_14, L_15);
			NullCheck(L_16);
			ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C L_17;
			L_17 = Task_ConfigureAwait_m0DD682B1D29B85067C993734C12E26554D6CBFF4(L_16, (bool)0, NULL);
			V_4 = L_17;
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_18;
			L_18 = ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline((&V_4), NULL);
			V_3 = L_18;
			bool L_19;
			L_19 = ConfiguredTaskAwaiter_get_IsCompleted_mB189574F29658A59CC4C890B70538A9C5E835850((&V_3), NULL);
			if (L_19)
			{
				goto IL_00b1_1;
			}
		}
		{
			int32_t L_20 = 0;
			V_0 = L_20;
			__this->___U3CU3E1__state_0 = L_20;
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_21 = V_3;
			__this->___U3CU3Eu__1_6 = L_21;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t8FB785F8228EA6285573F7790C8F8A3CDEEA7CD2* L_22 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t03D234E0E36C92DA9A5CA3811A6B2E30D9639AF2_m32DB4E2BD524F293AC0379E6D347EC091FF8A90E(L_22, (&V_3), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t03D234E0E36C92DA9A5CA3811A6B2E30D9639AF2_m32DB4E2BD524F293AC0379E6D347EC091FF8A90E_RuntimeMethod_var);
			goto IL_0107;
		}

IL_0095_1:
		{
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_23 = __this->___U3CU3Eu__1_6;
			V_3 = L_23;
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* L_24 = (&__this->___U3CU3Eu__1_6);
			il2cpp_codegen_initobj(L_24, sizeof(ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618));
			int32_t L_25 = (-1);
			V_0 = L_25;
			__this->___U3CU3E1__state_0 = L_25;
		}

IL_00b1_1:
		{
			ConfiguredTaskAwaiter_GetResult_mD51FDD775D0CF7511FEE2B6C144DB003DE73AC26((&V_3), NULL);
			RuntimeObject* L_26 = __this->___progressListener_4;
			if (!L_26)
			{
				goto IL_00d1_1;
			}
		}
		{
			RuntimeObject* L_27 = __this->___progressListener_4;
			int32_t L_28 = __this->___U3CbytesToWriteU3E5__2_5;
			NullCheck(L_27);
			InterfaceActionInvoker1< uint32_t >::Invoke(0 /* System.Void System.IProgress`1<System.UInt32>::Report(T) */, IProgress_1_t95EDA14BCDEA36DD399575FF88CE05C2309101B3_il2cpp_TypeInfo_var, L_27, L_28);
		}

IL_00d1_1:
		{
			int32_t L_29 = __this->___U3CbytesToWriteU3E5__2_5;
			V_2 = L_29;
			goto IL_00f3;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00da;
		}
		throw e;
	}

CATCH_00da:
	{// begin catch(System.Exception)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t8FB785F8228EA6285573F7790C8F8A3CDEEA7CD2* L_30 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_31 = V_5;
		AsyncTaskMethodBuilder_1_SetException_m62045F0DC88FCFFAE8B54C1A9C36373187D21A13(L_30, L_31, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m62045F0DC88FCFFAE8B54C1A9C36373187D21A13_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0107;
	}// end catch (depth: 1)

IL_00f3:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t8FB785F8228EA6285573F7790C8F8A3CDEEA7CD2* L_32 = (&__this->___U3CU3Et__builder_1);
		uint32_t L_33 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m5041801AE00206CAADE10C105F2F580E0CAC659F(L_32, L_33, AsyncTaskMethodBuilder_1_SetResult_m5041801AE00206CAADE10C105F2F580E0CAC659F_RuntimeMethod_var);
	}

IL_0107:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_m385630426A46211060318F1C916303EA13209878_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t03D234E0E36C92DA9A5CA3811A6B2E30D9639AF2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t03D234E0E36C92DA9A5CA3811A6B2E30D9639AF2*>(__this + _offset);
	U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_m385630426A46211060318F1C916303EA13209878(_thisAdjusted, method);
}
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_m280075790DDBDE36399C6A78707B6EF3DCBCCE60 (U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t03D234E0E36C92DA9A5CA3811A6B2E30D9639AF2* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m4F4BB17D6A5F9922EBDAE1ECEF9DBE6945E70DA9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t8FB785F8228EA6285573F7790C8F8A3CDEEA7CD2* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_1_SetStateMachine_m4F4BB17D6A5F9922EBDAE1ECEF9DBE6945E70DA9(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m4F4BB17D6A5F9922EBDAE1ECEF9DBE6945E70DA9_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_m280075790DDBDE36399C6A78707B6EF3DCBCCE60_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t03D234E0E36C92DA9A5CA3811A6B2E30D9639AF2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_t03D234E0E36C92DA9A5CA3811A6B2E30D9639AF2*>(__this + _offset);
	U3CU3CWriteAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_m280075790DDBDE36399C6A78707B6EF3DCBCCE60(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__1>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_MoveNext_mA3085EFB69450F1620F559B1EF53B98299C9C2BC (U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t15BC749CED41367E2893FD2B368726119BD8EDA2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t15BC749CED41367E2893FD2B368726119BD8EDA2_m0F8066B387E3646E4696CFD624C11C2041D7C4A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m5041801AE00206CAADE10C105F2F580E0CAC659F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProgress_1_t95EDA14BCDEA36DD399575FF88CE05C2309101B3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	U3CU3Ec__DisplayClass2_0_t6E434BA73EA5DB3511A12C0C5CF9456D30D25FC5* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 V_4;
	memset((&V_4), 0, sizeof(V_4));
	ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* G_B6_0 = NULL;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* G_B5_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_t6E434BA73EA5DB3511A12C0C5CF9456D30D25FC5* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_00a9_1;
			}
		}
		{
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* L_3 = (&__this->___cancelToken_2);
			bool L_4;
			L_4 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350(L_3, NULL);
			if (!L_4)
			{
				goto IL_0028_1;
			}
		}
		{
			V_2 = 0;
			goto IL_0108;
		}

IL_0028_1:
		{
			U3CU3Ec__DisplayClass2_0_t6E434BA73EA5DB3511A12C0C5CF9456D30D25FC5* L_5 = V_1;
			NullCheck(L_5);
			RuntimeObject* L_6 = L_5->___buffer_0;
			NullCheck(L_6);
			uint32_t L_7;
			L_7 = InterfaceFuncInvoker0< uint32_t >::Invoke(1 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Length() */, IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_il2cpp_TypeInfo_var, L_6);
			__this->___U3CbytesToWriteU3E5__2_5 = L_7;
			U3CU3Ec__DisplayClass2_0_t6E434BA73EA5DB3511A12C0C5CF9456D30D25FC5* L_8 = V_1;
			NullCheck(L_8);
			RuntimeObject* L_9 = L_8->___buffer_0;
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_10;
			L_10 = WindowsRuntimeBufferExtensions_AsStream_mF1266A683784D7F888A72D5E7E3A0A6E3CDC9F1B(L_9, NULL);
			V_3 = ((int32_t)16384);
			uint32_t L_11 = __this->___U3CbytesToWriteU3E5__2_5;
			int32_t L_12 = V_3;
			G_B5_0 = L_10;
			if ((((int64_t)((int64_t)(uint64_t)L_11)) >= ((int64_t)((int64_t)L_12))))
			{
				G_B6_0 = L_10;
				goto IL_005c_1;
			}
		}
		{
			uint32_t L_13 = __this->___U3CbytesToWriteU3E5__2_5;
			V_3 = L_13;
			G_B6_0 = G_B5_0;
		}

IL_005c_1:
		{
			U3CU3Ec__DisplayClass2_0_t6E434BA73EA5DB3511A12C0C5CF9456D30D25FC5* L_14 = V_1;
			NullCheck(L_14);
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_15 = L_14->___stream_1;
			int32_t L_16 = V_3;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_17 = __this->___cancelToken_2;
			NullCheck(G_B6_0);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_18;
			L_18 = VirtualFuncInvoker3< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(18 /* System.Threading.Tasks.Task System.IO.Stream::CopyToAsync(System.IO.Stream,System.Int32,System.Threading.CancellationToken) */, G_B6_0, L_15, L_16, L_17);
			NullCheck(L_18);
			ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C L_19;
			L_19 = Task_ConfigureAwait_m0DD682B1D29B85067C993734C12E26554D6CBFF4(L_18, (bool)0, NULL);
			V_5 = L_19;
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_20;
			L_20 = ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline((&V_5), NULL);
			V_4 = L_20;
			bool L_21;
			L_21 = ConfiguredTaskAwaiter_get_IsCompleted_mB189574F29658A59CC4C890B70538A9C5E835850((&V_4), NULL);
			if (L_21)
			{
				goto IL_00c6_1;
			}
		}
		{
			int32_t L_22 = 0;
			V_0 = L_22;
			__this->___U3CU3E1__state_0 = L_22;
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_23 = V_4;
			__this->___U3CU3Eu__1_6 = L_23;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t8FB785F8228EA6285573F7790C8F8A3CDEEA7CD2* L_24 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t15BC749CED41367E2893FD2B368726119BD8EDA2_m0F8066B387E3646E4696CFD624C11C2041D7C4A7(L_24, (&V_4), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t15BC749CED41367E2893FD2B368726119BD8EDA2_m0F8066B387E3646E4696CFD624C11C2041D7C4A7_RuntimeMethod_var);
			goto IL_011c;
		}

IL_00a9_1:
		{
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_25 = __this->___U3CU3Eu__1_6;
			V_4 = L_25;
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* L_26 = (&__this->___U3CU3Eu__1_6);
			il2cpp_codegen_initobj(L_26, sizeof(ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618));
			int32_t L_27 = (-1);
			V_0 = L_27;
			__this->___U3CU3E1__state_0 = L_27;
		}

IL_00c6_1:
		{
			ConfiguredTaskAwaiter_GetResult_mD51FDD775D0CF7511FEE2B6C144DB003DE73AC26((&V_4), NULL);
			RuntimeObject* L_28 = __this->___progressListener_4;
			if (!L_28)
			{
				goto IL_00e6_1;
			}
		}
		{
			RuntimeObject* L_29 = __this->___progressListener_4;
			uint32_t L_30 = __this->___U3CbytesToWriteU3E5__2_5;
			NullCheck(L_29);
			InterfaceActionInvoker1< uint32_t >::Invoke(0 /* System.Void System.IProgress`1<System.UInt32>::Report(T) */, IProgress_1_t95EDA14BCDEA36DD399575FF88CE05C2309101B3_il2cpp_TypeInfo_var, L_29, L_30);
		}

IL_00e6_1:
		{
			uint32_t L_31 = __this->___U3CbytesToWriteU3E5__2_5;
			V_2 = L_31;
			goto IL_0108;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00ef;
		}
		throw e;
	}

CATCH_00ef:
	{// begin catch(System.Exception)
		V_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t8FB785F8228EA6285573F7790C8F8A3CDEEA7CD2* L_32 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_33 = V_6;
		AsyncTaskMethodBuilder_1_SetException_m62045F0DC88FCFFAE8B54C1A9C36373187D21A13(L_32, L_33, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m62045F0DC88FCFFAE8B54C1A9C36373187D21A13_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_011c;
	}// end catch (depth: 1)

IL_0108:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t8FB785F8228EA6285573F7790C8F8A3CDEEA7CD2* L_34 = (&__this->___U3CU3Et__builder_1);
		uint32_t L_35 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_m5041801AE00206CAADE10C105F2F580E0CAC659F(L_34, L_35, AsyncTaskMethodBuilder_1_SetResult_m5041801AE00206CAADE10C105F2F580E0CAC659F_RuntimeMethod_var);
	}

IL_011c:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_MoveNext_mA3085EFB69450F1620F559B1EF53B98299C9C2BC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t15BC749CED41367E2893FD2B368726119BD8EDA2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t15BC749CED41367E2893FD2B368726119BD8EDA2*>(__this + _offset);
	U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_MoveNext_mA3085EFB69450F1620F559B1EF53B98299C9C2BC(_thisAdjusted, method);
}
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass2_0/<<WriteAsync_AbstractStream>b__1>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_SetStateMachine_mB561D48F1139741C0B0F7F1F36D9BCD7E0507D37 (U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t15BC749CED41367E2893FD2B368726119BD8EDA2* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m4F4BB17D6A5F9922EBDAE1ECEF9DBE6945E70DA9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t8FB785F8228EA6285573F7790C8F8A3CDEEA7CD2* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_1_SetStateMachine_m4F4BB17D6A5F9922EBDAE1ECEF9DBE6945E70DA9(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m4F4BB17D6A5F9922EBDAE1ECEF9DBE6945E70DA9_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_SetStateMachine_mB561D48F1139741C0B0F7F1F36D9BCD7E0507D37_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t15BC749CED41367E2893FD2B368726119BD8EDA2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_t15BC749CED41367E2893FD2B368726119BD8EDA2*>(__this + _offset);
	U3CU3CWriteAsync_AbstractStreamU3Eb__1U3Ed_SetStateMachine_mB561D48F1139741C0B0F7F1F36D9BCD7E0507D37(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m39C986939192C3E3838213D0B78807C8C88E4E70 (U3CU3Ec__DisplayClass3_0_tB7212D23536AE37D5E6EEFABD29F7A1DCCC5BFAA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Threading.Tasks.Task`1<System.Boolean> System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0::<FlushAsync_AbstractStream>b__0(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* U3CU3Ec__DisplayClass3_0_U3CFlushAsync_AbstractStreamU3Eb__0_mF032EF2649DF33BC23715C19B970AB0575E57942 (U3CU3Ec__DisplayClass3_0_tB7212D23536AE37D5E6EEFABD29F7A1DCCC5BFAA* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancelToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_mA86694527610A40A01A943B16F0ECDDD8F00982D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_tCAE4779681542A3A44DA232D516892B2CFB4DC34_m1797CF010076782E1F6756123A031313EF8D6611_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_tCAE4779681542A3A44DA232D516892B2CFB4DC34 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_mA86694527610A40A01A943B16F0ECDDD8F00982D(AsyncTaskMethodBuilder_1_Create_mA86694527610A40A01A943B16F0ECDDD8F00982D_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_3), (void*)__this);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___0_cancelToken;
		(&V_0)->___cancelToken_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___cancelToken_2))->____source_0), (void*)NULL);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_tCAE4779681542A3A44DA232D516892B2CFB4DC34_m1797CF010076782E1F6756123A031313EF8D6611(L_2, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_tCAE4779681542A3A44DA232D516892B2CFB4DC34_m1797CF010076782E1F6756123A031313EF8D6611_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_4;
		L_4 = AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943(L_3, AsyncTaskMethodBuilder_1_get_Task_m09169C120A259AF1F267F54C09A92B84D9832943_RuntimeMethod_var);
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
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0/<<FlushAsync_AbstractStream>b__0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_mB52A11565AEE89B0EE471C3F1C532CBFA14B4672 (U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_tCAE4779681542A3A44DA232D516892B2CFB4DC34* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_tCAE4779681542A3A44DA232D516892B2CFB4DC34_mC604299296C2DBE4678EA7BF22562AC6BA10526A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	U3CU3Ec__DisplayClass3_0_tB7212D23536AE37D5E6EEFABD29F7A1DCCC5BFAA* V_1 = NULL;
	bool V_2 = false;
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 V_3;
	memset((&V_3), 0, sizeof(V_3));
	ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		U3CU3Ec__DisplayClass3_0_tB7212D23536AE37D5E6EEFABD29F7A1DCCC5BFAA* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_006f_1;
			}
		}
		{
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* L_3 = (&__this->___cancelToken_2);
			bool L_4;
			L_4 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350(L_3, NULL);
			if (!L_4)
			{
				goto IL_0025_1;
			}
		}
		{
			V_2 = (bool)0;
			goto IL_00af;
		}

IL_0025_1:
		{
			U3CU3Ec__DisplayClass3_0_tB7212D23536AE37D5E6EEFABD29F7A1DCCC5BFAA* L_5 = V_1;
			NullCheck(L_5);
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = L_5->___stream_0;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_7 = __this->___cancelToken_2;
			NullCheck(L_6);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_8;
			L_8 = VirtualFuncInvoker1< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(23 /* System.Threading.Tasks.Task System.IO.Stream::FlushAsync(System.Threading.CancellationToken) */, L_6, L_7);
			NullCheck(L_8);
			ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C L_9;
			L_9 = Task_ConfigureAwait_m0DD682B1D29B85067C993734C12E26554D6CBFF4(L_8, (bool)0, NULL);
			V_4 = L_9;
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_10;
			L_10 = ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline((&V_4), NULL);
			V_3 = L_10;
			bool L_11;
			L_11 = ConfiguredTaskAwaiter_get_IsCompleted_mB189574F29658A59CC4C890B70538A9C5E835850((&V_3), NULL);
			if (L_11)
			{
				goto IL_008b_1;
			}
		}
		{
			int32_t L_12 = 0;
			V_0 = L_12;
			__this->___U3CU3E1__state_0 = L_12;
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_13 = V_3;
			__this->___U3CU3Eu__1_4 = L_13;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_14 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_tCAE4779681542A3A44DA232D516892B2CFB4DC34_mC604299296C2DBE4678EA7BF22562AC6BA10526A(L_14, (&V_3), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_tCAE4779681542A3A44DA232D516892B2CFB4DC34_mC604299296C2DBE4678EA7BF22562AC6BA10526A_RuntimeMethod_var);
			goto IL_00c3;
		}

IL_006f_1:
		{
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_15 = __this->___U3CU3Eu__1_4;
			V_3 = L_15;
			ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* L_16 = (&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_16, sizeof(ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618));
			int32_t L_17 = (-1);
			V_0 = L_17;
			__this->___U3CU3E1__state_0 = L_17;
		}

IL_008b_1:
		{
			ConfiguredTaskAwaiter_GetResult_mD51FDD775D0CF7511FEE2B6C144DB003DE73AC26((&V_3), NULL);
			V_2 = (bool)1;
			goto IL_00af;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0096;
		}
		throw e;
	}

CATCH_0096:
	{// begin catch(System.Exception)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_18 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_19 = V_5;
		AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD(L_18, L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mB8F5D5EF18A12CBFF3C7D54CE6382DBB1640C0FD_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00c3;
	}// end catch (depth: 1)

IL_00af:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_20 = (&__this->___U3CU3Et__builder_1);
		bool L_21 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046(L_20, L_21, AsyncTaskMethodBuilder_1_SetResult_mF21C48FC9CEC24F4E9C5975C54F87BE9CA179046_RuntimeMethod_var);
	}

IL_00c3:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_mB52A11565AEE89B0EE471C3F1C532CBFA14B4672_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_tCAE4779681542A3A44DA232D516892B2CFB4DC34* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_tCAE4779681542A3A44DA232D516892B2CFB4DC34*>(__this + _offset);
	U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_MoveNext_mB52A11565AEE89B0EE471C3F1C532CBFA14B4672(_thisAdjusted, method);
}
// System.Void System.IO.StreamOperationsImplementation/<>c__DisplayClass3_0/<<FlushAsync_AbstractStream>b__0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_mF444E708EDF7407A732A02D8A3D1A5B1B45803FD (U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_tCAE4779681542A3A44DA232D516892B2CFB4DC34* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t651E7BA5C7209C40335555F361280911CF711AAA* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m9D382E265E211762EDB525CF74EBB7FA21DDDCE8_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_mF444E708EDF7407A732A02D8A3D1A5B1B45803FD_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_tCAE4779681542A3A44DA232D516892B2CFB4DC34* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_tCAE4779681542A3A44DA232D516892B2CFB4DC34*>(__this + _offset);
	U3CU3CFlushAsync_AbstractStreamU3Eb__0U3Ed_SetStateMachine_mF444E708EDF7407A732A02D8A3D1A5B1B45803FD(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.IO.WindowsRuntimeStreamExtensions::EnsureAdapterBufferSize(System.IO.Stream,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeStreamExtensions_EnsureAdapterBufferSize_m45873229B6C84BCCE713F0E252775273849092D4 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_adapter, int32_t ___1_requiredBufferSize, String_t* ___2_methodName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferedStream_t9D0E8599EB0482BE778F25C62AA8954A68D94BEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BufferedStream_t9D0E8599EB0482BE778F25C62AA8954A68D94BEE* V_1 = NULL;
	{
		V_0 = 0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_adapter;
		V_1 = ((BufferedStream_t9D0E8599EB0482BE778F25C62AA8954A68D94BEE*)IsInstSealed((RuntimeObject*)L_0, BufferedStream_t9D0E8599EB0482BE778F25C62AA8954A68D94BEE_il2cpp_TypeInfo_var));
		BufferedStream_t9D0E8599EB0482BE778F25C62AA8954A68D94BEE* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		BufferedStream_t9D0E8599EB0482BE778F25C62AA8954A68D94BEE* L_2 = V_1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = BufferedStream_get_BufferSize_m938C648886EAD1897F9689C9D0F2A1854E4A1973_inline(L_2, NULL);
		V_0 = L_3;
	}

IL_0013:
	{
		int32_t L_4 = ___1_requiredBufferSize;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_6 = ___1_requiredBufferSize;
		if (L_6)
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_7 = ___2_methodName;
		String_t* L_8;
		L_8 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9984D214B8859DAF6BBE42889F849EDDB7C7CC84)), L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6D4329369EF62761B3095A26E3F1C75F73BC86AD)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeStreamExtensions_EnsureAdapterBufferSize_m45873229B6C84BCCE713F0E252775273849092D4_RuntimeMethod_var)));
	}

IL_0030:
	{
		String_t* L_10 = ___2_methodName;
		String_t* L_11;
		L_11 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral30229D6B21994D5E54514122E793E9EC27F8EB67)), L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6D4329369EF62761B3095A26E3F1C75F73BC86AD)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_12 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_12, L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeStreamExtensions_EnsureAdapterBufferSize_m45873229B6C84BCCE713F0E252775273849092D4_RuntimeMethod_var)));
	}

IL_0046:
	{
		return;
	}
}
// System.IO.Stream System.IO.WindowsRuntimeStreamExtensions::AsStreamForRead(Windows.Storage.Streams.IInputStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* WindowsRuntimeStreamExtensions_AsStreamForRead_m3E41716FB79C0F1FE5FF258B87A3F316133F5879 (RuntimeObject* ___0_windowsRuntimeStream, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeStreamExtensions_tB43F7551D4AF6F5480829903106AD0FFEDC81D9B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1DC3E9BAB1967154F459206DFF1A44D42E192D30);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_windowsRuntimeStream;
		il2cpp_codegen_runtime_class_init_inline(WindowsRuntimeStreamExtensions_tB43F7551D4AF6F5480829903106AD0FFEDC81D9B_il2cpp_TypeInfo_var);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1;
		L_1 = WindowsRuntimeStreamExtensions_AsStreamInternal_m7B11D44B9E825CE63B6415B9F5877E066E51045B(L_0, ((int32_t)16384), _stringLiteral1DC3E9BAB1967154F459206DFF1A44D42E192D30, (bool)0, NULL);
		return L_1;
	}
}
// System.IO.Stream System.IO.WindowsRuntimeStreamExtensions::AsStreamInternal(System.Object,System.Int32,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* WindowsRuntimeStreamExtensions_AsStreamInternal_m7B11D44B9E825CE63B6415B9F5877E066E51045B (RuntimeObject* ___0_windowsRuntimeStream, int32_t ___1_bufferSize, String_t* ___2_invokedMethodName, bool ___3_forceBufferSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_m5A667E9026FFDE0FF1E2EE79A5CFA7A1CFF8BED1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeStreamExtensions_tB43F7551D4AF6F5480829903106AD0FFEDC81D9B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* V_0 = NULL;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_1 = NULL;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* G_B7_0 = NULL;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* G_B6_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_windowsRuntimeStream;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral206124D23601B8F9E63F2CA19EEEC41CA93E9581)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeStreamExtensions_AsStreamInternal_m7B11D44B9E825CE63B6415B9F5877E066E51045B_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___1_bufferSize;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC8FE4FB2F0C7351CCB064A9D9BD65C0FC83D4E12)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8CAE028FE0FF584518029338B63A30B7FFB4132A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeStreamExtensions_AsStreamInternal_m7B11D44B9E825CE63B6415B9F5877E066E51045B_RuntimeMethod_var)));
	}

IL_0022:
	{
		RuntimeObject* L_4 = ___0_windowsRuntimeStream;
		V_0 = ((NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737*)IsInstClass((RuntimeObject*)L_4, NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737_il2cpp_TypeInfo_var));
		NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0046;
		}
	}
	{
		NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* L_6 = V_0;
		NullCheck(L_6);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_7;
		L_7 = NetFxToWinRtStreamAdapter_GetManagedStream_m3CEDE8948C3D330E0BBB900C005A1A2CBD60FDBE_inline(L_6, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_8 = L_7;
		G_B6_0 = L_8;
		if (L_8)
		{
			G_B7_0 = L_8;
			goto IL_0045;
		}
	}
	{
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_9 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ObjectDisposedException__ctor_m5C356C25295E89559C120CB4562783AAF7F41C84(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral206124D23601B8F9E63F2CA19EEEC41CA93E9581)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB4792D73601AFAC8241C44E882B3149512DDA812)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeStreamExtensions_AsStreamInternal_m7B11D44B9E825CE63B6415B9F5877E066E51045B_RuntimeMethod_var)));
	}

IL_0045:
	{
		return G_B7_0;
	}

IL_0046:
	{
		il2cpp_codegen_runtime_class_init_inline(WindowsRuntimeStreamExtensions_tB43F7551D4AF6F5480829903106AD0FFEDC81D9B_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t854A212DF03C231A1FCD6A2CCD8FC269D295B27C* L_10 = ((WindowsRuntimeStreamExtensions_tB43F7551D4AF6F5480829903106AD0FFEDC81D9B_StaticFields*)il2cpp_codegen_static_fields_for(WindowsRuntimeStreamExtensions_tB43F7551D4AF6F5480829903106AD0FFEDC81D9B_il2cpp_TypeInfo_var))->___s_winRtToNetFxAdapterMap_0;
		RuntimeObject* L_11 = ___0_windowsRuntimeStream;
		NullCheck(L_10);
		bool L_12;
		L_12 = ConditionalWeakTable_2_TryGetValue_m5A667E9026FFDE0FF1E2EE79A5CFA7A1CFF8BED1(L_10, L_11, (&V_1), ConditionalWeakTable_2_TryGetValue_m5A667E9026FFDE0FF1E2EE79A5CFA7A1CFF8BED1_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_0062;
		}
	}
	{
		bool L_13 = ___3_forceBufferSize;
		if (!L_13)
		{
			goto IL_0060;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_14 = V_1;
		int32_t L_15 = ___1_bufferSize;
		String_t* L_16 = ___2_invokedMethodName;
		il2cpp_codegen_runtime_class_init_inline(WindowsRuntimeStreamExtensions_tB43F7551D4AF6F5480829903106AD0FFEDC81D9B_il2cpp_TypeInfo_var);
		WindowsRuntimeStreamExtensions_EnsureAdapterBufferSize_m45873229B6C84BCCE713F0E252775273849092D4(L_14, L_15, L_16, NULL);
	}

IL_0060:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_17 = V_1;
		return L_17;
	}

IL_0062:
	{
		RuntimeObject* L_18 = ___0_windowsRuntimeStream;
		int32_t L_19 = ___1_bufferSize;
		String_t* L_20 = ___2_invokedMethodName;
		bool L_21 = ___3_forceBufferSize;
		il2cpp_codegen_runtime_class_init_inline(WindowsRuntimeStreamExtensions_tB43F7551D4AF6F5480829903106AD0FFEDC81D9B_il2cpp_TypeInfo_var);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_22;
		L_22 = WindowsRuntimeStreamExtensions_AsStreamInternalFactoryHelper_mEDB150B71D7D35A83BFDEEE146BA6AAD74E380C1(L_18, L_19, L_20, L_21, NULL);
		return L_22;
	}
}
// System.IO.Stream System.IO.WindowsRuntimeStreamExtensions::WinRtToNetFxAdapterMap_GetValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* WindowsRuntimeStreamExtensions_WinRtToNetFxAdapterMap_GetValue_m58ED3961E11C3913170A0CD12C24014D85BE0131 (RuntimeObject* ___0_winRtStream, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_GetValue_mC1F65C9D190A7B9A2554784DDC71B7454957C35E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreateValueCallback_tDDCD9D271D51B07C7E7946A50CDE83F171F5AD66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CWinRtToNetFxAdapterMap_GetValueU3Eb__11_0_m842AEF029659468D656C0D559BAFE82B4A078BBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0031EA3631AC4363828C98AED7D52630379E6919_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeStreamExtensions_tB43F7551D4AF6F5480829903106AD0FFEDC81D9B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CreateValueCallback_tDDCD9D271D51B07C7E7946A50CDE83F171F5AD66* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	ConditionalWeakTable_2_t854A212DF03C231A1FCD6A2CCD8FC269D295B27C* G_B2_2 = NULL;
	CreateValueCallback_tDDCD9D271D51B07C7E7946A50CDE83F171F5AD66* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	ConditionalWeakTable_2_t854A212DF03C231A1FCD6A2CCD8FC269D295B27C* G_B1_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(WindowsRuntimeStreamExtensions_tB43F7551D4AF6F5480829903106AD0FFEDC81D9B_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t854A212DF03C231A1FCD6A2CCD8FC269D295B27C* L_0 = ((WindowsRuntimeStreamExtensions_tB43F7551D4AF6F5480829903106AD0FFEDC81D9B_StaticFields*)il2cpp_codegen_static_fields_for(WindowsRuntimeStreamExtensions_tB43F7551D4AF6F5480829903106AD0FFEDC81D9B_il2cpp_TypeInfo_var))->___s_winRtToNetFxAdapterMap_0;
		RuntimeObject* L_1 = ___0_winRtStream;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t0031EA3631AC4363828C98AED7D52630379E6919_il2cpp_TypeInfo_var);
		CreateValueCallback_tDDCD9D271D51B07C7E7946A50CDE83F171F5AD66* L_2 = ((U3CU3Ec_t0031EA3631AC4363828C98AED7D52630379E6919_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0031EA3631AC4363828C98AED7D52630379E6919_il2cpp_TypeInfo_var))->___U3CU3E9__11_0_1;
		CreateValueCallback_tDDCD9D271D51B07C7E7946A50CDE83F171F5AD66* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		G_B1_2 = L_0;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			G_B2_2 = L_0;
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t0031EA3631AC4363828C98AED7D52630379E6919_il2cpp_TypeInfo_var);
		U3CU3Ec_t0031EA3631AC4363828C98AED7D52630379E6919* L_4 = ((U3CU3Ec_t0031EA3631AC4363828C98AED7D52630379E6919_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0031EA3631AC4363828C98AED7D52630379E6919_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		CreateValueCallback_tDDCD9D271D51B07C7E7946A50CDE83F171F5AD66* L_5 = (CreateValueCallback_tDDCD9D271D51B07C7E7946A50CDE83F171F5AD66*)il2cpp_codegen_object_new(CreateValueCallback_tDDCD9D271D51B07C7E7946A50CDE83F171F5AD66_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		CreateValueCallback__ctor_mD661CB4A2D38E6BFC019D1AC4E2FD7F8A77660C5(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3CWinRtToNetFxAdapterMap_GetValueU3Eb__11_0_m842AEF029659468D656C0D559BAFE82B4A078BBC_RuntimeMethod_var), NULL);
		CreateValueCallback_tDDCD9D271D51B07C7E7946A50CDE83F171F5AD66* L_6 = L_5;
		((U3CU3Ec_t0031EA3631AC4363828C98AED7D52630379E6919_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0031EA3631AC4363828C98AED7D52630379E6919_il2cpp_TypeInfo_var))->___U3CU3E9__11_0_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t0031EA3631AC4363828C98AED7D52630379E6919_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0031EA3631AC4363828C98AED7D52630379E6919_il2cpp_TypeInfo_var))->___U3CU3E9__11_0_1), (void*)L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0025:
	{
		NullCheck(G_B2_2);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_7;
		L_7 = ConditionalWeakTable_2_GetValue_mC1F65C9D190A7B9A2554784DDC71B7454957C35E(G_B2_2, G_B2_1, G_B2_0, ConditionalWeakTable_2_GetValue_mC1F65C9D190A7B9A2554784DDC71B7454957C35E_RuntimeMethod_var);
		return L_7;
	}
}
// System.IO.Stream System.IO.WindowsRuntimeStreamExtensions::WinRtToNetFxAdapterMap_GetValue(System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* WindowsRuntimeStreamExtensions_WinRtToNetFxAdapterMap_GetValue_m04700437FAFD962CC4137C3DAF28CC76A45D21BB (RuntimeObject* ___0_winRtStream, int32_t ___1_bufferSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_GetValue_mC1F65C9D190A7B9A2554784DDC71B7454957C35E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreateValueCallback_tDDCD9D271D51B07C7E7946A50CDE83F171F5AD66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass12_0_U3CWinRtToNetFxAdapterMap_GetValueU3Eb__0_m9D50328DD626D2F7554F3701931717AE37321CF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass12_0_t37D3E76CFB42D6FC4250C48FC0277A97E9401D3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeStreamExtensions_tB43F7551D4AF6F5480829903106AD0FFEDC81D9B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass12_0_t37D3E76CFB42D6FC4250C48FC0277A97E9401D3C* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass12_0_t37D3E76CFB42D6FC4250C48FC0277A97E9401D3C* L_0 = (U3CU3Ec__DisplayClass12_0_t37D3E76CFB42D6FC4250C48FC0277A97E9401D3C*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass12_0_t37D3E76CFB42D6FC4250C48FC0277A97E9401D3C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass12_0__ctor_m57B47C13EA2408FCFD2187740EFE6C35BA38E67C(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass12_0_t37D3E76CFB42D6FC4250C48FC0277A97E9401D3C* L_1 = V_0;
		int32_t L_2 = ___1_bufferSize;
		NullCheck(L_1);
		L_1->___bufferSize_0 = L_2;
		il2cpp_codegen_runtime_class_init_inline(WindowsRuntimeStreamExtensions_tB43F7551D4AF6F5480829903106AD0FFEDC81D9B_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t854A212DF03C231A1FCD6A2CCD8FC269D295B27C* L_3 = ((WindowsRuntimeStreamExtensions_tB43F7551D4AF6F5480829903106AD0FFEDC81D9B_StaticFields*)il2cpp_codegen_static_fields_for(WindowsRuntimeStreamExtensions_tB43F7551D4AF6F5480829903106AD0FFEDC81D9B_il2cpp_TypeInfo_var))->___s_winRtToNetFxAdapterMap_0;
		RuntimeObject* L_4 = ___0_winRtStream;
		U3CU3Ec__DisplayClass12_0_t37D3E76CFB42D6FC4250C48FC0277A97E9401D3C* L_5 = V_0;
		CreateValueCallback_tDDCD9D271D51B07C7E7946A50CDE83F171F5AD66* L_6 = (CreateValueCallback_tDDCD9D271D51B07C7E7946A50CDE83F171F5AD66*)il2cpp_codegen_object_new(CreateValueCallback_tDDCD9D271D51B07C7E7946A50CDE83F171F5AD66_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		CreateValueCallback__ctor_mD661CB4A2D38E6BFC019D1AC4E2FD7F8A77660C5(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass12_0_U3CWinRtToNetFxAdapterMap_GetValueU3Eb__0_m9D50328DD626D2F7554F3701931717AE37321CF7_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_7;
		L_7 = ConditionalWeakTable_2_GetValue_mC1F65C9D190A7B9A2554784DDC71B7454957C35E(L_3, L_4, L_6, ConditionalWeakTable_2_GetValue_mC1F65C9D190A7B9A2554784DDC71B7454957C35E_RuntimeMethod_var);
		return L_7;
	}
}
// System.IO.Stream System.IO.WindowsRuntimeStreamExtensions::AsStreamInternalFactoryHelper(System.Object,System.Int32,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* WindowsRuntimeStreamExtensions_AsStreamInternalFactoryHelper_mEDB150B71D7D35A83BFDEEE146BA6AAD74E380C1 (RuntimeObject* ___0_windowsRuntimeStream, int32_t ___1_bufferSize, String_t* ___2_invokedMethodName, bool ___3_forceBufferSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferedStream_t9D0E8599EB0482BE778F25C62AA8954A68D94BEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeStreamExtensions_tB43F7551D4AF6F5480829903106AD0FFEDC81D9B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_0 = NULL;
	WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* V_1 = NULL;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* G_B3_0 = NULL;
	{
		int32_t L_0 = ___1_bufferSize;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		RuntimeObject* L_1 = ___0_windowsRuntimeStream;
		int32_t L_2 = ___1_bufferSize;
		il2cpp_codegen_runtime_class_init_inline(WindowsRuntimeStreamExtensions_tB43F7551D4AF6F5480829903106AD0FFEDC81D9B_il2cpp_TypeInfo_var);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3;
		L_3 = WindowsRuntimeStreamExtensions_WinRtToNetFxAdapterMap_GetValue_m04700437FAFD962CC4137C3DAF28CC76A45D21BB(L_1, L_2, NULL);
		G_B3_0 = L_3;
		goto IL_0012;
	}

IL_000c:
	{
		RuntimeObject* L_4 = ___0_windowsRuntimeStream;
		il2cpp_codegen_runtime_class_init_inline(WindowsRuntimeStreamExtensions_tB43F7551D4AF6F5480829903106AD0FFEDC81D9B_il2cpp_TypeInfo_var);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_5;
		L_5 = WindowsRuntimeStreamExtensions_WinRtToNetFxAdapterMap_GetValue_m58ED3961E11C3913170A0CD12C24014D85BE0131(L_4, NULL);
		G_B3_0 = L_5;
	}

IL_0012:
	{
		V_0 = G_B3_0;
		bool L_6 = ___3_forceBufferSize;
		if (!L_6)
		{
			goto IL_001e;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_7 = V_0;
		int32_t L_8 = ___1_bufferSize;
		String_t* L_9 = ___2_invokedMethodName;
		il2cpp_codegen_runtime_class_init_inline(WindowsRuntimeStreamExtensions_tB43F7551D4AF6F5480829903106AD0FFEDC81D9B_il2cpp_TypeInfo_var);
		WindowsRuntimeStreamExtensions_EnsureAdapterBufferSize_m45873229B6C84BCCE713F0E252775273849092D4(L_7, L_8, L_9, NULL);
	}

IL_001e:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_10 = V_0;
		V_1 = ((WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D*)IsInstClass((RuntimeObject*)L_10, WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D_il2cpp_TypeInfo_var));
		WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* L_11 = V_1;
		if (L_11)
		{
			goto IL_0039;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_12 = V_0;
		NullCheck(((BufferedStream_t9D0E8599EB0482BE778F25C62AA8954A68D94BEE*)CastclassSealed((RuntimeObject*)L_12, BufferedStream_t9D0E8599EB0482BE778F25C62AA8954A68D94BEE_il2cpp_TypeInfo_var)));
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_13;
		L_13 = BufferedStream_get_UnderlyingStream_m85027B2FF4537B66648311CE327D7085FFDBBDA9_inline(((BufferedStream_t9D0E8599EB0482BE778F25C62AA8954A68D94BEE*)CastclassSealed((RuntimeObject*)L_12, BufferedStream_t9D0E8599EB0482BE778F25C62AA8954A68D94BEE_il2cpp_TypeInfo_var)), NULL);
		V_1 = ((WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D*)IsInstClass((RuntimeObject*)L_13, WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D_il2cpp_TypeInfo_var));
	}

IL_0039:
	{
		WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* L_14 = V_1;
		NullCheck(L_14);
		WinRtToNetFxStreamAdapter_SetWonInitializationRace_mDE4E795CE7D9B879EAD1CBD8A208910D52538350(L_14, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_15 = V_0;
		return L_15;
	}
}
// Windows.Storage.Streams.IInputStream System.IO.WindowsRuntimeStreamExtensions::AsInputStream(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowsRuntimeStreamExtensions_AsInputStream_mE4944CCCA4BDB0DAC42B18BBC8624258805D1A65 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeStreamExtensions_tB43F7551D4AF6F5480829903106AD0FFEDC81D9B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeStreamExtensions_AsInputStream_mE4944CCCA4BDB0DAC42B18BBC8624258805D1A65_RuntimeMethod_var)));
	}

IL_000e:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = ___0_stream;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_2);
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_4 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFAC57901EC8544C5A7E2C0595D8334FEDA1ED6AE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeStreamExtensions_AsInputStream_mE4944CCCA4BDB0DAC42B18BBC8624258805D1A65_RuntimeMethod_var)));
	}

IL_0021:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_5 = ___0_stream;
		il2cpp_codegen_runtime_class_init_inline(WindowsRuntimeStreamExtensions_tB43F7551D4AF6F5480829903106AD0FFEDC81D9B_il2cpp_TypeInfo_var);
		RuntimeObject* L_6;
		L_6 = WindowsRuntimeStreamExtensions_AsWindowsRuntimeStreamInternal_m975E800073D3F332AF2C1DDD170BC8337490C14B(L_5, NULL);
		return ((RuntimeObject*)IsInst((RuntimeObject*)L_6, IInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71_il2cpp_TypeInfo_var));
	}
}
// Windows.Storage.Streams.IOutputStream System.IO.WindowsRuntimeStreamExtensions::AsOutputStream(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowsRuntimeStreamExtensions_AsOutputStream_m9352D8DF823B254F2B6DBAA7ECF049B37AB9A6D0 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeStreamExtensions_tB43F7551D4AF6F5480829903106AD0FFEDC81D9B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeStreamExtensions_AsOutputStream_m9352D8DF823B254F2B6DBAA7ECF049B37AB9A6D0_RuntimeMethod_var)));
	}

IL_000e:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = ___0_stream;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_2);
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_4 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral92196344FD1BC529F2C783D1184779BAB239C616)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeStreamExtensions_AsOutputStream_m9352D8DF823B254F2B6DBAA7ECF049B37AB9A6D0_RuntimeMethod_var)));
	}

IL_0021:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_5 = ___0_stream;
		il2cpp_codegen_runtime_class_init_inline(WindowsRuntimeStreamExtensions_tB43F7551D4AF6F5480829903106AD0FFEDC81D9B_il2cpp_TypeInfo_var);
		RuntimeObject* L_6;
		L_6 = WindowsRuntimeStreamExtensions_AsWindowsRuntimeStreamInternal_m975E800073D3F332AF2C1DDD170BC8337490C14B(L_5, NULL);
		return ((RuntimeObject*)IsInst((RuntimeObject*)L_6, IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284_il2cpp_TypeInfo_var));
	}
}
// System.Object System.IO.WindowsRuntimeStreamExtensions::AsWindowsRuntimeStreamInternal(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowsRuntimeStreamExtensions_AsWindowsRuntimeStreamInternal_m975E800073D3F332AF2C1DDD170BC8337490C14B (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferedStream_t9D0E8599EB0482BE778F25C62AA8954A68D94BEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_TryGetValue_mAAA7661CB097AF2549135730576D4727F4E99773_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinRtToNetFxStreamAdapter_GetWindowsRuntimeStream_TisRuntimeObject_mD5C79C84E5B20F3841E83C7AF833EDEBF1A9B2BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeStreamExtensions_tB43F7551D4AF6F5480829903106AD0FFEDC81D9B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* V_0 = NULL;
	NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* V_1 = NULL;
	BufferedStream_t9D0E8599EB0482BE778F25C62AA8954A68D94BEE* V_2 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		V_0 = ((WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D*)IsInstClass((RuntimeObject*)L_0, WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D_il2cpp_TypeInfo_var));
		WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* L_1 = V_0;
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = ___0_stream;
		V_2 = ((BufferedStream_t9D0E8599EB0482BE778F25C62AA8954A68D94BEE*)IsInstSealed((RuntimeObject*)L_2, BufferedStream_t9D0E8599EB0482BE778F25C62AA8954A68D94BEE_il2cpp_TypeInfo_var));
		BufferedStream_t9D0E8599EB0482BE778F25C62AA8954A68D94BEE* L_3 = V_2;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		BufferedStream_t9D0E8599EB0482BE778F25C62AA8954A68D94BEE* L_4 = V_2;
		NullCheck(L_4);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_5;
		L_5 = BufferedStream_get_UnderlyingStream_m85027B2FF4537B66648311CE327D7085FFDBBDA9_inline(L_4, NULL);
		V_0 = ((WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D*)IsInstClass((RuntimeObject*)L_5, WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D_il2cpp_TypeInfo_var));
	}

IL_0020:
	{
		WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* L_6 = V_0;
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* L_7 = V_0;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = WinRtToNetFxStreamAdapter_GetWindowsRuntimeStream_TisRuntimeObject_mD5C79C84E5B20F3841E83C7AF833EDEBF1A9B2BA(L_7, WinRtToNetFxStreamAdapter_GetWindowsRuntimeStream_TisRuntimeObject_mD5C79C84E5B20F3841E83C7AF833EDEBF1A9B2BA_RuntimeMethod_var);
		RuntimeObject* L_9 = L_8;
		G_B5_0 = L_9;
		if (L_9)
		{
			G_B6_0 = L_9;
			goto IL_003c;
		}
	}
	{
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_10 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		ObjectDisposedException__ctor_m5C356C25295E89559C120CB4562783AAF7F41C84(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB4792D73601AFAC8241C44E882B3149512DDA812)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WindowsRuntimeStreamExtensions_AsWindowsRuntimeStreamInternal_m975E800073D3F332AF2C1DDD170BC8337490C14B_RuntimeMethod_var)));
	}

IL_003c:
	{
		return G_B6_0;
	}

IL_003d:
	{
		il2cpp_codegen_runtime_class_init_inline(WindowsRuntimeStreamExtensions_tB43F7551D4AF6F5480829903106AD0FFEDC81D9B_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t24BE7D16606E76A4491061A2E9F3E241D476135E* L_11 = ((WindowsRuntimeStreamExtensions_tB43F7551D4AF6F5480829903106AD0FFEDC81D9B_StaticFields*)il2cpp_codegen_static_fields_for(WindowsRuntimeStreamExtensions_tB43F7551D4AF6F5480829903106AD0FFEDC81D9B_il2cpp_TypeInfo_var))->___s_netFxToWinRtAdapterMap_1;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_12 = ___0_stream;
		NullCheck(L_11);
		bool L_13;
		L_13 = ConditionalWeakTable_2_TryGetValue_mAAA7661CB097AF2549135730576D4727F4E99773(L_11, L_12, (&V_1), ConditionalWeakTable_2_TryGetValue_mAAA7661CB097AF2549135730576D4727F4E99773_RuntimeMethod_var);
		if (!L_13)
		{
			goto IL_004e;
		}
	}
	{
		NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* L_14 = V_1;
		return L_14;
	}

IL_004e:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_15 = ___0_stream;
		il2cpp_codegen_runtime_class_init_inline(WindowsRuntimeStreamExtensions_tB43F7551D4AF6F5480829903106AD0FFEDC81D9B_il2cpp_TypeInfo_var);
		NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* L_16;
		L_16 = WindowsRuntimeStreamExtensions_AsWindowsRuntimeStreamInternalFactoryHelper_m386B35F3B9C48F2813855BEDEA349F267E3FDA02(L_15, NULL);
		return L_16;
	}
}
// System.IO.NetFxToWinRtStreamAdapter System.IO.WindowsRuntimeStreamExtensions::AsWindowsRuntimeStreamInternalFactoryHelper(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* WindowsRuntimeStreamExtensions_AsWindowsRuntimeStreamInternalFactoryHelper_m386B35F3B9C48F2813855BEDEA349F267E3FDA02 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_GetValue_m9565B962066EB9A23F8AB92AF2550E7AA46BB4C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreateValueCallback_t67AEB55E60D5609661C588762443963DBD29C224_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CAsWindowsRuntimeStreamInternalFactoryHelperU3Eb__18_0_mCADD9B776F0AC6D3DB507A3B3F1B09315E6ECBAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0031EA3631AC4363828C98AED7D52630379E6919_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeStreamExtensions_tB43F7551D4AF6F5480829903106AD0FFEDC81D9B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CreateValueCallback_t67AEB55E60D5609661C588762443963DBD29C224* G_B2_0 = NULL;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* G_B2_1 = NULL;
	ConditionalWeakTable_2_t24BE7D16606E76A4491061A2E9F3E241D476135E* G_B2_2 = NULL;
	CreateValueCallback_t67AEB55E60D5609661C588762443963DBD29C224* G_B1_0 = NULL;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* G_B1_1 = NULL;
	ConditionalWeakTable_2_t24BE7D16606E76A4491061A2E9F3E241D476135E* G_B1_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(WindowsRuntimeStreamExtensions_tB43F7551D4AF6F5480829903106AD0FFEDC81D9B_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t24BE7D16606E76A4491061A2E9F3E241D476135E* L_0 = ((WindowsRuntimeStreamExtensions_tB43F7551D4AF6F5480829903106AD0FFEDC81D9B_StaticFields*)il2cpp_codegen_static_fields_for(WindowsRuntimeStreamExtensions_tB43F7551D4AF6F5480829903106AD0FFEDC81D9B_il2cpp_TypeInfo_var))->___s_netFxToWinRtAdapterMap_1;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___0_stream;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t0031EA3631AC4363828C98AED7D52630379E6919_il2cpp_TypeInfo_var);
		CreateValueCallback_t67AEB55E60D5609661C588762443963DBD29C224* L_2 = ((U3CU3Ec_t0031EA3631AC4363828C98AED7D52630379E6919_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0031EA3631AC4363828C98AED7D52630379E6919_il2cpp_TypeInfo_var))->___U3CU3E9__18_0_2;
		CreateValueCallback_t67AEB55E60D5609661C588762443963DBD29C224* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		G_B1_2 = L_0;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			G_B2_2 = L_0;
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t0031EA3631AC4363828C98AED7D52630379E6919_il2cpp_TypeInfo_var);
		U3CU3Ec_t0031EA3631AC4363828C98AED7D52630379E6919* L_4 = ((U3CU3Ec_t0031EA3631AC4363828C98AED7D52630379E6919_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0031EA3631AC4363828C98AED7D52630379E6919_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		CreateValueCallback_t67AEB55E60D5609661C588762443963DBD29C224* L_5 = (CreateValueCallback_t67AEB55E60D5609661C588762443963DBD29C224*)il2cpp_codegen_object_new(CreateValueCallback_t67AEB55E60D5609661C588762443963DBD29C224_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		CreateValueCallback__ctor_mEF9564BCE1A115A11DB76EFD4BD6C3430BFFED71(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3CAsWindowsRuntimeStreamInternalFactoryHelperU3Eb__18_0_mCADD9B776F0AC6D3DB507A3B3F1B09315E6ECBAA_RuntimeMethod_var), NULL);
		CreateValueCallback_t67AEB55E60D5609661C588762443963DBD29C224* L_6 = L_5;
		((U3CU3Ec_t0031EA3631AC4363828C98AED7D52630379E6919_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0031EA3631AC4363828C98AED7D52630379E6919_il2cpp_TypeInfo_var))->___U3CU3E9__18_0_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t0031EA3631AC4363828C98AED7D52630379E6919_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0031EA3631AC4363828C98AED7D52630379E6919_il2cpp_TypeInfo_var))->___U3CU3E9__18_0_2), (void*)L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0025:
	{
		NullCheck(G_B2_2);
		NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* L_7;
		L_7 = ConditionalWeakTable_2_GetValue_m9565B962066EB9A23F8AB92AF2550E7AA46BB4C5(G_B2_2, G_B2_1, G_B2_0, ConditionalWeakTable_2_GetValue_m9565B962066EB9A23F8AB92AF2550E7AA46BB4C5_RuntimeMethod_var);
		NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* L_8 = L_7;
		NullCheck(L_8);
		NetFxToWinRtStreamAdapter_SetWonInitializationRace_m16AB325FD4545F08DF062D6A9FEDE112CF312B28(L_8, NULL);
		return L_8;
	}
}
// System.Void System.IO.WindowsRuntimeStreamExtensions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsRuntimeStreamExtensions__cctor_m1FAE5A46A6EA4F3B585D937ED5696C082AF82CFE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2__ctor_m768EC987180F75B2C7E25ECB757C2F37C5447A44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2__ctor_m8C1B4AF4E7D62A741442A4502DE8E8CF8E4467A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_t24BE7D16606E76A4491061A2E9F3E241D476135E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_t854A212DF03C231A1FCD6A2CCD8FC269D295B27C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeStreamExtensions_tB43F7551D4AF6F5480829903106AD0FFEDC81D9B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConditionalWeakTable_2_t854A212DF03C231A1FCD6A2CCD8FC269D295B27C* L_0 = (ConditionalWeakTable_2_t854A212DF03C231A1FCD6A2CCD8FC269D295B27C*)il2cpp_codegen_object_new(ConditionalWeakTable_2_t854A212DF03C231A1FCD6A2CCD8FC269D295B27C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ConditionalWeakTable_2__ctor_m8C1B4AF4E7D62A741442A4502DE8E8CF8E4467A3(L_0, ConditionalWeakTable_2__ctor_m8C1B4AF4E7D62A741442A4502DE8E8CF8E4467A3_RuntimeMethod_var);
		((WindowsRuntimeStreamExtensions_tB43F7551D4AF6F5480829903106AD0FFEDC81D9B_StaticFields*)il2cpp_codegen_static_fields_for(WindowsRuntimeStreamExtensions_tB43F7551D4AF6F5480829903106AD0FFEDC81D9B_il2cpp_TypeInfo_var))->___s_winRtToNetFxAdapterMap_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((WindowsRuntimeStreamExtensions_tB43F7551D4AF6F5480829903106AD0FFEDC81D9B_StaticFields*)il2cpp_codegen_static_fields_for(WindowsRuntimeStreamExtensions_tB43F7551D4AF6F5480829903106AD0FFEDC81D9B_il2cpp_TypeInfo_var))->___s_winRtToNetFxAdapterMap_0), (void*)L_0);
		ConditionalWeakTable_2_t24BE7D16606E76A4491061A2E9F3E241D476135E* L_1 = (ConditionalWeakTable_2_t24BE7D16606E76A4491061A2E9F3E241D476135E*)il2cpp_codegen_object_new(ConditionalWeakTable_2_t24BE7D16606E76A4491061A2E9F3E241D476135E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ConditionalWeakTable_2__ctor_m768EC987180F75B2C7E25ECB757C2F37C5447A44(L_1, ConditionalWeakTable_2__ctor_m768EC987180F75B2C7E25ECB757C2F37C5447A44_RuntimeMethod_var);
		((WindowsRuntimeStreamExtensions_tB43F7551D4AF6F5480829903106AD0FFEDC81D9B_StaticFields*)il2cpp_codegen_static_fields_for(WindowsRuntimeStreamExtensions_tB43F7551D4AF6F5480829903106AD0FFEDC81D9B_il2cpp_TypeInfo_var))->___s_netFxToWinRtAdapterMap_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((WindowsRuntimeStreamExtensions_tB43F7551D4AF6F5480829903106AD0FFEDC81D9B_StaticFields*)il2cpp_codegen_static_fields_for(WindowsRuntimeStreamExtensions_tB43F7551D4AF6F5480829903106AD0FFEDC81D9B_il2cpp_TypeInfo_var))->___s_netFxToWinRtAdapterMap_1), (void*)L_1);
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
// System.Void System.IO.WindowsRuntimeStreamExtensions/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m585E9BD31C8D6BD420622DA00DA8BDD03DDF81E4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0031EA3631AC4363828C98AED7D52630379E6919_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t0031EA3631AC4363828C98AED7D52630379E6919* L_0 = (U3CU3Ec_t0031EA3631AC4363828C98AED7D52630379E6919*)il2cpp_codegen_object_new(U3CU3Ec_t0031EA3631AC4363828C98AED7D52630379E6919_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m3033F9D489AB2727DC876D3CEC94D7717768DBD3(L_0, NULL);
		((U3CU3Ec_t0031EA3631AC4363828C98AED7D52630379E6919_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0031EA3631AC4363828C98AED7D52630379E6919_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t0031EA3631AC4363828C98AED7D52630379E6919_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0031EA3631AC4363828C98AED7D52630379E6919_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void System.IO.WindowsRuntimeStreamExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3033F9D489AB2727DC876D3CEC94D7717768DBD3 (U3CU3Ec_t0031EA3631AC4363828C98AED7D52630379E6919* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.IO.Stream System.IO.WindowsRuntimeStreamExtensions/<>c::<WinRtToNetFxAdapterMap_GetValue>b__11_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* U3CU3Ec_U3CWinRtToNetFxAdapterMap_GetValueU3Eb__11_0_m842AEF029659468D656C0D559BAFE82B4A078BBC (U3CU3Ec_t0031EA3631AC4363828C98AED7D52630379E6919* __this, RuntimeObject* ___0_wrtStr, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_wrtStr;
		WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* L_1;
		L_1 = WinRtToNetFxStreamAdapter_Create_mB55C9B6428631D630A28BC687A4412251686E77A(L_0, NULL);
		return L_1;
	}
}
// System.IO.NetFxToWinRtStreamAdapter System.IO.WindowsRuntimeStreamExtensions/<>c::<AsWindowsRuntimeStreamInternalFactoryHelper>b__18_0(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* U3CU3Ec_U3CAsWindowsRuntimeStreamInternalFactoryHelperU3Eb__18_0_mCADD9B776F0AC6D3DB507A3B3F1B09315E6ECBAA (U3CU3Ec_t0031EA3631AC4363828C98AED7D52630379E6919* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_str, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_str;
		NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* L_1;
		L_1 = NetFxToWinRtStreamAdapter_Create_mA1D7422D99BF8432BCBBDE154570AD8FB0C2A25B(L_0, NULL);
		return L_1;
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
// System.Void System.IO.WindowsRuntimeStreamExtensions/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_m57B47C13EA2408FCFD2187740EFE6C35BA38E67C (U3CU3Ec__DisplayClass12_0_t37D3E76CFB42D6FC4250C48FC0277A97E9401D3C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.IO.Stream System.IO.WindowsRuntimeStreamExtensions/<>c__DisplayClass12_0::<WinRtToNetFxAdapterMap_GetValue>b__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* U3CU3Ec__DisplayClass12_0_U3CWinRtToNetFxAdapterMap_GetValueU3Eb__0_m9D50328DD626D2F7554F3701931717AE37321CF7 (U3CU3Ec__DisplayClass12_0_t37D3E76CFB42D6FC4250C48FC0277A97E9401D3C* __this, RuntimeObject* ___0_wrtStr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferedStream_t9D0E8599EB0482BE778F25C62AA8954A68D94BEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_wrtStr;
		WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* L_1;
		L_1 = WinRtToNetFxStreamAdapter_Create_mB55C9B6428631D630A28BC687A4412251686E77A(L_0, NULL);
		int32_t L_2 = __this->___bufferSize_0;
		BufferedStream_t9D0E8599EB0482BE778F25C62AA8954A68D94BEE* L_3 = (BufferedStream_t9D0E8599EB0482BE778F25C62AA8954A68D94BEE*)il2cpp_codegen_object_new(BufferedStream_t9D0E8599EB0482BE778F25C62AA8954A68D94BEE_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BufferedStream__ctor_m056A9E38CA9E613F4A53028E99ECBC6E40026B36(L_3, L_1, L_2, NULL);
		return L_3;
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
// System.Runtime.ExceptionServices.ExceptionDispatchInfo System.IO.WinRtIOHelper::NativeExceptionToIOExceptionInfo(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* WinRtIOHelper_NativeExceptionToIOExceptionInfo_mB3A83A47FB194066EB5853EEA3C94FBD0492E4EA (Exception_t* ___0_nativeException, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD170D006841B596DCF7410F1FDBFBB378C531F14);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		Exception_t* L_0 = ___0_nativeException;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Exception_GetType_mAD1230385BDC06119C339187CC37F22B6A79CF09(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Exception_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(124 /* System.Boolean System.Type::Equals(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_001e;
		}
	}
	{
		Exception_t* L_5 = ___0_nativeException;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_6;
		L_6 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_5, NULL);
		return L_6;
	}

IL_001e:
	{
		Exception_t* L_7 = ___0_nativeException;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_7);
		V_0 = L_8;
		String_t* L_9 = V_0;
		bool L_10;
		L_10 = String_IsNullOrWhiteSpace_m42E1F3B2C358068D645E46F01CF1834DC77A5A10(L_9, NULL);
		if (!L_10)
		{
			goto IL_0033;
		}
	}
	{
		V_0 = _stringLiteralD170D006841B596DCF7410F1FDBFBB378C531F14;
	}

IL_0033:
	{
		String_t* L_11 = V_0;
		Exception_t* L_12 = ___0_nativeException;
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_13 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		IOException__ctor_mFA9F39D1AF43FBC40BFA68A7BFE07852D1EF8B1B(L_13, L_11, L_12, NULL);
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_14;
		L_14 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_13, NULL);
		return L_14;
	}
}
// System.Void System.IO.WinRtIOHelper::EnsureResultsInUserBuffer(Windows.Storage.Streams.IBuffer,Windows.Storage.Streams.IBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRtIOHelper_EnsureResultsInUserBuffer_m38C0A807EAAB9DA37F6BB34A0A57D298CE62992E (RuntimeObject* ___0_userBuffer, RuntimeObject* ___1_resultBuffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___1_resultBuffer;
		RuntimeObject* L_1 = ___0_userBuffer;
		bool L_2;
		L_2 = WindowsRuntimeBufferExtensions_IsSameData_m245201A2EA5EA798640445380269F19C234DA784(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		RuntimeObject* L_3 = ___1_resultBuffer;
		RuntimeObject* L_4 = ___0_userBuffer;
		WindowsRuntimeBufferExtensions_CopyTo_mDC3857DDA9BB0055E8D3DA4FCB570220BC5B698E(L_3, L_4, NULL);
		RuntimeObject* L_5 = ___0_userBuffer;
		RuntimeObject* L_6 = ___1_resultBuffer;
		NullCheck(L_6);
		uint32_t L_7;
		L_7 = InterfaceFuncInvoker0< uint32_t >::Invoke(1 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Length() */, IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_il2cpp_TypeInfo_var, L_6);
		NullCheck(L_5);
		InterfaceActionInvoker1< uint32_t >::Invoke(2 /* System.Void Windows.Storage.Streams.IBuffer::put_Length(System.UInt32) */, IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_il2cpp_TypeInfo_var, L_5, L_7);
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
// System.IO.WinRtToNetFxStreamAdapter System.IO.WinRtToNetFxStreamAdapter::Create(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* WinRtToNetFxStreamAdapter_Create_mB55C9B6428631D630A28BC687A4412251686E77A (RuntimeObject* ___0_windowsRuntimeStream, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	{
		RuntimeObject* L_0 = ___0_windowsRuntimeStream;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral206124D23601B8F9E63F2CA19EEEC41CA93E9581)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_Create_mB55C9B6428631D630A28BC687A4412251686E77A_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_windowsRuntimeStream;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		RuntimeObject* L_3 = ___0_windowsRuntimeStream;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		RuntimeObject* L_4 = ___0_windowsRuntimeStream;
		V_2 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, IRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_5 = V_0;
		if (L_5)
		{
			goto IL_0040;
		}
	}
	{
		bool L_6 = V_1;
		if (L_6)
		{
			goto IL_0040;
		}
	}
	{
		bool L_7 = V_2;
		if (L_7)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral620486778739FAD6CE34F68B1C2B4BF67B0C7857)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_Create_mB55C9B6428631D630A28BC687A4412251686E77A_RuntimeMethod_var)));
	}

IL_0040:
	{
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_008a;
		}
	}
	{
		RuntimeObject* L_10 = ___0_windowsRuntimeStream;
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, IRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D_il2cpp_TypeInfo_var));
		bool L_11 = V_0;
		if (L_11)
		{
			goto IL_0060;
		}
	}
	{
		RuntimeObject* L_12 = V_3;
		NullCheck(L_12);
		bool L_13;
		L_13 = InterfaceFuncInvoker0< bool >::Invoke(7 /* System.Boolean Windows.Storage.Streams.IRandomAccessStream::get_CanRead() */, IRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D_il2cpp_TypeInfo_var, L_12);
		if (!L_13)
		{
			goto IL_0060;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_14 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral429196CDBC5C83755E08CBDCD12E38AF3ECC1161)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_Create_mB55C9B6428631D630A28BC687A4412251686E77A_RuntimeMethod_var)));
	}

IL_0060:
	{
		bool L_15 = V_1;
		if (L_15)
		{
			goto IL_0076;
		}
	}
	{
		RuntimeObject* L_16 = V_3;
		NullCheck(L_16);
		bool L_17;
		L_17 = InterfaceFuncInvoker0< bool >::Invoke(8 /* System.Boolean Windows.Storage.Streams.IRandomAccessStream::get_CanWrite() */, IRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D_il2cpp_TypeInfo_var, L_16);
		if (!L_17)
		{
			goto IL_0076;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_18 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_18);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0912D38B42FE9BCC62BFD75AF83A08ADBFBA17E0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_Create_mB55C9B6428631D630A28BC687A4412251686E77A_RuntimeMethod_var)));
	}

IL_0076:
	{
		RuntimeObject* L_19 = V_3;
		NullCheck(L_19);
		bool L_20;
		L_20 = InterfaceFuncInvoker0< bool >::Invoke(7 /* System.Boolean Windows.Storage.Streams.IRandomAccessStream::get_CanRead() */, IRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D_il2cpp_TypeInfo_var, L_19);
		if (L_20)
		{
			goto IL_0080;
		}
	}
	{
		V_0 = (bool)0;
	}

IL_0080:
	{
		RuntimeObject* L_21 = V_3;
		NullCheck(L_21);
		bool L_22;
		L_22 = InterfaceFuncInvoker0< bool >::Invoke(8 /* System.Boolean Windows.Storage.Streams.IRandomAccessStream::get_CanWrite() */, IRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D_il2cpp_TypeInfo_var, L_21);
		if (L_22)
		{
			goto IL_008a;
		}
	}
	{
		V_1 = (bool)0;
	}

IL_008a:
	{
		bool L_23 = V_0;
		if (L_23)
		{
			goto IL_009b;
		}
	}
	{
		bool L_24 = V_1;
		if (L_24)
		{
			goto IL_009b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_25 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_25);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_25, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA3E15F3966AD512F9574C14581C3AC30B635D1C1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_Create_mB55C9B6428631D630A28BC687A4412251686E77A_RuntimeMethod_var)));
	}

IL_009b:
	{
		RuntimeObject* L_26 = ___0_windowsRuntimeStream;
		bool L_27 = V_0;
		bool L_28 = V_1;
		bool L_29 = V_2;
		WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* L_30 = (WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D*)il2cpp_codegen_object_new(WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		WinRtToNetFxStreamAdapter__ctor_mB4A7AFFBF3CDAAD5684E354E027D9DB5E3F60833(L_30, L_26, L_27, L_28, L_29, NULL);
		return L_30;
	}
}
// System.Void System.IO.WinRtToNetFxStreamAdapter::.ctor(System.Object,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRtToNetFxStreamAdapter__ctor_mB4A7AFFBF3CDAAD5684E354E027D9DB5E3F60833 (WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* __this, RuntimeObject* ___0_winRtStream, bool ___1_canRead, bool ___2_canWrite, bool ___3_canSeek, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->____leaveUnderlyingStreamOpen_5 = (bool)1;
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0(__this, NULL);
		RuntimeObject* L_0 = ___0_winRtStream;
		__this->____winRtStream_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____winRtStream_6), (void*)L_0);
		bool L_1 = ___1_canRead;
		__this->____canRead_7 = L_1;
		bool L_2 = ___2_canWrite;
		__this->____canWrite_8 = L_2;
		bool L_3 = ___3_canSeek;
		__this->____canSeek_9 = L_3;
		return;
	}
}
// System.Void System.IO.WinRtToNetFxStreamAdapter::SetWonInitializationRace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRtToNetFxStreamAdapter_SetWonInitializationRace_mDE4E795CE7D9B879EAD1CBD8A208910D52538350 (WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* __this, const RuntimeMethod* method) 
{
	{
		__this->____leaveUnderlyingStreamOpen_5 = (bool)0;
		return;
	}
}
// System.Byte[] System.IO.WinRtToNetFxStreamAdapter::get_OneByteBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* WinRtToNetFxStreamAdapter_get_OneByteBuffer_m288CD9E724B4A10CD143C1EF06C23E33B316D988 (WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____oneByteBuffer_4;
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_2;
		V_0 = L_3;
		__this->____oneByteBuffer_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____oneByteBuffer_4), (void*)L_3);
	}

IL_0018:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		return L_4;
	}
}
// System.Void System.IO.WinRtToNetFxStreamAdapter::EnsureNotDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRtToNetFxStreamAdapter_EnsureNotDisposed_m2380D3C575831B4E4571ED577B331B123B7FCC59 (WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____winRtStream_6;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_1 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB4792D73601AFAC8241C44E882B3149512DDA812)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_EnsureNotDisposed_m2380D3C575831B4E4571ED577B331B123B7FCC59_RuntimeMethod_var)));
	}

IL_0013:
	{
		return;
	}
}
// System.Void System.IO.WinRtToNetFxStreamAdapter::EnsureCanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRtToNetFxStreamAdapter_EnsureCanRead_m8CAD7A89069DF1522511D86F3F99D865936B7909 (WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____canRead_7;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_1 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral98997B148C010D1AA3341A7CE29C43B075E5D416)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_EnsureCanRead_m8CAD7A89069DF1522511D86F3F99D865936B7909_RuntimeMethod_var)));
	}

IL_0013:
	{
		return;
	}
}
// System.Void System.IO.WinRtToNetFxStreamAdapter::EnsureCanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRtToNetFxStreamAdapter_EnsureCanWrite_m2622BF473755E46C831CB010D4961F7BBD6DAAFD (WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____canWrite_8;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_1 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral597B697A0554A8988A81FC9F2B357D6027857CEA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_EnsureCanWrite_m2622BF473755E46C831CB010D4961F7BBD6DAAFD_RuntimeMethod_var)));
	}

IL_0013:
	{
		return;
	}
}
// System.Void System.IO.WinRtToNetFxStreamAdapter::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRtToNetFxStreamAdapter_Dispose_m6B8363BC95F013DCFEDD3FCFA963E8B3B50A76E0 (WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		bool L_0 = ___0_disposing;
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		RuntimeObject* L_1 = __this->____winRtStream_6;
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		bool L_2 = __this->____leaveUnderlyingStreamOpen_5;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		RuntimeObject* L_3 = __this->____winRtStream_6;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
		RuntimeObject* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
	}

IL_0028:
	{
		__this->____winRtStream_6 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____winRtStream_6), (void*)NULL);
		bool L_6 = ___0_disposing;
		Stream_Dispose_m9B37BD21A57F8F2BD20EE353DE14405700810C5C(__this, L_6, NULL);
		return;
	}
}
// System.Boolean System.IO.WinRtToNetFxStreamAdapter::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WinRtToNetFxStreamAdapter_get_CanRead_m3393BB74FF63C06A71FDDA5E0EA3B4B3C4171510 (WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____canRead_7;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeObject* L_1 = __this->____winRtStream_6;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}

IL_0012:
	{
		return (bool)0;
	}
}
// System.Boolean System.IO.WinRtToNetFxStreamAdapter::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WinRtToNetFxStreamAdapter_get_CanWrite_m16A36E892D71278C37F9B8EEA3F87C6FA6C6CE6C (WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____canWrite_8;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeObject* L_1 = __this->____winRtStream_6;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}

IL_0012:
	{
		return (bool)0;
	}
}
// System.Boolean System.IO.WinRtToNetFxStreamAdapter::get_CanSeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WinRtToNetFxStreamAdapter_get_CanSeek_m89185262BEA47112B15D602CCEDCAFA56411B89E (WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____canSeek_9;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeObject* L_1 = __this->____winRtStream_6;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}

IL_0012:
	{
		return (bool)0;
	}
}
// System.Int64 System.IO.WinRtToNetFxStreamAdapter::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WinRtToNetFxStreamAdapter_get_Length_mFD3523B73508203BA1A0A18F7F983511CB77A8FC (WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D_m0204EE882DA19B82E531C1D3909A6D52BF4E7D62_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	uint64_t G_B4_0 = 0;
	uint64_t G_B3_0 = 0;
	{
		RuntimeObject* L_0;
		L_0 = WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D_m0204EE882DA19B82E531C1D3909A6D52BF4E7D62(__this, WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D_m0204EE882DA19B82E531C1D3909A6D52BF4E7D62_RuntimeMethod_var);
		bool L_1 = __this->____canSeek_9;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0019;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_2 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral90FE78598A19B3BDD30AE2B14F02A7C553E63A7C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_get_Length_mFD3523B73508203BA1A0A18F7F983511CB77A8FC_RuntimeMethod_var)));
	}

IL_0019:
	{
		NullCheck(G_B2_0);
		uint64_t L_3;
		L_3 = InterfaceFuncInvoker0< uint64_t >::Invoke(0 /* System.UInt64 Windows.Storage.Streams.IRandomAccessStream::get_Size() */, IRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D_il2cpp_TypeInfo_var, G_B2_0);
		uint64_t L_4 = L_3;
		G_B3_0 = L_4;
		if ((!(((uint64_t)L_4) > ((uint64_t)((int64_t)(std::numeric_limits<int64_t>::max)())))))
		{
			G_B4_0 = L_4;
			goto IL_0035;
		}
	}
	{
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_5 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral164F50649DB9AD66D8010884BCD2E7EF6D9586C3)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_get_Length_mFD3523B73508203BA1A0A18F7F983511CB77A8FC_RuntimeMethod_var)));
	}

IL_0035:
	{
		return G_B4_0;
	}
}
// System.Int64 System.IO.WinRtToNetFxStreamAdapter::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WinRtToNetFxStreamAdapter_get_Position_mA988A62345ADBF17EC13DF95D5DBB3278CA2D36B (WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D_m0204EE882DA19B82E531C1D3909A6D52BF4E7D62_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	uint64_t G_B4_0 = 0;
	uint64_t G_B3_0 = 0;
	{
		RuntimeObject* L_0;
		L_0 = WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D_m0204EE882DA19B82E531C1D3909A6D52BF4E7D62(__this, WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D_m0204EE882DA19B82E531C1D3909A6D52BF4E7D62_RuntimeMethod_var);
		bool L_1 = __this->____canSeek_9;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0019;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_2 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6EC63F13E8EF6446434D8DD192E33F499A18F921)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_get_Position_mA988A62345ADBF17EC13DF95D5DBB3278CA2D36B_RuntimeMethod_var)));
	}

IL_0019:
	{
		NullCheck(G_B2_0);
		uint64_t L_3;
		L_3 = InterfaceFuncInvoker0< uint64_t >::Invoke(4 /* System.UInt64 Windows.Storage.Streams.IRandomAccessStream::get_Position() */, IRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D_il2cpp_TypeInfo_var, G_B2_0);
		uint64_t L_4 = L_3;
		G_B3_0 = L_4;
		if ((!(((uint64_t)L_4) > ((uint64_t)((int64_t)(std::numeric_limits<int64_t>::max)())))))
		{
			G_B4_0 = L_4;
			goto IL_0035;
		}
	}
	{
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_5 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral164F50649DB9AD66D8010884BCD2E7EF6D9586C3)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_get_Position_mA988A62345ADBF17EC13DF95D5DBB3278CA2D36B_RuntimeMethod_var)));
	}

IL_0035:
	{
		return G_B4_0;
	}
}
// System.Void System.IO.WinRtToNetFxStreamAdapter::set_Position(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRtToNetFxStreamAdapter_set_Position_m02F6431C966D0FDD8F9969B717A0360B8ABC1937 (WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D_m0204EE882DA19B82E531C1D3909A6D52BF4E7D62_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B4_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		int64_t L_0 = ___0_value;
		if ((((int64_t)L_0) >= ((int64_t)((int64_t)0))))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral570A8C820BD3B01A870C767E1B234057A3ABC60F)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral104D147DBCB46F57262B84F93DA55697DB41041F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_set_Position_m02F6431C966D0FDD8F9969B717A0360B8ABC1937_RuntimeMethod_var)));
	}

IL_0015:
	{
		RuntimeObject* L_2;
		L_2 = WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D_m0204EE882DA19B82E531C1D3909A6D52BF4E7D62(__this, WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D_m0204EE882DA19B82E531C1D3909A6D52BF4E7D62_RuntimeMethod_var);
		bool L_3 = __this->____canSeek_9;
		G_B3_0 = L_2;
		if (L_3)
		{
			G_B4_0 = L_2;
			goto IL_002e;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_4 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6EC63F13E8EF6446434D8DD192E33F499A18F921)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_set_Position_m02F6431C966D0FDD8F9969B717A0360B8ABC1937_RuntimeMethod_var)));
	}

IL_002e:
	{
		int64_t L_5 = ___0_value;
		NullCheck(G_B4_0);
		InterfaceActionInvoker1< uint64_t >::Invoke(5 /* System.Void Windows.Storage.Streams.IRandomAccessStream::Seek(System.UInt64) */, IRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D_il2cpp_TypeInfo_var, G_B4_0, L_5);
		return;
	}
}
// System.Int64 System.IO.WinRtToNetFxStreamAdapter::Seek(System.Int64,System.IO.SeekOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WinRtToNetFxStreamAdapter_Seek_mA01B99FF1DFB8EC1EC2C072F579217B12C9009CB (WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* __this, int64_t ___0_offset, int32_t ___1_origin, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D_m0204EE882DA19B82E531C1D3909A6D52BF4E7D62_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint64_t V_3 = 0;
	int64_t V_4 = 0;
	uint64_t V_5 = 0;
	int64_t V_6 = 0;
	int64_t G_B16_0 = 0;
	int64_t G_B18_0 = 0;
	int64_t G_B17_0 = 0;
	{
		RuntimeObject* L_0;
		L_0 = WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D_m0204EE882DA19B82E531C1D3909A6D52BF4E7D62(__this, WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D_m0204EE882DA19B82E531C1D3909A6D52BF4E7D62_RuntimeMethod_var);
		V_0 = L_0;
		bool L_1 = __this->____canSeek_9;
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_2 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4839FA0EB649348E4C333F51DDFC1E62AEDDBA34)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_Seek_mA01B99FF1DFB8EC1EC2C072F579217B12C9009CB_RuntimeMethod_var)));
	}

IL_001a:
	{
		int32_t L_3 = ___1_origin;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0031;
			}
			case 1:
			{
				goto IL_003a;
			}
			case 2:
			{
				goto IL_0077;
			}
		}
	}
	{
		goto IL_0113;
	}

IL_0031:
	{
		int64_t L_4 = ___0_offset;
		VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, __this, L_4);
		int64_t L_5 = ___0_offset;
		return L_5;
	}

IL_003a:
	{
		int64_t L_6;
		L_6 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, __this);
		V_1 = L_6;
		int64_t L_7 = V_1;
		int64_t L_8 = ___0_offset;
		if ((((int64_t)((int64_t)il2cpp_codegen_subtract(((int64_t)(std::numeric_limits<int64_t>::max)()), L_7))) >= ((int64_t)L_8)))
		{
			goto IL_005a;
		}
	}
	{
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_9 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAE5B93CA94D95A3EFBF2D90DB76C2A6B2204A89C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_Seek_mA01B99FF1DFB8EC1EC2C072F579217B12C9009CB_RuntimeMethod_var)));
	}

IL_005a:
	{
		int64_t L_10 = V_1;
		int64_t L_11 = ___0_offset;
		V_2 = ((int64_t)il2cpp_codegen_add(L_10, L_11));
		int64_t L_12 = V_2;
		if ((((int64_t)L_12) >= ((int64_t)((int64_t)0))))
		{
			goto IL_006e;
		}
	}
	{
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_13 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral104D147DBCB46F57262B84F93DA55697DB41041F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_Seek_mA01B99FF1DFB8EC1EC2C072F579217B12C9009CB_RuntimeMethod_var)));
	}

IL_006e:
	{
		int64_t L_14 = V_2;
		VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, __this, L_14);
		int64_t L_15 = V_2;
		return L_15;
	}

IL_0077:
	{
		RuntimeObject* L_16 = V_0;
		NullCheck(L_16);
		uint64_t L_17;
		L_17 = InterfaceFuncInvoker0< uint64_t >::Invoke(0 /* System.UInt64 Windows.Storage.Streams.IRandomAccessStream::get_Size() */, IRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D_il2cpp_TypeInfo_var, L_16);
		V_3 = L_17;
		uint64_t L_18 = V_3;
		if ((!(((uint64_t)L_18) > ((uint64_t)((int64_t)(std::numeric_limits<int64_t>::max)())))))
		{
			goto IL_00d4;
		}
	}
	{
		int64_t L_19 = ___0_offset;
		if ((((int64_t)L_19) < ((int64_t)((int64_t)0))))
		{
			goto IL_009a;
		}
	}
	{
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_20 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)));
		NullCheck(L_20);
		IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAE5B93CA94D95A3EFBF2D90DB76C2A6B2204A89C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_Seek_mA01B99FF1DFB8EC1EC2C072F579217B12C9009CB_RuntimeMethod_var)));
	}

IL_009a:
	{
		int64_t L_21 = ___0_offset;
		if ((((int64_t)L_21) == ((int64_t)((int64_t)(std::numeric_limits<int64_t>::min)()))))
		{
			goto IL_00aa;
		}
	}
	{
		int64_t L_22 = ___0_offset;
		G_B16_0 = ((-L_22));
		goto IL_00b3;
	}

IL_00aa:
	{
		G_B16_0 = ((int64_t)(std::numeric_limits<int64_t>::min)());
	}

IL_00b3:
	{
		V_5 = G_B16_0;
		uint64_t L_23 = V_3;
		uint64_t L_24 = V_5;
		int64_t L_25 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_23, (int64_t)L_24));
		G_B17_0 = L_25;
		if ((!(((uint64_t)L_25) > ((uint64_t)((int64_t)(std::numeric_limits<int64_t>::max)())))))
		{
			G_B18_0 = L_25;
			goto IL_00d0;
		}
	}
	{
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_26 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)));
		NullCheck(L_26);
		IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA(L_26, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAE5B93CA94D95A3EFBF2D90DB76C2A6B2204A89C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_Seek_mA01B99FF1DFB8EC1EC2C072F579217B12C9009CB_RuntimeMethod_var)));
	}

IL_00d0:
	{
		V_4 = G_B18_0;
		goto IL_0108;
	}

IL_00d4:
	{
		uint64_t L_27 = V_3;
		V_6 = L_27;
		int64_t L_28 = V_6;
		int64_t L_29 = ___0_offset;
		if ((((int64_t)((int64_t)il2cpp_codegen_subtract(((int64_t)(std::numeric_limits<int64_t>::max)()), L_28))) >= ((int64_t)L_29)))
		{
			goto IL_00f1;
		}
	}
	{
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_30 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)));
		NullCheck(L_30);
		IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA(L_30, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAE5B93CA94D95A3EFBF2D90DB76C2A6B2204A89C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_30, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_Seek_mA01B99FF1DFB8EC1EC2C072F579217B12C9009CB_RuntimeMethod_var)));
	}

IL_00f1:
	{
		int64_t L_31 = V_6;
		int64_t L_32 = ___0_offset;
		V_4 = ((int64_t)il2cpp_codegen_add(L_31, L_32));
		int64_t L_33 = V_4;
		if ((((int64_t)L_33) >= ((int64_t)((int64_t)0))))
		{
			goto IL_0108;
		}
	}
	{
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_34 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)));
		NullCheck(L_34);
		IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA(L_34, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral104D147DBCB46F57262B84F93DA55697DB41041F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_Seek_mA01B99FF1DFB8EC1EC2C072F579217B12C9009CB_RuntimeMethod_var)));
	}

IL_0108:
	{
		int64_t L_35 = V_4;
		VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, __this, L_35);
		int64_t L_36 = V_4;
		return L_36;
	}

IL_0113:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_37 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_37);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_37, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral528B01FB578E1644A959C494D637A7F8756C1A8C)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral74CC3B7E957B3E7555158404BFDECEF3E64B046B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_37, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_Seek_mA01B99FF1DFB8EC1EC2C072F579217B12C9009CB_RuntimeMethod_var)));
	}
}
// System.Void System.IO.WinRtToNetFxStreamAdapter::SetLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRtToNetFxStreamAdapter_SetLength_m8A4EA850EAC861F8C4CF1DB4E4C99D5174234634 (WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D_m0204EE882DA19B82E531C1D3909A6D52BF4E7D62_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		int64_t L_0 = ___0_value;
		if ((((int64_t)L_0) >= ((int64_t)((int64_t)0))))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8D02CF110EAE277BF80B0ABB2DDF1E5C34A5EAA5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_SetLength_m8A4EA850EAC861F8C4CF1DB4E4C99D5174234634_RuntimeMethod_var)));
	}

IL_0015:
	{
		RuntimeObject* L_2;
		L_2 = WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D_m0204EE882DA19B82E531C1D3909A6D52BF4E7D62(__this, WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D_m0204EE882DA19B82E531C1D3909A6D52BF4E7D62_RuntimeMethod_var);
		V_0 = L_2;
		bool L_3 = __this->____canSeek_9;
		if (L_3)
		{
			goto IL_002f;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_4 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4839FA0EB649348E4C333F51DDFC1E62AEDDBA34)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_SetLength_m8A4EA850EAC861F8C4CF1DB4E4C99D5174234634_RuntimeMethod_var)));
	}

IL_002f:
	{
		WinRtToNetFxStreamAdapter_EnsureCanWrite_m2622BF473755E46C831CB010D4961F7BBD6DAAFD(__this, NULL);
		RuntimeObject* L_5 = V_0;
		int64_t L_6 = ___0_value;
		NullCheck(L_5);
		InterfaceActionInvoker1< uint64_t >::Invoke(1 /* System.Void Windows.Storage.Streams.IRandomAccessStream::put_Size(System.UInt64) */, IRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D_il2cpp_TypeInfo_var, L_5, L_6);
		RuntimeObject* L_7 = V_0;
		NullCheck(L_7);
		uint64_t L_8;
		L_8 = InterfaceFuncInvoker0< uint64_t >::Invoke(0 /* System.UInt64 Windows.Storage.Streams.IRandomAccessStream::get_Size() */, IRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D_il2cpp_TypeInfo_var, L_7);
		RuntimeObject* L_9 = V_0;
		NullCheck(L_9);
		uint64_t L_10;
		L_10 = InterfaceFuncInvoker0< uint64_t >::Invoke(4 /* System.UInt64 Windows.Storage.Streams.IRandomAccessStream::get_Position() */, IRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D_il2cpp_TypeInfo_var, L_9);
		if ((!(((uint64_t)L_8) < ((uint64_t)L_10))))
		{
			goto IL_0051;
		}
	}
	{
		RuntimeObject* L_11 = V_0;
		int64_t L_12 = ___0_value;
		NullCheck(L_11);
		InterfaceActionInvoker1< uint64_t >::Invoke(5 /* System.Void Windows.Storage.Streams.IRandomAccessStream::Seek(System.UInt64) */, IRandomAccessStream_t3D652438066E04B156C5800102C1E5613A8B872D_il2cpp_TypeInfo_var, L_11, L_12);
	}

IL_0051:
	{
		return;
	}
}
// System.IAsyncResult System.IO.WinRtToNetFxStreamAdapter::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WinRtToNetFxStreamAdapter_BeginRead_mD7465C8237229E7B25054F6B13CF042119CC584B (WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_offset, int32_t ___2_count, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_state, bool ___5_usedByBlockingWrapper, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReadAsyncResult_t1F47DFA1E32A8FBC434C3B74D239D2F4888DDFBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71_m9C3503831C27EAF79D7E14C9F404094C101B2CF6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_buffer;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_BeginRead_mD7465C8237229E7B25054F6B13CF042119CC584B_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___1_offset;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_BeginRead_mD7465C8237229E7B25054F6B13CF042119CC584B_RuntimeMethod_var)));
	}

IL_001d:
	{
		int32_t L_4 = ___2_count;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_BeginRead_mD7465C8237229E7B25054F6B13CF042119CC584B_RuntimeMethod_var)));
	}

IL_002c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_buffer;
		NullCheck(L_6);
		int32_t L_7 = ___1_offset;
		int32_t L_8 = ___2_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))) >= ((int32_t)L_8)))
		{
			goto IL_003f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral81B3831FCAA702A03FE2F7FCE058D367DE8559B0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_BeginRead_mD7465C8237229E7B25054F6B13CF042119CC584B_RuntimeMethod_var)));
	}

IL_003f:
	{
		RuntimeObject* L_10;
		L_10 = WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71_m9C3503831C27EAF79D7E14C9F404094C101B2CF6(__this, WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71_m9C3503831C27EAF79D7E14C9F404094C101B2CF6_RuntimeMethod_var);
		WinRtToNetFxStreamAdapter_EnsureCanRead_m8CAD7A89069DF1522511D86F3F99D865936B7909(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___0_buffer;
		int32_t L_12 = ___1_offset;
		int32_t L_13 = ___2_count;
		RuntimeObject* L_14;
		L_14 = WindowsRuntimeBufferExtensions_AsBuffer_m8A0EB9B2849FF09CADAA2F875357CD5D873EAE9E(L_11, L_12, L_13, NULL);
		V_0 = L_14;
		RuntimeObject* L_15 = V_0;
		int32_t L_16 = ___2_count;
		NullCheck(L_10);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker3< RuntimeObject*, RuntimeObject*, uint32_t, uint32_t >::Invoke(0 /* Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32> Windows.Storage.Streams.IInputStream::ReadAsync(Windows.Storage.Streams.IBuffer,System.UInt32,Windows.Storage.Streams.InputStreamOptions) */, IInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71_il2cpp_TypeInfo_var, L_10, L_15, L_16, 1);
		RuntimeObject* L_18 = V_0;
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_19 = ___3_callback;
		RuntimeObject* L_20 = ___4_state;
		bool L_21 = ___5_usedByBlockingWrapper;
		StreamReadAsyncResult_t1F47DFA1E32A8FBC434C3B74D239D2F4888DDFBF* L_22 = (StreamReadAsyncResult_t1F47DFA1E32A8FBC434C3B74D239D2F4888DDFBF*)il2cpp_codegen_object_new(StreamReadAsyncResult_t1F47DFA1E32A8FBC434C3B74D239D2F4888DDFBF_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		StreamReadAsyncResult__ctor_m176A96FFBB03EE86C985427F09FC017FA049B393(L_22, L_17, L_18, L_19, L_20, (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0), NULL);
		return L_22;
	}
}
// System.Int32 System.IO.WinRtToNetFxStreamAdapter::EndRead(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WinRtToNetFxStreamAdapter_EndRead_m7E53107FEBFAE6C1C49EE5F82D62A53AAC8308B6 (WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* __this, RuntimeObject* ___0_asyncResult, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_asyncResult;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral453A1400C5EBA45D0DD93B54ED1EC6D42377A4B5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_EndRead_m7E53107FEBFAE6C1C49EE5F82D62A53AAC8308B6_RuntimeMethod_var)));
	}

IL_000e:
	{
		WinRtToNetFxStreamAdapter_EnsureNotDisposed_m2380D3C575831B4E4571ED577B331B123B7FCC59(__this, NULL);
		WinRtToNetFxStreamAdapter_EnsureCanRead_m8CAD7A89069DF1522511D86F3F99D865936B7909(__this, NULL);
		RuntimeObject* L_2 = ___0_asyncResult;
		V_0 = ((StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5*)IsInstClass((RuntimeObject*)L_2, StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5_il2cpp_TypeInfo_var));
		StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5* L_3 = V_0;
		if (L_3)
		{
			goto IL_0034;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C3A3A1EF78E97D30D83A241EC63AF8261967F3A)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral453A1400C5EBA45D0DD93B54ED1EC6D42377A4B5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_EndRead_m7E53107FEBFAE6C1C49EE5F82D62A53AAC8308B6_RuntimeMethod_var)));
	}

IL_0034:
	{
		StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5* L_5 = V_0;
		NullCheck(L_5);
		StreamOperationAsyncResult_Wait_m0B398079EB6A2B147CE10149B4E1F0A672CFB07D(L_5, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0066:
			{// begin finally (depth: 1)
				StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5* L_6 = V_0;
				NullCheck(L_6);
				StreamOperationAsyncResult_CloseStreamOperation_m7EDC8353FDD660F2FEC14D20F92A6B3287DF72CF(L_6, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5* L_7 = V_0;
				NullCheck(L_7);
				bool L_8;
				L_8 = StreamOperationAsyncResult_get_ProcessCompletedOperationInCallback_m8470600DA8B333697D8129A0D3F1AAA66D146F41_inline(L_7, NULL);
				if (L_8)
				{
					goto IL_0048_1;
				}
			}
			{
				StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5* L_9 = V_0;
				NullCheck(L_9);
				StreamOperationAsyncResult_ProcessCompletedOperation_m40E4883B3BAF7C60094786695F9E4A154DE3C055(L_9, NULL);
			}

IL_0048_1:
			{
				StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5* L_10 = V_0;
				NullCheck(L_10);
				bool L_11;
				L_11 = StreamOperationAsyncResult_get_HasError_m496A745E349A4B25765F291FE07008844EC4C903(L_10, NULL);
				if (!L_11)
				{
					goto IL_005c_1;
				}
			}
			{
				StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5* L_12 = V_0;
				NullCheck(L_12);
				StreamOperationAsyncResult_CloseStreamOperation_m7EDC8353FDD660F2FEC14D20F92A6B3287DF72CF(L_12, NULL);
				StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5* L_13 = V_0;
				NullCheck(L_13);
				StreamOperationAsyncResult_ThrowCachedError_m045627B786B647E31F4140BF2C6A902AD52E53B2(L_13, NULL);
			}

IL_005c_1:
			{
				StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5* L_14 = V_0;
				NullCheck(L_14);
				int64_t L_15;
				L_15 = StreamOperationAsyncResult_get_BytesCompleted_m39550759FF8B759BFD58B476BA8D509EF454A7DE_inline(L_14, NULL);
				V_1 = ((int32_t)L_15);
				goto IL_006d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		int32_t L_16 = V_1;
		return L_16;
	}
}
// System.Threading.Tasks.Task`1<System.Int32> System.IO.WinRtToNetFxStreamAdapter::ReadAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* WinRtToNetFxStreamAdapter_ReadAsync_mF566E2C859FF309392DF56F98B34F854A4C15471 (WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_offset, int32_t ___2_count, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_cancellationToken, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_buffer;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_ReadAsync_mF566E2C859FF309392DF56F98B34F854A4C15471_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___1_offset;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_ReadAsync_mF566E2C859FF309392DF56F98B34F854A4C15471_RuntimeMethod_var)));
	}

IL_001d:
	{
		int32_t L_4 = ___2_count;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_ReadAsync_mF566E2C859FF309392DF56F98B34F854A4C15471_RuntimeMethod_var)));
	}

IL_002c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_buffer;
		NullCheck(L_6);
		int32_t L_7 = ___1_offset;
		int32_t L_8 = ___2_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))) >= ((int32_t)L_8)))
		{
			goto IL_003f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral81B3831FCAA702A03FE2F7FCE058D367DE8559B0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_ReadAsync_mF566E2C859FF309392DF56F98B34F854A4C15471_RuntimeMethod_var)));
	}

IL_003f:
	{
		WinRtToNetFxStreamAdapter_EnsureNotDisposed_m2380D3C575831B4E4571ED577B331B123B7FCC59(__this, NULL);
		WinRtToNetFxStreamAdapter_EnsureCanRead_m8CAD7A89069DF1522511D86F3F99D865936B7909(__this, NULL);
		CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3((&___3_cancellationToken), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___0_buffer;
		int32_t L_11 = ___1_offset;
		int32_t L_12 = ___2_count;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_13 = ___3_cancellationToken;
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_14;
		L_14 = WinRtToNetFxStreamAdapter_ReadAsyncInternal_m59ED37E7560D24D0953E41D43D096560CEA7F378(__this, L_10, L_11, L_12, L_13, NULL);
		return L_14;
	}
}
// System.Int32 System.IO.WinRtToNetFxStreamAdapter::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WinRtToNetFxStreamAdapter_Read_mC6B6A84BACB4D74BC5B23D6D5785269AC7B5EA0F (WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_buffer;
		int32_t L_1 = ___1_offset;
		int32_t L_2 = ___2_count;
		RuntimeObject* L_3;
		L_3 = WinRtToNetFxStreamAdapter_BeginRead_mD7465C8237229E7B25054F6B13CF042119CC584B(__this, L_0, L_1, L_2, (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C*)NULL, NULL, (bool)1, NULL);
		V_0 = L_3;
		RuntimeObject* L_4 = V_0;
		int32_t L_5;
		L_5 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(25 /* System.Int32 System.IO.Stream::EndRead(System.IAsyncResult) */, __this, L_4);
		return L_5;
	}
}
// System.Int32 System.IO.WinRtToNetFxStreamAdapter::ReadByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WinRtToNetFxStreamAdapter_ReadByte_m68D5B4F05701812A31A13B5D9B9EC07744372A07 (WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* __this, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = WinRtToNetFxStreamAdapter_get_OneByteBuffer_m288CD9E724B4A10CD143C1EF06C23E33B316D988(__this, NULL);
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		int32_t L_2;
		L_2 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, __this, L_1, 0, 1);
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		return (-1);
	}

IL_0014:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		uint8_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
// System.IAsyncResult System.IO.WinRtToNetFxStreamAdapter::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WinRtToNetFxStreamAdapter_BeginWrite_m4F2CF3974964D782088229C9AAB320779818A846 (WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_offset, int32_t ___2_count, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_state, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_buffer;
		int32_t L_1 = ___1_offset;
		int32_t L_2 = ___2_count;
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_3 = ___3_callback;
		RuntimeObject* L_4 = ___4_state;
		RuntimeObject* L_5;
		L_5 = WinRtToNetFxStreamAdapter_BeginWrite_m1FDE8E7AF654937E142825D525D95CE85A4172B9(__this, L_0, L_1, L_2, L_3, L_4, (bool)0, NULL);
		return L_5;
	}
}
// System.IAsyncResult System.IO.WinRtToNetFxStreamAdapter::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WinRtToNetFxStreamAdapter_BeginWrite_m1FDE8E7AF654937E142825D525D95CE85A4172B9 (WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_offset, int32_t ___2_count, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_state, bool ___5_usedByBlockingWrapper, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamWriteAsyncResult_t57A8AF219966DDDB17A8D7F1F4AC8DB8D8500693_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284_m717FCA40D60416774137E427B0386318EFF9E186_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_buffer;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_BeginWrite_m1FDE8E7AF654937E142825D525D95CE85A4172B9_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___1_offset;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_BeginWrite_m1FDE8E7AF654937E142825D525D95CE85A4172B9_RuntimeMethod_var)));
	}

IL_001d:
	{
		int32_t L_4 = ___2_count;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_BeginWrite_m1FDE8E7AF654937E142825D525D95CE85A4172B9_RuntimeMethod_var)));
	}

IL_002c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_buffer;
		NullCheck(L_6);
		int32_t L_7 = ___1_offset;
		int32_t L_8 = ___2_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))) >= ((int32_t)L_8)))
		{
			goto IL_003f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBDD1D563FA17E9B82D37BD73BEA7DE8AF3BFF909)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_BeginWrite_m1FDE8E7AF654937E142825D525D95CE85A4172B9_RuntimeMethod_var)));
	}

IL_003f:
	{
		RuntimeObject* L_10;
		L_10 = WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284_m717FCA40D60416774137E427B0386318EFF9E186(__this, WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284_m717FCA40D60416774137E427B0386318EFF9E186_RuntimeMethod_var);
		WinRtToNetFxStreamAdapter_EnsureCanWrite_m2622BF473755E46C831CB010D4961F7BBD6DAAFD(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___0_buffer;
		int32_t L_12 = ___1_offset;
		int32_t L_13 = ___2_count;
		RuntimeObject* L_14;
		L_14 = WindowsRuntimeBufferExtensions_AsBuffer_m8A0EB9B2849FF09CADAA2F875357CD5D873EAE9E(L_11, L_12, L_13, NULL);
		V_0 = L_14;
		RuntimeObject* L_15 = V_0;
		NullCheck(L_10);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32> Windows.Storage.Streams.IOutputStream::WriteAsync(Windows.Storage.Streams.IBuffer) */, IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284_il2cpp_TypeInfo_var, L_10, L_15);
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_17 = ___3_callback;
		RuntimeObject* L_18 = ___4_state;
		bool L_19 = ___5_usedByBlockingWrapper;
		StreamWriteAsyncResult_t57A8AF219966DDDB17A8D7F1F4AC8DB8D8500693* L_20 = (StreamWriteAsyncResult_t57A8AF219966DDDB17A8D7F1F4AC8DB8D8500693*)il2cpp_codegen_object_new(StreamWriteAsyncResult_t57A8AF219966DDDB17A8D7F1F4AC8DB8D8500693_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		StreamWriteAsyncResult__ctor_m3AE1404D8B26860EA1AAC59E0DE9E39E6EE6BD0A(L_20, L_16, L_17, L_18, (bool)((((int32_t)L_19) == ((int32_t)0))? 1 : 0), NULL);
		return L_20;
	}
}
// System.Void System.IO.WinRtToNetFxStreamAdapter::EndWrite(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRtToNetFxStreamAdapter_EndWrite_mC310A537B9DB152B26BA445F57AECEAE5A11E44B (WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* __this, RuntimeObject* ___0_asyncResult, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_asyncResult;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral453A1400C5EBA45D0DD93B54ED1EC6D42377A4B5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_EndWrite_mC310A537B9DB152B26BA445F57AECEAE5A11E44B_RuntimeMethod_var)));
	}

IL_000e:
	{
		WinRtToNetFxStreamAdapter_EnsureNotDisposed_m2380D3C575831B4E4571ED577B331B123B7FCC59(__this, NULL);
		WinRtToNetFxStreamAdapter_EnsureCanWrite_m2622BF473755E46C831CB010D4961F7BBD6DAAFD(__this, NULL);
		RuntimeObject* L_2 = ___0_asyncResult;
		V_0 = ((StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5*)IsInstClass((RuntimeObject*)L_2, StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5_il2cpp_TypeInfo_var));
		StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5* L_3 = V_0;
		if (L_3)
		{
			goto IL_0034;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C3A3A1EF78E97D30D83A241EC63AF8261967F3A)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral453A1400C5EBA45D0DD93B54ED1EC6D42377A4B5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_EndWrite_mC310A537B9DB152B26BA445F57AECEAE5A11E44B_RuntimeMethod_var)));
	}

IL_0034:
	{
		StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5* L_5 = V_0;
		NullCheck(L_5);
		StreamOperationAsyncResult_Wait_m0B398079EB6A2B147CE10149B4E1F0A672CFB07D(L_5, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005e:
			{// begin finally (depth: 1)
				StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5* L_6 = V_0;
				NullCheck(L_6);
				StreamOperationAsyncResult_CloseStreamOperation_m7EDC8353FDD660F2FEC14D20F92A6B3287DF72CF(L_6, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5* L_7 = V_0;
				NullCheck(L_7);
				bool L_8;
				L_8 = StreamOperationAsyncResult_get_ProcessCompletedOperationInCallback_m8470600DA8B333697D8129A0D3F1AAA66D146F41_inline(L_7, NULL);
				if (L_8)
				{
					goto IL_0048_1;
				}
			}
			{
				StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5* L_9 = V_0;
				NullCheck(L_9);
				StreamOperationAsyncResult_ProcessCompletedOperation_m40E4883B3BAF7C60094786695F9E4A154DE3C055(L_9, NULL);
			}

IL_0048_1:
			{
				StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5* L_10 = V_0;
				NullCheck(L_10);
				bool L_11;
				L_11 = StreamOperationAsyncResult_get_HasError_m496A745E349A4B25765F291FE07008844EC4C903(L_10, NULL);
				if (!L_11)
				{
					goto IL_005c_1;
				}
			}
			{
				StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5* L_12 = V_0;
				NullCheck(L_12);
				StreamOperationAsyncResult_CloseStreamOperation_m7EDC8353FDD660F2FEC14D20F92A6B3287DF72CF(L_12, NULL);
				StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5* L_13 = V_0;
				NullCheck(L_13);
				StreamOperationAsyncResult_ThrowCachedError_m045627B786B647E31F4140BF2C6A902AD52E53B2(L_13, NULL);
			}

IL_005c_1:
			{
				goto IL_0065;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0065:
	{
		return;
	}
}
// System.Threading.Tasks.Task System.IO.WinRtToNetFxStreamAdapter::WriteAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WinRtToNetFxStreamAdapter_WriteAsync_mD51FF953F06E046D23A61479F2FE6E49229BD8D8 (WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_offset, int32_t ___2_count, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284_m717FCA40D60416774137E427B0386318EFF9E186_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeSystemExtensions_AsTask_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m06B407572D6562F6F155E1B0A322B1AE1B5E7D0E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_buffer;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC263EA29ADF3548CFEBC57B532EED28451A56C10)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_WriteAsync_mD51FF953F06E046D23A61479F2FE6E49229BD8D8_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___1_offset;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_WriteAsync_mD51FF953F06E046D23A61479F2FE6E49229BD8D8_RuntimeMethod_var)));
	}

IL_001d:
	{
		int32_t L_4 = ___2_count;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_WriteAsync_mD51FF953F06E046D23A61479F2FE6E49229BD8D8_RuntimeMethod_var)));
	}

IL_002c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_buffer;
		NullCheck(L_6);
		int32_t L_7 = ___1_offset;
		int32_t L_8 = ___2_count;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))) >= ((int32_t)L_8)))
		{
			goto IL_003f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBDD1D563FA17E9B82D37BD73BEA7DE8AF3BFF909)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WinRtToNetFxStreamAdapter_WriteAsync_mD51FF953F06E046D23A61479F2FE6E49229BD8D8_RuntimeMethod_var)));
	}

IL_003f:
	{
		RuntimeObject* L_10;
		L_10 = WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284_m717FCA40D60416774137E427B0386318EFF9E186(__this, WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284_m717FCA40D60416774137E427B0386318EFF9E186_RuntimeMethod_var);
		WinRtToNetFxStreamAdapter_EnsureCanWrite_m2622BF473755E46C831CB010D4961F7BBD6DAAFD(__this, NULL);
		CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3((&___3_cancellationToken), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___0_buffer;
		int32_t L_12 = ___1_offset;
		int32_t L_13 = ___2_count;
		RuntimeObject* L_14;
		L_14 = WindowsRuntimeBufferExtensions_AsBuffer_m8A0EB9B2849FF09CADAA2F875357CD5D873EAE9E(L_11, L_12, L_13, NULL);
		V_0 = L_14;
		RuntimeObject* L_15 = V_0;
		NullCheck(L_10);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32> Windows.Storage.Streams.IOutputStream::WriteAsync(Windows.Storage.Streams.IBuffer) */, IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284_il2cpp_TypeInfo_var, L_10, L_15);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_17 = ___3_cancellationToken;
		Task_1_t9BFF20A5BC78A3DB3701691B789BBBFB88555060* L_18;
		L_18 = WindowsRuntimeSystemExtensions_AsTask_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m06B407572D6562F6F155E1B0A322B1AE1B5E7D0E(L_16, L_17, WindowsRuntimeSystemExtensions_AsTask_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m06B407572D6562F6F155E1B0A322B1AE1B5E7D0E_RuntimeMethod_var);
		return L_18;
	}
}
// System.Void System.IO.WinRtToNetFxStreamAdapter::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRtToNetFxStreamAdapter_Write_mABF88E63A37628AF797B063C3C8510D35D225ADC (WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_buffer;
		int32_t L_1 = ___1_offset;
		int32_t L_2 = ___2_count;
		RuntimeObject* L_3;
		L_3 = WinRtToNetFxStreamAdapter_BeginWrite_m1FDE8E7AF654937E142825D525D95CE85A4172B9(__this, L_0, L_1, L_2, (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C*)NULL, NULL, (bool)1, NULL);
		V_0 = L_3;
		RuntimeObject* L_4 = V_0;
		VirtualActionInvoker1< RuntimeObject* >::Invoke(29 /* System.Void System.IO.Stream::EndWrite(System.IAsyncResult) */, __this, L_4);
		return;
	}
}
// System.Void System.IO.WinRtToNetFxStreamAdapter::WriteByte(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRtToNetFxStreamAdapter_WriteByte_m469A3DDDF4B28D15EA1C9040A4B1D335F5AA29D9 (WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* __this, uint8_t ___0_value, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = WinRtToNetFxStreamAdapter_get_OneByteBuffer_m288CD9E724B4A10CD143C1EF06C23E33B316D988(__this, NULL);
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		uint8_t L_2 = ___0_value;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(37 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, __this, L_3, 0, 1);
		return;
	}
}
// System.Void System.IO.WinRtToNetFxStreamAdapter::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinRtToNetFxStreamAdapter_Flush_m23B2969C54AA142937A81811EB20F27F440237DE (WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamFlushAsyncResult_t04C0AAEDCD3CB5F458A11C4E275F2577786A8103_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284_m717FCA40D60416774137E427B0386318EFF9E186_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	StreamFlushAsyncResult_t04C0AAEDCD3CB5F458A11C4E275F2577786A8103* V_1 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284_m717FCA40D60416774137E427B0386318EFF9E186(__this, WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284_m717FCA40D60416774137E427B0386318EFF9E186_RuntimeMethod_var);
		V_0 = L_0;
		bool L_1 = __this->____canWrite_8;
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* Windows.Foundation.IAsyncOperation`1<System.Boolean> Windows.Storage.Streams.IOutputStream::FlushAsync() */, IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284_il2cpp_TypeInfo_var, L_2);
		StreamFlushAsyncResult_t04C0AAEDCD3CB5F458A11C4E275F2577786A8103* L_4 = (StreamFlushAsyncResult_t04C0AAEDCD3CB5F458A11C4E275F2577786A8103*)il2cpp_codegen_object_new(StreamFlushAsyncResult_t04C0AAEDCD3CB5F458A11C4E275F2577786A8103_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		StreamFlushAsyncResult__ctor_m1A20179746FD6C2C0819FB47226D1061277738B1(L_4, L_3, (bool)0, NULL);
		V_1 = L_4;
		StreamFlushAsyncResult_t04C0AAEDCD3CB5F458A11C4E275F2577786A8103* L_5 = V_1;
		NullCheck(L_5);
		StreamOperationAsyncResult_Wait_m0B398079EB6A2B147CE10149B4E1F0A672CFB07D(L_5, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003f:
			{// begin finally (depth: 1)
				StreamFlushAsyncResult_t04C0AAEDCD3CB5F458A11C4E275F2577786A8103* L_6 = V_1;
				NullCheck(L_6);
				StreamOperationAsyncResult_CloseStreamOperation_m7EDC8353FDD660F2FEC14D20F92A6B3287DF72CF(L_6, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				StreamFlushAsyncResult_t04C0AAEDCD3CB5F458A11C4E275F2577786A8103* L_7 = V_1;
				NullCheck(L_7);
				StreamOperationAsyncResult_ProcessCompletedOperation_m40E4883B3BAF7C60094786695F9E4A154DE3C055(L_7, NULL);
				StreamFlushAsyncResult_t04C0AAEDCD3CB5F458A11C4E275F2577786A8103* L_8 = V_1;
				NullCheck(L_8);
				bool L_9;
				L_9 = StreamOperationAsyncResult_get_HasError_m496A745E349A4B25765F291FE07008844EC4C903(L_8, NULL);
				if (!L_9)
				{
					goto IL_003d_1;
				}
			}
			{
				StreamFlushAsyncResult_t04C0AAEDCD3CB5F458A11C4E275F2577786A8103* L_10 = V_1;
				NullCheck(L_10);
				StreamOperationAsyncResult_CloseStreamOperation_m7EDC8353FDD660F2FEC14D20F92A6B3287DF72CF(L_10, NULL);
				StreamFlushAsyncResult_t04C0AAEDCD3CB5F458A11C4E275F2577786A8103* L_11 = V_1;
				NullCheck(L_11);
				StreamOperationAsyncResult_ThrowCachedError_m045627B786B647E31F4140BF2C6A902AD52E53B2(L_11, NULL);
			}

IL_003d_1:
			{
				goto IL_0046;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0046:
	{
		return;
	}
}
// System.Threading.Tasks.Task System.IO.WinRtToNetFxStreamAdapter::FlushAsync(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WinRtToNetFxStreamAdapter_FlushAsync_m7FF68A43CB3B388517D544D302CC73CFF40F6F50 (WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284_m717FCA40D60416774137E427B0386318EFF9E186_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeSystemExtensions_AsTask_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAFEA206F914571AA59814865AAAE5729B5572B5A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284_m717FCA40D60416774137E427B0386318EFF9E186(__this, WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284_m717FCA40D60416774137E427B0386318EFF9E186_RuntimeMethod_var);
		V_0 = L_0;
		bool L_1 = __this->____canWrite_8;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_2;
		L_2 = Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline(NULL);
		return L_2;
	}

IL_0015:
	{
		CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3((&___0_cancellationToken), NULL);
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* Windows.Foundation.IAsyncOperation`1<System.Boolean> Windows.Storage.Streams.IOutputStream::FlushAsync() */, IOutputStream_t40198F11F08A63FACF94FC1BDCD2A01690CC9284_il2cpp_TypeInfo_var, L_3);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = ___0_cancellationToken;
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_6;
		L_6 = WindowsRuntimeSystemExtensions_AsTask_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAFEA206F914571AA59814865AAAE5729B5572B5A(L_4, L_5, WindowsRuntimeSystemExtensions_AsTask_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAFEA206F914571AA59814865AAAE5729B5572B5A_RuntimeMethod_var);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<System.Int32> System.IO.WinRtToNetFxStreamAdapter::ReadAsyncInternal(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* WinRtToNetFxStreamAdapter_ReadAsyncInternal_m59ED37E7560D24D0953E41D43D096560CEA7F378 (WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_offset, int32_t ___2_count, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m0E49F68E6F39F0BD87C360F456EBC20310B732BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CReadAsyncInternalU3Ed__43_t30E8CDC69A0B1E1AE4981CFFD05F1CF764DD6968_m13E673E00BEFF7E47A59726BACC49256CB40AB26_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m2DCDBC59910811D107353C5752AD58B28C2D97FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CReadAsyncInternalU3Ed__43_t30E8CDC69A0B1E1AE4981CFFD05F1CF764DD6968 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019 L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m0E49F68E6F39F0BD87C360F456EBC20310B732BE(AsyncTaskMethodBuilder_1_Create_m0E49F68E6F39F0BD87C360F456EBC20310B732BE_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_buffer;
		(&V_0)->___buffer_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___buffer_3), (void*)L_1);
		int32_t L_2 = ___1_offset;
		(&V_0)->___offset_4 = L_2;
		int32_t L_3 = ___2_count;
		(&V_0)->___count_5 = L_3;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = ___3_cancellationToken;
		(&V_0)->___cancellationToken_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___cancellationToken_6))->____source_0), (void*)NULL);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* L_5 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CReadAsyncInternalU3Ed__43_t30E8CDC69A0B1E1AE4981CFFD05F1CF764DD6968_m13E673E00BEFF7E47A59726BACC49256CB40AB26(L_5, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CReadAsyncInternalU3Ed__43_t30E8CDC69A0B1E1AE4981CFFD05F1CF764DD6968_m13E673E00BEFF7E47A59726BACC49256CB40AB26_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* L_6 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_7;
		L_7 = AsyncTaskMethodBuilder_1_get_Task_m2DCDBC59910811D107353C5752AD58B28C2D97FE(L_6, AsyncTaskMethodBuilder_1_get_Task_m2DCDBC59910811D107353C5752AD58B28C2D97FE_RuntimeMethod_var);
		return L_7;
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
// System.Void System.IO.WinRtToNetFxStreamAdapter/<ReadAsyncInternal>d__43::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadAsyncInternalU3Ed__43_MoveNext_m76456C1B1F1911A9C8D64D552B2A287605F7F95E (U3CReadAsyncInternalU3Ed__43_t30E8CDC69A0B1E1AE4981CFFD05F1CF764DD6968* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t59FDFE1F6491ED41D3F1F28C14509DFEAC2D0C60_TisU3CReadAsyncInternalU3Ed__43_t30E8CDC69A0B1E1AE4981CFFD05F1CF764DD6968_m9875CEDF56A98DCB760FB86FDEBBE83BD450CD3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mC4BAC830514CDB105730FF11F7744A4424A4009B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaitable_1_GetAwaiter_m914DC775D703ABDC3AA070FDEC45F4777DF21040_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_GetResult_mD346529D92FA68BABCE8F83FFA3B7066E4A2755D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfiguredTaskAwaiter_get_IsCompleted_mF6F9BD383D1A869D82F90ED1B9C489D4C4E3689A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ConfigureAwait_m16D57A2BDD33A3BD596FDCDE674D2E8996BC3CEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71_m9C3503831C27EAF79D7E14C9F404094C101B2CF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowsRuntimeSystemExtensions_AsTask_TisIBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mEDAB9858D96E4B4787ADDA22E002B28DA627CD9B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	ConfiguredTaskAwaiter_t59FDFE1F6491ED41D3F1F28C14509DFEAC2D0C60 V_5;
	memset((&V_5), 0, sizeof(V_5));
	ConfiguredTaskAwaitable_1_t321A8DE5D259177E3DFE3069C6DC2CCD6F00761A V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0018_1;
			}
		}
		{
			WinRtToNetFxStreamAdapter_tBEAE6FED1E85C5112CC31735818029E7737FB25D* L_3 = V_1;
			NullCheck(L_3);
			RuntimeObject* L_4;
			L_4 = WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71_m9C3503831C27EAF79D7E14C9F404094C101B2CF6(L_3, WinRtToNetFxStreamAdapter_EnsureNotDisposed_TisIInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71_m9C3503831C27EAF79D7E14C9F404094C101B2CF6_RuntimeMethod_var);
			V_3 = L_4;
		}

IL_0018_1:
		{
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_5 = V_0;
				if (!L_5)
				{
					goto IL_0095_2;
				}
			}
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___buffer_3;
				int32_t L_7 = __this->___offset_4;
				int32_t L_8 = __this->___count_5;
				RuntimeObject* L_9;
				L_9 = WindowsRuntimeBufferExtensions_AsBuffer_m8A0EB9B2849FF09CADAA2F875357CD5D873EAE9E(L_6, L_7, L_8, NULL);
				__this->___U3CuserBufferU3E5__2_7 = L_9;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CuserBufferU3E5__2_7), (void*)L_9);
				RuntimeObject* L_10 = V_3;
				RuntimeObject* L_11 = __this->___U3CuserBufferU3E5__2_7;
				int32_t L_12 = __this->___count_5;
				NullCheck(L_10);
				RuntimeObject* L_13;
				L_13 = InterfaceFuncInvoker3< RuntimeObject*, RuntimeObject*, uint32_t, uint32_t >::Invoke(0 /* Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32> Windows.Storage.Streams.IInputStream::ReadAsync(Windows.Storage.Streams.IBuffer,System.UInt32,Windows.Storage.Streams.InputStreamOptions) */, IInputStream_tDC35C23AD45F348D642B40B84F54B80735521E71_il2cpp_TypeInfo_var, L_10, L_11, L_12, 1);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_14 = __this->___cancellationToken_6;
				Task_1_t34C529965D1945277B370D1A5EEB7D54EADF44F5* L_15;
				L_15 = WindowsRuntimeSystemExtensions_AsTask_TisIBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mEDAB9858D96E4B4787ADDA22E002B28DA627CD9B(L_13, L_14, WindowsRuntimeSystemExtensions_AsTask_TisIBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mEDAB9858D96E4B4787ADDA22E002B28DA627CD9B_RuntimeMethod_var);
				NullCheck(L_15);
				ConfiguredTaskAwaitable_1_t321A8DE5D259177E3DFE3069C6DC2CCD6F00761A L_16;
				L_16 = Task_1_ConfigureAwait_m16D57A2BDD33A3BD596FDCDE674D2E8996BC3CEC(L_15, (bool)0, Task_1_ConfigureAwait_m16D57A2BDD33A3BD596FDCDE674D2E8996BC3CEC_RuntimeMethod_var);
				V_6 = L_16;
				ConfiguredTaskAwaiter_t59FDFE1F6491ED41D3F1F28C14509DFEAC2D0C60 L_17;
				L_17 = ConfiguredTaskAwaitable_1_GetAwaiter_m914DC775D703ABDC3AA070FDEC45F4777DF21040_inline((&V_6), ConfiguredTaskAwaitable_1_GetAwaiter_m914DC775D703ABDC3AA070FDEC45F4777DF21040_RuntimeMethod_var);
				V_5 = L_17;
				bool L_18;
				L_18 = ConfiguredTaskAwaiter_get_IsCompleted_mF6F9BD383D1A869D82F90ED1B9C489D4C4E3689A((&V_5), ConfiguredTaskAwaiter_get_IsCompleted_mF6F9BD383D1A869D82F90ED1B9C489D4C4E3689A_RuntimeMethod_var);
				if (L_18)
				{
					goto IL_00b2_2;
				}
			}
			{
				int32_t L_19 = 0;
				V_0 = L_19;
				__this->___U3CU3E1__state_0 = L_19;
				ConfiguredTaskAwaiter_t59FDFE1F6491ED41D3F1F28C14509DFEAC2D0C60 L_20 = V_5;
				__this->___U3CU3Eu__1_8 = L_20;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_8))->___m_task_0), (void*)NULL);
				AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* L_21 = (&__this->___U3CU3Et__builder_1);
				AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t59FDFE1F6491ED41D3F1F28C14509DFEAC2D0C60_TisU3CReadAsyncInternalU3Ed__43_t30E8CDC69A0B1E1AE4981CFFD05F1CF764DD6968_m9875CEDF56A98DCB760FB86FDEBBE83BD450CD3A(L_21, (&V_5), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t59FDFE1F6491ED41D3F1F28C14509DFEAC2D0C60_TisU3CReadAsyncInternalU3Ed__43_t30E8CDC69A0B1E1AE4981CFFD05F1CF764DD6968_m9875CEDF56A98DCB760FB86FDEBBE83BD450CD3A_RuntimeMethod_var);
				goto IL_0115;
			}

IL_0095_2:
			{
				ConfiguredTaskAwaiter_t59FDFE1F6491ED41D3F1F28C14509DFEAC2D0C60 L_22 = __this->___U3CU3Eu__1_8;
				V_5 = L_22;
				ConfiguredTaskAwaiter_t59FDFE1F6491ED41D3F1F28C14509DFEAC2D0C60* L_23 = (&__this->___U3CU3Eu__1_8);
				il2cpp_codegen_initobj(L_23, sizeof(ConfiguredTaskAwaiter_t59FDFE1F6491ED41D3F1F28C14509DFEAC2D0C60));
				int32_t L_24 = (-1);
				V_0 = L_24;
				__this->___U3CU3E1__state_0 = L_24;
			}

IL_00b2_2:
			{
				RuntimeObject* L_25;
				L_25 = ConfiguredTaskAwaiter_GetResult_mD346529D92FA68BABCE8F83FFA3B7066E4A2755D((&V_5), ConfiguredTaskAwaiter_GetResult_mD346529D92FA68BABCE8F83FFA3B7066E4A2755D_RuntimeMethod_var);
				V_4 = L_25;
				RuntimeObject* L_26 = V_4;
				if (L_26)
				{
					goto IL_00c3_2;
				}
			}
			{
				V_2 = 0;
				goto IL_0101;
			}

IL_00c3_2:
			{
				RuntimeObject* L_27 = __this->___U3CuserBufferU3E5__2_7;
				RuntimeObject* L_28 = V_4;
				WinRtIOHelper_EnsureResultsInUserBuffer_m38C0A807EAAB9DA37F6BB34A0A57D298CE62992E(L_27, L_28, NULL);
				RuntimeObject* L_29 = V_4;
				NullCheck(L_29);
				uint32_t L_30;
				L_30 = InterfaceFuncInvoker0< uint32_t >::Invoke(1 /* System.UInt32 Windows.Storage.Streams.IBuffer::get_Length() */, IBuffer_t90288BDCFBC645943B1DFD6DA30EDC167F42E127_il2cpp_TypeInfo_var, L_29);
				V_2 = L_30;
				goto IL_0101;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00da_1;
			}
			throw e;
		}

CATCH_00da_1:
		{// begin catch(System.Exception)
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_31;
			L_31 = WinRtIOHelper_NativeExceptionToIOExceptionInfo_mB3A83A47FB194066EB5853EEA3C94FBD0492E4EA(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
			NullCheck(L_31);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_31, NULL);
			V_2 = 0;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0101;
		}// end catch (depth: 2)
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e8;
		}
		throw e;
	}

CATCH_00e8:
	{// begin catch(System.Exception)
		V_7 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* L_32 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_33 = V_7;
		AsyncTaskMethodBuilder_1_SetException_mB7C693CAA9243017E03D801A487E0EA9B6AAD575(L_32, L_33, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_mB7C693CAA9243017E03D801A487E0EA9B6AAD575_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0115;
	}// end catch (depth: 1)

IL_0101:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* L_34 = (&__this->___U3CU3Et__builder_1);
		int32_t L_35 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_mC4BAC830514CDB105730FF11F7744A4424A4009B(L_34, L_35, AsyncTaskMethodBuilder_1_SetResult_mC4BAC830514CDB105730FF11F7744A4424A4009B_RuntimeMethod_var);
	}

IL_0115:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CReadAsyncInternalU3Ed__43_MoveNext_m76456C1B1F1911A9C8D64D552B2A287605F7F95E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CReadAsyncInternalU3Ed__43_t30E8CDC69A0B1E1AE4981CFFD05F1CF764DD6968* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CReadAsyncInternalU3Ed__43_t30E8CDC69A0B1E1AE4981CFFD05F1CF764DD6968*>(__this + _offset);
	U3CReadAsyncInternalU3Ed__43_MoveNext_m76456C1B1F1911A9C8D64D552B2A287605F7F95E(_thisAdjusted, method);
}
// System.Void System.IO.WinRtToNetFxStreamAdapter/<ReadAsyncInternal>d__43::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadAsyncInternalU3Ed__43_SetStateMachine_mE164AC648188C9DD886DDB935AC0883FB455D1C2 (U3CReadAsyncInternalU3Ed__43_t30E8CDC69A0B1E1AE4981CFFD05F1CF764DD6968* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mFA173982D2C309A46F4285F60DC4FE0DC659F32C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tF0BDBC54D5EB433C1205550D0F9819F43C9D4019* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_1_SetStateMachine_mFA173982D2C309A46F4285F60DC4FE0DC659F32C(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_mFA173982D2C309A46F4285F60DC4FE0DC659F32C_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CReadAsyncInternalU3Ed__43_SetStateMachine_mE164AC648188C9DD886DDB935AC0883FB455D1C2_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CReadAsyncInternalU3Ed__43_t30E8CDC69A0B1E1AE4981CFFD05F1CF764DD6968* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CReadAsyncInternalU3Ed__43_t30E8CDC69A0B1E1AE4981CFFD05F1CF764DD6968*>(__this + _offset);
	U3CReadAsyncInternalU3Ed__43_SetStateMachine_mE164AC648188C9DD886DDB935AC0883FB455D1C2(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline (double* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		double L_0 = *((double*)__this);
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline(L_0, NULL);
		V_0 = L_1;
		int64_t L_2 = V_0;
		if ((((int64_t)((int64_t)(((int64_t)il2cpp_codegen_subtract(L_2, ((int64_t)1)))&((int64_t)(std::numeric_limits<int64_t>::max)())))) < ((int64_t)((int64_t)9218868437227405312LL))))
		{
			goto IL_002d;
		}
	}
	{
		int64_t L_3 = V_0;
		V_0 = ((int64_t)(L_3&((int64_t)9218868437227405312LL)));
	}

IL_002d:
	{
		int64_t L_4 = V_0;
		int64_t L_5 = V_0;
		return ((int32_t)(((int32_t)L_4)^((int32_t)((int64_t)(L_5>>((int32_t)32))))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_NumberDecimalSeparator_m7413FA8739F3FA6F5D61B54331DBF3232FC6BFC7_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___numberDecimalSeparator_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_0 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticFields*)il2cpp_codegen_static_fields_for(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var))->___s_defaultTaskScheduler_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields*)il2cpp_codegen_static_fields_for(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var))->___U3CCompletedTaskU3Ek__BackingField_32;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncActionCompletedHandler_Invoke_mC17CE275AEA1DD37BD4F15849A18C43C11BB880C_inline (AsyncActionCompletedHandler_tC851091B8156847FF3756ADAC162533166114B39* __this, RuntimeObject* ___0_asyncInfo, int32_t ___1_asyncStatus, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_asyncInfo, ___1_asyncStatus, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___0_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_value;
		*__this = ((intptr_t)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* ExceptionDispatchInfo_get_SourceException_m981DC7F90598BE65BD4FA1A8340025A3A7CC3DBE_inline (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* __this, const RuntimeMethod* method) 
{
	{
		Exception_t* L_0 = __this->___m_Exception_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncCallback_Invoke_mA85DEAE969B1D0FD97E934DC39439E89D7553910_inline (AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* __this, RuntimeObject* ___0_ar, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_ar, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline (ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C* __this, const RuntimeMethod* method) 
{
	{
		ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_0 = __this->___m_configuredTaskAwaiter_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BufferedStream_get_BufferSize_m938C648886EAD1897F9689C9D0F2A1854E4A1973_inline (BufferedStream_t9D0E8599EB0482BE778F25C62AA8954A68D94BEE* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____bufferSize_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* NetFxToWinRtStreamAdapter_GetManagedStream_m3CEDE8948C3D330E0BBB900C005A1A2CBD60FDBE_inline (NetFxToWinRtStreamAdapter_t59A0CD17C5212BFF3544C2EB44DF22BAE6358737* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->____managedStream_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* BufferedStream_get_UnderlyingStream_m85027B2FF4537B66648311CE327D7085FFDBBDA9_inline (BufferedStream_t9D0E8599EB0482BE778F25C62AA8954A68D94BEE* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->____stream_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool StreamOperationAsyncResult_get_ProcessCompletedOperationInCallback_m8470600DA8B333697D8129A0D3F1AAA66D146F41_inline (StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____processCompletedOperationInCallback_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t StreamOperationAsyncResult_get_BytesCompleted_m39550759FF8B759BFD58B476BA8D509EF454A7DE_inline (StreamOperationAsyncResult_t1912A06CF3A2DABEF670B849F8B6DE94A360DCA5* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->____bytesCompleted_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* TaskToAsyncInfoAdapter_4_get_CancelTokenSource_m8D55A6E3369CE9C20D10F59C66B835338DF0D25E_gshared_inline (TaskToAsyncInfoAdapter_4_tD4A410D665454F797F89C76CF816D5A006A43620* __this, const RuntimeMethod* method) 
{
	{
		CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_0 = (CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B*)__this->____cancelTokenSource_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_tB82A632CF7C85E91A9F7491058C7BDF8F744E211* TaskCompletionSource_1_get_Task_m9B716A966057DE59BCF359AED609AEDA36EBECBE_gshared_inline (TaskCompletionSource_1_t2EED03A6AEF435DC304FDCC21ACC7EF6EBED79E7* __this, const RuntimeMethod* method) 
{
	{
		Task_1_tB82A632CF7C85E91A9F7491058C7BDF8F744E211* L_0 = (Task_1_tB82A632CF7C85E91A9F7491058C7BDF8F744E211*)__this->____task_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____offset_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)__this->____array_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80 ConfiguredTaskAwaitable_1_GetAwaiter_m7A77B1981FEC19CC7E1570EDC3F16AC5C14B4439_gshared_inline (ConfiguredTaskAwaitable_1_t5186C81524388C1718E9AC37792D8771A443417A* __this, const RuntimeMethod* method) 
{
	{
		ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80 L_0 = (ConfiguredTaskAwaiter_t8FC486401D1951F2426478F2050EE290197B6E80)__this->___m_configuredTaskAwaiter_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2 ConfiguredTaskAwaitable_1_GetAwaiter_m10364C3B0A904803E890B2D75674665F986BDAB2_gshared_inline (ConfiguredTaskAwaitable_1_t97C129EA63015240E6F9E767F4A120CC9122FEF8* __this, const RuntimeMethod* method) 
{
	{
		ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2 L_0 = (ConfiguredTaskAwaiter_t28A5A60199BBE7F1F31159301DD211EFDCF955E2)__this->___m_configuredTaskAwaiter_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline (double ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = *((int64_t*)((uintptr_t)(&___0_value)));
		return L_0;
	}
}
