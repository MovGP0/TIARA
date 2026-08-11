/* Ghidra address: 016126f0 */
/* Ghidra symbol: FUN_016126f0 */


void FUN_016126f0(longlong param_1,undefined4 param_2)

{
  FUN_00411a80(param_1,param_2);
  if ((*(char *)(param_1 + 0x20) == '\0') && (*(longlong *)(param_1 + 0x18) != 0)) {
    FUN_00410f20(*(undefined8 *)(param_1 + 0x18));
  }
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

