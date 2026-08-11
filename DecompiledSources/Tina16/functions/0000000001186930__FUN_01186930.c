/* Ghidra address: 01186930 */
/* Ghidra symbol: FUN_01186930 */


undefined4
FUN_01186930(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  short sVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined4 local_2c;
  undefined8 local_20;
  
  local_20 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  FUN_00414b50(&local_20,local_res18);
  FUN_0040cf10(PTR_DAT_02002470,local_20,0);
  FUN_00409900();
  FUN_0040ca00(PTR_DAT_02002470);
  FUN_00409900();
  uVar2 = FUN_0040f200(PTR_DAT_02002470,local_res20);
  FUN_0040f590(uVar2);
  FUN_00409900();
  uVar2 = FUN_0040f200(PTR_DAT_02002470,L"*    Specify input source:");
  FUN_0040f590(uVar2);
  FUN_00409900();
  uVar2 = FUN_0040f200(PTR_DAT_02002470,L"Vs  11  0  AC  1.0  0.0");
  FUN_0040f590(uVar2);
  FUN_00409900();
  iVar4 = *(int *)(*param_2 + 0x3880);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      sVar1 = *(short *)(*param_1 + 0x1fa4);
      if (sVar1 == 0x48) {
        FUN_01187fc0(iVar3,param_2);
      }
      else if (sVar1 == 0x4c) {
        FUN_01188780(iVar3,param_2);
      }
      else if (sVar1 == 0x50) {
        FUN_011871f0(iVar3,param_2);
      }
      else {
        if (sVar1 != 0x53) {
          local_2c = 3;
          goto LAB_01186ddf;
        }
        FUN_011877d0(iVar3,param_2);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar4 = (*(int *)(*param_2 + 0x3880) + 1) * 10;
  uVar2 = FUN_0040f200(PTR_DAT_02002470,L"*    Voltage divider section");
  FUN_0040f590(uVar2);
  FUN_00409900();
  uVar2 = FUN_0040f200(PTR_DAT_02002470,L"Rx   ");
  uVar2 = FUN_0040ef30(uVar2,iVar4 + 1);
  uVar2 = FUN_0040f200(uVar2,&DAT_01186f2c);
  iVar4 = iVar4 + 2;
  uVar2 = FUN_0040ef30(uVar2,iVar4);
  uVar2 = FUN_0040f200(uVar2,&DAT_01186f2c);
  uVar2 = FUN_0040f530(uVar2,*(undefined8 *)*param_2,10,2);
  FUN_0040f590(uVar2);
  FUN_00409900();
  uVar2 = FUN_0040f200(PTR_DAT_02002470,L"Ry   ");
  uVar2 = FUN_0040ef30(uVar2,iVar4);
  uVar2 = FUN_0040f200(uVar2,&DAT_01186f2c);
  uVar2 = FUN_0040ef30(uVar2,0);
  uVar2 = FUN_0040f200(uVar2,&DAT_01186f2c);
  uVar2 = FUN_0040f530(uVar2,*(undefined8 *)(*param_2 + 8),10,2);
  FUN_0040f590(uVar2);
  FUN_00409900();
  uVar2 = FUN_0040f200(PTR_DAT_02002470,L"*    Sub-circuit model for op-amp");
  FUN_0040f590(uVar2);
  FUN_00409900();
  uVar2 = FUN_0040f200(PTR_DAT_02002470,L".SUBCKT OPAMP   1   2   6");
  FUN_0040f590(uVar2);
  FUN_00409900();
  uVar2 = FUN_0040f200(PTR_DAT_02002470,L"Rin  1   2  1E+008");
  FUN_0040f590(uVar2);
  FUN_00409900();
  uVar2 = FUN_0040f200(PTR_DAT_02002470,L"E1   3   0   1   2   1E+003");
  FUN_0040f590(uVar2);
  FUN_00409900();
  uVar2 = FUN_0040f200(PTR_DAT_02002470,L"Rx   3   4   1E+003");
  FUN_0040f590(uVar2);
  FUN_00409900();
  uVar2 = FUN_0040f200(PTR_DAT_02002470,L"Cx   4   0   1E-009");
  FUN_0040f590(uVar2);
  FUN_00409900();
  uVar2 = FUN_0040f200(PTR_DAT_02002470,L"E2   5   0   4   0   1E+003");
  FUN_0040f590(uVar2);
  FUN_00409900();
  uVar2 = FUN_0040f200(PTR_DAT_02002470,L"Rout   5   6   1E000");
  FUN_0040f590(uVar2);
  FUN_00409900();
  uVar2 = FUN_0040f200(PTR_DAT_02002470,L".ENDS");
  FUN_0040f590(uVar2);
  FUN_00409900();
  uVar2 = FUN_0040f200(PTR_DAT_02002470,L"*    Analysis modes");
  FUN_0040f590(uVar2);
  FUN_00409900();
  uVar2 = FUN_0040f200(PTR_DAT_02002470,L".AC   DEC   100   ");
  uVar2 = FUN_0040f530(uVar2,param_5,10,2);
  uVar2 = FUN_0040f200(uVar2,&DAT_01186f2c);
  uVar2 = FUN_0040f530(uVar2,param_6,10,2);
  FUN_0040f590(uVar2);
  FUN_00409900();
  uVar2 = FUN_0040f200(PTR_DAT_02002470,L".PROBE V(");
  uVar2 = FUN_0040ef30(uVar2,iVar4);
  uVar2 = FUN_0040f3d0(uVar2,0x29);
  FUN_0040f590(uVar2);
  FUN_00409900();
  uVar2 = FUN_0040f200(PTR_DAT_02002470,L".END");
  FUN_0040f590(uVar2);
  FUN_00409900();
  FUN_0040d150(PTR_DAT_02002470);
  FUN_00409900();
  local_2c = 0;
LAB_01186ddf:
  FUN_00414480(&local_20);
  FUN_00414560(&local_res18,2);
  return local_2c;
}

