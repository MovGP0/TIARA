/* Ghidra address: 00cf9530 */
/* Ghidra symbol: FUN_00cf9530 */


longlong FUN_00cf9530(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong local_res8;
  undefined1 auStack_138 [40];
  undefined1 local_110 [136];
  code *local_88;
  undefined1 *local_20;
  
  local_20 = auStack_138;
  local_res8 = param_1;
  puVar1 = auStack_138;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  uVar3 = FUN_00416740(param_3);
  FUN_00cf8f40(DAT_01eb2478,local_110);
  uVar2 = (*local_88)(uVar3,local_res8 + 0x10);
  FUN_00cf8f80(*DAT_01eb2478,uVar2,L"QuerySecurityPackageInfoW");
  FUN_00cf93a0(local_res8,0,*(undefined8 *)(local_res8 + 0x10));
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

