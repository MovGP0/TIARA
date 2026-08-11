/* Ghidra address: 017bd3e0 */
/* Ghidra symbol: FUN_017bd3e0 */


undefined8 FUN_017bd3e0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x10) == *(int *)(param_1 + 0xbc)) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((uint7)(uint3)((uint)*(int *)(param_1 + 0x10) >> 8),1);
  }
  return uVar1;
}

