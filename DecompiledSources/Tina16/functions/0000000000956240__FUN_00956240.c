/* Ghidra address: 00956240 */
/* Ghidra symbol: FUN_00956240 */


void FUN_00956240(longlong *param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if ((param_2 == (longlong *)0x0) || (param_3 == 0)) {
    uVar4 = FUN_0044d490(&PTR_FUN_009013a8,1,L"Not supported error.");
    FUN_004134c0(uVar4);
  }
  cVar1 = (**(code **)(*param_2 + 0x168))(param_2);
  if (cVar1 == '\x01') {
    lVar5 = (**(code **)(*param_1 + 0x2f8))(param_1);
    if (lVar5 != 0) {
      lVar5 = (**(code **)(*param_1 + 0x2f8))(param_1);
      if (lVar5 != param_3) {
        uVar4 = FUN_0044d490(&PTR_FUN_00900d18,1,L"Hierarchy request error.");
        FUN_004134c0(uVar4);
      }
    }
    lVar5 = (**(code **)(*param_1 + 0x2f0))(param_1);
    if (lVar5 != 0) {
      plVar6 = (longlong *)(**(code **)(*param_1 + 0x110))(param_1);
      uVar4 = (**(code **)(*param_1 + 0x2f0))(param_1);
      iVar2 = (**(code **)(*plVar6 + 8))(plVar6,uVar4);
      plVar6 = (longlong *)(**(code **)(*param_1 + 0x110))(param_1);
      iVar3 = (**(code **)(*plVar6 + 8))(plVar6,param_3);
      if (iVar3 < iVar2) {
        uVar4 = FUN_0044d490(&PTR_FUN_00900d18,1,L"Hierarchy request error.");
        FUN_004134c0(uVar4);
      }
    }
  }
  else if (cVar1 == '\n') {
    lVar5 = (**(code **)(*param_1 + 0x2f0))(param_1);
    if (lVar5 != 0) {
      lVar5 = (**(code **)(*param_1 + 0x2f0))(param_1);
      if (lVar5 != param_3) {
        uVar4 = FUN_0044d490(&PTR_FUN_00900d18,1,L"Hierarchy request error.");
        FUN_004134c0(uVar4);
      }
    }
    lVar5 = (**(code **)(*param_1 + 0x2f8))(param_1);
    if (lVar5 != 0) {
      plVar6 = (longlong *)(**(code **)(*param_1 + 0x110))(param_1);
      uVar4 = (**(code **)(*param_1 + 0x2f8))(param_1);
      iVar2 = (**(code **)(*plVar6 + 8))(plVar6,uVar4);
      plVar6 = (longlong *)(**(code **)(*param_1 + 0x110))(param_1);
      iVar3 = (**(code **)(*plVar6 + 8))(plVar6,param_3);
      if (iVar2 < iVar3) {
        uVar4 = FUN_0044d490(&PTR_FUN_00900d18,1,L"Hierarchy request error.");
        FUN_004134c0(uVar4);
      }
    }
  }
  FUN_0094f2c0(param_1,param_2,param_3);
  return;
}

