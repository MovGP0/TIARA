/* Ghidra address: 01320560 */
/* Ghidra symbol: FUN_01320560 */


void FUN_01320560(longlong param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_20 = 0;
  if (*(char *)(param_1 + 0x5db) == '\x05') {
    FUN_01373b60(*(undefined8 *)(param_1 + 0xa0),0,0,0);
  }
  else {
    if (*(char *)(param_1 + 0x5db) == '\x06') {
      FUN_01b07cd0(param_1,1);
      *(undefined8 *)(param_1 + 0x3a8) = 0x3ff0000000000000;
    }
    else {
      *(undefined8 *)(param_1 + 0x3a8) = *(undefined8 *)(param_1 + 0x695);
    }
    if (*(char *)(param_1 + 0x325) == '\0') {
      while ((*(double *)(param_1 + 0x3a8) <= *(double *)(param_1 + 0x695) &&
             (*(char *)(param_1 + 0x49c) == '\0'))) {
        cVar1 = FUN_01b07dd0(param_1);
        if (cVar1 == '\0') {
          FUN_016f5430(param_1,1,0);
        }
        else {
          FUN_016f39b0(param_1,1);
        }
        if ((*(char *)(param_1 + 0x324) == '\0') && (*(char *)(param_1 + 0x49c) != '\x01')) {
          if (*(char *)(param_1 + 0x5db) == '\x06') {
            if (*(double *)(param_1 + 0x3a8) == 1.0) {
              FUN_01b07850(param_1,*(undefined8 *)(param_1 + 0x118));
            }
            else {
              FUN_01b07850(param_1,*(undefined8 *)(param_1 + 0x118));
            }
          }
          else {
            FUN_01b07850(param_1,*(undefined8 *)(param_1 + 0x118));
          }
        }
        else if (*(char *)(param_1 + 0x324) != '\0') {
          if (param_2 == '\0') {
            uVar3 = FUN_00b89270();
            FUN_00b8e520(uVar3,&local_28,0x10a);
            FUN_016fe2a0(local_28,0x1585);
            FUN_0044d440();
          }
          else {
            FUN_00de8980(&local_20,0x10a);
            FUN_01b05000(local_20,0);
          }
        }
        FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
        iVar5 = *(int *)(*(longlong *)(param_1 + 0x4c0) + 0x10);
        iVar4 = 0;
        if (-1 < iVar5 + -1) {
          do {
            FUN_01d347d0(*(undefined8 *)(param_1 + 0x4c0),iVar4);
            FUN_01b07850(param_1,*(undefined8 *)(param_1 + 0x118));
            iVar4 = iVar4 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        if ((*(char *)(param_1 + 0x5db) == '\x06') &&
           (*(double *)(param_1 + 0x3a8) <= *(double *)(param_1 + 0x695) &&
            *(double *)(param_1 + 0x695) != *(double *)(param_1 + 0x3a8))) {
          FUN_0131fa20(param_1);
          FUN_01b07cd0(param_1,0);
        }
        *(double *)(param_1 + 0x3a8) = *(double *)(param_1 + 0x3a8) + 1.0;
      }
      FUN_01af2990(*(undefined8 *)(param_1 + 0xf10),0x4059000000000000);
    }
    else {
      while ((*(double *)(param_1 + 0x3a8) <= *(double *)(param_1 + 0x695) &&
             (*(char *)(param_1 + 0x49c) == '\0'))) {
        FUN_016f6430(param_1,1,0);
        FUN_016f3620(param_1,0,1);
        if (*(char *)(param_1 + 0x5db) == '\x06') {
          if (*(double *)(param_1 + 0x3a8) == 1.0) {
            FUN_01b07850(param_1,*(undefined8 *)(param_1 + 0x118),*(undefined8 *)(param_1 + 0x148));
          }
          else {
            FUN_01b07850(param_1,*(undefined8 *)(param_1 + 0x118),*(undefined8 *)(param_1 + 0x158));
          }
        }
        else {
          FUN_01b07850(param_1,*(undefined8 *)(param_1 + 0x118),*(undefined8 *)(param_1 + 0x148));
        }
        FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
        iVar5 = *(int *)(*(longlong *)(param_1 + 0x4c0) + 0x10);
        iVar4 = 0;
        if (-1 < iVar5 + -1) {
          do {
            lVar2 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x4c0),iVar4);
            FUN_01b07850(param_1,*(undefined8 *)(param_1 + 0x118),*(undefined8 *)(lVar2 + 8));
            iVar4 = iVar4 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        if ((*(char *)(param_1 + 0x5db) == '\x06') &&
           (*(double *)(param_1 + 0x3a8) <= *(double *)(param_1 + 0x695) &&
            *(double *)(param_1 + 0x695) != *(double *)(param_1 + 0x3a8))) {
          FUN_0131fa20(param_1);
          FUN_01b07cd0(param_1,0);
        }
        *(double *)(param_1 + 0x3a8) = *(double *)(param_1 + 0x3a8) + 1.0;
      }
      FUN_01af2990(*(undefined8 *)(param_1 + 0xf10),0x4059000000000000);
    }
  }
  FUN_00414560(&local_28,2);
  return;
}

