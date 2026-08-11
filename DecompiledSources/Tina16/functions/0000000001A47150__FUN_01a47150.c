/* Ghidra address: 01a47150 */
/* Ghidra symbol: FUN_01a47150 */


void FUN_01a47150(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x1a0) = *(undefined8 *)(*(longlong *)(param_2 + 0x1d0) + 0x2b90);
  (**(code **)(**(longlong **)(param_2 + 0x1a0) + 8))(*(undefined8 *)(param_2 + 0x1a0));
  return;
}

