/* Ghidra address: 004a00c0 */
/* Ghidra symbol: FUN_004a00c0 */


void FUN_004a00c0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x88) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x88) + -0x20))(*(undefined8 *)(param_2 + 0x88),1);
  }
  return;
}

