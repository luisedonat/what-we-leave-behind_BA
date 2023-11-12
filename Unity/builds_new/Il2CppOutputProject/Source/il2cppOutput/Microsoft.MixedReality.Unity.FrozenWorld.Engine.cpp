#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>



// System.String
struct String_t;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t1C293485F7CD4F10DD5FC0F8F1AA616F3A93746F 
{
};

// Microsoft.MixedReality.FrozenWorld.Engine.Engine
struct Engine_t58A67BDAD3591C070773EC786C525881AEAE420F  : public RuntimeObject
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

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
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

// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Deserialize_Stream
struct FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97 
{
	// System.Int32 Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Deserialize_Stream::handle
	int32_t ___handle_0;
	// System.Int32 Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Deserialize_Stream::numBytesRequired
	int32_t ___numBytesRequired_1;
	// System.Single Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Deserialize_Stream::time
	float ___time_2;
	// System.Boolean Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Deserialize_Stream::includePersistent
	bool ___includePersistent_3;
	// System.Boolean Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Deserialize_Stream::includeTransient
	bool ___includeTransient_4;
};
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Deserialize_Stream
struct FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97_marshaled_pinvoke
{
	int32_t ___handle_0;
	int32_t ___numBytesRequired_1;
	float ___time_2;
	int32_t ___includePersistent_3;
	int32_t ___includeTransient_4;
};
// Native definition for COM marshalling of Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Deserialize_Stream
struct FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97_marshaled_com
{
	int32_t ___handle_0;
	int32_t ___numBytesRequired_1;
	float ___time_2;
	int32_t ___includePersistent_3;
	int32_t ___includeTransient_4;
};

// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Edge
struct FrozenWorld_Edge_t92E8E9CCCA5277A09D6DFE54E6FAEA27D6D1FDC2 
{
	// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_AnchorId Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Edge::anchorId1
	uint64_t ___anchorId1_0;
	// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_AnchorId Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Edge::anchorId2
	uint64_t ___anchorId2_1;
};

// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Metrics
struct FrozenWorld_Metrics_tCDD1212F873FF708450EBB7D4ECCF15F89708369 
{
	// System.Boolean Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Metrics::refitMergeIndicated
	bool ___refitMergeIndicated_0;
	// System.Boolean Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Metrics::refitRefreezeIndicated
	bool ___refitRefreezeIndicated_1;
	// System.Int32 Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Metrics::numTrackableFragments
	int32_t ___numTrackableFragments_2;
	// System.Int32 Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Metrics::numVisualSupports
	int32_t ___numVisualSupports_3;
	// System.Int32 Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Metrics::numVisualSupportAnchors
	int32_t ___numVisualSupportAnchors_4;
	// System.Int32 Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Metrics::numIgnoredSupports
	int32_t ___numIgnoredSupports_5;
	// System.Int32 Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Metrics::numIgnoredSupportAnchors
	int32_t ___numIgnoredSupportAnchors_6;
	// System.Single Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Metrics::maxLinearDeviation
	float ___maxLinearDeviation_7;
	// System.Single Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Metrics::maxLateralDeviation
	float ___maxLateralDeviation_8;
	// System.Single Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Metrics::maxAngularDeviation
	float ___maxAngularDeviation_9;
	// System.Single Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Metrics::maxLinearDeviationInFrustum
	float ___maxLinearDeviationInFrustum_10;
	// System.Single Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Metrics::maxLateralDeviationInFrustum
	float ___maxLateralDeviationInFrustum_11;
	// System.Single Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Metrics::maxAngularDeviationInFrustum
	float ___maxAngularDeviationInFrustum_12;
};
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Metrics
struct FrozenWorld_Metrics_tCDD1212F873FF708450EBB7D4ECCF15F89708369_marshaled_pinvoke
{
	int32_t ___refitMergeIndicated_0;
	int32_t ___refitRefreezeIndicated_1;
	int32_t ___numTrackableFragments_2;
	int32_t ___numVisualSupports_3;
	int32_t ___numVisualSupportAnchors_4;
	int32_t ___numIgnoredSupports_5;
	int32_t ___numIgnoredSupportAnchors_6;
	float ___maxLinearDeviation_7;
	float ___maxLateralDeviation_8;
	float ___maxAngularDeviation_9;
	float ___maxLinearDeviationInFrustum_10;
	float ___maxLateralDeviationInFrustum_11;
	float ___maxAngularDeviationInFrustum_12;
};
// Native definition for COM marshalling of Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Metrics
struct FrozenWorld_Metrics_tCDD1212F873FF708450EBB7D4ECCF15F89708369_marshaled_com
{
	int32_t ___refitMergeIndicated_0;
	int32_t ___refitRefreezeIndicated_1;
	int32_t ___numTrackableFragments_2;
	int32_t ___numVisualSupports_3;
	int32_t ___numVisualSupportAnchors_4;
	int32_t ___numIgnoredSupports_5;
	int32_t ___numIgnoredSupportAnchors_6;
	float ___maxLinearDeviation_7;
	float ___maxLateralDeviation_8;
	float ___maxAngularDeviation_9;
	float ___maxLinearDeviationInFrustum_10;
	float ___maxLateralDeviationInFrustum_11;
	float ___maxAngularDeviationInFrustum_12;
};

// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Quaternion
struct FrozenWorld_Quaternion_t46640A32B0C1A1F7DE0B24C52C77BC77BBD08D77 
{
	// System.Single Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Quaternion::x
	float ___x_0;
	// System.Single Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Quaternion::y
	float ___y_1;
	// System.Single Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Quaternion::z
	float ___z_2;
	// System.Single Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Quaternion::w
	float ___w_3;
};

// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Serialize_Stream
struct FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA 
{
	// System.Int32 Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Serialize_Stream::handle
	int32_t ___handle_0;
	// System.Int32 Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Serialize_Stream::numBytesBuffered
	int32_t ___numBytesBuffered_1;
	// System.Single Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Serialize_Stream::time
	float ___time_2;
	// System.Boolean Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Serialize_Stream::includePersistent
	bool ___includePersistent_3;
	// System.Boolean Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Serialize_Stream::includeTransient
	bool ___includeTransient_4;
};
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Serialize_Stream
struct FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA_marshaled_pinvoke
{
	int32_t ___handle_0;
	int32_t ___numBytesBuffered_1;
	float ___time_2;
	int32_t ___includePersistent_3;
	int32_t ___includeTransient_4;
};
// Native definition for COM marshalling of Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Serialize_Stream
struct FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA_marshaled_com
{
	int32_t ___handle_0;
	int32_t ___numBytesBuffered_1;
	float ___time_2;
	int32_t ___includePersistent_3;
	int32_t ___includeTransient_4;
};

// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Vector
struct FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC 
{
	// System.Single Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Vector::x
	float ___x_0;
	// System.Single Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Vector::y
	float ___y_1;
	// System.Single Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Vector::z
	float ___z_2;
};

// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_AttachmentPoint
struct FrozenWorld_AttachmentPoint_t4CB4EFDE32610005AEFB6EF9A780F13E436B05B4 
{
	// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_AnchorId Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_AttachmentPoint::anchorId
	uint64_t ___anchorId_0;
	// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Vector Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_AttachmentPoint::locationFromAnchor
	FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC ___locationFromAnchor_1;
};

// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Transform
struct FrozenWorld_Transform_t3A65C9065FE00673EA20EB85BCCD14498FD326DF 
{
	// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Vector Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Transform::position
	FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC ___position_0;
	// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Quaternion Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Transform::rotation
	FrozenWorld_Quaternion_t46640A32B0C1A1F7DE0B24C52C77BC77BBD08D77 ___rotation_1;
};

// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Anchor
struct FrozenWorld_Anchor_t8321806C71F33C6A0A958129794BA9E66DB298A4 
{
	// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_AnchorId Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Anchor::anchorId
	uint64_t ___anchorId_0;
	// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_FragmentId Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Anchor::fragmentId
	uint64_t ___fragmentId_1;
	// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Transform Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Anchor::transform
	FrozenWorld_Transform_t3A65C9065FE00673EA20EB85BCCD14498FD326DF ___transform_2;
};

// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_RefitMerge_AdjustedFragment
struct FrozenWorld_RefitMerge_AdjustedFragment_t9DE8705873E4EC446E515400B5799DB7E44791B6 
{
	// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_FragmentId Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_RefitMerge_AdjustedFragment::fragmentId
	uint64_t ___fragmentId_0;
	// System.Int32 Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_RefitMerge_AdjustedFragment::numAdjustedAnchors
	int32_t ___numAdjustedAnchors_1;
	// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Transform Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_RefitMerge_AdjustedFragment::adjustment
	FrozenWorld_Transform_t3A65C9065FE00673EA20EB85BCCD14498FD326DF ___adjustment_2;
};

// <Module>

// <Module>

// Microsoft.MixedReality.FrozenWorld.Engine.Engine

// Microsoft.MixedReality.FrozenWorld.Engine.Engine

// System.ValueType

// System.ValueType

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

// System.Int32

// System.Int32

// System.Void

// System.Void

// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Deserialize_Stream

// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Deserialize_Stream

// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Edge

// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Edge

// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Metrics

// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Metrics

// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Quaternion

// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Quaternion

// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Serialize_Stream

// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Serialize_Stream

// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Vector

// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Vector

// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_AttachmentPoint

// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_AttachmentPoint

// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Transform

// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Transform

// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Anchor

// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Anchor

// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_RefitMerge_AdjustedFragment

// Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_RefitMerge_AdjustedFragment
#ifdef __clang__
#pragma clang diagnostic pop
#endif



