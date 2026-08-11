/* Ghidra address: 00649ed0 */
/* Ghidra symbol: FUN_00649ed0 */


undefined8 FUN_00649ed0(void)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  lVar1 = *(longlong *)(DAT_02012300 + 0x20);
  if ((((lVar1 != 0) && (*(char *)(lVar1 + 0x392) != '\0')) && (*(longlong *)(lVar1 + 0x338) != 0))
     && (iVar2 = FUN_00659110(lVar1), uVar4 = 0, iVar2 != 0)) {
    iVar2 = FUN_00659110(lVar1);
    if ((iVar2 == 1) &&
       (lVar3 = FUN_004aeac0(*(undefined8 *)(lVar1 + 0x338),0),
       lVar3 == *(longlong *)(DAT_02012300 + 0x50))) {
      return 0;
    }
    lVar3 = FUN_0064acf0(DAT_02012300 + 0x18,0);
    while( true ) {
      if (lVar3 == 0) {
        return 0;
      }
      if (lVar3 == lVar1) {
        return 0;
      }
      iVar2 = FUN_004aeba0(*(undefined8 *)(lVar1 + 0x338),lVar3);
      if (iVar2 != -1) break;
      lVar3 = *(longlong *)(lVar3 + 0x78);
    }
    uVar4 = FUN_00659130(lVar1,iVar2);
  }
  return uVar4;
}

