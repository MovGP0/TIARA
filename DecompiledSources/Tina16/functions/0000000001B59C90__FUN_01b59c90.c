/* Ghidra address: 01b59c90 */
/* Ghidra symbol: FUN_01b59c90 */


void FUN_01b59c90(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  iVar2 = (**(code **)(*(longlong *)param_1[0x197] + 0x260))((longlong *)param_1[0x197]);
  if (iVar2 != -1) {
    plVar1 = (longlong *)param_1[0x197];
    uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
    uVar4 = (**(code **)(*(longlong *)plVar1[0x9e] + 0x30))((longlong *)plVar1[0x9e],uVar3);
    lVar5 = FUN_004113f0(uVar4,&PTR_FUN_011061a0);
    if (param_1[0x1ac] != lVar5) {
      FUN_0082a6c0(param_1[0xf8],1);
      (**(code **)(*param_1 + 0x3d8))(param_1,param_1);
      plVar1 = (longlong *)param_1[0x197];
      uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
      lVar5 = (**(code **)(*(longlong *)plVar1[0x9e] + 0x30))((longlong *)plVar1[0x9e],uVar3);
      param_1[0x1ac] = lVar5;
      uVar3 = (**(code **)(*(longlong *)param_1[0x197] + 0x260))((longlong *)param_1[0x197]);
      (**(code **)(*(longlong *)param_1[0x1ab] + 0xb0))((longlong *)param_1[0x1ab],uVar3);
    }
  }
  return;
}

