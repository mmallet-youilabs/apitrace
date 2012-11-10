##########################################################################
#
# Copyright 2012 VMware, Inc.
# All Rights Reserved.
#
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included in
# all copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
# THE SOFTWARE.
#
##########################################################################/

from dxgi import *
from d3d10 import HRESULT

D3D10_DEBUG_FEATURE = Flags(UINT, [
    "D3D10_DEBUG_FEATURE_FLUSH_PER_RENDER_OP",
    "D3D10_DEBUG_FEATURE_FINISH_PER_RENDER_OP",
    "D3D10_DEBUG_FEATURE_PRESENT_PER_RENDER_OP",
])

ID3D10Debug = Interface("ID3D10Debug", IUnknown)
ID3D10Debug.methods += [
    StdMethod(HRESULT, "SetFeatureMask", [(D3D10_DEBUG_FEATURE, "Mask")]),
    StdMethod(UINT, "GetFeatureMask", [], sideeffects=False),
    StdMethod(HRESULT, "SetPresentPerRenderOpDelay", [(UINT, "Milliseconds")]),
    StdMethod(UINT, "GetPresentPerRenderOpDelay", [], sideeffects=False),
    StdMethod(HRESULT, "SetSwapChain", [(ObjPointer(IDXGISwapChain), "pSwapChain")]),
    StdMethod(HRESULT, "GetSwapChain", [Out(Pointer(ObjPointer(IDXGISwapChain)), "ppSwapChain")]),
    StdMethod(HRESULT, "Validate", []),
]

ID3D10SwitchToRef = Interface("ID3D10SwitchToRef", IUnknown)
ID3D10SwitchToRef.methods += [
    StdMethod(BOOL, "SetUseRef", [(BOOL, "UseRef")]),
    StdMethod(BOOL, "GetUseRef", [], sideeffects=False),
]

D3D10_MESSAGE_CATEGORY = Enum("D3D10_MESSAGE_CATEGORY", [
    "D3D10_MESSAGE_CATEGORY_APPLICATION_DEFINED",
    "D3D10_MESSAGE_CATEGORY_MISCELLANEOUS",
    "D3D10_MESSAGE_CATEGORY_INITIALIZATION",
    "D3D10_MESSAGE_CATEGORY_CLEANUP",
    "D3D10_MESSAGE_CATEGORY_COMPILATION",
    "D3D10_MESSAGE_CATEGORY_STATE_CREATION",
    "D3D10_MESSAGE_CATEGORY_STATE_SETTING",
    "D3D10_MESSAGE_CATEGORY_STATE_GETTING",
    "D3D10_MESSAGE_CATEGORY_RESOURCE_MANIPULATION",
    "D3D10_MESSAGE_CATEGORY_EXECUTION",
])

D3D10_MESSAGE_SEVERITY = Enum("D3D10_MESSAGE_SEVERITY", [
    "D3D10_MESSAGE_SEVERITY_CORRUPTION",
    "D3D10_MESSAGE_SEVERITY_ERROR",
    "D3D10_MESSAGE_SEVERITY_WARNING",
    "D3D10_MESSAGE_SEVERITY_INFO",
])

