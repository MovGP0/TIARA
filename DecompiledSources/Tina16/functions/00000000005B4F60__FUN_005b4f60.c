/* Ghidra address: 005b4f60 */
/* Ghidra symbol: FUN_005b4f60 */


void FUN_005b4f60(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x48) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x48) + -0x20))(*(undefined8 *)(param_2 + 0x48),1);
  }
  return;
}

