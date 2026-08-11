/* Ghidra address: 00b98760 */
/* Ghidra symbol: FUN_00b98760 */


int FUN_00b98760(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 < 0) {
    iVar1 = 0;
  }
  else {
    FUN_00b984a0(param_1);
    iVar1 = *(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x28);
    if (param_3 < iVar1) {
      iVar1 = param_3;
    }
    if (0 < iVar1) {
      FUN_00409a70(*(longlong *)(param_1 + 0x20) + *(longlong *)(param_1 + 0x28),param_2,
                   (longlong)iVar1);
      *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + (longlong)iVar1;
    }
  }
  return iVar1;
}

