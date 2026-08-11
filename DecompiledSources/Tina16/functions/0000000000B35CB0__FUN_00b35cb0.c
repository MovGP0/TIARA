/* Ghidra address: 00b35cb0 */
/* Ghidra symbol: FUN_00b35cb0 */


void FUN_00b35cb0(longlong param_1,undefined8 param_2)

{
  undefined8 local_18;
  short local_a;
  
  local_18 = 0;
  FUN_004144d0(param_2);
  FUN_00b256e0(*(undefined8 *)(param_1 + 0x68),&local_a);
  FUN_00b257f0(*(undefined8 *)(param_1 + 0x68),2);
  if (local_a != 0) {
    FUN_00415d10(&local_18,local_a,0);
    FUN_00b257a0(*(undefined8 *)(param_1 + 0x68),&local_18,local_a);
    FUN_00414bf0(param_2,local_18);
  }
  FUN_004144d0(&local_18);
  return;
}

