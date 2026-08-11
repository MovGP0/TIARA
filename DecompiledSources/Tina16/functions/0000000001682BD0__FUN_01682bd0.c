/* Ghidra address: 01682bd0 */
/* Ghidra symbol: FUN_01682bd0 */


void FUN_01682bd0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_01681cd0(param_1,param_2,param_3);
  if ((*(char *)(param_1 + 0x50) != '\0') && ((char)param_3 == '\x05')) {
    FUN_00410f20(param_2);
  }
  return;
}

