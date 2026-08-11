/* Ghidra address: 004dee30 */
/* Ghidra symbol: FUN_004dee30 */


void FUN_004dee30(longlong param_1,int param_2,undefined8 *param_3)

{
  char cVar1;
  int local_res10;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined1 *local_60;
  undefined8 local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  undefined8 *local_30;
  undefined8 local_28;
  longlong *local_20;
  
  local_60 = auStack_98;
  cVar1 = FUN_004113d0(param_3,&PTR_FUN_0048b9f8);
  if (cVar1 == '\0') {
    local_20 = (longlong *)(**(code **)*param_3)(param_3);
    local_res10 = param_2;
    while( true ) {
      cVar1 = (**(code **)(*local_20 + 8))(local_20);
      if (cVar1 == '\0') break;
      local_50 = (**(code **)*local_20)(local_20);
      local_28 = local_50;
      FUN_00599f70(param_1 + 8,local_res10,&local_50);
      local_res10 = local_res10 + 1;
    }
    if (local_20 != (longlong *)0x0) {
      (**(code **)(*local_20 + -0x20))(local_20,1);
    }
  }
  else {
    local_40 = param_3[1];
    local_48 = local_40;
    if (local_40 != 0) {
      local_48 = *(longlong *)(local_40 + -8);
    }
    local_78 = *(undefined4 *)(param_3 + 2);
    local_38 = local_40;
    local_30 = param_3;
    FUN_004dece0(param_1,param_2,local_40,local_48 + -1);
  }
  return;
}

