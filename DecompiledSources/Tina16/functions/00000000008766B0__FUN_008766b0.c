/* Ghidra address: 008766b0 */
/* Ghidra symbol: FUN_008766b0 */


void FUN_008766b0(longlong param_1,longlong *param_2,char param_3,longlong param_4,char param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_68 = 0;
  local_50 = 0;
  local_58 = 0;
  local_48 = 0;
  local_40 = 0;
  local_30 = 0;
  local_38 = 0;
  (**(code **)(*param_2 + 0x90))(param_2);
  iVar3 = 0;
  if (param_4 != 0) {
    iVar3 = *(int *)(param_4 + -4);
  }
  uVar4 = 1;
  if (param_3 == '\0') {
    for (iVar1 = FUN_004170c0(param_4,param_1,1); 0 < iVar1;
        iVar1 = FUN_00876570(param_4,param_1,iVar1 + iVar3)) {
      FUN_00416dc0(&local_38,param_1,uVar4 & 0xffffffff,(longlong)iVar1 - uVar4);
      if (local_38 != 0) {
        if (param_5 == '\0') {
          (**(code **)(*param_2 + 0x78))(param_2,local_38);
        }
        else {
          (**(code **)(*param_2 + 0x80))(param_2,local_38,uVar4);
        }
      }
      uVar4 = (ulonglong)(iVar1 + iVar3);
    }
    iVar3 = 0;
    if (param_1 != 0) {
      iVar3 = *(int *)(param_1 + -4);
    }
    if ((longlong)uVar4 <= (longlong)iVar3) {
      if (param_5 == '\0') {
        FUN_00416dc0(&local_78,param_1,uVar4 & 0xffffffff,0x7fffffff);
        (**(code **)(*param_2 + 0x78))(param_2,local_78);
      }
      else {
        FUN_00416dc0(&local_70,param_1,uVar4 & 0xffffffff,0x7fffffff);
        (**(code **)(*param_2 + 0x80))(param_2,local_70,uVar4);
      }
    }
  }
  else {
    FUN_0043ea00(&local_30,param_1);
    if (local_30 != 0) {
      for (lVar5 = 0; *(ushort *)(param_1 + lVar5 * 2) < 0x21; lVar5 = lVar5 + 1) {
      }
      for (iVar1 = FUN_004170c0(param_4,local_30,1); 0 < iVar1;
          iVar1 = FUN_00876570(param_4,local_30,iVar1 + iVar3)) {
        FUN_00416dc0(&local_38,local_30,uVar4 & 0xffffffff,(longlong)iVar1 - uVar4);
        iVar2 = FUN_00416d10(local_38,0);
        if (0 < iVar2) {
          if (param_5 == '\0') {
            FUN_0043ea00(&local_48,local_38);
            (**(code **)(*param_2 + 0x78))(param_2,local_48);
          }
          else {
            FUN_0043ea00(&local_40,local_38);
            (**(code **)(*param_2 + 0x80))(param_2,local_40,uVar4 + lVar5);
          }
        }
        uVar4 = (ulonglong)(iVar1 + iVar3);
      }
      iVar3 = 0;
      if (local_30 != 0) {
        iVar3 = *(int *)(local_30 + -4);
      }
      if ((longlong)uVar4 <= (longlong)iVar3) {
        if (param_5 == '\0') {
          FUN_00416dc0(&local_68,local_30,uVar4 & 0xffffffff,0x7fffffff);
          FUN_0043ea00(&local_60,local_68);
          (**(code **)(*param_2 + 0x78))(param_2,local_60);
        }
        else {
          FUN_00416dc0(&local_58,local_30,uVar4 & 0xffffffff,0x7fffffff);
          FUN_0043ea00(&local_50,local_58);
          (**(code **)(*param_2 + 0x80))(param_2,local_50,uVar4 + lVar5);
        }
      }
    }
  }
  FUN_00414560(&local_78,10);
  return;
}

