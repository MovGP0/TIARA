/* Ghidra address: 007e2ef0 */
/* Ghidra symbol: FUN_007e2ef0 */


undefined4 FUN_007e2ef0(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(longlong *)(param_1 + 0xb8) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0xb8) + 0x10);
  }
  return uVar1;
}

