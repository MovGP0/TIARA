/* Ghidra address: 01be5010 */
/* Ghidra symbol: FUN_01be5010 */


void FUN_01be5010(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  
  iVar2 = FUN_008080c0();
  iVar6 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar4 = FUN_008080a0(*(undefined8 *)PTR_DAT_02005950,iVar6);
      cVar1 = FUN_0065be20(uVar4);
      if (cVar1 != '\0') {
        uVar5 = FUN_0065b870(uVar4);
        iVar3 = thunk_FUN_0419e3da(uVar5);
        if (iVar3 != 0) {
          uVar5 = FUN_0065b870(uVar4);
          iVar3 = thunk_FUN_03986dbd(uVar5);
          if (iVar3 != 0) {
            FUN_0064fca0(uVar4,0xb045,0,0);
          }
        }
      }
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

