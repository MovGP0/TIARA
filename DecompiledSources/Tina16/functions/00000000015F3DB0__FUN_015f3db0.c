/* Ghidra address: 015f3db0 */
/* Ghidra symbol: FUN_015f3db0 */


void FUN_015f3db0(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_158 [40];
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined1 *local_100;
  undefined8 local_e0;
  undefined8 local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined1 local_b2 [2];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_94;
  int local_90;
  int local_88;
  undefined4 local_84;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  int local_28;
  
  local_100 = auStack_158;
  local_130 = 0;
  local_128 = 0;
  local_118 = 0;
  local_120 = 0;
  local_108 = 0;
  local_110 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_d8 = 0;
  local_e0 = 0;
  cVar1 = FUN_01d3f210(param_2);
  if (cVar1 != '\0') {
    local_d0 = param_2[0x35];
    local_c8 = local_d0;
    local_a8 = FUN_015f3320(*(undefined8 *)(param_1 + 0x838),param_2);
    *(undefined8 *)(param_1 + 0x828) = local_a8;
    FUN_00e0e8e0(local_a8,&local_88,local_b2);
    *(longlong **)(param_1 + 0x820) = param_2;
    local_84 = FUN_00e0e000(*(undefined8 *)(param_1 + 0x828),0);
    cVar1 = FUN_015f3730(local_84);
    if (cVar1 == '\0') {
      FUN_015f3400(*(undefined8 *)(param_1 + 0x838),*(undefined8 *)(param_1 + 0x840),param_1,param_2
                  );
    }
    else {
      cVar1 = FUN_0156b070(param_3,*(undefined8 *)(*(longlong *)(param_1 + 0x828) + 8),&local_b0);
      if (cVar1 == '\0') {
        FUN_015f3400(*(undefined8 *)(param_1 + 0x838),*(undefined8 *)(param_1 + 0x840),param_1,
                     param_2);
        FUN_004ae7e0(*(undefined8 *)(param_3 + 0x8e0),param_1);
      }
      else {
        FUN_00e0ff90(param_1,local_b0);
      }
    }
    uVar4 = _Get_UsedUnits(*(undefined8 *)(param_1 + 0x840));
    FUN_004167d0(&local_e0,uVar4);
    FUN_0156af20(param_3,local_e0);
    iVar2 = (**(code **)(*param_2 + 0x1c8))(param_2);
    local_90 = 0;
    local_28 = iVar2;
    if (-1 < iVar2 + -1) {
      do {
        local_94 = (**(code **)(*param_2 + 0x210))(param_2,local_90);
        FUN_01cfdb80(param_2,&local_40,local_90);
        if (local_88 == 1) {
          FUN_00415dd0(&local_110,local_40,0);
          FUN_015f0ae0(&local_108,local_110,local_94,0);
          FUN_00416880(&local_40,local_108);
          FUN_00e0fb30(param_1,&local_40);
        }
        else {
          cVar1 = FUN_00e0fb30(param_1,&local_40);
          if (cVar1 == '\0') {
            FUN_00415dd0(&local_120,local_40,0);
            FUN_015f0ae0(&local_118,local_120,local_94,0);
            FUN_00416880(&local_40,local_118);
          }
        }
        FUN_00e10580(param_1,local_40,local_94);
        if (local_88 != 0) {
          FUN_0043e130(&local_128,local_40);
          FUN_00414b50(&local_40,local_128);
          iVar3 = FUN_00416db0(local_40,&DAT_015f433c);
          if (((iVar3 == 0) || (iVar3 = FUN_00416db0(local_40,&DAT_015f4350), iVar3 == 0)) &&
             (cVar1 = FUN_01d3f210(param_2), cVar1 != '\0')) {
            *(int *)(local_d0 + 0x158) = local_90;
          }
          iVar3 = FUN_00416db0(local_40,&DAT_015f4364);
          if (((iVar3 == 0) || (iVar3 = FUN_00416db0(local_40,&DAT_015f4378), iVar3 == 0)) &&
             (cVar1 = FUN_01d3f210(param_2), cVar1 != '\0')) {
            *(int *)(local_d0 + 0x15c) = local_90;
          }
        }
        local_90 = local_90 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if (param_3 != 0) {
      FUN_017ff4a0(param_2,&local_130);
      FUN_00414ad0(param_1 + 0x850,local_130);
    }
  }
  FUN_00414560(&local_130,2);
  FUN_00414590(&local_120,4);
  FUN_00414560(&local_e0,2);
  FUN_00414560(&local_50,4);
  return;
}

