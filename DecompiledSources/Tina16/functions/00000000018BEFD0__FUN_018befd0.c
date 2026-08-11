/* Ghidra address: 018befd0 */
/* Ghidra symbol: FUN_018befd0 */


ulonglong FUN_018befd0(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  byte bVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 unaff_RBX;
  ulonglong uVar11;
  uint uVar12;
  bool bVar13;
  double dVar14;
  double dVar15;
  undefined8 in_stack_ffffffffffffffb0;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar16;
  uint in_stack_ffffffffffffffc0;
  
  uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffb0 >> 0x20);
  uVar11 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  iVar6 = FUN_018bdfc0(*(undefined8 *)(param_1 + 0x70),param_2);
  if (iVar6 == -1) goto LAB_018bf777;
  puVar3 = *(undefined8 **)(*(longlong *)(param_1 + 0x70) + 0xd0);
  iVar7 = (**(code **)*puVar3)(puVar3);
  if (((iVar7 <= iVar6) ||
      ((*(char *)(*(longlong *)
                   (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xd0) + 0x20) +
                   0x228) + 0x30) == '\x01' && ((iVar6 + 1) % 2 == 0)))) ||
     ((*(char *)(*(longlong *)
                  (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xd0) + 0x20) + 0x228
                  ) + 0x30) == '\x02' && ((iVar6 + 1) % 2 == 1)))) goto LAB_018bf777;
  if (*(char *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xd0) + 0x20) + 0x288)
      != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))(*(longlong **)(param_1 + 0x38));
    uVar11 = 0;
    goto LAB_018bf777;
  }
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0xd0);
  uVar9 = (**(code **)(*plVar4 + 8))(plVar4,iVar6);
  *(undefined8 *)(param_1 + 0x30) = uVar9;
  lVar10 = *(longlong *)
            (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xd0) + 0x20) + 0x228);
  if (*(char *)(lVar10 + 0xc) == '\0') {
    uVar12 = *(uint *)(lVar10 + 8);
    *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xd0) + 0x38) = 1;
  }
  else {
    uVar12 = 1;
    *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xd0) + 0x38) =
         *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x98);
  }
  lVar10 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xd0) + 0x20);
  if (*(longlong *)(lVar10 + 1000) != 0) {
    (**(code **)(lVar10 + 1000))
              (*(undefined8 *)(lVar10 + 0x3f0),*(undefined8 *)(param_1 + 0x30),
               *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xd0) + 0x38));
  }
  cVar5 = FUN_018bdf50(*(undefined8 *)(param_1 + 0x70),
                       *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x170));
  if (cVar5 == '\0') {
    iVar7 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x170);
  }
  else {
    iVar7 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x174);
  }
  bVar2 = *(byte *)(*(longlong *)(param_1 + 0x30) + 0x1a0);
  if (*(char *)(*(longlong *)(param_1 + 0x70) + 0x7f) != '\0') {
    bVar2 = *(byte *)(*(longlong *)(param_1 + 0x70) + 0x7f);
  }
  lVar10 = *(longlong *)(param_1 + 0x70);
  if (*(byte *)(lVar10 + 0x77) != bVar2) {
    lVar10 = *(longlong *)(param_1 + 0x70);
    *(undefined1 *)(lVar10 + 0x76) = 0;
  }
  if (bVar2 < 8) {
    bVar13 = ((int)CONCAT71((int7)((ulonglong)lVar10 >> 8),1) << (bVar2 & 0x1f) & 6U) != 0;
  }
  else {
    bVar13 = false;
  }
  if (bVar13) {
LAB_018bf24c:
    *(bool *)(*(longlong *)(param_1 + 0x70) + 0x76) =
         *(char *)(*(longlong *)(param_1 + 0x70) + 0x76) == '\0';
  }
  else if (bVar2 == 0) {
    cVar5 = FUN_0188b810(*(undefined8 *)(param_1 + 0x38));
    if (cVar5 != '\0') goto LAB_018bf24c;
  }
  if (*(char *)(*(longlong *)
                 (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xd0) + 0x20) + 0x228)
               + 0x28) == '\0') {
    if ((*(char *)(param_1 + 0x2f) != '\0') &&
       (*(int *)(*(longlong *)(param_1 + 0x70) + 0x70) ==
        *(int *)(*(longlong *)(param_1 + 0x30) + 0x230))) {
      lVar10 = FUN_0040c770(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x238));
      if (*(int *)(*(longlong *)(param_1 + 0x70) + 0x6c) == lVar10) {
        lVar10 = FUN_0040c770(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x228));
        if (((*(int *)(*(longlong *)(param_1 + 0x70) + 0x68) == lVar10) &&
            (*(int *)(*(longlong *)(param_1 + 0x70) + 100) == iVar7)) &&
           ((*(char *)(*(longlong *)(param_1 + 0x70) + 0x7e) ==
             *(char *)(*(longlong *)(param_1 + 0x30) + 0x1b1) &&
            (*(byte *)(*(longlong *)(param_1 + 0x70) + 0x77) == bVar2)))) goto LAB_018bf49a;
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x58))
              (*(longlong **)(param_1 + 0x38),*(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x230)
               ,*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x238),
               *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x228),
               *(undefined1 *)(*(longlong *)(param_1 + 0x30) + 0x1b1),CONCAT44(uVar8,iVar7),
               CONCAT44(uVar16,(uint)bVar2),uVar12);
    in_stack_ffffffffffffffc0 = uVar12;
  }
  else if ((((*(char *)(param_1 + 0x2f) == '\0') ||
            (*(int *)(*(longlong *)(param_1 + 0x70) + 100) != iVar7)) ||
           (*(char *)(*(longlong *)(param_1 + 0x70) + 0x7e) !=
            *(char *)(*(longlong *)(param_1 + 0x30) + 0x1b1))) ||
          (*(byte *)(*(longlong *)(param_1 + 0x70) + 0x77) != bVar2)) {
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x58))
              (*(longlong **)(param_1 + 0x38),
               *(undefined4 *)
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xd0) + 0x20) + 0x228
                  ) + 0x2c),*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x90),
               *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x88),
               *(undefined1 *)(*(longlong *)(param_1 + 0x30) + 0x1b1),CONCAT44(uVar8,iVar7),
               CONCAT44(uVar16,(uint)bVar2),uVar12);
    uVar9 = FUN_0188d920();
    lVar10 = FUN_0188d190(uVar9);
    *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x90) = *(undefined8 *)(lVar10 + 0x80);
    uVar9 = FUN_0188d920();
    lVar10 = FUN_0188d190(uVar9);
    *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x88) = *(undefined8 *)(lVar10 + 0x78);
    in_stack_ffffffffffffffc0 = uVar12;
  }
