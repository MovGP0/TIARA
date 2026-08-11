/* Ghidra address: 01187fc0 */
/* Ghidra symbol: FUN_01187fc0 */


void FUN_01187fc0(int param_1,longlong *param_2)

{
  double dVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar9 = param_1 + 1;
  iVar8 = iVar9 * 10;
  lVar2 = (longlong)param_1;
  uVar5 = *(undefined8 *)(*param_2 + 0x10 + lVar2 * 8);
  uVar4 = *(undefined8 *)(*param_2 + 0x978 + lVar2 * 8);
  uVar3 = *(undefined8 *)(*param_2 + 0x12e0 + lVar2 * 8);
  dVar1 = *(double *)(*param_2 + 0x1c48 + lVar2 * 8);
  if (dVar1 == 0.0) {
    uVar3 = FUN_0040f200(PTR_DAT_02002470,L"*    Stage Number ");
    uVar3 = FUN_0040ef30(uVar3,iVar9);
    FUN_0040f590(uVar3);
    FUN_00409900();
    uVar3 = FUN_0040f3d0(PTR_DAT_02002470,0x43);
    iVar7 = iVar8 + 1;
    uVar3 = FUN_0040ef30(uVar3,iVar7);
    uVar3 = FUN_0040f200(uVar3,&DAT_01188730);
    uVar3 = FUN_0040ef30(uVar3,iVar7);
    uVar3 = FUN_0040f200(uVar3,&DAT_01188730);
    iVar10 = iVar8 + 2;
    uVar3 = FUN_0040ef30(uVar3,iVar10);
    uVar3 = FUN_0040f200(uVar3,&DAT_01188730);
    uVar4 = FUN_0040f530(uVar3,uVar4,10,2);
    FUN_0040f590(uVar4);
    FUN_00409900();
    uVar4 = FUN_0040f3d0(PTR_DAT_02002470,0x52);
    uVar4 = FUN_0040ef30(uVar4,iVar7);
    uVar4 = FUN_0040f200(uVar4,&DAT_01188730);
    uVar4 = FUN_0040ef30(uVar4,iVar10);
    uVar4 = FUN_0040f200(uVar4,&DAT_01188730);
    uVar4 = FUN_0040ef30(uVar4,0);
    uVar4 = FUN_0040f200(uVar4,&DAT_01188730);
    uVar5 = FUN_0040f530(uVar4,uVar5,10,2);
    FUN_0040f590(uVar5);
    FUN_00409900();
    uVar5 = FUN_0040f200(PTR_DAT_02002470,&PTR_DAT_01188744);
    uVar5 = FUN_0040ef30(uVar5,iVar9);
    uVar5 = FUN_0040f200(uVar5,&DAT_01188730);
    uVar5 = FUN_0040ef30(uVar5,iVar8 + 3);
    uVar5 = FUN_0040f200(uVar5,&DAT_01188730);
    uVar5 = FUN_0040ef30(uVar5,iVar8 + 0xb);
    uVar5 = FUN_0040f200(uVar5,&DAT_01188730);
    uVar5 = FUN_0040ef30(uVar5,1);
    FUN_0040f590(uVar5);
    FUN_00409900();
    uVar5 = FUN_0040f3d0(PTR_DAT_02002470,0x58);
    uVar5 = FUN_0040ef30(uVar5,iVar9);
    uVar5 = FUN_0040f200(uVar5,&DAT_01188730);
    uVar5 = FUN_0040ef30(uVar5,iVar10);
    uVar5 = FUN_0040f200(uVar5,&DAT_01188730);
    uVar5 = FUN_0040ef30(uVar5,iVar8 + 3);
    uVar5 = FUN_0040f200(uVar5,&DAT_01188730);
    uVar5 = FUN_0040ef30(uVar5,iVar8 + 0xb);
    uVar5 = FUN_0040f200(uVar5,&DAT_01188730);
    uVar5 = FUN_0040f200(uVar5,L"OPAMP");
    FUN_0040f590(uVar5);
    FUN_00409900();
  }
  else if ((*(double *)(*param_2 + 0x2f18 + (longlong)param_1 * 8) == 0.0) &&
          (*(double *)(*param_2 + 0x25b0 + (longlong)param_1 * 8) == 0.0)) {
    uVar6 = FUN_0040f200(PTR_DAT_02002470,L"*    Stage Number ");
    uVar6 = FUN_0040ef30(uVar6,param_1 + 1);
    FUN_0040f590(uVar6);
    FUN_00409900();
    uVar6 = FUN_0040f3d0(PTR_DAT_02002470,0x43);
    iVar7 = iVar8 + 1;
    uVar6 = FUN_0040ef30(uVar6,iVar7);
    uVar6 = FUN_0040f200(uVar6,&DAT_01188730);
    uVar6 = FUN_0040ef30(uVar6,iVar7);
    uVar6 = FUN_0040f200(uVar6,&DAT_01188730);
    iVar10 = iVar8 + 2;
    uVar6 = FUN_0040ef30(uVar6,iVar10);
    uVar6 = FUN_0040f200(uVar6,&DAT_01188730);
    uVar6 = FUN_0040f530(uVar6,uVar4,10,2);
    FUN_0040f590(uVar6);
    FUN_00409900();
    uVar6 = FUN_0040f3d0(PTR_DAT_02002470,0x43);
    uVar6 = FUN_0040ef30(uVar6,iVar10);
    uVar6 = FUN_0040f200(uVar6,&DAT_01188730);
    uVar6 = FUN_0040ef30(uVar6,iVar10);
    uVar6 = FUN_0040f200(uVar6,&DAT_01188730);
    iVar11 = iVar8 + 3;
    uVar6 = FUN_0040ef30(uVar6,iVar11);
    uVar6 = FUN_0040f200(uVar6,&DAT_01188730);
    uVar4 = FUN_0040f530(uVar6,uVar4,10,2);
    FUN_0040f590(uVar4);
    FUN_00409900();
    uVar4 = FUN_0040f3d0(PTR_DAT_02002470,0x52);
    uVar4 = FUN_0040ef30(uVar4,iVar7);
    uVar4 = FUN_0040f200(uVar4,&DAT_01188730);
    uVar4 = FUN_0040ef30(uVar4,iVar11);
    uVar4 = FUN_0040f200(uVar4,&DAT_01188730);
    uVar4 = FUN_0040ef30(uVar4,0);
    uVar4 = FUN_0040f200(uVar4,&DAT_01188730);
    uVar4 = FUN_0040f530(uVar4,uVar5,10,2);
    FUN_0040f590(uVar4);
    FUN_00409900();
    uVar4 = FUN_0040f3d0(PTR_DAT_02002470,0x52);
    uVar4 = FUN_0040ef30(uVar4,iVar10);
    uVar4 = FUN_0040f200(uVar4,&DAT_01188730);
    uVar4 = FUN_0040ef30(uVar4,iVar10);
    uVar4 = FUN_0040f200(uVar4,&DAT_01188730);
    iVar7 = iVar8 + 0xb;
    uVar4 = FUN_0040ef30(uVar4,iVar7);
    uVar4 = FUN_0040f200(uVar4,&DAT_01188730);
    uVar5 = FUN_0040f530(uVar4,uVar5,10,2);
    FUN_0040f590(uVar5);
    FUN_00409900();
    uVar5 = FUN_0040f200(PTR_DAT_02002470,&LAB_01188770);
    uVar5 = FUN_0040ef30(uVar5,iVar9);
    uVar5 = FUN_0040f200(uVar5,&DAT_01188730);
    iVar8 = iVar8 + 4;
    uVar5 = FUN_0040ef30(uVar5,iVar8);
    uVar5 = FUN_0040f200(uVar5,&DAT_01188730);
    uVar5 = FUN_0040ef30(uVar5,0);
    uVar5 = FUN_0040f200(uVar5,&DAT_01188730);
    uVar5 = FUN_0040f530(uVar5,uVar3,10,2);
    FUN_0040f590(uVar5);
    FUN_00409900();
    uVar5 = FUN_0040f200(PTR_DAT_02002470,&PTR_DAT_01188744);
    uVar5 = FUN_0040ef30(uVar5,iVar9);
    uVar5 = FUN_0040f200(uVar5,&DAT_01188730);
    uVar5 = FUN_0040ef30(uVar5,iVar8);
    uVar5 = FUN_0040f200(uVar5,&DAT_01188730);
    uVar5 = FUN_0040ef30(uVar5,iVar7);
    uVar5 = FUN_0040f200(uVar5,&DAT_01188730);
    uVar5 = FUN_0040f530(uVar5,dVar1,10,2);
    FUN_0040f590(uVar5);
    FUN_00409900();
    uVar5 = FUN_0040f3d0(PTR_DAT_02002470,0x58);
    uVar5 = FUN_0040ef30(uVar5,iVar9);
    uVar5 = FUN_0040f200(uVar5,&DAT_01188730);
    uVar5 = FUN_0040ef30(uVar5,iVar11);
    uVar5 = FUN_0040f200(uVar5,&DAT_01188730);
    uVar5 = FUN_0040ef30(uVar5,iVar8);
    uVar5 = FUN_0040f200(uVar5,&DAT_01188730);
    uVar5 = FUN_0040ef30(uVar5,iVar7);
    uVar5 = FUN_0040f200(uVar5,&DAT_01188730);
    uVar5 = FUN_0040f200(uVar5,L"OPAMP");
    FUN_0040f590(uVar5);
    FUN_00409900();
  }
  else {
    FUN_011877d0(param_1);
  }
  return;
}

