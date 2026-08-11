/* Ghidra address: 004d4400 */
/* Ghidra symbol: FUN_004d4400 */


void FUN_004d4400(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_004114b0(param_2,&PTR_FUN_00486c78);
  if (cVar2 == '\0') {
    uVar1 = FUN_00411420(param_2,&PTR_FUN_00486770);
    FUN_004d6cf0(uVar1);
  }
  else {
    uVar1 = FUN_00411420(param_2,&PTR_FUN_00486c78);
    FUN_004d7080(uVar1);
  }
  return;
}

