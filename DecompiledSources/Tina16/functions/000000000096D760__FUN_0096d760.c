/* Ghidra address: 0096d760 */
/* Ghidra symbol: FUN_0096d760 */


longlong FUN_0096d760(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_88 [32];
  wchar_t *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_88;
  local_28 = 0;
  local_38 = 0;
  local_30 = 0;
  local_res8 = param_1;
  puVar1 = auStack_88;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00410e60(local_res8,0);
  *(undefined8 *)(local_res8 + 0x10) = 0;
  *(undefined8 *)(local_res8 + 0x18) = 0;
  uVar2 = FUN_008f7f70(&PTR_FUN_008f67c0,1);
  *(undefined8 *)(local_res8 + 0x28) = uVar2;
  FUN_00416780(&local_28,DAT_01e32a40);
  FUN_004168b0(&local_30,param_3);
  FUN_00416ad0(&local_28,local_30);
  FUN_004168e0(&local_38,local_28);
  uVar2 = FUN_008f9510(&PTR_FUN_008f6d80,1,local_38);
  *(undefined8 *)(local_res8 + 0x18) = uVar2;
  local_68 = L"UTF-16LE";
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 1;
  uVar2 = FUN_008f4860(&PTR_FUN_008f3050,1,uVar2,0x1000);
  *(undefined8 *)(local_res8 + 0x10) = uVar2;
  *(undefined1 *)(local_res8 + 0x20) = 3;
  *(undefined1 *)(local_res8 + 8) = 0;
  FUN_00414520(&local_38);
  FUN_00414560(&local_30,2);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

