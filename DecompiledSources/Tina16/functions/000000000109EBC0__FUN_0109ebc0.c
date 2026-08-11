/* Ghidra address: 0109ebc0 */
/* Ghidra symbol: FUN_0109ebc0 */


void FUN_0109ebc0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0xa20) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa20) + 0x18);
    uVar2 = FUN_00442620(param_1 + 0xe30,*(undefined8 *)(lVar1 + 0x10));
    _Dbg_ToggleBreakpoint(*(undefined8 *)(param_1 + 0x9c0),*(undefined4 *)(lVar1 + 8),uVar2);
    FUN_00410f20(lVar1);
    (**(code **)(**(longlong **)(param_1 + 0x980) + 0x180))(*(longlong **)(param_1 + 0x980));
    FUN_0109e470(param_1);
  }
  return;
}

