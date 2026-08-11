/* Ghidra address: 00f63a50 */
/* Ghidra symbol: FUN_00f63a50 */


void FUN_00f63a50(longlong param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  FUN_00f62aa0(param_1,*(undefined8 *)(param_1 + 0x70));
  FUN_00f653c0(param_1,*(undefined8 *)(param_1 + 0x88));
  FUN_00f611b0(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0xa0),
               *(undefined4 *)(param_1 + 0xa4));
  iVar1 = FUN_0040c770((double)*(int *)(param_1 + 0xac) * *(double *)(param_1 + 0x78));
  uVar3 = (longlong)iVar1 / 2 & 0xffffffff;
  iVar7 = *(int *)(*(longlong *)(param_1 + 0x40) + 0x10);
  iVar5 = 0;
  if (-1 < iVar7 + -1) {
    do {
      lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x40),iVar5);
      iVar2 = *(int *)(param_1 + 0xa0) / 2;
      iVar6 = (int)uVar3;
      *(ulonglong *)(lVar4 + 0x20) = CONCAT44(iVar6,iVar2);
      *(ulonglong *)(lVar4 + 0x28) = CONCAT44(iVar6,iVar2);
      FUN_00f63320(param_1,lVar4,*(undefined4 *)(PTR_DAT_02002068 + 4),1);
      uVar3 = (ulonglong)(uint)(iVar6 + iVar1);
      iVar5 = iVar5 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return;
}

