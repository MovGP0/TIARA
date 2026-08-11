/* Ghidra address: 0044f4c0 */
/* Ghidra symbol: FUN_0044f4c0 */


void FUN_0044f4c0(longlong param_1,int param_2,int *param_3,int *param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = 0;
  if (param_1 != 0) {
    iVar4 = *(int *)(param_1 + -4);
  }
  iVar2 = 1;
  iVar3 = 1;
  while ((iVar5 = iVar3, iVar6 = iVar2, iVar5 < iVar4 && (iVar6 < param_2))) {
    uVar1 = *(ushort *)(param_1 + -2 + (longlong)iVar5 * 2);
    iVar2 = iVar6 + 1;
    if ((uVar1 < 0xd800) || (0xdfff < uVar1)) {
      iVar3 = iVar5 + 1;
    }
    else {
      iVar3 = iVar5 + 2;
      if (iVar4 < iVar5 + 2) {
        iVar2 = iVar6;
        iVar3 = iVar5 + 1;
      }
    }
  }
  if ((((iVar6 == param_2) && (iVar5 < iVar4)) &&
      (uVar1 = *(ushort *)(param_1 + -2 + (longlong)iVar5 * 2), 0xd7ff < uVar1)) && (uVar1 < 0xe000)
     ) {
    iVar5 = FUN_0044f730(param_1,iVar5);
    iVar5 = iVar5 + -1;
  }
  *param_3 = iVar6;
  *param_4 = iVar5;
  return;
}

