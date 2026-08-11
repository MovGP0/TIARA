/* Ghidra address: 01be7cc0 */
/* Ghidra symbol: FUN_01be7cc0 */


void FUN_01be7cc0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_38 = 0;
  local_30 = 0;
  local_48 = param_1;
  local_40 = param_2;
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x6a0) != 0)) {
    lVar3 = 0;
    if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x6a0) + 0x4a0) + 0x120) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x6a0);
      uVar2 = FUN_004b1870(*(undefined8 *)(lVar3 + 0x498));
      lVar3 = FUN_004b1f50(*(undefined8 *)(*(longlong *)(lVar3 + 0x4a0) + 0x120),uVar2);
    }
    if (lVar3 != 0) {
      lVar4 = FUN_01bfaa70(local_40);
      if (0 < *(int *)(*(longlong *)(lVar4 + 0x10) + 0x10)) {
        uVar5 = FUN_01bfaa70(local_40);
        FUN_01be7b80(auStack_68,uVar5);
      }
      uVar5 = FUN_01bfaa70(local_40);
      uVar5 = FUN_01bfb850(uVar5);
      *(undefined8 *)(local_48 + 0x688) = uVar5;
      FUN_0041ddd0(&local_30,PTR_PTR_02004198);
      FUN_01bfdfd0(uVar5,local_30);
      uVar5 = FUN_01bfaa70(*(undefined8 *)(local_48 + 0x688));
      uVar6 = FUN_01bfaa70(lVar3);
      lVar4 = FUN_01bfaa70(lVar3);
      FUN_01be7bc0(auStack_68,uVar5,uVar6,*(int *)(*(longlong *)(lVar4 + 0x10) + 0x10) + -1);
      lVar4 = FUN_01c07120(*(undefined8 *)(*(longlong *)(local_48 + 0x5d0) + 0x5b0));
      uVar5 = *(undefined8 *)(lVar4 + 0x498);
      uVar6 = FUN_01bfaa70(*(undefined8 *)(local_48 + 0x688));
      uVar7 = FUN_01bfaa70(uVar5);
      lVar4 = FUN_01bfaa70(uVar5);
      FUN_01be7bc0(auStack_68,uVar6,uVar7,*(int *)(*(longlong *)(lVar4 + 0x10) + 0x10) + -2);
      lVar3 = FUN_01bfaa70(lVar3);
      if (0 < *(int *)(*(longlong *)(lVar3 + 0x10) + 0x10)) {
        uVar5 = FUN_0061d050(&PTR_FUN_0061c2b8,1,local_48);
        *(undefined8 *)(local_48 + 0x690) = uVar5;
        plVar1 = *(longlong **)(local_48 + 0x690);
        FUN_0041ddd0(&local_38,PTR_PTR_02004b90);
        (**(code **)(*plVar1 + 0xd8))(plVar1,local_38);
        lVar3 = FUN_01bfaa70(*(undefined8 *)(local_48 + 0x688));
        if (0 < *(int *)(*(longlong *)(lVar3 + 0x10) + 0x10)) {
          uVar5 = FUN_01bfaa70(local_40);
          FUN_01be7b80(auStack_68,uVar5);
        }
        uVar5 = FUN_01bfaa70(local_40);
        uVar5 = FUN_01bfb850(uVar5);
        *(undefined8 *)(local_48 + 0x698) = uVar5;
        uVar5 = *(undefined8 *)(local_48 + 0x698);
        FUN_01bfde30(uVar5,*(undefined8 *)(local_48 + 0x690));
        FUN_01bfe550(uVar5,0xffffffff);
      }
    }
  }
  FUN_00414560(&local_38,2);
  return;
}

