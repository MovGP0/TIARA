/* Ghidra address: 01508880 */
/* Ghidra symbol: FUN_01508880 */


void FUN_01508880(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  plVar1 = *(longlong **)(param_1 + 0xbb0);
  iVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
  if (iVar3 != -1) {
    uVar5 = (**(code **)(*(longlong *)plVar1[0x9e] + 0x30))((longlong *)plVar1[0x9e],iVar3);
    lVar6 = FUN_004113f0(uVar5,&PTR_FUN_01106460);
    *(longlong *)(param_1 + 0xc18) = lVar6;
    *(undefined4 *)(param_1 + 0xc0c) = *(undefined4 *)(lVar6 + 0x3c);
    uVar4 = *(undefined4 *)(*(longlong *)(param_1 + 0xc18) + 0x40);
    *(undefined4 *)(param_1 + 0xc10) = uVar4;
    if (*(char *)(*(longlong *)(param_1 + 0xbc8) + 0x328) == '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x7d8) + 0x268))(*(longlong **)(param_1 + 0x7d8),uVar4)
      ;
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x7d8) + 0x268))
                (*(longlong **)(param_1 + 0x7d8),*(undefined4 *)(param_1 + 0xc0c));
    }
    plVar2 = *(longlong **)(param_1 + 0x7d8);
    uVar4 = (**(code **)(*plVar2 + 0x260))(plVar2);
    uVar5 = (**(code **)(*(longlong *)plVar2[0x9e] + 0x30))((longlong *)plVar2[0x9e],uVar4);
    uVar5 = FUN_004113f0(uVar5,&PTR_FUN_011051a8);
    *(undefined8 *)(param_1 + 0x870) = uVar5;
    FUN_015084f0();
    FUN_0082a6c0(*(undefined8 *)(param_1 + 2000),
                 *(undefined1 *)(*(longlong *)(param_1 + 0xc18) + 0x11));
    (**(code **)(*(longlong *)plVar1[0x9e] + 0x18))((longlong *)plVar1[0x9e],local_30,iVar3);
    FUN_0064de00(*(undefined8 *)(param_1 + 0xbc0),local_30[0]);
  }
  FUN_00414480(local_30);
  return;
}

