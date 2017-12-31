#pragma once

#include "Enumerations.hpp"

namespace Direct3D11
{
	public value struct D3D11_BLEND_DESC
	{
		Platform::Boolean              AlphaToCoverageEnable;
		Platform::Boolean              IndependentBlendEnable;
		D3D11_RENDER_TARGET_BLEND_DESC RenderTarget[8];
	};

	public value struct D3D11_BLEND_DESC1
	{
		Platform::Boolean               AlphaToCoverageEnable;
		Platform::Boolean               IndependentBlendEnable;
		D3D11_RENDER_TARGET_BLEND_DESC1 RenderTarget[8];
	};

	public value struct D3D11_BOX
	{
		unsigned int left;
		unsigned int top;
		unsigned int front;
		unsigned int right;
		unsigned int bottom;
		unsigned int back;
	};

	public value struct D3D11_COUNTER_DESC
	{
		D3D11_COUNTER Counter;
		unsigned int  MiscFlags;
	};

	public value struct D3D11_COUNTER_INFO
	{
		D3D11_COUNTER LastDeviceDependentCounter;
		unsigned int  NumSimultaneousCounters;
		unsigned char NumDetectableParallelUnits;
	};

	public value struct D3D11_DEPTH_STENCIL_DESC {
		Platform::Boolean          DepthEnable;
		D3D11_DEPTH_WRITE_MASK     DepthWriteMask;
		D3D11_COMPARISON_FUNC      DepthFunc;
		Platform::Boolean          StencilEnable;
		unsigned char              StencilReadMask;
		unsigned char              StencilWriteMask;
		D3D11_DEPTH_STENCILOP_DESC FrontFace;
		D3D11_DEPTH_STENCILOP_DESC BackFace;
	};

	public value struct D3D11_DEPTH_STENCILOP_DESC {
		D3D11_STENCIL_OP      StencilFailOp;
		D3D11_STENCIL_OP      StencilDepthFailOp;
		D3D11_STENCIL_OP      StencilPassOp;
		D3D11_COMPARISON_FUNC StencilFunc;
	};

	public value struct D3D11_DRAW_INDEXED_INSTANCED_INDIRECT_ARGS {
		unsigned int IndexCountPerInstance;
		unsigned int InstanceCount;
		unsigned int StartIndexLocation;
		int          BaseVertexLocation;
		unsigned int StartInstanceLocation;
	};

	public value struct D3D11_DRAW_INSTANCED_INDIRECT_ARGS {
		unsigned int VertexCountPerInstance;
		unsigned int InstanceCount;
		unsigned int StartVertexLocation;
		unsigned int StartInstanceLocation;
	};

	public value struct D3D11_FEATURE_DATA_ARCHITECTURE_INFO {
		Platform::Boolean TileBasedDeferredRenderer;
	};

	public value struct D3D11_FEATURE_DATA_D3D9_OPTIONS {
		Platform::Boolean FullNonPow2TextureSupport;
	};

	public value struct D3D11_FEATURE_DATA_D3D9_OPTIONS1 {
		Platform::Boolean FullNonPow2TextureSupported;
		Platform::Boolean DepthAsTextureWithLessEqualComparisonFilterSupported;
		Platform::Boolean SimpleInstancingSupported;
		Platform::Boolean TextureCubeFaceRenderTargetWithNonCubeDepthStencilSupported;
	};

	public value struct D3D11_FEATURE_DATA_D3D9_SHADOW_SUPPORT {
		Platform::Boolean SupportsDepthAsTextureWithLessEqualComparisonFilter;
	};

	public value struct D3D11_FEATURE_DATA_D3D9_SIMPLE_INSTANCING_SUPPORT {
		Platform::Boolean SimpleInstancingSupported;
	};

	public value struct D3D11_FEATURE_DATA_D3D10_X_HARDWARE_OPTIONS {
		Platform::Boolean ComputeShaders_Plus_RawAndStructuredBuffers_Via_Shader_4_x;
	};

