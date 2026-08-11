/* Ghidra address: 0081a500 */
/* Ghidra symbol: FUN_0081a500 */


void FUN_0081a500(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  
  uVar1 = FUN_0065b870(*(undefined8 *)(param_1 + 0x10));
  lVar2 = thunk_FUN_041ed8e5(uVar1);
  if (lVar2 == *(longlong *)(param_2 + 8)) {
    cVar3 = FUN_00818440(param_1);
    if (cVar3 != '\0') {
      uVar1 = FUN_0065b870(*(undefined8 *)(param_1 + 0x10));
      thunk_FUN_039aab05(uVar1,0);
    }
  }
  return;
}

