/* Ghidra address: 0153b260 */
/* Ghidra symbol: FUN_0153b260 */


undefined8 * FUN_0153b260(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 == 0) {
    param_3 = FUN_019a4600();
  }
  FUN_0138ea30(param_2,*(undefined8 *)(param_3 + 0x488));
  *param_1 = DAT_0210edf8;
  param_1[1] = DAT_0210ee00;
  return param_1;
}

