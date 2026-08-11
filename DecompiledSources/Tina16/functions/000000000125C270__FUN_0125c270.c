/* Ghidra address: 0125c270 */
/* Ghidra symbol: FUN_0125c270 */


void FUN_0125c270(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 param_5,undefined8 param_6)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
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
  longlong local_40;
  longlong *local_38;
  longlong *local_30 [2];
  
  local_a0 = 0;
  local_98 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  local_30[0] = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  FUN_00414610(param_6);
  FUN_01d04330(param_1,&local_40);
  uVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
  FUN_00414b50(&local_68,L"TINA");
  FUN_00414480(&local_58);
  FUN_00414480(&local_48);
  if (local_40 == 0) {
    cVar2 = FUN_01d01970(param_1);
    if (cVar2 == '\0') {
      cVar2 = FUN_01d04d40(param_1);
      if (cVar2 == '\0') {
        cVar2 = FUN_01d3d620(uVar3);
        if (cVar2 == '\0') {
          cVar2 = FUN_01d42330(uVar3);
          if (cVar2 == '\0') {
            cVar2 = FUN_01d421b0(uVar3);
            if (cVar2 == '\0') {
              cVar2 = FUN_01d42220(uVar3);
              if (cVar2 == '\0') {
                cVar2 = FUN_01d422d0(uVar3);
                if (cVar2 == '\0') {
                  cVar2 = FUN_01d42370(uVar3);
                  if (cVar2 == '\0') {
                    (**(code **)(*param_1 + 0x128))(param_1,&local_48);
                    bVar1 = FUN_00ed0220(4,local_48,local_68);
                    goto LAB_0125c7e3;
                  }
                }
              }
            }
          }
          cVar2 = FUN_01d42330(uVar3);
          if (cVar2 == '\0') {
            cVar2 = FUN_01d42140(uVar3);
            if (cVar2 == '\0') {
              cVar2 = FUN_01d42190(uVar3);
              if (cVar2 == '\0') {
                cVar2 = FUN_01d421e0(uVar3);
                if (cVar2 == '\0') {
                  cVar2 = FUN_01d42210(uVar3);
                  if (cVar2 == '\0') {
                    cVar2 = FUN_01d422d0(uVar3);
                    if (cVar2 == '\0') {
                      uVar8 = FUN_01cfd6a0(param_1);
                      FUN_004169a0(&local_48,uVar8);
                      bVar1 = FUN_00ed0220(5,local_48,local_68);
                    }
                    else {
                      uVar8 = FUN_01cfd6a0(param_1);
                      FUN_004169a0(&local_48,uVar8);
                      bVar1 = FUN_00ed0220(2,local_48,local_68);
                    }
                  }
                  else {
                    uVar8 = FUN_01cfd6a0(param_1);
                    FUN_004169a0(&local_48,uVar8);
                    bVar1 = FUN_00ed0220(1,local_48,local_68);
                  }
                }
                else {
                  uVar8 = FUN_01cfd6a0(param_1);
                  FUN_004169a0(&local_48,uVar8);
                  bVar1 = FUN_00ed0220(1,local_48,local_68);
                }
              }
              else {
                uVar8 = FUN_01cfd6a0(param_1);
                FUN_004169a0(&local_48,uVar8);
                bVar1 = FUN_00ed0220(3,local_48,local_68);
              }
            }
            else {
              uVar8 = FUN_01cfd6a0(param_1);
              FUN_004169a0(&local_48,uVar8);
              bVar1 = FUN_00ed0220(3,local_48,local_68);
            }
          }
          else {
            cVar2 = FUN_01d42300(uVar3);
            if (cVar2 == '\0') {
              uVar8 = FUN_01cfd6a0(param_1);
              FUN_004169a0(&local_48,uVar8);
            }
            else {
              uVar8 = FUN_01cfd6a0(param_1);
              FUN_004169a0(&local_48,uVar8);
            }
            bVar1 = FUN_00ec43f0(local_48,local_68);
          }
        }
        else {
          uVar8 = FUN_01cfd6a0(param_1);
          FUN_004169a0(&local_48,uVar8);
          iVar4 = FUN_004170c0(&DAT_0125cbf0,local_48,1);
          if (0 < iVar4) {
            uVar7 = 0;
            if (local_48 != 0) {
              uVar7 = *(undefined4 *)(local_48 + -4);
            }
            FUN_00416dc0(&local_48,local_48,3,uVar7);
          }
          bVar1 = FUN_00ec43f0(local_48,local_68);
        }
      }
      else {
        FUN_00414b50(&local_48,*(undefined8 *)(param_1[0x35] + 0x38));
        if ((char)param_1[0x34] == '\x02') {
          bVar1 = FUN_00ed0220(0,local_48,local_68);
        }
        else {
          bVar1 = FUN_00ed0220(4,local_48,local_68);
        }
      }
    }
    else {
      FUN_01d03640(param_1,&local_48,param_6);
      bVar1 = FUN_00ec43f0(local_48,local_68);
    }
LAB_0125c7e3:
    FUN_00414480(&local_50);
  }
  else {
    iVar4 = FUN_004170c0(&DAT_0125cbd0,local_40,1);
    iVar5 = FUN_004170c0(&DAT_0125cbe0,local_40,1);
    iVar6 = FUN_004170c0(&DAT_0125cbd0,local_40,1);
    FUN_00416dc0(&local_70,local_40,iVar4 + 1,(iVar5 - iVar6) + -1);
    FUN_0043ea00(&local_48,local_70);
    iVar4 = FUN_004170c0(&DAT_0125cbd0,local_40,1);
    FUN_00416dc0(&local_78,local_40,1,iVar4 + -1);
    FUN_0043ea00(&local_50,local_78);
    bVar1 = 1;
  }
  if ((bVar1 & local_48 != 0) != 0) {
    cVar2 = FUN_01d01970(param_1);
    if (cVar2 == '\0') {
      cVar2 = FUN_01d3d620(uVar3);
      if (cVar2 == '\0') {
        cVar2 = FUN_01d42330(uVar3);
        if (cVar2 == '\0') {
          cVar2 = FUN_01d04d40(param_1);
          if ((cVar2 == '\0') || ((char)param_1[0x34] != '\x02')) {
            cVar2 = FUN_01d421b0(uVar3);
            if (cVar2 == '\0') {
              cVar2 = FUN_01d42220(uVar3);
              if (cVar2 == '\0') {
                cVar2 = FUN_01d422d0(uVar3);
                if (cVar2 == '\0') {
                  cVar2 = FUN_01d42370(uVar3);
                  if (cVar2 == '\0') {
                    FUN_00ed0950(4,local_48,&local_58,0x7c,local_68);
                  }
                  else {
                    FUN_00ed0950(5,local_48,&local_58,0x7c,local_68);
                  }
                }
                else {
                  FUN_00ed0950(2,local_48,&local_58,0x7c,local_68);
                }
              }
              else {
                FUN_00ed0950(1,local_48,&local_58,0x7c,local_68);
              }
            }
            else {
              FUN_00ed0950(3,local_48,&local_58,0x7c,local_68);
            }
          }
          else {
            FUN_00ed0950(0,local_48,&local_58,0x7c,local_68);
          }
          goto LAB_0125c987;
        }
      }
    }
    FUN_00ec4890(local_48,&local_58,0x7c,local_68);
  }
LAB_0125c987:
  FUN_00de88c0(&local_80,0x401,param_6);
  FUN_004168b0(&local_88,local_80);
  FUN_00416ba0(&local_90,local_58,L"|NOPCB");
  FUN_01250a90(local_30,param_2,param_3,param_5,local_88,&PTR_DAT_0125cc04,local_90,local_50);
  iVar4 = FUN_004170c0(&DAT_0125cc34,local_48,1);
  if (0 < iVar4) {
    iVar4 = FUN_004170c0(&DAT_0125cc34,local_48,1);
    FUN_00416dc0(&local_98,local_48,1,iVar4 + -1);
    FUN_00ea9ef0(&local_60,local_98);
    (**(code **)(*param_2 + 0x148))(param_2,&local_38,L"exparameter");
    (**(code **)(*local_30[0] + 0x98))(local_30[0],&local_a0,local_38);
    (**(code **)(*local_38 + 0x108))(local_38,L"library",local_60);
  }
  FUN_0041b800(&local_a0);
  FUN_00414560(&local_98,3);
  FUN_00414520(&local_80);
  FUN_00414560(&local_78,8);
  FUN_00417840(&local_38,&LAB_00b9fca0,2);
  FUN_00414480(&param_6);
  return;
}

