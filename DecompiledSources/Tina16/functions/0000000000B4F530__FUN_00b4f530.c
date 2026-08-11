/* Ghidra address: 00b4f530 */
/* Ghidra symbol: FUN_00b4f530 */


undefined8 FUN_00b4f530(longlong param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00b15900(&local_10,*(undefined8 *)(param_1 + 0x40),&LAB_00b4f5b4);
  FUN_00b15310(param_2,local_10);
  FUN_004144d0(&local_10);
  return param_2;
}

