/* Ghidra address: 01d3e870 */
/* Ghidra symbol: FUN_01d3e870 */


void FUN_01d3e870(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_00409da0(param_1,0);
  while( true ) {
    iVar3 = 0;
    lVar1 = *param_1;
    if (lVar1 != 0) {
      iVar3 = *(int *)(lVar1 + -4);
    }
    if (*(short *)(*param_1 + -2 + (longlong)iVar3 * 2) == 0x5c) break;
    uVar2 = 0;
    if (lVar1 != 0) {
      uVar2 = *(undefined4 *)(lVar1 + -4);
    }
    FUN_00416e20(param_1,uVar2,1);
  }
  return;
}

