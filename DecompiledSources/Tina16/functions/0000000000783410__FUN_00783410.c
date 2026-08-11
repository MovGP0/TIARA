/* Ghidra address: 00783410 */
/* Ghidra symbol: FUN_00783410 */


void FUN_00783410(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x90) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x90) + -0x20))(*(undefined8 *)(param_2 + 0x90),1);
  }
  return;
}

