/* -*- Mode: C; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */
/*
 * Copyright (C) 2003-2006 Imendio AB
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this program; if not, see <https://www.gnu.org/licenses>
 */

#ifndef __LM_SSL_BASE_H__
#define __LM_SSL_BASE_H__

#include "lm-ssl.h"

#define LM_SSL_BASE(x) ((LmSSLBase *) x)

typedef struct _LmSSLBase LmSSLBase;
struct _LmSSLBase {
    LmSSLFunction   func;
    gpointer        func_data;
    GDestroyNotify  data_notify;
    gchar          *cipher_list;
    gchar          *ca_path;
    gchar          *expected_fingerprint;
    char            fingerprint[LM_FINGERPRINT_LENGTH];
    gboolean        use_starttls;
    gboolean        require_starttls;

    gint            ref_count;
};

void _lm_ssl_base_init         (LmSSLBase      *base,
                                const gchar    *expected_fingerprint,
                                LmSSLFunction   ssl_function,
                                gpointer        user_data,
                                GDestroyNotify  notify);

void _lm_ssl_base_set_cipher_list (LmSSLBase   *base,
                                   const gchar *cipher_list);

void _lm_ssl_base_set_ca_path (LmSSLBase   *base,
                               const gchar *ca_path);

void _lm_ssl_base_set_fingerprint (LmSSLBase    *base,
                                   const guchar *digest,
                                   unsigned int  digest_len);

int _lm_ssl_base_check_fingerprint( LmSSLBase *base);

void _lm_ssl_base_free_fields  (LmSSLBase      *base);

#endif /* __LM_SSL_BASE_H__ */
