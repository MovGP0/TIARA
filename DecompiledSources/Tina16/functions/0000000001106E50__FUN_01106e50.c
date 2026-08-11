/* Ghidra address: 01106e50 */
/* Ghidra symbol: FUN_01106e50 */


void FUN_01106e50(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  FUN_01107120(param_1,param_2);
  lVar1 = FUN_004113f0(param_2,&PTR_FUN_011057c0);
  FUN_00414ad0(param_1 + 0x110,*(undefined8 *)(lVar1 + 0x110));
  FUN_00414ad0(param_1 + 0x118,*(undefined8 *)(lVar1 + 0x118));
  return;
}

