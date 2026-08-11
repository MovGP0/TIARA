/* Ghidra address: 019ee8e0 */
/* Ghidra symbol: FUN_019ee8e0 */


void FUN_019ee8e0(longlong param_1,longlong param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong local_res10 [3];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  longlong local_30;
  longlong local_28;
  longlong local_20;
  
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar2 = 0;
  if (local_res10[0] != 0) {
    iVar2 = *(int *)(local_res10[0] + -4);
  }
  if (param_3 < iVar2) {
    bVar1 = true;
    FUN_0043ea00(&local_30,local_res10[0]);
    FUN_00414480(&local_20);
    while (local_30 != 0) {
      iVar2 = FUN_004170c0(&DAT_019eec9c,local_30,1);
      if (iVar2 < 1) {
        uVar3 = 0;
        if (local_30 != 0) {
          uVar3 = *(undefined4 *)(local_30 + -4);
        }
        FUN_00416dc0(&local_48,local_30,1,uVar3);
        FUN_0043ea00(&local_28,local_48);
        uVar3 = 0;
        if (local_30 != 0) {
          uVar3 = *(undefined4 *)(local_30 + -4);
        }
        FUN_00416e20(&local_30,1,uVar3);
      }
      else {
        uVar3 = FUN_004170c0(&DAT_019eec9c,local_30,1);
        FUN_00416dc0(local_40,local_30,1,uVar3);
        FUN_0043ea00(&local_28,local_40[0]);
        uVar3 = FUN_004170c0(&DAT_019eec9c,local_30,1);
        FUN_00416e20(&local_30,1,uVar3);
      }
      FUN_0043ea00(&local_50,local_30);
      FUN_00414b50(&local_30,local_50);
      iVar2 = 0;
      if (local_20 != 0) {
        iVar2 = *(int *)(local_20 + -4);
      }
      iVar4 = 0;
      if (local_28 != 0) {
        iVar4 = *(int *)(local_28 + -4);
      }
      if (param_3 < iVar2 + iVar4) {
        if (bVar1) {
          (**(code **)(**(longlong **)(param_1 + 0x20) + 200))
                    (*(longlong **)(param_1 + 0x20),local_20);
          bVar1 = false;
        }
        else {
          FUN_00416ba0(&local_60,&LAB_019eecac,local_20);
          (**(code **)(**(longlong **)(param_1 + 0x20) + 200))
                    (*(longlong **)(param_1 + 0x20),local_60);
        }
        FUN_0043ea00(&local_68,local_28);
        FUN_00416ba0(&local_20,local_68,&DAT_019eec9c);
      }
      else {
        FUN_0043ea00(&local_58,local_28);
        FUN_00416cd0(&local_20,3,local_20,local_58,&DAT_019eec9c);
      }
    }
    if (local_20 != 0) {
      if (bVar1) {
        (**(code **)(**(longlong **)(param_1 + 0x20) + 200))
                  (*(longlong **)(param_1 + 0x20),local_20);
      }
      else {
        FUN_00416ba0(&local_70,&LAB_019eecac,local_20);
        (**(code **)(**(longlong **)(param_1 + 0x20) + 200))
                  (*(longlong **)(param_1 + 0x20),local_70);
      }
    }
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x20) + 200))
              (*(longlong **)(param_1 + 0x20),local_res10[0]);
  }
  FUN_00414560(&local_70,7);
  FUN_00414560(&local_30,3);
  FUN_00414480(local_res10);
  return;
}

