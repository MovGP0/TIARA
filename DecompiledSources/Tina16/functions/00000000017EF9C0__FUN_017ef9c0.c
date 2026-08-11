/* Ghidra address: 017ef9c0 */
/* Ghidra symbol: FUN_017ef9c0 */


void FUN_017ef9c0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = thunk_FUN_041da4fa();
  lVar2 = FUN_0065b870(param_1);
  if (lVar1 == lVar2) {
    FUN_00bf9d90(*(undefined8 *)(param_1 + 0x868));
  }
  else {
    uVar3 = thunk_FUN_041da4fa();
    thunk_FUN_0413e052(uVar3,0x302,0,0);
  }
  return;
}

