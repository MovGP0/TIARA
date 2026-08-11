/* Ghidra address: 0153b190 */
/* Ghidra symbol: FUN_0153b190 */


undefined8 FUN_0153b190(undefined8 param_1,longlong param_2)

{
  if (param_2 == 0) {
    param_2 = FUN_019a4600();
  }
  FUN_0131e140(param_1,*(undefined8 *)(param_2 + 0x488));
  return DAT_0210edf0;
}

