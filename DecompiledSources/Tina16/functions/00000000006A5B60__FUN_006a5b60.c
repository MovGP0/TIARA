/* Ghidra address: 006a5b60 */
/* Ghidra symbol: FUN_006a5b60 */


void FUN_006a5b60(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&DAT_005f7500);
  if (cVar1 == '\0') {
    cVar1 = FUN_004113d0(param_2,&PTR_FUN_005f92e8);
    if (cVar1 == '\0') {
      cVar1 = FUN_004113d0(param_2,&PTR_FUN_005f86c8);
      if (cVar1 == '\0') {
        FUN_004b1190(param_1,param_2);
      }
      else {
        FUN_006a5ac0(param_1,param_2);
      }
    }
    else {
      FUN_006a5a20(param_1,param_2);
    }
  }
  else {
    FUN_006a5920(param_1,param_2);
  }
  return;
}

