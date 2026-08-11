/* Ghidra address: 0164a4e0 */
/* Ghidra symbol: FUN_0164a4e0 */


void FUN_0164a4e0(longlong param_1,int param_2)

{
  int iVar1;
  
  FUN_00419260(param_1 + 0x13958,&DAT_01623328,1,(longlong)param_2);
  iVar1 = 0;
  if (-1 < param_2 + -1) {
    do {
      *(int *)(*(longlong *)(param_1 + 0x13958) + (longlong)iVar1 * 4) = iVar1;
      iVar1 = iVar1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

