/* Ghidra address: 019a6f60 */
/* Ghidra symbol: FUN_019a6f60 */


int FUN_019a6f60(void)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 local_48 [18];
  byte local_36;
  
  iVar5 = 5;
  puVar2 = (undefined8 *)FUN_019a6fe0();
  cVar1 = FUN_0198a580(*puVar2);
  if (cVar1 == '\x04') {
    lVar3 = FUN_01d06e20(*puVar2);
    if ((lVar3 != 0) && (0 < *(int *)(*(longlong *)(lVar3 + 0x38) + 0x10))) {
      uVar4 = FUN_004aeac0(*(longlong *)(lVar3 + 0x38),0);
      FUN_00c3d330(uVar4,local_48,*(undefined2 *)(puVar2 + 1));
      iVar5 = local_36 + 1;
    }
  }
  return iVar5;
}

