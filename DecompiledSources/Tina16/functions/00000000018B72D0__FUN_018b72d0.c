/* Ghidra address: 018b72d0 */
/* Ghidra symbol: FUN_018b72d0 */


undefined8 FUN_018b72d0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_01803a10(*(longlong *)(param_1 + 8));
  }
  return uVar1;
}

