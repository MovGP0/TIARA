/* Ghidra address: 01150d10 */
/* Ghidra symbol: FUN_01150d10 */


void FUN_01150d10(longlong param_1,double param_2)

{
  undefined8 *puVar1;
  float *pfVar2;
  char cVar3;
  int iVar4;
  double *pdVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  undefined1 *local_90;
  undefined8 local_88;
  undefined8 local_80;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  char local_61;
  double *local_60;
  int local_58;
  short local_52;
  double *local_50;
  undefined1 local_43;
  char local_42;
  undefined1 local_41;
  float *local_40 [4];
  
  local_88 = *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0xb0);
  uVar7 = (uint)*(ushort *)(param_1 + 0x44) * 2;
  local_74 = 1;
  uVar6 = (uint)*(ushort *)(param_1 + 0x44);
  while (uVar6 != 0) {
    uVar9 = FUN_00409eb0();
    *(undefined8 *)(*(longlong *)(param_1 + 0x50) + -8 + (longlong)local_74 * 8) = uVar9;
    local_74 = local_74 + 1;
    uVar7 = uVar7 - 1;
    uVar6 = uVar7;
  }
  *(undefined2 *)(param_1 + 0x4a) = 0;
  *(undefined2 *)(param_1 + 0x4c) = 1;
  if ((param_2 == 1.0) && (*(char *)(*(longlong *)(param_1 + 0xa0) + 0xb74) != '\0')) {
    iVar8 = *(int *)(*(longlong *)(param_1 + 0xa0) + 0x2d8);
    local_74 = 1;
    if (0 < iVar8) {
      do {
        local_80 = *(undefined8 *)
                    (*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x2b0) + -8 +
                    (longlong)local_74 * 8);
        iVar4 = FUN_01cfd2d0();
        local_70 = 0;
        if (-1 < iVar4 + -1) {
          do {
            local_98 = &local_43;
            local_90 = &local_41;
            pdVar5 = (double *)
                     FUN_01b05ad0(local_80,CONCAT31((int3)((uint)local_70 >> 8),
                                                    (char)local_70 + '\x01'),0,&local_42);
            local_60 = pdVar5;
            if (local_42 == '\x06') {
              if ((*(float *)(pdVar5 + 2) != 0.0) ||
                 (cVar3 = FUN_0114eb00(*(undefined1 *)(pdVar5 + 3),pdVar5[4]), cVar3 != '\0')) {
                FUN_01cc5c10(local_88,*pdVar5);
              }
            }
            else if ((local_42 == '\a') && (pdVar5[0x28] != 0.0)) {
              FUN_01cc5c40(local_88,*(undefined8 *)(*(longlong *)((longlong)pdVar5 + 0x26) + 9));
            }
            local_70 = local_70 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        local_74 = local_74 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  else {
    local_6c = *(int *)(*(longlong *)(param_1 + 0xa0) + 0x2d8);
    local_74 = 1;
    if (0 < local_6c) {
      do {
        local_80 = *(undefined8 *)
                    (*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x2b0) + -8 +
                    (longlong)local_74 * 8);
        FUN_01150aa0(param_1,local_80);
        iVar8 = FUN_01cfd2d0();
        local_68 = iVar8 + -1;
        local_70 = 0;
        if (-1 < local_68) {
          do {
            local_68 = iVar8;
            local_98 = &local_43;
            local_90 = &local_41;
            pdVar5 = (double *)
                     FUN_01b05ad0(local_80,CONCAT31((int3)((uint)local_70 >> 8),
                                                    (char)local_70 + '\x01'),0,&local_42);
            local_61 = '\0';
            local_60 = pdVar5;
            if (local_42 == '\x06') {
              if ((*(float *)(pdVar5 + 2) != 0.0) ||
                 (cVar3 = FUN_0114eb00(*(undefined1 *)(pdVar5 + 3),pdVar5[4]), cVar3 != '\0')) {
                if (*(char *)(pdVar5 + 3) == '\x02') {
                  pfVar2 = (float *)pdVar5[4];
                  if (*(char *)(*(longlong *)(param_1 + 0xa0) + 0x5db) == '\x03') {
                    local_98 = (undefined1 *)((ulonglong)local_98._1_7_ << 8);
                    local_90 = (undefined1 *)((ulonglong)local_90._1_7_ << 8);
                    dVar10 = (double)(**(code **)(param_1 + 0x28))
                                               (*(undefined8 *)(param_1 + 0x30),*pdVar5,
                                                (double)*pfVar2,(double)pfVar2[1]);
                  }
                  else {
                    puVar1 = (undefined8 *)(param_1 + 8 + (longlong)*(char *)(pfVar2 + 2) * 0x10);
                    local_98 = (undefined1 *)((ulonglong)local_98._1_7_ << 8);
                    local_90 = (undefined1 *)((ulonglong)local_90._1_7_ << 8);
                    dVar10 = (double)(*(code *)*puVar1)(puVar1[1],*pdVar5,(double)*pfVar2,
                                                        (double)pfVar2[1]);
                  }
                  if ((*pfVar2 != 0.0) || (pfVar2[1] != 0.0)) {
                    local_61 = '\x01';
                  }
                  if (*(char *)(*(longlong *)(param_1 + 0xa0) + 0x5db) == '\x03') {
                    local_98 = (undefined1 *)((ulonglong)local_98._1_7_ << 8);
                    local_90 = (undefined1 *)((ulonglong)local_90._1_7_ << 8);
                    dVar11 = (double)(**(code **)(param_1 + 0x28))
                                               (*(undefined8 *)(param_1 + 0x30),*pdVar5,
                                                (double)*(float *)((longlong)pfVar2 + 9),
                                                (double)*(float *)((longlong)pfVar2 + 0xd));
                  }
                  else {
                    puVar1 = (undefined8 *)
                             (param_1 + 8 + (longlong)*(char *)((longlong)pfVar2 + 0x11) * 0x10);
                    local_98 = (undefined1 *)
                               CONCAT71(local_98._1_7_,*(undefined1 *)((longlong)pfVar2 + 0x12));
                    local_90 = (undefined1 *)((ulonglong)local_90._1_7_ << 8);
                    dVar11 = (double)(*(code *)*puVar1)(puVar1[1],*pdVar5,
                                                        (double)*(float *)((longlong)pfVar2 + 9),
                                                        (double)*(float *)((longlong)pfVar2 + 0xd));
                  }
                  if ((*(float *)((longlong)pfVar2 + 9) != 0.0) ||
                     (*(float *)((longlong)pfVar2 + 0xd) != 0.0)) {
                    local_61 = '\x01';
                  }
                  if (local_61 != '\0') {
                    *(short *)(param_1 + 0x4c) = *(short *)(param_1 + 0x4c) << 1;
                  }
                  dVar10 = (dVar10 + dVar11) - *pdVar5;
                }
                else {
                  if (*(char *)(*(longlong *)(param_1 + 0xa0) + 0x5db) == '\x03') {
                    local_98 = (undefined1 *)((ulonglong)local_98._1_7_ << 8);
                    local_90 = (undefined1 *)((ulonglong)local_90._1_7_ << 8);
                    dVar10 = (double)(**(code **)(param_1 + 0x28))
                                               (*(undefined8 *)(param_1 + 0x30),*pdVar5,
                                                (double)*(float *)(pdVar5 + 2),
                                                -(double)*(float *)(pdVar5 + 2));
                  }
                  else {
                    puVar1 = (undefined8 *)(param_1 + 8 + (longlong)*(char *)(pdVar5 + 3) * 0x10);
                    local_98 = (undefined1 *)((ulonglong)local_98._1_7_ << 8);
                    local_90 = (undefined1 *)((ulonglong)local_90._1_7_ << 8);
                    dVar10 = (double)(*(code *)*puVar1)(puVar1[1],*pdVar5,
                                                        (double)*(float *)(pdVar5 + 2),
                                                        -(double)*(float *)(pdVar5 + 2));
                  }
                  *(short *)(param_1 + 0x4c) = *(short *)(param_1 + 0x4c) << 1;
                }
                *local_60 = dVar10;
                FUN_01cc5c10(local_88,dVar10);
              }
            }
            else if ((local_42 == '\a') && (local_50 = pdVar5, pdVar5[0x28] != 0.0)) {
              local_52 = FUN_01150c30(auStack_b8,pdVar5[0x28]);
              local_40[0] = *(float **)((longlong)local_50[0x28] + 0x10);
              local_58 = 1;
              for (uVar7 = (uint)*(byte *)((longlong)local_50[0x28] + 0x18); uVar7 != 0;
                  uVar7 = uVar7 - 1) {
                cVar3 = FUN_0114eb60(local_40[0]);
                pfVar2 = local_40[0];
                if (cVar3 != '\0') {
                  local_98 = &local_43;
                  local_90 = &local_41;
                  local_60 = (double *)
                             FUN_01b05ad0(local_80,(char)local_70 + '\x01',local_58,&local_42);
                  if (*(char *)(*(longlong *)(param_1 + 0xa0) + 0x5db) == '\x03') {
                    local_98 = (undefined1 *)((ulonglong)local_98._1_7_ << 8);
                    local_90 = (undefined1 *)((ulonglong)local_90._1_7_ << 8);
                    dVar10 = (double)(**(code **)(param_1 + 0x28))
                                               (*(undefined8 *)(param_1 + 0x30),*local_60,
                                                (double)*pfVar2,(double)pfVar2[1]);
                    if ((*pfVar2 != 0.0) || (pfVar2[1] != 0.0)) {
                      local_61 = '\x01';
                    }
                    local_98 = (undefined1 *)((ulonglong)local_98 & 0xffffffffffffff00);
                    local_90 = (undefined1 *)((ulonglong)local_90 & 0xffffffffffffff00);
                    dVar11 = (double)(**(code **)(param_1 + 0x28))
                                               (*(undefined8 *)(param_1 + 0x30),*local_60,
                                                (double)*(float *)((longlong)pfVar2 + 0xb),
                                                (double)*(float *)((longlong)pfVar2 + 0xf));
                    dVar10 = dVar10 + dVar11;
                    if ((*(float *)((longlong)pfVar2 + 0xb) != 0.0) ||
                       (*(float *)((longlong)pfVar2 + 0xf) != 0.0)) {
                      local_61 = '\x01';
                    }
                    if (local_61 != '\0') {
                      *(short *)(param_1 + 0x4c) = *(short *)(param_1 + 0x4c) << 1;
                    }
                  }
                  else {
                    puVar1 = (undefined8 *)(param_1 + 8 + (longlong)*(char *)(pfVar2 + 2) * 0x10);
                    local_98 = (undefined1 *)((ulonglong)local_98._1_7_ << 8);
                    local_90 = (undefined1 *)((ulonglong)local_90._1_7_ << 8);
                    dVar10 = (double)(*(code *)*puVar1)(puVar1[1],*local_60,(double)*pfVar2,
                                                        (double)pfVar2[1]);
                    puVar1 = (undefined8 *)
                             (param_1 + 8 + (longlong)*(char *)((longlong)pfVar2 + 0x13) * 0x10);
                    local_98 = (undefined1 *)
                               CONCAT71(local_98._1_7_,*(undefined1 *)((longlong)pfVar2 + 9));
                    local_90 = (undefined1 *)
                               CONCAT71(local_90._1_7_,*(undefined1 *)((longlong)pfVar2 + 10));
                    dVar11 = (double)(*(code *)*puVar1)(puVar1[1],*local_60,
                                                        (double)*(float *)((longlong)pfVar2 + 0xb),
                                                        (double)*(float *)((longlong)pfVar2 + 0xf));
                    dVar10 = dVar10 + dVar11;
                  }
                  *local_60 = dVar10 - *local_60;
                }
                FUN_00b909d0(local_40,0x14);
                local_58 = local_58 + 1;
              }
              *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + local_52;
              FUN_01cc5c40(local_88,*(undefined8 *)(*(longlong *)((longlong)local_50 + 0x26) + 9));
            }
            local_70 = local_70 + 1;
            local_68 = local_68 + -1;
            iVar8 = local_68;
          } while (local_68 != 0);
        }
        local_74 = local_74 + 1;
        local_6c = local_6c + -1;
      } while (local_6c != 0);
    }
    *(short *)(param_1 + 0x48) = *(short *)(param_1 + 0x48) + 1;
  }
  return;
}

