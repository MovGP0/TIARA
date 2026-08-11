/* Ghidra address: 009da3c0 */
/* Ghidra symbol: FUN_009da3c0 */


longlong FUN_009da3c0(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong local_res8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_68;
  local_28 = 0;
  local_30 = 0;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  plVar2 = (longlong *)FUN_004113f0(param_3,&PTR_FUN_0090d970);
  uVar3 = (**(code **)(*plVar2 + 0x2b8))(plVar2);
  plVar2 = (longlong *)FUN_004113f0(param_3,&PTR_FUN_0090d970);
  (**(code **)(*plVar2 + 0x150))(plVar2,&local_28);
  plVar2 = (longlong *)FUN_004113f0(param_3,&PTR_FUN_0090d970);
  (**(code **)(*plVar2 + 0x180))(plVar2,&local_30);
  local_48 = local_28;
  local_40 = local_30;
  uVar3 = FUN_00953f10(&PTR_FUN_0090d970,1,0,uVar3);
  *(undefined8 *)(local_res8 + 0x68) = uVar3;
  FUN_009d4b10(local_res8,0,uVar3,param_4);
  FUN_004145c0(&local_30,2);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

