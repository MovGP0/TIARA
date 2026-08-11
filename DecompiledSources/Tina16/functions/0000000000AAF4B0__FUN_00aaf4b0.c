/* Ghidra address: 00aaf4b0 */
/* Ghidra symbol: FUN_00aaf4b0 */


void FUN_00aaf4b0(longlong param_1,longlong *param_2,longlong param_3,int param_4,int param_5,
                 int param_6,int param_7,undefined4 param_8,int param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int local_40;
  int local_3c;
  
  lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x70) + 0xe0);
  iVar5 = 0;
  if (lVar6 != 0) {
    iVar5 = (int)*(undefined8 *)(lVar6 + -8);
  }
  iVar4 = 0;
  iVar2 = 0;
  if (iVar5 - 1U < 0x80000000) {
    do {
      iVar4 = iVar4 + *(int *)(lVar6 + (longlong)iVar2 * 4);
      iVar2 = iVar2 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (iVar4 < 1000) {
    iVar4 = 1000;
  }
  local_40 = 0;
  local_3c = 0;
  if (param_4 <= param_5) {
    iVar5 = (param_4 - param_5) + -1;
    do {
      lVar6 = (longlong)param_5;
      if ((*(char *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x70) + 0x110) +
                    lVar6) == '\x02') && (0 < *(int *)(param_3 + lVar6 * 4))) {
        if (param_9 < 2) {
          iVar5 = thunk_FUN_03f3ed25(param_6,*(undefined4 *)
                                              (*(longlong *)
                                                (*(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x70)
                                                + 0xe0) + lVar6 * 4),iVar4);
          iVar2 = *(int *)(*param_2 + lVar6 * 4) + ((param_6 - param_7) - local_40);
          if (iVar2 < iVar5) {
            iVar5 = iVar2;
          }
          *(int *)(*param_2 + lVar6 * 4) = iVar5;
          return;
        }
        local_3c = local_3c + *(int *)(param_3 + lVar6 * 4);
        iVar1 = thunk_FUN_03f3ed25(param_6 - param_7,local_3c,param_8);
        iVar2 = thunk_FUN_03f3ed25(param_6,*(undefined4 *)
                                            (*(longlong *)
                                              (*(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x70) +
                                              0xe0) + lVar6 * 4),iVar4);
        iVar3 = *(int *)(*param_2 + lVar6 * 4) + (iVar1 - local_40);
        if (iVar3 < iVar2) {
          iVar2 = iVar3;
        }
        *(int *)(*param_2 + lVar6 * 4) = iVar2;
        local_40 = local_40 + (iVar1 - local_40);
        param_9 = param_9 + -1;
      }
      param_5 = param_5 + -1;
      iVar5 = iVar5 + 1;
    } while (iVar5 != 0);
  }
  return;
}

