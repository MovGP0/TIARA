/* Ghidra address: 01c1e7a0 */
/* Ghidra symbol: FUN_01c1e7a0 */


undefined8 * FUN_01c1e7a0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  
  FUN_00414ad0(param_2,param_3);
  iVar1 = FUN_004170c0(L"http://",*param_2,1);
  if (iVar1 == 1) {
    FUN_00416e20(param_2,1,7);
  }
  iVar1 = FUN_004170c0(L"https://",*param_2,1);
  if (iVar1 == 1) {
    FUN_00416e20(param_2,1,8);
  }
  return param_2;
}

