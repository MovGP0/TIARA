/* Ghidra address: 00c3cb20 */
/* Ghidra symbol: FUN_00c3cb20 */


undefined8 FUN_00c3cb20(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(int *)(*(longlong *)(param_1 + 0x30) + 0x10) == 0) &&
     (*(int *)(*(longlong *)(param_1 + 0x38) + 0x10) == 0)) {
    uVar1 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x38) >> 8),1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

