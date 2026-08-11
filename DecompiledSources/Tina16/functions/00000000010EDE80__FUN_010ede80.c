/* Ghidra address: 010ede80 */
/* Ghidra symbol: FUN_010ede80 */


bool FUN_010ede80(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  double dVar6;
  double extraout_XMM0_Qa;
  double dVar7;
  
  if ((*(int *)(param_1 + 0x68) == *(int *)(param_1 + 0x70)) &&
     (*(int *)(param_1 + 0x6c) == *(int *)(param_1 + 0x74))) {
    if ((param_3 == *(int *)(param_1 + 0x68)) && (param_4 == *(int *)(param_1 + 0x6c))) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
  }
  else if ((*(int *)(param_1 + 0x68) == *(int *)(param_1 + 0x70)) &&
          (*(int *)(param_1 + 0x6c) != *(int *)(param_1 + 0x74))) {
    if (((param_4 < *(int *)(param_1 + 0x6c)) || (*(int *)(param_1 + 0x74) < param_4)) ||
       (param_3 != *(int *)(param_1 + 0x68))) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x68);
    iVar2 = *(int *)(param_1 + 0x70);
    if ((iVar1 == iVar2) || (*(int *)(param_1 + 0x6c) != *(int *)(param_1 + 0x74))) {
      uVar4 = iVar2 - iVar1 >> 0x1f;
      dVar6 = ((double)param_3 - (double)(iVar1 + iVar2) / 2.0) /
              ((double)(int)((iVar2 - iVar1 ^ uVar4) - uVar4) / 2.0);
      uVar4 = *(int *)(param_1 + 0x74) - *(int *)(param_1 + 0x6c);
      uVar5 = (int)uVar4 >> 0x1f;
      dVar7 = ((double)param_4 - (double)(*(int *)(param_1 + 0x6c) + *(int *)(param_1 + 0x74)) / 2.0
              ) / ((double)(int)((uVar4 ^ uVar5) - uVar5) / 2.0);
      FUN_0040c850((dVar6 * dVar6 + dVar7 * dVar7) - 1.0);
      bVar3 = extraout_XMM0_Qa < DAT_01f210a8;
    }
    else if (((param_3 < *(int *)(param_1 + 0x68)) || (*(int *)(param_1 + 0x70) < param_3)) ||
            (param_4 != *(int *)(param_1 + 0x6c))) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
  }
  return bVar3;
}

