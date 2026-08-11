/* Ghidra address: 00726bd0 */
/* Ghidra symbol: FUN_00726bd0 */


undefined8 FUN_00726bd0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  iVar2 = 0;
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + -4);
  }
  uVar1 = thunk_FUN_04183578(iVar2 * 2 + 2);
  FUN_004168e0(local_20,param_1);
  uVar1 = FUN_00711360(uVar1,local_20[0],iVar2);
  FUN_00414520(local_20);
  return uVar1;
}

