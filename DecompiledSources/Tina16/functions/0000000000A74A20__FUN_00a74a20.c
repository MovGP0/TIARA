/* Ghidra address: 00a74a20 */
/* Ghidra symbol: FUN_00a74a20 */


void FUN_00a74a20(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00a74940(param_1);
  if (param_2 != iVar1) {
    FUN_004169f0(param_1 + 8,param_2);
    FUN_00419260(param_1 + 0x10,&DAT_00a6b5f8,1,(longlong)(param_2 + 1));
  }
  return;
}

