/* Ghidra address: 005c4d40 */
/* Ghidra symbol: FUN_005c4d40 */


void FUN_005c4d40(longlong param_1,int param_2,undefined8 *param_3)

{
  char cVar1;
  int local_res10;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined1 *local_90;
  undefined1 *local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  undefined8 *local_60;
  undefined1 local_58 [56];
  longlong *local_20;
  
  local_90 = auStack_c8;
  FUN_00417580(local_58,&DAT_005bc868);
  cVar1 = FUN_004113d0(param_3,&PTR_FUN_005c9d08);
  if (cVar1 == '\0') {
    local_20 = (longlong *)(**(code **)*param_3)(param_3);
    local_res10 = param_2;
    while( true ) {
      cVar1 = (**(code **)(*local_20 + 8))(local_20);
      if (cVar1 == '\0') break;
      (**(code **)*local_20)(local_20,local_58);
      local_80 = local_58;
      FUN_0059a060(param_1 + 8,local_res10,local_80);
      local_res10 = local_res10 + 1;
    }
    if (local_20 != (longlong *)0x0) {
      (**(code **)(*local_20 + -0x20))(local_20,1);
    }
  }
  else {
    local_70 = param_3[1];
    local_78 = local_70;
    if (local_70 != 0) {
      local_78 = *(longlong *)(local_70 + -8);
    }
    local_a8 = *(undefined4 *)(param_3 + 2);
    local_68 = local_70;
    local_60 = param_3;
    FUN_005c4bb0(param_1,param_2,local_70,local_78 + -1);
  }
  FUN_00417740(local_58,&DAT_005bc868);
  return;
}

