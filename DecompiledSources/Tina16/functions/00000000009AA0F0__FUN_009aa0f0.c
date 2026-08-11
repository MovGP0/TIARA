/* Ghidra address: 009aa0f0 */
/* Ghidra symbol: FUN_009aa0f0 */


void FUN_009aa0f0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x48) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x48) + -0x20))(*(undefined8 *)(param_2 + 0x48),1);
  }
  return;
}

