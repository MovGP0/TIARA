/* Ghidra address: 007830b0 */
/* Ghidra symbol: FUN_007830b0 */


void FUN_007830b0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0xc0) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0xc0) + -0x20))(*(undefined8 *)(param_2 + 0xc0),1);
  }
  return;
}

