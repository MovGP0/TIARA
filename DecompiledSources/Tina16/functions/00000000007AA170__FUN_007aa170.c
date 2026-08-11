/* Ghidra address: 007aa170 */
/* Ghidra symbol: FUN_007aa170 */


void FUN_007aa170(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x88) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x88) + -0x20))(*(undefined8 *)(param_2 + 0x88),1);
  }
  return;
}

