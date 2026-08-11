/* Ghidra address: 0179fd60 */
/* Ghidra symbol: FUN_0179fd60 */


void FUN_0179fd60(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 local_48 [24];
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x758) + 0x260))(*(longlong **)(param_1 + 0x758));
  if (-1 < iVar1) {
    plVar4 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
    iVar1 = FUN_0064d0b0(*(undefined8 *)(param_1 + 0x758));
    (**(code **)(*plVar4 + 0x88))(plVar4,iVar1 + -2);
    iVar1 = FUN_0068bbb0(*(undefined8 *)(param_1 + 0x758));
    (**(code **)(*plVar4 + 0x70))
              (plVar4,iVar1 + *(int *)(*(longlong *)
                                        (*(longlong *)(*(longlong *)(param_1 + 0x758) + 0xb8) + 0x18
                                        ) + 0x28));
    uVar2 = (**(code **)(*plVar4 + 0x60))(plVar4);
    uVar3 = (**(code **)(*plVar4 + 0x48))(plVar4);
    FUN_00498350(local_48,0,0,uVar2,uVar3);
    uVar5 = FUN_00609e10(plVar4);
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x758) + 0x260))(*(longlong **)(param_1 + 0x758))
    ;
    uVar6 = (**(code **)(**(longlong **)(param_1 + 0xd18) + 0x30))
                      (*(longlong **)(param_1 + 0xd18),uVar2);
    FUN_017996c0(param_1,uVar5,local_48,uVar6);
    plVar7 = (longlong *)FUN_00609e10(plVar4);
    uVar2 = (**(code **)(*plVar7 + 0x30))(plVar7,0,0);
    uVar5 = FUN_007d5080(&PTR_FUN_006441f8,1,*(undefined8 *)(param_1 + 0x758));
    uVar3 = (**(code **)(*plVar4 + 0x60))(plVar4);
    FUN_007d55b0(uVar5,uVar3);
    uVar3 = (**(code **)(*plVar4 + 0x48))(plVar4);
    FUN_007d5610(uVar5,uVar3);
    FUN_007d5ad0(uVar5,plVar4,uVar2);
    FUN_01791b40(*(undefined8 *)(param_1 + 0xcb8),uVar5);
    *param_3 = *(undefined8 *)(param_1 + 0xcb8);
    FUN_00410f20(uVar5);
    FUN_00410f20(plVar4);
  }
  return;
}