	public value struct D3D11_FEATURE_DATA_D3D11_OPTIONS {
		Platform::Boolean OutputMergerLogicOp;
		Platform::Boolean UAVOnlyRenderingForcedSampleCount;
		Platform::Boolean DiscardAPIsSeenByDriver;
		Platform::Boolean FlagsForUpdateAndCopySeenByDriver;
		Platform::Boolean ClearView;
		Platform::Boolean CopyWithOverlap;
		Platform::Boolean ConstantBufferPartialUpdate;
		Platform::Boolean ConstantBufferOffsetting;
		Platform::Boolean MapNoOverwriteOnDynamicConstantBuffer;
		Platform::Boolean MapNoOverwriteOnDynamicBufferSRV;
		Platform::Boolean MultisampleRTVWithForcedSampleCountOne;
		Platform::Boolean SAD4ShaderInstructions;
		Platform::Boolean ExtendedDoublesShaderInstructions;
		Platform::Boolean ExtendedResourceSharing;
	};

	public value struct D3D11_FEATURE_DATA_D3D11_OPTIONS1 {
		D3D11_TILED_RESOURCES_TIER TiledResourcesTier;
		Platform::Boolean          MinMaxFiltering;
		Platform::Boolean          ClearViewAlsoSupportsDepthOnlyFormats;
		Platform::Boolean          MapOnDefaultBuffers;
	};

	public value struct D3D11_FEATURE_DATA_D3D11_OPTIONS2 {
		Platform::Boolean                     PSSpecifiedStencilRefSupported;
		Platform::Boolean                     TypedUAVLoadAdditionalFormats;
		Platform::Boolean                     ROVsSupported;
		D3D11_CONSERVATIVE_RASTERIZATION_TIER ConservativeRasterizationTier;
		D3D11_TILED_RESOURCES_TIER            TiledResourcesTier;
		Platform::Boolean                     MapOnDefaultTextures;
		Platform::Boolean                     StandardSwizzle;
		Platform::Boolean                     UnifiedMemoryArchitecture;
	};

	public value struct D3D11_FEATURE_DATA_D3D11_OPTIONS3 {
		Platform::Boolean VPAndRTArrayIndexFromAnyShaderFeedingRasterizer;
	};

	public value struct D3D11_FEATURE_DATA_D3D11_OPTIONS4 {
		Platform::Boolean ExtendedNV12SharedTextureSupported;
	};

	public value struct D3D11_FEATURE_DATA_DOUBLES {
		Platform::Boolean DoublePrecisionFloatShaderOps;
	};

	public value struct D3D11_FEATURE_DATA_FORMAT_SUPPORT {
		DXGI_FORMAT  InFormat;
		unsigned int OutFormatSupport;
	};

	public value struct D3D11_FEATURE_DATA_FORMAT_SUPPORT2 {
		DXGI_FORMAT  InFormat;
		unsigned int OutFormatSupport2;
	};

	public value struct D3D11_FEATURE_DATA_GPU_VIRTUAL_ADDRESS_SUPPORT {
		unsigned int MaxGPUVirtualAddressBitsPerResource;
		unsigned int MaxGPUVirtualAddressBitsPerProcess;
	};

	public value struct D3D11_FEATURE_DATA_MARKER_SUPPORT {
		Platform::Boolean Profile;
	};

	public value struct D3D11_FEATURE_DATA_SHADER_CACHE {
		D3D11_SHADER_CACHE_SUPPORT_FLAGS SupportFlags;
	};

	public value struct D3D11_FEATURE_DATA_SHADER_MIN_PRECISION_SUPPORT {
		unsigned int PixelShaderMinPrecision;
		unsigned int AllOtherShaderStagesMinPrecision;
	};


	public value struct D3D11_FEATURE_DATA_THREADING {
		Platform::Boolean DriverConcurrentCreates;
		Platform::Boolean DriverCommandLists;
	};

	public value struct D3D11_INFO_QUEUE_FILTER
	{
		D3D11_INFO_QUEUE_FILTER_DESC AllowList;
		D3D11_INFO_QUEUE_FILTER_DESC DenyList;
	};

	public value struct D3D11_INFO_QUEUE_FILTER_DESC
	{
		unsigned int           NumCategories;
		D3D11_MESSAGE_CATEGORY *pCategoryList;
		unsigned int           NumSeverities;
		D3D11_MESSAGE_SEVERITY *pSeverityList;
		unsigned int           NumIDs;
		D3D11_MESSAGE_ID       *pIDList;
	};

	public value struct D3D11_INPUT_ELEMENT_DESC {
		Platform::String^          SemanticName;
		unsigned int               SemanticIndex;
		DXGI_FORMAT                Format;
		unsigned int               InputSlot;
		unsigned int               AlignedByteOffset;
		D3D11_INPUT_CLASSIFICATION InputSlotClass;
		unsigned int               InstanceDataStepRate;
	};

