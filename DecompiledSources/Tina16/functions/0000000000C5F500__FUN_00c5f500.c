/* Ghidra address: 00c5f500 */
/* Ghidra symbol: FUN_00c5f500 */


void FUN_00c5f500(longlong *param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  
  (**(code **)(*param_1 + 0x68))(param_1);
  bVar1 = true;
  for (iVar7 = 0; (bVar1 && (iVar7 < *(int *)(param_1[6] + 0x10))); iVar7 = iVar7 + 1) {
    uVar4 = FUN_004aeac0(param_1[6],iVar7);
    uVar2 = FUN_004aeba0(*(undefined8 *)(param_1[2] + 0xd10),uVar4);
    bVar1 = uVar2 < 0x80000000;
  }
  if ((bVar1) && (0 < *(int *)(param_1[6] + 0x10))) {
    uVar4 = FUN_00c5c340(&DAT_00c5bba8,1,*(undefined8 *)(param_1[2] + 0xd10),param_1[6],2);
    FUN_00c5c790(*(undefined8 *)(param_1[2] + 0xd50),uVar4);
  }
  iVar7 = *(int *)(param_1[6] + 0x10);
  iVar6 = 0;
  if (-1 < iVar7 + -1) {
    do {
      plVar5 = (longlong *)FUN_004aeac0(param_1[6],iVar6);
      (**(code **)(*plVar5 + 0x90))
                (plVar5,*(undefined8 *)(*(longlong *)(param_1[2] + 0x948) + 0x310),(int)param_1[7]);
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
  uVar3 = (**(code **)(*param_1 + 0x30))(param_1);
  (**(code **)(*param_1 + 0x38))(param_1,uVar3);
  return;
}

