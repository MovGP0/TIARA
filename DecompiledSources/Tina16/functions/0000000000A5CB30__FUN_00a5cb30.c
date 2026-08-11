/* Ghidra address: 00a5cb30 */
/* Ghidra symbol: FUN_00a5cb30 */


undefined8 FUN_00a5cb30(longlong param_1,undefined8 param_2)

{
  undefined4 local_20 [2];
  undefined1 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_20[0] = *(undefined4 *)(param_1 + 0x78);
  local_18 = 0;
  FUN_00442f70(&local_10,L"%.5d",local_20,0);
  FUN_009ec420(param_2,local_10);
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
  FUN_00414480(&local_10);
  return param_2;
}

