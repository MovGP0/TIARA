/* Ghidra address: 01b68830 */
/* Ghidra symbol: FUN_01b68830 */


void FUN_01b68830(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  iVar2 = (**(code **)(*(longlong *)param_1[0x196] + 0x260))((longlong *)param_1[0x196]);
  if (iVar2 != -1) {
    plVar1 = (longlong *)param_1[0x196];
    uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
    uVar4 = (**(code **)(*(longlong *)plVar1[0x9e] + 0x30))((longlong *)plVar1[0x9e],uVar3);
    lVar5 = FUN_004113f0(uVar4,&PTR_FUN_011061a0);
    if (param_1[0x1b5] != lVar5) {
      FUN_0082a6c0(param_1[0xf8],1);
      (**(code **)(*param_1 + 0x3d8))(param_1,param_1);
      plVar1 = (longlong *)param_1[0x196];
      uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
      lVar5 = (**(code **)(*(longlong *)plVar1[0x9e] + 0x30))((longlong *)plVar1[0x9e],uVar3);
      param_1[0x1b5] = lVar5;
      uVar3 = (**(code **)(*(longlong *)param_1[0x196] + 0x260))((longlong *)param_1[0x196]);
      (**(code **)(*(longlong *)param_1[0x1b4] + 0xb0))((longlong *)param_1[0x1b4],uVar3);
      lVar5 = param_1[0x1b5];
      *(undefined1 *)(lVar5 + 0x11) = 1;
      (**(code **)(*(longlong *)param_1[0x1a2] + 0x268))
                ((longlong *)param_1[0x1a2],*(undefined1 *)(lVar5 + 0x158));
      FUN_01b699a0(param_1,param_1);
      FUN_00b90440(param_1[0x193],*(undefined8 *)(lVar5 + 0x118));
      FUN_00b90440(param_1[0x197],*(undefined8 *)(lVar5 + 0x150));
      FUN_01b673e0(param_1,param_1);
    }
  }
  if (*(char *)(param_1[0x1a5] + 0x328) == '\0') {
    FUN_01b669b0(param_1,param_1);
  }
  else {
    FUN_01b66800(param_1,param_1);
  }
  return;
}

