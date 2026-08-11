/* Ghidra address: 005c7480 */
/* Ghidra symbol: FUN_005c7480 */


void FUN_005c7480(longlong param_1,int param_2,undefined8 *param_3)

{
  char cVar1;
  int local_res10;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined1 *local_90;
  undefined1 *local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  undefined8 *local_58;
  undefined1 local_50 [48];
  longlong *local_20;
  
  local_90 = auStack_c8;
  FUN_00417580(local_50,&DAT_005bc4e0);
  cVar1 = FUN_004113d0(param_3,&PTR_FUN_005cca68);
  if (cVar1 == '\0') {
    local_20 = (longlong *)(**(code **)*param_3)(param_3);
    local_res10 = param_2;
    while( true ) {
      cVar1 = (**(code **)(*local_20 + 8))(local_20);
      if (cVar1 == '\0') break;
      (**(code **)*local_20)(local_20,local_50);
      local_78 = local_50;
      FUN_0059a060(param_1 + 8,local_res10,local_78);
      local_res10 = local_res10 + 1;
    }
    if (local_20 != (longlong *)0x0) {
      (**(code **)(*local_20 + -0x20))(local_20,1);
    }
  }
  else {
    local_68 = param_3[1];
    local_70 = local_68;
    if (local_68 != 0) {
      local_70 = *(longlong *)(local_68 + -8);
    }
    local_a8 = *(undefined4 *)(param_3 + 2);
    local_60 = local_68;
    local_58 = param_3;
    FUN_005c72f0(param_1,param_2,local_68,local_70 + -1);
  }
  FUN_00417740(local_50,&DAT_005bc4e0);
  return;
}

