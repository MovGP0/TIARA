/* Ghidra address: 017a67d0 */
/* Ghidra symbol: FUN_017a67d0 */


bool FUN_017a67d0(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  
  lVar5 = FUN_006dd580(param_2);
  if (*(int *)(lVar5 + 0x18) != 0x66) {
    cVar2 = FUN_017a67a0(param_1,lVar5,0x65);
    if ((cVar2 == '\0') && (iVar3 = FUN_006dd8c0(lVar5), iVar3 != 0)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6 == false) {
      iVar3 = FUN_006dd8c0(lVar5);
      while ((lVar5 != 0 && (iVar4 = FUN_006dd8c0(lVar5), iVar4 == iVar3))) {
        lVar5 = FUN_006dd3e0(lVar5);
      }
      bVar6 = lVar5 != 0;
    }
    return bVar6;
  }
  uVar1 = FUN_017a67a0(param_1,lVar5,0x66);
  return (bool)uVar1;
}

