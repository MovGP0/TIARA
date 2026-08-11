/* Ghidra address: 0084bf40 */
/* Ghidra symbol: FUN_0084bf40 */


void FUN_0084bf40(longlong param_1,int param_2,undefined8 param_3)

{
  undefined8 local_10;
  
  local_10 = 0;
  if (param_2 < 0) {
    FUN_0041ddd0(&local_10,PTR_PTR_02004940);
    FUN_004ae910(&PTR_FUN_00472dd0,local_10,(longlong)param_2);
  }
  FUN_0084b650(*(undefined8 *)(param_1 + 8),param_2,param_3);
  *(int *)(param_1 + 0x10) = *(int *)(*(longlong *)(param_1 + 8) + 0x18) + 1;
  FUN_00414480(&local_10);
  return;
}

