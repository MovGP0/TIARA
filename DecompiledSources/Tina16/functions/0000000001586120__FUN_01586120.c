/* Ghidra address: 01586120 */
/* Ghidra symbol: FUN_01586120 */


void FUN_01586120(longlong param_1,int param_2,undefined8 *param_3)

{
  char cVar1;
  int local_res10;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined1 *local_a0;
  undefined1 *local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  undefined8 *local_70;
  undefined1 local_62 [66];
  longlong *local_20;
  
  local_a0 = auStack_d8;
  FUN_00417580(local_62,&DAT_015764a8);
  cVar1 = FUN_004113d0(param_3,&PTR_FUN_0157b5f0);
  if (cVar1 == '\0') {
    local_20 = (longlong *)(**(code **)*param_3)(param_3);
    local_res10 = param_2;
    while( true ) {
      cVar1 = (**(code **)(*local_20 + 8))(local_20);
      if (cVar1 == '\0') break;
      (**(code **)*local_20)(local_20,local_62);
      local_90 = local_62;
      FUN_0059a060(param_1 + 8,local_res10,local_90);
      local_res10 = local_res10 + 1;
    }
    if (local_20 != (longlong *)0x0) {
      (**(code **)(*local_20 + -0x20))(local_20,1);
    }
  }
  else {
    local_80 = param_3[1];
    local_88 = local_80;
    if (local_80 != 0) {
      local_88 = *(longlong *)(local_80 + -8);
    }
    local_b8 = *(undefined4 *)(param_3 + 2);
    local_78 = local_80;
    local_70 = param_3;
    FUN_01585f70(param_1,param_2,local_80,local_88 + -1);
  }
  FUN_00417740(local_62,&DAT_015764a8);
  return;
}

