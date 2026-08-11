/* Ghidra address: 00a06120 */
/* Ghidra symbol: FUN_00a06120 */


undefined8 FUN_00a06120(longlong param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_004147f0(&local_10,*(undefined8 *)(param_1 + 0x20),6,0);
  FUN_00414bf0(param_2,local_10);
  FUN_004144d0(&local_10);
  return param_2;
}

