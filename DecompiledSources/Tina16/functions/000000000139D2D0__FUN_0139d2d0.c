/* Ghidra address: 0139d2d0 */
/* Ghidra symbol: FUN_0139d2d0 */


void FUN_0139d2d0(void)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_48 [32];
  
  FUN_0199e310(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),0,1,0);
  FUN_01c6cf20(*(undefined8 *)PTR_DAT_02004e40);
  lVar4 = 0;
  lVar1 = *(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8);
  iVar6 = *(int *)(lVar1 + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      uVar3 = FUN_00b94e60(lVar1,iVar5);
      cVar2 = FUN_0139d270(auStack_48,uVar3);
      if (cVar2 != '\0') {
        lVar4 = FUN_00b94e60(lVar1,iVar5);
        break;
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (lVar4 != 0) {
    FUN_01994230(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
    *(undefined1 *)(lVar4 + 10) = 1;
    FUN_019946d0(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
  }
  return;
}

