/* Ghidra address: 011e6f50 */
/* Ghidra symbol: FUN_011e6f50 */


void FUN_011e6f50(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  int local_70;
  int local_6c;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 400;
  local_54 = 700;
  FUN_005fdab0(param_2[0x10],0xffffff);
  FUN_005fd4e0(param_2[0xf],0);
  (**(code **)(*param_2 + 0xa8))(param_2,&local_60);
  iVar3 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x6d0) + 0x4d8) + 0x28))();
  local_70 = 0;
  if (-1 < iVar3 + -1) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6d0) + 0x4d8);
      (**(code **)(*plVar1 + 0x18))(plVar1,&local_30,local_70);
      if (local_30 != 0) {
        iVar4 = FUN_004170c0(&DAT_011e78bc,local_30,1);
        iVar5 = FUN_004170c0(&DAT_011e78cc,local_30,1);
        FUN_00416dc0(&local_38,local_30,iVar4 + 1,(iVar5 - iVar4) + -1);
        FUN_00416dc0(&local_40,local_30,1,iVar4 + -1);
        iVar5 = FUN_004170c0(&DAT_011e78dc,local_38,1);
        FUN_00416dc0(&local_48,local_38,1,iVar5 + -1);
        iVar4 = 0;
        if (local_38 != 0) {
          iVar4 = *(int *)(local_38 + -4);
        }
        FUN_00416dc0(&local_38,local_38,iVar5 + 1,iVar4 - iVar5);
        iVar4 = FUN_004170c0(&DAT_011e78dc,local_38,1);
        if (iVar4 == 0) {
          iVar4 = 0;
          if (local_38 != 0) {
            iVar4 = *(int *)(local_38 + -4);
          }
          iVar4 = iVar4 + 1;
        }
        FUN_00416dc0(&local_50,local_38,1,iVar4 + -1);
        iVar5 = 0;
        if (local_38 != 0) {
          iVar5 = *(int *)(local_38 + -4);
        }
        FUN_00416dc0(&local_38,local_38,iVar4 + 1,iVar5 - iVar4);
        iVar4 = FUN_0043fc00(local_48);
        local_6c = iVar4 / 2;
        iVar4 = FUN_0043fc00(local_50,(longlong)iVar4 % 2 & 0xffffffff);
        uVar2 = (longlong)iVar4 / 2;
        iVar4 = FUN_00416db0(local_40,&DAT_011e78ec);
        iVar5 = (int)uVar2;
        if (iVar4 == 0) {
          iVar4 = iVar5 + -10;
          (**(code **)(*param_2 + 0x60))
                    (param_2,local_6c + -10,iVar4,local_6c + 10,iVar5 + 10,local_6c,iVar4,local_6c,
                     iVar4);
          (**(code **)(*param_2 + 0x120))(param_2,local_6c + -5,iVar5 + 5,&DAT_011e78ec);
        }
        iVar4 = FUN_00416db0(local_40,&DAT_011e7900);
        if (iVar4 == 0) {
          iVar4 = iVar5 + -10;
          (**(code **)(*param_2 + 0x60))
                    (param_2,local_6c + -10,iVar4,local_6c + 10,iVar5 + 10,local_6c,iVar4,local_6c,
                     iVar4);
          (**(code **)(*param_2 + 0x120))(param_2,local_6c + -5,iVar5 + 5,&DAT_011e7900);
        }
        iVar4 = FUN_00416db0(local_40,&DAT_011e7914);
        if (iVar4 == 0) {
          iVar4 = iVar5 + -10;
          (**(code **)(*param_2 + 0x60))
                    (param_2,local_6c + -10,iVar4,local_6c + 10,iVar5 + 10,local_6c,iVar4,local_6c,
                     iVar4);
          (**(code **)(*param_2 + 0x120))(param_2,local_6c + -5,iVar5 + 5,&DAT_011e7914);
        }
        iVar4 = FUN_00416db0(local_40,&DAT_011e7928);
        if (iVar4 == 0) {
          iVar4 = iVar5 + -10;
          (**(code **)(*param_2 + 0x60))
                    (param_2,local_6c + -10,iVar4,local_6c + 10,iVar5 + 10,local_6c,iVar4,local_6c,
                     iVar4);
          (**(code **)(*param_2 + 0x120))(param_2,local_6c + -5,iVar5 + 5,&DAT_011e7928);
        }
        iVar4 = FUN_00416db0(local_40,L"AND1");
        if (iVar4 == 0) {
          iVar4 = iVar5 + -10;
          (**(code **)(*param_2 + 0x60))
                    (param_2,local_6c + -10,iVar4,local_6c + 10,iVar5 + 10,local_6c,iVar4,local_6c,
                     iVar4);
          (**(code **)(*param_2 + 0x120))(param_2,local_6c + -5,iVar5 + 5,L"AND1");
        }
        iVar4 = FUN_00416db0(local_40,L"AND2");
        if (iVar4 == 0) {
          iVar4 = iVar5 + -10;
          (**(code **)(*param_2 + 0x60))
                    (param_2,local_6c + -10,iVar4,local_6c + 10,iVar5 + 10,local_6c,iVar4,local_6c,
                     iVar4);
          (**(code **)(*param_2 + 0x120))(param_2,local_6c + -5,iVar5 + 5,L"AND2");
        }
        iVar4 = FUN_00416db0(local_40,L"AND3");
        if (iVar4 == 0) {
          iVar4 = iVar5 + -10;
          (**(code **)(*param_2 + 0x60))
                    (param_2,local_6c + -10,iVar4,local_6c + 10,iVar5 + 10,local_6c,iVar4,local_6c,
                     iVar4);
          (**(code **)(*param_2 + 0x120))(param_2,local_6c + -5,iVar5 + 5,L"AND3");
        }
        iVar4 = FUN_00416db0(local_40,L"AND4");
        if (iVar4 == 0) {
          iVar4 = iVar5 + -10;
          (**(code **)(*param_2 + 0x60))
                    (param_2,local_6c + -10,iVar4,local_6c + 10,iVar5 + 10,local_6c,iVar4,local_6c,
                     iVar4);
          (**(code **)(*param_2 + 0x120))(param_2,local_6c + -5,iVar5 + 5,L"AND4");
        }
        iVar4 = FUN_00416db0(local_40,L"OUTPUT");
        if (iVar4 == 0) {
          local_60 = local_6c + -10;
          local_5c = iVar5 + -10;
          local_58 = local_6c + 10;
          local_54 = iVar5 + 10;
          FUN_005fdf50(param_2,&local_60);
          (**(code **)(*param_2 + 0x120))(param_2,local_6c + -5,iVar5 + 5,&DAT_011e79b8);
        }
        iVar4 = FUN_00416db0(local_40,L"WIRE");
        if (iVar4 == 0) {
          do {
            uVar6 = uVar2 & 0xffffffff;
            iVar4 = 0;
            if (local_38 != 0) {
              iVar4 = *(int *)(local_38 + -4);
            }
            if (iVar4 < 1) break;
            iVar5 = FUN_004170c0(&DAT_011e78dc,local_38,1);
            FUN_00416dc0(&local_48,local_38,1,iVar5 + -1);
            iVar4 = 0;
            if (local_38 != 0) {
              iVar4 = *(int *)(local_38 + -4);
            }
            FUN_00416dc0(&local_38,local_38,iVar5 + 1,iVar4 - iVar5);
            iVar4 = FUN_004170c0(&DAT_011e78dc,local_38,1);
            if (iVar4 == 0) {
              iVar4 = 0;
              if (local_38 != 0) {
                iVar4 = *(int *)(local_38 + -4);
              }
              iVar4 = iVar4 + 1;
            }
            FUN_00416dc0(&local_50,local_38,1,iVar4 + -1);
            iVar5 = 0;
            if (local_38 != 0) {
              iVar5 = *(int *)(local_38 + -4);
            }
            FUN_00416dc0(&local_38,local_38,iVar4 + 1,iVar5 - iVar4);
            iVar4 = FUN_0043fc00(local_48);
            iVar5 = FUN_0043fc00(local_50,(longlong)iVar4 % 2 & 0xffffffff);
            uVar2 = (longlong)iVar5 / 2;
            (**(code **)(*param_2 + 200))(param_2,local_6c,uVar6);
            (**(code **)(*param_2 + 0xc0))(param_2,iVar4 / 2,uVar2 & 0xffffffff);
            local_6c = iVar4 / 2;
          } while (local_38 != 0);
        }
      }
      local_70 = local_70 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  DAT_02107680 = 0;
  FUN_00414560(&local_50,5);
  return;
}