D3D10_MESSAGE_ID = Enum("D3D10_MESSAGE_ID", [
    "D3D10_MESSAGE_ID_UNKNOWN",
    "D3D10_MESSAGE_ID_DEVICE_IASETVERTEXBUFFERS_HAZARD",
    "D3D10_MESSAGE_ID_DEVICE_IASETINDEXBUFFER_HAZARD",
    "D3D10_MESSAGE_ID_DEVICE_VSSETSHADERRESOURCES_HAZARD",
    "D3D10_MESSAGE_ID_DEVICE_VSSETCONSTANTBUFFERS_HAZARD",
    "D3D10_MESSAGE_ID_DEVICE_GSSETSHADERRESOURCES_HAZARD",
    "D3D10_MESSAGE_ID_DEVICE_GSSETCONSTANTBUFFERS_HAZARD",
    "D3D10_MESSAGE_ID_DEVICE_PSSETSHADERRESOURCES_HAZARD",
    "D3D10_MESSAGE_ID_DEVICE_PSSETCONSTANTBUFFERS_HAZARD",
    "D3D10_MESSAGE_ID_DEVICE_OMSETRENDERTARGETS_HAZARD",
    "D3D10_MESSAGE_ID_DEVICE_SOSETTARGETS_HAZARD",
    "D3D10_MESSAGE_ID_STRING_FROM_APPLICATION",
    "D3D10_MESSAGE_ID_CORRUPTED_THIS",
    "D3D10_MESSAGE_ID_CORRUPTED_PARAMETER1",
    "D3D10_MESSAGE_ID_CORRUPTED_PARAMETER2",
    "D3D10_MESSAGE_ID_CORRUPTED_PARAMETER3",
    "D3D10_MESSAGE_ID_CORRUPTED_PARAMETER4",
    "D3D10_MESSAGE_ID_CORRUPTED_PARAMETER5",
    "D3D10_MESSAGE_ID_CORRUPTED_PARAMETER6",
    "D3D10_MESSAGE_ID_CORRUPTED_PARAMETER7",
    "D3D10_MESSAGE_ID_CORRUPTED_PARAMETER8",
    "D3D10_MESSAGE_ID_CORRUPTED_PARAMETER9",
    "D3D10_MESSAGE_ID_CORRUPTED_PARAMETER10",
    "D3D10_MESSAGE_ID_CORRUPTED_PARAMETER11",
    "D3D10_MESSAGE_ID_CORRUPTED_PARAMETER12",
    "D3D10_MESSAGE_ID_CORRUPTED_PARAMETER13",
    "D3D10_MESSAGE_ID_CORRUPTED_PARAMETER14",
    "D3D10_MESSAGE_ID_CORRUPTED_PARAMETER15",
    "D3D10_MESSAGE_ID_CORRUPTED_MULTITHREADING",
    "D3D10_MESSAGE_ID_MESSAGE_REPORTING_OUTOFMEMORY",
    "D3D10_MESSAGE_ID_IASETINPUTLAYOUT_UNBINDDELETINGOBJECT",
    "D3D10_MESSAGE_ID_IASETVERTEXBUFFERS_UNBINDDELETINGOBJECT",
    "D3D10_MESSAGE_ID_IASETINDEXBUFFER_UNBINDDELETINGOBJECT",
    "D3D10_MESSAGE_ID_VSSETSHADER_UNBINDDELETINGOBJECT",
    "D3D10_MESSAGE_ID_VSSETSHADERRESOURCES_UNBINDDELETINGOBJECT",
    "D3D10_MESSAGE_ID_VSSETCONSTANTBUFFERS_UNBINDDELETINGOBJECT",
    "D3D10_MESSAGE_ID_VSSETSAMPLERS_UNBINDDELETINGOBJECT",
    "D3D10_MESSAGE_ID_GSSETSHADER_UNBINDDELETINGOBJECT",
    "D3D10_MESSAGE_ID_GSSETSHADERRESOURCES_UNBINDDELETINGOBJECT",
    "D3D10_MESSAGE_ID_GSSETCONSTANTBUFFERS_UNBINDDELETINGOBJECT",
    "D3D10_MESSAGE_ID_GSSETSAMPLERS_UNBINDDELETINGOBJECT",
    "D3D10_MESSAGE_ID_SOSETTARGETS_UNBINDDELETINGOBJECT",
    "D3D10_MESSAGE_ID_PSSETSHADER_UNBINDDELETINGOBJECT",
    "D3D10_MESSAGE_ID_PSSETSHADERRESOURCES_UNBINDDELETINGOBJECT",
    "D3D10_MESSAGE_ID_PSSETCONSTANTBUFFERS_UNBINDDELETINGOBJECT",
    "D3D10_MESSAGE_ID_PSSETSAMPLERS_UNBINDDELETINGOBJECT",
    "D3D10_MESSAGE_ID_RSSETSTATE_UNBINDDELETINGOBJECT",
    "D3D10_MESSAGE_ID_OMSETBLENDSTATE_UNBINDDELETINGOBJECT",
    "D3D10_MESSAGE_ID_OMSETDEPTHSTENCILSTATE_UNBINDDELETINGOBJECT",
    "D3D10_MESSAGE_ID_OMSETRENDERTARGETS_UNBINDDELETINGOBJECT",
    "D3D10_MESSAGE_ID_SETPREDICATION_UNBINDDELETINGOBJECT",
    "D3D10_MESSAGE_ID_GETPRIVATEDATA_MOREDATA",
    "D3D10_MESSAGE_ID_SETPRIVATEDATA_INVALIDFREEDATA",
    "D3D10_MESSAGE_ID_SETPRIVATEDATA_INVALIDIUNKNOWN",
    "D3D10_MESSAGE_ID_SETPRIVATEDATA_INVALIDFLAGS",
    "D3D10_MESSAGE_ID_SETPRIVATEDATA_CHANGINGPARAMS",
    "D3D10_MESSAGE_ID_SETPRIVATEDATA_OUTOFMEMORY",
    "D3D10_MESSAGE_ID_CREATEBUFFER_UNRECOGNIZEDFORMAT",
    "D3D10_MESSAGE_ID_CREATEBUFFER_INVALIDSAMPLES",
    "D3D10_MESSAGE_ID_CREATEBUFFER_UNRECOGNIZEDUSAGE",
    "D3D10_MESSAGE_ID_CREATEBUFFER_UNRECOGNIZEDBINDFLAGS",
    "D3D10_MESSAGE_ID_CREATEBUFFER_UNRECOGNIZEDCPUACCESSFLAGS",
    "D3D10_MESSAGE_ID_CREATEBUFFER_UNRECOGNIZEDMISCFLAGS",
    "D3D10_MESSAGE_ID_CREATEBUFFER_INVALIDCPUACCESSFLAGS",
    "D3D10_MESSAGE_ID_CREATEBUFFER_INVALIDBINDFLAGS",
    "D3D10_MESSAGE_ID_CREATEBUFFER_INVALIDINITIALDATA",
    "D3D10_MESSAGE_ID_CREATEBUFFER_INVALIDDIMENSIONS",
    "D3D10_MESSAGE_ID_CREATEBUFFER_INVALIDMIPLEVELS",
    "D3D10_MESSAGE_ID_CREATEBUFFER_INVALIDMISCFLAGS",
    "D3D10_MESSAGE_ID_CREATEBUFFER_INVALIDARG_RETURN",
    "D3D10_MESSAGE_ID_CREATEBUFFER_OUTOFMEMORY_RETURN",
    "D3D10_MESSAGE_ID_CREATEBUFFER_NULLDESC",
    "D3D10_MESSAGE_ID_CREATEBUFFER_INVALIDCONSTANTBUFFERBINDINGS",
    "D3D10_MESSAGE_ID_CREATEBUFFER_LARGEALLOCATION",
    "D3D10_MESSAGE_ID_CREATETEXTURE1D_UNRECOGNIZEDFORMAT",
    "D3D10_MESSAGE_ID_CREATETEXTURE1D_UNSUPPORTEDFORMAT",
    "D3D10_MESSAGE_ID_CREATETEXTURE1D_INVALIDSAMPLES",
    "D3D10_MESSAGE_ID_CREATETEXTURE1D_UNRECOGNIZEDUSAGE",
    "D3D10_MESSAGE_ID_CREATETEXTURE1D_UNRECOGNIZEDBINDFLAGS",
    "D3D10_MESSAGE_ID_CREATETEXTURE1D_UNRECOGNIZEDCPUACCESSFLAGS",
    "D3D10_MESSAGE_ID_CREATETEXTURE1D_UNRECOGNIZEDMISCFLAGS",
    "D3D10_MESSAGE_ID_CREATETEXTURE1D_INVALIDCPUACCESSFLAGS",
    "D3D10_MESSAGE_ID_CREATETEXTURE1D_INVALIDBINDFLAGS",
    "D3D10_MESSAGE_ID_CREATETEXTURE1D_INVALIDINITIALDATA",
    "D3D10_MESSAGE_ID_CREATETEXTURE1D_INVALIDDIMENSIONS",
    "D3D10_MESSAGE_ID_CREATETEXTURE1D_INVALIDMIPLEVELS",
    "D3D10_MESSAGE_ID_CREATETEXTURE1D_INVALIDMISCFLAGS",
    "D3D10_MESSAGE_ID_CREATETEXTURE1D_INVALIDARG_RETURN",
    "D3D10_MESSAGE_ID_CREATETEXTURE1D_OUTOFMEMORY_RETURN",
    "D3D10_MESSAGE_ID_CREATETEXTURE1D_NULLDESC",
    "D3D10_MESSAGE_ID_CREATETEXTURE1D_LARGEALLOCATION",
    "D3D10_MESSAGE_ID_CREATETEXTURE2D_UNRECOGNIZEDFORMAT",
    "D3D10_MESSAGE_ID_CREATETEXTURE2D_UNSUPPORTEDFORMAT",
    "D3D10_MESSAGE_ID_CREATETEXTURE2D_INVALIDSAMPLES",
    "D3D10_MESSAGE_ID_CREATETEXTURE2D_UNRECOGNIZEDUSAGE",
    "D3D10_MESSAGE_ID_CREATETEXTURE2D_UNRECOGNIZEDBINDFLAGS",
    "D3D10_MESSAGE_ID_CREATETEXTURE2D_UNRECOGNIZEDCPUACCESSFLAGS",
    "D3D10_MESSAGE_ID_CREATETEXTURE2D_UNRECOGNIZEDMISCFLAGS",
    "D3D10_MESSAGE_ID_CREATETEXTURE2D_INVALIDCPUACCESSFLAGS",
    "D3D10_MESSAGE_ID_CREATETEXTURE2D_INVALIDBINDFLAGS",
    "D3D10_MESSAGE_ID_CREATETEXTURE2D_INVALIDINITIALDATA",
    "D3D10_MESSAGE_ID_CREATETEXTURE2D_INVALIDDIMENSIONS",
    "D3D10_MESSAGE_ID_CREATETEXTURE2D_INVALIDMIPLEVELS",
    "D3D10_MESSAGE_ID_CREATETEXTURE2D_INVALIDMISCFLAGS",
    "D3D10_MESSAGE_ID_CREATETEXTURE2D_INVALIDARG_RETURN",
    "D3D10_MESSAGE_ID_CREATETEXTURE2D_OUTOFMEMORY_RETURN",
    "D3D10_MESSAGE_ID_CREATETEXTURE2D_NULLDESC",
    "D3D10_MESSAGE_ID_CREATETEXTURE2D_LARGEALLOCATION",
    "D3D10_MESSAGE_ID_CREATETEXTURE3D_UNRECOGNIZEDFORMAT",
    "D3D10_MESSAGE_ID_CREATETEXTURE3D_UNSUPPORTEDFORMAT",
    "D3D10_MESSAGE_ID_CREATETEXTURE3D_INVALIDSAMPLES",
    "D3D10_MESSAGE_ID_CREATETEXTURE3D_UNRECOGNIZEDUSAGE",
    "D3D10_MESSAGE_ID_CREATETEXTURE3D_UNRECOGNIZEDBINDFLAGS",
    "D3D10_MESSAGE_ID_CREATETEXTURE3D_UNRECOGNIZEDCPUACCESSFLAGS",
    "D3D10_MESSAGE_ID_CREATETEXTURE3D_UNRECOGNIZEDMISCFLAGS",
    "D3D10_MESSAGE_ID_CREATETEXTURE3D_INVALIDCPUACCESSFLAGS",
    "D3D10_MESSAGE_ID_CREATETEXTURE3D_INVALIDBINDFLAGS",
    "D3D10_MESSAGE_ID_CREATETEXTURE3D_INVALIDINITIALDATA",
    "D3D10_MESSAGE_ID_CREATETEXTURE3D_INVALIDDIMENSIONS",
    "D3D10_MESSAGE_ID_CREATETEXTURE3D_INVALIDMIPLEVELS",
    "D3D10_MESSAGE_ID_CREATETEXTURE3D_INVALIDMISCFLAGS",
    "D3D10_MESSAGE_ID_CREATETEXTURE3D_INVALIDARG_RETURN",
    "D3D10_MESSAGE_ID_CREATETEXTURE3D_OUTOFMEMORY_RETURN",
    "D3D10_MESSAGE_ID_CREATETEXTURE3D_NULLDESC",
    "D3D10_MESSAGE_ID_CREATETEXTURE3D_LARGEALLOCATION",
    "D3D10_MESSAGE_ID_CREATESHADERRESOURCEVIEW_UNRECOGNIZEDFORMAT",
    "D3D10_MESSAGE_ID_CREATESHADERRESOURCEVIEW_INVALIDDESC",
    "D3D10_MESSAGE_ID_CREATESHADERRESOURCEVIEW_INVALIDFORMAT",
    "D3D10_MESSAGE_ID_CREATESHADERRESOURCEVIEW_INVALIDDIMENSIONS",
    "D3D10_MESSAGE_ID_CREATESHADERRESOURCEVIEW_INVALIDRESOURCE",
    "D3D10_MESSAGE_ID_CREATESHADERRESOURCEVIEW_TOOMANYOBJECTS",
    "D3D10_MESSAGE_ID_CREATESHADERRESOURCEVIEW_INVALIDARG_RETURN",
    "D3D10_MESSAGE_ID_CREATESHADERRESOURCEVIEW_OUTOFMEMORY_RETURN",
    "D3D10_MESSAGE_ID_CREATERENDERTARGETVIEW_UNRECOGNIZEDFORMAT",
    "D3D10_MESSAGE_ID_CREATERENDERTARGETVIEW_UNSUPPORTEDFORMAT",
    "D3D10_MESSAGE_ID_CREATERENDERTARGETVIEW_INVALIDDESC",
    "D3D10_MESSAGE_ID_CREATERENDERTARGETVIEW_INVALIDFORMAT",
    "D3D10_MESSAGE_ID_CREATERENDERTARGETVIEW_INVALIDDIMENSIONS",
    "D3D10_MESSAGE_ID_CREATERENDERTARGETVIEW_INVALIDRESOURCE",
    "D3D10_MESSAGE_ID_CREATERENDERTARGETVIEW_TOOMANYOBJECTS",
    "D3D10_MESSAGE_ID_CREATERENDERTARGETVIEW_INVALIDARG_RETURN",
    "D3D10_MESSAGE_ID_CREATERENDERTARGETVIEW_OUTOFMEMORY_RETURN",
    "D3D10_MESSAGE_ID_CREATEDEPTHSTENCILVIEW_UNRECOGNIZEDFORMAT",
    "D3D10_MESSAGE_ID_CREATEDEPTHSTENCILVIEW_INVALIDDESC",
    "D3D10_MESSAGE_ID_CREATEDEPTHSTENCILVIEW_INVALIDFORMAT",
    "D3D10_MESSAGE_ID_CREATEDEPTHSTENCILVIEW_INVALIDDIMENSIONS",
    "D3D10_MESSAGE_ID_CREATEDEPTHSTENCILVIEW_INVALIDRESOURCE",
    "D3D10_MESSAGE_ID_CREATEDEPTHSTENCILVIEW_TOOMANYOBJECTS",
    "D3D10_MESSAGE_ID_CREATEDEPTHSTENCILVIEW_INVALIDARG_RETURN",
    "D3D10_MESSAGE_ID_CREATEDEPTHSTENCILVIEW_OUTOFMEMORY_RETURN",
    "D3D10_MESSAGE_ID_CREATEINPUTLAYOUT_OUTOFMEMORY",
    "D3D10_MESSAGE_ID_CREATEINPUTLAYOUT_TOOMANYELEMENTS",
    "D3D10_MESSAGE_ID_CREATEINPUTLAYOUT_INVALIDFORMAT",
    "D3D10_MESSAGE_ID_CREATEINPUTLAYOUT_INCOMPATIBLEFORMAT",
    "D3D10_MESSAGE_ID_CREATEINPUTLAYOUT_INVALIDSLOT",
    "D3D10_MESSAGE_ID_CREATEINPUTLAYOUT_INVALIDINPUTSLOTCLASS",
    "D3D10_MESSAGE_ID_CREATEINPUTLAYOUT_STEPRATESLOTCLASSMISMATCH",
    "D3D10_MESSAGE_ID_CREATEINPUTLAYOUT_INVALIDSLOTCLASSCHANGE",
    "D3D10_MESSAGE_ID_CREATEINPUTLAYOUT_INVALIDSTEPRATECHANGE",
    "D3D10_MESSAGE_ID_CREATEINPUTLAYOUT_INVALIDALIGNMENT",
    "D3D10_MESSAGE_ID_CREATEINPUTLAYOUT_DUPLICATESEMANTIC",
    "D3D10_MESSAGE_ID_CREATEINPUTLAYOUT_UNPARSEABLEINPUTSIGNATURE",
    "D3D10_MESSAGE_ID_CREATEINPUTLAYOUT_NULLSEMANTIC",
    "D3D10_MESSAGE_ID_CREATEINPUTLAYOUT_MISSINGELEMENT",
    "D3D10_MESSAGE_ID_CREATEINPUTLAYOUT_NULLDESC",
    "D3D10_MESSAGE_ID_CREATEVERTEXSHADER_OUTOFMEMORY",
    "D3D10_MESSAGE_ID_CREATEVERTEXSHADER_INVALIDSHADERBYTECODE",
    "D3D10_MESSAGE_ID_CREATEVERTEXSHADER_INVALIDSHADERTYPE",
    "D3D10_MESSAGE_ID_CREATEGEOMETRYSHADER_OUTOFMEMORY",
    "D3D10_MESSAGE_ID_CREATEGEOMETRYSHADER_INVALIDSHADERBYTECODE",
    "D3D10_MESSAGE_ID_CREATEGEOMETRYSHADER_INVALIDSHADERTYPE",
    "D3D10_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_OUTOFMEMORY",
    "D3D10_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_INVALIDSHADERBYTECODE",
    "D3D10_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_INVALIDSHADERTYPE",
    "D3D10_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_INVALIDNUMENTRIES",
    "D3D10_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_OUTPUTSTREAMSTRIDEUNUSED",
    "D3D10_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_UNEXPECTEDDECL",
    "D3D10_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_EXPECTEDDECL",
    "D3D10_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_OUTPUTSLOT0EXPECTED",
    "D3D10_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_INVALIDOUTPUTSLOT",
    "D3D10_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_ONLYONEELEMENTPERSLOT",
    "D3D10_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_INVALIDCOMPONENTCOUNT",
    "D3D10_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_INVALIDSTARTCOMPONENTANDCOMPONENTCOUNT",
    "D3D10_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_INVALIDGAPDEFINITION",
    "D3D10_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_REPEATEDOUTPUT",
    "D3D10_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_INVALIDOUTPUTSTREAMSTRIDE",
    "D3D10_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_MISSINGSEMANTIC",
    "D3D10_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_MASKMISMATCH",
    "D3D10_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_CANTHAVEONLYGAPS",
    "D3D10_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_DECLTOOCOMPLEX",
    "D3D10_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_MISSINGOUTPUTSIGNATURE",
    "D3D10_MESSAGE_ID_CREATEPIXELSHADER_OUTOFMEMORY",
    "D3D10_MESSAGE_ID_CREATEPIXELSHADER_INVALIDSHADERBYTECODE",
    "D3D10_MESSAGE_ID_CREATEPIXELSHADER_INVALIDSHADERTYPE",
    "D3D10_MESSAGE_ID_CREATERASTERIZERSTATE_INVALIDFILLMODE",
    "D3D10_MESSAGE_ID_CREATERASTERIZERSTATE_INVALIDCULLMODE",
    "D3D10_MESSAGE_ID_CREATERASTERIZERSTATE_INVALIDDEPTHBIASCLAMP",
    "D3D10_MESSAGE_ID_CREATERASTERIZERSTATE_INVALIDSLOPESCALEDDEPTHBIAS",
    "D3D10_MESSAGE_ID_CREATERASTERIZERSTATE_TOOMANYOBJECTS",
    "D3D10_MESSAGE_ID_CREATERASTERIZERSTATE_NULLDESC",
    "D3D10_MESSAGE_ID_CREATEDEPTHSTENCILSTATE_INVALIDDEPTHWRITEMASK",
    "D3D10_MESSAGE_ID_CREATEDEPTHSTENCILSTATE_INVALIDDEPTHFUNC",
    "D3D10_MESSAGE_ID_CREATEDEPTHSTENCILSTATE_INVALIDFRONTFACESTENCILFAILOP",
    "D3D10_MESSAGE_ID_CREATEDEPTHSTENCILSTATE_INVALIDFRONTFACESTENCILZFAILOP",
    "D3D10_MESSAGE_ID_CREATEDEPTHSTENCILSTATE_INVALIDFRONTFACESTENCILPASSOP",
    "D3D10_MESSAGE_ID_CREATEDEPTHSTENCILSTATE_INVALIDFRONTFACESTENCILFUNC",
    "D3D10_MESSAGE_ID_CREATEDEPTHSTENCILSTATE_INVALIDBACKFACESTENCILFAILOP",
    "D3D10_MESSAGE_ID_CREATEDEPTHSTENCILSTATE_INVALIDBACKFACESTENCILZFAILOP",
    "D3D10_MESSAGE_ID_CREATEDEPTHSTENCILSTATE_INVALIDBACKFACESTENCILPASSOP",
    "D3D10_MESSAGE_ID_CREATEDEPTHSTENCILSTATE_INVALIDBACKFACESTENCILFUNC",
    "D3D10_MESSAGE_ID_CREATEDEPTHSTENCILSTATE_TOOMANYOBJECTS",
    "D3D10_MESSAGE_ID_CREATEDEPTHSTENCILSTATE_NULLDESC",
    "D3D10_MESSAGE_ID_CREATEBLENDSTATE_INVALIDSRCBLEND",
    "D3D10_MESSAGE_ID_CREATEBLENDSTATE_INVALIDDESTBLEND",
    "D3D10_MESSAGE_ID_CREATEBLENDSTATE_INVALIDBLENDOP",
    "D3D10_MESSAGE_ID_CREATEBLENDSTATE_INVALIDSRCBLENDALPHA",
    "D3D10_MESSAGE_ID_CREATEBLENDSTATE_INVALIDDESTBLENDALPHA",
    "D3D10_MESSAGE_ID_CREATEBLENDSTATE_INVALIDBLENDOPALPHA",
    "D3D10_MESSAGE_ID_CREATEBLENDSTATE_INVALIDRENDERTARGETWRITEMASK",
    "D3D10_MESSAGE_ID_CREATEBLENDSTATE_TOOMANYOBJECTS",
    "D3D10_MESSAGE_ID_CREATEBLENDSTATE_NULLDESC",
    "D3D10_MESSAGE_ID_CREATESAMPLERSTATE_INVALIDFILTER",
    "D3D10_MESSAGE_ID_CREATESAMPLERSTATE_INVALIDADDRESSU",
    "D3D10_MESSAGE_ID_CREATESAMPLERSTATE_INVALIDADDRESSV",
    "D3D10_MESSAGE_ID_CREATESAMPLERSTATE_INVALIDADDRESSW",
    "D3D10_MESSAGE_ID_CREATESAMPLERSTATE_INVALIDMIPLODBIAS",
    "D3D10_MESSAGE_ID_CREATESAMPLERSTATE_INVALIDMAXANISOTROPY",
    "D3D10_MESSAGE_ID_CREATESAMPLERSTATE_INVALIDCOMPARISONFUNC",
    "D3D10_MESSAGE_ID_CREATESAMPLERSTATE_INVALIDMINLOD",
    "D3D10_MESSAGE_ID_CREATESAMPLERSTATE_INVALIDMAXLOD",
    "D3D10_MESSAGE_ID_CREATESAMPLERSTATE_TOOMANYOBJECTS",
    "D3D10_MESSAGE_ID_CREATESAMPLERSTATE_NULLDESC",
    "D3D10_MESSAGE_ID_CREATEQUERYORPREDICATE_INVALIDQUERY",
    "D3D10_MESSAGE_ID_CREATEQUERYORPREDICATE_INVALIDMISCFLAGS",
    "D3D10_MESSAGE_ID_CREATEQUERYORPREDICATE_UNEXPECTEDMISCFLAG",
    "D3D10_MESSAGE_ID_CREATEQUERYORPREDICATE_NULLDESC",
    "D3D10_MESSAGE_ID_DEVICE_IASETPRIMITIVETOPOLOGY_TOPOLOGY_UNRECOGNIZED",
    "D3D10_MESSAGE_ID_DEVICE_IASETPRIMITIVETOPOLOGY_TOPOLOGY_UNDEFINED",
    "D3D10_MESSAGE_ID_IASETVERTEXBUFFERS_INVALIDBUFFER",
    "D3D10_MESSAGE_ID_DEVICE_IASETVERTEXBUFFERS_OFFSET_TOO_LARGE",
    "D3D10_MESSAGE_ID_DEVICE_IASETVERTEXBUFFERS_BUFFERS_EMPTY",
    "D3D10_MESSAGE_ID_IASETINDEXBUFFER_INVALIDBUFFER",
    "D3D10_MESSAGE_ID_DEVICE_IASETINDEXBUFFER_FORMAT_INVALID",
    "D3D10_MESSAGE_ID_DEVICE_IASETINDEXBUFFER_OFFSET_TOO_LARGE",
    "D3D10_MESSAGE_ID_DEVICE_IASETINDEXBUFFER_OFFSET_UNALIGNED",
    "D3D10_MESSAGE_ID_DEVICE_VSSETSHADERRESOURCES_VIEWS_EMPTY",
    "D3D10_MESSAGE_ID_VSSETCONSTANTBUFFERS_INVALIDBUFFER",
    "D3D10_MESSAGE_ID_DEVICE_VSSETCONSTANTBUFFERS_BUFFERS_EMPTY",
    "D3D10_MESSAGE_ID_DEVICE_VSSETSAMPLERS_SAMPLERS_EMPTY",
    "D3D10_MESSAGE_ID_DEVICE_GSSETSHADERRESOURCES_VIEWS_EMPTY",
    "D3D10_MESSAGE_ID_GSSETCONSTANTBUFFERS_INVALIDBUFFER",
    "D3D10_MESSAGE_ID_DEVICE_GSSETCONSTANTBUFFERS_BUFFERS_EMPTY",
    "D3D10_MESSAGE_ID_DEVICE_GSSETSAMPLERS_SAMPLERS_EMPTY",
    "D3D10_MESSAGE_ID_SOSETTARGETS_INVALIDBUFFER",
    "D3D10_MESSAGE_ID_DEVICE_SOSETTARGETS_OFFSET_UNALIGNED",
    "D3D10_MESSAGE_ID_DEVICE_PSSETSHADERRESOURCES_VIEWS_EMPTY",
    "D3D10_MESSAGE_ID_PSSETCONSTANTBUFFERS_INVALIDBUFFER",
    "D3D10_MESSAGE_ID_DEVICE_PSSETCONSTANTBUFFERS_BUFFERS_EMPTY",
    "D3D10_MESSAGE_ID_DEVICE_PSSETSAMPLERS_SAMPLERS_EMPTY",
    "D3D10_MESSAGE_ID_DEVICE_RSSETVIEWPORTS_INVALIDVIEWPORT",
    "D3D10_MESSAGE_ID_DEVICE_RSSETSCISSORRECTS_INVALIDSCISSOR",
    "D3D10_MESSAGE_ID_CLEARRENDERTARGETVIEW_DENORMFLUSH",
    "D3D10_MESSAGE_ID_CLEARDEPTHSTENCILVIEW_DENORMFLUSH",
    "D3D10_MESSAGE_ID_CLEARDEPTHSTENCILVIEW_INVALID",
    "D3D10_MESSAGE_ID_DEVICE_IAGETVERTEXBUFFERS_BUFFERS_EMPTY",
    "D3D10_MESSAGE_ID_DEVICE_VSGETSHADERRESOURCES_VIEWS_EMPTY",
    "D3D10_MESSAGE_ID_DEVICE_VSGETCONSTANTBUFFERS_BUFFERS_EMPTY",
    "D3D10_MESSAGE_ID_DEVICE_VSGETSAMPLERS_SAMPLERS_EMPTY",
    "D3D10_MESSAGE_ID_DEVICE_GSGETSHADERRESOURCES_VIEWS_EMPTY",
    "D3D10_MESSAGE_ID_DEVICE_GSGETCONSTANTBUFFERS_BUFFERS_EMPTY",
    "D3D10_MESSAGE_ID_DEVICE_GSGETSAMPLERS_SAMPLERS_EMPTY",
    "D3D10_MESSAGE_ID_DEVICE_SOGETTARGETS_BUFFERS_EMPTY",
    "D3D10_MESSAGE_ID_DEVICE_PSGETSHADERRESOURCES_VIEWS_EMPTY",
    "D3D10_MESSAGE_ID_DEVICE_PSGETCONSTANTBUFFERS_BUFFERS_EMPTY",
    "D3D10_MESSAGE_ID_DEVICE_PSGETSAMPLERS_SAMPLERS_EMPTY",
    "D3D10_MESSAGE_ID_DEVICE_RSGETVIEWPORTS_VIEWPORTS_EMPTY",
    "D3D10_MESSAGE_ID_DEVICE_RSGETSCISSORRECTS_RECTS_EMPTY",
    "D3D10_MESSAGE_ID_DEVICE_GENERATEMIPS_RESOURCE_INVALID",
    "D3D10_MESSAGE_ID_COPYSUBRESOURCEREGION_INVALIDDESTINATIONSUBRESOURCE",
    "D3D10_MESSAGE_ID_COPYSUBRESOURCEREGION_INVALIDSOURCESUBRESOURCE",
    "D3D10_MESSAGE_ID_COPYSUBRESOURCEREGION_INVALIDSOURCEBOX",
    "D3D10_MESSAGE_ID_COPYSUBRESOURCEREGION_INVALIDSOURCE",
    "D3D10_MESSAGE_ID_COPYSUBRESOURCEREGION_INVALIDDESTINATIONSTATE",
    "D3D10_MESSAGE_ID_COPYSUBRESOURCEREGION_INVALIDSOURCESTATE",
    "D3D10_MESSAGE_ID_COPYRESOURCE_INVALIDSOURCE",
    "D3D10_MESSAGE_ID_COPYRESOURCE_INVALIDDESTINATIONSTATE",
    "D3D10_MESSAGE_ID_COPYRESOURCE_INVALIDSOURCESTATE",
    "D3D10_MESSAGE_ID_UPDATESUBRESOURCE_INVALIDDESTINATIONSUBRESOURCE",
    "D3D10_MESSAGE_ID_UPDATESUBRESOURCE_INVALIDDESTINATIONBOX",
    "D3D10_MESSAGE_ID_UPDATESUBRESOURCE_INVALIDDESTINATIONSTATE",
    "D3D10_MESSAGE_ID_DEVICE_RESOLVESUBRESOURCE_DESTINATION_INVALID",
    "D3D10_MESSAGE_ID_DEVICE_RESOLVESUBRESOURCE_DESTINATION_SUBRESOURCE_INVALID",
    "D3D10_MESSAGE_ID_DEVICE_RESOLVESUBRESOURCE_SOURCE_INVALID",
    "D3D10_MESSAGE_ID_DEVICE_RESOLVESUBRESOURCE_SOURCE_SUBRESOURCE_INVALID",
    "D3D10_MESSAGE_ID_DEVICE_RESOLVESUBRESOURCE_FORMAT_INVALID",
    "D3D10_MESSAGE_ID_BUFFER_MAP_INVALIDMAPTYPE",
    "D3D10_MESSAGE_ID_BUFFER_MAP_INVALIDFLAGS",
    "D3D10_MESSAGE_ID_BUFFER_MAP_ALREADYMAPPED",
    "D3D10_MESSAGE_ID_BUFFER_MAP_DEVICEREMOVED_RETURN",
    "D3D10_MESSAGE_ID_BUFFER_UNMAP_NOTMAPPED",
    "D3D10_MESSAGE_ID_TEXTURE1D_MAP_INVALIDMAPTYPE",
    "D3D10_MESSAGE_ID_TEXTURE1D_MAP_INVALIDSUBRESOURCE",
    "D3D10_MESSAGE_ID_TEXTURE1D_MAP_INVALIDFLAGS",
    "D3D10_MESSAGE_ID_TEXTURE1D_MAP_ALREADYMAPPED",
    "D3D10_MESSAGE_ID_TEXTURE1D_MAP_DEVICEREMOVED_RETURN",
    "D3D10_MESSAGE_ID_TEXTURE1D_UNMAP_INVALIDSUBRESOURCE",
    "D3D10_MESSAGE_ID_TEXTURE1D_UNMAP_NOTMAPPED",
    "D3D10_MESSAGE_ID_TEXTURE2D_MAP_INVALIDMAPTYPE",
    "D3D10_MESSAGE_ID_TEXTURE2D_MAP_INVALIDSUBRESOURCE",
    "D3D10_MESSAGE_ID_TEXTURE2D_MAP_INVALIDFLAGS",
    "D3D10_MESSAGE_ID_TEXTURE2D_MAP_ALREADYMAPPED",
    "D3D10_MESSAGE_ID_TEXTURE2D_MAP_DEVICEREMOVED_RETURN",
    "D3D10_MESSAGE_ID_TEXTURE2D_UNMAP_INVALIDSUBRESOURCE",
    "D3D10_MESSAGE_ID_TEXTURE2D_UNMAP_NOTMAPPED",
    "D3D10_MESSAGE_ID_TEXTURE3D_MAP_INVALIDMAPTYPE",
    "D3D10_MESSAGE_ID_TEXTURE3D_MAP_INVALIDSUBRESOURCE",
    "D3D10_MESSAGE_ID_TEXTURE3D_MAP_INVALIDFLAGS",
    "D3D10_MESSAGE_ID_TEXTURE3D_MAP_ALREADYMAPPED",
    "D3D10_MESSAGE_ID_TEXTURE3D_MAP_DEVICEREMOVED_RETURN",
    "D3D10_MESSAGE_ID_TEXTURE3D_UNMAP_INVALIDSUBRESOURCE",
    "D3D10_MESSAGE_ID_TEXTURE3D_UNMAP_NOTMAPPED",
    "D3D10_MESSAGE_ID_CHECKFORMATSUPPORT_FORMAT_DEPRECATED",
    "D3D10_MESSAGE_ID_CHECKMULTISAMPLEQUALITYLEVELS_FORMAT_DEPRECATED",
    "D3D10_MESSAGE_ID_SETEXCEPTIONMODE_UNRECOGNIZEDFLAGS",
    "D3D10_MESSAGE_ID_SETEXCEPTIONMODE_INVALIDARG_RETURN",
    "D3D10_MESSAGE_ID_SETEXCEPTIONMODE_DEVICEREMOVED_RETURN",
    "D3D10_MESSAGE_ID_REF_SIMULATING_INFINITELY_FAST_HARDWARE",
    "D3D10_MESSAGE_ID_REF_THREADING_MODE",
    "D3D10_MESSAGE_ID_REF_UMDRIVER_EXCEPTION",
    "D3D10_MESSAGE_ID_REF_KMDRIVER_EXCEPTION",
    "D3D10_MESSAGE_ID_REF_HARDWARE_EXCEPTION",
    "D3D10_MESSAGE_ID_REF_ACCESSING_INDEXABLE_TEMP_OUT_OF_RANGE",
    "D3D10_MESSAGE_ID_REF_PROBLEM_PARSING_SHADER",
    "D3D10_MESSAGE_ID_REF_OUT_OF_MEMORY",
    "D3D10_MESSAGE_ID_REF_INFO",
    "D3D10_MESSAGE_ID_DEVICE_DRAW_VERTEXPOS_OVERFLOW",
    "D3D10_MESSAGE_ID_DEVICE_DRAWINDEXED_INDEXPOS_OVERFLOW",
    "D3D10_MESSAGE_ID_DEVICE_DRAWINSTANCED_VERTEXPOS_OVERFLOW",
    "D3D10_MESSAGE_ID_DEVICE_DRAWINSTANCED_INSTANCEPOS_OVERFLOW",
    "D3D10_MESSAGE_ID_DEVICE_DRAWINDEXEDINSTANCED_INSTANCEPOS_OVERFLOW",
    "D3D10_MESSAGE_ID_DEVICE_DRAWINDEXEDINSTANCED_INDEXPOS_OVERFLOW",
    "D3D10_MESSAGE_ID_DEVICE_DRAW_VERTEX_SHADER_NOT_SET",
    "D3D10_MESSAGE_ID_DEVICE_SHADER_LINKAGE_SEMANTICNAME_NOT_FOUND",
    "D3D10_MESSAGE_ID_DEVICE_SHADER_LINKAGE_REGISTERINDEX",
    "D3D10_MESSAGE_ID_DEVICE_SHADER_LINKAGE_COMPONENTTYPE",
    "D3D10_MESSAGE_ID_DEVICE_SHADER_LINKAGE_REGISTERMASK",
    "D3D10_MESSAGE_ID_DEVICE_SHADER_LINKAGE_SYSTEMVALUE",
    "D3D10_MESSAGE_ID_DEVICE_SHADER_LINKAGE_NEVERWRITTEN_ALWAYSREADS",
    "D3D10_MESSAGE_ID_DEVICE_DRAW_VERTEX_BUFFER_NOT_SET",
    "D3D10_MESSAGE_ID_DEVICE_DRAW_INPUTLAYOUT_NOT_SET",
    "D3D10_MESSAGE_ID_DEVICE_DRAW_CONSTANT_BUFFER_NOT_SET",
    "D3D10_MESSAGE_ID_DEVICE_DRAW_CONSTANT_BUFFER_TOO_SMALL",
    "D3D10_MESSAGE_ID_DEVICE_DRAW_SAMPLER_NOT_SET",
    "D3D10_MESSAGE_ID_DEVICE_DRAW_SHADERRESOURCEVIEW_NOT_SET",
    "D3D10_MESSAGE_ID_DEVICE_DRAW_VIEW_DIMENSION_MISMATCH",
    "D3D10_MESSAGE_ID_DEVICE_DRAW_VERTEX_BUFFER_STRIDE_TOO_SMALL",
    "D3D10_MESSAGE_ID_DEVICE_DRAW_VERTEX_BUFFER_TOO_SMALL",
    "D3D10_MESSAGE_ID_DEVICE_DRAW_INDEX_BUFFER_NOT_SET",
    "D3D10_MESSAGE_ID_DEVICE_DRAW_INDEX_BUFFER_FORMAT_INVALID",
    "D3D10_MESSAGE_ID_DEVICE_DRAW_INDEX_BUFFER_TOO_SMALL",
    "D3D10_MESSAGE_ID_DEVICE_DRAW_GS_INPUT_PRIMITIVE_MISMATCH",
    "D3D10_MESSAGE_ID_DEVICE_DRAW_RESOURCE_RETURN_TYPE_MISMATCH",
    "D3D10_MESSAGE_ID_DEVICE_DRAW_POSITION_NOT_PRESENT",
    "D3D10_MESSAGE_ID_DEVICE_DRAW_OUTPUT_STREAM_NOT_SET",
    "D3D10_MESSAGE_ID_DEVICE_DRAW_BOUND_RESOURCE_MAPPED",
    "D3D10_MESSAGE_ID_DEVICE_DRAW_INVALID_PRIMITIVETOPOLOGY",
    "D3D10_MESSAGE_ID_DEVICE_DRAW_VERTEX_OFFSET_UNALIGNED",
    "D3D10_MESSAGE_ID_DEVICE_DRAW_VERTEX_STRIDE_UNALIGNED",
    "D3D10_MESSAGE_ID_DEVICE_DRAW_INDEX_OFFSET_UNALIGNED",
    "D3D10_MESSAGE_ID_DEVICE_DRAW_OUTPUT_STREAM_OFFSET_UNALIGNED",
    "D3D10_MESSAGE_ID_DEVICE_DRAW_RESOURCE_FORMAT_LD_UNSUPPORTED",
    "D3D10_MESSAGE_ID_DEVICE_DRAW_RESOURCE_FORMAT_SAMPLE_UNSUPPORTED",
    "D3D10_MESSAGE_ID_DEVICE_DRAW_RESOURCE_FORMAT_SAMPLE_C_UNSUPPORTED",
    "D3D10_MESSAGE_ID_DEVICE_DRAW_RESOURCE_MULTISAMPLE_UNSUPPORTED",
    "D3D10_MESSAGE_ID_DEVICE_DRAW_SO_TARGETS_BOUND_WITHOUT_SOURCE",
    "D3D10_MESSAGE_ID_DEVICE_DRAW_SO_STRIDE_LARGER_THAN_BUFFER",
    "D3D10_MESSAGE_ID_DEVICE_DRAW_OM_RENDER_TARGET_DOES_NOT_SUPPORT_BLENDING",
    "D3D10_MESSAGE_ID_DEVICE_DRAW_OM_DUAL_SOURCE_BLENDING_CAN_ONLY_HAVE_RENDER_TARGET_0",
    "D3D10_MESSAGE_ID_DEVICE_REMOVAL_PROCESS_AT_FAULT",
    "D3D10_MESSAGE_ID_DEVICE_REMOVAL_PROCESS_POSSIBLY_AT_FAULT",
    "D3D10_MESSAGE_ID_DEVICE_REMOVAL_PROCESS_NOT_AT_FAULT",
    "D3D10_MESSAGE_ID_DEVICE_OPEN_SHARED_RESOURCE_INVALIDARG_RETURN",
    "D3D10_MESSAGE_ID_DEVICE_OPEN_SHARED_RESOURCE_OUTOFMEMORY_RETURN",
    "D3D10_MESSAGE_ID_DEVICE_OPEN_SHARED_RESOURCE_BADINTERFACE_RETURN",
    "D3D10_MESSAGE_ID_DEVICE_DRAW_VIEWPORT_NOT_SET",
    "D3D10_MESSAGE_ID_CREATEINPUTLAYOUT_TRAILING_DIGIT_IN_SEMANTIC",
    "D3D10_MESSAGE_ID_CREATEGEOMETRYSHADERWITHSTREAMOUTPUT_TRAILING_DIGIT_IN_SEMANTIC",
    "D3D10_MESSAGE_ID_DEVICE_RSSETVIEWPORTS_DENORMFLUSH",
    "D3D10_MESSAGE_ID_OMSETRENDERTARGETS_INVALIDVIEW",
    "D3D10_MESSAGE_ID_DEVICE_SETTEXTFILTERSIZE_INVALIDDIMENSIONS",
    "D3D10_MESSAGE_ID_DEVICE_DRAW_SAMPLER_MISMATCH",
    "D3D10_MESSAGE_ID_CREATEINPUTLAYOUT_TYPE_MISMATCH",
    "D3D10_MESSAGE_ID_BLENDSTATE_GETDESC_LEGACY",
    "D3D10_MESSAGE_ID_SHADERRESOURCEVIEW_GETDESC_LEGACY",
    "D3D10_MESSAGE_ID_CREATEQUERY_OUTOFMEMORY_RETURN",
    "D3D10_MESSAGE_ID_CREATEPREDICATE_OUTOFMEMORY_RETURN",
    "D3D10_MESSAGE_ID_CREATECOUNTER_OUTOFRANGE_COUNTER",
    "D3D10_MESSAGE_ID_CREATECOUNTER_SIMULTANEOUS_ACTIVE_COUNTERS_EXHAUSTED",
    "D3D10_MESSAGE_ID_CREATECOUNTER_UNSUPPORTED_WELLKNOWN_COUNTER",
    "D3D10_MESSAGE_ID_CREATECOUNTER_OUTOFMEMORY_RETURN",
    "D3D10_MESSAGE_ID_CREATECOUNTER_NONEXCLUSIVE_RETURN",
    "D3D10_MESSAGE_ID_CREATECOUNTER_NULLDESC",
    "D3D10_MESSAGE_ID_CHECKCOUNTER_OUTOFRANGE_COUNTER",
    "D3D10_MESSAGE_ID_CHECKCOUNTER_UNSUPPORTED_WELLKNOWN_COUNTER",
    "D3D10_MESSAGE_ID_SETPREDICATION_INVALID_PREDICATE_STATE",
    "D3D10_MESSAGE_ID_QUERY_BEGIN_UNSUPPORTED",
    "D3D10_MESSAGE_ID_PREDICATE_BEGIN_DURING_PREDICATION",
    "D3D10_MESSAGE_ID_QUERY_BEGIN_DUPLICATE",
    "D3D10_MESSAGE_ID_QUERY_BEGIN_ABANDONING_PREVIOUS_RESULTS",
    "D3D10_MESSAGE_ID_PREDICATE_END_DURING_PREDICATION",
    "D3D10_MESSAGE_ID_QUERY_END_ABANDONING_PREVIOUS_RESULTS",
    "D3D10_MESSAGE_ID_QUERY_END_WITHOUT_BEGIN",
    "D3D10_MESSAGE_ID_QUERY_GETDATA_INVALID_DATASIZE",
    "D3D10_MESSAGE_ID_QUERY_GETDATA_INVALID_FLAGS",
    "D3D10_MESSAGE_ID_QUERY_GETDATA_INVALID_CALL",
    "D3D10_MESSAGE_ID_DEVICE_DRAW_PS_OUTPUT_TYPE_MISMATCH",
    "D3D10_MESSAGE_ID_DEVICE_DRAW_RESOURCE_FORMAT_GATHER_UNSUPPORTED",
    "D3D10_MESSAGE_ID_DEVICE_DRAW_INVALID_USE_OF_CENTER_MULTISAMPLE_PATTERN",
    "D3D10_MESSAGE_ID_DEVICE_IASETVERTEXBUFFERS_STRIDE_TOO_LARGE",
    "D3D10_MESSAGE_ID_DEVICE_IASETVERTEXBUFFERS_INVALIDRANGE",
    "D3D10_MESSAGE_ID_CREATEINPUTLAYOUT_EMPTY_LAYOUT",
    "D3D10_MESSAGE_ID_DEVICE_DRAW_RESOURCE_SAMPLE_COUNT_MISMATCH",
    "D3D10_MESSAGE_ID_D3D10_MESSAGES_END",
    "D3D10_MESSAGE_ID_D3D10L9_MESSAGES_START",
    "D3D10_MESSAGE_ID_CREATEDEPTHSTENCILSTATE_STENCIL_NO_TWO_SIDED",
    "D3D10_MESSAGE_ID_CREATERASTERIZERSTATE_DepthBiasClamp_NOT_SUPPORTED",
    "D3D10_MESSAGE_ID_CREATESAMPLERSTATE_NO_COMPARISON_SUPPORT",
    "D3D10_MESSAGE_ID_CREATESAMPLERSTATE_EXCESSIVE_ANISOTROPY",
    "D3D10_MESSAGE_ID_CREATESAMPLERSTATE_BORDER_OUT_OF_RANGE",
    "D3D10_MESSAGE_ID_VSSETSAMPLERS_NOT_SUPPORTED",
    "D3D10_MESSAGE_ID_VSSETSAMPLERS_TOO_MANY_SAMPLERS",
    "D3D10_MESSAGE_ID_PSSETSAMPLERS_TOO_MANY_SAMPLERS",
    "D3D10_MESSAGE_ID_CREATERESOURCE_NO_ARRAYS",
    "D3D10_MESSAGE_ID_CREATERESOURCE_NO_VB_AND_IB_BIND",
    "D3D10_MESSAGE_ID_CREATERESOURCE_NO_TEXTURE_1D",
    "D3D10_MESSAGE_ID_CREATERESOURCE_DIMENSION_OUT_OF_RANGE",
    "D3D10_MESSAGE_ID_CREATERESOURCE_NOT_BINDABLE_AS_SHADER_RESOURCE",
    "D3D10_MESSAGE_ID_OMSETRENDERTARGETS_TOO_MANY_RENDER_TARGETS",
    "D3D10_MESSAGE_ID_OMSETRENDERTARGETS_NO_DIFFERING_BIT_DEPTHS",
    "D3D10_MESSAGE_ID_IASETVERTEXBUFFERS_BAD_BUFFER_INDEX",
    "D3D10_MESSAGE_ID_DEVICE_RSSETVIEWPORTS_TOO_MANY_VIEWPORTS",
    "D3D10_MESSAGE_ID_DEVICE_IASETPRIMITIVETOPOLOGY_ADJACENCY_UNSUPPORTED",
    "D3D10_MESSAGE_ID_DEVICE_RSSETSCISSORRECTS_TOO_MANY_SCISSORS",
    "D3D10_MESSAGE_ID_COPYRESOURCE_ONLY_TEXTURE_2D_WITHIN_GPU_MEMORY",
    "D3D10_MESSAGE_ID_COPYRESOURCE_NO_TEXTURE_3D_READBACK",
    "D3D10_MESSAGE_ID_COPYRESOURCE_NO_TEXTURE_ONLY_READBACK",
    "D3D10_MESSAGE_ID_CREATEINPUTLAYOUT_UNSUPPORTED_FORMAT",
    "D3D10_MESSAGE_ID_CREATEBLENDSTATE_NO_ALPHA_TO_COVERAGE",
    "D3D10_MESSAGE_ID_CREATERASTERIZERSTATE_DepthClipEnable_MUST_BE_TRUE",
    "D3D10_MESSAGE_ID_DRAWINDEXED_STARTINDEXLOCATION_MUST_BE_POSITIVE",
    "D3D10_MESSAGE_ID_CREATESHADERRESOURCEVIEW_MUST_USE_LOWEST_LOD",
    "D3D10_MESSAGE_ID_CREATESAMPLERSTATE_MINLOD_MUST_NOT_BE_FRACTIONAL",
    "D3D10_MESSAGE_ID_CREATESAMPLERSTATE_MAXLOD_MUST_BE_FLT_MAX",
    "D3D10_MESSAGE_ID_CREATESHADERRESOURCEVIEW_FIRSTARRAYSLICE_MUST_BE_ZERO",
    "D3D10_MESSAGE_ID_CREATESHADERRESOURCEVIEW_CUBES_MUST_HAVE_6_SIDES",
    "D3D10_MESSAGE_ID_CREATERESOURCE_NOT_BINDABLE_AS_RENDER_TARGET",
    "D3D10_MESSAGE_ID_CREATERESOURCE_NO_DWORD_INDEX_BUFFER",
    "D3D10_MESSAGE_ID_CREATERESOURCE_MSAA_PRECLUDES_SHADER_RESOURCE",
    "D3D10_MESSAGE_ID_CREATERESOURCE_PRESENTATION_PRECLUDES_SHADER_RESOURCE",
    "D3D10_MESSAGE_ID_CREATEBLENDSTATE_NO_INDEPENDENT_BLEND_ENABLE",
    "D3D10_MESSAGE_ID_CREATEBLENDSTATE_NO_INDEPENDENT_WRITE_MASKS",
    "D3D10_MESSAGE_ID_CREATERESOURCE_NO_STREAM_OUT",
    "D3D10_MESSAGE_ID_CREATERESOURCE_ONLY_VB_IB_FOR_BUFFERS",
    "D3D10_MESSAGE_ID_CREATERESOURCE_NO_AUTOGEN_FOR_VOLUMES",
    "D3D10_MESSAGE_ID_CREATERESOURCE_DXGI_FORMAT_R8G8B8A8_CANNOT_BE_SHARED",
    "D3D10_MESSAGE_ID_VSSHADERRESOURCES_NOT_SUPPORTED",
    "D3D10_MESSAGE_ID_GEOMETRY_SHADER_NOT_SUPPORTED",
    "D3D10_MESSAGE_ID_STREAM_OUT_NOT_SUPPORTED",
    "D3D10_MESSAGE_ID_TEXT_FILTER_NOT_SUPPORTED",
    "D3D10_MESSAGE_ID_CREATEBLENDSTATE_NO_SEPARATE_ALPHA_BLEND",
    "D3D10_MESSAGE_ID_CREATEBLENDSTATE_NO_MRT_BLEND",
    "D3D10_MESSAGE_ID_CREATEBLENDSTATE_OPERATION_NOT_SUPPORTED",
    "D3D10_MESSAGE_ID_CREATESAMPLERSTATE_NO_MIRRORONCE",
    "D3D10_MESSAGE_ID_DRAWINSTANCED_NOT_SUPPORTED",
    "D3D10_MESSAGE_ID_DRAWINDEXEDINSTANCED_NOT_SUPPORTED_BELOW_9_3",
    "D3D10_MESSAGE_ID_DRAWINDEXED_POINTLIST_UNSUPPORTED",
    "D3D10_MESSAGE_ID_SETBLENDSTATE_SAMPLE_MASK_CANNOT_BE_ZERO",
    "D3D10_MESSAGE_ID_CREATERESOURCE_DIMENSION_EXCEEDS_FEATURE_LEVEL_DEFINITION",
    "D3D10_MESSAGE_ID_CREATERESOURCE_ONLY_SINGLE_MIP_LEVEL_DEPTH_STENCIL_SUPPORTED",
    "D3D10_MESSAGE_ID_DEVICE_RSSETSCISSORRECTS_NEGATIVESCISSOR",
    "D3D10_MESSAGE_ID_SLOT_ZERO_MUST_BE_D3D10_INPUT_PER_VERTEX_DATA",
    "D3D10_MESSAGE_ID_CREATERESOURCE_NON_POW_2_MIPMAP",
    "D3D10_MESSAGE_ID_CREATESAMPLERSTATE_BORDER_NOT_SUPPORTED",
    "D3D10_MESSAGE_ID_OMSETRENDERTARGETS_NO_SRGB_MRT",
    "D3D10_MESSAGE_ID_D3D10L9_MESSAGES_END",
])

