/* Ghidra address: 006d7590 */
/* Ghidra symbol: FUN_006d7590 */


undefined8 FUN_006d7590(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar1 = FUN_006d7630();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar2 = FUN_006d7610(param_1,iVar4);
      if ((*(longlong *)(param_2 + 0x78) == lVar2) && (*(longlong *)(param_2 + 0x108) == param_1)) {
        uVar3 = FUN_006d7610(param_1,iVar4);
        return uVar3;
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

