/* Ghidra address: 00604d60 */
/* Ghidra symbol: FUN_00604d60 */


void FUN_00604d60(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  if (param_2 == 0) {
    FUN_00603f70(param_1,0);
  }
  else {
    cVar1 = FUN_004113d0(param_2,&DAT_005f7500);
    if (cVar1 == '\0') {
      cVar1 = FUN_004113d0(param_2,&PTR_FUN_005f6910);
      if (cVar1 == '\0') {
        FUN_004b1060(param_1,param_2);
      }
      else {
        FUN_00603f70(param_1,param_2);
      }
    }
    else {
      FUN_00603f70(param_1,*(undefined8 *)(param_2 + 0x18));
    }
  }
  return;
}

