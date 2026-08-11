/* Ghidra address: 01676720 */
/* Ghidra symbol: FUN_01676720 */


undefined8 *
FUN_01676720(longlong param_1,undefined8 *param_2,undefined8 param_3,ulonglong *param_4,
            undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 local_1c4;
  undefined4 local_1c0;
  int local_80;
  int iStack_7c;
  
  uVar3 = *param_4;
  uVar12 = *param_5;
  uVar14 = param_5[1];
  local_80 = (int)uVar3;
  if (local_80 == -1) {
    uVar5 = FUN_01b0fa20(param_1,0);
    local_1c4 = FUN_01b0fa40(param_1,0,uVar5);
  }
  else {
    local_1c4 = FUN_01b0fa40(param_1,0,uVar3 & 0xffffffff);
  }
  uVar5 = FUN_00b905e0(local_1c4,0);
  iVar6 = FUN_01b0faf0(param_1,0);
  uVar7 = FUN_00b905f0(uVar5,iVar6 + -1);
  iStack_7c = (int)(uVar3 >> 0x20);
  if (iStack_7c == -1) {
    uVar5 = FUN_01b0fa20(param_1,1);
    local_1c0 = FUN_01b0fa40(param_1,1,uVar5);
  }
  else {
    local_1c0 = FUN_01b0fa40(param_1,1,iStack_7c);
  }
  uVar5 = FUN_00b905e0(local_1c0,0);
  iVar6 = FUN_01b0faf0(param_1,1);
  uVar8 = FUN_00b905f0(uVar5,iVar6 + -1);
  if (-1 < (int)uVar7) {
    iVar6 = FUN_01b0faf0(param_1,0);
    if (((int)uVar7 < iVar6) && (-1 < (int)uVar8)) {
      iVar6 = FUN_01b0faf0(param_1,1);
      if ((int)uVar8 < iVar6) {
        lVar4 = *(longlong *)(param_1 + 0x68);
        if (*(uint *)(lVar4 + 0x10) <= uVar7) {
          FUN_00594f90();
        }
        lVar10 = (longlong)(int)uVar7;
        lVar4 = *(longlong *)(*(longlong *)(lVar4 + 8) + lVar10 * 8);
        if (*(uint *)(lVar4 + 0x10) <= uVar8) {
          FUN_00594f90();
        }
        uVar11 = *(undefined8 *)(*(longlong *)(lVar4 + 8) + (longlong)(int)uVar8 * 0x18);
        lVar4 = *(longlong *)(param_1 + 0x68);
        if (*(uint *)(lVar4 + 0x10) <= uVar7) {
          FUN_00594f90();
        }
        lVar4 = *(longlong *)(*(longlong *)(lVar4 + 8) + lVar10 * 8);
        if (*(uint *)(lVar4 + 0x10) <= uVar8) {
          FUN_00594f90();
        }
        uVar13 = *(undefined8 *)(*(longlong *)(lVar4 + 8) + (longlong)(int)uVar8 * 0x18 + 0x10);
        lVar4 = *(longlong *)(param_1 + 0x70);
        if (*(uint *)(lVar4 + 0x10) <= uVar7) {
          FUN_00594f90();
        }
        lVar4 = *(longlong *)(*(longlong *)(lVar4 + 8) + lVar10 * 8);
        if (*(uint *)(lVar4 + 0x10) <= uVar8) {
          FUN_00594f90();
        }
        uVar11 = FUN_01676430(uVar12,uVar11,uVar13,
                              *(undefined8 *)(*(longlong *)(lVar4 + 8) + (longlong)(int)uVar8 * 8));
        lVar4 = *(longlong *)(param_1 + 0x68);
        if (*(uint *)(lVar4 + 0x10) <= uVar7) {
          FUN_00594f90();
        }
        lVar4 = *(longlong *)(*(longlong *)(lVar4 + 8) + lVar10 * 8);
        uVar9 = uVar8 + 1;
        if (*(uint *)(lVar4 + 0x10) <= uVar9) {
          FUN_00594f90();
        }
        uVar13 = *(undefined8 *)(*(longlong *)(lVar4 + 8) + (longlong)(int)uVar9 * 0x18);
        lVar4 = *(longlong *)(param_1 + 0x68);
        if (*(uint *)(lVar4 + 0x10) <= uVar7) {
          FUN_00594f90();
        }
        lVar4 = *(longlong *)(*(longlong *)(lVar4 + 8) + lVar10 * 8);
        if (*(uint *)(lVar4 + 0x10) <= uVar9) {
          FUN_00594f90();
        }
        uVar1 = *(undefined8 *)(*(longlong *)(lVar4 + 8) + (longlong)(int)(uVar8 + 1) * 0x18 + 0x10)
        ;
        lVar4 = *(longlong *)(param_1 + 0x70);
        if (*(uint *)(lVar4 + 0x10) <= uVar7) {
          FUN_00594f90();
        }
        lVar4 = *(longlong *)(*(longlong *)(lVar4 + 8) + (longlong)(int)uVar7 * 8);
        if (*(uint *)(lVar4 + 0x10) <= uVar9) {
          FUN_00594f90();
        }
        uVar12 = FUN_01676430(uVar12,uVar13,uVar1,
                              *(undefined8 *)
                               (*(longlong *)(lVar4 + 8) + (longlong)(int)(uVar8 + 1) * 8));
        lVar4 = *(longlong *)(param_1 + 0x68);
        if (*(uint *)(lVar4 + 0x10) <= uVar7) {
          FUN_00594f90();
        }
        lVar4 = *(longlong *)(*(longlong *)(lVar4 + 8) + (longlong)(int)uVar7 * 8);
        if (*(uint *)(lVar4 + 0x10) <= uVar8) {
          FUN_00594f90();
        }
        uVar13 = *(undefined8 *)(*(longlong *)(lVar4 + 8) + (longlong)(int)uVar8 * 0x18 + 8);
        lVar4 = *(longlong *)(param_1 + 0x68);
        if (*(uint *)(lVar4 + 0x10) <= uVar7) {
          FUN_00594f90();
        }
        lVar4 = *(longlong *)(*(longlong *)(lVar4 + 8) + (longlong)(int)uVar7 * 8);
        if (*(uint *)(lVar4 + 0x10) <= uVar8) {
          FUN_00594f90();
        }
        uVar1 = *(undefined8 *)(*(longlong *)(lVar4 + 8) + (longlong)(int)uVar8 * 0x18 + 0x10);
        lVar4 = *(longlong *)(param_1 + 0x78);
        if (*(uint *)(lVar4 + 0x10) <= uVar7) {
          FUN_00594f90();
        }
        lVar4 = *(longlong *)(*(longlong *)(lVar4 + 8) + (longlong)(int)uVar7 * 8);
        if (*(uint *)(lVar4 + 0x10) <= uVar8) {
          FUN_00594f90();
        }
        uVar13 = FUN_01676430(uVar14,uVar13,uVar1,
                              *(undefined8 *)(*(longlong *)(lVar4 + 8) + (longlong)(int)uVar8 * 8));
        lVar4 = *(longlong *)(param_1 + 0x68);
        if (*(uint *)(lVar4 + 0x10) <= uVar7 + 1) {
          FUN_00594f90();
        }
        lVar4 = *(longlong *)(*(longlong *)(lVar4 + 8) + (longlong)(int)(uVar7 + 1) * 8);
        if (*(uint *)(lVar4 + 0x10) <= uVar8) {
          FUN_00594f90();
        }
        uVar1 = *(undefined8 *)(*(longlong *)(lVar4 + 8) + (longlong)(int)uVar8 * 0x18 + 8);
        lVar4 = *(longlong *)(param_1 + 0x68);
        if (*(uint *)(lVar4 + 0x10) <= uVar7 + 1) {
          FUN_00594f90();
        }
        lVar4 = *(longlong *)(*(longlong *)(lVar4 + 8) + (longlong)(int)(uVar7 + 1) * 8);
        if (*(uint *)(lVar4 + 0x10) <= uVar8) {
          FUN_00594f90();
        }
        uVar2 = *(undefined8 *)(*(longlong *)(lVar4 + 8) + (longlong)(int)uVar8 * 0x18 + 0x10);
        lVar4 = *(longlong *)(param_1 + 0x78);
        if (*(uint *)(lVar4 + 0x10) <= uVar7 + 1) {
          FUN_00594f90();
        }
        lVar4 = *(longlong *)(*(longlong *)(lVar4 + 8) + (longlong)(int)(uVar7 + 1) * 8);
        if (*(uint *)(lVar4 + 0x10) <= uVar8) {
          FUN_00594f90();
        }
        uVar14 = FUN_01676430(uVar14,uVar1,uVar2,
                              *(undefined8 *)(*(longlong *)(lVar4 + 8) + (longlong)(int)uVar8 * 8));
        lVar4 = *(longlong *)(param_1 + 0x68);
        if (*(uint *)(lVar4 + 0x10) <= uVar7) {
          FUN_00594f90();
        }
        lVar4 = *(longlong *)(*(longlong *)(lVar4 + 8) + (longlong)(int)uVar7 * 8);
        if (*(int *)(lVar4 + 0x10) == 0) {
          FUN_00594f90();
        }
        uVar1 = **(undefined8 **)(lVar4 + 8);
        lVar4 = *(longlong *)(param_1 + 0x68);
        if (*(uint *)(lVar4 + 0x10) <= uVar7 + 1) {
          FUN_00594f90();
        }
        lVar4 = *(longlong *)(*(longlong *)(lVar4 + 8) + (longlong)(int)(uVar7 + 1) * 8);
        if (*(int *)(lVar4 + 0x10) == 0) {
          FUN_00594f90();
        }
        uVar14 = FUN_01676390(uVar1,uVar13,**(undefined8 **)(lVar4 + 8),uVar14);
        lVar4 = *(longlong *)(param_1 + 0x68);
        if (*(int *)(lVar4 + 0x10) == 0) {
          FUN_00594f90();
        }
        lVar4 = **(longlong **)(lVar4 + 8);
        if (*(uint *)(lVar4 + 0x10) <= uVar8) {
          FUN_00594f90();
        }
        uVar13 = *(undefined8 *)(*(longlong *)(lVar4 + 8) + (longlong)(int)uVar8 * 0x18 + 8);
        lVar4 = *(longlong *)(param_1 + 0x68);
        if (*(int *)(lVar4 + 0x10) == 0) {
          FUN_00594f90();
        }
        lVar4 = **(longlong **)(lVar4 + 8);
        if (*(uint *)(lVar4 + 0x10) <= uVar9) {
          FUN_00594f90();
        }
        uVar12 = FUN_01676390(uVar13,uVar11,
                              *(undefined8 *)
                               (*(longlong *)(lVar4 + 8) + (longlong)(int)(uVar8 + 1) * 0x18 + 8),
                              uVar12);
        *param_2 = uVar14;
        param_2[1] = uVar12;
      }
    }
  }
  return param_2;
}

