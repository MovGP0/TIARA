/* Ghidra address: 01856850 */
/* Ghidra symbol: FUN_01856850 */


longlong * FUN_01856850(longlong param_1,longlong *param_2,undefined1 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined4 local_50;
  undefined1 *local_40;
  longlong local_38;
  undefined8 local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_40 = auStack_78;
  uVar2 = (**(code **)(*param_2 + 0x60))(param_2);
  uVar3 = (**(code **)(*param_2 + 0x48))(param_2);
  local_58 = 1;
  local_50 = param_4;
  local_20 = (longlong *)(**(code **)(param_1 + 0x28))(param_1,uVar2,uVar3,param_3);
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_005f86c8);
  if (cVar1 == '\0') {
    uVar4 = FUN_018669c0();
    uVar5 = FUN_00410ad0(param_2);
    local_38 = FUN_018671d0(uVar4,uVar5,0);
    if (local_38 != 0) {
      local_30 = (**(code **)(local_38 + 0x18))(local_38,param_2,param_3);
      local_28 = (longlong *)FUN_006056e0(&PTR_FUN_005f7f40,1,local_20,0);
      FUN_005fdf10(local_28);
      (**(code **)(*local_28 + 0x88))(local_28,0,0,local_30);
      FUN_005fe090(local_28);
      FUN_00410f20(local_28);
      FUN_00410f20(local_30);
    }
  }
  else {
    (**(code **)(*local_20 + 0x10))(local_20,param_2);
  }
  return local_20;
}

