/* Ghidra address: 0112b190 */
/* Ghidra symbol: FUN_0112b190 */


short FUN_0112b190(undefined8 param_1,longlong param_2)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  undefined2 local_2e;
  undefined2 local_2c;
  ushort local_2a;
  undefined8 local_28;
  short local_1a;
  
  local_b0 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_90 = 0;
  local_80 = 0;
  local_70 = 0;
  local_78 = 0;
  local_60 = 0;
  local_68 = 0;
  local_50 = 0;
  local_58 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_1a = 0;
  cVar2 = FUN_0044b3d0(param_1,&local_28,param_2);
  if (cVar2 != '\0') {
    FUN_00448ad0(local_28,&local_2a,&local_2c,&local_2e,&local_1a);
    if (local_1a == 0) {
      FUN_0043f750(&local_50,local_2a);
      FUN_00416780(&local_58,*(undefined2 *)(param_2 + 0xc));
      FUN_00416ba0(&local_38,local_50,local_58);
      iVar3 = FUN_004170c0(local_38,param_1,1);
      if ((iVar3 == 0) && (0xc < local_2a)) {
        local_2a = local_2a - 0xc;
        FUN_0043f750(&local_60,local_2a);
        FUN_00416780(&local_68,*(undefined2 *)(param_2 + 0xc));
        FUN_00416ba0(&local_38,local_60,local_68);
        iVar3 = FUN_004170c0(local_38,param_1,1);
      }
      if (iVar3 == 0) {
        local_1a = 0;
      }
      else {
        iVar4 = 0;
        if (local_38 != 0) {
          iVar4 = *(int *)(local_38 + -4);
        }
        FUN_005b8960(&local_40,param_1,iVar3 + iVar4 + -1,0x7fffffff);
        FUN_0043f750(&local_70,local_2c);
        FUN_00416780(&local_78,*(undefined2 *)(param_2 + 0xc));
        FUN_00416ba0(&local_38,local_70,local_78);
        iVar3 = FUN_004170c0(local_38,local_40,1);
        if (iVar3 == 0) {
          local_1a = 0;
        }
        else {
          iVar4 = 0;
          if (local_38 != 0) {
            iVar4 = *(int *)(local_38 + -4);
          }
          FUN_005b8960(&local_80,local_40,iVar3 + iVar4 + -1,0x7fffffff);
          FUN_00414b50(&local_40,local_80);
          FUN_00416780(&local_88,*(undefined2 *)(param_2 + 0xc));
          FUN_0043f750(&local_90,local_2e);
          FUN_00416ba0(&local_38,local_88,local_90);
          iVar3 = FUN_004170c0(local_38,local_40,1);
          if (iVar3 == 0) {
            iVar4 = 0;
            if (local_38 != 0) {
              iVar4 = *(int *)(local_38 + -4);
            }
            if (iVar4 == 2) {
              FUN_00416780(&local_98,*(undefined2 *)(param_2 + 0xc));
              FUN_0043f750(&local_a0,local_2e);
              FUN_00416cd0(&local_38,3,local_98,&LAB_0112b668,local_a0);
              iVar3 = FUN_004170c0(local_38,local_40,1);
            }
          }
          if (iVar3 == 0) {
            local_1a = 0;
          }
          else {
            iVar4 = 0;
            if (local_38 != 0) {
              iVar4 = *(int *)(local_38 + -4);
            }
            FUN_005b8960(&local_a8,local_40,iVar3 + iVar4 + 1,0x7fffffff);
            FUN_00414b50(&local_40,local_a8);
            FUN_00414480(&local_38);
            FUN_00414b50(&local_48,local_40);
            iVar4 = 0;
            iVar3 = 0;
            if (local_48 != 0) {
              iVar3 = *(int *)(local_48 + -4);
            }
            if (0 < iVar3) {
              do {
                uVar1 = *(ushort *)(local_48 + -2 + (longlong)(iVar4 + 1) * 2);
                if ((uVar1 < 0x30) || (0x39 < uVar1)) break;
                FUN_00416780(&local_b0,uVar1);
                FUN_00416ad0(&local_38,local_b0);
                iVar4 = iVar4 + 1;
              } while (iVar4 < iVar3);
            }
            if (local_38 != 0) {
              local_1a = FUN_0043fc00(local_38);
            }
          }
        }
      }
    }
  }
  FUN_00414560(&local_b0,0x10);
  return local_1a;
}

