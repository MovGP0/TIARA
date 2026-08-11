/* Ghidra address: 00793380 */
/* Ghidra symbol: FUN_00793380 */


void FUN_00793380(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_00791cb0(param_1,param_2,param_3);
  if (((char)param_3 == '\x05') && ((*(byte *)(param_1 + 0x58) & 1) != 0)) {
    FUN_00410f20(param_2);
  }
  return;
}

