/* Ghidra address: 01069470 */
/* Ghidra symbol: FUN_01069470 */


void FUN_01069470(longlong param_1)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  bool bVar7;
  
  *(undefined1 *)(param_1 + 0x162) = 9;
  iVar3 = *(int *)(param_1 + 0x150);
  lVar4 = *(longlong *)(param_1 + 0x120);
  iVar6 = iVar3 + 1;
  if (SCARRY4(iVar3,1)) {
    iVar3 = FUN_00410ab0();
  }
  uVar2 = *(ushort *)(lVar4 + (longlong)iVar6 * 2);
  uVar5 = (ulonglong)uVar2;
  if (uVar2 == 0x2e) {
    lVar4 = *(longlong *)(param_1 + 0x120);
    iVar6 = iVar3 + 2;
    if (SCARRY4(iVar3,2)) {
      iVar6 = FUN_00410ab0();
    }
    if (*(short *)(lVar4 + (longlong)iVar6 * 2) == 0x2e) {
      piVar1 = (int *)(param_1 + 0x150);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + 3;
      if (SCARRY4(iVar3,3)) {
        FUN_00410ab0();
      }
      *(undefined1 *)(param_1 + 0x163) = 0xe;
      return;
    }
  }
  if ((ushort)uVar5 < 0x100) {
    bVar7 = ((byte)(&DAT_01069530)[(longlong)(uVar5 & 0xffff) >> 3] >> (uVar5 & 7) & 1) != 0;
  }
  else {
    bVar7 = false;
  }
  if (bVar7) {
    piVar1 = (int *)(param_1 + 0x150);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    if (SBORROW4(iVar3,1)) {
      FUN_00410ab0();
    }
    FUN_01068b40();
  }
  else {
    piVar1 = (int *)(param_1 + 0x150);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + 1;
    if (SCARRY4(iVar3,1)) {
      FUN_00410ab0();
    }
    *(undefined1 *)(param_1 + 0x163) = 0x1e;
  }
  return;
}

