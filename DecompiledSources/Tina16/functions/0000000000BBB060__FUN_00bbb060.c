/* Ghidra address: 00bbb060 */
/* Ghidra symbol: FUN_00bbb060 */


void FUN_00bbb060(longlong param_1,int param_2)

{
  if ((*(int *)(param_1 + 0x74) != param_2) &&
     (*(int *)(param_1 + 0x74) = param_2, *(longlong *)(param_1 + 0x38) != 0)) {
    (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),param_1);
  }
  return;
}

