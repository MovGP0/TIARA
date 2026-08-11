/* Ghidra address: 00bbb000 */
/* Ghidra symbol: FUN_00bbb000 */


void FUN_00bbb000(longlong param_1,int param_2)

{
  if ((*(int *)(param_1 + 0x6c) != param_2) &&
     (*(int *)(param_1 + 0x6c) = param_2, *(longlong *)(param_1 + 0x38) != 0)) {
    (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),param_1);
  }
  return;
}

