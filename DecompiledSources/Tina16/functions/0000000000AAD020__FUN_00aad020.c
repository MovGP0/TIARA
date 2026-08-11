/* Ghidra address: 00aad020 */
/* Ghidra symbol: FUN_00aad020 */


undefined8 FUN_00aad020(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(int *)(param_1 + 0x3c) < 0) ||
     (*(int *)(param_1 + 0x3c) + *(int *)(*(longlong *)(param_1 + 0x30) + 8) <
      *(int *)(*(longlong *)(param_1 + 0x28) + 0x10))) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x28) >> 8),1);
  }
  return uVar1;
}

