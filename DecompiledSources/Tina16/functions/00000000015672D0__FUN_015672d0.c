/* Ghidra address: 015672d0 */
/* Ghidra symbol: FUN_015672d0 */


void FUN_015672d0(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_138 [32];
  wchar_t *local_118;
  undefined8 local_110;
  wchar_t *local_108;
  undefined8 local_f8;
  wchar_t *local_f0;
  undefined8 local_e8;
  undefined1 *local_e0;
  longlong local_d0;
  longlong *local_c8;
  int local_b8;
  char local_ab;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_20;
  
  local_e0 = auStack_138;
  local_f8 = 0;
  local_e8 = 0;
  local_f0 = (wchar_t *)0x0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  (**(code **)(*param_2 + 0xf8))(param_2);
  (**(code **)(*param_2 + 0x288))(param_2,&local_50);
  cVar1 = FUN_01d3f210(param_2);
  if (cVar1 != '\0') {
    local_20 = FUN_00e0fbe0(&DAT_00e0d100,1);
    FUN_00414ad0(local_20 + 0x838,*(undefined8 *)(param_1 + 0xa18));
    *(undefined8 *)(local_20 + 0x840) = *(undefined8 *)(param_1 + 0xa20);
    FUN_015f3db0(local_20,param_2,param_1);
    local_d0 = param_2[0x35];
    local_b8 = FUN_00e0e000(*(undefined8 *)(local_20 + 0x828),0);
    local_c8 = (longlong *)FUN_017ff620(param_2);
    if (local_c8 == (longlong *)0x0) {
      (**(code **)(*param_2 + 0x288))(param_2,&local_50);
    }
    else {
      (**(code **)(*local_c8 + 0x288))(local_c8,&local_50);
    }
    local_ab = FUN_01d3f230(local_c8);
    if ((local_ab == '\0') && ((local_b8 == 3 || (local_b8 == 4)))) {
      FUN_0041ddd0(&local_f0,PTR_PTR_02001a10);
      local_118 = local_f0;
      FUN_00416cd0(&local_e8,3,local_50,&DAT_01567798);
      uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,local_e8);
      FUN_004134c0(uVar2);
    }
    cVar1 = FUN_015fe700(*(undefined8 *)(param_1 + 0xa18),param_2);
    if (cVar1 != '\0') {
      FUN_015febc0(*(undefined8 *)(param_1 + 0xa18),param_2);
      cVar1 = FUN_01773f40(local_d0,0x800);
      if (cVar1 == '\0') {
        FUN_015fe840(&local_70,*(undefined8 *)(param_1 + 0xa18),param_2);
      }
      else {
        FUN_015fe5d0(&local_70,local_d0,0);
      }
      FUN_00415dd0(&local_f8,local_70,0);
      FUN_015ff620(*(undefined8 *)(param_1 + 0xa18),*(undefined8 *)(param_1 + 0xa20),param_2,
                   local_f8);
      FUN_00414b50(&local_58,*(undefined8 *)(*(longlong *)(local_20 + 0x828) + 8));
      local_118 = L"_";
      local_110 = *(undefined8 *)(local_20 + 0x850);
      local_108 = L".hex";
      FUN_00416cd0(&local_68,5,*(undefined8 *)(param_1 + 0x790),local_58);
      local_118 = L"flash_rom.hex";
      FUN_00416cd0(&local_60,3,*(undefined8 *)(param_1 + 0xa18),L"\\Temp\\");
      cVar1 = FUN_00440a20(local_60,1);
      if (cVar1 != '\0') {
        FUN_015f21c0(local_60,local_68);
        FUN_0155c910(param_1,local_68);
      }
    }
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0x938),local_20);
  }
  FUN_004144d0(&local_f8);
  FUN_00414560(&local_f0,2);
  FUN_00414560(&local_78,8);
  return;
}

