/* Ghidra address: 01c8e900 */
/* Ghidra symbol: FUN_01c8e900 */


void FUN_01c8e900(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_2 + 8) == 0x162e) {
    plVar1 = *(longlong **)(param_2 + 0x10);
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x27a8) + 0x18))
                      (*(longlong **)(param_1 + 0x27a8),plVar1);
    if (iVar2 != -1) {
      *(undefined1 *)(plVar1 + 1) = 0;
      uVar3 = FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
      (**(code **)(*plVar1 + 0xa0))(plVar1,uVar3);
    }
    *(undefined8 *)(param_2 + 0x18) = 1;
  }
  return;
}

