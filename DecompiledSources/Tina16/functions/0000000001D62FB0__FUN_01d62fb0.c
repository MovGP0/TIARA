/* Ghidra address: 01d62fb0 */
/* Ghidra symbol: FUN_01d62fb0 */


void FUN_01d62fb0(longlong param_1,undefined8 param_2,longlong param_3,byte param_4,double param_5)

{
  char cVar1;
  uint uVar2;
  undefined8 in_RAX;
  ulonglong uVar3;
  double *pdVar4;
  bool bVar5;
  double in_XMM0_Qa;
  double dVar6;
  double dVar7;
  double unaff_XMM6_Qa;
  double unaff_XMM7_Qa;
  double unaff_XMM8_Qa;
  double dVar8;
  double dVar9;
  
  if ((byte)(param_4 - 8) < 8) {
    uVar2 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (param_4 - 8 & 0x1f);
    bVar5 = (uVar2 & 0x11) != 0;
    uVar3 = (ulonglong)CONCAT31((int3)(uVar2 >> 8),bVar5);
  }
  else {
    uVar3 = 0;
    bVar5 = false;
  }
  if (bVar5) {
    cVar1 = *(char *)(param_3 + 299);
    if (cVar1 == '\x01') {
      dVar6 = (double)FUN_0040c660(*(double *)(param_3 + 0x10) /
                                   (param_5 * *(double *)(param_3 + 0x18)));
      dVar6 = dVar6 * 0.5;
      dVar7 = (double)FUN_0040c760(*(double *)(param_3 + 0x10) * *(double *)(param_3 + 0x10) +
                                   param_5 * param_5 * *(double *)(param_3 + 0x18) *
                                   *(double *)(param_3 + 0x18));
      dVar7 = (double)FUN_0040c760((param_5 * *(double *)(param_3 + 0x28)) / dVar7);
      dVar8 = (double)FUN_0040bcd0(dVar6);
      unaff_XMM6_Qa = dVar7 * dVar8;
      dVar8 = (double)FUN_0040bdd0(dVar6);
      unaff_XMM7_Qa = dVar7 * dVar8;
      dVar8 = (double)FUN_0040c760(*(double *)(param_3 + 0x10) * *(double *)(param_3 + 0x10) +
                                   param_5 * param_5 * *(double *)(param_3 + 0x18) *
                                   *(double *)(param_3 + 0x18));
      dVar9 = (double)FUN_0040bcd0(1.5707963267948966 - dVar6);
      unaff_XMM8_Qa = dVar7 * dVar8 * dVar9;
      in_XMM0_Qa = (double)FUN_0040bdd0(1.5707963267948966 - dVar6);
      in_XMM0_Qa = dVar7 * dVar8 * in_XMM0_Qa;
    }
    else if (cVar1 == '\x02') {
      unaff_XMM7_Qa = (double)FUN_0040c760(param_5 * 0.5 * *(double *)(param_3 + 0x70));
      in_XMM0_Qa = (double)FUN_0040c760(param_5 * 0.5 * *(double *)(param_3 + 0x10) *
                                        *(double *)(param_3 + 0x28));
      unaff_XMM8_Qa = in_XMM0_Qa;
      unaff_XMM6_Qa = unaff_XMM7_Qa;
    }
    else {
      if (cVar1 == '\x03') {
        **(double **)(param_3 + 400) = **(double **)(param_3 + 400) + 1.0;
        **(double **)(param_3 + 0x198) = **(double **)(param_3 + 0x198) - 1.0;
        **(double **)(param_3 + 0x1a0) =
             **(double **)(param_3 + 0x1a0) - *(double *)(param_3 + 0xd8);
        **(double **)(param_3 + 0x1a8) =
             **(double **)(param_3 + 0x1a8) + *(double *)(param_3 + 0xd8);
        **(double **)(param_3 + 0x1b8) =
             **(double **)(param_3 + 0x1b8) +
             (*(double *)(param_1 + 0x430) + 1.0) * *(double *)(param_3 + 0xe0);
        **(double **)(param_3 + 0x1e8) =
             **(double **)(param_3 + 0x1e8) + *(double *)(param_3 + 0xd8);
        **(double **)(param_3 + 0x1d0) =
             **(double **)(param_3 + 0x1d0) -
             (*(double *)(param_1 + 0x430) + 1.0) * *(double *)(param_3 + 0xe8);
        **(double **)(param_3 + 0x1d8) =
             **(double **)(param_3 + 0x1d8) +
             (*(double *)(param_1 + 0x430) + 1.0) * *(double *)(param_3 + 0xe8);
        **(double **)(param_3 + 0x1e0) = **(double **)(param_3 + 0x1e0) + 1.0;
        **(double **)(param_3 + 0x1f0) = **(double **)(param_3 + 0x1f0) + 1.0;
        **(double **)(param_3 + 0x1f8) = **(double **)(param_3 + 0x1f8) - 1.0;
        **(double **)(param_3 + 0x200) = **(double **)(param_3 + 0x200) + 1.0;
        **(double **)(param_3 + 0x208) = **(double **)(param_3 + 0x208) - 1.0;
        return;
      }
      if (cVar1 == '\x04') {
        unaff_XMM6_Qa = *(double *)(param_3 + 0x50);
        unaff_XMM7_Qa = 0.0;
        in_XMM0_Qa = (double)FUN_0040c760(*(double *)(param_3 + 0x18) * *(double *)(param_3 + 0x28))
        ;
        in_XMM0_Qa = in_XMM0_Qa * param_5;
        unaff_XMM8_Qa = 0.0;
      }
    }
    dVar8 = -unaff_XMM8_Qa * *(double *)(param_3 + 8);
    dVar9 = -in_XMM0_Qa * *(double *)(param_3 + 8);
    dVar6 = (double)FUN_0040af80(dVar8);
    dVar7 = (double)FUN_0040bcd0(dVar9);
    dVar6 = dVar6 * dVar7;
    dVar7 = (double)FUN_0040af80(dVar8);
    dVar8 = (double)FUN_0040bdd0(dVar9);
    dVar7 = dVar7 * dVar8;
    dVar8 = unaff_XMM6_Qa * dVar6 - unaff_XMM7_Qa * dVar7;
    dVar9 = unaff_XMM6_Qa * dVar7 + unaff_XMM7_Qa * dVar6;
    **(double **)(param_3 + 400) = **(double **)(param_3 + 400) + unaff_XMM6_Qa;
    pdVar4 = (double *)
             FUN_017dcb00(*(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(param_3 + 400),8);
    *pdVar4 = *pdVar4 + unaff_XMM7_Qa;
    pdVar4 = *(double **)(param_3 + 0x198);
    *pdVar4 = *pdVar4 - unaff_XMM6_Qa;
    pdVar4 = (double *)FUN_017dcb00(*(undefined8 *)(param_1 + 0xd8),pdVar4,8);
    *pdVar4 = *pdVar4 - unaff_XMM7_Qa;
    **(double **)(param_3 + 0x1b0) = **(double **)(param_3 + 0x1b0) - 1.0;
    **(double **)(param_3 + 0x1a0) = **(double **)(param_3 + 0x1a0) - dVar8;
    pdVar4 = (double *)
             FUN_017dcb00(*(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(param_3 + 0x1a0),8);
    *pdVar4 = *pdVar4 - dVar9;
    **(double **)(param_3 + 0x1a8) = **(double **)(param_3 + 0x1a8) + dVar8;
    pdVar4 = (double *)
             FUN_017dcb00(*(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(param_3 + 0x1a8),8);
    *pdVar4 = *pdVar4 + dVar9;
    **(double **)(param_3 + 0x1b8) = **(double **)(param_3 + 0x1b8) - dVar6;
    pdVar4 = (double *)
             FUN_017dcb00(*(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(param_3 + 0x1b8),8);
    *pdVar4 = *pdVar4 - dVar7;
    **(double **)(param_3 + 0x1d0) = **(double **)(param_3 + 0x1d0) + unaff_XMM6_Qa;
    pdVar4 = (double *)
             FUN_017dcb00(*(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(param_3 + 0x1d0),8);
    *pdVar4 = *pdVar4 + unaff_XMM7_Qa;
    **(double **)(param_3 + 0x1d8) = **(double **)(param_3 + 0x1d8) - unaff_XMM6_Qa;
    pdVar4 = (double *)
             FUN_017dcb00(*(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(param_3 + 0x1d8),8);
    *pdVar4 = *pdVar4 - unaff_XMM7_Qa;
    **(double **)(param_3 + 0x1e8) = **(double **)(param_3 + 0x1e8) - 1.0;
    **(double **)(param_3 + 0x1c0) = **(double **)(param_3 + 0x1c0) - dVar8;
    pdVar4 = (double *)
             FUN_017dcb00(*(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(param_3 + 0x1c0),8);
    *pdVar4 = *pdVar4 - dVar9;
    **(double **)(param_3 + 0x1c8) = **(double **)(param_3 + 0x1c8) + dVar8;
    pdVar4 = (double *)
             FUN_017dcb00(*(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(param_3 + 0x1c8),8);
    *pdVar4 = *pdVar4 + dVar9;
    **(double **)(param_3 + 0x1e0) = **(double **)(param_3 + 0x1e0) - dVar6;
    pdVar4 = (double *)
             FUN_017dcb00(*(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(param_3 + 0x1e0),8);
    *pdVar4 = *pdVar4 - dVar7;
    **(double **)(param_3 + 0x1f0) = **(double **)(param_3 + 0x1f0) + 1.0;
    **(double **)(param_3 + 0x1f8) = **(double **)(param_3 + 0x1f8) - 1.0;
    **(double **)(param_3 + 0x200) = **(double **)(param_3 + 0x200) + 1.0;
    **(double **)(param_3 + 0x208) = **(double **)(param_3 + 0x208) - 1.0;
    return;
  }
  if (param_4 < 8) {
    bVar5 = ((int)CONCAT71((int7)(uVar3 >> 8),1) << (param_4 & 0x1f) & 0xa2U) != 0;
  }
  else {
    bVar5 = false;
  }
  if ((bVar5) || (*(char *)(param_3 + 299) == '\x03')) {
    cVar1 = *(char *)(param_3 + 299);
    if (1 < (byte)(cVar1 - 1U)) {
      if (cVar1 == '\x03') {
        **(double **)(param_3 + 400) = **(double **)(param_3 + 400) + 1.0;
        **(double **)(param_3 + 0x198) = **(double **)(param_3 + 0x198) - 1.0;
        **(double **)(param_3 + 0x1a0) =
             **(double **)(param_3 + 0x1a0) - *(double *)(param_3 + 0xd8);
        **(double **)(param_3 + 0x1a8) =
             **(double **)(param_3 + 0x1a8) + *(double *)(param_3 + 0xd8);
        **(double **)(param_3 + 0x1b8) =
             **(double **)(param_3 + 0x1b8) +
             (*(double *)(param_1 + 0x430) + 1.0) * *(double *)(param_3 + 0xe0);
        **(double **)(param_3 + 0x1e8) =
             **(double **)(param_3 + 0x1e8) + *(double *)(param_3 + 0xd8);
        **(double **)(param_3 + 0x1d0) =
             **(double **)(param_3 + 0x1d0) -
             (*(double *)(param_1 + 0x430) + 1.0) * *(double *)(param_3 + 0xe8);
        **(double **)(param_3 + 0x1d8) =
             **(double **)(param_3 + 0x1d8) +
             (*(double *)(param_1 + 0x430) + 1.0) * *(double *)(param_3 + 0xe8);
        **(double **)(param_3 + 0x1e0) = **(double **)(param_3 + 0x1e0) + 1.0;
        **(double **)(param_3 + 0x1f0) = **(double **)(param_3 + 0x1f0) + 1.0;
        **(double **)(param_3 + 0x1f8) = **(double **)(param_3 + 0x1f8) - 1.0;
        **(double **)(param_3 + 0x200) = **(double **)(param_3 + 0x200) + 1.0;
        **(double **)(param_3 + 0x208) = **(double **)(param_3 + 0x208) - 1.0;
        return;
      }
      if (cVar1 != '\x04') {
        return;
      }
    }
    **(double **)(param_3 + 0x1f0) = **(double **)(param_3 + 0x1f0) + 1.0;
    **(double **)(param_3 + 0x1f8) = **(double **)(param_3 + 0x1f8) - 1.0;
    **(double **)(param_3 + 0x200) = **(double **)(param_3 + 0x200) + 1.0;
    **(double **)(param_3 + 0x208) = **(double **)(param_3 + 0x208) - 1.0;
    **(double **)(param_3 + 0x1b0) = **(double **)(param_3 + 0x1b0) + 1.0;
    **(double **)(param_3 + 0x1b8) = **(double **)(param_3 + 0x1b8) + 1.0;
    **(double **)(param_3 + 0x1c0) = **(double **)(param_3 + 0x1c0) + 1.0;
    **(double **)(param_3 + 0x1d0) = **(double **)(param_3 + 0x1d0) - 1.0;
    **(double **)(param_3 + 0x1e0) =
         **(double **)(param_3 + 0x1e0) - *(double *)(param_3 + 0x10) * *(double *)(param_3 + 8);
    return;
  }
  cVar1 = *(char *)(param_3 + 299);
  if (cVar1 != '\x01') {
    if (cVar1 == '\x02') {
      **(double **)(param_3 + 0x1b0) = **(double **)(param_3 + 0x1b0) - 1.0;
      **(double **)(param_3 + 0x1f0) = **(double **)(param_3 + 0x1f0) + 1.0;
      **(double **)(param_3 + 0x1f8) = **(double **)(param_3 + 0x1f8) - 1.0;
      **(double **)(param_3 + 0x1e8) = **(double **)(param_3 + 0x1e8) - 1.0;
      **(double **)(param_3 + 0x200) = **(double **)(param_3 + 0x200) + 1.0;
      **(double **)(param_3 + 0x208) = **(double **)(param_3 + 0x208) - 1.0;
      dVar6 = *(double *)(param_3 + 0xf0);
      **(double **)(param_3 + 400) = **(double **)(param_3 + 400) + dVar6;
      **(double **)(param_3 + 0x198) = **(double **)(param_3 + 0x198) - dVar6;
      **(double **)(param_3 + 0x1d0) = **(double **)(param_3 + 0x1d0) + dVar6;
      **(double **)(param_3 + 0x1d8) = **(double **)(param_3 + 0x1d8) - dVar6;
      dVar6 = *(double *)(param_3 + 0xf8);
      **(double **)(param_3 + 0x1b8) = **(double **)(param_3 + 0x1b8) - dVar6;
      **(double **)(param_3 + 0x1e0) = **(double **)(param_3 + 0x1e0) - dVar6;
      dVar6 = *(double *)(param_3 + 0x100);
      **(double **)(param_3 + 0x1a0) = **(double **)(param_3 + 0x1a0) - dVar6;
      **(double **)(param_3 + 0x1a8) = **(double **)(param_3 + 0x1a8) + dVar6;
      **(double **)(param_3 + 0x1c0) = **(double **)(param_3 + 0x1c0) - dVar6;
      **(double **)(param_3 + 0x1c8) = **(double **)(param_3 + 0x1c8) + dVar6;
      goto LAB_01d636e0;
    }
    if (cVar1 != '\x04') goto LAB_01d636e0;
  }
  if (*(char *)(param_3 + 299) == '\x01') {
    dVar6 = *(double *)(param_3 + 0x50) * *(double *)(param_3 + 0xf0);
    **(double **)(param_3 + 400) = **(double **)(param_3 + 400) + dVar6;
    **(double **)(param_3 + 0x198) = **(double **)(param_3 + 0x198) - dVar6;
    **(double **)(param_3 + 0x1d0) = **(double **)(param_3 + 0x1d0) + dVar6;
    **(double **)(param_3 + 0x1d8) = **(double **)(param_3 + 0x1d8) - dVar6;
  }
  **(double **)(param_3 + 400) = **(double **)(param_3 + 400) + *(double *)(param_3 + 0x50);
  **(double **)(param_3 + 0x198) = **(double **)(param_3 + 0x198) - *(double *)(param_3 + 0x50);
  **(double **)(param_3 + 0x1b0) = **(double **)(param_3 + 0x1b0) - 1.0;
  **(double **)(param_3 + 0x1f0) = **(double **)(param_3 + 0x1f0) + 1.0;
  **(double **)(param_3 + 0x1f8) = **(double **)(param_3 + 0x1f8) - 1.0;
  **(double **)(param_3 + 0x1d0) = **(double **)(param_3 + 0x1d0) + *(double *)(param_3 + 0x50);
  **(double **)(param_3 + 0x1d8) = **(double **)(param_3 + 0x1d8) - *(double *)(param_3 + 0x50);
  **(double **)(param_3 + 0x1e8) = **(double **)(param_3 + 0x1e8) - 1.0;
  **(double **)(param_3 + 0x200) = **(double **)(param_3 + 0x200) + 1.0;
  **(double **)(param_3 + 0x208) = **(double **)(param_3 + 0x208) - 1.0;
LAB_01d636e0:
  **(double **)(param_3 + 0x210) = **(double **)(param_3 + 0x210) + *(double *)(param_3 + 0x98);
  **(double **)(param_3 + 0x218) = **(double **)(param_3 + 0x218) + *(double *)(param_3 + 0xa0);
  return;
}

