/* Ghidra address: 015206d0 */
/* Ghidra symbol: FUN_015206d0 */


void FUN_015206d0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xc00) + 0x4f0);
  iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
  if (0 < iVar2) {
    plVar1 = *(longlong **)(param_1 + 0xc00);
    uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
    uVar4 = (**(code **)(*(longlong *)plVar1[0x9e] + 0x30))((longlong *)plVar1[0x9e],uVar3);
    lVar5 = FUN_004113f0(uVar4,&PTR_FUN_01106460);
    (**(code **)(**(longlong **)(param_1 + 0xd70) + 0x2f0))
              (*(longlong **)(param_1 + 0xd70),*(undefined8 *)(lVar5 + 0x48));
    (**(code **)(**(longlong **)(param_1 + 0xd70) + 0x268))(*(longlong **)(param_1 + 0xd70),0);
    FUN_01521460(param_1,param_1);
  }
  return;
}

