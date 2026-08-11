/* Ghidra address: 00eccc30 */
/* Ghidra symbol: FUN_00eccc30 */


void FUN_00eccc30(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  longlong local_30;
  longlong local_28;
  longlong local_20 [2];
  
  local_60 = 0;
  local_58 = 0;
  local_48 = 0;
  local_50 = 0;
  local_40[0] = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x750) + 0x278))(*(longlong **)(param_1 + 0x750));
  (**(code **)(**(longlong **)(param_1 + 0x710) + 0x278))(*(longlong **)(param_1 + 0x710));
  iVar3 = -1;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x748) + 0x4a0);
  iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
  if (0 < iVar2) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x748) + 0x260))(*(longlong **)(param_1 + 0x748))
    ;
  }
  if (-1 < iVar3) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x748) + 0x4a0);
    (**(code **)(*plVar1 + 0x18))(plVar1,local_40,iVar3);
    FUN_00ea9ca0(local_20,local_40[0]);
    FUN_00414ad0(param_1 + 0x8b8,local_20[0]);
    FUN_0043e130(&local_50,local_20[0]);
    (**(code **)(**(longlong **)(param_1 + 0x888) + 0x10))
              (*(longlong **)(param_1 + 0x888),&local_48,*(undefined8 *)(param_1 + 0x8d0),local_50,0
              );
    FUN_0043ea00(&local_28,local_48);
    if (local_28 == 0) {
      FUN_00ecbca0(param_1);
      FUN_00414ad0(param_1 + 0x8c0,*(undefined8 *)(param_1 + 0x8c8));
    }
    else {
      FUN_00eaebb0(&local_58,*(undefined8 *)(param_1 + 0x8d0),*(undefined8 *)(param_1 + 0x8b8));
      FUN_00414ad0(param_1 + 0x8a8,local_58);
      if (*(longlong *)(param_1 + 0x8a8) != 0) {
        iVar2 = FUN_004170c0(&DAT_00ecd0ec,*(undefined8 *)(param_1 + 0x8a8),1);
        if (0 < iVar2) {
          iVar2 = FUN_004170c0(&DAT_00ecd0ec,*(undefined8 *)(param_1 + 0x8a8),1);
          uVar4 = 0;
          if (*(longlong *)(param_1 + 0x8a8) != 0) {
            uVar4 = *(undefined4 *)(*(longlong *)(param_1 + 0x8a8) + -4);
          }
          FUN_00416dc0(param_1 + 0x8a8,*(undefined8 *)(param_1 + 0x8a8),iVar2 + 2,uVar4);
        }
      }
      FUN_00414ad0(param_1 + 0x8b0,local_28);
      iVar2 = FUN_004170c0(&DAT_00ecd100,local_28,1);
      if (0 < iVar2) {
        do {
          iVar2 = FUN_004170c0(&LAB_00ecd110,local_28,1);
          FUN_00416dc0(local_20,local_28,1,iVar2 + -1);
          uVar4 = FUN_004170c0(&DAT_00ecd100,local_28,1);
          FUN_00416e20(&local_28,1,uVar4);
          do {
            FUN_00ea9ab0(&local_30,local_20);
            if (local_30 != 0) {
              FUN_00ea9ef0(&local_60,local_30);
              plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x750) + 0x4a0);
              (**(code **)(*plVar1 + 0x78))(plVar1,local_60);
              if (*(longlong *)(param_1 + 0x8a8) == 0) {
                plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x750) + 0x4a0);
                iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
                if (iVar2 == 1) {
                  FUN_00414ad0(param_1 + 0x8a8,local_30);
                }
              }
            }
          } while (local_20[0] != 0);
        } while (local_28 != 0);
      }
      FUN_00ea9ef0(&local_30,*(undefined8 *)(param_1 + 0x8e8));
      while( true ) {
        iVar2 = 0;
        if (local_30 != 0) {
          iVar2 = *(int *)(local_30 + -4);
        }
        if (iVar2 < 1) {
          bVar5 = false;
        }
        else {
          iVar2 = 0;
          if (local_30 != 0) {
            iVar2 = *(int *)(local_30 + -4);
          }
          bVar5 = *(short *)(local_30 + -2 + (longlong)iVar2 * 2) == 0x20;
        }
        if (!bVar5) break;
        uVar4 = 0;
        if (local_30 != 0) {
          uVar4 = *(undefined4 *)(local_30 + -4);
        }
        FUN_00416e20(&local_30,uVar4,1);
      }
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x750) + 0x4a0);
      iVar2 = (**(code **)(*plVar1 + 0xb0))(plVar1,local_30);
      if (iVar2 == -1) {
        (**(code **)(**(longlong **)(param_1 + 0x750) + 0x268))(*(longlong **)(param_1 + 0x750),0);
      }
      else {
        plVar1 = *(longlong **)(param_1 + 0x750);
        uVar4 = (**(code **)(*(longlong *)plVar1[0x94] + 0xb0))((longlong *)plVar1[0x94],local_30);
        (**(code **)(*plVar1 + 0x268))(plVar1,uVar4);
      }
      FUN_00ecc490(param_1);
    }
  }
  FUN_00414560(&local_60,5);
  FUN_00414560(&local_30,3);
  return;
}

