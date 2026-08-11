/* Ghidra address: 01b13b30 */
/* Ghidra symbol: FUN_01b13b30 */


void FUN_01b13b30(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x48) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x48) + -0x20))(*(undefined8 *)(param_2 + 0x48),1);
  }
  return;
}

