/* Ghidra address: 00f03600 */
/* Ghidra symbol: FUN_00f03600 */


void FUN_00f03600(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_res10 [3];
  undefined8 local_10;
  
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  if ((*(ushort *)(param_1 + 0x4f) & 0x400) == 0) {
    FUN_00f02f60(param_1,&local_10);
    iVar1 = FUN_00416db0(local_res10[0],local_10);
    if (iVar1 == 0) goto LAB_00f0366e;
  }
  FUN_00414ad0(param_1 + 0x38,local_res10[0]);
  *(ushort *)(param_1 + 0x4f) = *(ushort *)(param_1 + 0x4f) | 0x400;
LAB_00f0366e:
  FUN_004b1830(param_1,0);
  FUN_00414480(&local_10);
  FUN_00414480(local_res10);
  return;
}

