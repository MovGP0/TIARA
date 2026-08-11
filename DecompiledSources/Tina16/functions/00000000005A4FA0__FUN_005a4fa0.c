/* Ghidra address: 005a4fa0 */
/* Ghidra symbol: FUN_005a4fa0 */


void FUN_005a4fa0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x38) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x38) + -0x20))(*(undefined8 *)(param_2 + 0x38),1);
  }
  return;
}

