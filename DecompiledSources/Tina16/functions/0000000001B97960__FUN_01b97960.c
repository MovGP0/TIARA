/* Ghidra address: 01b97960 */
/* Ghidra symbol: FUN_01b97960 */


void FUN_01b97960(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = FUN_006decb0(*(undefined8 *)(*(longlong *)(param_1 + 0x7e8) + 0x550));
  if (param_2 < iVar2) {
    lVar1 = *(longlong *)(param_1 + 0x7e8);
    uVar3 = FUN_006df500(*(undefined8 *)(lVar1 + 0x550),param_2);
    FUN_006e2590(lVar1,uVar3);
    uVar3 = FUN_006e2530(*(undefined8 *)(param_1 + 0x7e8));
    FUN_01b960b0(param_1,uVar3);
  }
  return;
}

