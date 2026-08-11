/* Ghidra address: 00a74dc0 */
/* Ghidra symbol: FUN_00a74dc0 */


void FUN_00a74dc0(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00a74da0(param_1);
  if (param_2 != iVar1) {
    FUN_00419260(param_1 + 0x18,&DAT_00a6b9d0,1,(longlong)(param_2 + 1));
    FUN_00419260(param_1 + 0x20,&DAT_00a6ba18,1,(longlong)(param_2 + 1));
    if ((param_2 < *(int *)(param_1 + 0x14)) &&
       (*(int *)(param_1 + 0x14) = param_2, *(char *)(param_1 + 0x10) != '\0')) {
      FUN_00416dc0(param_1 + 8,*(undefined8 *)(param_1 + 8),1,param_2);
    }
  }
  return;
}

