/* Ghidra address: 004a01a0 */
/* Ghidra symbol: FUN_004a01a0 */


ulonglong FUN_004a01a0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  iVar5 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  uVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar1 = *(longlong *)(param_1 + 8);
      if (*(uint *)(lVar1 + 0x10) <= uVar4) {
        FUN_00594f90();
      }
      cVar2 = FUN_0049f320(*(undefined8 *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar4 * 8),
                           param_2);
      if (cVar2 != '\0') goto LAB_004a0212;
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  uVar3 = 0;
LAB_004a0212:
  return uVar3 & 0xffffffff;
}

