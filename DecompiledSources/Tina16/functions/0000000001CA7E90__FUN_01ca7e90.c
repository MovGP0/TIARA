/* Ghidra address: 01ca7e90 */
/* Ghidra symbol: FUN_01ca7e90 */


void FUN_01ca7e90(longlong param_1,int param_2,undefined8 *param_3)

{
  char cVar1;
  int local_res10;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 *local_70;
  undefined1 *local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  undefined8 *local_38;
  undefined1 local_30 [16];
  longlong *local_20;
  
  local_70 = auStack_a8;
  FUN_00417580(local_30,&DAT_01c9d548);
  cVar1 = FUN_004113d0(param_3,&PTR_FUN_01caaef8);
  if (cVar1 == '\0') {
    local_20 = (longlong *)(**(code **)*param_3)(param_3);
    local_res10 = param_2;
    while( true ) {
      cVar1 = (**(code **)(*local_20 + 8))(local_20);
      if (cVar1 == '\0') break;
      (**(code **)*local_20)(local_20,local_30);
      local_58 = local_30;
      FUN_0059a060(param_1 + 8,local_res10,local_58);
      local_res10 = local_res10 + 1;
    }
    if (local_20 != (longlong *)0x0) {
      (**(code **)(*local_20 + -0x20))(local_20,1);
    }
  }
  else {
    local_48 = param_3[1];
    local_50 = local_48;
    if (local_48 != 0) {
      local_50 = *(longlong *)(local_48 + -8);
    }
    local_88 = *(undefined4 *)(param_3 + 2);
    local_40 = local_48;
    local_38 = param_3;
    FUN_01ca7d00(param_1,param_2,local_48,local_50 + -1);
  }
  FUN_00417740(local_30,&DAT_01c9d548);
  return;
}

