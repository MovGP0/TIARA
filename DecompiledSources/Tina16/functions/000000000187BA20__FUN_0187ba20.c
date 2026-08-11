/* Ghidra address: 0187ba20 */
/* Ghidra symbol: FUN_0187ba20 */


void FUN_0187ba20(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_a8 [32];
  int *local_88;
  int *local_80;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  int local_18;
  int local_14;
  undefined8 local_10;
  
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_40[0] = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_70 = param_3;
  local_68 = param_4;
  local_10 = (**(code **)(*param_2 + 0x118))(param_2);
  local_14 = 1;
  FUN_00414b50(&local_28,local_68);
  iVar1 = FUN_004170c0(&LAB_0187bcf4,local_28,1);
  FUN_00416dc0(&local_30,local_28,iVar1 + 1,0xff);
  iVar1 = FUN_004170c0(&LAB_0187bcf4,local_28,1);
  FUN_00416dc0(&local_28,local_28,1,iVar1 + -1);
LAB_0187bb8c:
  do {
    iVar1 = FUN_00414cb0(local_70);
    if (local_14 < iVar1) {
      uVar2 = FUN_00414cb0(local_28);
      FUN_00416dc0(local_40,local_70,local_14,uVar2);
      iVar1 = FUN_00416db0(local_40[0],local_28);
      if (iVar1 != 0) {
        local_14 = local_14 + 1;
        goto LAB_0187bb8c;
      }
    }
    FUN_004168e0(&local_50,local_70);
    FUN_004168e0(&local_58,local_28);
    FUN_004168e0(&local_60,local_30);
    local_88 = &local_14;
    local_80 = &local_18;
    FUN_0180d9f0(&local_48,local_50,local_58,local_60);
    FUN_004168b0(&local_20,local_48);
    if (local_14 != local_18) {
      FUN_0187b4f0(auStack_a8,local_20);
      local_14 = local_18;
      local_18 = 0;
    }
    if (local_14 == local_18) {
      FUN_004145c0(&local_60,4);
      FUN_00414480(local_40);
      FUN_00414560(&local_30,3);
      return;
    }
  } while( true );
}

