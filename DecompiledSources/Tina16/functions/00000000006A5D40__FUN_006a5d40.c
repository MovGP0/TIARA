/* Ghidra address: 006a5d40 */
/* Ghidra symbol: FUN_006a5d40 */


void FUN_006a5d40(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&DAT_005f7500);
  if (cVar1 == '\0') {
    cVar1 = FUN_004113d0(param_2,&PTR_FUN_005f6910);
    if (cVar1 == '\0') {
      FUN_004b1060(param_1,param_2);
    }
    else {
      FUN_006a5c90(param_1,param_2);
    }
  }
  else {
    FUN_006a5be0(param_1,param_2);
  }
  return;
}

