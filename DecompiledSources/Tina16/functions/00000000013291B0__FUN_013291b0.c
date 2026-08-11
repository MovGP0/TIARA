/* Ghidra address: 013291b0 */
/* Ghidra symbol: FUN_013291b0 */


ulonglong FUN_013291b0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  iVar6 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x3d0) + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      uVar3 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x3d0),iVar5);
      iVar1 = FUN_01b07e10(param_1,uVar3);
      if (iVar1 <= *(int *)(param_1 + 0x2d8)) {
        FUN_016f5520(param_1,*(undefined8 *)
                              (*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)iVar1 * 8));
        uVar2 = FUN_01374d30(param_1,*(undefined8 *)
                                      (*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)iVar1 * 8));
        uVar4 = (ulonglong)uVar2;
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (0 < *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x3d0) + 0x10)) {
    FUN_017d9ab0(*(undefined8 *)(param_1 + 0xd8),0);
  }
  FUN_019af250(*(undefined8 *)(param_1 + 0xa0));
  return uVar4 & 0xffffffff;
}

