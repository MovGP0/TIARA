/* Ghidra address: 01c02d10 */
/* Ghidra symbol: FUN_01c02d10 */


undefined8 FUN_01c02d10(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x498);
  cVar2 = FUN_004113d0(lVar1,&PTR_FUN_01bee940);
  if ((cVar2 == '\0') || (*(char *)(lVar1 + 0x70) == '\0')) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

