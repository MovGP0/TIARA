/* Ghidra address: 0060d830 */
/* Ghidra symbol: FUN_0060d830 */


void FUN_0060d830(longlong param_1,longlong *param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_005f92e8);
  if (cVar1 == '\0') {
    FUN_004b1190(param_1,param_2);
  }
  else {
    FUN_0060e650(param_1);
    (**(code **)(*param_2 + 0x10))(param_2,*(undefined8 *)(param_1 + 0x50));
  }
  return;
}

