/* Ghidra address: 00b67f70 */
/* Ghidra symbol: FUN_00b67f70 */


void FUN_00b67f70(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong local_30;
  
  local_30 = 0;
  iVar1 = FUN_00b28de0();
  iVar7 = 0;
  if (-1 < iVar1 + -1) {
    do {
      FUN_00b2afd0(*(undefined8 *)(param_1 + 0x78),&local_30,iVar7);
      FUN_00b62ce0(param_1,0x1ae);
      uVar2 = 0;
      if (local_30 != 0) {
        uVar2 = *(undefined4 *)(local_30 + -4);
      }
      FUN_00b62ce0(param_1,uVar2);
      iVar3 = 0;
      if (local_30 != 0) {
        iVar3 = *(int *)(local_30 + -4);
      }
      if (0 < iVar3) {
        uVar5 = FUN_00414df0(&local_30);
        uVar2 = 0;
        if (local_30 != 0) {
          uVar2 = *(undefined4 *)(local_30 + -4);
        }
        FUN_00b62d20(param_1,uVar5,uVar2);
      }
      lVar6 = FUN_00b28dc0(*(undefined8 *)(param_1 + 0x78),iVar7);
      if (*(char *)(lVar6 + 0x20) == '\0') {
        FUN_00b28dc0(*(undefined8 *)(param_1 + 0x78),iVar7);
        iVar3 = FUN_00b28660();
        iVar8 = 0;
        if (-1 < iVar3 + -1) {
          do {
            FUN_00b2b3f0(*(undefined8 *)(param_1 + 0x78),&local_30,iVar7,iVar8);
            FUN_00b62ce0(param_1,0x23);
            uVar2 = 0;
            if (local_30 != 0) {
              uVar2 = *(undefined4 *)(local_30 + -4);
            }
            FUN_00b62ce0(param_1,uVar2);
            iVar4 = 0;
            if (local_30 != 0) {
              iVar4 = *(int *)(local_30 + -4);
            }
            if (0 < iVar4) {
              uVar5 = FUN_00414df0(&local_30);
              uVar2 = 0;
              if (local_30 != 0) {
                uVar2 = *(undefined4 *)(local_30 + -4);
              }
              FUN_00b62d20(param_1,uVar5,uVar2);
            }
            iVar8 = iVar8 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      iVar7 = iVar7 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00b2b7e0(*(undefined8 *)(param_1 + 0x78),&local_30);
  FUN_00b62ce0(param_1,0x17);
  uVar2 = 0;
  if (local_30 != 0) {
    uVar2 = *(undefined4 *)(local_30 + -4);
  }
  FUN_00b62ce0(param_1,uVar2);
  iVar1 = 0;
  if (local_30 != 0) {
    iVar1 = *(int *)(local_30 + -4);
  }
  if (0 < iVar1) {
    uVar5 = FUN_00414df0(&local_30);
    uVar2 = 0;
    if (local_30 != 0) {
      uVar2 = *(undefined4 *)(local_30 + -4);
    }
    FUN_00b62d20(param_1,uVar5,uVar2);
  }
  iVar1 = FUN_00b28660();
  iVar7 = 0;
  if (-1 < iVar1 + -1) {
    do {
      FUN_00b2b930(*(undefined8 *)(param_1 + 0x78),&local_30,iVar7);
      FUN_00b62ce0(param_1,0x18);
      uVar2 = 0;
      if (local_30 != 0) {
        uVar2 = *(undefined4 *)(local_30 + -4);
      }
      FUN_00b62ce0(param_1,uVar2);
      iVar3 = 0;
      if (local_30 != 0) {
        iVar3 = *(int *)(local_30 + -4);
      }
      if (0 < iVar3) {
        uVar5 = FUN_00414df0(&local_30);
        uVar2 = 0;
        if (local_30 != 0) {
          uVar2 = *(undefined4 *)(local_30 + -4);
        }
        FUN_00b62d20(param_1,uVar5,uVar2);
      }
      iVar7 = iVar7 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_004144d0(&local_30);
  return;
}

