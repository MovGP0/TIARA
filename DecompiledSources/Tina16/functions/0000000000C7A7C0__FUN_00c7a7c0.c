/* Ghidra address: 00c7a7c0 */
/* Ghidra symbol: FUN_00c7a7c0 */


void FUN_00c7a7c0(longlong *param_1,int *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 uVar6;
  char local_29;
  
  if ((*param_2 == 0x111) && ((char)param_1[0x7b] == '\x01')) {
    uVar1 = *(ulonglong *)(param_2 + 2);
    if ((0x7028 < uVar1) && (uVar1 < 0x702f)) {
      uVar6 = uVar1 == 0x702a;
      if (uVar1 == 0x702b) {
        uVar6 = 2;
      }
      if (uVar1 == 0x702c) {
        uVar6 = 3;
      }
      local_29 = '\x01';
      (**(code **)(*param_1 + 0xc0))(param_1,uVar6,&local_29);
      if (local_29 == '\0') {
        return;
      }
      uVar4 = thunk_FUN_03a65bf1(param_1[0x4e],param_1[0x3c],*param_2,*(undefined8 *)(param_2 + 2),
                                 *(undefined8 *)(param_2 + 4));
      *(undefined8 *)(param_2 + 6) = uVar4;
      (**(code **)(*param_1 + 200))(param_1,uVar6);
      FUN_00c76c10(param_1);
      return;
    }
    FUN_00c76c10(param_1);
  }
  iVar2 = *param_2;
  if (iVar2 == 2) {
    thunk_FUN_03c9d277(param_1[0x3c],0xfffffffc,param_1[0x4e]);
    uVar4 = thunk_FUN_03a65bf1(param_1[0x4e],param_1[0x3c],*param_2,*(undefined8 *)(param_2 + 2),
                               *(undefined8 *)(param_2 + 4));
    *(undefined8 *)(param_2 + 6) = uVar4;
    param_1[0x3c] = 0;
  }
  else if (iVar2 == 0x7b) {
    iVar2 = thunk_FUN_041b2403(param_1[0x3b],0x1032,0,0);
    local_29 = '\x01';
    if ((*(char *)(param_1[0x44] + 0xf) == '\0') && (iVar2 == 0)) {
      local_29 = '\0';
    }
    if ((*(char *)(param_1[0x44] + 0x10) == '\0') && (0 < iVar2)) {
      local_29 = '\0';
    }
    if (local_29 == '\0') {
      param_2[6] = 1;
      param_2[7] = 0;
    }
    else {
      uVar4 = thunk_FUN_03a65bf1(param_1[0x4e],param_1[0x3c],*param_2,*(undefined8 *)(param_2 + 2),
                                 *(undefined8 *)(param_2 + 4));
      *(undefined8 *)(param_2 + 6) = uVar4;
    }
  }
  else if (iVar2 == 0x117) {
    if (((*(char *)(param_1[0x44] + 0xb) != '\x01') &&
        (iVar2 = thunk_FUN_041b2403(param_1[0x3b],0x1032,0,0), (short)param_2[4] == 0)) &&
       (0 < iVar2)) {
      uVar4 = *(undefined8 *)(param_2 + 2);
      iVar2 = thunk_FUN_041b99e8();
      iVar5 = 0;
      if (-1 < iVar2 + -1) {
        do {
          iVar3 = thunk_FUN_0413f56d(uVar4,iVar5);
          if ((iVar3 == 0x7812) || (iVar3 == 0x7913)) {
            thunk_FUN_04048b08(uVar4,iVar3,1);
          }
          iVar5 = iVar5 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    if (((*(char *)(param_1[0x44] + 0xc) != '\x01') &&
        (iVar2 = thunk_FUN_041b2403(param_1[0x3b],0x1032,0,0), (short)param_2[4] == 0)) &&
       (0 < iVar2)) {
      uVar4 = *(undefined8 *)(param_2 + 2);
      iVar2 = thunk_FUN_041b99e8();
      iVar5 = 0;
      if (-1 < iVar2 + -1) {
        do {
          iVar3 = thunk_FUN_0413f56d(uVar4,iVar5);
          if ((iVar3 == 0x7811) || (iVar3 == 0x7912)) {
            thunk_FUN_04048b08(uVar4,iVar3,1);
          }
          iVar5 = iVar5 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    uVar4 = thunk_FUN_03a65bf1(param_1[0x4e],param_1[0x3c],*param_2,*(undefined8 *)(param_2 + 2),
                               *(undefined8 *)(param_2 + 4));
    *(undefined8 *)(param_2 + 6) = uVar4;
  }
  else {
    uVar4 = thunk_FUN_03a65bf1(param_1[0x4e],param_1[0x3c],iVar2,*(undefined8 *)(param_2 + 2),
                               *(undefined8 *)(param_2 + 4));
    *(undefined8 *)(param_2 + 6) = uVar4;
  }
  return;
}

