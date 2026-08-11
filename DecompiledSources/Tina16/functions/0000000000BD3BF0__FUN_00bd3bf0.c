/* Ghidra address: 00bd3bf0 */
/* Ghidra symbol: FUN_00bd3bf0 */


void FUN_00bd3bf0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    lVar1 = param_2 + 0x70 + (longlong)iVar3 * 0x18;
    lVar2 = *(longlong *)(lVar1 + 8);
    if (lVar2 != 0) {
      thunk_FUN_0416f828(lVar2);
      *(undefined8 *)(lVar1 + 8) = 0;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x10);
  return;
}

