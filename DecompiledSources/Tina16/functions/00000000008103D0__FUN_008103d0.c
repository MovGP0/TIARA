/* Ghidra address: 008103d0 */
/* Ghidra symbol: FUN_008103d0 */


void FUN_008103d0(longlong *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  int local_38;
  int local_34;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  if (*(char *)((longlong)param_1 + 0x72) == '\0') {
    *(undefined1 *)((longlong)param_1 + 0x72) = 1;
    FUN_00810810(param_1);
    uVar3 = FUN_0065b870(param_1[2]);
    uVar3 = thunk_FUN_03de17fb(uVar3);
    lVar4 = FUN_00652a60(&PTR_FUN_007f7008,1,uVar3);
    param_1[0xd] = lVar4;
    *(longlong **)(lVar4 + 0x490) = param_1;
    *(undefined1 *)(lVar4 + 0x498) = 1;
    FUN_008117e0(param_1,&local_28);
    if (*(char *)(param_1[2] + 0xb1) == '\x01') {
      cVar1 = FUN_00423b30(&local_28);
      if (cVar1 == '\0') {
        FUN_00423b50(&local_28,-local_28,0);
        cVar1 = (**(code **)(*param_1 + 8))(param_1);
        if (cVar1 != '\0') {
          cVar1 = (**(code **)(*param_1 + 0x10))(param_1);
          if (cVar1 == '\0') {
            FUN_00423b50(&local_28,1,0);
          }
          else {
            FUN_00423b50(&local_28,2,0);
          }
        }
      }
    }
    cVar1 = FUN_00810370(param_1);
    if (cVar1 == '\0') {
      uVar3 = FUN_0065b870(param_1[0xd]);
      thunk_FUN_041cc6e2(uVar3,0,*(int *)(param_1[2] + 0x90) + local_28,
                         *(int *)(param_1[2] + 0x94) + local_24,local_20 - local_28,
                         local_1c - local_24,8);
    }
    else {
      uVar3 = FUN_0065b870(param_1[2]);
      thunk_FUN_03e49910(uVar3,&local_38);
      uVar3 = FUN_0065b870(param_1[0xd]);
      thunk_FUN_041cc6e2(uVar3,0xffffffffffffffff,local_38 + local_28,local_34 + local_24,
                         local_20 - local_28,local_1c - local_24,8);
    }
    FUN_008117e0(param_1,local_58);
    cVar1 = FUN_00423b30(local_58);
    if (cVar1 == '\0') {
      uVar3 = FUN_0065b870(param_1[0xd]);
      thunk_FUN_03ab0e43(uVar3,5);
    }
    else {
      uVar3 = FUN_0065b870(param_1[0xd]);
      thunk_FUN_03ab0e43(uVar3,0);
    }
    uVar3 = FUN_0065b870(param_1[2]);
    uVar3 = thunk_FUN_03de17fb(uVar3);
    lVar4 = FUN_00652a60(&PTR_FUN_007f7008,1,uVar3);
    param_1[9] = lVar4;
    *(longlong **)(lVar4 + 0x490) = param_1;
    *(undefined1 *)(lVar4 + 0x498) = 0;
    FUN_00811e70(param_1,&local_28);
    if (*(char *)(param_1[2] + 0xb1) == '\x01') {
      FUN_008117e0(param_1,local_58);
      cVar1 = FUN_00423b30(local_58);
      if (cVar1 == '\0') {
        FUN_008117e0(param_1,local_48);
        uVar2 = FUN_004230a0(local_48);
        FUN_00423b50(&local_28,uVar2,0);
      }
    }
    cVar1 = FUN_00810370(param_1);
    if (cVar1 == '\0') {
      uVar3 = FUN_0065b870(param_1[9]);
      thunk_FUN_041cc6e2(uVar3,0,*(int *)(param_1[2] + 0x90) + local_28,
                         *(int *)(param_1[2] + 0x94) + local_24,local_20 - local_28,
                         local_1c - local_24,8);
    }
    else {
      uVar3 = FUN_0065b870(param_1[2]);
      thunk_FUN_03e49910(uVar3,&local_38);
      uVar3 = FUN_0065b870(param_1[9]);
      thunk_FUN_041cc6e2(uVar3,0xffffffffffffffff,local_38 + local_28,local_34 + local_24,
                         local_20 - local_28,local_1c - local_24,8);
    }
    FUN_00811e70(param_1,local_58);
    cVar1 = FUN_00423b30(local_58);
    if (cVar1 == '\0') {
      uVar3 = FUN_0065b870(param_1[9]);
      thunk_FUN_03ab0e43(uVar3,5);
    }
    else {
      uVar3 = FUN_0065b870(param_1[9]);
      thunk_FUN_03ab0e43(uVar3,0);
    }
    *(undefined1 *)((longlong)param_1 + 0x72) = 0;
  }
  return;
}

