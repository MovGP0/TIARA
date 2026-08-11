/* Ghidra address: 016fa6c0 */
/* Ghidra symbol: FUN_016fa6c0 */


void FUN_016fa6c0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_e8 [40];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined4 local_6c;
  longlong local_68;
  int local_5c;
  undefined8 local_58;
  undefined1 local_50 [32];
  longlong *local_30;
  undefined8 *local_28;
  undefined8 local_20 [2];
  
  local_80 = auStack_e8;
  local_b8 = 0;
  local_c0 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_88 = 0;
  local_90 = 0;
  local_58 = 0;
  local_20[0] = 0;
  FUN_004144d0(param_3);
  FUN_004144d0(param_4);
  local_5c = 0;
  FUN_004144d0(&local_58);
  while( true ) {
    iVar1 = (**(code **)(*param_2 + 0x28))(param_2);
    if (iVar1 + -1 <= local_5c) break;
    (**(code **)(*param_2 + 0x18))(param_2,&local_98,local_5c);
    iVar1 = FUN_004170c0(L"hash=",local_98,1);
    if (iVar1 != 0) break;
    FUN_00416880(&local_88,local_58);
    (**(code **)(*param_2 + 0x18))(param_2,&local_90,local_5c);
    FUN_00416ad0(&local_88,local_90);
    FUN_00415dd0(&local_58,local_88,0);
    local_5c = local_5c + 1;
  }
  (**(code **)(*param_2 + 0x18))(param_2,&local_a0,local_5c);
  iVar1 = FUN_004170c0(L"hash=",local_a0,1);
  if (iVar1 == 1) {
    local_20[0] = 0;
    (**(code **)(*param_2 + 0x18))(param_2,local_20,local_5c);
    (**(code **)(*param_2 + 0x18))(param_2,&local_a8,local_5c);
    local_68 = local_a8;
    local_6c = 0;
    if (local_a8 != 0) {
      local_6c = *(undefined4 *)(local_a8 + -4);
    }
    FUN_00416dc0(&local_b0,local_20[0],6,local_6c);
    FUN_00415dd0(param_3,local_b0,0);
    FUN_00414480(local_20);
  }
  local_28 = (undefined8 *)FUN_004ba7d0(&PTR_FUN_0047d288,1,local_58);
  local_30 = (longlong *)FUN_004d22d0(&PTR_FUN_00c88318,1,0);
  (**(code **)(*local_30 + 0xa8))(local_30);
  uVar2 = (**(code **)*local_28)(local_28);
  FUN_00b6bd50(local_30,local_28,uVar2);
  (**(code **)(*local_30 + 0xb0))(local_30,local_50);
  FUN_00410f20(local_30);
  FUN_00410f20(local_28);
  iVar1 = 0x10;
  local_78 = local_50;
  do {
    FUN_00416880(&local_b8,*param_4);
    FUN_0043fba0(&local_c0,*local_78,2);
    FUN_00416ad0(&local_b8,local_c0);
    FUN_00415dd0(param_4,local_b8,0);
    local_78 = local_78 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_00414560(&local_c0,8);
  FUN_004144d0(&local_58);
  return;
}