	public value struct D3D11_MESSAGE
	{
		D3D11_MESSAGE_CATEGORY Category;
		D3D11_MESSAGE_SEVERITY Severity;
		D3D11_MESSAGE_ID       ID;
		Platform::String^      pDescription;
		size_t                 DescriptionByteLength;
	};

	public value struct D3D11_QUERY_DATA_PIPELINE_STATISTICS {
		unsigned long IAVertices;
		unsigned long IAPrimitives;
		unsigned long VSInvocations;
		unsigned long GSInvocations;
		unsigned long GSPrimitives;
		unsigned long CInvocations;
		unsigned long CPrimitives;
		unsigned long PSInvocations;
		unsigned long HSInvocations;
		unsigned long DSInvocations;
		unsigned long CSInvocations;
	};

	public value struct D3D11_QUERY_DATA_SO_STATISTICS {
		unsigned long NumPrimitivesWritten;
		unsigned long PrimitivesStorageNeeded;
	};


	public value struct D3D11_QUERY_DATA_TIMESTAMP_DISJOINT {
		unsigned long     Frequency;
		Platform::Boolean Disjoint;
	};

	public value struct D3D11_QUERY_DESC {
		D3D11_QUERY  Query;
		unsigned int MiscFlags;
	};

	public value struct D3D11_QUERY_DESC1 {
		D3D11_QUERY        Query;
		unsigned int       MiscFlags;
		D3D11_CONTEXT_TYPE ContextType;
	};

	public value struct D3D11_RASTERIZER_DESC {
		D3D11_FILL_MODE   FillMode;
		D3D11_CULL_MODE   CullMode;
		Platform::Boolean FrontCounterClockwise;
		int               DepthBias;
		float             DepthBiasClamp;
		float             SlopeScaledDepthBias;
		Platform::Boolean DepthClipEnable;
		Platform::Boolean ScissorEnable;
		Platform::Boolean MultisampleEnable;
		Platform::Boolean AntialiasedLineEnable;
	};

	public value struct _D3D11_RASTERIZER_DESC1 {
		D3D11_FILL_MODE   FillMode;
		D3D11_CULL_MODE   CullMode;
		Platform::Boolean FrontCounterClockwise;
		int               DepthBias;
		float             DepthBiasClamp;
		float             SlopeScaledDepthBias;
		Platform::Boolean DepthClipEnable;
		Platform::Boolean ScissorEnable;
		Platform::Boolean MultisampleEnable;
		Platform::Boolean AntialiasedLineEnable;
		unsigned int      ForcedSampleCount;
	};

	public value struct D3D11_RASTERIZER_DESC2 {
		D3D11_FILL_MODE                       FillMode;
		D3D11_CULL_MODE                       CullMode;
		Platform::Boolean                     FrontCounterClockwise;
		int                                   DepthBias;
		float                                 DepthBiasClamp;
		float                                 SlopeScaledDepthBias;
		Platform::Boolean                     DepthClipEnable;
		Platform::Boolean                     ScissorEnable;
		Platform::Boolean                     MultisampleEnable;
		Platform::Boolean                     AntialiasedLineEnable;
		unsigned int                          ForcedSampleCount;
		D3D11_CONSERVATIVE_RASTERIZATION_MODE ConservativeRaster;
	};

	typedef RECT D3D11_RECT;

	public value struct D3D11_RENDER_TARGET_BLEND_DESC {
		Platform::Boolean BlendEnable;
		D3D11_BLEND       SrcBlend;
		D3D11_BLEND       DestBlend;
		D3D11_BLEND_OP    BlendOp;
		D3D11_BLEND       SrcBlendAlpha;
		D3D11_BLEND       DestBlendAlpha;
		D3D11_BLEND_OP    BlendOpAlpha;
		unsigned char     RenderTargetWriteMask;
	};

	public value struct D3D11_RENDER_TARGET_BLEND_DESC1 {
		Platform::Boolean BlendEnable;
		Platform::Boolean LogicOpEnable;
		D3D11_BLEND       SrcBlend;
		D3D11_BLEND       DestBlend;
		D3D11_BLEND_OP    BlendOp;
		D3D11_BLEND       SrcBlendAlpha;
		D3D11_BLEND       DestBlendAlpha;
		D3D11_BLEND_OP    BlendOpAlpha;
		D3D11_LOGIC_OP    LogicOp;
		unsigned char     RenderTargetWriteMask;
	};

