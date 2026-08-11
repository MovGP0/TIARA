/* Ghidra address: 018bcd10 */
/* Ghidra symbol: FUN_018bcd10 */


undefined8 FUN_018bcd10(longlong *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = 0;
  local_28 = 0;
  iVar1 = (**(code **)*param_1)(param_1);
  if ((iVar1 != 0) && (-1 < param_2)) {
    iVar1 = (**(code **)*param_1)(param_1);
    if (param_2 < iVar1) {
      lVar3 = FUN_018039f0(param_1[0xf],param_2);
      iVar1 = FUN_0043e420(*(undefined8 *)(lVar3 + 0x20),L"TfrxReportPage");
      if (iVar1 == 0) {
LAB_018bcdac:
        lVar4 = (**(code **)(*param_1 + 8))(param_1,param_2);
      }
      else {
        iVar1 = FUN_0043e420(*(undefined8 *)(lVar3 + 0x20),L"TfrxDMPPage");
        if (iVar1 == 0) goto LAB_018bcdac;
        FUN_00416dc0(&local_30,*(undefined8 *)(lVar3 + 0x20),5,0x100);
        uVar2 = FUN_0043fc00(local_30);
        lVar4 = FUN_004aeac0(param_1[0x11],uVar2);
      }
      uVar2 = FUN_0040c770(*(undefined8 *)(lVar4 + 0xa8));
      local_20 = CONCAT44(local_20._4_4_,uVar2);
      uVar2 = FUN_0040c770(*(undefined8 *)(lVar4 + 0xb0));
      local_20 = CONCAT44(uVar2,(undefined4)local_20);
      iVar1 = FUN_00414cb0(*(undefined8 *)(lVar3 + 0x30));
      if (10 < iVar1) {
        FUN_01803cc0(lVar3,&local_28,L"PaperWidth");
        iVar1 = FUN_00414cb0(local_28);
        if (0 < iVar1) {
          dVar5 = (double)FUN_0180d800(local_28);
          uVar2 = FUN_0040c770(dVar5 * *(double *)PTR_DAT_02002c30);
          local_20 = CONCAT44(local_20._4_4_,uVar2);
        }
        FUN_01803cc0(lVar3,&local_28,L"PaperHeight");
        iVar1 = FUN_00414cb0(local_28);
        if (0 < iVar1) {
          dVar5 = (double)FUN_0180d800(local_28);
          uVar2 = FUN_0040c770(dVar5 * *(double *)PTR_DAT_02002c30);
          local_20 = CONCAT44(uVar2,(undefined4)local_20);
        }
      }
      goto LAB_018bcea0;
    }
  }
  local_20 = FUN_00498310(0,0);
LAB_018bcea0:
  FUN_00414560(&local_30,2);
  return local_20;
}

