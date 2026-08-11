/* Ghidra address: 011766f0 */
/* Ghidra symbol: FUN_011766f0 */


int FUN_011766f0(longlong *param_1,short param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  if (param_2 == 0x58) {
LAB_0117672d:
    iVar1 = *(int *)(*param_1 + 8);
    iVar5 = *(int *)*param_1;
    iVar4 = *(int *)(*param_1 + 0x18);
  }
  else {
    if (param_2 != 0x59) {
      if (param_2 == 0x78) goto LAB_0117672d;
      if (param_2 != 0x79) {
        return 0;
      }
    }
    iVar1 = *(int *)(*param_1 + 0xc);
    iVar5 = *(int *)(*param_1 + 4);
    iVar4 = *(int *)(*param_1 + 0x1c);
  }
  iVar2 = 0;
  if (-1 < iVar4) {
    iVar7 = iVar4 + 1;
    piVar6 = &DAT_020412f8;
    do {
      iVar3 = FUN_0040c770(((double)(iVar1 - iVar5) * (double)iVar2) / (double)iVar4 + 0.5);
      *piVar6 = iVar3 + iVar5;
      iVar2 = iVar2 + 1;
      piVar6 = piVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return iVar4 + 1;
}

