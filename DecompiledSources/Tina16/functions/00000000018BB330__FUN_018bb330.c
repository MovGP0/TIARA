/* Ghidra address: 018bb330 */
/* Ghidra symbol: FUN_018bb330 */


void FUN_018bb330(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x38) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x38) + 0x90))
              (*(undefined8 *)(param_2 + 0x38),*(undefined8 *)(*(longlong *)(param_2 + 0x60) + 0x90)
              );
    FUN_00410f20(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}

