/* Ghidra address: 007e2fe0 */
/* Ghidra symbol: FUN_007e2fe0 */


undefined8 FUN_007e2fe0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffff;
  if (*(longlong *)(param_1 + 200) != 0) {
    uVar1 = FUN_007e34a0(*(longlong *)(param_1 + 200),param_1);
  }
  return uVar1;
}

