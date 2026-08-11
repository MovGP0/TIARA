/* Ghidra address: 015f3750 */
/* Ghidra symbol: FUN_015f3750 */


longlong FUN_015f3750(longlong param_1,longlong *param_2,char param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_168 [40];
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined1 *local_110;
  undefined8 local_e8;
  longlong local_e0;
  longlong local_d8;
  undefined1 local_c2 [2];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_a4;
  int local_a0;
  int local_98;
  undefined4 local_94;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  int local_38;
  longlong local_30;
  longlong local_28;
  
  local_110 = auStack_168;
  local_140 = 0;
  local_138 = 0;
  local_128 = 0;
  local_130 = 0;
  local_118 = 0;
  local_120 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_e8 = 0;
  local_30 = 0;
  cVar1 = FUN_01d3f210(param_2);
  if (cVar1 != '\0') {
    local_e0 = param_2[0x35];
    local_d8 = local_e0;
    if (param_1 == 0) {
      FUN_015fca00(&local_e8,0,0);
    }
    else {
      FUN_00414b50(&local_e8,*(undefined8 *)(param_1 + 0xa18));
    }
    local_b8 = FUN_015f3320(local_e8,param_2);
    local_28 = FUN_00e0fbe0(&DAT_00e0d100,1);
    *(undefined8 *)(local_28 + 0x828) = local_b8;
    FUN_00e0e8e0(local_b8,&local_98,local_c2);
    *(longlong **)(local_28 + 0x820) = param_2;
    if (param_3 != '\0') {
      if (*(char *)(local_28 + 0x848) == '\0') {
        local_94 = FUN_00e0e000(*(undefined8 *)(local_28 + 0x828),0);
        cVar1 = FUN_015f3730(local_94);
        if (cVar1 == '\0') {
          FUN_015f3400(*(undefined8 *)(param_1 + 0xa18),*(undefined8 *)(param_1 + 0xa20),local_28,
                       param_2);
        }
        else {
          cVar1 = FUN_0156b070(param_1,*(undefined8 *)(*(longlong *)(local_28 + 0x828) + 8),
                               &local_c0);
          if (cVar1 == '\0') {
            FUN_015f3400(*(undefined8 *)(param_1 + 0xa18),*(undefined8 *)(param_1 + 0xa20),local_28,
                         param_2);
            FUN_004ae7e0(*(undefined8 *)(param_1 + 0x8e0),local_28);
          }
          else {
            FUN_00e0ff90(local_28,local_c0);
          }
        }
      }
      iVar2 = (**(code **)(*param_2 + 0x1c8))(param_2);
      local_a0 = 0;
      local_38 = iVar2;
      if (-1 < iVar2 + -1) {
        do {
          local_a4 = (**(code **)(*param_2 + 0x210))(param_2,local_a0);
          FUN_01cfdb80(param_2,&local_50,local_a0);
          if (local_98 == 1) {
            FUN_00415dd0(&local_120,local_50,0);
            FUN_015f0ae0(&local_118,local_120,local_a4,0);
            FUN_00416880(&local_50,local_118);
            FUN_00e0fb30(local_28,&local_50);
          }
          else {
            cVar1 = FUN_00e0fb30(local_28,&local_50);
            if (cVar1 == '\0') {
              FUN_00415dd0(&local_130,local_50,0);
              FUN_015f0ae0(&local_128,local_130,local_a4,0);
              FUN_00416880(&local_50,local_128);
            }
          }
          FUN_00e10580(local_28,local_50,local_a4);
          if (local_98 != 0) {
            FUN_0043e130(&local_138,local_50);
            FUN_00414b50(&local_50,local_138);
            iVar3 = FUN_00416db0(local_50,&DAT_015f3d68);
            if (((iVar3 == 0) || (iVar3 = FUN_00416db0(local_50,&DAT_015f3d7c), iVar3 == 0)) &&
               (cVar1 = FUN_01d3f210(param_2), cVar1 != '\0')) {
              *(int *)(local_e0 + 0x158) = local_a0;
            }
            iVar3 = FUN_00416db0(local_50,&DAT_015f3d90);
            if (((iVar3 == 0) || (iVar3 = FUN_00416db0(local_50,&LAB_015f3da4), iVar3 == 0)) &&
               (cVar1 = FUN_01d3f210(param_2), cVar1 != '\0')) {
              *(int *)(local_e0 + 0x15c) = local_a0;
            }
          }
          local_a0 = local_a0 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    if (param_1 != 0) {
      FUN_017ff4a0(param_2,&local_140);
      FUN_00414ad0(local_28 + 0x850,local_140);
    }
    local_30 = local_28;
  }
  FUN_00414560(&local_140,2);
  FUN_00414590(&local_130,4);
  FUN_00414480(&local_e8);
  FUN_00414560(&local_60,4);
  return local_30;
}

