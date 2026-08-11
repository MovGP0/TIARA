/* Ghidra address: 01b65820 */
/* Ghidra symbol: FUN_01b65820 */


void FUN_01b65820(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x7d8) + 0x260))(*(longlong **)(param_1 + 0x7d8));
  if (iVar2 != -1) {
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x7d8) + 0x260))(*(longlong **)(param_1 + 0x7d8))
    ;
    (**(code **)(**(longlong **)(param_1 + 0xda0) + 0x58))(*(longlong **)(param_1 + 0xda0),uVar3);
    plVar1 = *(longlong **)(param_1 + 0x7d8);
    uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
    uVar4 = (**(code **)(*(longlong *)plVar1[0x9e] + 0x30))((longlong *)plVar1[0x9e],uVar3);
    uVar4 = FUN_004113f0(uVar4,&PTR_FUN_011061a0);
    *(undefined8 *)(param_1 + 0x870) = uVar4;
    plVar1 = *(longlong **)(param_1 + 0x7d8);
    uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
    uVar4 = (**(code **)(*(longlong *)plVar1[0x9e] + 0x30))((longlong *)plVar1[0x9e],uVar3);
    FUN_004113f0(uVar4,&PTR_FUN_011061a0);
    lVar5 = FUN_004113f0(*(undefined8 *)(param_1 + 0x870),&PTR_FUN_011061a0);
    (**(code **)(**(longlong **)(param_1 + 0xda0) + 0xa8))
              (*(longlong **)(param_1 + 0xda0),*(undefined1 *)(lVar5 + 0x2a));
    FUN_00b90440(*(undefined8 *)(param_1 + 0xc58),*(undefined8 *)(lVar5 + 0x118));
    uVar4 = FUN_00b90440(*(undefined8 *)(param_1 + 0xc68),*(undefined8 *)(lVar5 + 0x150));
    *(undefined1 *)(lVar5 + 0x11) = 1;
    FUN_0082a6c0(*(undefined8 *)(param_1 + 2000),
                 CONCAT71((int7)((ulonglong)uVar4 >> 8),1) & 0xffffffff);
    FUN_01b65960(param_1,param_1);
  }
  return;
}

