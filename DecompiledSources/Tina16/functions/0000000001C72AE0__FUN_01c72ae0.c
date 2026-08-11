/* Ghidra address: 01c72ae0 */
/* Ghidra symbol: FUN_01c72ae0 */


void FUN_01c72ae0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 *param_5,undefined1 *param_6)

{
  *(undefined8 *)(param_1 + 0x24c8) = *param_5;
  *(undefined4 *)(param_1 + 0x24d8) = param_4;
  *param_6 = 1;
  FUN_00742eb0(*(undefined8 *)(param_1 + 0x1650),1);
  return;
}

