/* Ghidra address: 00589f00 */
/* Ghidra symbol: FUN_00589f00 */


void FUN_00589f00(longlong param_1,longlong param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  longlong lVar3;
  uint uVar4;
  
  lVar3 = param_1 + 2 + (ulonglong)*(byte *)(param_1 + 1);
  FUN_0040d200(param_2,(longlong)((int)*(short *)(lVar3 + 0x10) << 3),0);
  while (lVar3 != 0) {
    puVar1 = (ushort *)(lVar3 + 0x13 + (ulonglong)*(byte *)(lVar3 + 0x12));
    puVar2 = puVar1 + 1;
    for (uVar4 = (uint)*puVar1; uVar4 != 0; uVar4 = uVar4 - 1) {
      if (*(longlong *)(param_2 + (longlong)(short)puVar2[0x14] * 8) == 0) {
        *(ushort **)(param_2 + (longlong)(short)puVar2[0x14] * 8) = puVar2;
      }
      puVar2 = (ushort *)((longlong)puVar2 + (ulonglong)(byte)puVar2[0x15] + 0x2b);
    }
    if (*(longlong **)(lVar3 + 8) == (longlong *)0x0) {
      lVar3 = 0;
    }
    else {
      lVar3 = **(longlong **)(lVar3 + 8);
      lVar3 = lVar3 + 2 + (ulonglong)*(byte *)(lVar3 + 1);
    }
  }
  return;
}

