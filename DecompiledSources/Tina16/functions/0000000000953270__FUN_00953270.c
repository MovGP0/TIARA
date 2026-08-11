/* Ghidra address: 00953270 */
/* Ghidra symbol: FUN_00953270 */


longlong * FUN_00953270(longlong *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  cVar1 = (**(code **)(*param_1 + 0xa0))(param_1);
  if (cVar1 != '\0') {
    uVar3 = FUN_0044d490(&PTR_FUN_00901108,1,L"No modification allowed error.");
    FUN_004134c0(uVar3);
  }
  if (-1 < param_2) {
    iVar2 = (**(code **)(*param_1 + 0x2c8))(param_1);
    if (param_2 <= iVar2) goto LAB_009532f8;
  }
  uVar3 = FUN_0044d490(&PTR_FUN_00900bd8,1,L"Index size error.");
  FUN_004134c0(uVar3);
LAB_009532f8:
  uVar3 = (**(code **)(*param_1 + 0x188))(param_1);
  plVar4 = (longlong *)FUN_009530f0(&PTR_FUN_0090b468,1,uVar3);
  iVar2 = (**(code **)(*param_1 + 0x2c8))(param_1);
  (**(code **)(*param_1 + 0x2d8))(param_1,local_20,param_2,iVar2 - param_2);
  (**(code **)(*plVar4 + 0x2c0))(plVar4,local_20[0]);
  *(char *)(plVar4 + 0x10) = (char)param_1[0x10];
  iVar2 = (**(code **)(*param_1 + 0x2c8))(param_1);
  (**(code **)(*param_1 + 0x2f0))(param_1,param_2,iVar2 - param_2);
  lVar5 = (**(code **)(*param_1 + 0x170))(param_1);
  if (lVar5 != 0) {
    plVar6 = (longlong *)(**(code **)(*param_1 + 0x170))(param_1);
    uVar3 = (**(code **)(*param_1 + 0x158))(param_1);
    (**(code **)(*plVar6 + 0x280))(plVar6,plVar4,uVar3);
  }
  FUN_00414520(local_20);
  return plVar4;
}

