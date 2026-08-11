/* Ghidra address: 01a7e460 */
/* Ghidra symbol: FUN_01a7e460 */


void FUN_01a7e460(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  FUN_01aee720(&local_30,0x406,*(undefined4 *)(param_1 + 0x6b8),L"DFOpenMnu");
  FUN_01aed550(*(undefined8 *)PTR_DAT_020041a8,local_30);
  plVar3 = (longlong *)FUN_00723990(&PTR_FUN_007198a0,1,*(undefined8 *)PTR_DAT_02004030);
  uVar4 = FUN_00b89270();
  FUN_00b8e520(uVar4,&local_38,0x82a);
  FUN_00414ad0(plVar3 + 0x1f,local_38);
  FUN_00414ad0(plVar3 + 0x1c,L"Tina diagram (*.tdr)|*.tdr");
  FUN_00724380(plVar3,L"*.tdr");
  FUN_00414ad0(plVar3 + 0x20,&DAT_01a7e674);
  *(undefined4 *)(plVar3 + 0x1b) = 0x354;
  *(undefined4 *)((longlong)plVar3 + 0x7c) = 0x1f7;
  cVar1 = (**(code **)(*plVar3 + 0xa8))(plVar3);
  if (cVar1 != '\0') {
    plVar5 = (longlong *)FUN_007241d0(plVar3);
    iVar2 = (**(code **)(*plVar5 + 0x28))();
    iVar6 = 0;
    if (-1 < iVar2 + -1) {
      do {
        plVar5 = (longlong *)FUN_007241d0(plVar3);
        (**(code **)(*plVar5 + 0x18))(plVar5,&local_40,iVar6);
        FUN_01156520(local_40);
        iVar6 = iVar6 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  FUN_00410f20(plVar3);
  FUN_00414560(&local_40,3);
  return;
}

