/* Ghidra address: 016d0d00 */
/* Ghidra symbol: FUN_016d0d00 */


void FUN_016d0d00(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x78) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x78) + -0x20))(*(undefined8 *)(param_2 + 0x78),1);
  }
  return;
}

