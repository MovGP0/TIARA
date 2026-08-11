/* Ghidra address: 01c8e420 */
/* Ghidra symbol: FUN_01c8e420 */


void FUN_01c8e420(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80 [11];
  
  local_90 = 0;
  local_88 = 0;
  local_80[0] = 0;
  if (*(char *)(param_1 + 0x27c2) != '\0') {
    if (*(longlong *)PTR_DAT_020023c0 != 0) {
      FUN_01530b30(*(undefined8 *)PTR_DAT_020023c0);
    }
    *(undefined1 *)(param_1 + 0x27c2) = 0;
  }
  *PTR_DAT_020028e0 = 0;
  if ((((*(longlong *)(param_1 + 0x2780) != 0) && (*(longlong *)(param_1 + 0x2768) != 0)) &&
      (*(char *)(*(longlong *)(param_1 + 0x2768) + 0x70) == '\x02')) &&
     ((*(longlong *)PTR_DAT_020057d0 != 0 &&
      (cVar1 = (**(code **)(**(longlong **)PTR_DAT_020057d0 + 0xf8))(*(longlong **)PTR_DAT_020057d0)
      , cVar1 != '\0')))) {
    iVar9 = *(int *)(*(longlong *)(param_1 + 0x2780) + 0x10);
    iVar8 = 0;
    iVar6 = -1;
    iVar7 = -1;
    if (-1 < iVar9 + -1) {
      do {
        lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x2780),iVar8);
        iVar2 = FUN_006d5120(*(undefined8 *)(param_1 + 0x1350));
        iVar6 = iVar8;
        iVar7 = iVar8;
        if (*(int *)(lVar3 + 0x38) == iVar2) break;
        iVar8 = iVar8 + 1;
        iVar9 = iVar9 + -1;
        iVar6 = -1;
        iVar7 = -1;
      } while (iVar9 != 0);
    }
    while (((-1 < iVar6 &&
            (lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x2780),iVar6),
            *(char *)(lVar3 + 0x978) == '\0')) &&
           ((lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x2780),iVar6),
            *(char *)(*(longlong *)(lVar3 + 0x20) + 0x70) == '\x02' ||
            ((lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x2780),iVar6),
             *(char *)(*(longlong *)(lVar3 + 0x20) + 0x70) == '\x03' ||
             (lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x2780),iVar6),
             *(char *)(*(longlong *)(lVar3 + 0x20) + 0x70) == '\x04'))))))) {
      iVar6 = iVar6 + -1;
      if (iVar6 < 0) {
        iVar6 = *(int *)(*(longlong *)(param_1 + 0x2780) + 0x10) + -1;
      }
      iVar9 = *(int *)(*(longlong *)(param_1 + 0x2780) + 0x10);
      if (iVar9 <= iVar6) {
        iVar6 = iVar9 + -1;
      }
    }
    if ((iVar6 != iVar7) && (-1 < iVar6)) {
      lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x2780),iVar6);
      lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x2780),iVar6);
      FUN_01c8ab30(param_1,*(undefined8 *)(lVar3 + 0x28),*(undefined8 *)(lVar4 + 0x10));
    }
  }
  if (*(longlong *)(param_1 + 0x2770) == 0) {
    puVar5 = (undefined8 *)FUN_01c8a3c0(param_1,0);
    FUN_014a1260(*puVar5,0);
  }
  else {
    lVar3 = FUN_01c8a3c0(param_1,0);
    if (lVar3 != 0) {
      puVar5 = (undefined8 *)FUN_01c8a3c0(param_1,0);
      (**(code **)(**(longlong **)(param_1 + 0x2770) + 0x288))
                (*(longlong **)(param_1 + 0x2770),local_80);
      FUN_014a1260(*puVar5,local_80[0]);
    }
  }
  if (*(longlong *)(param_1 + 0x27d8) != 0) {
    FUN_0064dd90(param_1,&local_88);
    FUN_00416ad0(&local_88,*(undefined8 *)(param_1 + 0x27d8));
    FUN_0064de00(param_1,local_88);
  }
  if (*(longlong *)(param_1 + 0x27e0) != 0) {
    FUN_0064dd90(param_1,&local_90);
    FUN_00416ad0(&local_90,*(undefined8 *)(param_1 + 0x27e0));
    FUN_0064de00(param_1,local_90);
  }
  FUN_00414560(&local_90,2);
  FUN_00414480(local_80);
  return;
}

