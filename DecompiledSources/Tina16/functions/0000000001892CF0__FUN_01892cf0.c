/* Ghidra address: 01892cf0 */
/* Ghidra symbol: FUN_01892cf0 */


void FUN_01892cf0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_006516f0(param_1);
  *(undefined1 *)((longlong)param_1 + 0x58c) = 0;
  cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
  if (cVar1 != '\0') {
    lVar2 = thunk_FUN_041da4fa();
    if (lVar2 != param_1[0x9f]) {
      cVar1 = FUN_006838c0(param_1);
      if (cVar1 == '\0') {
        uVar3 = FUN_0065b870(param_1);
        uVar3 = thunk_FUN_0411fe47(uVar3);
        FUN_01892620(param_1,uVar3,0);
        FUN_01892830(param_1,0);
        uVar4 = FUN_0065b870(param_1);
        thunk_FUN_041a9b5c(uVar4,uVar3);
      }
    }
  }
  return;
}

