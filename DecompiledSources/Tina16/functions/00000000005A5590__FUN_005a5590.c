/* Ghidra address: 005a5590 */
/* Ghidra symbol: FUN_005a5590 */


void FUN_005a5590(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_005a3eb0(param_1,param_2,param_3);
  if (((char)param_3 == '\x05') && ((*(byte *)(param_1 + 0x58) & 2) != 0)) {
    FUN_00410f20(param_2);
  }
  return;
}

