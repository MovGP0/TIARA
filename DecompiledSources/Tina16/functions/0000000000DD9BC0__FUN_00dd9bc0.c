/* Ghidra address: 00dd9bc0 */
/* Ghidra symbol: FUN_00dd9bc0 */


void FUN_00dd9bc0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00dd8228);
  if (cVar1 == '\0') {
    FUN_004b1060(param_1,param_2);
  }
  else {
    FUN_0041b840(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48));
  }
  return;
}

