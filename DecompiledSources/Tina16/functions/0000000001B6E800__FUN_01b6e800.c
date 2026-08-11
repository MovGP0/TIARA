/* Ghidra address: 01b6e800 */
/* Ghidra symbol: FUN_01b6e800 */


void FUN_01b6e800(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_29 [9];
  
  plVar1 = *(longlong **)(param_1 + 0x910);
  iVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
  if (iVar2 != -1) {
    uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
    lVar4 = (**(code **)(*(longlong *)plVar1[0x9e] + 0x30))((longlong *)plVar1[0x9e],uVar3);
    if (lVar4 != 0) {
      uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
      (**(code **)(**(longlong **)(param_1 + 0x9d8) + 0x58))(*(longlong **)(param_1 + 0x9d8),uVar3);
      uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
      uVar5 = (**(code **)(*(longlong *)plVar1[0x9e] + 0x30))((longlong *)plVar1[0x9e],uVar3);
      lVar4 = FUN_004113f0(uVar5,&PTR_FUN_011057c0);
      *(longlong *)(param_1 + 0x9e0) = lVar4;
      *(undefined1 *)(lVar4 + 0x11) = 1;
      plVar1 = *(longlong **)(param_1 + 0x918);
      uVar3 = (**(code **)(*(longlong *)plVar1[0x9e] + 0xc0))((longlong *)plVar1[0x9e],lVar4);
      (**(code **)(*plVar1 + 0x268))(plVar1,uVar3);
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x918) + 0x260))
                        (*(longlong **)(param_1 + 0x918));
      if (iVar2 == -1) {
        plVar1 = *(longlong **)(param_1 + 0x918);
        uVar3 = (**(code **)(*(longlong *)plVar1[0x9e] + 0xb0))
                          ((longlong *)plVar1[0x9e],
                           *(undefined8 *)(*(longlong *)(param_1 + 0x9e0) + 0x118));
        (**(code **)(*plVar1 + 0x268))(plVar1,uVar3);
      }
      FUN_01b6bf50(param_1);
      (**(code **)(**(longlong **)(param_1 + 0x9d8) + 0xa0))
                (*(longlong **)(param_1 + 0x9d8),local_29);
      FUN_01b6bcd0(param_1,local_29[0]);
    }
  }
  return;
}