LAB_018bf49a:
  if (*(char *)(param_1 + 0x2f) == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x18))(*(longlong **)(param_1 + 0x38));
  }
  if (*(char *)(*(longlong *)(param_1 + 0x38) + 0xb8) == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))(*(longlong **)(param_1 + 0x38));
    uVar11 = 0;
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x20))(*(longlong **)(param_1 + 0x38));
    if (*(char *)(*(longlong *)
                   (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xd0) + 0x20) +
                   0x228) + 0x28) == '\0') {
      dVar14 = 1.0;
      dVar15 = 1.0;
    }
    else {
      dVar14 = *(double *)(*(longlong *)(param_1 + 0x70) + 0x90) /
               *(double *)(*(longlong *)(param_1 + 0x30) + 0x238);
      dVar15 = *(double *)(*(longlong *)(param_1 + 0x70) + 0x88) /
               *(double *)(*(longlong *)(param_1 + 0x30) + 0x228);
      if (dVar14 <= dVar15) {
        *(double *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xd0) + 0x40) = dVar14;
      }
      else {
        *(double *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xd0) + 0x40) = dVar15;
      }
    }
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0xd0);
    (**(code **)(*plVar4 + 0x118))
              (plVar4,iVar6,*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x18),
               ((double)*(int *)(*(longlong *)(param_1 + 0x38) + 0x40) / 96.0) * dVar14,
               ((double)*(int *)(*(longlong *)(param_1 + 0x38) + 0x44) / 96.0) * dVar15,
               (-*(double *)(*(longlong *)(param_1 + 0x38) + 0x88) *
               (double)*(int *)(*(longlong *)(param_1 + 0x38) + 0x40)) / 25.4,
               (-*(double *)(*(longlong *)(param_1 + 0x38) + 0x90) *
               (double)*(int *)(*(longlong *)(param_1 + 0x38) + 0x44)) / 25.4,
               in_stack_ffffffffffffffc0 & 0xffffff00);
    plVar4 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xd0) + 0x20);
    (**(code **)(*plVar4 + 0x260))(plVar4,2,iVar6 + 1);
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))(*(longlong **)(param_1 + 0x38));
    if (*(char *)(*(longlong *)
                   (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xd0) + 0x20) +
                   0x1a8) + 0x20) == '\0') {
      FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
    }
    *(undefined1 *)(param_1 + 0x2f) = 1;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x70) + 0x78);
    *piVar1 = *piVar1 + 1;
    *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x70) =
         *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x230);
    uVar8 = FUN_0040c770(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x238));
    *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x6c) = uVar8;
    uVar8 = FUN_0040c770(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x228));
    *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x68) = uVar8;
    *(int *)(*(longlong *)(param_1 + 0x70) + 100) = iVar7;
    *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x7e) =
         *(undefined1 *)(*(longlong *)(param_1 + 0x30) + 0x1b1);
    *(byte *)(*(longlong *)(param_1 + 0x70) + 0x77) = bVar2;
    FUN_018b7df0(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xd0));
  }
LAB_018bf777:
  return uVar11 & 0xffffffff;
}

