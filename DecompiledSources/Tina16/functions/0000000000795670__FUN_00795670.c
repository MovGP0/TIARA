/* Ghidra address: 00795670 */
/* Ghidra symbol: FUN_00795670 */


void FUN_00795670(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  FUN_00794100(param_1,param_2,param_3);
  if (((char)param_3 == '\x05') && ((*(byte *)(param_1 + 0x58) & 2) != 0)) {
    FUN_00410f20(*param_2);
  }
  return;
}

