/* Ghidra address: 008fec20 */
/* Ghidra symbol: FUN_008fec20 */


byte FUN_008fec20(longlong *param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte local_51;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  longlong local_20 [2];
  
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  iVar2 = FUN_00417170(&DAT_008fefb0,param_2,1);
  FUN_00416430(local_30,param_2,1,iVar2 + -1);
  local_51 = (**(code **)(*param_1 + 0x30))(param_1,local_30[0],0 < iVar2);
  uVar3 = 0;
  if (param_2 != 0) {
    uVar3 = *(uint *)(param_2 + -4) >> 1;
  }
  FUN_00416430(local_20,param_2,iVar2 + 1,uVar3 - iVar2);
  iVar2 = FUN_00417170(&DAT_008fefb8,local_20[0],1);
  if (iVar2 < 1) {
    (**(code **)(*param_1 + 0x10))(param_1,0,0);
  }
  else {
    uVar3 = 0;
    if (local_20[0] != 0) {
      uVar3 = *(uint *)(local_20[0] + -4) >> 1;
    }
    FUN_00416430(&local_38,local_20[0],iVar2 + 1,uVar3 - iVar2);
    bVar1 = (**(code **)(*param_1 + 0x10))(param_1,local_38,1);
    local_51 = local_51 & bVar1;
    FUN_00416430(local_20,local_20[0],1,iVar2 + -1);
  }
  iVar2 = FUN_00417170(&DAT_008fefc0,local_20[0],1);
  if (iVar2 < 1) {
    (**(code **)(*param_1 + 0x20))(param_1,0,0);
  }
  else {
    uVar3 = 0;
    if (local_20[0] != 0) {
      uVar3 = *(uint *)(local_20[0] + -4) >> 1;
    }
    FUN_00416430(&local_40,local_20[0],iVar2 + 1,uVar3 - iVar2);
    bVar1 = (**(code **)(*param_1 + 0x20))(param_1,local_40,1);
    local_51 = local_51 & bVar1;
    FUN_00416430(local_20,local_20[0],1,iVar2 + -1);
  }
  FUN_00416430(&local_48,local_20[0],1,2);
  iVar2 = FUN_00416420(local_48,&DAT_008fefc8);
  if (iVar2 == 0) {
    uVar3 = 0;
    if (local_20[0] != 0) {
      uVar3 = *(uint *)(local_20[0] + -4) >> 1;
    }
    FUN_00416430(local_20,local_20[0],3,uVar3 - 2);
    iVar2 = FUN_00417170(&DAT_008fefd4,local_20[0],1);
    if (iVar2 < 1) {
      bVar1 = (**(code **)(*param_1 + 8))(param_1,local_20[0],1);
      local_51 = local_51 & bVar1;
      FUN_00414520(local_20);
    }
    else {
      FUN_00416430(&local_50,local_20[0],1,iVar2 + -1);
      bVar1 = (**(code **)(*param_1 + 8))(param_1,local_50,1);
      local_51 = local_51 & bVar1;
      uVar3 = 0;
      if (local_20[0] != 0) {
        uVar3 = *(uint *)(local_20[0] + -4) >> 1;
      }
      FUN_00416430(local_20,local_20[0],iVar2,(uVar3 - iVar2) + 1);
    }
  }
  else {
    (**(code **)(*param_1 + 8))(param_1,0,0);
  }
  bVar1 = (**(code **)(*param_1 + 0x18))(param_1,local_20[0]);
  if ((local_51 & bVar1) == 0) {
    (**(code **)(*param_1 + 0x28))(param_1,0);
  }
  FUN_004145c0(&local_50,5);
  FUN_00414520(local_20);
  return local_51 & bVar1;
}

