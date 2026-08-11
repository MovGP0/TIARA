/* Ghidra address: 01098c30 */
/* Ghidra symbol: FUN_01098c30 */


void FUN_01098c30(longlong param_1)

{
  int *piVar1;
  int iVar2;
  short sVar3;
  longlong lVar4;
  int iVar5;
  ushort uVar6;
  bool bVar7;
  
  piVar1 = (int *)(param_1 + 0x150);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  if (SCARRY4(iVar2,1)) {
    FUN_00410ab0();
  }
  *(undefined1 *)(param_1 + 0x161) = 5;
  do {
    iVar2 = *(int *)(param_1 + 0x150);
    sVar3 = *(short *)(*(longlong *)(param_1 + 0x120) + (longlong)iVar2 * 2);
    uVar6 = sVar3 - 0x28;
    if (uVar6 < 0x58) {
      bVar7 = ((byte)(&DAT_01098ce8)[(longlong)((ulonglong)uVar6 & 0x7f) >> 3] >>
               ((ulonglong)uVar6 & 7) & 1) != 0;
    }
    else {
      bVar7 = false;
    }
    if (!bVar7) {
      return;
    }
    if (sVar3 == 0x2e) {
      lVar4 = *(longlong *)(param_1 + 0x120);
      iVar5 = iVar2 + 1;
      if (SCARRY4(iVar2,1)) {
        lVar4 = FUN_00410ab0();
      }
      if (*(short *)(lVar4 + (longlong)iVar5 * 2) == 0x2e) {
        return;
      }
    }
    piVar1 = (int *)(param_1 + 0x150);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    if (SCARRY4(iVar2,1)) {
      FUN_00410ab0();
    }
  } while( true );
}

