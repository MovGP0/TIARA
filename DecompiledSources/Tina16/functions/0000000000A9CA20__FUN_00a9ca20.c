/* Ghidra address: 00a9ca20 */
/* Ghidra symbol: FUN_00a9ca20 */


void FUN_00a9ca20(longlong *param_1)

{
  int iVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined **ppuVar6;
  bool bVar7;
  undefined1 local_54 [26];
  byte local_3a;
  longlong local_30;
  
  uVar4 = (**(code **)(*param_1 + 0xc0))(param_1);
  FUN_00a55eb0(local_54,100,100,*(undefined4 *)((longlong)param_1 + 0x44),(int)param_1[9],uVar4,0);
  FUN_00a55b00(param_1 + 0x16,local_54,param_1 + 0x8a);
  *(bool *)((longlong)param_1 + 0x509) = (local_3a & 4) != 0;
  *(bool *)((longlong)param_1 + 0x50a) = (local_3a & 0x10) != 0;
  if (((int)param_1[0x91] == 0) && ((int)param_1[0x93] == 0)) {
    if (*(char *)((longlong)param_1 + 0x4c) == '\x02') {
      if (*(char *)((longlong)param_1 + 0x509) != '\0') {
        *(undefined4 *)(param_1 + 0x8f) = 0;
      }
    }
    else if ((7 < *(byte *)(param_1 + 0xc) || (1 << (*(byte *)(param_1 + 0xc) & 0x1f) & 0x60U) == 0)
            && ((char)param_1[8] != '\x11')) {
      local_30 = 0;
      iVar5 = *(int *)(param_1[5] + 0x10);
      while (iVar5 = iVar5 + -1, -1 < iVar5) {
        local_30 = FUN_00ac3910(param_1[5],iVar5);
        if ((*(char *)(local_30 + 0x40) != '\x11') &&
           ((cVar2 = FUN_004113d0(local_30,&PTR_FUN_00a865e0), cVar2 == '\0' ||
            (*(char *)(local_30 + 0x4c) != '\x02')))) break;
      }
      if (*(longlong *)(param_1[5] + 0x28) == 0) {
        cVar2 = '\0';
      }
      else {
        cVar2 = FUN_00a936a0(*(longlong *)(param_1[5] + 0x28));
      }
      if (iVar5 < 0) {
        if (cVar2 == 'e') {
          iVar5 = (int)param_1[0x8f] - *(int *)(param_1[4] + 0x478);
          if (iVar5 < 0) {
            iVar5 = 0;
          }
          *(int *)(param_1 + 0x8f) = iVar5;
        }
        else if (*(char *)((longlong)param_1 + 0x509) != '\0') {
          *(undefined4 *)(param_1 + 0x8f) = 0;
        }
      }
      else {
        cVar3 = FUN_004113d0(local_30,&PTR_FUN_00a8dc10);
        if ((cVar3 != '\0') || (cVar3 = FUN_004113d0(local_30,&PTR_FUN_00a8e3f8), cVar3 != '\0')) {
          if (*(byte *)(local_30 + 0x60) < 8) {
            bVar7 = ((int)CONCAT71((int7)((ulonglong)local_30 >> 8),1) <<
                     (*(byte *)(local_30 + 0x60) & 0x1f) & 0x60U) != 0;
          }
          else {
            bVar7 = false;
          }
          if ((bVar7) && (*(char *)((longlong)param_1 + 0x509) != '\0')) {
            *(undefined4 *)(param_1 + 0x8f) = 0;
            return;
          }
        }
        ppuVar6 = &PTR_FUN_00a865e0;
        cVar3 = FUN_004113d0(local_30,&PTR_FUN_00a865e0);
        if (cVar3 == '\0') {
          if ((cVar2 == -0x70) && (*(char *)((longlong)param_1 + 0x509) != '\0')) {
            cVar2 = FUN_00a936a0(param_1);
            if ((byte)(cVar2 + 0x78U) < 0x10) {
              bVar7 = ((int)CONCAT62((int6)((ulonglong)ppuVar6 >> 0x10),1) << (cVar2 + 0x78U & 0x1f)
                      & 0x280U) != 0;
            }
            else {
              bVar7 = false;
            }
            if (bVar7) {
              *(undefined4 *)(param_1 + 0x8f) = 0;
            }
          }
        }
        else if (*(char *)(local_30 + 0x4c) == '\0') {
          iVar5 = *(int *)(local_30 + 0x480);
          *(undefined4 *)(local_30 + 0x480) = 0;
          iVar1 = (int)param_1[0x8f];
          if (iVar5 < 0) {
            if (iVar1 < 0) {
              if (iVar1 <= iVar5) {
                iVar5 = iVar1;
              }
            }
            else {
              iVar5 = iVar1 + iVar5;
            }
          }
          else if (iVar1 < 0) {
            iVar5 = iVar5 + iVar1;
          }
          else if (iVar5 <= iVar1) {
            iVar5 = iVar1;
          }
          *(int *)(param_1 + 0x8f) = iVar5;
        }
      }
    }
  }
  return;
}

