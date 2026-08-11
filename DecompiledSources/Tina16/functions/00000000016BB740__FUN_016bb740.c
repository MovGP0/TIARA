/* Ghidra address: 016bb740 */
/* Ghidra symbol: FUN_016bb740 */


void FUN_016bb740(longlong param_1,longlong *param_2)

{
  FUN_004b9ec0(*(undefined8 *)(param_1 + 0x18));
  (**(code **)(*param_2 + 0x110))(param_2,*(undefined8 *)(param_1 + 0x18));
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x48))(*(longlong **)(param_1 + 0x18),0,0);
  *(undefined8 *)(param_1 + 0x9b0) = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8);
  return;
}

