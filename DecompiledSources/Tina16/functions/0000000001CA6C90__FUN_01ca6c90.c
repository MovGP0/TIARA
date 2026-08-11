/* Ghidra address: 01ca6c90 */
/* Ghidra symbol: FUN_01ca6c90 */


void FUN_01ca6c90(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x38) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x38) + -0x20))(*(undefined8 *)(param_2 + 0x38),1);
  }
  return;
}

