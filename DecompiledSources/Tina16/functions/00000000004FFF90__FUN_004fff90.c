/* Ghidra address: 004fff90 */
/* Ghidra symbol: FUN_004fff90 */


void FUN_004fff90(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x88) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x88) + -0x20))(*(undefined8 *)(param_2 + 0x88),1);
  }
  return;
}

