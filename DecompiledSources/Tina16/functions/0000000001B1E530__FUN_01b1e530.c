/* Ghidra address: 01b1e530 */
/* Ghidra symbol: FUN_01b1e530 */


undefined8 FUN_01b1e530(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_48 [32];
  
  cVar2 = FUN_0198a580(param_2);
  if (cVar2 == '\x04') {
    lVar1 = *(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8);
    iVar5 = *(int *)(lVar1 + 0x10);
    iVar4 = 0;
    if (-1 < iVar5 + -1) {
      do {
        uVar3 = FUN_00b94e60(lVar1,iVar4);
        cVar2 = FUN_01b1e450(auStack_48,uVar3);
        if (cVar2 != '\0') {
          uVar3 = FUN_00b94e60(lVar1,iVar4);
          return uVar3;
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return 0;
}

