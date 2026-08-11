/* Ghidra address: 005a4c10 */
/* Ghidra symbol: FUN_005a4c10 */


void FUN_005a4c10(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x48) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x48) + -0x20))(*(undefined8 *)(param_2 + 0x48),1);
  }
  return;
}

