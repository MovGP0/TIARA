/* Ghidra address: 00cb7110 */
/* Ghidra symbol: FUN_00cb7110 */


void FUN_00cb7110(undefined8 param_1,longlong param_2)

{
  (**(code **)(**(longlong **)(param_2 + 0xf8) + 200))(*(undefined8 *)(param_2 + 0xf8),0);
  *(undefined8 *)(param_2 + 0xf0) = *(undefined8 *)(param_2 + 0xf8);
  *(undefined8 *)(param_2 + 0xf8) = 0;
  FUN_00410f20(*(undefined8 *)(param_2 + 0xf0));
  return;
}

