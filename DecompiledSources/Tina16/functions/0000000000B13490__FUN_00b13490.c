/* Ghidra address: 00b13490 */
/* Ghidra symbol: FUN_00b13490 */


void FUN_00b13490(longlong *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_18 = 0;
  local_10 = 0;
  FUN_00414480(&local_10);
  FUN_004b3700(param_1,&local_10,param_3,0);
  FUN_00414b50(&local_18,local_10);
  FUN_00414480(&local_10);
  iVar1 = (**(code **)(*param_1 + 0xb8))(param_1,local_18);
  FUN_00b12d30(param_1,local_18,iVar1 != param_2);
  FUN_004b6530(param_1,param_2,param_3);
  FUN_00414560(&local_18,2);
  return;
}

