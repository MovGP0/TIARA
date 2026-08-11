/* Ghidra address: 00409c30 */
/* Ghidra symbol: FUN_00409c30 */


void FUN_00409c30(ushort *param_1,longlong *param_2)

{
  ushort uVar1;
  longlong lVar2;
  ushort *puVar3;
  ushort *puVar4;
  int iVar5;
  
  while( true ) {
    for (; (*param_1 != 0 && (*param_1 < 0x21)); param_1 = param_1 + 1) {
    }
    if ((*param_1 != 0x22) || (param_1[1] != 0x22)) break;
    param_1 = param_1 + 2;
  }
  iVar5 = 0;
  puVar4 = param_1;
  while (0x20 < *puVar4) {
    puVar3 = puVar4;
    if (*puVar4 == 0x22) {
      while( true ) {
        puVar4 = puVar3 + 1;
        if ((*puVar4 == 0) || (*puVar4 == 0x22)) break;
        iVar5 = iVar5 + 1;
        puVar3 = puVar4;
      }
      if (*puVar4 != 0) {
        puVar4 = puVar3 + 2;
      }
    }
    else {
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  FUN_004169f0(param_2,iVar5);
  lVar2 = *param_2;
  iVar5 = 0;
  while (uVar1 = *param_1, 0x20 < uVar1) {
    puVar4 = param_1;
    if (uVar1 == 0x22) {
      while( true ) {
        param_1 = puVar4 + 1;
        uVar1 = *param_1;
        if ((uVar1 == 0) || (uVar1 == 0x22)) break;
        *(ushort *)(lVar2 + (longlong)iVar5 * 2) = uVar1;
        iVar5 = iVar5 + 1;
        puVar4 = param_1;
      }
      if (*param_1 != 0) {
        param_1 = puVar4 + 2;
      }
    }
    else {
      *(ushort *)(lVar2 + (longlong)iVar5 * 2) = uVar1;
      param_1 = param_1 + 1;
      iVar5 = iVar5 + 1;
    }
  }
  return;
}