#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FrozenWorld_GetVersion(uint8_t, int32_t, uint8_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C uint8_t DEFAULT_CALL FrozenWorld_GetError();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FrozenWorld_GetErrorMessage(int32_t, uint8_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL FrozenWorld_Init();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL FrozenWorld_Destroy();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL FrozenWorld_Step_Init();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FrozenWorld_Step_GatherSupports();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL FrozenWorld_Step_AlignSupports();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL FrozenWorld_GetHead(int32_t, FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC*, FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC*, FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL FrozenWorld_SetHead(int32_t, FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC*, FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC*, FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL FrozenWorld_GetAlignment(FrozenWorld_Transform_t3A65C9065FE00673EA20EB85BCCD14498FD326DF*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL FrozenWorld_SetAlignment(FrozenWorld_Transform_t3A65C9065FE00673EA20EB85BCCD14498FD326DF*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL FrozenWorld_SetMostSignificantAnchorId(int32_t, uint64_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL FrozenWorld_GetMostSignificantFragmentId(int32_t, uint64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FrozenWorld_GetNumAnchors(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FrozenWorld_GetAnchors(int32_t, int32_t, FrozenWorld_Anchor_t8321806C71F33C6A0A958129794BA9E66DB298A4*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL FrozenWorld_AddAnchors(int32_t, int32_t, FrozenWorld_Anchor_t8321806C71F33C6A0A958129794BA9E66DB298A4*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C uint8_t DEFAULT_CALL FrozenWorld_RemoveAnchor(int32_t, uint64_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL FrozenWorld_ClearAnchors(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FrozenWorld_GetNumEdges(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL FrozenWorld_AddEdges(int32_t, int32_t, FrozenWorld_Edge_t92E8E9CCCA5277A09D6DFE54E6FAEA27D6D1FDC2*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL FrozenWorld_GetMetrics(FrozenWorld_Metrics_tCDD1212F873FF708450EBB7D4ECCF15F89708369*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL FrozenWorld_Tracking_CreateFromHead(FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC*, FrozenWorld_AttachmentPoint_t4CB4EFDE32610005AEFB6EF9A780F13E436B05B4*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL FrozenWorld_Tracking_CreateFromSpawner(FrozenWorld_AttachmentPoint_t4CB4EFDE32610005AEFB6EF9A780F13E436B05B4*, FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC*, FrozenWorld_AttachmentPoint_t4CB4EFDE32610005AEFB6EF9A780F13E436B05B4*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL FrozenWorld_Tracking_Move(FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC*, FrozenWorld_AttachmentPoint_t4CB4EFDE32610005AEFB6EF9A780F13E436B05B4*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C uint8_t DEFAULT_CALL FrozenWorld_RefitMerge_Init();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL FrozenWorld_RefitMerge_Prepare();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL FrozenWorld_RefitMerge_Apply();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FrozenWorld_RefitMerge_GetNumAdjustedFragments();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FrozenWorld_RefitMerge_GetAdjustedFragments(int32_t, FrozenWorld_RefitMerge_AdjustedFragment_t9DE8705873E4EC446E515400B5799DB7E44791B6*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL FrozenWorld_RefitMerge_GetMergedFragmentId(uint64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C uint8_t DEFAULT_CALL FrozenWorld_RefitRefreeze_Init();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL FrozenWorld_RefitRefreeze_Prepare();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL FrozenWorld_RefitRefreeze_Apply();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FrozenWorld_RefitRefreeze_GetNumAdjustedFragments();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FrozenWorld_RefitRefreeze_GetAdjustedFragmentIds(int32_t, uint64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C uint8_t DEFAULT_CALL FrozenWorld_RefitRefreeze_CalcAdjustment(FrozenWorld_AttachmentPoint_t4CB4EFDE32610005AEFB6EF9A780F13E436B05B4*, FrozenWorld_Transform_t3A65C9065FE00673EA20EB85BCCD14498FD326DF*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL FrozenWorld_RefitRefreeze_GetMergedFragmentId(uint64_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL FrozenWorld_Serialize_Open(FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL FrozenWorld_Serialize_Gather(FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FrozenWorld_Serialize_Read(FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA*, int32_t, uint8_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL FrozenWorld_Serialize_Close(FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL FrozenWorld_Deserialize_Open(FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FrozenWorld_Deserialize_Write(FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97*, int32_t, uint8_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL FrozenWorld_Deserialize_Apply(FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL FrozenWorld_Deserialize_Close(FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97*);
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
// System.Int32 Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_GetVersion(System.Boolean,System.Int32,System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Engine_FrozenWorld_GetVersion_m4AD0C842B4413FE8C5D0AFC4BAB702E1C1764F08 (bool ___0_detail, int32_t ___1_versionBufferSize, uint8_t* ___2_versionOut, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (uint8_t, int32_t, uint8_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 1 + 3 + sizeof(int32_t) + sizeof(uint8_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_GetVersion", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FrozenWorld_GetVersion)(static_cast<uint8_t>(___0_detail), ___1_versionBufferSize, ___2_versionOut);
	#else
	int32_t returnValue = il2cppPInvokeFunc(static_cast<uint8_t>(___0_detail), ___1_versionBufferSize, ___2_versionOut);
	#endif

	return returnValue;
}
// System.Boolean Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_GetError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Engine_FrozenWorld_GetError_mA7228FA4DC3909CB29D1ED93852A3878056B2BF6 (const RuntimeMethod* method) 
{
	typedef uint8_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_GetError", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(FrozenWorld_GetError)();
	#else
	uint8_t returnValue = il2cppPInvokeFunc();
	#endif

	return static_cast<bool>(returnValue);
}
// System.Int32 Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_GetErrorMessage(System.Int32,System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Engine_FrozenWorld_GetErrorMessage_m6BAC150832D0AD8481F7D2A4429606EBCA57F20C (int32_t ___0_messageBufferSize, uint8_t* ___1_messageOut, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, uint8_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(uint8_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_GetErrorMessage", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FrozenWorld_GetErrorMessage)(___0_messageBufferSize, ___1_messageOut);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_messageBufferSize, ___1_messageOut);
	#endif

	return returnValue;
}
// System.Void Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_FrozenWorld_Init_m284ED32CBEC021454152C175F3B3A20BD4544916 (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_Init", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(FrozenWorld_Init)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_FrozenWorld_Destroy_mC81ED005FF772AC57331A6B85238F5BAAFEB7CBE (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_Destroy", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(FrozenWorld_Destroy)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_Step_Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_FrozenWorld_Step_Init_m30F9753AD2343057C6F4BD671795C27992DBDD90 (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_Step_Init", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(FrozenWorld_Step_Init)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Int32 Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_Step_GatherSupports()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Engine_FrozenWorld_Step_GatherSupports_mDEB1B6C961F53B52705DF05A12D1E85787024E3C (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_Step_GatherSupports", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FrozenWorld_Step_GatherSupports)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Void Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_Step_AlignSupports()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_FrozenWorld_Step_AlignSupports_m0D2F322F145BB8E305345BB3BC1A662A7A070246 (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_Step_AlignSupports", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(FrozenWorld_Step_AlignSupports)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_GetHead(Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Snapshot,Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Vector*,Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Vector*,Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Vector*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_FrozenWorld_GetHead_m3BCD45172B0565DA838D63328F2D8350E14C6B72 (int32_t ___0_snapshot, FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC* ___1_headPositionOut, FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC* ___2_headDirectionForwardOut, FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC* ___3_headDirectionUpOut, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC*, FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC*, FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC*) + sizeof(FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC*) + sizeof(FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_GetHead", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(FrozenWorld_GetHead)(___0_snapshot, ___1_headPositionOut, ___2_headDirectionForwardOut, ___3_headDirectionUpOut);
	#else
	il2cppPInvokeFunc(___0_snapshot, ___1_headPositionOut, ___2_headDirectionForwardOut, ___3_headDirectionUpOut);
	#endif

}
// System.Void Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_SetHead(Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Snapshot,Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Vector*,Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Vector*,Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Vector*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_FrozenWorld_SetHead_mE58DCC2AEC430EBEF023709D3CC12CCA33570CCA (int32_t ___0_snapshot, FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC* ___1_headPosition, FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC* ___2_headDirectionForward, FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC* ___3_headDirectionUp, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC*, FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC*, FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC*) + sizeof(FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC*) + sizeof(FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_SetHead", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(FrozenWorld_SetHead)(___0_snapshot, ___1_headPosition, ___2_headDirectionForward, ___3_headDirectionUp);
	#else
	il2cppPInvokeFunc(___0_snapshot, ___1_headPosition, ___2_headDirectionForward, ___3_headDirectionUp);
	#endif

}
// System.Void Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_GetAlignment(Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Transform*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_FrozenWorld_GetAlignment_m6D853FA3BC6EBD317D76D246EC670D4DA8204C5F (FrozenWorld_Transform_t3A65C9065FE00673EA20EB85BCCD14498FD326DF* ___0_spongyFromFrozenTransformOut, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (FrozenWorld_Transform_t3A65C9065FE00673EA20EB85BCCD14498FD326DF*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(FrozenWorld_Transform_t3A65C9065FE00673EA20EB85BCCD14498FD326DF*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_GetAlignment", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(FrozenWorld_GetAlignment)(___0_spongyFromFrozenTransformOut);
	#else
	il2cppPInvokeFunc(___0_spongyFromFrozenTransformOut);
	#endif

}
// System.Void Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_SetAlignment(Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Transform*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_FrozenWorld_SetAlignment_mBD7FC11D555954F709F39A60DD494DCBB64E3ADA (FrozenWorld_Transform_t3A65C9065FE00673EA20EB85BCCD14498FD326DF* ___0_spongyFromFrozenTransform, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (FrozenWorld_Transform_t3A65C9065FE00673EA20EB85BCCD14498FD326DF*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(FrozenWorld_Transform_t3A65C9065FE00673EA20EB85BCCD14498FD326DF*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_SetAlignment", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(FrozenWorld_SetAlignment)(___0_spongyFromFrozenTransform);
	#else
	il2cppPInvokeFunc(___0_spongyFromFrozenTransform);
	#endif

}
// System.Void Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_SetMostSignificantAnchorId(Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Snapshot,Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_AnchorId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_FrozenWorld_SetMostSignificantAnchorId_m1232F8324A519E12FDABD93DC462452559393AFD (int32_t ___0_snapshot, uint64_t ___1_anchorId, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, uint64_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(uint64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_SetMostSignificantAnchorId", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(FrozenWorld_SetMostSignificantAnchorId)(___0_snapshot, ___1_anchorId);
	#else
	il2cppPInvokeFunc(___0_snapshot, ___1_anchorId);
	#endif

}
// System.Void Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_GetMostSignificantFragmentId(Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Snapshot,Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_FragmentId*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_FrozenWorld_GetMostSignificantFragmentId_m9CB8A294E843166FE6BB6FFC2AC3793C9716ABDE (int32_t ___0_snapshot, uint64_t* ___1_fragmentIdOut, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_GetMostSignificantFragmentId", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(FrozenWorld_GetMostSignificantFragmentId)(___0_snapshot, ___1_fragmentIdOut);
	#else
	il2cppPInvokeFunc(___0_snapshot, ___1_fragmentIdOut);
	#endif

}
// System.Int32 Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_GetNumAnchors(Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Snapshot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Engine_FrozenWorld_GetNumAnchors_mEFE2B65598AEADDC7B28CC85A2CA6CEE7D83EEE5 (int32_t ___0_snapshot, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_GetNumAnchors", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FrozenWorld_GetNumAnchors)(___0_snapshot);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_snapshot);
	#endif

	return returnValue;
}
// System.Int32 Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_GetAnchors(Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Snapshot,System.Int32,Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Anchor*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Engine_FrozenWorld_GetAnchors_m9FCEF6BFF052A1612710F99D1C52E480312209B8 (int32_t ___0_snapshot, int32_t ___1_anchorsBufferSize, FrozenWorld_Anchor_t8321806C71F33C6A0A958129794BA9E66DB298A4* ___2_anchorsOut, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t, FrozenWorld_Anchor_t8321806C71F33C6A0A958129794BA9E66DB298A4*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(int32_t) + sizeof(FrozenWorld_Anchor_t8321806C71F33C6A0A958129794BA9E66DB298A4*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_GetAnchors", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FrozenWorld_GetAnchors)(___0_snapshot, ___1_anchorsBufferSize, ___2_anchorsOut);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_snapshot, ___1_anchorsBufferSize, ___2_anchorsOut);
	#endif

	return returnValue;
}
// System.Void Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_AddAnchors(Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Snapshot,System.Int32,Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Anchor*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_FrozenWorld_AddAnchors_m387CA0723053D310F66D5FA55BDFE0A78621D38B (int32_t ___0_snapshot, int32_t ___1_numAnchors, FrozenWorld_Anchor_t8321806C71F33C6A0A958129794BA9E66DB298A4* ___2_anchors, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t, FrozenWorld_Anchor_t8321806C71F33C6A0A958129794BA9E66DB298A4*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(int32_t) + sizeof(FrozenWorld_Anchor_t8321806C71F33C6A0A958129794BA9E66DB298A4*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_AddAnchors", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(FrozenWorld_AddAnchors)(___0_snapshot, ___1_numAnchors, ___2_anchors);
	#else
	il2cppPInvokeFunc(___0_snapshot, ___1_numAnchors, ___2_anchors);
	#endif

}
// System.Boolean Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_RemoveAnchor(Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Snapshot,Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_AnchorId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Engine_FrozenWorld_RemoveAnchor_mB4F5F5DFC2FC8F4759FAF1E6DB239FF373EA7266 (int32_t ___0_snapshot, uint64_t ___1_anchorId, const RuntimeMethod* method) 
{
	typedef uint8_t (DEFAULT_CALL *PInvokeFunc) (int32_t, uint64_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(uint64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_RemoveAnchor", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(FrozenWorld_RemoveAnchor)(___0_snapshot, ___1_anchorId);
	#else
	uint8_t returnValue = il2cppPInvokeFunc(___0_snapshot, ___1_anchorId);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Void Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_ClearAnchors(Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Snapshot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_FrozenWorld_ClearAnchors_mB62F69DBCFF1A3B3761EE380F8D16487B1DA3A51 (int32_t ___0_snapshot, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_ClearAnchors", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(FrozenWorld_ClearAnchors)(___0_snapshot);
	#else
	il2cppPInvokeFunc(___0_snapshot);
	#endif

}
// System.Int32 Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_GetNumEdges(Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Snapshot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Engine_FrozenWorld_GetNumEdges_m02C62379D20D4EBD953F995316AA865B1010B795 (int32_t ___0_snapshot, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_GetNumEdges", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FrozenWorld_GetNumEdges)(___0_snapshot);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_snapshot);
	#endif

	return returnValue;
}
// System.Void Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_AddEdges(Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Snapshot,System.Int32,Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Edge*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_FrozenWorld_AddEdges_mA09665C10C4A266187993FBF81BDEE64BC2E0A5B (int32_t ___0_snapshot, int32_t ___1_numEdges, FrozenWorld_Edge_t92E8E9CCCA5277A09D6DFE54E6FAEA27D6D1FDC2* ___2_edges, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t, FrozenWorld_Edge_t92E8E9CCCA5277A09D6DFE54E6FAEA27D6D1FDC2*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(int32_t) + sizeof(FrozenWorld_Edge_t92E8E9CCCA5277A09D6DFE54E6FAEA27D6D1FDC2*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_AddEdges", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(FrozenWorld_AddEdges)(___0_snapshot, ___1_numEdges, ___2_edges);
	#else
	il2cppPInvokeFunc(___0_snapshot, ___1_numEdges, ___2_edges);
	#endif

}
// System.Void Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_GetMetrics(Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Metrics*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_FrozenWorld_GetMetrics_mA16748AB79D1C2EE2D7668ADAA5C99853D0579E4 (FrozenWorld_Metrics_tCDD1212F873FF708450EBB7D4ECCF15F89708369* ___0_metricsOut, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (FrozenWorld_Metrics_tCDD1212F873FF708450EBB7D4ECCF15F89708369*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(FrozenWorld_Metrics_tCDD1212F873FF708450EBB7D4ECCF15F89708369*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_GetMetrics", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(FrozenWorld_GetMetrics)(___0_metricsOut);
	#else
	il2cppPInvokeFunc(___0_metricsOut);
	#endif

}
// System.Void Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_Tracking_CreateFromHead(Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Vector*,Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_AttachmentPoint*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_FrozenWorld_Tracking_CreateFromHead_m0BC20C62D81B395624578CC2F535738511AD76CC (FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC* ___0_frozenLocation, FrozenWorld_AttachmentPoint_t4CB4EFDE32610005AEFB6EF9A780F13E436B05B4* ___1_attachmentPointOut, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC*, FrozenWorld_AttachmentPoint_t4CB4EFDE32610005AEFB6EF9A780F13E436B05B4*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC*) + sizeof(FrozenWorld_AttachmentPoint_t4CB4EFDE32610005AEFB6EF9A780F13E436B05B4*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_Tracking_CreateFromHead", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(FrozenWorld_Tracking_CreateFromHead)(___0_frozenLocation, ___1_attachmentPointOut);
	#else
	il2cppPInvokeFunc(___0_frozenLocation, ___1_attachmentPointOut);
	#endif

}
// System.Void Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_Tracking_CreateFromSpawner(Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_AttachmentPoint*,Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Vector*,Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_AttachmentPoint*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_FrozenWorld_Tracking_CreateFromSpawner_m8C37F7F450CFFCF70F3735AE40F02B5CDF82D31E (FrozenWorld_AttachmentPoint_t4CB4EFDE32610005AEFB6EF9A780F13E436B05B4* ___0_spawnerAttachmentPoint, FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC* ___1_frozenLocation, FrozenWorld_AttachmentPoint_t4CB4EFDE32610005AEFB6EF9A780F13E436B05B4* ___2_attachmentPointOut, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (FrozenWorld_AttachmentPoint_t4CB4EFDE32610005AEFB6EF9A780F13E436B05B4*, FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC*, FrozenWorld_AttachmentPoint_t4CB4EFDE32610005AEFB6EF9A780F13E436B05B4*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(FrozenWorld_AttachmentPoint_t4CB4EFDE32610005AEFB6EF9A780F13E436B05B4*) + sizeof(FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC*) + sizeof(FrozenWorld_AttachmentPoint_t4CB4EFDE32610005AEFB6EF9A780F13E436B05B4*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_Tracking_CreateFromSpawner", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(FrozenWorld_Tracking_CreateFromSpawner)(___0_spawnerAttachmentPoint, ___1_frozenLocation, ___2_attachmentPointOut);
	#else
	il2cppPInvokeFunc(___0_spawnerAttachmentPoint, ___1_frozenLocation, ___2_attachmentPointOut);
	#endif

}
// System.Void Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_Tracking_Move(Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Vector*,Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_AttachmentPoint*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_FrozenWorld_Tracking_Move_m76088C0DB253C5DE325C120E531C47C53B5E748F (FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC* ___0_targetFrozenLocation, FrozenWorld_AttachmentPoint_t4CB4EFDE32610005AEFB6EF9A780F13E436B05B4* ___1_attachmentPointInOut, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC*, FrozenWorld_AttachmentPoint_t4CB4EFDE32610005AEFB6EF9A780F13E436B05B4*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(FrozenWorld_Vector_t300559A3E467479B2BB4DFE8EF9CE83778C8E3AC*) + sizeof(FrozenWorld_AttachmentPoint_t4CB4EFDE32610005AEFB6EF9A780F13E436B05B4*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_Tracking_Move", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(FrozenWorld_Tracking_Move)(___0_targetFrozenLocation, ___1_attachmentPointInOut);
	#else
	il2cppPInvokeFunc(___0_targetFrozenLocation, ___1_attachmentPointInOut);
	#endif

}
// System.Boolean Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_RefitMerge_Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Engine_FrozenWorld_RefitMerge_Init_m99C450087E5F284108865DD262AAFFA99C4A648D (const RuntimeMethod* method) 
{
	typedef uint8_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_RefitMerge_Init", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(FrozenWorld_RefitMerge_Init)();
	#else
	uint8_t returnValue = il2cppPInvokeFunc();
	#endif

	return static_cast<bool>(returnValue);
}
// System.Void Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_RefitMerge_Prepare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_FrozenWorld_RefitMerge_Prepare_m4452EB24EFEC02259576C8A91A7C2618C07F7203 (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_RefitMerge_Prepare", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(FrozenWorld_RefitMerge_Prepare)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_RefitMerge_Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_FrozenWorld_RefitMerge_Apply_m938708AC9F03C339EEB10244982EDB67CF6EDA6C (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_RefitMerge_Apply", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(FrozenWorld_RefitMerge_Apply)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Int32 Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_RefitMerge_GetNumAdjustedFragments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Engine_FrozenWorld_RefitMerge_GetNumAdjustedFragments_mE86A456625441316BEB22254D887E0D58F987CD8 (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_RefitMerge_GetNumAdjustedFragments", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FrozenWorld_RefitMerge_GetNumAdjustedFragments)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Int32 Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_RefitMerge_GetAdjustedFragments(System.Int32,Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_RefitMerge_AdjustedFragment*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Engine_FrozenWorld_RefitMerge_GetAdjustedFragments_m6ECD4BF871955C3AF121E25F03A9269F9D75CC89 (int32_t ___0_adjustedFragmentsBufferSize, FrozenWorld_RefitMerge_AdjustedFragment_t9DE8705873E4EC446E515400B5799DB7E44791B6* ___1_adjustedFragmentsOut, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, FrozenWorld_RefitMerge_AdjustedFragment_t9DE8705873E4EC446E515400B5799DB7E44791B6*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(FrozenWorld_RefitMerge_AdjustedFragment_t9DE8705873E4EC446E515400B5799DB7E44791B6*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_RefitMerge_GetAdjustedFragments", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FrozenWorld_RefitMerge_GetAdjustedFragments)(___0_adjustedFragmentsBufferSize, ___1_adjustedFragmentsOut);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_adjustedFragmentsBufferSize, ___1_adjustedFragmentsOut);
	#endif

	return returnValue;
}
// System.Void Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_RefitMerge_GetMergedFragmentId(Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_FragmentId*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_FrozenWorld_RefitMerge_GetMergedFragmentId_m95D8DA96CB9653286BAFA8ACF6822071C5F401B1 (uint64_t* ___0_mergedFragmentIdOut, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_RefitMerge_GetMergedFragmentId", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(FrozenWorld_RefitMerge_GetMergedFragmentId)(___0_mergedFragmentIdOut);
	#else
	il2cppPInvokeFunc(___0_mergedFragmentIdOut);
	#endif

}
// System.Boolean Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_RefitRefreeze_Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Engine_FrozenWorld_RefitRefreeze_Init_m18916C3D34E3026FE2CC57E4E7239914474CB059 (const RuntimeMethod* method) 
{
	typedef uint8_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_RefitRefreeze_Init", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(FrozenWorld_RefitRefreeze_Init)();
	#else
	uint8_t returnValue = il2cppPInvokeFunc();
	#endif

	return static_cast<bool>(returnValue);
}
// System.Void Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_RefitRefreeze_Prepare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_FrozenWorld_RefitRefreeze_Prepare_m362130FD97C821B811A128867BD0B0F012E20CE0 (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_RefitRefreeze_Prepare", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(FrozenWorld_RefitRefreeze_Prepare)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_RefitRefreeze_Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_FrozenWorld_RefitRefreeze_Apply_mCF7908652EA2F5D19FDA27E9438FC44EAFB4EDA8 (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_RefitRefreeze_Apply", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(FrozenWorld_RefitRefreeze_Apply)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Int32 Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_RefitRefreeze_GetNumAdjustedFragments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Engine_FrozenWorld_RefitRefreeze_GetNumAdjustedFragments_mF484CE94CD3E22C492865143B9E88ECB5F933114 (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_RefitRefreeze_GetNumAdjustedFragments", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FrozenWorld_RefitRefreeze_GetNumAdjustedFragments)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Int32 Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_RefitRefreeze_GetAdjustedFragmentIds(System.Int32,Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_FragmentId*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Engine_FrozenWorld_RefitRefreeze_GetAdjustedFragmentIds_mB83434C468072D923CD7904AFBADA4459208CDAF (int32_t ___0_adjustedFragmentIdsBufferSize, uint64_t* ___1_adjustedFragmentIdsOut, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_RefitRefreeze_GetAdjustedFragmentIds", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FrozenWorld_RefitRefreeze_GetAdjustedFragmentIds)(___0_adjustedFragmentIdsBufferSize, ___1_adjustedFragmentIdsOut);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_adjustedFragmentIdsBufferSize, ___1_adjustedFragmentIdsOut);
	#endif

	return returnValue;
}
// System.Boolean Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_RefitRefreeze_CalcAdjustment(Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_AttachmentPoint*,Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Transform*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Engine_FrozenWorld_RefitRefreeze_CalcAdjustment_m30842129F44B053F96FF8D18CB624E68E8FD1011 (FrozenWorld_AttachmentPoint_t4CB4EFDE32610005AEFB6EF9A780F13E436B05B4* ___0_attachmentPointInOut, FrozenWorld_Transform_t3A65C9065FE00673EA20EB85BCCD14498FD326DF* ___1_objectAdjustmentOut, const RuntimeMethod* method) 
{
	typedef uint8_t (DEFAULT_CALL *PInvokeFunc) (FrozenWorld_AttachmentPoint_t4CB4EFDE32610005AEFB6EF9A780F13E436B05B4*, FrozenWorld_Transform_t3A65C9065FE00673EA20EB85BCCD14498FD326DF*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(FrozenWorld_AttachmentPoint_t4CB4EFDE32610005AEFB6EF9A780F13E436B05B4*) + sizeof(FrozenWorld_Transform_t3A65C9065FE00673EA20EB85BCCD14498FD326DF*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_RefitRefreeze_CalcAdjustment", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	uint8_t returnValue = reinterpret_cast<PInvokeFunc>(FrozenWorld_RefitRefreeze_CalcAdjustment)(___0_attachmentPointInOut, ___1_objectAdjustmentOut);
	#else
	uint8_t returnValue = il2cppPInvokeFunc(___0_attachmentPointInOut, ___1_objectAdjustmentOut);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Void Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_RefitRefreeze_GetMergedFragmentId(Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_FragmentId*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_FrozenWorld_RefitRefreeze_GetMergedFragmentId_mE1AC6A9B834D36BA31EE3EF437A5227C60C774CC (uint64_t* ___0_mergedFragmentIdOut, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_RefitRefreeze_GetMergedFragmentId", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(FrozenWorld_RefitRefreeze_GetMergedFragmentId)(___0_mergedFragmentIdOut);
	#else
	il2cppPInvokeFunc(___0_mergedFragmentIdOut);
	#endif

}
// System.Void Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_Serialize_Open(Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Serialize_Stream*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_FrozenWorld_Serialize_Open_m765F808AC3DC4669A4C6FCCD5D908D763F5854F7 (FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA* ___0_streamInOut, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_Serialize_Open", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(FrozenWorld_Serialize_Open)(___0_streamInOut);
	#else
	il2cppPInvokeFunc(___0_streamInOut);
	#endif

}
// System.Void Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_Serialize_Gather(Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Serialize_Stream*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_FrozenWorld_Serialize_Gather_m464D46AC84CE303D7893686C9F08D7E1CCFB7B8C (FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA* ___0_streamInOut, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_Serialize_Gather", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(FrozenWorld_Serialize_Gather)(___0_streamInOut);
	#else
	il2cppPInvokeFunc(___0_streamInOut);
	#endif

}
// System.Int32 Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_Serialize_Read(Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Serialize_Stream*,System.Int32,System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Engine_FrozenWorld_Serialize_Read_mDB2C51168DCAF8D2C489B27C7C793513968AD96A (FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA* ___0_streamInOut, int32_t ___1_bytesBufferSize, uint8_t* ___2_bytesOut, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA*, int32_t, uint8_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA*) + sizeof(int32_t) + sizeof(uint8_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_Serialize_Read", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FrozenWorld_Serialize_Read)(___0_streamInOut, ___1_bytesBufferSize, ___2_bytesOut);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_streamInOut, ___1_bytesBufferSize, ___2_bytesOut);
	#endif

	return returnValue;
}
// System.Void Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_Serialize_Close(Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Serialize_Stream*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_FrozenWorld_Serialize_Close_m02924D41499A87DBD0826D21C963183B6899FAFC (FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA* ___0_streamInOut, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_Serialize_Close", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(FrozenWorld_Serialize_Close)(___0_streamInOut);
	#else
	il2cppPInvokeFunc(___0_streamInOut);
	#endif

}
// System.Void Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_Deserialize_Open(Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Deserialize_Stream*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_FrozenWorld_Deserialize_Open_m408A95548C96EF8DB4E2AD4EDAD124FBC6FCABD9 (FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97* ___0_streamInOut, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_Deserialize_Open", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(FrozenWorld_Deserialize_Open)(___0_streamInOut);
	#else
	il2cppPInvokeFunc(___0_streamInOut);
	#endif

}
// System.Int32 Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_Deserialize_Write(Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Deserialize_Stream*,System.Int32,System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Engine_FrozenWorld_Deserialize_Write_m531B51954C2679E0037E92F4DBBB72D653190E4A (FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97* ___0_streamInOut, int32_t ___1_numBytes, uint8_t* ___2_bytes, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97*, int32_t, uint8_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97*) + sizeof(int32_t) + sizeof(uint8_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_Deserialize_Write", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FrozenWorld_Deserialize_Write)(___0_streamInOut, ___1_numBytes, ___2_bytes);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_streamInOut, ___1_numBytes, ___2_bytes);
	#endif

	return returnValue;
}
// System.Void Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_Deserialize_Apply(Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Deserialize_Stream*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_FrozenWorld_Deserialize_Apply_m12177ED04066040DC186FE37E115AA196CABC317 (FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97* ___0_streamInOut, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_Deserialize_Apply", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(FrozenWorld_Deserialize_Apply)(___0_streamInOut);
	#else
	il2cppPInvokeFunc(___0_streamInOut);
	#endif

}
// System.Void Microsoft.MixedReality.FrozenWorld.Engine.Engine::FrozenWorld_Deserialize_Close(Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Deserialize_Stream*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Engine_FrozenWorld_Deserialize_Close_mE7E66981453665FB6CC18BEC829C84BF3F8FF594 (FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97* ___0_streamInOut, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FrozenWorldPlugin"), "FrozenWorld_Deserialize_Close", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FrozenWorldPlugin_INTERNAL
	reinterpret_cast<PInvokeFunc>(FrozenWorld_Deserialize_Close)(___0_streamInOut);
	#else
	il2cppPInvokeFunc(___0_streamInOut);
	#endif

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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Metrics
IL2CPP_EXTERN_C void FrozenWorld_Metrics_tCDD1212F873FF708450EBB7D4ECCF15F89708369_marshal_pinvoke(const FrozenWorld_Metrics_tCDD1212F873FF708450EBB7D4ECCF15F89708369& unmarshaled, FrozenWorld_Metrics_tCDD1212F873FF708450EBB7D4ECCF15F89708369_marshaled_pinvoke& marshaled)
{
	marshaled.___refitMergeIndicated_0 = static_cast<int32_t>(unmarshaled.___refitMergeIndicated_0);
	marshaled.___refitRefreezeIndicated_1 = static_cast<int32_t>(unmarshaled.___refitRefreezeIndicated_1);
	marshaled.___numTrackableFragments_2 = unmarshaled.___numTrackableFragments_2;
	marshaled.___numVisualSupports_3 = unmarshaled.___numVisualSupports_3;
	marshaled.___numVisualSupportAnchors_4 = unmarshaled.___numVisualSupportAnchors_4;
	marshaled.___numIgnoredSupports_5 = unmarshaled.___numIgnoredSupports_5;
	marshaled.___numIgnoredSupportAnchors_6 = unmarshaled.___numIgnoredSupportAnchors_6;
	marshaled.___maxLinearDeviation_7 = unmarshaled.___maxLinearDeviation_7;
	marshaled.___maxLateralDeviation_8 = unmarshaled.___maxLateralDeviation_8;
	marshaled.___maxAngularDeviation_9 = unmarshaled.___maxAngularDeviation_9;
	marshaled.___maxLinearDeviationInFrustum_10 = unmarshaled.___maxLinearDeviationInFrustum_10;
	marshaled.___maxLateralDeviationInFrustum_11 = unmarshaled.___maxLateralDeviationInFrustum_11;
	marshaled.___maxAngularDeviationInFrustum_12 = unmarshaled.___maxAngularDeviationInFrustum_12;
}
IL2CPP_EXTERN_C void FrozenWorld_Metrics_tCDD1212F873FF708450EBB7D4ECCF15F89708369_marshal_pinvoke_back(const FrozenWorld_Metrics_tCDD1212F873FF708450EBB7D4ECCF15F89708369_marshaled_pinvoke& marshaled, FrozenWorld_Metrics_tCDD1212F873FF708450EBB7D4ECCF15F89708369& unmarshaled)
{
	bool unmarshaledrefitMergeIndicated_temp_0 = false;
	unmarshaledrefitMergeIndicated_temp_0 = static_cast<bool>(marshaled.___refitMergeIndicated_0);
	unmarshaled.___refitMergeIndicated_0 = unmarshaledrefitMergeIndicated_temp_0;
	bool unmarshaledrefitRefreezeIndicated_temp_1 = false;
	unmarshaledrefitRefreezeIndicated_temp_1 = static_cast<bool>(marshaled.___refitRefreezeIndicated_1);
	unmarshaled.___refitRefreezeIndicated_1 = unmarshaledrefitRefreezeIndicated_temp_1;
	int32_t unmarshalednumTrackableFragments_temp_2 = 0;
	unmarshalednumTrackableFragments_temp_2 = marshaled.___numTrackableFragments_2;
	unmarshaled.___numTrackableFragments_2 = unmarshalednumTrackableFragments_temp_2;
	int32_t unmarshalednumVisualSupports_temp_3 = 0;
	unmarshalednumVisualSupports_temp_3 = marshaled.___numVisualSupports_3;
	unmarshaled.___numVisualSupports_3 = unmarshalednumVisualSupports_temp_3;
	int32_t unmarshalednumVisualSupportAnchors_temp_4 = 0;
	unmarshalednumVisualSupportAnchors_temp_4 = marshaled.___numVisualSupportAnchors_4;
	unmarshaled.___numVisualSupportAnchors_4 = unmarshalednumVisualSupportAnchors_temp_4;
	int32_t unmarshalednumIgnoredSupports_temp_5 = 0;
	unmarshalednumIgnoredSupports_temp_5 = marshaled.___numIgnoredSupports_5;
	unmarshaled.___numIgnoredSupports_5 = unmarshalednumIgnoredSupports_temp_5;
	int32_t unmarshalednumIgnoredSupportAnchors_temp_6 = 0;
	unmarshalednumIgnoredSupportAnchors_temp_6 = marshaled.___numIgnoredSupportAnchors_6;
	unmarshaled.___numIgnoredSupportAnchors_6 = unmarshalednumIgnoredSupportAnchors_temp_6;
	float unmarshaledmaxLinearDeviation_temp_7 = 0.0f;
	unmarshaledmaxLinearDeviation_temp_7 = marshaled.___maxLinearDeviation_7;
	unmarshaled.___maxLinearDeviation_7 = unmarshaledmaxLinearDeviation_temp_7;
	float unmarshaledmaxLateralDeviation_temp_8 = 0.0f;
	unmarshaledmaxLateralDeviation_temp_8 = marshaled.___maxLateralDeviation_8;
	unmarshaled.___maxLateralDeviation_8 = unmarshaledmaxLateralDeviation_temp_8;
	float unmarshaledmaxAngularDeviation_temp_9 = 0.0f;
	unmarshaledmaxAngularDeviation_temp_9 = marshaled.___maxAngularDeviation_9;
	unmarshaled.___maxAngularDeviation_9 = unmarshaledmaxAngularDeviation_temp_9;
	float unmarshaledmaxLinearDeviationInFrustum_temp_10 = 0.0f;
	unmarshaledmaxLinearDeviationInFrustum_temp_10 = marshaled.___maxLinearDeviationInFrustum_10;
	unmarshaled.___maxLinearDeviationInFrustum_10 = unmarshaledmaxLinearDeviationInFrustum_temp_10;
	float unmarshaledmaxLateralDeviationInFrustum_temp_11 = 0.0f;
	unmarshaledmaxLateralDeviationInFrustum_temp_11 = marshaled.___maxLateralDeviationInFrustum_11;
	unmarshaled.___maxLateralDeviationInFrustum_11 = unmarshaledmaxLateralDeviationInFrustum_temp_11;
	float unmarshaledmaxAngularDeviationInFrustum_temp_12 = 0.0f;
	unmarshaledmaxAngularDeviationInFrustum_temp_12 = marshaled.___maxAngularDeviationInFrustum_12;
	unmarshaled.___maxAngularDeviationInFrustum_12 = unmarshaledmaxAngularDeviationInFrustum_temp_12;
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Metrics
IL2CPP_EXTERN_C void FrozenWorld_Metrics_tCDD1212F873FF708450EBB7D4ECCF15F89708369_marshal_pinvoke_cleanup(FrozenWorld_Metrics_tCDD1212F873FF708450EBB7D4ECCF15F89708369_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Metrics
IL2CPP_EXTERN_C void FrozenWorld_Metrics_tCDD1212F873FF708450EBB7D4ECCF15F89708369_marshal_com(const FrozenWorld_Metrics_tCDD1212F873FF708450EBB7D4ECCF15F89708369& unmarshaled, FrozenWorld_Metrics_tCDD1212F873FF708450EBB7D4ECCF15F89708369_marshaled_com& marshaled)
{
	marshaled.___refitMergeIndicated_0 = static_cast<int32_t>(unmarshaled.___refitMergeIndicated_0);
	marshaled.___refitRefreezeIndicated_1 = static_cast<int32_t>(unmarshaled.___refitRefreezeIndicated_1);
	marshaled.___numTrackableFragments_2 = unmarshaled.___numTrackableFragments_2;
	marshaled.___numVisualSupports_3 = unmarshaled.___numVisualSupports_3;
	marshaled.___numVisualSupportAnchors_4 = unmarshaled.___numVisualSupportAnchors_4;
	marshaled.___numIgnoredSupports_5 = unmarshaled.___numIgnoredSupports_5;
	marshaled.___numIgnoredSupportAnchors_6 = unmarshaled.___numIgnoredSupportAnchors_6;
	marshaled.___maxLinearDeviation_7 = unmarshaled.___maxLinearDeviation_7;
	marshaled.___maxLateralDeviation_8 = unmarshaled.___maxLateralDeviation_8;
	marshaled.___maxAngularDeviation_9 = unmarshaled.___maxAngularDeviation_9;
	marshaled.___maxLinearDeviationInFrustum_10 = unmarshaled.___maxLinearDeviationInFrustum_10;
	marshaled.___maxLateralDeviationInFrustum_11 = unmarshaled.___maxLateralDeviationInFrustum_11;
	marshaled.___maxAngularDeviationInFrustum_12 = unmarshaled.___maxAngularDeviationInFrustum_12;
}
IL2CPP_EXTERN_C void FrozenWorld_Metrics_tCDD1212F873FF708450EBB7D4ECCF15F89708369_marshal_com_back(const FrozenWorld_Metrics_tCDD1212F873FF708450EBB7D4ECCF15F89708369_marshaled_com& marshaled, FrozenWorld_Metrics_tCDD1212F873FF708450EBB7D4ECCF15F89708369& unmarshaled)
{
	bool unmarshaledrefitMergeIndicated_temp_0 = false;
	unmarshaledrefitMergeIndicated_temp_0 = static_cast<bool>(marshaled.___refitMergeIndicated_0);
	unmarshaled.___refitMergeIndicated_0 = unmarshaledrefitMergeIndicated_temp_0;
	bool unmarshaledrefitRefreezeIndicated_temp_1 = false;
	unmarshaledrefitRefreezeIndicated_temp_1 = static_cast<bool>(marshaled.___refitRefreezeIndicated_1);
	unmarshaled.___refitRefreezeIndicated_1 = unmarshaledrefitRefreezeIndicated_temp_1;
	int32_t unmarshalednumTrackableFragments_temp_2 = 0;
	unmarshalednumTrackableFragments_temp_2 = marshaled.___numTrackableFragments_2;
	unmarshaled.___numTrackableFragments_2 = unmarshalednumTrackableFragments_temp_2;
	int32_t unmarshalednumVisualSupports_temp_3 = 0;
	unmarshalednumVisualSupports_temp_3 = marshaled.___numVisualSupports_3;
	unmarshaled.___numVisualSupports_3 = unmarshalednumVisualSupports_temp_3;
	int32_t unmarshalednumVisualSupportAnchors_temp_4 = 0;
	unmarshalednumVisualSupportAnchors_temp_4 = marshaled.___numVisualSupportAnchors_4;
	unmarshaled.___numVisualSupportAnchors_4 = unmarshalednumVisualSupportAnchors_temp_4;
	int32_t unmarshalednumIgnoredSupports_temp_5 = 0;
	unmarshalednumIgnoredSupports_temp_5 = marshaled.___numIgnoredSupports_5;
	unmarshaled.___numIgnoredSupports_5 = unmarshalednumIgnoredSupports_temp_5;
	int32_t unmarshalednumIgnoredSupportAnchors_temp_6 = 0;
	unmarshalednumIgnoredSupportAnchors_temp_6 = marshaled.___numIgnoredSupportAnchors_6;
	unmarshaled.___numIgnoredSupportAnchors_6 = unmarshalednumIgnoredSupportAnchors_temp_6;
	float unmarshaledmaxLinearDeviation_temp_7 = 0.0f;
	unmarshaledmaxLinearDeviation_temp_7 = marshaled.___maxLinearDeviation_7;
	unmarshaled.___maxLinearDeviation_7 = unmarshaledmaxLinearDeviation_temp_7;
	float unmarshaledmaxLateralDeviation_temp_8 = 0.0f;
	unmarshaledmaxLateralDeviation_temp_8 = marshaled.___maxLateralDeviation_8;
	unmarshaled.___maxLateralDeviation_8 = unmarshaledmaxLateralDeviation_temp_8;
	float unmarshaledmaxAngularDeviation_temp_9 = 0.0f;
	unmarshaledmaxAngularDeviation_temp_9 = marshaled.___maxAngularDeviation_9;
	unmarshaled.___maxAngularDeviation_9 = unmarshaledmaxAngularDeviation_temp_9;
	float unmarshaledmaxLinearDeviationInFrustum_temp_10 = 0.0f;
	unmarshaledmaxLinearDeviationInFrustum_temp_10 = marshaled.___maxLinearDeviationInFrustum_10;
	unmarshaled.___maxLinearDeviationInFrustum_10 = unmarshaledmaxLinearDeviationInFrustum_temp_10;
	float unmarshaledmaxLateralDeviationInFrustum_temp_11 = 0.0f;
	unmarshaledmaxLateralDeviationInFrustum_temp_11 = marshaled.___maxLateralDeviationInFrustum_11;
	unmarshaled.___maxLateralDeviationInFrustum_11 = unmarshaledmaxLateralDeviationInFrustum_temp_11;
	float unmarshaledmaxAngularDeviationInFrustum_temp_12 = 0.0f;
	unmarshaledmaxAngularDeviationInFrustum_temp_12 = marshaled.___maxAngularDeviationInFrustum_12;
	unmarshaled.___maxAngularDeviationInFrustum_12 = unmarshaledmaxAngularDeviationInFrustum_temp_12;
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Metrics
IL2CPP_EXTERN_C void FrozenWorld_Metrics_tCDD1212F873FF708450EBB7D4ECCF15F89708369_marshal_com_cleanup(FrozenWorld_Metrics_tCDD1212F873FF708450EBB7D4ECCF15F89708369_marshaled_com& marshaled)
{
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
// Conversion methods for marshalling of: Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Serialize_Stream
IL2CPP_EXTERN_C void FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA_marshal_pinvoke(const FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA& unmarshaled, FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA_marshaled_pinvoke& marshaled)
{
	marshaled.___handle_0 = unmarshaled.___handle_0;
	marshaled.___numBytesBuffered_1 = unmarshaled.___numBytesBuffered_1;
	marshaled.___time_2 = unmarshaled.___time_2;
	marshaled.___includePersistent_3 = static_cast<int32_t>(unmarshaled.___includePersistent_3);
	marshaled.___includeTransient_4 = static_cast<int32_t>(unmarshaled.___includeTransient_4);
}
IL2CPP_EXTERN_C void FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA_marshal_pinvoke_back(const FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA_marshaled_pinvoke& marshaled, FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA& unmarshaled)
{
	int32_t unmarshaledhandle_temp_0 = 0;
	unmarshaledhandle_temp_0 = marshaled.___handle_0;
	unmarshaled.___handle_0 = unmarshaledhandle_temp_0;
	int32_t unmarshalednumBytesBuffered_temp_1 = 0;
	unmarshalednumBytesBuffered_temp_1 = marshaled.___numBytesBuffered_1;
	unmarshaled.___numBytesBuffered_1 = unmarshalednumBytesBuffered_temp_1;
	float unmarshaledtime_temp_2 = 0.0f;
	unmarshaledtime_temp_2 = marshaled.___time_2;
	unmarshaled.___time_2 = unmarshaledtime_temp_2;
	bool unmarshaledincludePersistent_temp_3 = false;
	unmarshaledincludePersistent_temp_3 = static_cast<bool>(marshaled.___includePersistent_3);
	unmarshaled.___includePersistent_3 = unmarshaledincludePersistent_temp_3;
	bool unmarshaledincludeTransient_temp_4 = false;
	unmarshaledincludeTransient_temp_4 = static_cast<bool>(marshaled.___includeTransient_4);
	unmarshaled.___includeTransient_4 = unmarshaledincludeTransient_temp_4;
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Serialize_Stream
IL2CPP_EXTERN_C void FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA_marshal_pinvoke_cleanup(FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Serialize_Stream
IL2CPP_EXTERN_C void FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA_marshal_com(const FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA& unmarshaled, FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA_marshaled_com& marshaled)
{
	marshaled.___handle_0 = unmarshaled.___handle_0;
	marshaled.___numBytesBuffered_1 = unmarshaled.___numBytesBuffered_1;
	marshaled.___time_2 = unmarshaled.___time_2;
	marshaled.___includePersistent_3 = static_cast<int32_t>(unmarshaled.___includePersistent_3);
	marshaled.___includeTransient_4 = static_cast<int32_t>(unmarshaled.___includeTransient_4);
}
IL2CPP_EXTERN_C void FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA_marshal_com_back(const FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA_marshaled_com& marshaled, FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA& unmarshaled)
{
	int32_t unmarshaledhandle_temp_0 = 0;
	unmarshaledhandle_temp_0 = marshaled.___handle_0;
	unmarshaled.___handle_0 = unmarshaledhandle_temp_0;
	int32_t unmarshalednumBytesBuffered_temp_1 = 0;
	unmarshalednumBytesBuffered_temp_1 = marshaled.___numBytesBuffered_1;
	unmarshaled.___numBytesBuffered_1 = unmarshalednumBytesBuffered_temp_1;
	float unmarshaledtime_temp_2 = 0.0f;
	unmarshaledtime_temp_2 = marshaled.___time_2;
	unmarshaled.___time_2 = unmarshaledtime_temp_2;
	bool unmarshaledincludePersistent_temp_3 = false;
	unmarshaledincludePersistent_temp_3 = static_cast<bool>(marshaled.___includePersistent_3);
	unmarshaled.___includePersistent_3 = unmarshaledincludePersistent_temp_3;
	bool unmarshaledincludeTransient_temp_4 = false;
	unmarshaledincludeTransient_temp_4 = static_cast<bool>(marshaled.___includeTransient_4);
	unmarshaled.___includeTransient_4 = unmarshaledincludeTransient_temp_4;
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Serialize_Stream
IL2CPP_EXTERN_C void FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA_marshal_com_cleanup(FrozenWorld_Serialize_Stream_tA6755A3B649D7C97F1D7F946CED0BC46661579BA_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Deserialize_Stream
IL2CPP_EXTERN_C void FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97_marshal_pinvoke(const FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97& unmarshaled, FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97_marshaled_pinvoke& marshaled)
{
	marshaled.___handle_0 = unmarshaled.___handle_0;
	marshaled.___numBytesRequired_1 = unmarshaled.___numBytesRequired_1;
	marshaled.___time_2 = unmarshaled.___time_2;
	marshaled.___includePersistent_3 = static_cast<int32_t>(unmarshaled.___includePersistent_3);
	marshaled.___includeTransient_4 = static_cast<int32_t>(unmarshaled.___includeTransient_4);
}
IL2CPP_EXTERN_C void FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97_marshal_pinvoke_back(const FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97_marshaled_pinvoke& marshaled, FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97& unmarshaled)
{
	int32_t unmarshaledhandle_temp_0 = 0;
	unmarshaledhandle_temp_0 = marshaled.___handle_0;
	unmarshaled.___handle_0 = unmarshaledhandle_temp_0;
	int32_t unmarshalednumBytesRequired_temp_1 = 0;
	unmarshalednumBytesRequired_temp_1 = marshaled.___numBytesRequired_1;
	unmarshaled.___numBytesRequired_1 = unmarshalednumBytesRequired_temp_1;
	float unmarshaledtime_temp_2 = 0.0f;
	unmarshaledtime_temp_2 = marshaled.___time_2;
	unmarshaled.___time_2 = unmarshaledtime_temp_2;
	bool unmarshaledincludePersistent_temp_3 = false;
	unmarshaledincludePersistent_temp_3 = static_cast<bool>(marshaled.___includePersistent_3);
	unmarshaled.___includePersistent_3 = unmarshaledincludePersistent_temp_3;
	bool unmarshaledincludeTransient_temp_4 = false;
	unmarshaledincludeTransient_temp_4 = static_cast<bool>(marshaled.___includeTransient_4);
	unmarshaled.___includeTransient_4 = unmarshaledincludeTransient_temp_4;
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Deserialize_Stream
IL2CPP_EXTERN_C void FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97_marshal_pinvoke_cleanup(FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Deserialize_Stream
IL2CPP_EXTERN_C void FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97_marshal_com(const FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97& unmarshaled, FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97_marshaled_com& marshaled)
{
	marshaled.___handle_0 = unmarshaled.___handle_0;
	marshaled.___numBytesRequired_1 = unmarshaled.___numBytesRequired_1;
	marshaled.___time_2 = unmarshaled.___time_2;
	marshaled.___includePersistent_3 = static_cast<int32_t>(unmarshaled.___includePersistent_3);
	marshaled.___includeTransient_4 = static_cast<int32_t>(unmarshaled.___includeTransient_4);
}
IL2CPP_EXTERN_C void FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97_marshal_com_back(const FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97_marshaled_com& marshaled, FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97& unmarshaled)
{
	int32_t unmarshaledhandle_temp_0 = 0;
	unmarshaledhandle_temp_0 = marshaled.___handle_0;
	unmarshaled.___handle_0 = unmarshaledhandle_temp_0;
	int32_t unmarshalednumBytesRequired_temp_1 = 0;
	unmarshalednumBytesRequired_temp_1 = marshaled.___numBytesRequired_1;
	unmarshaled.___numBytesRequired_1 = unmarshalednumBytesRequired_temp_1;
	float unmarshaledtime_temp_2 = 0.0f;
	unmarshaledtime_temp_2 = marshaled.___time_2;
	unmarshaled.___time_2 = unmarshaledtime_temp_2;
	bool unmarshaledincludePersistent_temp_3 = false;
	unmarshaledincludePersistent_temp_3 = static_cast<bool>(marshaled.___includePersistent_3);
	unmarshaled.___includePersistent_3 = unmarshaledincludePersistent_temp_3;
	bool unmarshaledincludeTransient_temp_4 = false;
	unmarshaledincludeTransient_temp_4 = static_cast<bool>(marshaled.___includeTransient_4);
	unmarshaled.___includeTransient_4 = unmarshaledincludeTransient_temp_4;
}
// Conversion method for clean up from marshalling of: Microsoft.MixedReality.FrozenWorld.Engine.Engine/FrozenWorld_Deserialize_Stream
IL2CPP_EXTERN_C void FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97_marshal_com_cleanup(FrozenWorld_Deserialize_Stream_t89D6B7E79A1DF24B9D64D3C002387D8F84184F97_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
