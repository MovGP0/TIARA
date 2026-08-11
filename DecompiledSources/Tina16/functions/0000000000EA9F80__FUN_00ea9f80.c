/* Ghidra address: 00ea9f80 */
/* Ghidra symbol: FUN_00ea9f80 */


undefined8 FUN_00ea9f80(undefined8 param_1,short *param_2)

{
  int iVar1;
  undefined4 uVar2;
  short *local_res10 [3];
  undefined8 local_10;
  
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  if (*local_res10[0] == 0x22) {
    FUN_00416e20(local_res10,1,1);
  }
  iVar1 = 0;
  if (local_res10[0] != (short *)0x0) {
    iVar1 = *(int *)(local_res10[0] + -2);
  }
  if (local_res10[0][(longlong)iVar1 + -1] == 0x22) {
    uVar2 = 0;
    if (local_res10[0] != (short *)0x0) {
      uVar2 = *(undefined4 *)(local_res10[0] + -2);
    }
    FUN_00416e20(local_res10,uVar2,1);
  }
  FUN_00450070(&local_10,local_res10[0],&DAT_00eaa094,&DAT_00eaa0a8,1);
  FUN_00414b50(local_res10,local_10);
  FUN_0043ea00(param_1,local_res10[0]);
  FUN_00414480(&local_10);
  FUN_00414480(local_res10);
  return param_1;
}

