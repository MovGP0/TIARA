/* Ghidra address: 01799d60 */
/* Ghidra symbol: FUN_01799d60 */


undefined8 FUN_01799d60(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_1,&PTR_FUN_0066ac78);
  if ((((cVar1 == '\0') && (cVar1 = FUN_004113d0(param_1,&PTR_FUN_00676b98), cVar1 == '\0')) &&
      (cVar1 = FUN_004113d0(param_1,&PTR_FUN_0066cde0), cVar1 == '\0')) &&
     (cVar1 = FUN_004113d0(param_1,&PTR_FUN_0066f8b0), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}

