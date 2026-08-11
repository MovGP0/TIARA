/* Ghidra address: 01870e20 */
/* Ghidra symbol: FUN_01870e20 */


undefined8 FUN_01870e20(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = 0;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xf0);
  do {
    lVar4 = lVar1;
    lVar1 = *(longlong *)(lVar4 + 0xf0);
    if (lVar1 == 0) break;
    cVar2 = FUN_004113d0(lVar4,&PTR_FUN_0192d4e8);
  } while (cVar2 == '\0');
  cVar2 = FUN_004113d0(lVar4,&PTR_FUN_0192d4e8);
  if (cVar2 != '\0') {
    uVar3 = *(undefined8 *)(lVar4 + 600);
  }
  return uVar3;
}

