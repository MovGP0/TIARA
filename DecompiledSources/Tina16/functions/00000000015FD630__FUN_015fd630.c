/* Ghidra address: 015fd630 */
/* Ghidra symbol: FUN_015fd630 */


undefined8 FUN_015fd630(undefined8 param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined8 local_cc0;
  undefined8 local_cb8;
  undefined8 local_cb0;
  undefined8 local_ca8;
  undefined8 local_ca0;
  undefined8 local_c98;
  undefined8 local_c90;
  undefined8 local_c88;
  undefined8 local_c80;
  undefined8 local_c78;
  undefined8 local_c70;
  undefined1 local_c66 [1026];
  undefined1 local_864 [1026];
  undefined1 local_462 [1026];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  char *local_40;
  longlong local_38;
  int local_2c;
  
  local_cc0 = 0;
  local_cb8 = 0;
  local_cb0 = 0;
  local_ca8 = 0;
  local_ca0 = 0;
  local_c98 = 0;
  local_c88 = 0;
  local_c90 = 0;
  local_c80 = 0;
  local_c78 = 0;
  local_c70 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  plVar1 = (longlong *)param_4[0xa5];
  FUN_00414480(&local_48);
  FUN_00414ad0(param_1,local_48);
  if (plVar1 == (longlong *)0x0) {
    sVar3 = FUN_01d03160(param_4);
    plVar5 = param_4;
  }
  else {
    sVar3 = FUN_01d03160(plVar1);
    plVar5 = plVar1;
  }
  if ((char)plVar5[0xac] == '\0') {
    if (sVar3 == 0x2900) {
      uVar4 = (**(code **)(*param_4 + 0x210))(param_4,0);
      FUN_015755e0(param_3,uVar4,&local_38);
      FUN_01575200(local_38,&local_58);
      FUN_00414b50(&local_50,*(undefined8 *)(local_38 + 0x40));
      (**(code **)(*plVar1 + 0x2d0))(plVar1,0,&local_40);
      cVar2 = *local_40;
      FUN_00442620(local_462,local_58);
      FUN_00442620(local_c66,local_50);
      if (param_2 == 0) {
        FUN_0043f750(&local_c70,cVar2 != '\x01');
        FUN_00416cd0(&local_48,3,local_58,&DAT_015fe1a0,local_c70);
      }
      else {
        _AddSignalTransAction(param_2,local_462,cVar2 != '\x01',local_c66);
      }
    }
    else if ((sVar3 == 0x34) || (sVar3 == 0x3b)) {
      (**(code **)(*param_4 + 0x2d0))(param_4,0,&local_40);
      cVar2 = *local_40;
      FUN_00414b50(&local_58,&DAT_015fe1b0);
      FUN_017ff4a0(param_4,&local_c78);
      FUN_00416ba0(&local_60,L"eTr0_",local_c78);
      FUN_00442620(local_462,local_58);
      FUN_00442620(local_864,local_60);
      if (param_2 == 0) {
        FUN_0043f750(&local_c80,cVar2 == '\x01');
        FUN_00416cd0(&local_48,3,local_60,&DAT_015fe1a0,local_c80);
      }
      else {
        _AddSignalIntTransAction_(param_2,local_462,local_864,cVar2 == '\x01');
      }
    }
    else {
      cVar2 = FUN_01d3f310(sVar3,&local_2c);
      if (cVar2 == '\0') {
        if (((sVar3 == 3000) || (sVar3 == 0x88)) || (sVar3 == 0x89)) {
          if (plVar1 == (longlong *)0x0) {
            (**(code **)(*param_4 + 0x2d0))(param_4,0,&local_40);
          }
          else {
            (**(code **)(*plVar1 + 0x2d0))(plVar1,0,&local_40);
          }
          cVar2 = *local_40;
          uVar8 = (uint)(sVar3 == 3000);
          iVar7 = (**(code **)(*param_4 + 0x1c8))(param_4);
          FUN_00414480(&local_48);
          if ((int)uVar8 <= iVar7 + -1) {
            iVar6 = ((iVar7 + -1) - uVar8) + 1;
            do {
              uVar4 = (**(code **)(*param_4 + 0x210))(param_4,uVar8);
              FUN_015755e0(param_3,uVar4,&local_38);
              FUN_01575200(local_38,&local_58);
              FUN_00414b50(&local_50,*(undefined8 *)(local_38 + 0x40));
              if (sVar3 == 0x89) {
                uVar4 = FUN_015f52e0(cVar2,uVar8);
              }
              else {
                uVar4 = FUN_015f51b0(cVar2,uVar8,sVar3);
              }
              FUN_00442620(local_462,local_58);
              FUN_00442620(local_c66,local_50);
              if (param_2 == 0) {
                FUN_0043f750(&local_ca0,uVar4);
                FUN_00416cd0(&local_48,4,local_48,local_58,&DAT_015fe1a0,local_ca0);
                if ((int)uVar8 < iVar7 + -1) {
                  FUN_00416ad0(&local_48,&DAT_015fe200);
                }
              }
              else {
                _AddSignalTransAction(param_2,local_462,uVar4,local_c66);
              }
              uVar8 = uVar8 + 1;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
        }
        else if (sVar3 == 0x8c) {
          if (plVar1 == (longlong *)0x0) {
            (**(code **)(*param_4 + 0x2d0))(param_4,0,&local_40);
          }
          else {
            (**(code **)(*plVar1 + 0x2d0))(plVar1,0,&local_40);
          }
          cVar2 = *local_40;
          iVar6 = (**(code **)(*param_4 + 0x1c8))(param_4);
          FUN_00414480(&local_48);
          iVar9 = 0;
          iVar7 = iVar6;
          if (-1 < iVar6 + -1) {
            do {
              uVar4 = (**(code **)(*param_4 + 0x210))(param_4,iVar9);
              FUN_015755e0(param_3,uVar4,&local_38);
              FUN_01575200(local_38,&local_58);
              FUN_00442620(local_462,local_58);
              if (param_2 == 0) {
                FUN_0043f750(&local_ca8,cVar2);
                FUN_00416cd0(&local_48,4,local_48,local_58,&DAT_015fe1a0,local_ca8);
                if (iVar9 < iVar6 + -1) {
                  FUN_00416ad0(&local_48,&DAT_015fe200);
                }
              }
              else {
                _AddSignalIntTransAction_(param_2,&DAT_015fe204,local_462,cVar2);
              }
              iVar9 = iVar9 + 1;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
        }
        else if (sVar3 == 0xa2) {
          if (plVar1 == (longlong *)0x0) {
            (**(code **)(*param_4 + 0x2d0))(param_4,0,&local_40);
          }
          else {
            (**(code **)(*plVar1 + 0x2d0))(plVar1,0,&local_40);
          }
          cVar2 = *local_40;
          iVar6 = (**(code **)(*param_4 + 0x1c8))(param_4);
          FUN_00414480(&local_48);
          iVar9 = 0;
          iVar7 = iVar6;
          if (-1 < iVar6 + -1) {
            do {
              uVar4 = (**(code **)(*param_4 + 0x210))(param_4,iVar9);
              FUN_015755e0(param_3,uVar4,&local_38);
              FUN_01575200(local_38,&local_58);
              FUN_00414b50(&local_50,*(undefined8 *)(local_38 + 0x40));
              uVar4 = FUN_015f54a0(cVar2,iVar9);
              FUN_00442620(local_462,local_58);
              FUN_00442620(local_c66,local_50);
              if (param_2 == 0) {
                FUN_0043f750(&local_cb0,uVar4);
                FUN_00416cd0(&local_48,4,local_48,local_58,&DAT_015fe1a0,local_cb0);
                if (iVar9 < iVar6 + -1) {
                  FUN_00416ad0(&local_48,&DAT_015fe200);
                }
              }
              else {
                _AddSignalTransAction(param_2,local_462,uVar4,local_c66);
              }
              iVar9 = iVar9 + 1;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
        }
        else if (sVar3 == 0x8f) {
          if (plVar1 == (longlong *)0x0) {
            (**(code **)(*param_4 + 0x2d0))(param_4,0,&local_40);
          }
          else {
            (**(code **)(*plVar1 + 0x2d0))(plVar1,0,&local_40);
          }
          cVar2 = *local_40;
          FUN_00414b50(&local_58,&DAT_015fe1b0);
          FUN_017ff4a0(param_4,&local_cb8);
          FUN_00416ba0(&local_60,L"key0_",local_cb8);
          FUN_00442620(local_462,local_58);
          FUN_00442620(local_864,local_60);
          if (param_2 == 0) {
            FUN_0043f750(&local_cc0,cVar2);
            FUN_00416cd0(&local_48,3,local_60,&DAT_015fe1a0,local_cc0);
          }
          else {
            _AddSignalIntTransAction_(param_2,local_462,local_864,cVar2);
          }
        }
      }
      else {
        (**(code **)(*param_4 + 0x2d0))(param_4,0,&local_40);
        cVar2 = *local_40;
        FUN_00414480(&local_48);
        iVar6 = 0;
        iVar7 = local_2c;
        if (-1 < local_2c + -1) {
          do {
            uVar4 = FUN_015f6440(iVar6,cVar2);
            FUN_00414b50(&local_58,&DAT_015fe1b0);
            FUN_01d43440(&local_c88,iVar6);
            FUN_017ff4a0(param_4,&local_c90);
            FUN_00416cd0(&local_60,4,&DAT_015fe1dc,local_c88,&DAT_015fe1f0,local_c90);
            FUN_00442620(local_462,local_58);
            FUN_00442620(local_864,local_60);
            if (param_2 == 0) {
              FUN_0043f750(&local_c98,uVar4);
              FUN_00416cd0(&local_48,4,local_48,local_60,&DAT_015fe1a0,local_c98);
              if (iVar6 < local_2c + -1) {
                FUN_00416ad0(&local_48,&DAT_015fe200);
              }
            }
            else {
              _AddSignalIntTransAction_(param_2,local_462,local_864,uVar4);
            }
            iVar6 = iVar6 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
      }
    }
    FUN_00414ad0(param_1,local_48);
  }
  FUN_00414560(&local_cc0,0xb);
  FUN_00414560(&local_60,4);
  return param_1;
}

