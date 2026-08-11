/* Ghidra address: 0194e190 */
/* Ghidra symbol: FUN_0194e190 */


undefined8 FUN_0194e190(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  cVar1 = FUN_004113d0(param_1,&PTR_FUN_01920448);
  if (cVar1 == '\0') {
    cVar1 = FUN_004113d0(param_1,&PTR_FUN_01920928);
    if (cVar1 != '\0') {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

