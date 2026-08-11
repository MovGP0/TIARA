/* Ghidra address: 0164abb0 */
/* Ghidra symbol: FUN_0164abb0 */


void FUN_0164abb0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res10 [3];
  undefined8 local_10;
  
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar1 = FUN_004170c0(&LAB_0164aca4,local_res10[0],1);
  if (iVar1 == 0) {
    FUN_0043f750(&local_10,*(undefined4 *)(param_1 + 0xc));
    FUN_00416cd0(local_res10,3,local_res10[0],&LAB_0164aca4,local_10);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  }
  uVar2 = FUN_0164a680(&DAT_0161fa38,1,local_res10[0],param_3);
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x10),uVar2);
  FUN_00414480(&local_10);
  FUN_00414480(local_res10);
  return;
}

