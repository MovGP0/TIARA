/* Ghidra address: 01bfe3e0 */
/* Ghidra symbol: FUN_01bfe3e0 */


void FUN_01bfe3e0(longlong *param_1,short param_2)

{
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (*(short *)((longlong)param_1 + 0x8c) != param_2) {
    *(short *)((longlong)param_1 + 0x8c) = param_2;
    FUN_007dc700(local_20,param_2);
    FUN_00414ad0(param_1 + 0x13,local_20[0]);
    (**(code **)(*param_1 + 0x68))(param_1);
  }
  FUN_00414480(local_20);
  return;
}

