/* Ghidra address: 00bba600 */
/* Ghidra symbol: FUN_00bba600 */


void FUN_00bba600(longlong param_1,int param_2)

{
  if ((*(int *)(param_1 + 8) != param_2) &&
     (*(int *)(param_1 + 8) = param_2, *(longlong *)(param_1 + 0x10) != 0)) {
    (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0x18),param_1);
  }
  return;
}

