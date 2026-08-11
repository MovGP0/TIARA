/* Ghidra address: 01bfaa20 */
/* Ghidra symbol: FUN_01bfaa20 */


undefined8 FUN_01bfaa20(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x50) == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x10);
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),0 < *(int *)(lVar1 + 0x10));
  }
  return uVar2;
}

