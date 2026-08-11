/* Ghidra address: 007ffaf0 */
/* Ghidra symbol: FUN_007ffaf0 */


undefined8 FUN_007ffaf0(void)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  uVar2 = FUN_0065b870();
  lVar3 = thunk_FUN_03cc587b(uVar2,2);
  iVar1 = FUN_00808040();
  iVar5 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar4 = FUN_00808020(DAT_02012670,iVar5);
      if (*(longlong *)(lVar4 + 8) == lVar3) {
        uVar2 = FUN_00808020(DAT_02012670,iVar5);
        return uVar2;
      }
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00809c40(DAT_02012670);
  iVar1 = FUN_00808040();
  iVar5 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar4 = FUN_00808020(DAT_02012670,iVar5);
      if (*(longlong *)(lVar4 + 8) == lVar3) {
        uVar2 = FUN_00808020(DAT_02012670,iVar5);
        return uVar2;
      }
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

