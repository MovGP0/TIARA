/* Ghidra address: 018bf910 */
/* Ghidra symbol: FUN_018bf910 */


void FUN_018bf910(longlong param_1)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  char *pcVar16;
  ulonglong uVar17;
  char local_75;
  int local_74;
  int local_70;
  int local_6c [17];
  
  *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x78) = 0;
  puVar5 = *(undefined8 **)(*(longlong *)(param_1 + 0x70) + 0xd0);
  iVar8 = (**(code **)*puVar5)(puVar5);
  if (iVar8 != 0) {
    local_6c[0] = -1;
    uVar10 = FUN_018be0c0(*(undefined8 *)(param_1 + 0x70),local_6c);
    *(undefined8 *)(param_1 + 0x30) = uVar10;
    pcVar16 = &local_75;
    FUN_018be1e0(*(undefined8 *)(param_1 + 0x70),
                 *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x90),
                 *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x88),
                 *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x238),
                 *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x228),&local_70,&local_74,pcVar16)
    ;
    iVar8 = local_70;
    if (local_75 != '\0') {
      local_70 = local_74;
      local_74 = iVar8;
    }
    uVar7 = *(undefined1 *)(*(longlong *)(param_1 + 0x30) + 0x1a0);
    if (*(char *)(*(longlong *)(param_1 + 0x70) + 0x7f) != '\0') {
      uVar7 = *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x7f);
    }
    uVar17 = CONCAT44((int)((ulonglong)pcVar16 >> 0x20),1);
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x58))
              (*(longlong **)(param_1 + 0x38),
               *(undefined4 *)
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xd0) + 0x20) + 0x228
                  ) + 0x2c),*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x90),
               *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x88),local_75 != '\0',
               *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x170),uVar7,uVar17);
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x18))(*(longlong **)(param_1 + 0x38));
    *(undefined1 *)(param_1 + 0x2f) = 1;
    iVar8 = *(int *)(*(longlong *)(param_1 + 0x38) + 0x40);
    dVar2 = *(double *)(*(longlong *)(param_1 + 0x30) + 0x238);
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x38) + 0x44);
    dVar3 = *(double *)(*(longlong *)(param_1 + 0x30) + 0x228);
    local_6c[0] = -1;
    while (local_6c[0] < *(int *)(*(longlong *)(param_1 + 0x70) + 0x9c) + -1) {
      iVar11 = 1;
      dVar15 = (-*(double *)(*(longlong *)(param_1 + 0x38) + 0x90) *
               (double)*(int *)(*(longlong *)(param_1 + 0x38) + 0x44)) / (double)0x4039666666666666;
      (**(code **)(**(longlong **)(param_1 + 0x38) + 0x20))(*(longlong **)(param_1 + 0x38));
      iVar12 = local_74;
      if (0 < local_74) {
        do {
          dVar14 = (-*(double *)(*(longlong *)(param_1 + 0x38) + 0x88) *
                   (double)*(int *)(*(longlong *)(param_1 + 0x38) + 0x40)) /
                   (double)0x4039666666666666;
          iVar13 = local_70;
          if (0 < local_70) {
            do {
              *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xd0) + 0x38) = iVar11;
              if (iVar11 == 1) {
                uVar10 = FUN_018be0c0(*(undefined8 *)(param_1 + 0x70),local_6c);
                *(undefined8 *)(param_1 + 0x30) = uVar10;
              }
              else {
                FUN_018b7df0(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xd0));
                uVar9 = FUN_018bdfc0(*(undefined8 *)(param_1 + 0x70),local_6c[0]);
                plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0xd0);
                uVar10 = (**(code **)(*plVar6 + 8))(plVar6,uVar9);
                *(undefined8 *)(param_1 + 0x30) = uVar10;
              }
              iVar11 = iVar11 + 1;
              if (*(int *)(*(longlong *)
                            (*(longlong *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xd0) + 0x20) + 0x228)
                          + 8) < iVar11) {
                iVar11 = 1;
              }
              if (*(longlong *)(param_1 + 0x30) == 0) break;
              uVar9 = FUN_018bdfc0(*(undefined8 *)(param_1 + 0x70),local_6c[0]);
              plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0xd0);
              uVar17 = uVar17 & 0xffffffffffffff00;
              (**(code **)(*plVar6 + 0x118))
                        (plVar6,uVar9,*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x18),
                         (double)*(int *)(*(longlong *)(param_1 + 0x38) + 0x40) / 96.0,
                         (double)*(int *)(*(longlong *)(param_1 + 0x38) + 0x44) / 96.0,dVar14,dVar15
                         ,uVar17);
              dVar14 = dVar14 + dVar2 * ((double)iVar8 / (double)0x4039666666666666);
              iVar13 = iVar13 + -1;
            } while (iVar13 != 0);
          }
          if (*(longlong *)(param_1 + 0x30) == 0) break;
          dVar15 = dVar15 + dVar3 * ((double)iVar4 / (double)0x4039666666666666);
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
      (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))(*(longlong **)(param_1 + 0x38));
      plVar6 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xd0) + 0x20);
      (**(code **)(*plVar6 + 0x260))(plVar6,2,local_6c[0]);
      if (*(char *)(*(longlong *)
                     (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xd0) + 0x20) +
                     0x1a8) + 0x20) == '\0') {
        FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
      }
      if (*(char *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xd0) + 0x20) +
                   0x288) != '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))(*(longlong **)(param_1 + 0x38));
        return;
      }
      piVar1 = (int *)(*(longlong *)(param_1 + 0x70) + 0x78);
      *piVar1 = *piVar1 + 1;
      FUN_018b7df0(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xd0));
    }
  }
  return;
}

