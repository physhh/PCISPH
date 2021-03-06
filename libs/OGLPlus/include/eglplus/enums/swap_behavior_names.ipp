/*
 *  .file eglplus/enums/swap_behavior_names.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/eglplus/swap_behavior.txt' instead.
 *
 *  Copyright 2010-2013 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

namespace enums {
EGLPLUS_LIB_FUNC StrLit ValueName_(
	SwapBehavior*,
	EGLenum value
)
#if (!EGLPLUS_LINK_LIBRARY || defined(EGLPLUS_IMPLEMENTING_LIBRARY)) && \
	!defined(EGLPLUS_IMPL_EVN_SWAPBEHAVIOR)
#define EGLPLUS_IMPL_EVN_SWAPBEHAVIOR
{
switch(value)
{
#if defined EGL_BUFFER_PRESERVED
	case EGL_BUFFER_PRESERVED: return StrLit("BUFFER_PRESERVED");
#endif
#if defined EGL_BUFFER_DESTROYED
	case EGL_BUFFER_DESTROYED: return StrLit("BUFFER_DESTROYED");
#endif
	default:;
}
EGLPLUS_FAKE_USE(value);
return StrLit();
}
#else
;
#endif
} // namespace enums

