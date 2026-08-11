/* Ghidra address: 017117b0 */
/* Ghidra symbol: FUN_017117b0 */


void FUN_017117b0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_res10 [3];
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00416ba0(&local_10,local_res10[0],L"\\SPMACROS.IND");
  cVar1 = FUN_00440a20(local_10,1);
  if (cVar1 == '\0') {
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  else {
    FUN_00416ba0(&local_18,local_res10[0],L"\\SPMACROS.IND");
    uVar2 = FUN_01710b80(local_18);
    *(undefined8 *)(param_1 + 0xb0) = uVar2;
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_01711920(param_1,*(longlong *)(param_1 + 0xb0),param_1 + 0xb8,param_1 + 0xbc,param_1 + 0xc0,
                 param_1 + 0xc4,param_1 + 200);
  }
  FUN_00414560(&local_18,2);
  FUN_00414480(local_res10);
  return;
}

