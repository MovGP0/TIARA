/* Ghidra address: 01cebd00 */
/* Ghidra symbol: FUN_01cebd00 */


longlong FUN_01cebd00(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_20 [2];
  
  local_30 = auStack_58;
  local_20[0] = 0;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_01d33100(local_res8,0);
  *(undefined8 *)(local_res8 + 8) = param_3;
  *(undefined4 *)(local_res8 + 0x18) = 0xffffffff;
  uVar4 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x10) = uVar4;
  uVar4 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x20) = uVar4;
  uVar4 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x28) = uVar4;
  uVar4 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x30) = uVar4;
  uVar4 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x38) = uVar4;
  *(undefined1 *)(local_res8 + 0x40) = 0;
  FUN_00414ad0(local_res8 + 0x48,L"Noname");
  FUN_00414b50(local_20,L"TINA.INI");
  cVar2 = FUN_004113d0(*(undefined8 *)(local_res8 + 8),&PTR_FUN_010f30d8);
  if (cVar2 != '\0') {
    FUN_00414b50(local_20,L"MEAS.INI");
  }
  uVar3 = FUN_00f06cb0(local_20[0],L"Curve width",2);
  *(undefined4 *)(local_res8 + 0x50) = uVar3;
  FUN_00414480(local_20);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

