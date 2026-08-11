/* Ghidra address: 008f9680 */
/* Ghidra symbol: FUN_008f9680 */


int FUN_008f9680(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x18);
  if (param_3 < iVar1) {
    iVar1 = param_3;
  }
  FUN_00409a70(*(longlong *)(param_1 + 8) + (longlong)*(int *)(param_1 + 0x18),param_2,
               (longlong)iVar1);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + iVar1;
  return iVar1;
}

