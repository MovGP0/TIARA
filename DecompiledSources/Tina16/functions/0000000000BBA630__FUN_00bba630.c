/* Ghidra address: 00bba630 */
/* Ghidra symbol: FUN_00bba630 */


void FUN_00bba630(longlong param_1,int param_2)

{
  if ((*(int *)(param_1 + 0xc) != param_2) &&
     (*(int *)(param_1 + 0xc) = param_2, *(longlong *)(param_1 + 0x10) != 0)) {
    (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0x18),param_1);
  }
  return;
}

