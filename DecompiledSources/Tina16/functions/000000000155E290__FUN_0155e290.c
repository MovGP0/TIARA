/* Ghidra address: 0155e290 */
/* Ghidra symbol: FUN_0155e290 */


void FUN_0155e290(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  undefined8 local_10;
  
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_004b84c0(*(undefined8 *)(param_1 + 0x60),param_1 + 0x4c,4);
  FUN_004414c0(&local_10,*(undefined8 *)(param_1 + 0x68),local_res10[0]);
  FUN_00414b50(param_1 + 0x68,local_10);
  FUN_0160b740(*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x4c),
               *(undefined8 *)(param_1 + 0x68));
  FUN_00414480(&local_10);
  FUN_00414480(local_res10);
  return;
}

