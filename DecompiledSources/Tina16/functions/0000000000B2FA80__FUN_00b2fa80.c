/* Ghidra address: 00b2fa80 */
/* Ghidra symbol: FUN_00b2fa80 */


undefined8 FUN_00b2fa80(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  longlong lVar6;
  longlong lVar7;
  short sVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 local_40;
  undefined8 local_38;
  short local_2a;
  
  local_40 = 0;
  local_38 = 0;
  FUN_004144d0(param_2);
  FUN_0061d8e0(&local_40,param_3);
  FUN_00414bf0(param_1 + 0x10,local_40);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    if (**(char **)(param_1 + 0x10) == '=') {
      uVar9 = 0;
      if (*(longlong *)(param_1 + 0x10) != 0) {
        uVar9 = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + -4);
      }
      FUN_00415ad0(param_1 + 0x10,*(undefined8 *)(param_1 + 0x10),2,uVar9);
    }
    FUN_00b2d3c0(*(undefined8 *)(param_1 + 0x18));
    FUN_00b2d510(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10),
                 *(undefined8 *)(param_1 + 0x28),0x22);
    iVar3 = FUN_00b2d500();
    iVar10 = 0;
    if (-1 < iVar3 + -1) {
      do {
        pcVar5 = (char *)FUN_00b2d4e0(*(undefined8 *)(param_1 + 0x18),iVar10);
        cVar1 = *pcVar5;
        if (cVar1 == '\0') {
          FUN_00b2f4c0(param_1,&local_38,*(undefined8 *)(pcVar5 + 5),*(undefined4 *)(pcVar5 + 0x11))
          ;
        }
        else if (cVar1 == '\x01') {
          if (pcVar5[0x19] == '\0') {
            FUN_00b2f950(param_1,&local_38,*(undefined8 *)(pcVar5 + 5),0,pcVar5[0x1a]);
          }
          else {
            FUN_00b2f950(param_1,&local_38,*(undefined8 *)(pcVar5 + 5),*(int *)(pcVar5 + 0x11) + 1,
                         pcVar5[0x1a]);
          }
        }
        else if (cVar1 == '\x02') {
          iVar4 = *(int *)(pcVar5 + 1);
          if (iVar4 < 8) {
            if (iVar4 == 7) {
              FUN_00b2edc0(param_1,&local_38,**(undefined1 **)(pcVar5 + 0x1f));
            }
            else if (iVar4 < 5) {
              if (iVar4 == 4) {
                FUN_00b2ee10(param_1,&local_38,*(undefined8 *)(pcVar5 + 5));
              }
              else if (iVar4 == 1) {
                FUN_00b2ed70(param_1,&local_38,**(undefined8 **)(pcVar5 + 0x1f));
              }
              else if (iVar4 == 2) {
                FUN_00b2ef70(param_1,&local_38,*(undefined8 *)(pcVar5 + 0x1f));
              }
              else if (iVar4 == 3) {
                FUN_00b2f040(param_1,&local_38,*(undefined8 *)(pcVar5 + 0x1f));
              }
            }
            else if (iVar4 == 5) {
              FUN_00b2f240(param_1,&local_38,*(undefined8 *)(pcVar5 + 0x1f));
            }
            else if (iVar4 == 6) {
              FUN_00b2f2f0(param_1,&local_38,*(undefined8 *)(pcVar5 + 0x1f));
            }
          }
          else if (iVar4 < 0xc) {
            if (iVar4 == 0xb) {
              FUN_00b2f2f0(param_1,&local_38,*(undefined8 *)(pcVar5 + 0x1f));
            }
            else if (iVar4 == 8) {
              FUN_00b2f3e0(param_1,&local_38,*(undefined8 *)(pcVar5 + 0x1f));
            }
            else if (iVar4 == 9) {
              FUN_00b2f440(param_1,&local_38,*(undefined8 *)(pcVar5 + 0x1f));
            }
            else if (iVar4 == 10) {
              FUN_00b2f240(param_1,&local_38,*(undefined8 *)(pcVar5 + 0x1f));
            }
          }
          else if (iVar4 == 0xc) {
            FUN_00414c70(&local_38,&DAT_00b2ff68);
          }
          else if (iVar4 == 0xd) {
            FUN_00b2f240(param_1,&local_38,*(undefined8 *)(pcVar5 + 0x1f));
          }
        }
        FUN_00414bf0(pcVar5 + 0x27,local_38);
        iVar10 = iVar10 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    local_2a = 0;
    iVar3 = 0;
    bVar2 = false;
    for (iVar10 = 0; iVar4 = FUN_00b2d500(*(undefined8 *)(param_1 + 0x18)), iVar10 < iVar4;
        iVar10 = iVar10 + 1) {
      lVar7 = FUN_00b2d4e0(*(undefined8 *)(param_1 + 0x18),iVar10);
      if (*(char *)(lVar7 + 0x1a) != '\0') {
        sVar8 = 0;
        if (*(longlong *)(lVar7 + 0x27) != 0) {
          sVar8 = (short)*(undefined4 *)(*(longlong *)(lVar7 + 0x27) + -4);
        }
        local_2a = local_2a + sVar8;
        if (!bVar2) {
          bVar2 = true;
          iVar3 = iVar10;
        }
      }
      if ((bVar2) && (*(char *)(lVar7 + 0x1a) == '\0')) {
        FUN_00414c70(&local_38,&LAB_00b2ff78);
        lVar7 = FUN_00414df0(&local_38);
        FUN_00409a70(&local_2a,lVar7 + 1,2);
        lVar7 = FUN_00b2d4e0(*(undefined8 *)(param_1 + 0x18),iVar3);
        lVar6 = FUN_00b2d4e0(*(undefined8 *)(param_1 + 0x18),iVar3);
        FUN_004156b0(lVar7 + 0x27,local_38,*(undefined8 *)(lVar6 + 0x27));
        bVar2 = false;
        local_2a = 0;
      }
    }
    iVar3 = FUN_00b2d500();
    iVar10 = 0;
    if (-1 < iVar3 + -1) {
      do {
        lVar7 = FUN_00b2d4e0(*(undefined8 *)(param_1 + 0x18),iVar10);
        FUN_004155b0(param_2,*(undefined8 *)(lVar7 + 0x27));
        iVar10 = iVar10 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  FUN_00414590(&local_40,2);
  return param_2;
}

