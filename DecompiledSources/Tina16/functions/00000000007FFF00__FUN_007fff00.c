/* Ghidra address: 007fff00 */
/* Ghidra symbol: FUN_007fff00 */


void FUN_007fff00(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if ((*(char *)(param_1 + 0x4d6) == '\x02') && (*(longlong *)(param_1 + 0x698) != 0)) {
    lVar2 = 0;
    plVar1 = *(longlong **)(param_1 + 0x500);
    if (plVar1 != (longlong *)0x0) {
      lVar2 = (**(code **)(*plVar1 + 0x90))(plVar1);
    }
    uVar3 = 0;
    if (*(longlong *)(param_1 + 0x518) != 0) {
      uVar3 = FUN_007de060(*(longlong *)(param_1 + 0x518));
    }
    uVar4 = FUN_0065b870(param_1);
    lVar5 = thunk_FUN_041ed8e5(uVar4);
    thunk_FUN_041b2403(*(undefined8 *)(param_1 + 0x698),0x230,lVar2,uVar3);
    if (lVar5 != lVar2) {
      uVar3 = FUN_0065b870(param_1);
      thunk_FUN_0401553e(uVar3);
    }
  }
  return;
}

