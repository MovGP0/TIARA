/* Ghidra address: 00f8e020 */
/* Ghidra symbol: FUN_00f8e020 */


void FUN_00f8e020(longlong param_1,undefined8 param_2)

{
  _MCU_SetAborted(*(undefined8 *)(param_1 + 0x60),1);
  if (*(char *)(param_1 + 0x3511) == '\0') {
    FUN_00f8e060(param_1,param_2);
  }
  else {
    FUN_00f8e3c0(param_1,param_2);
  }
  return;
}

