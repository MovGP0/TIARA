/* Ghidra address: 0080ddd0 */
/* Ghidra symbol: FUN_0080ddd0 */


void FUN_0080ddd0(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = FUN_008080c0();
  iVar6 = 0;
  if (-1 < iVar4 + -1) {
    do {
      plVar1 = (longlong *)FUN_008080a0(DAT_02012670,iVar6);
      cVar3 = FUN_0065be20(plVar1);
      if (cVar3 != '\0') {
        uVar2 = FUN_0065b870(plVar1);
        iVar5 = thunk_FUN_0419e3da(uVar2);
        if (iVar5 != 0) {
          uVar2 = FUN_0065b870(plVar1);
          iVar5 = thunk_FUN_03986dbd(uVar2);
          if (iVar5 != 0) {
            (**(code **)(*plVar1 + 0x2b0))(plVar1);
          }
        }
      }
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

