/* Ghidra address: 013a6200 */
/* Ghidra symbol: FUN_013a6200 */


void FUN_013a6200(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint uVar1;
  undefined8 local_res8;
  longlong local_res10;
  undefined4 local_res18;
  undefined4 local_res20;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  wchar_t *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [88];
  undefined1 *local_80;
  char local_71;
  undefined8 local_70;
  undefined8 local_68 [2];
  longlong local_58;
  undefined8 local_40;
  uint local_38;
  int local_34;
  ushort *local_30;
  longlong *local_20;
  
  local_80 = auStack_128;
  local_f0 = 0;
  local_f8 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_68[0] = 0;
  local_70 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_1);
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_71 = '\0';
  local_40 = *(undefined8 *)(local_res10 + 0x1a8);
  local_30 = (ushort *)FUN_013a5cd0(local_40,local_res18);
  FUN_01776810(local_40,local_30);
  local_58 = *(longlong *)(local_30 + 4);
  uVar1 = (uint)*local_30;
  local_34 = 0;
  if (-1 < (int)(uVar1 - 1)) {
    do {
      local_38 = (uint)*(ushort *)(local_58 + (longlong)local_34 * 2);
      if (local_38 != 0) {
        FUN_01aa0f40(local_d8,local_34,local_res20);
        FUN_004169a0(local_68,local_d8);
        FUN_01aa0f40(local_d8,local_38,param_5);
        FUN_004169a0(&local_70,local_d8);
        local_108 = local_70;
        FUN_00416cd0(&local_e0,3,local_68[0],&DAT_013a65dc);
        (**(code **)(*local_20 + 0x78))(local_20,local_e0);
        local_71 = '\x01';
      }
      local_34 = local_34 + 1;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  if (local_71 == '\0') {
    FUN_01aa0f40(local_d8,0,local_res20);
    FUN_004169a0(local_68,local_d8);
    FUN_01aa0f40(local_d8,0,param_5);
    FUN_004169a0(&local_70,local_d8);
    local_108 = local_70;
    FUN_00416cd0(&local_e8,3,local_68[0],&DAT_013a65dc);
    (**(code **)(*local_20 + 0x78))(local_20,local_e8);
  }
  FUN_015f8b00(&local_f8,local_res10);
  local_108 = local_f8;
  local_100 = L".dat";
  FUN_00416cd0(&local_f0,4,local_res8,L"rom_file_");
  (**(code **)(*local_20 + 0x100))(local_20,local_f0);
  FUN_00410f20(local_20);
  if (*(longlong *)(local_30 + 4) != 0) {
    FUN_004095f0(*(longlong *)(local_30 + 4));
  }
  FUN_004095f0(local_30);
  FUN_00414560(&local_f8,4);
  FUN_00414560(&local_70,2);
  FUN_00414480(&local_res8);
  return;
}

