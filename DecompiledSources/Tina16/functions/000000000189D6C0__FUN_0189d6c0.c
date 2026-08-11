/* Ghidra address: 0189d6c0 */
/* Ghidra symbol: FUN_0189d6c0 */


void FUN_0189d6c0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 != 0) {
    iVar2 = FUN_004b2060();
    iVar3 = 0;
    if (-1 < iVar2 + -1) {
      do {
        lVar1 = FUN_0189d6b0(param_1,iVar3);
        if (*(longlong *)(lVar1 + 0x18) == param_2) {
          return;
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    lVar1 = FUN_004b1ca0(param_1);
    *(longlong *)(lVar1 + 0x18) = param_2;
  }
  return;
}

