/* Ghidra address: 00ab4f40 */
/* Ghidra symbol: FUN_00ab4f40 */


void FUN_00ab4f40(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  lVar2 = FUN_00416740();
  param_1[0x1b] = lVar2;
  iVar5 = 0;
  if (param_1[0x1a] != 0) {
    iVar5 = *(int *)(param_1[0x1a] + -4);
  }
  *(int *)((longlong)param_1 + 0x6c) = iVar5;
  if (0 < iVar5) {
    lVar2 = 0;
    if (param_1[0x1c] != 0) {
      lVar2 = *(longlong *)(param_1[0x1c] + -8);
    }
    FUN_00419260(param_1 + 0x1c,&DAT_00a84d10,1,lVar2 + 1);
    lVar2 = 0;
    if (param_1[0x1c] != 0) {
      lVar2 = *(longlong *)(param_1[0x1c] + -8);
    }
    *(undefined1 *)(param_1[0x1c] + -1 + lVar2) = 1;
    cVar1 = (**(code **)(*param_1 + 0x30))(param_1);
    if (cVar1 == '\0') {
      iVar3 = 0;
      lVar2 = FUN_00610ca0(&LAB_00a84be0,1);
      param_1[0x1d] = lVar2;
      iVar5 = *(int *)((longlong)param_1 + 0x6c);
      iVar4 = 0;
      if (-1 < iVar5 + -1) {
        do {
          if ((iVar4 == 0) || (*(int *)(param_1[0x21] + (longlong)iVar4 * 4) != iVar3 + 1)) {
            lVar2 = FUN_00410e60(&DAT_00a84a98,1);
            *(int *)(lVar2 + 8) = iVar4;
            *(undefined4 *)(lVar2 + 0xc) = *(undefined4 *)(param_1[0x21] + (longlong)iVar4 * 4);
            FUN_004ae7e0(param_1[0x1d],lVar2);
          }
          iVar3 = *(int *)(param_1[0x21] + (longlong)iVar4 * 4);
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      FUN_00419430(param_1 + 0x21,&DAT_00a84998);
    }
    *(int *)(param_1[3] + 0x2b0) = *(int *)(param_1[3] + 0x2b0) + 1;
    *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_1[3] + 0x2b0);
  }
  return;
}

