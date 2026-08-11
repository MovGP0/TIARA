/* Ghidra address: 00c8ee70 */
/* Ghidra symbol: FUN_00c8ee70 */


void FUN_00c8ee70(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(*(longlong *)(param_2 + 0x70) + 0x58);
  (**(code **)(**(longlong **)(param_2 + 0x48) + 8))(*(undefined8 *)(param_2 + 0x48));
  return;
}