	public value struct D3D11_SAMPLER_DESC {
		D3D11_FILTER               Filter;
		D3D11_TEXTURE_ADDRESS_MODE AddressU;
		D3D11_TEXTURE_ADDRESS_MODE AddressV;
		D3D11_TEXTURE_ADDRESS_MODE AddressW;
		float                      MipLODBias;
		unsigned int               MaxAnisotropy;
		D3D11_COMPARISON_FUNC      ComparisonFunc;
		float                      BorderColor[4];
		float                      MinLOD;
		float                      MaxLOD;
	};


	public value struct D3D11_SO_DECLARATION_ENTRY {
		unsigned int      Stream;
		Platform::String^ SemanticName;
		unsigned int      SemanticIndex;
		unsigned char     StartComponent;
		unsigned char     ComponentCount;
		unsigned char     OutputSlot;
	};

	public value struct D3D11_VIEWPORT {
		float TopLeftX;
		float TopLeftY;
		float Width;
		float Height;
		float MinDepth;
		float MaxDepth;
	};

	typedef struct D3DCOLORVALUE
	{
		float r;
		float g;
		float b;
		float a;
	};

	typedef struct DXGI_ADAPTER_DESC
	{
		WCHAR  Description[128];
		UINT   VendorId;
		UINT   DeviceId;
		UINT   SubSysId;
		UINT   Revision;
		SIZE_T DedicatedVideoMemory;
		SIZE_T DedicatedSystemMemory;
		SIZE_T SharedSystemMemory;
		LUID   AdapterLuid;
	};

	typedef struct DXGI_ADAPTER_DESC1
	{
		WCHAR  Description[128];
		UINT   VendorId;
		UINT   DeviceId;
		UINT   SubSysId;
		UINT   Revision;
		SIZE_T DedicatedVideoMemory;
		SIZE_T DedicatedSystemMemory;
		SIZE_T SharedSystemMemory;
		LUID   AdapterLuid;
		UINT   Flags;
	};

	typedef struct DXGI_ADAPTER_DESC2
	{
		WCHAR                                Description[128];
		UINT                                 VendorId;
		UINT                                 DeviceId;
		UINT                                 SubSysId;
		UINT                                 Revision;
		SIZE_T                               DedicatedVideoMemory;
		SIZE_T                               DedicatedSystemMemory;
		SIZE_T                               SharedSystemMemory;
		LUID                                 AdapterLuid;
		UINT                                 Flags;
		DXGI_GRAPHICS_PREEMPTION_GRANULARITY GraphicsPreemptionGranularity;
		DXGI_COMPUTE_PREEMPTION_GRANULARITY  ComputePreemptionGranularity;
	};

	typedef struct DXGI_ADAPTER_DESC3
	{
		WCHAR                                Description[128];
		UINT                                 VendorId;
		UINT                                 DeviceId;
		UINT                                 SubSysId;
		UINT                                 Revision;
		SIZE_T                               DedicatedVideoMemory;
		SIZE_T                               DedicatedSystemMemory;
		SIZE_T                               SharedSystemMemory;
		LUID                                 AdapterLuid;
		DXGI_ADAPTER_FLAG3                   Flags;
		DXGI_GRAPHICS_PREEMPTION_GRANULARITY GraphicsPreemptionGranularity;
		DXGI_COMPUTE_PREEMPTION_GRANULARITY  ComputePreemptionGranularity;
	};

	typedef struct DXGI_DECODE_SWAP_CHAIN_DESC
	{
		UINT Flags;
	};

	typedef struct DXGI_DISPLAY_COLOR_SPACE
	{
		FLOAT PrimaryCoordinates[8][2];
		FLOAT WhitePoints[16][2];
	};

	typedef struct DXGI_FRAME_STATISTICS
	{
		UINT          PresentCount;
		UINT          PresentRefreshCount;
		UINT          SyncRefreshCount;
		LARGE_INTEGER SyncQPCTime;
		LARGE_INTEGER SyncGPUTime;
	};

