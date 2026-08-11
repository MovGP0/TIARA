/* Ghidra address: 00aa73f0 */
/* Ghidra symbol: FUN_00aa73f0 */


void FUN_00aa73f0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  *(undefined8 *)(param_1 + 0x188) = 0;
  FUN_00414ad0(param_1 + 0x1a8);
  *(undefined1 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 400) = *param_3;
  *(undefined8 *)(param_1 + 0x198) = param_3[1];
  *(undefined8 *)(param_1 + 0x1a0) = param_3[2];
  return;
}

