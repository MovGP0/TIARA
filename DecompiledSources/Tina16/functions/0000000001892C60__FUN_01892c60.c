/* Ghidra address: 01892c60 */
/* Ghidra symbol: FUN_01892c60 */


void FUN_01892c60(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_00651660(param_1);
  *(undefined1 *)((longlong)param_1 + 0x58c) = 1;
  cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
  if (cVar1 != '\0') {
    lVar2 = thunk_FUN_041da4fa();
    if (lVar2 != param_1[0x9f]) {
      cVar1 = FUN_006838c0(param_1);
      if (cVar1 == '\0') {
        uVar3 = FUN_0065b870(param_1);
        uVar3 = thunk_FUN_0411fe47(uVar3);
        FUN_01892620(param_1,uVar3,1);
        FUN_01892830(param_1,1);
        uVar4 = FUN_0065b870(param_1);
        thunk_FUN_041a9b5c(uVar4,uVar3);
      }
    }
  }
  return;
}

