/* Ghidra address: 0081a550 */
/* Ghidra symbol: FUN_0081a550 */


void FUN_0081a550(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  
  cVar3 = FUN_00818440(param_1);
  if (cVar3 != '\0') {
    uVar1 = FUN_0065b870(*(undefined8 *)(param_1 + 0x10));
    lVar2 = thunk_FUN_041ed8e5(uVar1);
    if (lVar2 != 0) {
      uVar1 = FUN_0065b870(*(undefined8 *)(param_1 + 0x10));
      thunk_FUN_039aab05(uVar1,0);
    }
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  return;
}

