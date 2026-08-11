/* Ghidra address: 01c3cbb0 */
/* Ghidra symbol: FUN_01c3cbb0 */


void FUN_01c3cbb0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  int local_24;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_38 = 0;
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7b0) + 0x4e8);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x7a8) + 0x260))(*(longlong **)(param_1 + 0x7a8));
  if (-1 < iVar2) {
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x7a8) + 0x260))(*(longlong **)(param_1 + 0x7a8))
    ;
    iVar2 = FUN_01c284f0(*(undefined8 *)(param_1 + 0x920),uVar3);
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x7a8) + 0x260))(*(longlong **)(param_1 + 0x7a8))
    ;
    iVar4 = FUN_01c28500(*(undefined8 *)(param_1 + 0x920),uVar3);
    local_24 = iVar2;
    if (iVar2 <= iVar4) {
      iVar2 = (iVar4 - iVar2) + 1;
      do {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x920) + 8);
        (**(code **)(*plVar1 + 0x18))(plVar1,&local_38,local_24);
        (**(code **)(*local_20 + 0x78))(local_20,local_38);
        local_24 = local_24 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7b0) + 0x4e8);
    (**(code **)(*plVar1 + 0x88))(plVar1,local_20);
    FUN_00c08950(*(undefined8 *)(param_1 + 0x7b0),0);
    uVar5 = FUN_0065b870(*(undefined8 *)(param_1 + 0x7b0));
    thunk_FUN_041b2403(uVar5,0xb7,0,0);
  }
  FUN_00410f20(local_20);
  FUN_01c38160(param_1);
  FUN_00414480(&local_38);
  return;
}

