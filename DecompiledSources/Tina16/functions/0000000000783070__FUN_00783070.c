/* Ghidra address: 00783070 */
/* Ghidra symbol: FUN_00783070 */


void FUN_00783070(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 200) != 0) {
    (**(code **)(**(longlong **)(param_2 + 200) + -0x20))(*(undefined8 *)(param_2 + 200),1);
  }
  return;
}

