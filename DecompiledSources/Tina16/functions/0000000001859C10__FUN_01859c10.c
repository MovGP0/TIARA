/* Ghidra address: 01859c10 */
/* Ghidra symbol: FUN_01859c10 */


longlong * FUN_01859c10(longlong param_1,longlong *param_2,char param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *local_res10;
  undefined1 auStack_78 [32];
  char local_58;
  undefined4 local_50;
  undefined1 *local_40;
  char local_29;
  longlong *local_28;
  char local_19;
  
  local_40 = auStack_78;
  uVar4 = (**(code **)(param_1 + 0x68))(param_1);
  cVar1 = FUN_004113d0(param_2,uVar4);
  local_50 = param_4;
  if (cVar1 == '\0') {
    cVar1 = FUN_004113d0(param_2,&PTR_FUN_005f92e8);
    local_19 = cVar1 == '\0';
    local_res10 = param_2;
    if ((bool)local_19) {
      uVar4 = FUN_018669c0();
      local_res10 = (longlong *)FUN_01866d00(uVar4,param_2,param_3);
    }
    if ((param_3 == '\a') && (cVar1 = FUN_00609f90(local_res10), cVar1 == '\a')) {
      local_29 = '\x01';
    }
    else {
      local_29 = '\0';
    }
    uVar2 = (**(code **)(*local_res10 + 0x60))(local_res10);
    uVar3 = (**(code **)(*local_res10 + 0x48))(local_res10);
    local_58 = local_29;
    local_28 = (longlong *)(**(code **)(param_1 + 0x28))(param_1,uVar2,uVar3,param_3);
    if (local_29 == '\0') {
      (**(code **)(*local_28 + 0x10))(local_28,local_res10);
    }
    else {
      FUN_01859a30(param_1,local_28,local_res10);
    }
    if (local_19 != '\0') {
      FUN_00410f20(local_res10);
    }
    return local_28;
  }
  uVar2 = (**(code **)(*param_2 + 0x60))(param_2);
  uVar3 = (**(code **)(*param_2 + 0x48))(param_2);
  local_58 = param_3 == '\a';
  local_28 = (longlong *)(**(code **)(param_1 + 0x28))(param_1,uVar2,uVar3,param_3);
  (**(code **)(*local_28 + 0x10))(local_28,param_2);
  return local_28;
}

