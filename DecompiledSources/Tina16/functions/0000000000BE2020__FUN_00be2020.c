/* Ghidra address: 00be2020 */
/* Ghidra symbol: FUN_00be2020 */


void FUN_00be2020(longlong param_1,int param_2)

{
  if ((*(int *)(param_1 + 0x14) != param_2) &&
     (*(int *)(param_1 + 0x14) = param_2, *(longlong *)(param_1 + 0x20) != 0)) {
    (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x28),param_1);
  }
  return;
}

