/* Ghidra address: 0151de90 */
/* Ghidra symbol: FUN_0151de90 */


void FUN_0151de90(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  double local_40 [2];
  
  local_40[0] = 1e-30;
  (**(code **)(**(longlong **)(param_1 + 0xec8) + 0xf8))(*(longlong **)(param_1 + 0xec8),local_40);
  if (*(longlong *)(param_1 + 0x880) != 0) {
    FUN_01cc6030(*(longlong *)(param_1 + 0x880));
  }
  uVar2 = FUN_01cc3870(&PTR_FUN_01cb5bc0,1,10,0,0);
  *(undefined8 *)(param_1 + 0x880) = uVar2;
  FUN_01cc6020(uVar2);
  iVar7 = -1;
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x880) + 8);
  iVar1 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x7d8) + 0x4f0) + 0x28))();
  iVar6 = 0;
  if (-1 < iVar1 + -1) {
    do {
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x7d8) + 0x4f0);
      uVar3 = (**(code **)(*plVar4 + 0x30))(plVar4,iVar6);
      plVar4 = (longlong *)FUN_004113f0(uVar3,&PTR_FUN_01106728);
      uVar3 = FUN_01cc34d0(uVar2,plVar4[1],0,2);
      (**(code **)(*plVar4 + 0x10))(plVar4,uVar3);
      iVar7 = iVar7 + 1;
      iVar5 = 0;
      do {
        FUN_01d347d0(uVar2,iVar7);
        FUN_01cc56d0(*(undefined8 *)(param_1 + 0x880),iVar7,((double)iVar5 * local_40[0]) / 100.0,0)
        ;
        iVar5 = iVar5 + 1;
      } while (iVar5 != 2);
      iVar6 = iVar6 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

