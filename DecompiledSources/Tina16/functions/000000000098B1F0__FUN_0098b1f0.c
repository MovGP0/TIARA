/* Ghidra address: 0098b1f0 */
/* Ghidra symbol: FUN_0098b1f0 */


longlong FUN_0098b1f0(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong local_res8;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_30;
  undefined1 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_68;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00410e60(local_res8,0);
  iVar2 = FUN_00416420(param_4,&DAT_0098b344);
  if (iVar2 != 0) {
    local_28 = 0xf;
    local_48 = 0;
    local_30 = param_4;
    uVar3 = FUN_0044d530(&PTR_FUN_009013a8,1,L"XPath version \"%S\" not supproted.",&local_30);
    FUN_004134c0(uVar3);
  }
  FUN_00414b90(local_res8 + 0x10,param_3);
  *(undefined1 *)(local_res8 + 0x18) = 0x2f;
  *(undefined4 *)(local_res8 + 0x1c) = 0;
  *(undefined1 *)(local_res8 + 9) = 0;
  *(undefined4 *)(local_res8 + 0x20) = 0;
  *(undefined1 *)(local_res8 + 0x24) = 0x2f;
  FUN_00414520(local_res8 + 0x28);
  *(undefined1 *)(local_res8 + 8) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

