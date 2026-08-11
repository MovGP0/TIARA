/* Ghidra address: 01b124a0 */
/* Ghidra symbol: FUN_01b124a0 */


void FUN_01b124a0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_01b115a0(param_1,param_2,param_3);
  if ((*(char *)(param_1 + 0x50) != '\0') && ((char)param_3 == '\x05')) {
    FUN_00410f20(param_2);
  }
  return;
}

