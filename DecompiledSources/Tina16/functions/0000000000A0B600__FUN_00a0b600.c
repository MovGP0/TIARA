/* Ghidra address: 00a0b600 */
/* Ghidra symbol: FUN_00a0b600 */


longlong FUN_00a0b600(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  lVar7 = 0;
  plVar1 = *(longlong **)(param_1 + 0x50);
  if (plVar1 == (longlong *)0x0) {
    lVar4 = *(longlong *)(param_1 + 0x60);
    if ((lVar4 == 0) && (lVar4 = lVar7, *(int *)(param_1 + 0x6c) == 0)) {
      uVar5 = thunk_FUN_040ef593(0);
      iVar2 = thunk_FUN_03e5bd07(uVar5,0xc);
      iVar3 = thunk_FUN_03e5bd07(uVar5,0xe);
      if (iVar2 * iVar3 < 9) {
        uVar6 = thunk_FUN_041d714e(uVar5);
        *(undefined8 *)(param_1 + 0x60) = uVar6;
        lVar7 = *(longlong *)(param_1 + 0x60);
      }
      thunk_FUN_041a9b5c(0,uVar5);
      lVar4 = lVar7;
    }
  }
  else {
    lVar4 = (**(code **)(*plVar1 + 0x50))(plVar1);
  }
  return lVar4;
}

