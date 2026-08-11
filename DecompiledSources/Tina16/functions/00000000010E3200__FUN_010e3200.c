/* Ghidra address: 010e3200 */
/* Ghidra symbol: FUN_010e3200 */


undefined8 FUN_010e3200(void)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    uVar3 = FUN_00808070(*(undefined8 *)PTR_DAT_02005950,iVar4);
    cVar1 = FUN_004113d0(uVar3,&PTR_FUN_010dee68);
    if (cVar1 != '\0') {
      uVar3 = FUN_00808070(*(undefined8 *)PTR_DAT_02005950,iVar4);
      uVar3 = FUN_0065b870(uVar3);
      iVar2 = thunk_FUN_041de4d6(uVar3);
      if (iVar2 != 0) {
        uVar3 = FUN_00808070(*(undefined8 *)PTR_DAT_02005950,iVar4);
        FUN_004113f0(uVar3,&PTR_FUN_010dee68);
        return 1;
      }
    }
    iVar4 = iVar4 + 1;
    iVar2 = FUN_00808090(*(undefined8 *)PTR_DAT_02005950);
  } while (iVar4 < iVar2);
  return 0;
}

