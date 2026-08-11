/* Ghidra address: 0195c1f0 */
/* Ghidra symbol: FUN_0195c1f0 */


void FUN_0195c1f0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_20;
  int local_1c [3];
  
  local_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  local_30 = 0;
  local_38 = 0;
  local_28 = 0;
  local_1c[0] = 1;
LAB_0195c271:
  do {
    iVar1 = FUN_00414cb0(*param_2);
    if (local_1c[0] < iVar1) {
      iVar1 = thunk_FUN_0412de25(*(undefined1 *)(*param_2 + -2 + (longlong)local_1c[0] * 2));
      if (iVar1 != 0) {
        local_1c[0] = local_1c[0] + 2;
        goto LAB_0195c271;
      }
      if (*(short *)(*param_2 + -2 + (longlong)local_1c[0] * 2) != 0x5b) {
        local_1c[0] = local_1c[0] + 1;
        goto LAB_0195c271;
      }
    }
    FUN_004168e0(&local_38,*param_2);
    FUN_0180d9f0(&local_30,local_38,&DAT_0195c3d0,&LAB_0195c3d8,local_1c,&local_20);
    FUN_004168b0(&local_28,local_30);
    if (local_1c[0] != local_20) {
      FUN_00416e20(param_2,local_1c[0],(local_20 - local_1c[0]) + 1);
      uVar2 = (**(code **)(*param_1 + 0x118))(param_1);
      FUN_01970cf0(uVar2,&local_58,local_28,0);
      FUN_0046c3f0(&local_40,&local_58);
      FUN_00414b50(&local_28,local_40);
      FUN_00416ea0(local_28,param_2,local_1c[0]);
      iVar1 = FUN_00414cb0(local_28);
      local_1c[0] = local_1c[0] + iVar1;
      local_20 = 0;
    }
    if (local_1c[0] == local_20) {
      FUN_00460ba0(&local_58);
      FUN_00414480(&local_40);
      FUN_004145c0(&local_38,2);
      FUN_00414480(&local_28);
      return;
    }
  } while( true );
}

