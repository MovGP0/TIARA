/* Ghidra address: 01812e60 */
/* Ghidra symbol: FUN_01812e60 */


void FUN_01812e60(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  wchar_t *local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 *local_30;
  undefined8 local_28;
  undefined8 *local_20;
  
  local_40 = auStack_88;
  local_48 = 0;
  FUN_004a0d20(&PTR_FUN_0063d930);
  local_30 = (undefined8 *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
  local_20 = (undefined8 *)FUN_004baeb0(&PTR_FUN_004812f0,1,local_30,0x1000);
  (**(code **)*local_20)(local_20,*(undefined8 *)(*(longlong *)(param_1 + 0xe0) + 0x18));
  (**(code **)(**(longlong **)(param_1 + 0xf0) + 8))(*(longlong **)(param_1 + 0xf0),local_20);
  FUN_00410f20(local_20);
  lVar3 = (**(code **)*local_30)(local_30);
  if (0 < lVar3) {
    if (*(longlong *)(param_1 + 0x100) != 0) {
      local_28 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
      local_20 = (undefined8 *)FUN_004baeb0(&PTR_FUN_004812f0,1,local_28,0x1000);
      (**(code **)*local_20)(local_20,*(undefined8 *)(*(longlong *)(param_1 + 0xe0) + 0x18));
      (**(code **)(**(longlong **)(param_1 + 0x100) + 8))(*(longlong **)(param_1 + 0x100),local_20);
      FUN_00410f20(local_20);
      iVar1 = FUN_0180cf80(local_30);
      iVar2 = FUN_0180cf80(local_28);
      if ((iVar1 == iVar2) && (*(char *)(*(longlong *)(param_1 + 0xe0) + 0x79) == '\0')) {
        FUN_018130e0(0,local_40);
        FUN_01813100(0,local_40);
        goto LAB_01813090;
      }
      FUN_00410f20(local_28);
    }
    FUN_0180d700(&local_48,local_30);
    FUN_00414b50(param_1 + 0xb8,local_48);
    local_68 = *(undefined8 *)(param_1 + 0xf8);
    local_60 = L"PropData=\"";
    local_58 = *(undefined8 *)(param_1 + 0xb8);
    local_50 = &LAB_01813178;
    FUN_00416cd0(*(undefined8 *)(param_1 + 0xe8),6,**(undefined8 **)(param_1 + 0xe8),&DAT_01813144);
  }
  FUN_00410f20(local_30);
LAB_01813090:
  FUN_00414480(&local_48);
  return;
}

