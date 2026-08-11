/* Ghidra address: 00ac2dc0 */
/* Ghidra symbol: FUN_00ac2dc0 */


void FUN_00ac2dc0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  short sVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  
  FUN_00414ad0(param_1 + 200,param_3);
  while( true ) {
    lVar2 = *(longlong *)(param_1 + 200);
    iVar3 = 0;
    if (lVar2 != 0) {
      iVar3 = *(int *)(lVar2 + -4);
    }
    if (iVar3 < 1) {
      return;
    }
    iVar3 = 0;
    if (lVar2 != 0) {
      iVar3 = *(int *)(lVar2 + -4);
    }
    sVar1 = *(short *)(*(longlong *)(param_1 + 200) + -2 + (longlong)iVar3 * 2);
    if ((sVar1 != 10) && (sVar1 != 0xd)) break;
    uVar4 = 0;
    if (lVar2 != 0) {
      uVar4 = *(undefined4 *)(lVar2 + -4);
    }
    FUN_00416e20(param_1 + 200,uVar4,1);
  }
  return;
}

