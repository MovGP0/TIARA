/* Ghidra address: 0055a150 */
/* Ghidra symbol: FUN_0055a150 */


longlong FUN_0055a150(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     longlong *param_5)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong local_res8;
  undefined1 auStack_68 [32];
  longlong *local_48;
  undefined1 *local_30;
  code *local_28;
  longlong local_20;
  
  local_30 = auStack_68;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  local_20 = *param_5;
  *param_5 = *(longlong *)(local_20 + 8);
  local_48 = param_5;
  FUN_00546070(local_res8,0,param_3,param_4);
  uVar2 = FUN_00410e60(&DAT_00401a88,1);
  *(undefined8 *)(local_res8 + 0x30) = uVar2;
  lVar3 = *(longlong *)(local_20 + 0x28);
  *(longlong *)(local_res8 + 0x48) = lVar3;
  if (lVar3 == 0) {
    local_28 = (code *)FUN_00427c10(*(undefined8 *)(local_20 + 8),L"@GetPackageInfoTable");
    lVar3 = (*local_28)();
    *(longlong *)(local_res8 + 0x48) = lVar3 + 0x10;
  }
  *(undefined8 *)(local_res8 + 0x40) = *(undefined8 *)(local_20 + 8);
  uVar2 = FUN_0056b270(&PTR_FUN_0055bd30,1,2,0);
  *(undefined8 *)(local_res8 + 0x38) = uVar2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

