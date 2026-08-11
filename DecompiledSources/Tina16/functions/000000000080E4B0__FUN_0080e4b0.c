/* Ghidra address: 0080e4b0 */
/* Ghidra symbol: FUN_0080e4b0 */


bool FUN_0080e4b0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0xb8) == 0) {
    uVar1 = FUN_0041b800(param_1 + 0xb8);
    FUN_00714c80(uVar1);
  }
  return *(longlong *)(param_1 + 0xb8) != 0;
}

