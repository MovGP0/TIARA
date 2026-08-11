/* Ghidra address: 00c8bf20 */
/* Ghidra symbol: FUN_00c8bf20 */


void FUN_00c8bf20(longlong param_1,undefined1 param_2,int param_3)

{
  if (param_3 < 0) {
    param_3 = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x30);
    FUN_00419260(param_1 + 8,&DAT_0086e978,1,(longlong)(param_3 + 1));
  }
  *(undefined1 *)(*(longlong *)(param_1 + 8) + (longlong)param_3) = param_2;
  if (*(int *)(param_1 + 0x30) <= param_3) {
    *(int *)(param_1 + 0x30) = param_3 + 1;
  }
  return;
}

