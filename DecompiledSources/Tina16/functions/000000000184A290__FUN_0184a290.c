/* Ghidra address: 0184a290 */
/* Ghidra symbol: FUN_0184a290 */


void FUN_0184a290(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 local_res10 [3];
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_28 = *param_3;
  uStack_20 = param_3[1];
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar1 = FUN_004170c0(&DAT_0184a364,local_res10[0],1);
  FUN_00416e20(local_res10,1,iVar1 + -1);
  FUN_00416cd0(local_res10,4,L"function",local_res10[0],&DAT_0184a394,L"Constructor");
  FUN_0184a4f0(param_1,local_res10[0],&local_28);
  FUN_00414480(local_res10);
  return;
}

