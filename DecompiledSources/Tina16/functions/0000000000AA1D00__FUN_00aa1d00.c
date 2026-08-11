/* Ghidra address: 00aa1d00 */
/* Ghidra symbol: FUN_00aa1d00 */


longlong FUN_00aa1d00(longlong param_1,char param_2,undefined8 param_3,longlong param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  uint local_28;
  uint local_24;
  undefined8 local_20;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00a9cf70(local_res8,0,param_3,param_4);
  *(undefined1 *)(local_res8 + 0x560) = *(undefined1 *)(param_4 + 0x560);
  *(undefined1 *)(local_res8 + 0x578) = *(undefined1 *)(param_4 + 0x578);
  FUN_00414ad0(local_res8 + 0xa0,L"TableAndCaption.");
  local_24 = (uint)*(byte *)(local_res8 + 0x560);
  local_28 = (uint)(*(byte *)(local_res8 + 0x560) == 0);
  local_20 = FUN_00ac3910(*(undefined8 *)(local_res8 + 0xa8),local_28);
  uVar2 = FUN_004113f0(local_20,&PTR_FUN_00a865e0);
  *(undefined8 *)(local_res8 + 0x570) = uVar2;
  local_20 = FUN_00ac3910(*(undefined8 *)(local_res8 + 0xa8),local_24);
  uVar2 = FUN_004113f0(local_20,&PTR_FUN_00a8dc10);
  *(undefined8 *)(local_res8 + 0x568) = uVar2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

