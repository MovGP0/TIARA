/* Ghidra address: 00ec1150 */
/* Ghidra symbol: FUN_00ec1150 */


void FUN_00ec1150(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  short *local_20 [2];
  
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_58 = 0;
  local_60 = 0;
  local_50[0] = 0;
  local_20[0] = (short *)0x0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0x278))(*(longlong **)(param_1 + 0x6c8));
  (**(code **)(**(longlong **)(param_1 + 0x7a8) + 0x278))(*(longlong **)(param_1 + 0x7a8));
  (**(code **)(**(longlong **)(param_1 + 0x790) + 0x278))(*(longlong **)(param_1 + 0x790));
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x260))(*(longlong **)(param_1 + 0x6c0));
  if (-1 < iVar2) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6c0) + 0x4a0);
    (**(code **)(*plVar1 + 0x18))(plVar1,local_50,iVar2);
    FUN_00ea9ca0(local_20,local_50[0]);
    FUN_00414ad0(param_1 + 0x870,local_20[0]);
    FUN_0043e130(&local_60,local_20[0]);
    (**(code **)(**(longlong **)(param_1 + 0x850) + 0x10))
              (*(longlong **)(param_1 + 0x850),&local_58,L"DigitalICs",local_60,0);
    FUN_0043ea00(&local_30,local_58);
    if (local_30 == 0) {
      FUN_00ec0380(param_1);
      FUN_00414ad0(param_1 + 0x878,*(undefined8 *)(param_1 + 0x880));
    }
    else {
      FUN_00eaebb0(&local_68,L"DigitalICs",*(undefined8 *)(param_1 + 0x870));
      FUN_00414ad0(param_1 + 0x860,local_68);
      if (*(longlong *)(param_1 + 0x860) != 0) {
        iVar2 = FUN_004170c0(&DAT_00ec1844,*(undefined8 *)(param_1 + 0x860),1);
        if (0 < iVar2) {
          iVar2 = FUN_004170c0(&DAT_00ec1844,*(undefined8 *)(param_1 + 0x860),1);
          uVar4 = 0;
          if (*(longlong *)(param_1 + 0x860) != 0) {
            uVar4 = *(undefined4 *)(*(longlong *)(param_1 + 0x860) + -4);
          }
          FUN_00416dc0(param_1 + 0x860,*(undefined8 *)(param_1 + 0x860),iVar2 + 2,uVar4);
        }
      }
      FUN_00414ad0(param_1 + 0x868,local_30);
      iVar2 = FUN_004170c0(&DAT_00ec1858,local_30,1);
      if (0 < iVar2) {
        do {
          iVar2 = FUN_004170c0(&DAT_00ec1868,local_30,1);
          FUN_00416dc0(local_20,local_30,1,iVar2 + -1);
          do {
            FUN_00ea9ab0(&local_38,local_20);
            FUN_00414b50(&local_40,&DAT_00ec1878);
            FUN_00414b50(local_20,local_30);
            FUN_00ea9ab0(&local_70,local_20);
            FUN_0043ea00(&local_78,local_20[0]);
            FUN_00414b50(local_20,local_78);
            if (*local_20[0] == 0x28) {
              FUN_00416e20(local_20,1,1);
            }
            iVar2 = FUN_004170c0(&LAB_00ec1888,local_20[0],1);
            if (0 < iVar2) {
              uVar3 = FUN_004170c0(&LAB_00ec1888,local_20[0],1);
              uVar4 = 0;
              if (local_20[0] != (short *)0x0) {
                uVar4 = *(undefined4 *)(local_20[0] + -2);
              }
              FUN_00416e20(local_20,uVar3,uVar4);
            }
            do {
              FUN_00ea9ab0(&local_28,local_20);
              FUN_00416cd0(&local_80,3,&DAT_00ec1878,local_28,&DAT_00ec1878);
              iVar2 = FUN_004170c0(local_80,local_40,1);
              if (iVar2 == 0) {
                FUN_00416cd0(&local_40,3,local_40,local_28,&DAT_00ec1878);
              }
            } while (local_20[0] != (short *)0x0);
            if (*(longlong *)(param_1 + 0x888) == 0) {
              FUN_00414ad0(param_1 + 0x888,local_40);
            }
            FUN_00414ad0(param_1 + 0x880,local_40);
            if (local_38 != 0) {
              FUN_00ea9ef0(&local_88,local_38);
              plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6c8) + 0x4a0);
              (**(code **)(*plVar1 + 0x78))(plVar1,local_88);
              if (*(longlong *)(param_1 + 0x860) == 0) {
                plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6c8) + 0x4a0);
                iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
                if (iVar2 == 1) {
                  FUN_00414ad0(param_1 + 0x860,local_38);
                }
              }
            }
          } while (local_20[0] != (short *)0x0);
          uVar4 = FUN_004170c0(&DAT_00ec1858,local_30,1);
          FUN_00416e20(&local_30,1,uVar4);
        } while (local_30 != 0);
      }
      FUN_00ea9ef0(&local_38,*(undefined8 *)(param_1 + 0x8a0));
      while( true ) {
        iVar2 = 0;
        if (local_38 != 0) {
          iVar2 = *(int *)(local_38 + -4);
        }
        if (iVar2 < 1) {
          bVar5 = false;
        }
        else {
          iVar2 = 0;
          if (local_38 != 0) {
            iVar2 = *(int *)(local_38 + -4);
          }
          bVar5 = *(short *)(local_38 + -2 + (longlong)iVar2 * 2) == 0x20;
        }
        if (!bVar5) break;
        uVar4 = 0;
        if (local_38 != 0) {
          uVar4 = *(undefined4 *)(local_38 + -4);
        }
        FUN_00416e20(&local_38,uVar4,1);
      }
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6c8) + 0x4a0);
      iVar2 = (**(code **)(*plVar1 + 0xb0))(plVar1,local_38);
      if (iVar2 == -1) {
        (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0x268))(*(longlong **)(param_1 + 0x6c8),0);
      }
      else {
        plVar1 = *(longlong **)(param_1 + 0x6c8);
        uVar4 = (**(code **)(*(longlong *)plVar1[0x94] + 0xb0))((longlong *)plVar1[0x94],local_38);
        (**(code **)(*plVar1 + 0x268))(plVar1,uVar4);
      }
      FUN_00ec0aa0(param_1);
    }
  }
  FUN_00414560(&local_88,8);
  FUN_00414560(&local_40,5);
  return;
}

