/* Ghidra address: 01d07850 */
/* Ghidra symbol: FUN_01d07850 */


void FUN_01d07850(longlong *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 local_2c [4];
  longlong local_28;
  longlong local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  FUN_00414480(param_1 + 0x30);
  *PTR_DAT_02001800 = 1;
  cVar1 = FUN_01d01970(param_1);
  if (cVar1 == '\0') {
    cVar1 = FUN_01d04d40(param_1);
    if (cVar1 == '\0') {
      uVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
      cVar1 = FUN_01d3d620(uVar2);
      if (cVar1 == '\0') {
        uVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
        cVar1 = FUN_01d42330(uVar2);
        if (cVar1 == '\0') {
          uVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
          cVar1 = FUN_01d421b0(uVar2);
          if (cVar1 == '\0') {
            uVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
            cVar1 = FUN_01d42220(uVar2);
            if (cVar1 == '\0') {
              uVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
              cVar1 = FUN_01d422d0(uVar2);
              if (cVar1 == '\0') {
                uVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
                cVar1 = FUN_01d42370(uVar2);
                if (cVar1 == '\0') {
                  (**(code **)(*param_1 + 0x128))(param_1,local_20);
                  FUN_00ecfde0(&local_28,4,local_20,*(undefined8 *)PTR_DAT_02004008);
                  if (local_28 != 0) {
                    FUN_00416cd0(param_1 + 0x30,4,local_28,&DAT_01d07f18,local_20[0],&DAT_01d07f2c);
                    cVar1 = FUN_01d073b0(param_1,param_1[0x30],local_2c);
                    if (cVar1 != '\0') {
                      FUN_01d07370(param_1,local_2c[0]);
                    }
                  }
                  goto LAB_01d07ed4;
                }
              }
            }
          }
        }
        uVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
        cVar1 = FUN_01d42330(uVar2);
        if (cVar1 == '\0') {
          uVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
          cVar1 = FUN_01d42140(uVar2);
          if (cVar1 == '\0') {
            uVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
            cVar1 = FUN_01d42190(uVar2);
            if (cVar1 == '\0') {
              uVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
              cVar1 = FUN_01d421e0(uVar2);
              if (cVar1 == '\0') {
                uVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
                cVar1 = FUN_01d42210(uVar2);
                if (cVar1 == '\0') {
                  uVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
                  cVar1 = FUN_01d422d0(uVar2);
                  if (cVar1 == '\0') {
                    uVar4 = FUN_01cfd6a0(param_1);
                    FUN_004169a0(local_20,uVar4);
                    FUN_00ecfde0(&local_28,5,local_20,*(undefined8 *)PTR_DAT_02004008);
                  }
                  else {
                    uVar4 = FUN_01cfd6a0(param_1);
                    FUN_004169a0(local_20,uVar4);
                    FUN_00ecfde0(&local_28,2,local_20,*(undefined8 *)PTR_DAT_02004008);
                  }
                }
                else {
                  uVar4 = FUN_01cfd6a0(param_1);
                  FUN_004169a0(local_20,uVar4);
                  FUN_00ecfde0(&local_28,1,local_20,*(undefined8 *)PTR_DAT_02004008);
                }
              }
              else {
                uVar4 = FUN_01cfd6a0(param_1);
                FUN_004169a0(local_20,uVar4);
                FUN_00ecfde0(&local_28,1,local_20,*(undefined8 *)PTR_DAT_02004008);
              }
            }
            else {
              uVar4 = FUN_01cfd6a0(param_1);
              FUN_004169a0(local_20,uVar4);
              FUN_00ecfde0(&local_28,3,local_20,*(undefined8 *)PTR_DAT_02004008);
            }
          }
          else {
            uVar4 = FUN_01cfd6a0(param_1);
            FUN_004169a0(local_20,uVar4);
            FUN_00ecfde0(&local_28,3,local_20,*(undefined8 *)PTR_DAT_02004008);
          }
          if (local_28 != 0) {
            FUN_00416cd0(param_1 + 0x30,4,local_28,&DAT_01d07f18,local_20[0],&DAT_01d07f2c);
            cVar1 = FUN_01d073b0(param_1,param_1[0x30],local_2c);
            if (cVar1 != '\0') {
              FUN_01d07370(param_1,local_2c[0]);
            }
          }
        }
        else {
          uVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
          cVar1 = FUN_01d42300(uVar2);
          if (cVar1 == '\0') {
            uVar4 = FUN_01cfd6a0(param_1);
            FUN_004169a0(local_20,uVar4);
          }
          else {
            uVar4 = FUN_01cfd6a0(param_1);
            FUN_004169a0(local_20,uVar4);
          }
          FUN_00ec4120(&local_28,local_20[0],*(undefined8 *)PTR_DAT_02004008);
          if (local_28 != 0) {
            FUN_00416cd0(param_1 + 0x30,4,local_28,&DAT_01d07f18,local_20[0],&DAT_01d07f2c);
            FUN_01d07370(param_1,0);
          }
        }
      }
      else {
        uVar4 = FUN_01cfd6a0(param_1);
        FUN_004169a0(local_20,uVar4);
        iVar3 = FUN_004170c0(&LAB_01d07f3c,local_20[0],1);
        if (0 < iVar3) {
          uVar2 = 0;
          if (local_20[0] != 0) {
            uVar2 = *(undefined4 *)(local_20[0] + -4);
          }
          FUN_00416dc0(local_20,local_20[0],3,uVar2);
        }
        FUN_00ec4120(&local_28,local_20[0],*(undefined8 *)PTR_DAT_02004008);
        if (local_28 != 0) {
          FUN_00416cd0(param_1 + 0x30,4,local_28,&DAT_01d07f18,local_20[0],&DAT_01d07f2c);
          FUN_01d07370(param_1,0);
        }
      }
    }
    else {
      FUN_00414b50(local_20,*(undefined8 *)(param_1[0x35] + 0x38));
      if ((char)param_1[0x34] == '\x02') {
        FUN_00ecfde0(&local_28,0,local_20,*(undefined8 *)PTR_DAT_02004008);
      }
      else {
        FUN_00ecfde0(&local_28,4,local_20,*(undefined8 *)PTR_DAT_02004008);
      }
      if (local_28 != 0) {
        FUN_00416cd0(param_1 + 0x30,4,local_28,&DAT_01d07f18,local_20[0],&DAT_01d07f2c);
        cVar1 = FUN_01d073b0(param_1,param_1[0x30],local_2c);
        if (cVar1 != '\0') {
          FUN_01d07370(param_1,local_2c[0]);
        }
      }
    }
  }
  else {
    FUN_01d03640(param_1,local_20,*(undefined8 *)PTR_DAT_02001f18);
    FUN_00ec4120(&local_28,local_20[0],*(undefined8 *)PTR_DAT_02004008);
    if (local_28 != 0) {
      FUN_00416cd0(param_1 + 0x30,4,local_28,&DAT_01d07f18,local_20[0],&DAT_01d07f2c);
      FUN_01d07370(param_1,0);
    }
  }
LAB_01d07ed4:
  FUN_00414560(&local_28,2);
  return;
}

