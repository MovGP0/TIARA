/* Ghidra address: 004f0120 */
/* Ghidra symbol: FUN_004f0120 */


void FUN_004f0120(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_004eecb0(param_1,param_2,param_3);
  if (((char)param_3 == '\x05') && ((*(byte *)(param_1 + 0x58) & 1) != 0)) {
    FUN_00410f20(param_2);
  }
  return;
}

