/* Ghidra address: 00563ad0 */
/* Ghidra symbol: FUN_00563ad0 */


void FUN_00563ad0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x48) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x48) + -0x20))(*(undefined8 *)(param_2 + 0x48),1);
  }
  return;
}

