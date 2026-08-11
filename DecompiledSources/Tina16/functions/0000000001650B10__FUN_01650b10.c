/* Ghidra address: 01650b10 */
/* Ghidra symbol: FUN_01650b10 */


void FUN_01650b10(longlong param_1)

{
  undefined8 *puVar1;
  double *pdVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  ulonglong in_stack_fffffffffffffee8;
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
  
  FUN_01b0fae0(param_1,0,*(ushort *)(*(longlong *)(param_1 + 0x70) + 0x48) / 2 - 1);
  uVar9 = 0;
  uVar7 = FUN_016586b0(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                       *(undefined8 *)(param_1 + 0x40),0,0,0,
                       in_stack_fffffffffffffee8 & 0xffffffffffffff00,0);
  *(undefined8 *)(param_1 + 0x50) = uVar7;
  iVar4 = FUN_01b0faf0(param_1,0);
  local_f0 = 0;
  if (-1 < iVar4) {
    iVar4 = iVar4 + 1;
    do {
      lVar3 = *(longlong *)(param_1 + 0x58);
      FUN_01b0f890(local_48,*(double *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x50) +
                             (longlong)(int)(local_f0 * 2) * 8) - *(double *)(param_1 + 0x50),
                   *(undefined8 *)
                    (*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x50) +
                    (longlong)(int)(local_f0 * 2 + 1) * 8));
      FUN_005980d0(lVar3 + 8,local_48);
      local_f0 = local_f0 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x58) + 0x10);
  local_f0 = 0;
  if (-1 < iVar4 + -2) {
    iVar4 = iVar4 + -1;
    do {
      lVar3 = *(longlong *)(param_1 + 0x58);
      uVar5 = local_f0 + 1;
      if (*(uint *)(lVar3 + 0x10) <= uVar5) {
        FUN_00594f90();
      }
      puVar1 = (undefined8 *)(*(longlong *)(lVar3 + 8) + (longlong)(int)uVar5 * 0x10);
      local_60 = *puVar1;
      local_58 = (double)puVar1[1];
      lVar3 = *(longlong *)(param_1 + 0x58);
      if (*(uint *)(lVar3 + 0x10) <= local_f0) {
        FUN_00594f90();
      }
      lVar6 = (longlong)(int)local_f0;
      puVar1 = (undefined8 *)(*(longlong *)(lVar3 + 8) + lVar6 * 0x10);
      local_70 = *puVar1;
      local_68 = (double)puVar1[1];
      lVar3 = *(longlong *)(param_1 + 0x58);
      if (*(uint *)(lVar3 + 0x10) <= uVar5) {
        FUN_00594f90();
      }
      pdVar2 = (double *)(*(longlong *)(lVar3 + 8) + (longlong)(int)uVar5 * 0x10);
      local_80 = *pdVar2;
      dStack_78 = pdVar2[1];
      lVar3 = *(longlong *)(param_1 + 0x58);
      if (*(uint *)(lVar3 + 0x10) <= local_f0) {
        FUN_00594f90();
      }
      pdVar2 = (double *)(*(longlong *)(lVar3 + 8) + lVar6 * 0x10);
      local_90 = *pdVar2;
      dStack_88 = pdVar2[1];
      dVar8 = (local_58 - local_68) / (local_80 - local_90);
      local_98 = dVar8;
      FUN_00597e50(*(longlong *)(param_1 + 0x60) + 8,&local_98);
      lVar3 = *(longlong *)(param_1 + 0x58);
      if (*(uint *)(lVar3 + 0x10) <= local_f0) {
        FUN_00594f90();
      }
      puVar1 = (undefined8 *)(*(longlong *)(lVar3 + 8) + lVar6 * 0x10);
      local_b0 = *puVar1;
      local_a8 = (double)puVar1[1];
      lVar3 = *(longlong *)(param_1 + 0x58);
      if (*(uint *)(lVar3 + 0x10) <= local_f0) {
        FUN_00594f90();
      }
      pdVar2 = (double *)(*(longlong *)(lVar3 + 8) + (longlong)(int)local_f0 * 0x10);
      local_c0 = *pdVar2;
      dStack_b8 = pdVar2[1];
      local_c8 = local_a8 - local_c0 * dVar8;
      FUN_00597e50(*(longlong *)(param_1 + 0x68) + 8,&local_c8);
      uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
      local_f0 = local_f0 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  uVar7 = FUN_0165a4e0(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                       **(undefined8 **)(*(longlong *)(param_1 + 0x70) + 0x18),0,0,
                       CONCAT44(uVar10,1),0,0,0,1);
  *(undefined8 *)(param_1 + 0x48) = uVar7;
  if (*PTR_DAT_02002b00 == '\0') {
    iVar4 = FUN_01b0faf0(param_1,0);
    local_f0 = 0;
    if (-1 < iVar4 + -1) {
      do {
        FUN_01b0faa0(param_1,0,local_f0);
        local_f0 = local_f0 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    FUN_01b0fa30(param_1,0,0);
  }
  else {
    iVar4 = FUN_01b0faf0(param_1,0);
    local_f0 = -1;
    if (-2 < iVar4) {
      iVar4 = iVar4 + 2;
      do {
        FUN_01b0faa0(param_1,0,local_f0);
        local_f0 = local_f0 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    FUN_01b0fa30(param_1,0,1);
  }
  return;
}

