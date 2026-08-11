/* Ghidra address: 01cd60f0 */
/* Ghidra symbol: FUN_01cd60f0 */


ulonglong FUN_01cd60f0(longlong param_1,double param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  double unaff_XMM7_Qa;
  double unaff_XMM8_Qa;
  double unaff_XMM9_Qa;
  
  bVar1 = *(byte *)(param_1 + 0x70);
  if ((bVar1 == 2) && (param_2 <= 0.0)) {
    param_2 = 1e-14;
  }
  uVar2 = *(uint *)(param_1 + 0xe8);
  iVar3 = *(int *)(param_1 + 0xec);
  if (*(double *)(param_1 + 0xc0) == *(double *)(param_1 + 0xb8)) {
    return (ulonglong)uVar2;
  }
  if (bVar1 < 2) {
LAB_01cd616f:
    unaff_XMM7_Qa =
         (double)(int)(iVar3 - uVar2) / (*(double *)(param_1 + 0xc0) - *(double *)(param_1 + 0xb8));
  }
  else if (bVar1 == 2) {
    dVar5 = (double)FUN_00c43d10(*(undefined8 *)(param_1 + 0xc0));
    dVar6 = (double)FUN_00c43d10(*(undefined8 *)(param_1 + 0xb8));
    unaff_XMM8_Qa = (double)(int)(iVar3 - uVar2) / (dVar5 - dVar6);
  }
  else if (bVar1 == 3) goto LAB_01cd616f;
  bVar1 = *(byte *)(param_1 + 0x70);
  if (1 < bVar1) {
    if (bVar1 == 2) {
      dVar5 = (double)FUN_00c43d10(param_2);
      dVar6 = (double)FUN_00c43d10(*(undefined8 *)(param_1 + 0xb8));
      unaff_XMM9_Qa = (dVar5 - dVar6) * unaff_XMM8_Qa + (double)(int)uVar2;
      goto LAB_01cd6227;
    }
    if (bVar1 != 3) goto LAB_01cd6227;
  }
  unaff_XMM9_Qa = (param_2 - *(double *)(param_1 + 0xb8)) * unaff_XMM7_Qa + (double)(int)uVar2;
LAB_01cd6227:
  if (2147483647.0 < unaff_XMM9_Qa) {
    unaff_XMM9_Qa = 2147483647.0;
  }
  if (unaff_XMM9_Qa < -2147483647.0) {
    unaff_XMM9_Qa = -2147483647.0;
  }
  uVar4 = FUN_0040c770(unaff_XMM9_Qa);
  return uVar4;
}

