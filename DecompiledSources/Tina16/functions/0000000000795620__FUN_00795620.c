/* Ghidra address: 00795620 */
/* Ghidra symbol: FUN_00795620 */


void FUN_00795620(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_007940c0(param_1,param_2,param_3);
  if (((char)param_3 == '\x05') && ((*(byte *)(param_1 + 0x58) & 1) != 0)) {
    FUN_00410f20(param_2);
  }
  return;
}

