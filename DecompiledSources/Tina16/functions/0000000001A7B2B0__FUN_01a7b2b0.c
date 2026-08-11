/* Ghidra address: 01a7b2b0 */
/* Ghidra symbol: FUN_01a7b2b0 */


void FUN_01a7b2b0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  FUN_01aee720(local_30,0x406,*(undefined4 *)(param_1 + 0x6b8),L"DFPrintSetupMnu");
  FUN_01aed550(*(undefined8 *)PTR_DAT_020041a8,local_30[0]);
  plVar3 = (longlong *)FUN_00722380(&PTR_FUN_0071b018,1,*(undefined8 *)PTR_DAT_02004030);
  *(undefined4 *)((longlong)plVar3 + 0x7c) = 0x1fd;
  (**(code **)(*plVar3 + 0xa8))(plVar3);
  FUN_00410f20(plVar3);
  lVar1 = *(longlong *)(param_1 + 0x7a0);
  iVar2 = (**(code **)(**(longlong **)(lVar1 + 0x10) + 0x28))();
  iVar5 = 0;
  if (-1 < iVar2 + -1) {
    do {
      plVar3 = *(longlong **)(lVar1 + 0x10);
      lVar4 = (**(code **)(*plVar3 + 0x30))(plVar3,iVar5);
      *(undefined4 *)(lVar4 + 0x100) = 0;
      *(undefined4 *)(lVar4 + 0x104) = 0;
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_01a77f90(param_1,param_2);
  FUN_00414480(local_30);
  return;
}

