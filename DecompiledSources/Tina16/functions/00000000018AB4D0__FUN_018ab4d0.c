/* Ghidra address: 018ab4d0 */
/* Ghidra symbol: FUN_018ab4d0 */


void FUN_018ab4d0(longlong param_1,char param_2)

{
  if ((0 < *(int *)(param_1 + 0x4d8)) &&
     (*(int *)(param_1 + 0x4d8) = *(int *)(param_1 + 0x4d8) + -1, *(int *)(param_1 + 0x4d8) < 1)) {
    FUN_018a9e60(param_1);
    FUN_018a7200(*(undefined8 *)(param_1 + 0x550),0);
    FUN_018a7200(*(undefined8 *)(param_1 + 0x540),0);
    if (param_2 != '\0') {
      FUN_018aba70(param_1);
      (**(code **)(**(longlong **)(param_1 + 0x550) + 0x188))(*(longlong **)(param_1 + 0x550));
      (**(code **)(**(longlong **)(param_1 + 0x540) + 0x188))(*(longlong **)(param_1 + 0x540));
    }
  }
  return;
}

