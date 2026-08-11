/* Ghidra address: 004b2530 */
/* Ghidra symbol: FUN_004b2530 */


void FUN_004b2530(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  iVar2 = 0;
  if (*(longlong *)(lVar1 + 8) != 0) {
    iVar2 = (int)*(undefined8 *)(*(longlong *)(lVar1 + 8) + -8);
  }
  if (param_2 != iVar2) {
    if (param_2 < *(int *)(lVar1 + 0x10)) {
      FUN_0059b550(lVar1 + 8,param_2);
    }
    FUN_0059b400(lVar1 + 8,(longlong)param_2);
  }
  return;
}

