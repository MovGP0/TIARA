/* Ghidra address: 00eba890 */
/* Ghidra symbol: FUN_00eba890 */


void FUN_00eba890(void)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  if (DAT_0202ea90 != (longlong *)0x0) {
    iVar2 = (**(code **)(*DAT_0202ea90 + 0x28))();
    iVar4 = 0;
    if (-1 < iVar2 + -1) {
      do {
        uVar3 = (**(code **)(*DAT_0202ea90 + 0x30))(DAT_0202ea90,iVar4);
        FUN_00410f20(uVar3);
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    plVar1 = DAT_0202ea90;
    DAT_0202ea90 = (longlong *)0x0;
    FUN_00410f20(plVar1);
  }
  return;
}

