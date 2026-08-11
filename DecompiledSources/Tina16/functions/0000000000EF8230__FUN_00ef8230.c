/* Ghidra address: 00ef8230 */
/* Ghidra symbol: FUN_00ef8230 */


void FUN_00ef8230(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  ushort *puVar4;
  longlong lVar5;
  
  iVar3 = FUN_00ef7f30(*param_2,param_3);
  if (*param_1 == 0) {
    FUN_00ef7d90(param_1,param_3);
  }
  lVar5 = *param_2;
  puVar2 = (ushort *)*param_1;
  do {
    puVar4 = puVar2;
    puVar2 = *(ushort **)(puVar4 + 0x1f8);
    iVar1 = iVar3;
  } while (*(ushort **)(puVar4 + 0x1f8) != (ushort *)0x0);
  for (; 0 < iVar1; iVar1 = iVar1 + -1) {
    if (*puVar4 == 500) {
      FUN_00ef7d90(puVar4 + 0x1f8,param_3);
      puVar4 = *(ushort **)(puVar4 + 0x1f8);
    }
    *puVar4 = *puVar4 + 1;
    if ((iVar3 != iVar1) && ((iVar3 - iVar1) % 500 == 0)) {
      lVar5 = *(longlong *)(lVar5 + 0x3f0);
    }
    puVar4[(longlong)(int)(*puVar4 - 1) + 1] =
         *(ushort *)(lVar5 + 2 + (longlong)((iVar3 - iVar1) % 500) * 2);
  }
  return;
}

