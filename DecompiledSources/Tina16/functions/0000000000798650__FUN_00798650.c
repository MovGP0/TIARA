/* Ghidra address: 00798650 */
/* Ghidra symbol: FUN_00798650 */


void FUN_00798650(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x98) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x98) + -0x20))(*(undefined8 *)(param_2 + 0x98),1);
  }
  return;
}

