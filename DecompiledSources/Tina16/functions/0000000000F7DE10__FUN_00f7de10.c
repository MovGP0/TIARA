/* Ghidra address: 00f7de10 */
/* Ghidra symbol: FUN_00f7de10 */


void FUN_00f7de10(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  lVar1 = FUN_00f7db60(param_1,local_res10[0]);
  iVar5 = *(int *)(lVar1 + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar2 = FUN_004aeac0(lVar1,iVar4);
      uVar3 = FUN_00442620(param_1 + 0x54,*(undefined8 *)(lVar2 + 0x10));
      _Dbg_ToggleBreakpoint(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(lVar2 + 8),uVar3);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_01b202f0(lVar1);
  FUN_00410f20(lVar1);
  FUN_00414480(local_res10);
  return;
}

