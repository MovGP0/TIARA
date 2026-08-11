/* Ghidra address: 00cce750 */
/* Ghidra symbol: FUN_00cce750 */


void FUN_00cce750(longlong *param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_50 = 0;
  local_48 = 0;
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  (**(code **)(*param_1 + 0xe8))(param_1,param_5);
  if (param_1[0x23] != 0) {
    if (param_3 < 0x2002) {
      if (param_3 == 0x2001) {
        FUN_0041ddd0(local_20,PTR_PTR_02001d70);
        uVar1 = (**(code **)PTR_DAT_02001f78)(param_2);
        FUN_004167a0(&local_28,uVar1);
      }
      else if (param_3 == 0x10) {
        FUN_0041ddd0(local_20,PTR_PTR_020019e0);
        uVar1 = (**(code **)PTR_DAT_02001f78)(param_2);
        FUN_004167a0(&local_28,uVar1);
      }
      else if (param_3 == 0x20) {
        FUN_0041ddd0(local_20,PTR_PTR_02002db8);
        uVar1 = (**(code **)PTR_DAT_02001f78)(param_2);
        FUN_004167a0(&local_28,uVar1);
      }
      else if (param_3 == 0x1001) {
        FUN_0041ddd0(local_20,PTR_PTR_02001260);
        uVar1 = (**(code **)PTR_DAT_02001f78)(param_2);
        FUN_004167a0(&local_28,uVar1);
      }
      else if (param_3 == 0x1002) {
        if (param_4 < 0) {
          FUN_0041ddd0(local_20,PTR_PTR_020035c0);
        }
        else if (param_4 == 0) {
          FUN_0041ddd0(local_20,PTR_PTR_02005638);
        }
        else {
          FUN_0041ddd0(local_20,PTR_PTR_02003580);
        }
        uVar1 = (**(code **)PTR_DAT_02001f78)(param_2);
        FUN_004167a0(&local_28,uVar1);
      }
    }
    else if (param_3 == 0x2002) {
      if (param_4 < 0) {
        FUN_0041ddd0(local_20,PTR_PTR_02003fe0);
      }
      else if (param_4 == 0) {
        FUN_0041ddd0(local_20,PTR_PTR_02001568);
      }
      else {
        FUN_0041ddd0(local_20,PTR_PTR_02003f88);
      }
      uVar1 = (**(code **)PTR_DAT_02001f78)(param_2);
      FUN_004167a0(&local_28,uVar1);
    }
    else if (param_3 == 0x4000) {
      FUN_0041ddd0(&local_30,PTR_PTR_02002830);
      local_40 = (**(code **)PTR_DAT_02003a98)(param_4);
      local_38 = 6;
      FUN_00876cf0(local_20,local_30,&local_40,0);
      uVar1 = (**(code **)PTR_DAT_02003a98)(param_4);
      FUN_004167a0(&local_28,uVar1);
    }
    else if (param_3 == 0x4004) {
      FUN_0041ddd0(&local_48,PTR_PTR_020054c0);
      local_40 = (**(code **)PTR_DAT_02003a98)(param_4);
      local_38 = 6;
      FUN_00876cf0(local_20,local_48,&local_40,0);
      uVar1 = (**(code **)PTR_DAT_020059f8)(param_4);
      FUN_004167a0(&local_28,uVar1);
    }
    else if (param_3 == 0x4008) {
      FUN_0041ddd0(&local_50,PTR_PTR_02003a68);
      local_40 = (**(code **)PTR_DAT_02003a98)(param_4);
      local_38 = 6;
      FUN_00876cf0(local_20,local_50,&local_40,0);
      uVar1 = (**(code **)PTR_DAT_020059f8)(param_4);
      FUN_004167a0(&local_28,uVar1);
    }
    FUN_00cce3c0(param_1,param_2,param_3,param_4,local_20[0],local_28);
  }
  FUN_00414560(&local_50,2);
  FUN_00414560(&local_30,3);
  return;
}

