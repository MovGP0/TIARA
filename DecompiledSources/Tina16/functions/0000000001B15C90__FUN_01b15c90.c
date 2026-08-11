/* Ghidra address: 01b15c90 */
/* Ghidra symbol: FUN_01b15c90 */


void FUN_01b15c90(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x48) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x48) + -0x20))(*(undefined8 *)(param_2 + 0x48),1);
  }
  return;
}

