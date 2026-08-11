/* Ghidra address: 01188780 */
/* Ghidra symbol: FUN_01188780 */


void FUN_01188780(int param_1,longlong *param_2)

{
  undefined8 uVar1;
  double dVar2;
  longlong lVar3;
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
  lVar3 = (longlong)param_1;
  uVar5 = *(undefined8 *)(*param_2 + 0x10 + lVar3 * 8);
  uVar1 = *(undefined8 *)(*param_2 + 0x978 + lVar3 * 8);
  uVar4 = *(undefined8 *)(*param_2 + 0x12e0 + lVar3 * 8);
  dVar2 = *(double *)(*param_2 + 0x1c48 + lVar3 * 8);
  if (dVar2 == 0.0) {
    uVar4 = FUN_0040f200(PTR_DAT_02002470,L"*    Stage Number ");
    uVar4 = FUN_0040ef30(uVar4,iVar9);
    FUN_0040f590(uVar4);
    FUN_00409900();
    uVar4 = FUN_0040f3d0(PTR_DAT_02002470,0x52);
    iVar7 = iVar8 + 1;
    uVar4 = FUN_0040ef30(uVar4,iVar7);
    uVar4 = FUN_0040f200(uVar4,&DAT_01188ec8);
    uVar4 = FUN_0040ef30(uVar4,iVar7);
    uVar4 = FUN_0040f200(uVar4,&DAT_01188ec8);
    iVar10 = iVar8 + 2;
    uVar4 = FUN_0040ef30(uVar4,iVar10);
    uVar4 = FUN_0040f200(uVar4,&DAT_01188ec8);
    uVar5 = FUN_0040f530(uVar4,uVar5,10,2);
    FUN_0040f590(uVar5);
    FUN_00409900();
    uVar5 = FUN_0040f3d0(PTR_DAT_02002470,0x43);
    uVar5 = FUN_0040ef30(uVar5,iVar7);
    uVar5 = FUN_0040f200(uVar5,&DAT_01188ec8);
    uVar5 = FUN_0040ef30(uVar5,iVar10);
    uVar5 = FUN_0040f200(uVar5,&DAT_01188ec8);
    uVar5 = FUN_0040ef30(uVar5,0);
    uVar5 = FUN_0040f200(uVar5,&DAT_01188ec8);
    uVar5 = FUN_0040f570(uVar5,uVar1);
    FUN_0040f590(uVar5);
    FUN_00409900();
    uVar5 = FUN_0040f200(PTR_DAT_02002470,&PTR_DAT_01188edc);
    uVar5 = FUN_0040ef30(uVar5,iVar9);
    uVar5 = FUN_0040f200(uVar5,&DAT_01188ec8);
    uVar5 = FUN_0040ef30(uVar5,iVar8 + 3);
    uVar5 = FUN_0040f200(uVar5,&DAT_01188ec8);
    uVar5 = FUN_0040ef30(uVar5,iVar8 + 0xb);
    uVar5 = FUN_0040f200(uVar5,&DAT_01188ec8);
    uVar5 = FUN_0040ef30(uVar5,1);
    FUN_0040f590(uVar5);
    FUN_00409900();
    uVar5 = FUN_0040f3d0(PTR_DAT_02002470,0x58);
    uVar5 = FUN_0040ef30(uVar5,iVar9);
    uVar5 = FUN_0040f200(uVar5,&DAT_01188ec8);
    uVar5 = FUN_0040ef30(uVar5,iVar10);
    uVar5 = FUN_0040f200(uVar5,&DAT_01188ec8);
    uVar5 = FUN_0040ef30(uVar5,iVar8 + 3);
    uVar5 = FUN_0040f200(uVar5,&DAT_01188ec8);
    uVar5 = FUN_0040ef30(uVar5,iVar8 + 0xb);
    uVar5 = FUN_0040f200(uVar5,&DAT_01188ec8);
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
    uVar6 = FUN_0040f3d0(PTR_DAT_02002470,0x52);
    iVar7 = iVar8 + 1;
    uVar6 = FUN_0040ef30(uVar6,iVar7);
    uVar6 = FUN_0040f200(uVar6,&DAT_01188ec8);
    uVar6 = FUN_0040ef30(uVar6,iVar7);
    uVar6 = FUN_0040f200(uVar6,&DAT_01188ec8);
    iVar10 = iVar8 + 2;
    uVar6 = FUN_0040ef30(uVar6,iVar10);
    uVar6 = FUN_0040f200(uVar6,&DAT_01188ec8);
    uVar6 = FUN_0040f530(uVar6,uVar5,10,2);
    FUN_0040f590(uVar6);
    FUN_00409900();
    uVar6 = FUN_0040f3d0(PTR_DAT_02002470,0x52);
    uVar6 = FUN_0040ef30(uVar6,iVar10);
    uVar6 = FUN_0040f200(uVar6,&DAT_01188ec8);
    uVar6 = FUN_0040ef30(uVar6,iVar10);
    uVar6 = FUN_0040f200(uVar6,&DAT_01188ec8);
    iVar11 = iVar8 + 3;
    uVar6 = FUN_0040ef30(uVar6,iVar11);
    uVar6 = FUN_0040f200(uVar6,&DAT_01188ec8);
    uVar5 = FUN_0040f530(uVar6,uVar5,10,2);
    FUN_0040f590(uVar5);
    FUN_00409900();
    uVar5 = FUN_0040f3d0(PTR_DAT_02002470,0x43);
    uVar5 = FUN_0040ef30(uVar5,iVar7);
    uVar5 = FUN_0040f200(uVar5,&DAT_01188ec8);
    uVar5 = FUN_0040ef30(uVar5,iVar11);
    uVar5 = FUN_0040f200(uVar5,&DAT_01188ec8);
    uVar5 = FUN_0040ef30(uVar5,0);
    uVar5 = FUN_0040f200(uVar5,&DAT_01188ec8);
    uVar5 = FUN_0040f570(uVar5,uVar1);
    FUN_0040f590(uVar5);
    FUN_00409900();
    uVar5 = FUN_0040f3d0(PTR_DAT_02002470,0x43);
    uVar5 = FUN_0040ef30(uVar5,iVar10);
    uVar5 = FUN_0040f200(uVar5,&DAT_01188ec8);
    uVar5 = FUN_0040ef30(uVar5,iVar10);
    uVar5 = FUN_0040f200(uVar5,&DAT_01188ec8);
    iVar7 = iVar8 + 0xb;
    uVar5 = FUN_0040ef30(uVar5,iVar7);
    uVar5 = FUN_0040f200(uVar5,&DAT_01188ec8);
    uVar5 = FUN_0040f570(uVar5,uVar1);
    FUN_0040f590(uVar5);
    FUN_00409900();
    uVar5 = FUN_0040f200(PTR_DAT_02002470,&LAB_01188f08);
    uVar5 = FUN_0040ef30(uVar5,iVar9);
    uVar5 = FUN_0040f200(uVar5,&DAT_01188ec8);
    iVar8 = iVar8 + 4;
    uVar5 = FUN_0040ef30(uVar5,iVar8);
    uVar5 = FUN_0040f200(uVar5,&DAT_01188ec8);
    uVar5 = FUN_0040ef30(uVar5,0);
    uVar5 = FUN_0040f200(uVar5,&DAT_01188ec8);
    uVar5 = FUN_0040f530(uVar5,uVar4,10,2);
    FUN_0040f590(uVar5);
    FUN_00409900();
    uVar5 = FUN_0040f200(PTR_DAT_02002470,&PTR_DAT_01188edc);
    uVar5 = FUN_0040ef30(uVar5,iVar9);
    uVar5 = FUN_0040f200(uVar5,&DAT_01188ec8);
    uVar5 = FUN_0040ef30(uVar5,iVar8);
    uVar5 = FUN_0040f200(uVar5,&DAT_01188ec8);
    uVar5 = FUN_0040ef30(uVar5,iVar7);
    uVar5 = FUN_0040f200(uVar5,&DAT_01188ec8);
    uVar5 = FUN_0040f530(uVar5,dVar2,10,2);
    FUN_0040f590(uVar5);
    FUN_00409900();
    uVar5 = FUN_0040f3d0(PTR_DAT_02002470,0x58);
    uVar5 = FUN_0040ef30(uVar5,iVar9);
    uVar5 = FUN_0040f200(uVar5,&DAT_01188ec8);
    uVar5 = FUN_0040ef30(uVar5,iVar11);
    uVar5 = FUN_0040f200(uVar5,&DAT_01188ec8);
    uVar5 = FUN_0040ef30(uVar5,iVar8);
    uVar5 = FUN_0040f200(uVar5,&DAT_01188ec8);
    uVar5 = FUN_0040ef30(uVar5,iVar7);
    uVar5 = FUN_0040f200(uVar5,&DAT_01188ec8);
    uVar5 = FUN_0040f200(uVar5,L"OPAMP");
    FUN_0040f590(uVar5);
    FUN_00409900();
  }
  else {
    FUN_011877d0(param_1);
  }
  return;
}

