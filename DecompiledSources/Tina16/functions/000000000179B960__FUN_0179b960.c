/* Ghidra address: 0179b960 */
/* Ghidra symbol: FUN_0179b960 */


undefined8 FUN_0179b960(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(undefined8 *)PTR_DAT_02004c38;
  iVar6 = *(int *)(*(longlong *)(param_1 + 0xd10) + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar5);
      cVar2 = FUN_004113d0(uVar3,&PTR_FUN_017aaf70);
      if (cVar2 != '\0') {
        lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar5);
        return *(undefined8 *)(lVar4 + 0x18);
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return uVar1;
}

