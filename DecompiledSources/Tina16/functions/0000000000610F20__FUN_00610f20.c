/* Ghidra address: 00610f20 */
/* Ghidra symbol: FUN_00610f20 */


void FUN_00610f20(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  if (((char)param_3 == '\x02') && (*(char *)(param_1 + 0x18) != '\0')) {
    FUN_00410f20(param_2);
  }
  FUN_004af600(param_1,param_2,param_3);
  return;
}

