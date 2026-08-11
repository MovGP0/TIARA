/* Ghidra address: 017d8440 */
/* Ghidra symbol: FUN_017d8440 */


void FUN_017d8440(longlong param_1,int param_2)

{
  longlong *plVar1;
  short sVar2;
  int iVar3;
  longlong lVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_48;
  int local_30;
  
  *(undefined4 *)(param_1 + 0x98) = 0;
  iVar7 = *(int *)(param_1 + 8) + -1;
  if (param_2 <= iVar7) {
    iVar8 = (iVar7 - param_2) + 1;
    iVar7 = param_2;
    do {
      sVar5 = -1;
      plVar1 = (longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar7 * 0x18);
      local_30 = (int)plVar1[2];
      iVar3 = 0;
      sVar2 = -1;
      if (local_30 - 1U < 0x80000000) {
        do {
          sVar5 = sVar2;
          if (param_2 <= *(int *)(*plVar1 + 0x10 + (longlong)iVar3 * 0x18)) {
            sVar5 = sVar5 + 1;
          }
          iVar3 = iVar3 + 1;
          local_30 = local_30 + -1;
          sVar2 = sVar5;
        } while (local_30 != 0);
      }
      *(short *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar7 * 2) = sVar5;
      iVar6 = -1;
      plVar1 = (longlong *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar7 * 0x18);
      local_48 = (int)plVar1[2];
      iVar3 = 0;
      if (local_48 - 1U < 0x80000000) {
        do {
          if (param_2 <= *(short *)(*plVar1 + (longlong)iVar3 * 2)) {
            iVar6 = iVar6 + 1;
          }
          iVar3 = iVar3 + 1;
          local_48 = local_48 + -1;
        } while (local_48 != 0);
      }
      lVar4 = (longlong)iVar7;
      *(short *)(*(longlong *)(param_1 + 0x60) + lVar4 * 2) = (short)iVar6;
      *(int *)(*(longlong *)(param_1 + 0x88) + lVar4 * 4) =
           iVar6 * *(short *)(*(longlong *)(param_1 + 0x58) + lVar4 * 2);
      if (*(int *)(*(longlong *)(param_1 + 0x88) + lVar4 * 4) == 0) {
        *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
      }
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  return;
}

