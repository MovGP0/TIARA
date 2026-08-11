/* Ghidra address: 01802ea0 */
/* Ghidra symbol: FUN_01802ea0 */


void FUN_01802ea0(undefined8 param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  FUN_0043f750(&local_28,*(undefined2 *)(*param_2 + -2 + (longlong)param_3 * 2));
  FUN_00416cd0(local_20,3,&DAT_01802f68,local_28,&LAB_01802f78);
  FUN_00416ea0(local_20[0],param_2,param_3 + 1);
  lVar1 = FUN_00414de0(param_2);
  *(undefined2 *)(lVar1 + -2 + (longlong)param_3 * 2) = 0x26;
  FUN_00414560(&local_28,2);
  return;
}

