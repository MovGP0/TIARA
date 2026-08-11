/* Ghidra address: 00f2e300 */
/* Ghidra symbol: FUN_00f2e300 */


undefined8 FUN_00f2e300(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(ulonglong *)(param_1 + 0x18) < *(ulonglong *)(param_1 + 8)) &&
     (*(int *)(param_1 + 0x34) <= *(int *)(param_1 + 0x30))) {
    uVar1 = CONCAT71((uint7)(uint3)((uint)*(int *)(param_1 + 0x30) >> 8),1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

