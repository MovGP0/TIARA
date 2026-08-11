/* Ghidra address: 01cce940 */
/* Ghidra symbol: FUN_01cce940 */


double FUN_01cce940(longlong param_1,undefined8 param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double unaff_XMM9_Qa;
  
  dVar3 = (double)FUN_0040c850(param_2);
  iVar2 = 0;
  if (dVar3 == 0.0) {
    unaff_XMM9_Qa = 1.0;
  }
  else if (dVar3 == 1.0) {
    unaff_XMM9_Qa = 2.0;
  }
  else if (dVar3 == 2.0) {
    unaff_XMM9_Qa = 5.0;
  }
  else if (dVar3 == 5.0) {
    unaff_XMM9_Qa = 10.0;
  }
  else if (dVar3 == 10.0) {
    unaff_XMM9_Qa = 100.0;
  }
  cVar1 = FUN_01cd6670(param_1);
  if (cVar1 == '\x04') {
    dVar6 = (double)FUN_0040c850(unaff_XMM9_Qa);
    dVar6 = 1.0 / (dVar6 + 1.0);
    dVar5 = (((*(double *)(param_1 + 0xc0) - *(double *)(param_1 + 0xb8)) / 2.0) *
            (double)(*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14))) /
            (*(double *)(param_1 + 0xc0) - *(double *)(param_1 + 0xb8));
    while( true ) {
      dVar4 = (double)FUN_00c42750((double)(iVar2 / 3),(longlong)iVar2 % 3 & 0xffffffff);
      dVar4 = (double)FUN_0040c850((dVar6 - 1.0 / ((unaff_XMM9_Qa -
                                                   (unaff_XMM9_Qa - dVar3) /
                                                   (*(double *)
                                                     (&DAT_01feeca0 + (longlong)(iVar2 % 3) * 8) *
                                                   dVar4)) + 1.0)) * dVar5);
      if (dVar4 <= 5.0) break;
      iVar2 = iVar2 + 1;
    }
    dVar4 = (double)FUN_00c42750((double)(iVar2 / 3),(longlong)iVar2 % 3 & 0xffffffff);
    dVar6 = (double)FUN_0040c850((dVar6 - 1.0 / ((unaff_XMM9_Qa -
                                                 (unaff_XMM9_Qa - dVar3) /
                                                 (*(double *)
                                                   (&DAT_01feeca0 + (longlong)(iVar2 % 3) * 8) *
                                                 dVar4)) + 1.0)) * dVar5);
    if (dVar6 < 5.0) {
      iVar2 = iVar2 + -1;
    }
  }
  else if (cVar1 == '\x05') {
    dVar6 = (((*(double *)(param_1 + 0xc0) - *(double *)(param_1 + 0xb8)) / 2.0) *
            (double)(*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18))) /
            (*(double *)(param_1 + 0xc0) - *(double *)(param_1 + 0xb8));
    while( true ) {
      dVar5 = (double)FUN_00c42750((double)(iVar2 / 3),(longlong)iVar2 % 3 & 0xffffffff);
      dVar5 = (double)FUN_01cce4b0(param_1,unaff_XMM9_Qa,
                                   unaff_XMM9_Qa -
                                   (unaff_XMM9_Qa - dVar3) /
                                   (*(double *)(&DAT_01feeca0 + (longlong)(iVar2 % 3) * 8) * dVar5))
      ;
      if (dVar6 * dVar5 <= 12.0) break;
      iVar2 = iVar2 + 1;
    }
    dVar5 = (double)FUN_00c42750((double)(iVar2 / 3),(longlong)iVar2 % 3 & 0xffffffff);
    dVar5 = (double)FUN_01cce4b0(param_1,unaff_XMM9_Qa,
                                 unaff_XMM9_Qa -
                                 (unaff_XMM9_Qa - dVar3) /
                                 (*(double *)(&DAT_01feeca0 + (longlong)(iVar2 % 3) * 8) * dVar5));
    if (dVar6 * dVar5 < 12.0) {
      iVar2 = iVar2 + -1;
    }
  }
  if (iVar2 < 0) {
    *param_3 = 0;
    dVar3 = 1000.0;
  }
  else {
    dVar6 = (double)FUN_00c42750((double)(iVar2 / 3),(longlong)iVar2 % 3 & 0xffffffff);
    iVar2 = FUN_0040c770(*(double *)(&DAT_01feeca0 + (longlong)(iVar2 % 3) * 8) * dVar6);
    *param_3 = iVar2;
    if (*param_3 < 0x14) {
      iVar2 = *param_3;
    }
    else {
      iVar2 = 0x14;
    }
    *param_3 = iVar2;
    dVar3 = (unaff_XMM9_Qa - dVar3) / (double)*param_3;
  }
  return dVar3;
}

