/* Ghidra address: 015040f0 */
/* Ghidra symbol: FUN_015040f0 */


void FUN_015040f0(longlong *param_1,longlong *param_2)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  iVar3 = (**(code **)(*param_1 + 0xe8))(param_1);
  lVar5 = FUN_00409570((longlong)(iVar3 * 4));
  *param_2 = lVar5;
  dVar1 = (double)param_1[0x10];
  if (*param_2 != 0) {
    iVar3 = (**(code **)(*param_1 + 0xe8))();
    iVar9 = 0;
    if (-1 < iVar3 + -1) {
      do {
        uVar8 = 0;
        dVar2 = (double)param_1[0x10];
        iVar4 = (**(code **)(*(longlong *)param_1[1] + 0x28))();
        iVar10 = 0;
        if (-1 < iVar4 + -1) {
          do {
            uVar6 = (**(code **)(*(longlong *)param_1[1] + 0x30))((longlong *)param_1[1],iVar10);
            lVar5 = FUN_004113f0(uVar6,&PTR_FUN_01106728);
            if (*(longlong *)(lVar5 + 0x148) != 0) {
              uVar7 = FUN_01d3b850(*(longlong *)(lVar5 + 0x148),
                                   (double)iVar9 * dVar2 + dVar1 / 100.0);
              uVar8 = uVar8 | (uint)((byte)PTR_DAT_020055c0[uVar7 & 0xff] & 3) <<
                              ((char)iVar10 * '\x02' & 0x1fU);
            }
            iVar10 = iVar10 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        *(uint *)(*param_2 + (longlong)iVar9 * 4) = uVar8;
        iVar9 = iVar9 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}

