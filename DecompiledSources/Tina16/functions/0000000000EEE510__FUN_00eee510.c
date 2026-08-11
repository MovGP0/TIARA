/* Ghidra address: 00eee510 */
/* Ghidra symbol: FUN_00eee510 */


undefined8 FUN_00eee510(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = param_3;
  uVar1 = FUN_004144d0(&local_18);
  FUN_00596620(param_1 + 8,&local_10,uVar1);
  FUN_00414bf0(param_2,local_18);
  FUN_004144d0(&local_18);
  return param_2;
}

