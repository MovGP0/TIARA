/* Ghidra address: 0065c310 */
/* Ghidra symbol: FUN_0065c310 */


void FUN_0065c310(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00640c18);
  if (cVar1 == '\0') {
    cVar1 = FUN_004113d0(param_2,&PTR_FUN_0063d930);
    if (cVar1 != '\0') {
      FUN_0064e230(param_2,param_3);
    }
  }
  else {
    FUN_0065b270(param_2,param_3);
  }
  return;
}

