/* Ghidra address: 00cd89e0 */
/* Ghidra symbol: FUN_00cd89e0 */


void FUN_00cd89e0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00476820);
  if ((cVar1 != '\0') && (cVar1 = FUN_004113d0(param_2,&PTR_FUN_00cd7e78), cVar1 == '\0')) {
    FUN_00cd8a40(param_1,param_2);
    return;
  }
  FUN_004b1190(param_1,param_2);
  return;
}

