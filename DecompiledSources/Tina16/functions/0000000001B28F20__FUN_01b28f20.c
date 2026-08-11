/* Ghidra address: 01b28f20 */
/* Ghidra symbol: FUN_01b28f20 */


void FUN_01b28f20(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_01b28020(param_1,param_2,param_3);
  if ((*(char *)(param_1 + 0x50) != '\0') && ((char)param_3 == '\x05')) {
    FUN_00410f20(param_2);
  }
  return;
}

