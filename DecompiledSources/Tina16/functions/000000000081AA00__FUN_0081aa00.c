/* Ghidra address: 0081aa00 */
/* Ghidra symbol: FUN_0081aa00 */


undefined8 FUN_0081aa00(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x90) == 0) {
    uVar1 = FUN_0081a8c0(param_1,*(undefined8 *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x90) = uVar1;
  }
  return *(undefined8 *)(param_1 + 0x90);
}

