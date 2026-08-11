/* Ghidra address: 00f023e0 */
/* Ghidra symbol: FUN_00f023e0 */


longlong FUN_00f023e0(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  int iVar3;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_0084d420(local_res8,0,param_3);
  uVar2 = FUN_00f037a0(&PTR_FUN_00eff310,1,local_res8,&PTR_FUN_00efe9e0);
  *(undefined8 *)(local_res8 + 0x660) = uVar2;
  iVar3 = 5;
  do {
    FUN_00f03850(*(undefined8 *)(local_res8 + 0x660));
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

