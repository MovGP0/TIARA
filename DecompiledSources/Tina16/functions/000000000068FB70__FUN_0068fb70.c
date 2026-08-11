/* Ghidra address: 0068fb70 */
/* Ghidra symbol: FUN_0068fb70 */


undefined8 FUN_0068fb70(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  lVar1 = *(longlong *)(param_1 + 0x10);
  cVar2 = FUN_004113d0(lVar1,&PTR_FUN_00679048);
  if ((cVar2 != '\0') && (*(char *)(lVar1 + 0x390) != '\0')) {
    uVar3 = 1;
  }
  return uVar3;
}

