/* Ghidra address: 017a6600 */
/* Ghidra symbol: FUN_017a6600 */


undefined8 FUN_017a6600(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  FUN_0043f750(&local_18,*(undefined4 *)(param_1 + 0x7b8));
  FUN_00416ba0(&local_10,L"Group #",local_18);
  uVar1 = FUN_006dee40(*(undefined8 *)(*(longlong *)(param_1 + 0x6f0) + 0x550),param_2,local_10);
  FUN_006dd070(param_2,1);
  FUN_006dcbd0(uVar1,0xffffffff);
  FUN_006dc990(uVar1,0x65);
  *(int *)(param_1 + 0x7b8) = *(int *)(param_1 + 0x7b8) + 1;
  FUN_00414560(&local_18,2);
  return uVar1;
}

