/* Ghidra address: 00bbb030 */
/* Ghidra symbol: FUN_00bbb030 */


void FUN_00bbb030(longlong param_1,int param_2)

{
  if ((*(int *)(param_1 + 0x70) != param_2) &&
     (*(int *)(param_1 + 0x70) = param_2, *(longlong *)(param_1 + 0x38) != 0)) {
    (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),param_1);
  }
  return;
}

