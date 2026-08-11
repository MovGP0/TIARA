/* Ghidra address: 018ba100 */
/* Ghidra symbol: FUN_018ba100 */


void FUN_018ba100(longlong param_1,longlong param_2,double param_3,double param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  plVar1 = (longlong *)0x0;
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x88) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      plVar1 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x88),iVar3);
      if (plVar1[0x22] == param_2) break;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  (**(code **)(*plVar1 + 0x278))(plVar1,0x100);
  (**(code **)(*plVar1 + 0x270))(plVar1,param_3 / *(double *)PTR_DAT_02002c30);
  (**(code **)(*plVar1 + 0x268))(plVar1,param_4 / *(double *)PTR_DAT_02002c30);
  lVar2 = FUN_018038a0(&PTR_FUN_01801848,1);
  FUN_00414ad0(lVar2 + 0x30,plVar1[0x20]);
  FUN_01803ed0(lVar2,L"PaperSize",&DAT_018ba2c8);
  FUN_0180d940(local_30,plVar1[0x47]);
  FUN_01803ed0(lVar2,L"PaperWidth",local_30[0]);
  FUN_0180d940(&local_38,plVar1[0x45]);
  FUN_01803ed0(lVar2,L"PaperHeight",local_38);
  FUN_00414ad0(plVar1 + 0x20,*(undefined8 *)(lVar2 + 0x30));
  FUN_00410f20(lVar2);
  FUN_00414560(&local_38,2);
  return;
}

