/* Ghidra address: 01b1e700 */
/* Ghidra symbol: FUN_01b1e700 */


bool FUN_01b1e700(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  
  cVar2 = FUN_0198a580(param_2);
  bVar7 = cVar2 != '\x04';
  if (!bVar7) {
    lVar4 = 0;
    lVar1 = *(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8);
    iVar5 = 0;
    iVar6 = *(int *)(lVar1 + 0x10);
    if (-1 < iVar6 + -1) {
      do {
        uVar3 = FUN_00b94e60(lVar1,iVar5);
        cVar2 = FUN_01b1e5d0(auStack_48,uVar3);
        if (cVar2 != '\0') {
          lVar4 = FUN_00b94e60(lVar1,iVar5);
          break;
        }
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    bVar7 = lVar4 == 0;
  }
  return bVar7;
}

