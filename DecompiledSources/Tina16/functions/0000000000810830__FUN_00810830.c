/* Ghidra address: 00810830 */
/* Ghidra symbol: FUN_00810830 */


void FUN_00810830(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 local_68 [16];
  longlong *local_58;
  longlong *local_50;
  undefined1 local_48 [16];
  int local_38;
  int local_34;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  if (param_1[0xd] == 0) {
LAB_00810854:
    if (param_1[9] != 0) {
      cVar2 = FUN_0065be20(param_1[9]);
      if (cVar2 == '\0') goto LAB_00810869;
    }
    if (param_1[0xd] != 0) {
      cVar2 = FUN_0065be20(param_1[0xd]);
      if (cVar2 != '\0') {
        FUN_008117e0(param_1,&local_28);
        if (*(char *)(param_1[2] + 0xb1) == '\x01') {
          cVar2 = FUN_00423b30(&local_28);
          if (cVar2 == '\0') {
            FUN_00423b50(&local_28,-local_28,0);
            cVar2 = (**(code **)(*param_1 + 8))(param_1);
            if (cVar2 != '\0') {
              cVar2 = (**(code **)(*param_1 + 0x10))(param_1);
              if (cVar2 == '\0') {
                FUN_00423b50(&local_28,1,0);
              }
              else {
                FUN_00423b50(&local_28,2,0);
              }
            }
          }
        }
        cVar2 = FUN_00423b30(&local_28);
        if (cVar2 == '\0') {
          uVar4 = FUN_0065b870(param_1[0xd]);
          thunk_FUN_03ab0e43(uVar4,5);
          cVar2 = FUN_00810370(param_1);
          if (cVar2 == '\0') {
            uVar4 = FUN_0065b870(param_1[0xd]);
            thunk_FUN_041cc6e2(uVar4,0,*(int *)(param_1[2] + 0x90) + local_28,
                               *(int *)(param_1[2] + 0x94) + local_24,local_20 - local_28,
                               local_1c - local_24,0x40);
          }
          else {
            uVar4 = FUN_0065b870(param_1[2]);
            thunk_FUN_03e49910(uVar4,&local_38);
            uVar4 = FUN_0065b870(param_1[0xd]);
            thunk_FUN_041cc6e2(uVar4,0xffffffffffffffff,local_38 + local_28,local_34 + local_24,
                               local_20 - local_28,local_1c - local_24,0x40);
          }
        }
        else {
          uVar4 = FUN_0065b870(param_1[0xd]);
          thunk_FUN_03ab0e43(uVar4,0);
        }
      }
    }
    if (param_1[9] != 0) {
      cVar2 = FUN_0065be20(param_1[9]);
      if (cVar2 != '\0') {
        FUN_00811e70(param_1,&local_28);
        if (*(char *)(param_1[2] + 0xb1) == '\x01') {
          FUN_008117e0(param_1,local_68);
          cVar2 = FUN_00423b30(local_68);
          if (cVar2 == '\0') {
            FUN_008117e0(param_1,local_48);
            uVar3 = FUN_004230a0(local_48);
            FUN_00423b50(&local_28,uVar3,0);
          }
        }
        cVar2 = FUN_00423b30(&local_28);
        if (cVar2 == '\0') {
          uVar4 = FUN_0065b870(param_1[9]);
          thunk_FUN_03ab0e43(uVar4,5);
          cVar2 = FUN_00810370(param_1);
          if (cVar2 == '\0') {
            uVar4 = FUN_0065b870(param_1[9]);
            thunk_FUN_041cc6e2(uVar4,0,*(int *)(param_1[2] + 0x90) + local_28,
                               *(int *)(param_1[2] + 0x94) + local_24,local_20 - local_28,
                               local_1c - local_24,0x40);
          }
          else {
            uVar4 = FUN_0065b870(param_1[2]);
            thunk_FUN_03e49910(uVar4,&local_38);
            uVar4 = FUN_0065b870(param_1[9]);
            thunk_FUN_041cc6e2(uVar4,0xffffffffffffffff,local_38 + local_28,local_34 + local_24,
                               local_20 - local_28,local_1c - local_24,0x40);
          }
        }
        else {
          uVar4 = FUN_0065b870(param_1[9]);
          thunk_FUN_03ab0e43(uVar4,0);
        }
      }
    }
  }
  else {
    cVar2 = FUN_0065be20(param_1[0xd]);
    if (cVar2 != '\0') goto LAB_00810854;
LAB_00810869:
    if (param_1[0xd] != 0) {
      local_50 = param_1 + 0xd;
      lVar1 = *local_50;
      *local_50 = 0;
      FUN_00410f20(lVar1);
    }
    if (param_1[9] != 0) {
      local_58 = param_1 + 9;
      lVar1 = *local_58;
      *local_58 = 0;
      FUN_00410f20(lVar1);
    }
    FUN_008103d0(param_1);
  }
  return;
}

