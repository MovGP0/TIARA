/* Ghidra address: 007822c0 */
/* Ghidra symbol: FUN_007822c0 */


void FUN_007822c0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0xd8) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0xd8) + -0x20))(*(undefined8 *)(param_2 + 0xd8),1);
  }
  return;
}

