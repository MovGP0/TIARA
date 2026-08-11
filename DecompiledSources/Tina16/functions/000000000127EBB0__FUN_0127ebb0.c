/* Ghidra address: 0127ebb0 */
/* Ghidra symbol: FUN_0127ebb0 */


void FUN_0127ebb0(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                 char param_5)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong local_res18;
  undefined8 local_res20;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
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
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  
  local_b8 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_c0 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  uVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
  FUN_00414b50(&local_30,L"TINA");
  plVar4 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  cVar1 = FUN_01d01970(param_1);
  if (cVar1 == '\0') {
    cVar1 = FUN_01d04d40(param_1);
    if (cVar1 == '\0') {
      cVar1 = FUN_01d3d620(uVar2);
      if (cVar1 == '\0') {
        cVar1 = FUN_01d42330(uVar2);
        if (cVar1 == '\0') {
          cVar1 = FUN_01d421b0(uVar2);
          if (cVar1 == '\0') {
            cVar1 = FUN_01d42220(uVar2);
            if (cVar1 == '\0') {
              cVar1 = FUN_01d422d0(uVar2);
              if (cVar1 == '\0') {
                cVar1 = FUN_01d42370(uVar2);
                if (cVar1 == '\0') {
                  (**(code **)(*param_1 + 0x128))(param_1,&local_20);
                  FUN_00416ba0(&local_98,local_res20,local_20);
                  FUN_00ed0470(4,local_98,plVar4,local_30);
                  goto LAB_0127f17d;
                }
              }
            }
          }
        }
        cVar1 = FUN_01d42330(uVar2);
        if (cVar1 == '\0') {
          cVar1 = FUN_01d42140(uVar2);
          if (cVar1 == '\0') {
            cVar1 = FUN_01d42190(uVar2);
            if (cVar1 == '\0') {
              cVar1 = FUN_01d421e0(uVar2);
              if (cVar1 == '\0') {
                cVar1 = FUN_01d42210(uVar2);
                if (cVar1 == '\0') {
                  cVar1 = FUN_01d422d0(uVar2);
                  if (cVar1 == '\0') {
                    uVar5 = FUN_01cfd6a0(param_1);
                    FUN_004169a0(&local_20,uVar5);
                    FUN_00416ba0(&local_90,local_res20,local_20);
                    FUN_00ed0470(5,local_90,plVar4,local_30);
                  }
                  else {
                    uVar5 = FUN_01cfd6a0(param_1);
                    FUN_004169a0(&local_20,uVar5);
                    FUN_00416ba0(&local_88,local_res20,local_20);
                    FUN_00ed0470(2,local_88,plVar4,local_30);
                  }
                }
                else {
                  uVar5 = FUN_01cfd6a0(param_1);
                  FUN_004169a0(&local_20,uVar5);
                  FUN_00416ba0(&local_80,local_res20,local_20);
                  FUN_00ed0470(1,local_80,plVar4,local_30);
                }
              }
              else {
                uVar5 = FUN_01cfd6a0(param_1);
                FUN_004169a0(&local_20,uVar5);
                FUN_00416ba0(&local_78,local_res20,local_20);
                FUN_00ed0470(1,local_78,plVar4,local_30);
              }
            }
            else {
              uVar5 = FUN_01cfd6a0(param_1);
              FUN_004169a0(&local_20,uVar5);
              FUN_00416ba0(&local_70,local_res20,local_20);
              FUN_00ed0470(3,local_70,plVar4,local_30);
            }
          }
          else {
            uVar5 = FUN_01cfd6a0(param_1);
            FUN_004169a0(&local_20,uVar5);
            FUN_00416ba0(&local_68,local_res20,local_20);
            FUN_00ed0470(3,local_68,plVar4,local_30);
          }
        }
        else {
          uVar5 = FUN_01cfd6a0(param_1);
          FUN_004169a0(&local_20,uVar5);
          FUN_00416ba0(&local_60,local_res20,local_20);
          FUN_00ec4510(local_60,plVar4,local_30);
        }
      }
      else {
        uVar5 = FUN_01cfd6a0(param_1);
        FUN_004169a0(&local_20,uVar5);
        iVar3 = FUN_004170c0(&DAT_0127f348,local_20,1);
        if (0 < iVar3) {
          uVar2 = 0;
          if (local_20 != 0) {
            uVar2 = *(undefined4 *)(local_20 + -4);
          }
          FUN_00416dc0(&local_20,local_20,3,uVar2);
        }
        FUN_00416ba0(&local_58,local_res20,local_20);
        FUN_00ec4510(local_58,plVar4,local_30);
      }
    }
    else {
      FUN_00414b50(&local_20,*(undefined8 *)(param_1[0x35] + 0x38));
      if ((char)param_1[0x34] == '\x02') {
        FUN_00416ba0(&local_48,local_res20,local_20);
        FUN_00ed0470(0,local_48,plVar4,local_30);
      }
      else {
        FUN_00416ba0(&local_50,local_res20,local_20);
        FUN_00ed0470(4,local_50,plVar4,local_30);
      }
    }
  }
  else {
    FUN_01d03640(param_1,&local_20,*(undefined8 *)PTR_DAT_02001f18);
    FUN_00416ba0(local_40,local_res20,local_20);
    FUN_00ec4510(local_40[0],plVar4,local_30);
  }
LAB_0127f17d:
  if ((param_5 == '\0') && (local_res18 != 0)) {
    FUN_00ea9ca0(&local_a0,local_res18);
    FUN_00416ba0(&local_b0,local_res20,local_20);
    FUN_00ea9ca0(&local_a8,local_b0);
    FUN_00416cd0(param_1 + 0x30,4,local_a0,&DAT_0127f35c,local_a8,&LAB_0127f370);
  }
  else {
    iVar3 = (**(code **)(*plVar4 + 0x28))(plVar4);
    if (iVar3 < 1) {
      FUN_00414480(param_1 + 0x30);
    }
    else {
      (**(code **)(*plVar4 + 0x18))(plVar4,&local_c0,0);
      FUN_00ea9ca0(&local_b8,local_c0);
      FUN_00416ba0(&local_d0,local_res20,local_20);
      FUN_00ea9ca0(&local_c8,local_d0);
      FUN_00416cd0(param_1 + 0x30,4,local_b8,&DAT_0127f35c,local_c8,&LAB_0127f370);
    }
  }
  FUN_00410f20(plVar4);
  FUN_00414560(&local_d0,0x13);
  FUN_00414560(&local_30,3);
  FUN_00414560(&local_res18,2);
  return;
}

