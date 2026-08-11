/* Ghidra address: 007e2ec0 */
/* Ghidra symbol: FUN_007e2ec0 */


undefined8 FUN_007e2ec0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x90) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x18);
  }
  return uVar1;
}

