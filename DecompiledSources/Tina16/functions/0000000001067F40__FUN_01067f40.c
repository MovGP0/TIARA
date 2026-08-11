/* Ghidra address: 01067f40 */
/* Ghidra symbol: FUN_01067f40 */


void FUN_01067f40(longlong *param_1)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  *(undefined1 *)((longlong)param_1 + 0x162) = 0xb;
  do {
    iVar3 = (int)param_1[0x2a];
    if (*(short *)(param_1[0x24] + (longlong)iVar3 * 2) == 0x5c) {
      lVar6 = param_1[0x24];
      iVar5 = iVar3 + 1;
      if (SCARRY4(iVar3,1)) {
        iVar5 = FUN_00410ab0();
      }
      uVar2 = *(ushort *)(lVar6 + (longlong)iVar5 * 2);
      if (uVar2 < 0x100) {
        bVar7 = ((byte)(&DAT_0106801c)[(longlong)(ulonglong)uVar2 >> 3] >> ((ulonglong)uVar2 & 7) &
                1) != 0;
      }
      else {
        bVar7 = false;
      }
      if (bVar7) {
        plVar1 = param_1 + 0x2a;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + 1;
        if (SCARRY4((int)lVar6,1)) {
          FUN_00410ab0();
        }
      }
    }
    plVar1 = param_1 + 0x2a;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + 1;
    if (SCARRY4((int)lVar6,1)) {
      FUN_00410ab0();
    }
    cVar4 = (**(code **)(*param_1 + 200))(param_1,(int)param_1[0x2a]);
  } while ((cVar4 == '\0') && (*(short *)(param_1[0x24] + (longlong)(int)param_1[0x2a] * 2) != 0x27)
          );
  if (*(short *)(param_1[0x24] + (longlong)(int)param_1[0x2a] * 2) == 0x27) {
    param_1 = param_1 + 0x2a;
    lVar6 = *param_1;
    *(int *)param_1 = (int)*param_1 + 1;
    if (SCARRY4((int)lVar6,1)) {
      FUN_00410ab0();
    }
  }
  return;
}

