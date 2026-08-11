/* Ghidra address: 00900280 */
/* Ghidra symbol: FUN_00900280 */


undefined8 FUN_00900280(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00416420(param_1,&PTR_DAT_009002f8);
  if ((((iVar1 != 0) && (iVar1 = FUN_00416420(param_1,&PTR_DAT_00900304), iVar1 != 0)) &&
      (iVar1 = FUN_00416420(param_1,&DAT_00900310), iVar1 != 0)) &&
     ((iVar1 = FUN_00416420(param_1,L"apos"), iVar1 != 0 &&
      (iVar1 = FUN_00416420(param_1,L"quot"), iVar1 != 0)))) {
    return 0;
  }
  return 1;
}