	typedef struct DXGI_FRAME_STATISTICS_MEDIA
	{
		UINT                         PresentCount;
		UINT                         PresentRefreshCount;
		UINT                         SyncRefreshCount;
		LARGE_INTEGER                SyncQPCTime;
		LARGE_INTEGER                SyncGPUTime;
		DXGI_FRAME_PRESENTATION_MODE CompositionMode;
		UINT                         ApprovedPresentDuration;
	};

	typedef struct DXGI_GAMMA_CONTROL
	{
		DXGI_RGB Scale;
		DXGI_RGB Offset;
		DXGI_RGB GammaCurve[1025];
	};

	typedef struct DXGI_GAMMA_CONTROL_CAPABILITIES
	{
		BOOL  ScaleAndOffsetSupported;
		float MaxConvertedValue;
		float MinConvertedValue;
		UINT  NumGammaControlPoints;
		float ControlPointPositions[1025];
	};

	typedef struct DXGI_HDR_METADATA_HDR10
	{
		UINT16 RedPrimary[2];
		UINT16 GreenPrimary[2];
		UINT16 BluePrimary[2];
		UINT16 WhitePoint[2];
		UINT   MaxMasteringLuminance;
		UINT   MinMasteringLuminance;
		UINT16 MaxContentLightLevel;
		UINT16 MaxFrameAverageLightLevel;
	};

	typedef struct DXGI_INFO_QUEUE_FILTER
	{
		DXGI_INFO_QUEUE_FILTER_DESC AllowList;
		DXGI_INFO_QUEUE_FILTER_DESC DenyList;
	};

	typedef struct DXGI_INFO_QUEUE_FILTER_DESC
	{
		UINT                             NumCategories;
		DXGI_INFO_QUEUE_MESSAGE_CATEGORY *pCategoryList;
		UINT                             NumSeverities;
		DXGI_INFO_QUEUE_MESSAGE_SEVERITY *pSeverityList;
		UINT                             NumIDs;
		DXGI_INFO_QUEUE_MESSAGE_ID       *pIDList;
	};

	typedef struct DXGI_INFO_QUEUE_MESSAGE
	{
		DXGI_DEBUG_ID                    Producer;
		DXGI_INFO_QUEUE_MESSAGE_CATEGORY Category;
		DXGI_INFO_QUEUE_MESSAGE_SEVERITY Severity;
		DXGI_INFO_QUEUE_MESSAGE_ID       ID;
		const char                       *pDescription;
		SIZE_T                           DescriptionByteLength;
	};

	typedef struct DXGI_JPEG_AC_HUFFMAN_TABLE
	{
		BYTE CodeCounts[16];
		BYTE CodeValues[162];
	};

	typedef struct DXGI_JPEG_DC_HUFFMAN_TABLE
	{
		BYTE CodeCounts[12];
		BYTE CodeValues[12];
	};

	typedef struct DXGI_JPEG_QUANTIZATION_TABLE
	{
		BYTE Elements[64];
	};

	typedef struct DXGI_MATRIX_3X2_F
	{
		FLOAT _11;
		FLOAT _12;
		FLOAT _21;
		FLOAT _22;
		FLOAT _31;
		FLOAT _32;
	};

	typedef struct DXGI_MAPPED_RECT
	{
		INT  Pitch;
		BYTE *pBits;
	};

	typedef struct DXGI_MODE_DESC
	{
		UINT                     Width;
		UINT                     Height;
		DXGI_RATIONAL            RefreshRate;
		DXGI_FORMAT              Format;
		DXGI_MODE_SCANLINE_ORDER ScanlineOrdering;
		DXGI_MODE_SCALING        Scaling;
	};

	typedef struct DXGI_MODE_DESC1
	{
		UINT                     Width;
		UINT                     Height;
		DXGI_RATIONAL            RefreshRate;
		DXGI_FORMAT              Format;
		DXGI_MODE_SCANLINE_ORDER ScanlineOrdering;
		DXGI_MODE_SCALING        Scaling;
		BOOL                     Stereo;
	};

	typedef struct DXGI_OUTPUT_DESC
	{
		WCHAR              DeviceName[32];
		RECT               DesktopCoordinates;
		BOOL               AttachedToDesktop;
		DXGI_MODE_ROTATION Rotation;
		HMONITOR           Monitor;
	};

