/* Ghidra address: 00d7beb0 */
/* Ghidra symbol: FUN_00d7beb0 */


void FUN_00d7beb0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FUN_004113d0(param_2,&PTR_FUN_00d61110);
  if (cVar2 == '\0') {
    FUN_00d75b60(param_1,param_2);
  }
  else {
    FUN_00d75b60(param_1,param_2);
    lVar1 = FUN_004113f0(param_2,&PTR_FUN_00d61110);
    FUN_00414ad0(param_1 + 0x120,*(undefined8 *)(lVar1 + 0x120));
  }
  return;
}

