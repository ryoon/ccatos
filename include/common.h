/*
 * Copyright (c) 2026 Ryo ONODERA <ryo@tetera.org>
 * All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 
 * THIS SOFTWARE IS PROVIDED BY COPYRIGHT HOLDERS AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE FOUNDATION OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

/*
 * 共通ヘッダファイル common.h
 */
#include <sys/types.h>


/*
 * 新版 原典CTRON大系1 CTRON概説-入門・共通規定編-
 * P. 164-165
 */
/*
 * (h) 共通の定数定義
 */
#define NULL 0
#define NULLP ((void) *) 0)
#define YES (1==1)
#define NO (0==1)
#define ON (1==1)
#define OFF (0==1)
#define TRUE (1==1)
#define FALSE (0==1)
#define NOLIMIT (-1) /* 無限待ち */
#define NOWAIT 0 /* 待ちなし */
#define E_OK 0

/*
 * (e) 言語非依存仕様で定められたパラメタの型は、以下に示すように対応付ける。
 */
/*
 * (1) システムタグ systag_t
 */
typedef XXX systag_t;

/*
 * (2) タスクタグ tsktag_t
 */
typedef XXX tsktag_t;

/*
 * (3) プロセスタグ prctag_t
 */
typedef XXX prctag_t;

/*
 * (4) フラグ flag_t
 * 値0と0以外を取りうる型 (真≠0、偽=0)
 */
typedef XXX flag_t;

/*
 * (5) 整数
 */
typedef __int8_t	int8_t;
typedef __u_int8_t	u_int8_t;
typedef __int16_t	int16_t;
typedef __u_int16_t	u_int16_t;
typedef __int32_t	int32_t;
typedef __u_int32_t	u_int32_t;

/* 64ビットも独自に定義する */
typedef __int64_t	int64_t;
typedef __u_int64_t	u_int64_t;

/*
 * (6) システムストレージ識別子
 */


/*
 * (7) タスクストレージ識別子
 */


/*
 * (8) プロセスストレージ識別子
 */


/*
 * (9) シーケンス
 */
typedef char seq_t;

/*
 * (10) ビット列
 */
typedef unsigned char bit_t;

/*
 * (11) オクテット列
 */
typedef bit_t oct_t;

/*
 * (12) エラー情報
 */
typedef struct err_code {
	int	e_class;
	int	e_reason;
	int	 e_syst1;
	int 	e_syst2;
} error_t *errpt_t;

/*
 * (13) 関数の型
 */
typedef XXX e_reason_t;

