/* Ghidra address: 01831b90 */
/* Ghidra symbol: FUN_01831b90 */


longlong FUN_01831b90(longlong param_1,char param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  char cVar3;
  longlong local_res8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  local_res8 = param_1;
  puVar2 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar2 = local_20;
  }
  local_20 = puVar2;
  FUN_00468530(&local_38,0,1);
  FUN_018318d0(local_res8,0,&local_38);
  *(longlong *)(local_res8 + 0xa0) = param_3;
  *(undefined1 *)(local_res8 + 0x48) = *(undefined1 *)(param_3 + 0x48);
  FUN_00414ad0(local_res8 + 0x50,*(undefined8 *)(param_3 + 0x50));
  lVar1 = *(longlong *)(local_res8 + 0xa0);
  cVar3 = FUN_004113d0(lVar1,&PTR_FUN_01846bd8);
  if (cVar3 == '\0') {
    *(longlong *)(local_res8 + 0xa8) = lVar1;
  }
  else {
    *(undefined8 *)(local_res8 + 0xa8) = *(undefined8 *)(lVar1 + 0x30);
  }
  FUN_00460ba0(&local_38);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

