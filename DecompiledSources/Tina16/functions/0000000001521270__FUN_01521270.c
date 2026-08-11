/* Ghidra address: 01521270 */
/* Ghidra symbol: FUN_01521270 */


void FUN_01521270(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  plVar1 = *(longlong **)(param_1 + 0xc00);
  iVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
  if (-1 < iVar2) {
    uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
    uVar4 = (**(code **)(*(longlong *)plVar1[0x9e] + 0x30))((longlong *)plVar1[0x9e],uVar3);
    lVar5 = FUN_004113f0(uVar4,&PTR_FUN_01106460);
    (**(code **)(**(longlong **)(lVar5 + 0x48) + 0x10))
              (*(longlong **)(lVar5 + 0x48),*(undefined8 *)(*(longlong *)(param_1 + 0xd70) + 0x4f0))
    ;
  }
  return;
}

