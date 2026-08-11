/* Ghidra address: 01648720 */
/* Ghidra symbol: FUN_01648720 */


undefined8 FUN_01648720(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if ((*(int *)(param_1 + 0x1c) == *(int *)(param_2 + 0x1c)) &&
     (*(int *)(param_1 + 0x20) == *(int *)(param_2 + 0x20))) {
    uVar1 = CONCAT71((uint7)(uint3)((uint)*(int *)(param_1 + 0x20) >> 8),1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

