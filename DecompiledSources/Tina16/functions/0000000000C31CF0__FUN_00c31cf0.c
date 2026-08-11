/* Ghidra address: 00c31cf0 */
/* Ghidra symbol: FUN_00c31cf0 */


void FUN_00c31cf0(longlong *param_1)

{
  FUN_00c32ac0(param_1);
  *(undefined1 *)(param_1 + 0x12) = 1;
  (**(code **)(*param_1 + 0x78))(param_1);
  (**(code **)(*(longlong *)param_1[2] + 0x20))((longlong *)param_1[2],param_1);
  return;
}

