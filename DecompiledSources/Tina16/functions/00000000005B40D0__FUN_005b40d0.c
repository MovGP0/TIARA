/* Ghidra address: 005b40d0 */
/* Ghidra symbol: FUN_005b40d0 */


void FUN_005b40d0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x90) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x90) + -0x20))(*(undefined8 *)(param_2 + 0x90),1);
  }
  return;
}

