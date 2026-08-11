/* Ghidra address: 0098d5a0 */
/* Ghidra symbol: FUN_0098d5a0 */


void FUN_0098d5a0(longlong param_1,undefined4 param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 local_58;
  undefined8 local_50 [2];
  longlong *local_40 [2];
  undefined8 local_30 [2];
  
  local_50[0] = 0;
  local_58 = 0;
  cVar2 = (**(code **)(*param_3 + 0x168))(param_3);
  if (cVar2 == '\v') {
    lVar1 = *(longlong *)(param_1 + 0x48);
    plVar3 = (longlong *)FUN_004113f0(param_3,&PTR_FUN_0090d970);
    uVar4 = (**(code **)(*plVar3 + 0x2b8))(plVar3);
    plVar3 = (longlong *)FUN_004113f0(param_3,&PTR_FUN_0090d970);
    (**(code **)(*plVar3 + 0x150))(plVar3,local_50);
    plVar3 = (longlong *)FUN_004113f0(param_3,&PTR_FUN_0090d970);
    (**(code **)(*plVar3 + 0x180))(plVar3,&local_58);
    local_30[0] = FUN_0098d420(param_1,uVar4,local_50[0],local_58);
    FUN_00599f70(lVar1 + 8,param_2,local_30);
  }
  else {
    local_40[0] = param_3;
    FUN_00599f70(*(longlong *)(param_1 + 0x48) + 8,param_2,local_40);
  }
  FUN_004145c0(&local_58,2);
  return;
}

