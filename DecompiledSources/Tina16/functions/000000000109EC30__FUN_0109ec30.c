/* Ghidra address: 0109ec30 */
/* Ghidra symbol: FUN_0109ec30 */


void FUN_0109ec30(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar1 = FUN_006decb0();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar2 = FUN_006df500(*(undefined8 *)(*(longlong *)(param_1 + 0x7a8) + 0x550),iVar4);
      lVar2 = *(longlong *)(lVar2 + 0x18);
      uVar3 = FUN_00442620(param_1 + 0xe30,*(undefined8 *)(lVar2 + 0x10));
      _Dbg_ToggleBreakpoint(*(undefined8 *)(param_1 + 0x9c0),*(undefined4 *)(lVar2 + 8),uVar3);
      FUN_00410f20(lVar2);
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x980) + 0x180))(*(longlong **)(param_1 + 0x980));
  FUN_0109e470(param_1);
  return;
}

