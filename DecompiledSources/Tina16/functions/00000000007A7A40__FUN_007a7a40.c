/* Ghidra address: 007a7a40 */
/* Ghidra symbol: FUN_007a7a40 */


void FUN_007a7a40(longlong param_1,int param_2,undefined8 *param_3)

{
  char cVar1;
  int local_res10;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined1 *local_80;
  undefined1 *local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined8 *local_48;
  undefined1 local_40 [32];
  longlong *local_20;
  
  local_80 = auStack_b8;
  cVar1 = FUN_004113d0(param_3,&PTR_FUN_007c0700);
  if (cVar1 == '\0') {
    local_20 = (longlong *)(**(code **)*param_3)(param_3);
    local_res10 = param_2;
    while( true ) {
      cVar1 = (**(code **)(*local_20 + 8))(local_20);
      if (cVar1 == '\0') break;
      (**(code **)*local_20)(local_20,local_40);
      local_68 = local_40;
      FUN_0059a1a0(param_1 + 8,local_res10,local_68);
      local_res10 = local_res10 + 1;
    }
    if (local_20 != (longlong *)0x0) {
      (**(code **)(*local_20 + -0x20))(local_20,1);
    }
  }
  else {
    local_58 = param_3[1];
    local_60 = local_58;
    if (local_58 != 0) {
      local_60 = *(longlong *)(local_58 + -8);
    }
    local_98 = *(undefined4 *)(param_3 + 2);
    local_50 = local_58;
    local_48 = param_3;
    FUN_007a78e0(param_1,param_2,local_58,local_60 + -1);
  }
  return;
}

