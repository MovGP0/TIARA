/* Ghidra address: 00a632e0 */
/* Ghidra symbol: FUN_00a632e0 */


ulonglong FUN_00a632e0(longlong param_1,short param_2)

{
  int iVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  bool bVar3;
  
  bVar3 = *(short *)(param_1 + 0x86) == param_2;
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),bVar3);
  if (bVar3) {
    FUN_00a63280(param_1);
  }
  else {
    iVar1 = 0;
    if (*(longlong *)(param_1 + 0x88) != 0) {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x88) + -4);
    }
    if (0 < iVar1) {
      do {
        bVar3 = *(short *)(*(longlong *)(param_1 + 0x88) + -2 + (longlong)iVar1 * 2) == param_2;
        uVar2 = CONCAT71((int7)(uVar2 >> 8),bVar3);
        if (bVar3) {
          FUN_004169f0(param_1 + 0x88,iVar1 + -1);
          FUN_00a63280(param_1);
          break;
        }
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return uVar2 & 0xffffffff;
}

