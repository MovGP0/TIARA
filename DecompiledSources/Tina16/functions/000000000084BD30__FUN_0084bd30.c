/* Ghidra address: 0084bd30 */
/* Ghidra symbol: FUN_0084bd30 */


undefined8 FUN_0084bd30(longlong param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  if (param_2 < 0) {
    FUN_0041ddd0(&local_10,PTR_PTR_02004940);
    FUN_004ae910(&PTR_FUN_00472dd0,local_10,(longlong)param_2);
  }
  uVar1 = FUN_0084b550(*(undefined8 *)(param_1 + 8),param_2);
  FUN_00414480(&local_10);
  return uVar1;
}

