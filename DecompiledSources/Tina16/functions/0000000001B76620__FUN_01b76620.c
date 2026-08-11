/* Ghidra address: 01b76620 */
/* Ghidra symbol: FUN_01b76620 */


void FUN_01b76620(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong local_20 [2];
  
  local_20[0] = 0;
  lVar1 = FUN_006efcb0(*(undefined8 *)(*(longlong *)(param_1 + 0x6b0) + 0x4e0),
                       *(undefined4 *)(param_1 + 0x6e4));
  (**(code **)(**(longlong **)(lVar1 + 0x10) + 0x18))
            (*(longlong **)(lVar1 + 0x10),local_20,*(int *)(param_1 + 0x6e8) + -1);
  if (local_20[0] != 0) {
    plVar2 = (longlong *)FUN_006a6030();
    (**(code **)(*plVar2 + 0x30))(plVar2);
    uVar3 = FUN_006a6030();
    FUN_006a58e0(uVar3,local_20[0]);
    plVar2 = (longlong *)FUN_006a6030();
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  FUN_00414480(local_20);
  return;
}

