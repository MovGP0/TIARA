/* Ghidra address: 018cceb0 */
/* Ghidra symbol: FUN_018cceb0 */


void FUN_018cceb0(longlong *param_1)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_20 = (longlong *)FUN_018cb270(param_1,&PTR_FUN_01931418);
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x68))(param_1,local_20,0);
    if (*(char *)((longlong)local_20 + 0xc5) != '\0') {
      (**(code **)(*local_20 + 200))(local_20,(double)param_1[0x11] - (double)param_1[0x26]);
      (**(code **)(*local_20 + 0xd0))(local_20,param_1[0x12]);
      (**(code **)(*(longlong *)param_1[7] + 0x38))((longlong *)param_1[7],local_20);
      param_1[0x12] = (longlong)((double)param_1[0x12] + (double)local_20[0x16]);
    }
    (**(code **)(*param_1 + 0x70))(param_1,local_20);
    FUN_018cd940(param_1,local_20,4);
  }
  return;
}

