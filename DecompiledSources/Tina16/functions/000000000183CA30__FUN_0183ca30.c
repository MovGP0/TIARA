/* Ghidra address: 0183ca30 */
/* Ghidra symbol: FUN_0183ca30 */


void FUN_0183ca30(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  FUN_01836fd0(param_1,&local_10,param_2);
  uVar1 = FUN_0184f010(&PTR_FUN_01842b70,1,param_3,*(undefined8 *)(param_1 + 0x50),local_10);
  FUN_01847420(param_4,uVar1);
  FUN_01836fd0(param_1,&local_18,param_2);
  FUN_0184ee20(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x50),local_18);
  FUN_00414560(&local_18,2);
  return;
}

