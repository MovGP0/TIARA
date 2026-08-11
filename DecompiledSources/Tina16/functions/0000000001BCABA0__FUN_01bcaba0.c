/* Ghidra address: 01bcaba0 */
/* Ghidra symbol: FUN_01bcaba0 */


undefined8 FUN_01bcaba0(longlong param_1)

{
  undefined8 uVar1;
  
  if (((*(longlong *)(param_1 + 0x590) == 0) || (*(longlong *)(param_1 + 0x598) == 0)) ||
     (*(longlong *)(param_1 + 0x5a0) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

