/* Ghidra address: 019806c0 */
/* Ghidra symbol: FUN_019806c0 */


void FUN_019806c0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = FUN_01980680(param_1);
  if (lVar1 != param_2) {
    iVar2 = FUN_004aeba0(*(undefined8 *)(param_1 + 0x10),param_2);
    if (iVar2 < 0) {
      iVar2 = FUN_004ae7e0(*(undefined8 *)(param_1 + 0x10),param_2);
    }
    FUN_01980710(param_1,iVar2);
  }
  return;
}

