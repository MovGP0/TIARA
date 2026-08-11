/* Ghidra address: 01107b50 */
/* Ghidra symbol: FUN_01107b50 */


void FUN_01107b50(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  FUN_01107120(param_1,param_2);
  lVar1 = FUN_004113f0(param_2,&PTR_FUN_01106728);
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(lVar1 + 0x140);
  return;
}

