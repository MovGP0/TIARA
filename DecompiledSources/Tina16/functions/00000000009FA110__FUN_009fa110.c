/* Ghidra address: 009fa110 */
/* Ghidra symbol: FUN_009fa110 */


void FUN_009fa110(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_004af600(param_1,param_2,param_3);
  if ((char)param_3 == '\0') {
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  else if ((char)param_3 == '\x02') {
    FUN_00410f20(param_2);
  }
  return;
}

