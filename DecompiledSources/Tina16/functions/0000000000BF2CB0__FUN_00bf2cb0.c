/* Ghidra address: 00bf2cb0 */
/* Ghidra symbol: FUN_00bf2cb0 */


undefined8 FUN_00bf2cb0(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(int *)(param_1 + 0x4b8) == *(int *)(param_1 + 0x4c0)) ||
     (*(char *)(param_1 + 0x5f5) == '\x02')) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((uint7)(uint3)((uint)*(int *)(param_1 + 0x4b8) >> 8),1);
  }
  return uVar1;
}

