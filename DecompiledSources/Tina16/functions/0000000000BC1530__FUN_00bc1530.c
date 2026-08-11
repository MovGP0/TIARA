/* Ghidra address: 00bc1530 */
/* Ghidra symbol: FUN_00bc1530 */


void FUN_00bc1530(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x78);
  if (plVar1 != (longlong *)0x0) {
    iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
    iVar2 = iVar2 + -1;
    if (-1 < iVar2) {
      do {
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                          (*(longlong **)(param_1 + 0x78),iVar2);
        FUN_00410f20(uVar3);
        iVar2 = iVar2 + -1;
      } while (iVar2 != -1);
    }
    (**(code **)(**(longlong **)(param_1 + 0x78) + 0x90))(*(longlong **)(param_1 + 0x78));
  }
  return;
}

