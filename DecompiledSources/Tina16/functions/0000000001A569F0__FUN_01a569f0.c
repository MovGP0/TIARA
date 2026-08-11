/* Ghidra address: 01a569f0 */
/* Ghidra symbol: FUN_01a569f0 */


void FUN_01a569f0(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0xf0) = *(undefined8 *)(*(longlong *)(param_2 + 0x120) + 0x2b90);
  (**(code **)(**(longlong **)(param_2 + 0xf0) + 8))(*(undefined8 *)(param_2 + 0xf0));
  return;
}

