/* Ghidra address: 007a0d60 */
/* Ghidra symbol: FUN_007a0d60 */


void FUN_007a0d60(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x78) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x78) + -0x20))(*(undefined8 *)(param_2 + 0x78),1);
  }
  return;
}

