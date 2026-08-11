/* Ghidra address: 01b745e0 */
/* Ghidra symbol: FUN_01b745e0 */


void FUN_01b745e0(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(longlong *)(param_1 + 0x748) != 0) {
    uVar2 = FUN_00c56640(*(undefined8 *)(param_1 + 0x708));
    FUN_00c56db0(*(undefined8 *)(param_1 + 0x708),0xffffffff);
    lVar1 = *(longlong *)(param_1 + 0x700);
    if (-1 < *(int *)(lVar1 + 0x4ac)) {
      iVar3 = FUN_0084e390(lVar1,1,*(int *)(lVar1 + 0x4ac));
      if (iVar3 / 1000 == 1) {
        iVar3 = FUN_0084e390(lVar1,1,*(undefined4 *)(lVar1 + 0x4ac));
        *(undefined4 *)(*(longlong *)(param_1 + 0x748) + 0x104 + (longlong)(iVar3 + -1000) * 4) =
             uVar2;
      }
      else if (iVar3 / 1000 == 3) {
        iVar3 = FUN_0084e390(lVar1,1,*(undefined4 *)(lVar1 + 0x4ac));
        *(undefined4 *)(*(longlong *)(param_1 + 0x748) + 0x174 + (longlong)(iVar3 + -3000) * 8) =
             uVar2;
      }
    }
    FUN_0064e770(lVar1);
    FUN_01b75500(param_1);
  }
  return;
}

