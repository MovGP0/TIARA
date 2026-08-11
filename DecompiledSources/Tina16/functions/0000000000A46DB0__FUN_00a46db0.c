/* Ghidra address: 00a46db0 */
/* Ghidra symbol: FUN_00a46db0 */


longlong FUN_00a46db0(longlong param_1,char param_2,undefined8 param_3,longlong *param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined4 local_1c;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  uVar2 = (**(code **)(*param_4 + 0xe8))(param_4);
  FUN_00a47010(local_res8,uVar2);
  local_1c = *(undefined4 *)(*(longlong *)(local_res8 + 8) + 0x14);
  FUN_00a46f30(local_res8,local_1c);
  uVar2 = (**(code **)(*param_4 + 0xe8))(param_4);
  uVar3 = (**(code **)(*param_4 + 0x50))(param_4);
  FUN_00a47110(local_res8,param_3,uVar2,uVar3);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

