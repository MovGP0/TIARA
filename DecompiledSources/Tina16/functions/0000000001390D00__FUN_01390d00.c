/* Ghidra address: 01390d00 */
/* Ghidra symbol: FUN_01390d00 */


void FUN_01390d00(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  if (*(char *)(param_1 + 0x5db) == '\x05') {
    FUN_013748b0(*(undefined8 *)(param_1 + 0xa0),0,0,0,0);
  }
  else {
    cVar1 = FUN_017d1390(*(undefined8 *)(param_1 + 0x4c0));
    if ((cVar1 != '\0') || (cVar1 = FUN_01b07dd0(param_1), cVar1 != '\0')) {
      FUN_013901c0(&DAT_01390ff8,0,param_2,param_1);
    }
    FUN_0165dc50(*(undefined8 *)(param_1 + 0x110));
    lVar2 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x4c0),0);
    FUN_01b07850(param_1,*(undefined8 *)(param_1 + 0x118),*(undefined8 *)(lVar2 + 8));
    if (*PTR_DAT_020052b8 != '\0') {
      FUN_017d22b0(param_1);
      FUN_017d1f40(param_1);
    }
    if (*(char *)(param_1 + 0x5db) == '\x06') {
      FUN_01b07cd0(param_1,1);
      *(undefined8 *)(param_1 + 0x3a8) = 0x3ff0000000000000;
    }
    else {
      *(undefined8 *)(param_1 + 0x3a8) = *(undefined8 *)(param_1 + 0x695);
    }
    FUN_01af25b0(*(undefined8 *)(param_1 + 0xf10),1,&LAB_01391018,0);
    while ((*(double *)(param_1 + 0x3a8) <= *(double *)(param_1 + 0x695) &&
           (*(char *)(param_1 + 0x49c) == '\0'))) {
      FUN_016f6430(param_1,7,0);
      FUN_017dcfd0(*(undefined8 *)(param_1 + 0xd8),1,1);
      iVar5 = *(int *)(*(longlong *)(param_1 + 0x4c0) + 0x10);
      iVar4 = 0;
      if (-1 < iVar5 + -1) {
        do {
          uVar3 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x4c0),iVar4);
          FUN_01390c30(param_1,uVar3);
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      if (*(char *)(param_1 + 0x5db) == '\x06') {
        if (*(double *)(param_1 + 0x3a8) == 1.0) {
          FUN_01b07850(param_1,*(undefined8 *)(param_1 + 0x118),*(undefined8 *)(param_1 + 0x148));
          FUN_01b07850(param_1,*(undefined8 *)(param_1 + 0x120),*(undefined8 *)(param_1 + 0x150));
        }
        else {
          FUN_01b07850(param_1,*(undefined8 *)(param_1 + 0x118),*(undefined8 *)(param_1 + 0x158));
          FUN_01b07850(param_1,*(undefined8 *)(param_1 + 0x120),*(undefined8 *)(param_1 + 0x160));
        }
      }
      else {
        FUN_01b07850(param_1,*(undefined8 *)(param_1 + 0x118),*(undefined8 *)(param_1 + 0x148));
        FUN_01b07850(param_1,*(undefined8 *)(param_1 + 0x120),*(undefined8 *)(param_1 + 0x150));
      }
      if ((*(char *)(param_1 + 0x5db) == '\x06') &&
         (*(double *)(param_1 + 0x3a8) <= *(double *)(param_1 + 0x695) &&
          *(double *)(param_1 + 0x695) != *(double *)(param_1 + 0x3a8))) {
        FUN_01390180(param_1);
        FUN_01b07cd0(param_1,0);
        FUN_017dcfd0(*(undefined8 *)(param_1 + 0xd8),0,1);
        cVar1 = FUN_017d1390(*(undefined8 *)(param_1 + 0x4c0));
        if ((cVar1 != '\0') || (cVar1 = FUN_01b07dd0(param_1), cVar1 != '\0')) {
          FUN_013901c0(&DAT_01390ff8,0,param_2,param_1);
        }
      }
      *(double *)(param_1 + 0x3a8) = *(double *)(param_1 + 0x3a8) + 1.0;
    }
    FUN_01af2990(*(undefined8 *)(param_1 + 0xf10),0x4059000000000000);
  }
  return;
}

