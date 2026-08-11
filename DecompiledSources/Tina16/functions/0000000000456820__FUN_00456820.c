/* Ghidra address: 00456820 */
/* Ghidra symbol: FUN_00456820 */


void FUN_00456820(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = 0;
  lVar1 = *param_1;
  if (lVar1 != 0) {
    iVar2 = *(int *)(lVar1 + -4);
  }
  uVar3 = 0;
  if (lVar1 != 0) {
    uVar3 = *(undefined4 *)(lVar1 + -4);
  }
  FUN_00456900(param_1,param_2,iVar2 + -1,uVar3);
  return;
}

