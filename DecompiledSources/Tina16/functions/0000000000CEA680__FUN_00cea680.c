/* Ghidra address: 00cea680 */
/* Ghidra symbol: FUN_00cea680 */


void FUN_00cea680(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x38) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x38) + 0x20))(*(undefined8 *)(param_2 + 0x38),0);
    FUN_00410f20(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}

