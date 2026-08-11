/* Ghidra address: 018ae0b0 */
/* Ghidra symbol: FUN_018ae0b0 */


undefined8 FUN_018ae0b0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  uVar2 = FUN_018af290(*(undefined8 *)(param_1 + 0x90));
  lVar3 = FUN_01951400(uVar2);
  iVar6 = *(int *)(lVar3 + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      lVar4 = FUN_004aeac0(lVar3,iVar5);
      cVar1 = FUN_004113d0(lVar4,&PTR_FUN_019317f0);
      if ((cVar1 != '\0') && (*(char *)(lVar4 + 0x250) != '\0')) {
        return 1;
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return 0;
}

