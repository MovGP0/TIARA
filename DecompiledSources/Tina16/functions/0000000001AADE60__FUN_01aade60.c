/* Ghidra address: 01aade60 */
/* Ghidra symbol: FUN_01aade60 */


void FUN_01aade60(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int local_58;
  int local_50;
  int local_4c;
  
  FUN_01d34d40(*(undefined8 *)(param_1 + 0x19c48));
  iVar5 = 1;
  for (uVar6 = (uint)*(ushort *)(param_1 + 0x10); uVar6 != 0; uVar6 = uVar6 - 1) {
    if (0 < *(int *)(*(longlong *)
                      (*(longlong *)(*(longlong *)(param_1 + 0x19c40) + -8 + (longlong)iVar5 * 8) +
                      0x10) + 0x10)) {
      FUN_00dae910(*(undefined8 *)(param_1 + 0x19c48),iVar5);
    }
    iVar5 = iVar5 + 1;
  }
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x19c48) + 0x10);
  if ((iVar5 != 1) && (local_50 = 0, iVar7 = iVar5, -1 < iVar5 + -1)) {
    do {
      local_4c = 0;
      if (-1 < (iVar5 - local_50) + -2) {
        iVar8 = (iVar5 - local_50) + -1;
        do {
          iVar3 = FUN_00dae940(*(undefined8 *)(param_1 + 0x19c48),local_4c);
          iVar4 = FUN_00dae940(*(undefined8 *)(param_1 + 0x19c48),local_4c + 1);
          if ((0 < *(int *)(*(longlong *)
                             (*(longlong *)
                               (*(longlong *)(param_1 + 0x19c40) + -8 + (longlong)iVar3 * 8) + 0x10)
                           + 0x10)) &&
             (0 < *(int *)(*(longlong *)
                            (*(longlong *)
                              (*(longlong *)(param_1 + 0x19c40) + -8 + (longlong)iVar4 * 8) + 0x10)
                          + 0x10))) {
            lVar1 = *(longlong *)(param_1 + 0x10 + (longlong)iVar4 * 8);
            local_58 = 1;
            for (uVar6 = (uint)*(byte *)(lVar1 + 1); uVar6 != 0; uVar6 = uVar6 - 1) {
              cVar2 = FUN_01aaddd0(param_1,*(undefined2 *)(lVar1 + 0x4236 + (longlong)local_58 * 2),
                                   iVar3);
              if (cVar2 != '\0') {
                FUN_00daeb30(*(undefined8 *)(param_1 + 0x19c48),local_4c,local_4c + 1);
                break;
              }
              local_58 = local_58 + 1;
            }
          }
          local_4c = local_4c + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      local_50 = local_50 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return;
}

