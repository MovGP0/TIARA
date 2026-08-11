/* Ghidra address: 00648c90 */
/* Ghidra symbol: FUN_00648c90 */


longlong FUN_00648c90(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = FUN_0065b870(*(undefined8 *)(param_1 + 0x68));
  lVar3 = lVar1;
  while (lVar2 = lVar1, lVar2 != 0) {
    lVar1 = thunk_FUN_03de17fb(lVar2);
    lVar3 = lVar2;
  }
  return lVar3;
}

