/* Ghidra address: 00458760 */
/* Ghidra symbol: FUN_00458760 */


undefined1 FUN_00458760(longlong param_1,uint *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong local_res8;
  uint *local_res10;
  undefined1 auStack_98 [40];
  undefined1 *local_70;
  undefined4 local_64;
  char local_5d;
  uint local_5c;
  undefined8 local_58;
  undefined1 local_50 [8];
  undefined8 local_48;
  undefined8 local_40;
  int local_34;
  int local_30;
  undefined1 local_29;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_70 = auStack_98;
  local_48 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_00417580(local_50,&DAT_0043cdf0);
  local_29 = 0;
  local_58 = FUN_0045c0d0(local_50,local_res8,0xfde9);
  local_40 = FUN_0041e0c0(&local_58);
  uVar1 = FUN_00451730(local_40);
  local_30 = FUN_00458730(uVar1);
  if (local_30 == -1) {
    FUN_00414480(local_20);
    FUN_00416dc0(local_20,local_res8,1,2);
    iVar2 = FUN_00416db0(local_20[0],&DAT_004589c8);
    local_5d = iVar2 == 0;
    FUN_00414480(local_20);
    if (local_5d != '\0') {
      FUN_00414480(&local_28);
      local_64 = 0;
      if (local_res8 != 0) {
        local_64 = *(undefined4 *)(local_res8 + -4);
      }
      FUN_00416dc0(&local_28,local_res8,3,local_64);
      uVar3 = FUN_00418870(local_28,&local_34);
      *local_res10 = uVar3;
      FUN_00414480(&local_28);
      local_29 = local_34 == 0;
    }
  }
  else {
    lVar4 = (longlong)local_30;
    FUN_004167a0(&local_48,s_b_us_ascii_01dbf011 + (ulonglong)(ushort)(&DAT_01dbec24)[lVar4 * 2] + 3
                );
    iVar2 = FUN_004562b0(&local_res8,local_48);
    local_29 = iVar2 == 0;
    if ((bool)local_29) {
      local_5c = *(uint *)(&DAT_01dbec24 + lVar4 * 2);
      *local_res10 = local_5c >> 0x10;
    }
  }
  FUN_00417740(local_50,&DAT_0043cdf0);
  FUN_00414480(&local_48);
  FUN_00414560(&local_28,2);
  return local_29;
}

