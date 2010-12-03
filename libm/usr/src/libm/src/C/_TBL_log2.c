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

#pragma ident	"@(#)_TBL_log2.c	1.9	06/01/31 SMI"

#include "libm_protos.h"

const double _TBL_log2_hi[] = {
 0.00000000000000000e+00, 1.12272500991821289e-02, 2.23678052425384521e-02,
 3.34229767322540283e-02, 4.43941056728363037e-02, 5.52824139595031738e-02,
 6.60891532897949219e-02, 7.68155455589294434e-02, 8.74627828598022461e-02,
 9.80320572853088379e-02, 1.08524441719055176e-01, 1.18941068649291992e-01,
 1.29282951354980469e-01, 1.39551281929016113e-01, 1.49747014045715332e-01,
 1.59871220588684082e-01, 1.69924974441528320e-01, 1.79908990859985352e-01,
 1.89824461936950684e-01, 1.99672341346740723e-01, 2.09453344345092773e-01,
 2.19168424606323242e-01, 2.28818655014038086e-01, 2.38404631614685059e-01,
 2.47927427291870117e-01, 2.57387638092041016e-01, 2.66786336898803711e-01,
 2.76124238967895508e-01, 2.85402059555053711e-01, 2.94620513916015625e-01,
 3.03780555725097656e-01, 3.12882900238037109e-01, 3.21928024291992188e-01,
 3.30916643142700195e-01, 3.39849948883056641e-01, 3.48727941513061523e-01,
 3.57551813125610352e-01, 3.66322040557861328e-01, 3.75039339065551758e-01,
 3.83704185485839844e-01, 3.92317295074462891e-01, 4.00879383087158203e-01,
 4.09390926361083984e-01, 4.17852401733398438e-01, 4.26264524459838867e-01,
 4.34628009796142578e-01, 4.42943334579467773e-01, 4.51210975646972656e-01,
 4.59431409835815430e-01, 4.67605352401733398e-01, 4.75733280181884766e-01,
 4.83815670013427734e-01, 4.91852998733520508e-01, 4.99845743179321289e-01,
 5.07794380187988281e-01, 5.15699386596679688e-01, 5.23561954498291016e-01,
 5.31381130218505859e-01, 5.39158344268798828e-01, 5.46894073486328125e-01,
 5.54588794708251953e-01, 5.62242031097412109e-01, 5.69855213165283203e-01,
 5.77428817749023438e-01, 5.84962368011474609e-01, 5.92456817626953125e-01,
 5.99912643432617188e-01, 6.07329845428466797e-01, 6.14709377288818359e-01,
 6.22051715850830078e-01, 6.29356384277343750e-01, 6.36624336242675781e-01,
 6.43856048583984375e-01, 6.51051521301269531e-01, 6.58211231231689453e-01,
 6.65335655212402344e-01, 6.72425270080566406e-01, 6.79480075836181641e-01,
 6.86500072479248047e-01, 6.93486690521240234e-01, 7.00439453125000000e-01,
 7.07358837127685547e-01, 7.14245319366455078e-01, 7.21098899841308594e-01,
 7.27920055389404297e-01, 7.34709262847900391e-01, 7.41466522216796875e-01,
 7.48192787170410156e-01, 7.54887104034423828e-01, 7.61550903320312500e-01,
 7.68184185028076172e-01, 7.74786949157714844e-01, 7.81359672546386719e-01,
 7.87902355194091797e-01, 7.94415473937988281e-01, 8.00899505615234375e-01,
 8.07354450225830078e-01, 8.13780784606933594e-01, 8.20178508758544922e-01,
 8.26548099517822266e-01, 8.32889556884765625e-01, 8.39203357696533203e-01,
 8.45489978790283203e-01, 8.51748943328857422e-01, 8.57980728149414062e-01,
 8.64185810089111328e-01, 8.70364665985107422e-01, 8.76516819000244141e-01,
 8.82642745971679688e-01, 8.88742923736572266e-01, 8.94817352294921875e-01,
 9.00866508483886719e-01, 9.06890392303466797e-01, 9.12889003753662109e-01,
 9.18862819671630859e-01, 9.24812316894531250e-01, 9.30737018585205078e-01,
 9.36637878417968750e-01, 9.42514419555664062e-01, 9.48367118835449219e-01,
 9.54195976257324219e-01, 9.60001468658447266e-01, 9.65784072875976562e-01,
 9.71543312072753906e-01, 9.77279663085937500e-01, 9.82993125915527344e-01,
 9.88684654235839844e-01, 9.94353294372558594e-01,
};
const double _TBL_log2_lo[] = {
 0.00000000000000000e+00, 5.32407199143163062e-09, 7.78591605611869461e-09,
 2.48051962506972834e-08, 1.36856171339421649e-08, 2.15416864274073636e-08,
 3.71679775110542797e-08, 5.14919014488721604e-08, 5.83905371621603131e-08,
 2.56752178779050280e-08, 1.50591138779666358e-08, 4.07421543880223335e-09,
 6.55899859865622946e-08, 7.04697774403433060e-08, 1.05458966729375492e-07,
 1.16189705334564924e-07, 2.70007840425949794e-08, 9.91549491170275978e-08,
 9.69430665462702729e-08, 3.48962367368142750e-09, 2.12838570084203029e-08,
 9.58558383294243244e-08, 3.54818427912568755e-08, 1.07710393847949145e-07,
 8.61517153766060168e-08, 2.04600610755536536e-07, 2.03796097652703831e-07,
 1.66306342048863931e-07, 1.59307194630913047e-07, 2.34975611381410033e-07,
 1.92452005268177275e-07, 5.50463182513595194e-08, 7.05953701603703195e-08,
 2.34971916784423615e-07, 5.40015680851899589e-08, 2.12718016029126278e-07,
 1.91492473341603465e-07, 1.73687954457398432e-07, 9.22813729985471341e-08,
 1.06988212380721318e-07, 1.27704297398270718e-07, 5.31950261176686284e-08,
 9.77661777174938596e-09, 1.13152499419201003e-07, 2.30242259071696645e-07,
 2.17840582054596399e-07, 1.61269260528736021e-07, 1.36185356146932601e-07,
 2.08801481826511869e-07, 1.97681264041823641e-07, 1.50784512989339287e-07,
 1.07250828689716638e-07, 9.75961542029652924e-08, 1.43903884071471071e-07,
 2.60010707986588806e-07, 4.51687362770425967e-07, 1.55872185666914818e-09,
 3.30297806270353139e-07, 4.66839232562134881e-07, 3.86401308539453419e-07,
 5.69693854190458130e-08, 3.93123660542428204e-07, 3.95165664638538863e-07,
 1.02867252517587785e-08, 1.32709681572078730e-07, 2.19641127294637299e-07,
 1.98754510492326232e-07, 4.68321143892845854e-07, 4.66826389855508924e-07,
 1.03605546188658804e-07, 2.35802265869106829e-07, 2.84300973057307715e-07,
 1.41190740320740639e-07, 1.69877659083133016e-07, 2.51520105284046651e-07,
 2.61972773884411727e-07, 7.18909291834578061e-08, 2.36692644004112907e-08,
 4.54703970334185855e-07, 2.66978085000826612e-07, 2.65016092160396791e-07,
 2.94953197203117899e-07, 1.98299667558641024e-07, 2.88865876540408914e-07,
 3.99173794882405776e-07, 3.57377937852235498e-07, 4.64184350072864601e-07,
 6.24190501305044646e-08, 3.98129044716236242e-07, 3.29124166816248113e-07,
 1.39748850186603795e-07, 1.10443458567567753e-07, 4.09782728853196823e-08,
 2.04197339771775867e-07, 3.92412117682061536e-07, 3.94305070358032831e-07,
 4.71831774029316962e-07, 4.06610103464898125e-07, 4.53656642786443564e-07,
 3.87773092718157073e-07, 4.57279976050247260e-07, 4.30400410735578705e-07,
 7.21540920170394723e-08, 9.80872001232200742e-08, 2.66978158058219765e-07,
 3.34565168908893463e-07, 5.35982971014292903e-08, 1.27564755579416119e-07,
 3.03390161571307385e-07, 3.25161686840256005e-07, 4.11013021640696012e-07,
 2.99496861839592342e-07, 2.03305051732449063e-07, 3.32476299509608735e-07,
 4.17602963653023739e-07, 1.86711249657268702e-07, 3.18977681198347184e-07,
 6.05846018127542565e-08, 8.57835758121197076e-08, 1.12749228435440334e-07,
 3.34129550990056099e-07, 4.63409633672188390e-07, 2.11786110481110945e-07,
 2.41878018084726962e-07, 2.60413978970349421e-07, 4.48778782784743522e-07,
 3.25363260095300064e-08, 1.42486299343828112e-07,
};
