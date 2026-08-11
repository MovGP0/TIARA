/* Ghidra address: 01464f00 */
/* Ghidra symbol: FUN_01464f00 */


void FUN_01464f00(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_01aee720(local_20,0x406,*(undefined4 *)(param_1 + 0x6b8),L"EECopyMnu");
  FUN_01aed550(*(undefined8 *)PTR_DAT_020041a8,local_20[0]);
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x750) + 0x270))(*(longlong **)(param_1 + 0x750));
  if (iVar2 == 0) {
    (**(code **)(**(longlong **)(param_1 + 0x750) + 0x290))(*(longlong **)(param_1 + 0x750),0);
    plVar1 = *(longlong **)(param_1 + 0x750);
    uVar3 = FUN_0064dc90(plVar1);
    (**(code **)(*plVar1 + 0x288))(plVar1,uVar3);
  }
  FUN_006809e0(*(undefined8 *)(param_1 + 0x750));
  FUN_00414480(local_20);
  return;
}

