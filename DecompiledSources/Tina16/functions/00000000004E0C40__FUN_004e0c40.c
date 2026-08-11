/* Ghidra address: 004e0c40 */
/* Ghidra symbol: FUN_004e0c40 */


void FUN_004e0c40(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x48) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x48) + -0x20))(*(undefined8 *)(param_2 + 0x48),1);
  }
  return;
}

