/* Ghidra address: 007e34a0 */
/* Ghidra symbol: FUN_007e34a0 */


undefined8 FUN_007e34a0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffff;
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    uVar1 = FUN_004aeba0();
  }
  return uVar1;
}

