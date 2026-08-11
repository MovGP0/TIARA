/* Ghidra address: 019506c0 */
/* Ghidra symbol: FUN_019506c0 */


void FUN_019506c0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  if (*(longlong *)(param_2 + 0x10) != 0) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x90);
    (**(code **)(*plVar1 + 0x80))(plVar1,*(undefined8 *)(param_2 + 0x10),param_2);
  }
  iVar2 = (**(code **)(**(longlong **)(param_2 + 0x80) + 0x30))();
  iVar4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar3 = (**(code **)(**(longlong **)(param_2 + 0x80) + 0x20))
                        (*(longlong **)(param_2 + 0x80),iVar4);
      FUN_019506c0(param_1,uVar3);
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

