/* Ghidra address: 01ba9c60 */
/* Ghidra symbol: FUN_01ba9c60 */


longlong FUN_01ba9c60(longlong param_1,char param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 8) = uVar2;
  FUN_004b67b0(uVar2,1);
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x10) = uVar2;
  FUN_004b67b0(uVar2,1);
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x18) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x20) = uVar2;
  FUN_00416ba0(&local_28,*(undefined8 *)PTR_DAT_020049a0,L"\\MACROLIB");
  FUN_01baa480(local_res8,local_28,L"<TINADIR>\\MACROLIB");
  FUN_00416ba0(&local_30,*(undefined8 *)PTR_DAT_02001340,L"\\MACROLIB");
  FUN_01baa480(local_res8,local_30,L"<COMMONCATDIR>\\MACROLIB");
  FUN_00416ba0(&local_38,*(undefined8 *)PTR_DAT_02004438,L"\\MACROLIB");
  FUN_01baa480(local_res8,local_38,L"<CATALOGDIR>\\MACROLIB");
  FUN_004b67b0(*(undefined8 *)(local_res8 + 0x10),0);
  FUN_01baa930(local_res8);
  FUN_00414560(&local_38,3);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

