/* Ghidra address: 0151e020 */
/* Ghidra symbol: FUN_0151e020 */


void FUN_0151e020(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = param_1[0x1d9];
  cVar2 = FUN_004113d0(lVar1,&PTR_FUN_01514820);
  if (cVar2 != '\0') {
    FUN_004113f0(lVar1,&PTR_FUN_01514820);
    (**(code **)(*param_1 + 0x498))(param_1,param_2);
  }
  return;
}

