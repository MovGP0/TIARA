/* Ghidra address: 009b0b60 */
/* Ghidra symbol: FUN_009b0b60 */


void FUN_009b0b60(longlong param_1,int param_2,undefined8 *param_3)

{
  char cVar1;
  int local_res10;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 *local_70;
  undefined1 *local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  undefined8 *local_40;
  undefined1 local_38 [24];
  longlong *local_20;
  
  local_70 = auStack_a8;
  FUN_00417580(local_38,&DAT_009428e8);
  cVar1 = FUN_004113d0(param_3,&PTR_FUN_009c1070);
  if (cVar1 == '\0') {
    local_20 = (longlong *)(**(code **)*param_3)(param_3);
    local_res10 = param_2;
    while( true ) {
      cVar1 = (**(code **)(*local_20 + 8))(local_20);
      if (cVar1 == '\0') break;
      (**(code **)*local_20)(local_20,local_38);
      local_60 = local_38;
      FUN_0059a060(param_1 + 8,local_res10,local_60);
      local_res10 = local_res10 + 1;
    }
    if (local_20 != (longlong *)0x0) {
      (**(code **)(*local_20 + -0x20))(local_20,1);
    }
  }
  else {
    local_50 = param_3[1];
    local_58 = local_50;
    if (local_50 != 0) {
      local_58 = *(longlong *)(local_50 + -8);
    }
    local_88 = *(undefined4 *)(param_3 + 2);
    local_48 = local_50;
    local_40 = param_3;
    FUN_009b09d0(param_1,param_2,local_50,local_58 + -1);
  }
  FUN_00417740(local_38,&DAT_009428e8);
  return;
}

