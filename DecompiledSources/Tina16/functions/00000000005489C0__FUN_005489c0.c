/* Ghidra address: 005489c0 */
/* Ghidra symbol: FUN_005489c0 */


longlong FUN_005489c0(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     longlong *param_5)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong local_res8;
  undefined1 auStack_58 [32];
  longlong *local_38;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  local_38 = param_5;
  FUN_00546070(local_res8,0,param_3,param_4);
  puVar2 = (undefined8 *)FUN_00548d90(local_res8);
  uVar3 = FUN_00546050(param_3,&PTR_FUN_005475b0,local_res8,*puVar2);
  uVar3 = FUN_004113f0(uVar3,&PTR_FUN_005475b0);
  *(undefined8 *)(local_res8 + 0x38) = uVar3;
  *param_5 = *param_5 + 0xc;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

