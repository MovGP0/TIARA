/* Ghidra address: 01663340 */
/* Ghidra symbol: FUN_01663340 */


void FUN_01663340(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = 0;
  if (*(longlong *)(param_1 + 0x230) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x230) + -8);
  }
  iVar2 = *(int *)(param_1 + 0x238) + param_3;
  if (lVar1 < iVar2) {
    FUN_00419260(param_1 + 0x230,&DAT_0165ba60,1,(longlong)(iVar2 * 2 + 100));
  }
  for (; 0 < param_3; param_3 = param_3 + -1) {
    *(int *)(*(longlong *)(param_1 + 0x230) + (longlong)*(int *)(param_1 + 0x238) * 4) = param_2;
    param_2 = param_2 + 1;
    *(int *)(param_1 + 0x238) = *(int *)(param_1 + 0x238) + 1;
  }
  return;
}

