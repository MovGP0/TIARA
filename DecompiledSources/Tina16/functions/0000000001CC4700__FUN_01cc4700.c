/* Ghidra address: 01cc4700 */
/* Ghidra symbol: FUN_01cc4700 */


void FUN_01cc4700(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(param_1 + 8);
  iVar3 = 0;
  iVar4 = param_3;
  if (-1 < param_3 + -1) {
    do {
      uVar2 = FUN_01d347d0(lVar1,*(int *)(lVar1 + 0x450) + iVar3);
      FUN_01cc1510(uVar2,0,*(undefined8 *)(param_2 + (longlong)iVar3 * 8));
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_01cc4120(param_1,param_2,param_3 << 3);
  return;
}