D3D10_MESSAGE = Struct("D3D10_MESSAGE", [
    (D3D10_MESSAGE_CATEGORY, "Category"),
    (D3D10_MESSAGE_SEVERITY, "Severity"),
    (D3D10_MESSAGE_ID, "ID"),
    (ConstCString, "pDescription"),
    (SIZE_T, "DescriptionByteLength"),
])

D3D10_INFO_QUEUE_FILTER_DESC = Struct("D3D10_INFO_QUEUE_FILTER_DESC", [
    (UINT, "NumCategories"),
    (Pointer(D3D10_MESSAGE_CATEGORY), "pCategoryList"),
    (UINT, "NumSeverities"),
    (Pointer(D3D10_MESSAGE_SEVERITY), "pSeverityList"),
    (UINT, "NumIDs"),
    (OpaquePointer(D3D10_MESSAGE_ID), "pIDList"), # TODO: Array
])

D3D10_INFO_QUEUE_FILTER = Struct("D3D10_INFO_QUEUE_FILTER", [
    (D3D10_INFO_QUEUE_FILTER_DESC, "AllowList"),
    (D3D10_INFO_QUEUE_FILTER_DESC, "DenyList"),
])

ID3D10InfoQueue = Interface("ID3D10InfoQueue", IUnknown)
ID3D10InfoQueue.methods += [
    StdMethod(HRESULT, "SetMessageCountLimit", [(UINT64, "MessageCountLimit")], sideeffects=False),
    StdMethod(Void, "ClearStoredMessages", [], sideeffects=False),
    StdMethod(HRESULT, "GetMessage", [(UINT64, "MessageIndex"), Out(Pointer(D3D10_MESSAGE), "pMessage"), Out(Pointer(SIZE_T), "pMessageByteLength")], sideeffects=False),
    StdMethod(UINT64, "GetNumMessagesAllowedByStorageFilter", [], sideeffects=False),
    StdMethod(UINT64, "GetNumMessagesDeniedByStorageFilter", [], sideeffects=False),
    StdMethod(UINT64, "GetNumStoredMessages", [], sideeffects=False),
    StdMethod(UINT64, "GetNumStoredMessagesAllowedByRetrievalFilter", [], sideeffects=False),
    StdMethod(UINT64, "GetNumMessagesDiscardedByMessageCountLimit", [], sideeffects=False),
    StdMethod(UINT64, "GetMessageCountLimit", [], sideeffects=False),
    StdMethod(HRESULT, "AddStorageFilterEntries", [(Pointer(D3D10_INFO_QUEUE_FILTER), "pFilter")], sideeffects=False),
    StdMethod(HRESULT, "GetStorageFilter", [Out(Pointer(D3D10_INFO_QUEUE_FILTER), "pFilter"), Out(Pointer(SIZE_T), "pFilterByteLength")], sideeffects=False),
    StdMethod(Void, "ClearStorageFilter", [], sideeffects=False),
    StdMethod(HRESULT, "PushEmptyStorageFilter", [], sideeffects=False),
    StdMethod(HRESULT, "PushCopyOfStorageFilter", [], sideeffects=False),
    StdMethod(HRESULT, "PushStorageFilter", [(Pointer(D3D10_INFO_QUEUE_FILTER), "pFilter")], sideeffects=False),
    StdMethod(Void, "PopStorageFilter", [], sideeffects=False),
    StdMethod(UINT, "GetStorageFilterStackSize", [], sideeffects=False),
    StdMethod(HRESULT, "AddRetrievalFilterEntries", [(Pointer(D3D10_INFO_QUEUE_FILTER), "pFilter")], sideeffects=False),
    StdMethod(HRESULT, "GetRetrievalFilter", [Out(Pointer(D3D10_INFO_QUEUE_FILTER), "pFilter"), Out(Pointer(SIZE_T), "pFilterByteLength")], sideeffects=False),
    StdMethod(Void, "ClearRetrievalFilter", [], sideeffects=False),
    StdMethod(HRESULT, "PushEmptyRetrievalFilter", [], sideeffects=False),
    StdMethod(HRESULT, "PushCopyOfRetrievalFilter", [], sideeffects=False),
    StdMethod(HRESULT, "PushRetrievalFilter", [(Pointer(D3D10_INFO_QUEUE_FILTER), "pFilter")], sideeffects=False),
    StdMethod(Void, "PopRetrievalFilter", [], sideeffects=False),
    StdMethod(UINT, "GetRetrievalFilterStackSize", [], sideeffects=False),
    StdMethod(HRESULT, "AddMessage", [(D3D10_MESSAGE_CATEGORY, "Category"), (D3D10_MESSAGE_SEVERITY, "Severity"), (D3D10_MESSAGE_ID, "ID"), (LPCSTR, "pDescription")], sideeffects=False),
    StdMethod(HRESULT, "AddApplicationMessage", [(D3D10_MESSAGE_SEVERITY, "Severity"), (LPCSTR, "pDescription")], sideeffects=False),
    StdMethod(HRESULT, "SetBreakOnCategory", [(D3D10_MESSAGE_CATEGORY, "Category"), (BOOL, "bEnable")], sideeffects=False),
    StdMethod(HRESULT, "SetBreakOnSeverity", [(D3D10_MESSAGE_SEVERITY, "Severity"), (BOOL, "bEnable")], sideeffects=False),
    StdMethod(HRESULT, "SetBreakOnID", [(D3D10_MESSAGE_ID, "ID"), (BOOL, "bEnable")], sideeffects=False),
    StdMethod(BOOL, "GetBreakOnCategory", [(D3D10_MESSAGE_CATEGORY, "Category")], sideeffects=False),
    StdMethod(BOOL, "GetBreakOnSeverity", [(D3D10_MESSAGE_SEVERITY, "Severity")], sideeffects=False),
    StdMethod(BOOL, "GetBreakOnID", [(D3D10_MESSAGE_ID, "ID")], sideeffects=False),
    StdMethod(Void, "SetMuteDebugOutput", [(BOOL, "bMute")], sideeffects=False),
    StdMethod(BOOL, "GetMuteDebugOutput", [], sideeffects=False),
]

