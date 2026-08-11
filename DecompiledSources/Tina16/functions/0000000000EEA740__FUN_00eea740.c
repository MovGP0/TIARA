/* Ghidra address: 00eea740 */
/* Ghidra symbol: FUN_00eea740 */


undefined8 FUN_00eea740(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_48 [32];
  
  *(undefined8 *)(param_1 + 0xf8) = 0;
  lVar1 = *(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8);
  iVar5 = *(int *)(lVar1 + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      uVar3 = FUN_00b94e60(lVar1,iVar4);
      cVar2 = FUN_00eea650(auStack_48,uVar3);
      if (cVar2 != '\0') {
        uVar3 = FUN_00b94e60(lVar1,iVar4);
        *(undefined8 *)(param_1 + 0xf8) = uVar3;
        break;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return *(undefined8 *)(param_1 + 0xf8);
}

