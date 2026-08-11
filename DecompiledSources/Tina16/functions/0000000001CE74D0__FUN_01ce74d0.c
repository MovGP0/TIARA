/* Ghidra address: 01ce74d0 */
/* Ghidra symbol: FUN_01ce74d0 */


void FUN_01ce74d0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  int iVar9;
  bool bVar10;
  undefined8 local_res10 [3];
  undefined8 local_40 [2];
  undefined8 local_30;
  
  local_40[0] = 0;
  local_30 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  cVar1 = FUN_01ce33d0(param_1);
  if (cVar1 != '\0') {
    if (*(byte *)(param_1 + 0x58) < 8) {
      bVar10 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) <<
                (*(byte *)(param_1 + 0x58) & 0x1f) & 5U) != 0;
    }
    else {
      bVar10 = false;
    }
    if (bVar10) {
      plVar7 = *(longlong **)(param_1 + 0x78);
      iVar2 = (**(code **)(*plVar7 + 0x28))();
      iVar9 = 0;
      if (-1 < iVar2 + -1) {
        do {
          uVar5 = (**(code **)(*plVar7 + 0x30))(plVar7,iVar9);
          lVar6 = FUN_004113f0(uVar5,&PTR_FUN_01d282a8);
          *(undefined1 *)(lVar6 + 0x11) = 1;
          *(undefined1 *)(lVar6 + 0x12) = 1;
          iVar9 = iVar9 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x28))();
      iVar9 = 0;
      if (-1 < iVar2 + -1) {
        do {
          uVar5 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                            (*(longlong **)(param_1 + 0x80),iVar9);
          lVar6 = FUN_004113f0(uVar5,&PTR_FUN_01d282a8);
          *(undefined1 *)(lVar6 + 0x11) = 1;
          iVar9 = iVar9 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      *(undefined4 *)(param_1 + 0x94) = 0;
      *(undefined1 *)(param_1 + 0x59) = 0;
      lVar6 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                        (*(longlong **)(param_1 + 0x78),0);
      if (*(longlong *)(lVar6 + 0x118) != 0) {
        lVar6 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                          (*(longlong **)(param_1 + 0x78),0);
        (**(code **)(**(longlong **)(lVar6 + 0x118) + 0x50))(*(longlong **)(lVar6 + 0x118),1);
        FUN_01ad6c70(*(undefined8 *)(param_1 + 0x50),0,local_res10[0]);
      }
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x28))(*(longlong **)(param_1 + 0x78));
      if (1 < iVar2) {
        while (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x28))
                                 (*(longlong **)(param_1 + 0x78)), 1 < iVar2) {
          plVar7 = (longlong *)
                   (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                             (*(longlong **)(param_1 + 0x78),1);
          (**(code **)(*plVar7 + 0x50))(plVar7,1);
          FUN_01ad6c70(*(undefined8 *)(param_1 + 0x50),0,local_res10[0]);
        }
      }
      uVar5 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                        (*(longlong **)(param_1 + 0x78),0);
      FUN_01ce6730(param_1,local_40);
      FUN_01cd64a0(uVar5,local_40[0]);
      lVar6 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                        (*(longlong **)(param_1 + 0x78),0);
      FUN_005fc860(*(undefined8 *)(lVar6 + 0x98),0);
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x28))(*(longlong **)(param_1 + 0x78));
      iVar9 = 1;
      if (0 < iVar2) {
        do {
          uVar5 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                            (*(longlong **)(param_1 + 0x78),iVar9 + -1);
          uVar3 = FUN_01ccddc0(uVar5);
          uVar4 = FUN_01ccddd0(uVar5);
          FUN_01cd43b0(uVar5,uVar3,uVar4);
          iVar9 = iVar9 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x28))(*(longlong **)(param_1 + 0x88));
      iVar9 = 1;
      if (0 < iVar2) {
        do {
          uVar5 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x30))
                            (*(longlong **)(param_1 + 0x88),iVar9 + -1);
          FUN_00410f20(uVar5);
          iVar9 = iVar9 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x28))(*(longlong **)(param_1 + 0x88));
      if (0 < iVar2) {
        (**(code **)(**(longlong **)(param_1 + 0x88) + 0x90))(*(longlong **)(param_1 + 0x88));
      }
      uVar5 = FUN_01cd9760(&PTR_FUN_01cd9128,1);
      (**(code **)(**(longlong **)(param_1 + 0x88) + 0x80))
                (*(longlong **)(param_1 + 0x88),L"Grid",uVar5);
      lVar6 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x30))
                        (*(longlong **)(param_1 + 0x88),0);
      *(longlong *)(lVar6 + 0x78) = param_1;
      uVar5 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x30))
                        (*(longlong **)(param_1 + 0x88),0);
      uVar8 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))
                        (*(longlong **)(param_1 + 0x70),0);
      FUN_01cd9880(uVar5,uVar8);
      uVar5 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x30))
                        (*(longlong **)(param_1 + 0x88),0);
      uVar8 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                        (*(longlong **)(param_1 + 0x78),0);
      FUN_01cd98a0(uVar5,uVar8);
    }
  }
  FUN_00414480(local_40);
  FUN_00414480(&local_30);
  FUN_00414480(local_res10);
  return;
}

