/* Ghidra address: 017d7e60 */
/* Ghidra symbol: FUN_017d7e60 */


void FUN_017d7e60(longlong param_1,int param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 8) + -1;
  iVar5 = 1;
  if (0 < iVar6) {
    do {
      plVar1 = (longlong *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar5 * 0x18);
      lVar2 = *plVar1;
      lVar3 = plVar1[1];
      sVar4 = *(short *)(lVar3 + (longlong)param_2 * 2);
      if (-1 < sVar4) {
        *(short *)(lVar2 + (longlong)sVar4 * 2) = (short)param_3;
      }
      sVar4 = *(short *)(lVar3 + (longlong)param_3 * 2);
      if (-1 < sVar4) {
        *(short *)(lVar2 + (longlong)sVar4 * 2) = (short)param_2;
      }
      FUN_017d7270(lVar3 + (longlong)param_2 * 2,lVar3 + (longlong)param_3 * 2,
                   CONCAT62((int6)(short)((uint)param_3 >> 0x10),2));
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return;
}

