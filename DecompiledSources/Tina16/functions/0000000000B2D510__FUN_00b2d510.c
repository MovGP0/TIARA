/* Ghidra address: 00b2d510 */
/* Ghidra symbol: FUN_00b2d510 */


void FUN_00b2d510(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  FUN_00414bf0(param_1 + 8);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  *(undefined1 *)(param_1 + 0x19) = param_4;
  *(undefined1 *)(param_1 + 0x1a) = 0x27;
  FUN_00b2d6a0(param_1);
  FUN_00b2e170(param_1);
  return;
}

