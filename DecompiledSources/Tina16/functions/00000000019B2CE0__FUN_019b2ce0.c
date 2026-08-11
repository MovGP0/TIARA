/* Ghidra address: 019b2ce0 */
/* Ghidra symbol: FUN_019b2ce0 */


void FUN_019b2ce0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x48) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x48) + -0x20))(*(undefined8 *)(param_2 + 0x48),1);
  }
  return;
}

