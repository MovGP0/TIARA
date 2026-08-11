/* Ghidra address: 012bec10 */
/* Ghidra symbol: FUN_012bec10 */


int FUN_012bec10(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10) + -1;
  if (iVar2 < param_2) {
    param_2 = iVar2;
  }
  iVar3 = 0;
  iVar2 = 0;
  if (-1 < param_2) {
    param_2 = param_2 + 1;
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),iVar2);
      iVar3 = iVar3 + *(short *)(lVar1 + 8);
      iVar2 = iVar2 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return iVar3;
}

