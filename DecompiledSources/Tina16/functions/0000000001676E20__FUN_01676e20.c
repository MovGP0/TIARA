/* Ghidra address: 01676e20 */
/* Ghidra symbol: FUN_01676e20 */


undefined8 FUN_01676e20(longlong param_1,undefined8 param_2,ulonglong *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 unaff_XMM6_Qa;
  undefined4 local_110;
  undefined4 local_10c;
  int local_50;
  int iStack_4c;
  
  uVar4 = *param_3;
  uVar1 = *param_4;
  uVar14 = param_4[1];
  local_50 = (int)uVar4;
  if (local_50 == -1) {
    uVar6 = FUN_01b0fa20(param_1,0);
    local_110 = FUN_01b0fa40(param_1,0,uVar6);
  }
  else {
    local_110 = FUN_01b0fa40(param_1,0,uVar4 & 0xffffffff);
  }
  uVar6 = FUN_00b905e0(local_110,0);
  iVar7 = FUN_01b0faf0(param_1,0);
  uVar8 = FUN_00b905f0(uVar6,iVar7 + -1);
  iStack_4c = (int)(uVar4 >> 0x20);
  if (iStack_4c == -1) {
    uVar6 = FUN_01b0fa20(param_1,1);
    local_10c = FUN_01b0fa40(param_1,1,uVar6);
  }
  else {
    local_10c = FUN_01b0fa40(param_1,1,iStack_4c);
  }
  uVar6 = FUN_00b905e0(local_10c,0);
  iVar7 = FUN_01b0faf0(param_1,1);
  uVar9 = FUN_00b905f0(uVar6,iVar7 + -1);
  if (-1 < (int)uVar8) {
    iVar7 = FUN_01b0faf0(param_1,0);
    if ((int)uVar8 < iVar7) {
      lVar5 = *(longlong *)(param_1 + 0x68);
      if (*(uint *)(lVar5 + 0x10) <= uVar8) {
        FUN_00594f90();
      }
      lVar12 = (longlong)(int)uVar8;
      lVar5 = *(longlong *)(*(longlong *)(lVar5 + 8) + lVar12 * 8);
      if (*(uint *)(lVar5 + 0x10) <= uVar9) {
        FUN_00594f90();
      }
      lVar10 = (longlong)(int)uVar9;
      uVar13 = *(undefined8 *)(*(longlong *)(lVar5 + 8) + lVar10 * 0x18 + 8);
      lVar5 = *(longlong *)(param_1 + 0x68);
      if (*(uint *)(lVar5 + 0x10) <= uVar8) {
        FUN_00594f90();
      }
      lVar5 = *(longlong *)(*(longlong *)(lVar5 + 8) + lVar12 * 8);
      if (*(uint *)(lVar5 + 0x10) <= uVar9) {
        FUN_00594f90();
      }
      uVar2 = *(undefined8 *)(*(longlong *)(lVar5 + 8) + lVar10 * 0x18 + 0x10);
      lVar5 = *(longlong *)(param_1 + 0x78);
      if (*(uint *)(lVar5 + 0x10) <= uVar8) {
        FUN_00594f90();
      }
      lVar5 = *(longlong *)(*(longlong *)(lVar5 + 8) + lVar12 * 8);
      if (*(uint *)(lVar5 + 0x10) <= uVar9) {
        FUN_00594f90();
      }
      uVar13 = FUN_01676430(uVar14,uVar13,uVar2,
                            *(undefined8 *)(*(longlong *)(lVar5 + 8) + lVar10 * 8));
      lVar5 = *(longlong *)(param_1 + 0x68);
      uVar11 = uVar8 + 1;
      if (*(uint *)(lVar5 + 0x10) <= uVar11) {
        FUN_00594f90();
      }
      lVar5 = *(longlong *)(*(longlong *)(lVar5 + 8) + (longlong)(int)uVar11 * 8);
      if (*(uint *)(lVar5 + 0x10) <= uVar9) {
        FUN_00594f90();
      }
      uVar2 = *(undefined8 *)(*(longlong *)(lVar5 + 8) + lVar10 * 0x18 + 8);
      lVar5 = *(longlong *)(param_1 + 0x68);
      if (*(uint *)(lVar5 + 0x10) <= uVar11) {
        FUN_00594f90();
      }
      lVar5 = *(longlong *)(*(longlong *)(lVar5 + 8) + (longlong)(int)uVar11 * 8);
      if (*(uint *)(lVar5 + 0x10) <= uVar9) {
        FUN_00594f90();
      }
      uVar3 = *(undefined8 *)(*(longlong *)(lVar5 + 8) + (longlong)(int)uVar9 * 0x18 + 0x10);
      lVar5 = *(longlong *)(param_1 + 0x78);
      if (*(uint *)(lVar5 + 0x10) <= uVar11) {
        FUN_00594f90();
      }
      lVar5 = *(longlong *)(*(longlong *)(lVar5 + 8) + (longlong)(int)(uVar8 + 1) * 8);
      if (*(uint *)(lVar5 + 0x10) <= uVar9) {
        FUN_00594f90();
      }
      uVar14 = FUN_01676430(uVar14,uVar2,uVar3,
                            *(undefined8 *)(*(longlong *)(lVar5 + 8) + (longlong)(int)uVar9 * 8));
      lVar5 = *(longlong *)(param_1 + 0x68);
      if (*(uint *)(lVar5 + 0x10) <= uVar8) {
        FUN_00594f90();
      }
      lVar5 = *(longlong *)(*(longlong *)(lVar5 + 8) + (longlong)(int)uVar8 * 8);
      if (*(int *)(lVar5 + 0x10) == 0) {
        FUN_00594f90();
      }
      uVar2 = **(undefined8 **)(lVar5 + 8);
      lVar5 = *(longlong *)(param_1 + 0x68);
      if (*(uint *)(lVar5 + 0x10) <= uVar11) {
        FUN_00594f90();
      }
      lVar5 = *(longlong *)(*(longlong *)(lVar5 + 8) + (longlong)(int)(uVar8 + 1) * 8);
      if (*(int *)(lVar5 + 0x10) == 0) {
        FUN_00594f90();
      }
      unaff_XMM6_Qa = FUN_01676440(uVar1,uVar2,uVar13,**(undefined8 **)(lVar5 + 8),uVar14);
    }
  }
  return unaff_XMM6_Qa;
}

