/*
 * CDDL HEADER START
 *
 * The contents of this file are subject to the terms of the
 * Common Development and Distribution License (the "License").
 * You may not use this file except in compliance with the License.
 *
 * You can obtain a copy of the license at usr/src/OPENSOLARIS.LICENSE
 * or http://www.opensolaris.org/os/licensing.
 * See the License for the specific language governing permissions
 * and limitations under the License.
 *
 * When distributing Covered Code, include this CDDL HEADER in each
 * file and include the License file at usr/src/OPENSOLARIS.LICENSE.
 * If applicable, add the following below this CDDL HEADER, with the
 * fields enclosed by brackets "[]" replaced with your own identifying
 * information: Portions Copyright [yyyy] [name of copyright owner]
 *
 * CDDL HEADER END
 */

/*
 * Copyright 2006 Sun Microsystems, Inc.  All rights reserved.
 * Use is subject to license terms.
 */

#pragma ident	"@(#)ctanl.c	1.3	06/01/31 SMI"

#pragma weak ctanl = __ctanl

#include "libm.h"
#include "complex_wrapper.h"

ldcomplex
ctanl(ldcomplex z) {
	long double x, y;
	ldcomplex ans, ct;

	x = LD_RE(z);
	y = LD_IM(z);
	LD_RE(z) = y;
	LD_IM(z) = -x;
	ct = ctanhl(z);
	LD_RE(ans) = -LD_IM(ct);
	LD_IM(ans) = LD_RE(ct);
	return (ans);
}
