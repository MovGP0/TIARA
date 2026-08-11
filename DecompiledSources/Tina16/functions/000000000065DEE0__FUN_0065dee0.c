/* Ghidra address: 0065dee0 */
/* Ghidra symbol: FUN_0065dee0 */


void FUN_0065dee0(longlong *param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  char local_1d;
  undefined4 local_1c;
  
  local_30 = auStack_58;
  local_1d = (*(uint *)((longlong)param_1 + 0xa4) & 0x10000) != 0;
  *(uint *)((longlong)param_1 + 0xa4) = *(uint *)((longlong)param_1 + 0xa4) | 0x10000;
  if (*(longlong *)(param_2 + 0x18) == 1) {
    (**(code **)(*param_1 + -0x38))(param_1,param_2);
  }
  else if (((*(uint *)(param_2 + 0x10) & 1) == 0) || (*(char *)((longlong)param_1 + 0xa9) != '\0'))
  {
    local_30 = auStack_58;
    local_1c = thunk_FUN_03b57162(*(undefined8 *)(param_2 + 8));
    FUN_006570a0(param_1,param_2);
    thunk_FUN_0402759f(*(undefined8 *)(param_2 + 8),local_1c);
  }
  else {
    local_30 = auStack_58;
    (**(code **)(*param_1 + -0x38))(param_1,param_2);
  }
  if (local_1d == '\0') {
    *(uint *)((longlong)param_1 + 0xa4) = *(uint *)((longlong)param_1 + 0xa4) & 0xfffeffff;
  }
  return;
}

