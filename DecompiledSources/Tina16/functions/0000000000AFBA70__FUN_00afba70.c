/* Ghidra address: 00afba70 */
/* Ghidra symbol: FUN_00afba70 */


void FUN_00afba70(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  *(undefined8 *)(param_2 + 400) = *(undefined8 *)(param_2 + 0x188);
  *(undefined8 *)(param_2 + 0x188) = 0;
  FUN_00410f20(*(undefined8 *)(param_2 + 400));
  *(undefined8 *)(param_2 + 0x180) = *(undefined8 *)(param_2 + 0x178);
  *(undefined8 *)(param_2 + 0x178) = 0;
  FUN_00410f20(*(undefined8 *)(param_2 + 0x180));
  if (*(longlong *)(param_2 + 0x170) != 0) {
    thunk_FUN_0416f828(*(undefined8 *)(param_2 + 0x170));
  }
  if (*(longlong *)(param_2 + 0x168) != 0) {
    thunk_FUN_0416f828(*(undefined8 *)(param_2 + 0x168));
  }
  if ((byte)(*(char *)(param_2 + 0x250) - 1U) < 2) {
    (**(code **)(**(longlong **)(param_2 + 0x238) + 0xa8))(*(undefined8 *)(param_2 + 0x238));
  }
  else if (*(char *)(param_2 + 0x250) == '\x03') {
    if (*(int *)(*(longlong *)(param_2 + 0x230) + 0x9b8) < *(int *)(param_2 + 0x240)) {
      (**(code **)(**(longlong **)(param_2 + 0x238) + 0xb0))(*(undefined8 *)(param_2 + 0x238));
    }
    else {
      (**(code **)(**(longlong **)(param_2 + 0x238) + 0xa8))(*(undefined8 *)(param_2 + 0x238));
    }
  }
  piVar1 = (int *)(*(longlong *)(param_2 + 0x230) + 0x9b8);
  *piVar1 = *piVar1 + -1;
  return;
}

