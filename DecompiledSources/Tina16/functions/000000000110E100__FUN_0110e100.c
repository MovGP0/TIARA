/* Ghidra address: 0110e100 */
/* Ghidra symbol: FUN_0110e100 */


void FUN_0110e100(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  
  iVar2 = FUN_00808090();
  iVar5 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar4 = FUN_00808070(*(undefined8 *)PTR_DAT_02005950,iVar5);
      cVar1 = FUN_004113d0(uVar4,&PTR_FUN_010dee68);
      if (cVar1 != '\0') {
        uVar4 = FUN_00808070(*(undefined8 *)PTR_DAT_02005950,iVar5);
        uVar4 = FUN_0065b870(uVar4);
        iVar3 = thunk_FUN_041de4d6(uVar4);
        if (iVar3 != 0) {
          uVar4 = FUN_00808070(*(undefined8 *)PTR_DAT_02005950,iVar5);
          uVar4 = FUN_0065b870(uVar4);
          thunk_FUN_0413e052(uVar4,0x1234,2,*(undefined8 *)(param_1 + 0x10));
        }
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

