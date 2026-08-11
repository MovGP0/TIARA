/* Ghidra address: 01651040 */
/* Ghidra symbol: FUN_01651040 */


void FUN_01651040(longlong param_1)

{
  undefined8 *puVar1;
  double *pdVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  ulonglong in_stack_fffffffffffffed8;
  uint7 uVar14;
  undefined8 local_f8;
  uint local_f0;
  double local_c8;
  double local_c0;
  double dStack_b8;
  undefined8 local_b0;
  double local_a8;
  double local_98;
  double local_90;
  double dStack_88;
  double local_80;
  double dStack_78;
  undefined8 local_70;
  double local_68;
  undefined8 local_60;
  double local_58;
  undefined1 local_48 [32];
  
  lVar4 = FUN_01650ac0(*(undefined8 *)(param_1 + 0x40),0x32);
  *(longlong *)(param_1 + 0x78) = lVar4;
  if (lVar4 == 0) {
    FUN_0044d440();
  }
  else {
    FUN_01b0fae0(param_1,0,*(int *)(lVar4 + 0x54) + -1);
    uVar12 = 0;
    in_stack_fffffffffffffed8 = in_stack_fffffffffffffed8 & 0xffffffffffffff00;
    uVar9 = FUN_016586b0(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                         *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),0,0,0,
                         in_stack_fffffffffffffed8,0);
    *(undefined8 *)(param_1 + 0x50) = uVar9;
    lVar4 = *(longlong *)(param_1 + 0x78);
    bVar7 = *(longlong *)(lVar4 + 0x20) == 0;
    if (bVar7) {
      bVar8 = false;
    }
    else {
      bVar8 = *(longlong *)(*(longlong *)(lVar4 + 0x20) + 8) == lVar4;
    }
    iVar6 = *(int *)(lVar4 + 0x54);
    local_f0 = 0;
    if (-1 < iVar6 + -1) {
      do {
        lVar4 = (longlong)(int)local_f0;
        in_stack_fffffffffffffed8 = in_stack_fffffffffffffed8 & 0xffffffffffffff00;
        dVar10 = (double)FUN_016586b0(*(undefined8 *)(param_1 + 0x30),
                                      *(undefined8 *)(param_1 + 0x38),
                                      *(undefined8 *)
                                       (*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x60) +
                                       lVar4 * 0x10),0,0,0,in_stack_fffffffffffffed8,0);
        dVar11 = *(double *)(param_1 + 0x50);
        uVar14 = (uint7)(in_stack_fffffffffffffed8 >> 8);
        if (bVar7) {
          uVar12 = 0;
          in_stack_fffffffffffffed8 = (ulonglong)uVar14 << 8;
          uVar9 = FUN_016586b0(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                               *(undefined8 *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x60) + 8 +
                                lVar4 * 0x10),0,0,0,in_stack_fffffffffffffed8,0);
        }
        else {
          if (bVar8) {
            lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x20);
            local_f8 = *(undefined8 *)(lVar5 + 8);
            *(undefined8 *)(lVar5 + 8) =
                 *(undefined8 *)
                  (*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x60) + 8 + lVar4 * 0x10);
          }
          else {
            lVar5 = *(longlong *)(param_1 + 0x78);
            local_f8 = *(undefined8 *)(*(longlong *)(lVar5 + 0x20) + 0x10);
            *(undefined8 *)(*(longlong *)(lVar5 + 0x20) + 0x10) =
                 *(undefined8 *)(*(longlong *)(lVar5 + 0x60) + 8 + lVar4 * 0x10);
          }
          uVar12 = 0;
          in_stack_fffffffffffffed8 = (ulonglong)uVar14 << 8;
          uVar9 = FUN_016586b0(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                               *(undefined8 *)(param_1 + 0x40),0,0,0,in_stack_fffffffffffffed8,0);
          if (bVar8) {
            *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x20) + 8) = local_f8;
          }
          else {
            *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x20) + 0x10) = local_f8;
          }
        }
        lVar4 = *(longlong *)(param_1 + 0x58);
        FUN_01b0f890(local_48,dVar10 - dVar11,uVar9);
        FUN_005980d0(lVar4 + 8,local_48);
        local_f0 = local_f0 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
    if (!bVar7) {
      if (bVar8) {
        local_f8 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x20) + 8);
        *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x20) + 8) =
             *(undefined8 *)(param_1 + 0x78);
      }
      else {
        local_f8 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x20) + 0x10);
        *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x20) + 0x10) =
             *(undefined8 *)(param_1 + 0x78);
      }
    }
    iVar6 = *(int *)(*(longlong *)(param_1 + 0x58) + 0x10);
    local_f0 = 0;
    if (-1 < iVar6 + -2) {
      iVar6 = iVar6 + -1;
      do {
        lVar4 = *(longlong *)(param_1 + 0x58);
        uVar3 = local_f0 + 1;
        if (*(uint *)(lVar4 + 0x10) <= uVar3) {
          FUN_00594f90();
        }
        puVar1 = (undefined8 *)(*(longlong *)(lVar4 + 8) + (longlong)(int)uVar3 * 0x10);
        local_60 = *puVar1;
        local_58 = (double)puVar1[1];
        lVar4 = *(longlong *)(param_1 + 0x58);
        if (*(uint *)(lVar4 + 0x10) <= local_f0) {
          FUN_00594f90();
        }
        lVar5 = (longlong)(int)local_f0;
        puVar1 = (undefined8 *)(*(longlong *)(lVar4 + 8) + lVar5 * 0x10);
        local_70 = *puVar1;
        local_68 = (double)puVar1[1];
        lVar4 = *(longlong *)(param_1 + 0x58);
        if (*(uint *)(lVar4 + 0x10) <= uVar3) {
          FUN_00594f90();
        }
        pdVar2 = (double *)(*(longlong *)(lVar4 + 8) + (longlong)(int)uVar3 * 0x10);
        local_80 = *pdVar2;
        dStack_78 = pdVar2[1];
        lVar4 = *(longlong *)(param_1 + 0x58);
        if (*(uint *)(lVar4 + 0x10) <= local_f0) {
          FUN_00594f90();
        }
        pdVar2 = (double *)(*(longlong *)(lVar4 + 8) + lVar5 * 0x10);
        local_90 = *pdVar2;
        dStack_88 = pdVar2[1];
        dVar11 = (local_58 - local_68) / (local_80 - local_90);
        local_98 = dVar11;
        FUN_00597e50(*(longlong *)(param_1 + 0x60) + 8,&local_98);
        lVar4 = *(longlong *)(param_1 + 0x58);
        if (*(uint *)(lVar4 + 0x10) <= local_f0) {
          FUN_00594f90();
        }
        puVar1 = (undefined8 *)(*(longlong *)(lVar4 + 8) + lVar5 * 0x10);
        local_b0 = *puVar1;
        local_a8 = (double)puVar1[1];
        lVar4 = *(longlong *)(param_1 + 0x58);
        if (*(uint *)(lVar4 + 0x10) <= local_f0) {
          FUN_00594f90();
        }
        pdVar2 = (double *)(*(longlong *)(lVar4 + 8) + (longlong)(int)local_f0 * 0x10);
        local_c0 = *pdVar2;
        dStack_b8 = pdVar2[1];
        local_c8 = local_a8 - local_c0 * dVar11;
        FUN_00597e50(*(longlong *)(param_1 + 0x68) + 8,&local_c8);
        uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
        local_f0 = local_f0 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    uVar9 = FUN_01650ac0(**(undefined8 **)(*(longlong *)(param_1 + 0x70) + 0x18),0x33);
    uVar9 = FUN_0165a4e0(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),uVar9,0,0,
                         CONCAT44(uVar13,1),0,0,0,1);
    *(undefined8 *)(param_1 + 0x48) = uVar9;
    if (!bVar7) {
      if (bVar8) {
        *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x20) + 8) = local_f8;
      }
      else {
        *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x20) + 0x10) = local_f8;
      }
    }
  }
  if (*PTR_DAT_02002b00 == '\0') {
    iVar6 = FUN_01b0faf0(param_1,0);
    local_f0 = 0;
    if (-1 < iVar6 + -1) {
      do {
        FUN_01b0faa0(param_1,0,local_f0);
        local_f0 = local_f0 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    FUN_01b0fa30(param_1,0,0);
  }
  else {
    iVar6 = FUN_01b0faf0(param_1,0);
    local_f0 = -1;
    if (-2 < iVar6) {
      iVar6 = iVar6 + 2;
      do {
        FUN_01b0faa0(param_1,0,local_f0);
        local_f0 = local_f0 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    FUN_01b0fa30(param_1,0,1);
  }
  return;
}

