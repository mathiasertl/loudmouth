
#ifndef ___lm_marshal_MARSHAL_H__
#define ___lm_marshal_MARSHAL_H__

#include	<glib-object.h>

G_BEGIN_DECLS

/* VOID:INT (lm-marshal.list:1) */
#define _lm_marshal_VOID__INT	g_cclosure_marshal_VOID__INT

/* VOID:POINTER (lm-marshal.list:2) */
#define _lm_marshal_VOID__POINTER	g_cclosure_marshal_VOID__POINTER

/* VOID:VOID (lm-marshal.list:3) */
#define _lm_marshal_VOID__VOID	g_cclosure_marshal_VOID__VOID

/* VOID:STRING (lm-marshal.list:4) */
#define _lm_marshal_VOID__STRING	g_cclosure_marshal_VOID__STRING

/* VOID:BOOLEAN (lm-marshal.list:5) */
#define _lm_marshal_VOID__BOOLEAN	g_cclosure_marshal_VOID__BOOLEAN

/* BOOLEAN:VOID (lm-marshal.list:6) */
extern void _lm_marshal_BOOLEAN__VOID (GClosure     *closure,
                                       GValue       *return_value,
                                       guint         n_param_values,
                                       const GValue *param_values,
                                       gpointer      invocation_hint,
                                       gpointer      marshal_data);

/* VOID:OBJECT (lm-marshal.list:7) */
#define _lm_marshal_VOID__OBJECT	g_cclosure_marshal_VOID__OBJECT

/* VOID:BOOLEAN,OBJECT (lm-marshal.list:8) */
extern void _lm_marshal_VOID__BOOLEAN_OBJECT (GClosure     *closure,
                                              GValue       *return_value,
                                              guint         n_param_values,
                                              const GValue *param_values,
                                              gpointer      invocation_hint,
                                              gpointer      marshal_data);

G_END_DECLS

#endif /* ___lm_marshal_MARSHAL_H__ */

