/* Ghidra address: 00cb6380 */
/* Ghidra symbol: FUN_00cb6380 */


void FUN_00cb6380(undefined8 param_1,longlong param_2)

{
  (**(code **)(**(longlong **)(param_2 + 0x88) + 200))(*(undefined8 *)(param_2 + 0x88),0);
  *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_2 + 0x88) = 0;
  FUN_00410f20(*(undefined8 *)(param_2 + 0x80));
  return;
}

