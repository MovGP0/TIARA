/* Ghidra address: 016352a0 */
/* Ghidra symbol: FUN_016352a0 */


undefined8 FUN_016352a0(void)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  lVar1 = FUN_016353c0();
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  iVar5 = *(int *)(lVar1 + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar3 = FUN_004aeac0(lVar1,iVar4);
      if (*(char *)(lVar3 + 8) == '4') {
        FUN_004ae7e0(uVar2,lVar3);
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return uVar2;
}

