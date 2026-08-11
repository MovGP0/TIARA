/* Ghidra address: 016cba70 */
/* Ghidra symbol: FUN_016cba70 */


void FUN_016cba70(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 unaff_EDI;
  int iVar3;
  int iVar4;
  
  if (param_2 != 0) {
    iVar4 = *(int *)(param_2 + 0x10);
    iVar3 = 0;
    if (-1 < iVar4 + -1) {
      do {
        lVar2 = FUN_01d347d0(param_2,iVar3);
        uVar1 = *(undefined4 *)(lVar2 + 0x18);
        if (0 < iVar3) {
          FUN_016aef60(*(undefined8 *)(param_1 + 0x460),unaff_EDI,uVar1);
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
        unaff_EDI = uVar1;
      } while (iVar4 != 0);
    }
  }
  return;
}

