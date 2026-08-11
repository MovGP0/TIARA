/* Ghidra address: 01876f70 */
/* Ghidra symbol: FUN_01876f70 */


undefined4 FUN_01876f70(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  return uVar1;
}

