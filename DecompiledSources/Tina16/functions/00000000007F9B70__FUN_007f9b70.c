/* Ghidra address: 007f9b70 */
/* Ghidra symbol: FUN_007f9b70 */


void FUN_007f9b70(longlong param_1,undefined8 param_2)

{
  if ((*(ushort *)(param_1 + 0x34) & 0x10) != 0) {
    param_2 = 0;
  }
  FUN_007f9b10(param_1,param_2);
  return;
}

