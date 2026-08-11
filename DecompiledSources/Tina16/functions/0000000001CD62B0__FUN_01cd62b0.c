/* Ghidra address: 01cd62b0 */
/* Ghidra symbol: FUN_01cd62b0 */


double FUN_01cd62b0(longlong param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  double dVar6;
  double dVar7;
  double unaff_XMM6_Qa;
  double unaff_XMM7_Qa;
  double unaff_XMM8_Qa;
  
  iVar2 = *(int *)(param_1 + 0xe8);
  iVar4 = *(int *)(param_1 + 0xec);
  if (iVar4 == iVar2) {
    uVar3 = FUN_01cd6670(param_1);
    if ((byte)uVar3 < 8) {
      bVar5 = ((int)CONCAT71((int7)((ulonglong)uVar3 >> 8),1) << ((byte)uVar3 & 0x1f) & 0x51U) != 0;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) {
      iVar4 = iVar2 + 1;
    }
    else {
      iVar4 = iVar2 + -1;
    }
  }
  if (*(double *)(param_1 + 0xc0) == *(double *)(param_1 + 0xb8)) {
    return *(double *)(param_1 + 0xb8);
  }
  bVar1 = *(byte *)(param_1 + 0x70);
  if (1 < bVar1) {
    if (bVar1 == 2) {
      dVar7 = (double)FUN_00c43d10(*(undefined8 *)(param_1 + 0xc0));
      dVar6 = (double)FUN_00c43d10(*(undefined8 *)(param_1 + 0xb8));
      unaff_XMM8_Qa = (double)(iVar4 - iVar2) / (dVar7 - dVar6);
      goto LAB_01cd639f;
    }
    if (bVar1 != 3) goto LAB_01cd639f;
  }
  unaff_XMM7_Qa =
       (double)(iVar4 - iVar2) / (*(double *)(param_1 + 0xc0) - *(double *)(param_1 + 0xb8));
LAB_01cd639f:
  bVar1 = *(byte *)(param_1 + 0x70);
  if (1 < bVar1) {
    if (bVar1 == 2) {
      dVar7 = (double)FUN_00c43d10(*(undefined8 *)(param_1 + 0xb8));
      dVar7 = (double)FUN_00c43d20((double)(param_2 - iVar2) / unaff_XMM8_Qa + dVar7);
      return dVar7;
    }
    if (bVar1 != 3) {
      return unaff_XMM6_Qa;
    }
  }
  return (double)(param_2 - iVar2) / unaff_XMM7_Qa + *(double *)(param_1 + 0xb8);
}

