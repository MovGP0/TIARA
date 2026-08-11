/* Ghidra address: 0056b1d0 */
/* Ghidra symbol: FUN_0056b1d0 */


void FUN_0056b1d0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_0055e930(param_1,param_2,param_3);
  if (((char)param_3 == '\x05') && ((*(byte *)(param_1 + 0x58) & 1) != 0)) {
    FUN_00410f20(param_2);
  }
  return;
}

