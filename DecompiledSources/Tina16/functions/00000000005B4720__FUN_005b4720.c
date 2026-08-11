/* Ghidra address: 005b4720 */
/* Ghidra symbol: FUN_005b4720 */


void FUN_005b4720(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  
  FUN_004d2dc0(param_1,param_2,param_3);
  if ((char)param_3 == '\x01') {
    cVar1 = FUN_004113d0(param_2,&PTR_FUN_005aebf0);
    if (cVar1 != '\0') {
      FUN_005b4770(param_1,param_2);
    }
  }
  return;
}

