/* Ghidra address: 00bbb3e0 */
/* Ghidra symbol: FUN_00bbb3e0 */


void FUN_00bbb3e0(longlong param_1,int param_2)

{
  if ((*(int *)(param_1 + 0x14) != param_2) &&
     (*(int *)(param_1 + 0x14) = param_2, *(longlong *)(param_1 + 0x28) != 0)) {
    (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x30),param_1);
  }
  return;
}

