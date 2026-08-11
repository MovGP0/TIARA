/* Ghidra address: 01b27d40 */
/* Ghidra symbol: FUN_01b27d40 */


void FUN_01b27d40(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x48) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x48) + -0x20))(*(undefined8 *)(param_2 + 0x48),1);
  }
  return;
}

