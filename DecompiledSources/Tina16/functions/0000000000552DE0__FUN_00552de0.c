/* Ghidra address: 00552de0 */
/* Ghidra symbol: FUN_00552de0 */


longlong FUN_00552de0(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     longlong *param_5)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_res8;
  undefined1 auStack_58 [32];
  longlong *local_38;
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_28 = 0;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  local_38 = param_5;
  FUN_00546070(local_res8,0,param_3,param_4);
  lVar2 = FUN_0053c6c0(*param_5 + 9);
  *param_5 = lVar2;
  uVar3 = FUN_00545f10(*(undefined8 *)(local_res8 + 0x18),&LAB_00551d28,local_res8,param_5);
  uVar3 = FUN_004113f0(uVar3,&LAB_00551d28);
  *(undefined8 *)(local_res8 + 0x38) = uVar3;
  FUN_00545c40(&local_28,param_5);
  FUN_0041b840(local_res8 + 0x28,local_28);
  FUN_0041b800(&local_28);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

