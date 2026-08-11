/* Ghidra address: 00602150 */
/* Ghidra symbol: FUN_00602150 */


void FUN_00602150(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_005f6910);
  if (cVar1 == '\0') {
    FUN_004110f0(param_1,param_2);
  }
  else {
    (**(code **)(*param_1 + 0x38))(param_1,param_2);
  }
  return;
}

