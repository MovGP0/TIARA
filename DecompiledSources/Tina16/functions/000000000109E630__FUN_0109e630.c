/* Ghidra address: 0109e630 */
/* Ghidra symbol: FUN_0109e630 */


void FUN_0109e630(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_30 [2];
  undefined1 local_20 [4];
  undefined4 local_1c [3];
  
  local_30[0] = 0;
  iVar1 = FUN_00c08890(*(undefined8 *)(param_1 + 0x980));
  if (iVar1 != 0) {
    FUN_0109f870(param_1,local_1c,local_20);
    uVar2 = FUN_0109e760(param_1);
    FUN_004167d0(local_30,uVar2);
    uVar2 = FUN_00442620(param_1 + 0xe30,local_30[0]);
    _Dbg_ToggleBreakpoint(*(undefined8 *)(param_1 + 0x9c0),local_1c[0],uVar2);
    (**(code **)(**(longlong **)(param_1 + 0x980) + 0x180))(*(longlong **)(param_1 + 0x980));
    iVar1 = FUN_006d8150(*(undefined8 *)(param_1 + 0x750));
    if (iVar1 == 1) {
      iVar1 = FUN_006d8150(*(undefined8 *)(param_1 + 0x770));
      if (iVar1 == 0) {
        FUN_0109e470(param_1);
      }
    }
  }
  FUN_00414480(local_30);
  return;
}

