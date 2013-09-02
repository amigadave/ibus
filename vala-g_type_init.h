/* Avoid a deprecation error if building with GLib > 2.35.0. Remove this once
 * VALA_TARGET_GLIB_VERSION is 2.36 or greater. */
#include <glib-object.h>
#if GLIB_CHECK_VERSION(2,35,0)
#undef g_type_init
#define g_type_init()
#endif
