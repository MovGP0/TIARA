/* Ghidra address: 0044f450 */
/* Ghidra symbol: FUN_0044f450 */


int FUN_0044f450(longlong param_1,int param_2)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  if (param_2 < 1) {
    bVar2 = true;
  }
  else {
    iVar3 = 0;
    if (param_1 != 0) {
      iVar3 = *(int *)(param_1 + -4);
    }
    bVar2 = iVar3 < param_2;
  }
  iVar3 = iVar5;
  if ((!bVar2) && (iVar4 = 1, iVar3 = 0, 0 < param_2)) {
    do {
      uVar1 = *(ushort *)(param_1 + -2 + (longlong)iVar4 * 2);
      if ((uVar1 < 0xd800) || (0xdfff < uVar1)) {
        iVar4 = iVar4 + 1;
      }
      else {
        iVar4 = FUN_0044f730(param_1,iVar4);
      }
      iVar5 = iVar5 + 1;
      iVar3 = iVar5;
    } while (iVar4 <= param_2);
  }
  return iVar3;
}

