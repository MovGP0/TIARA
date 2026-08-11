/* Ghidra address: 01638230 */
/* Ghidra symbol: FUN_01638230 */


ulonglong FUN_01638230(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 unaff_RDI;
  ulonglong uVar3;
  int iVar4;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  lVar2 = FUN_0161bc10(*(undefined4 *)(*(longlong *)(param_1 + 400) + 0x5bc));
  iVar4 = *(int *)(param_1 + 0x154);
  iVar1 = 0;
  if (-1 < iVar4 + -1) {
    do {
      if (*(int *)(*(longlong *)(*(longlong *)(lVar2 + 0x98) + (longlong)iVar1 * 8) +
                  (longlong)param_2 * 4) == 1) {
        uVar3 = 0;
        break;
      }
      iVar1 = iVar1 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return uVar3 & 0xffffffff;
}