	typedef struct DXGI_OUTPUT_DESC1
	{
		WCHAR                 DeviceName[32];
		RECT                  DesktopCoordinates;
		BOOL                  AttachedToDesktop;
		DXGI_MODE_ROTATION    Rotation;
		HMONITOR              Monitor;
		UINT                  BitsPerColor;
		DXGI_COLOR_SPACE_TYPE ColorSpace;
		FLOAT                 RedPrimary[2];
		FLOAT                 GreenPrimary[2];
		FLOAT                 BluePrimary[2];
		FLOAT                 WhitePoint[2];
		FLOAT                 MinLuminance;
		FLOAT                 MaxLuminance;
		FLAOT                 MaxFullFrameLuminance;
		BOOL                  InternalOutput;
	};

	typedef struct DXGI_OUTDUPL_DESC
	{
		DXGI_MODE_DESC     ModeDesc;
		DXGI_MODE_ROTATION Rotation;
		BOOL               DesktopImageInSystemMemory;
	};

	typedef struct DXGI_OUTDUPL_FRAME_INFO
	{
		LARGE_INTEGER                 LastPresentTime;
		LARGE_INTEGER                 LastMouseUpdateTime;
		UINT                          AccumulatedFrames;
		BOOL                          RectsCoalesced;
		BOOL                          ProtectedContentMaskedOut;
		DXGI_OUTDUPL_POINTER_POSITION PointerPosition;
		UINT                          TotalMetadataBufferSize;
		UINT                          PointerShapeBufferSize;
	};

	typedef struct DXGI_OUTDUPL_MOVE_RECT
	{
		POINT SourcePoint;
		RECT  DestinationRect;
	};

	typedef struct DXGI_OUTDUPL_POINTER_POSITION
	{
		POINT Position;
		BOOL  Visible;
	};

	typedef struct DXGI_OUTDUPL_POINTER_SHAPE_INFO
	{
		UINT  Type;
		UINT  Width;
		UINT  Height;
		UINT  Pitch;
		POINT HotSpot;
	};

	typedef struct DXGI_PRESENT_PARAMETERS
	{
		UINT  DirtyRectsCount;
		RECT  *pDirtyRects;
		RECT  *pScrollRect;
		POINT *pScrollOffset;
	};

	typedef struct DXGI_QUERY_VIDEO_MEMORY_INFO
	{
		UINT64 Budget;
		UINT64 CurrentUsage;
		UINT64 AvailableForReservation;
		UINT64 CurrentReservation;
	};

	typedef struct DXGI_RATIONAL
	{
		UINT Numerator;
		UINT Denominator;
	};

	typedef struct DXGI_RGB
	{
		float Red;
		float Green;
		float Blue;
	};

	typedef struct DXGI_RGBA
	{
		float r;
		float g;
		float b;
		float a;
	};

	typedef struct DXGI_SAMPLE_DESC
	{
		UINT Count;
		UINT Quality;
	};

	typedef struct DXGI_SHARED_RESOURCE
	{
		HANDLE Handle;
	};

	typedef struct DXGI_SURFACE_DESC
	{
		UINT             Width;
		UINT             Height;
		DXGI_FORMAT      Format;
		DXGI_SAMPLE_DESC SampleDesc;
	};

	typedef struct DXGI_SWAP_CHAIN_DESC
	{
		DXGI_MODE_DESC   BufferDesc;
		DXGI_SAMPLE_DESC SampleDesc;
		DXGI_USAGE       BufferUsage;
		UINT             BufferCount;
		HWND             OutputWindow;
		BOOL             Windowed;
		DXGI_SWAP_EFFECT SwapEffect;
		UINT             Flags;
	};

	typedef struct DXGI_SWAP_CHAIN_DESC1
	{
		UINT             Width;
		UINT             Height;
		DXGI_FORMAT      Format;
		BOOL             Stereo;
		DXGI_SAMPLE_DESC SampleDesc;
		DXGI_USAGE       BufferUsage;
		UINT             BufferCount;
		DXGI_SCALING     Scaling;
		DXGI_SWAP_EFFECT SwapEffect;
		DXGI_ALPHA_MODE  AlphaMode;
		UINT             Flags;
	};

	typedef struct DXGI_SWAP_CHAIN_FULLSCREEN_DESC
	{
		DXGI_RATIONAL            RefreshRate;
		DXGI_MODE_SCANLINE_ORDER ScanlineOrdering;
		DXGI_MODE_SCALING        Scaling;
		BOOL                     Windowed;
	};

	typedef struct LUID
	{
		DWORD LowPart;
		LONG  HighPart;
	};
}