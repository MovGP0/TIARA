/* Ghidra address: 01094210 */
/* Ghidra symbol: FUN_01094210 */


void FUN_01094210(longlong param_1)

{
  int *piVar1;
  int iVar2;
  short sVar3;
  ushort uVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  
  piVar1 = (int *)(param_1 + 0x150);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  if (SCARRY4(iVar2,1)) {
    param_1 = FUN_00410ab0();
  }
  *(undefined1 *)(param_1 + 0x161) = 4;
  do {
    iVar2 = *(int *)(param_1 + 0x150);
    sVar3 = *(short *)(*(longlong *)(param_1 + 0x120) + (longlong)iVar2 * 2);
    uVar4 = sVar3 - 0x28;
    if (uVar4 < 0x20) {
      bVar7 = (1 << ((byte)uVar4 & 0x1f) & 0x3ff40U) != 0;
    }
    else {
      bVar7 = false;
    }
    if (!bVar7) {
      return;
    }
    if (sVar3 == 0x2e) {
      lVar5 = *(longlong *)(param_1 + 0x120);
      iVar6 = iVar2 + 1;
      if (SCARRY4(iVar2,1)) {
        param_1 = FUN_00410ab0();
      }
      if (*(short *)(lVar5 + (longlong)iVar6 * 2) == 0x2e) {
        return;
      }
    }
    piVar1 = (int *)(param_1 + 0x150);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    if (SCARRY4(iVar2,1)) {
      param_1 = FUN_00410ab0();
    }
  } while( true );
}

