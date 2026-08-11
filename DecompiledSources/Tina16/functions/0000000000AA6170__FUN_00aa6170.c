/* Ghidra address: 00aa6170 */
/* Ghidra symbol: FUN_00aa6170 */


void FUN_00aa6170(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  
  if (*(longlong *)(param_1 + 0x230) != 0) {
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x230) + 0x10);
    iVar2 = 0;
    if (-1 < iVar3 + -1) {
      do {
        plVar1 = (longlong *)FUN_00ac1a90(*(undefined8 *)(param_1 + 0x230),iVar2);
        plVar1 = (longlong *)(**(code **)(*plVar1 + 0x100))(plVar1);
        (**(code **)(*plVar1 + 0x148))(plVar1,*(undefined1 *)(param_1 + 0x90));
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}

