/* Ghidra address: 00a98b10 */
/* Ghidra symbol: FUN_00a98b10 */


void FUN_00a98b10(undefined8 param_1,undefined8 param_2,short *param_3)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_009ea8d8);
  if ((cVar1 != '\0') && (*param_3 == 0xd)) {
    FUN_00a98c40(param_1,0);
    *param_3 = 0;
  }
  return;
}

