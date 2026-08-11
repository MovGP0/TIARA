/* Ghidra address: 013ea690 */
/* Ghidra symbol: FUN_013ea690 */


void FUN_013ea690(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  longlong *plVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  undefined8 local_40 [2];
  
  local_40[0] = 0;
  iVar8 = *(int *)(*(longlong *)(param_1 + 0x8b8) + 0x10);
  iVar6 = 0;
  if (-1 < iVar8 + -1) {
    do {
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x8b8),iVar6);
      FUN_004095f0(uVar2);
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x8b8) + 0x10))(*(longlong **)(param_1 + 0x8b8));
  iVar8 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x6c8) + 0x4a0) + 0x28))();
  uVar7 = 0;
  if (-1 < iVar8 + -1) {
    do {
      cVar1 = FUN_00821920(*(undefined8 *)(param_1 + 0x6c8),uVar7);
      if (cVar1 != '\0') {
        pcVar3 = (char *)FUN_004095c0(0x29);
        *(char **)(param_1 + 0x8c0) = pcVar3;
        *pcVar3 = (byte)uVar7 + 1;
        FUN_0040d200(pcVar3 + 1,0x28,0);
        iVar11 = 1;
        FUN_006d7610(*(undefined8 *)(param_1 + 0x6d0),uVar7);
        iVar6 = FUN_00654c00();
        iVar9 = 0;
        if (-1 < iVar6 + -1) {
          do {
            uVar2 = FUN_006d7610(*(undefined8 *)(param_1 + 0x6d0),uVar7);
            uVar2 = FUN_00654bc0(uVar2,iVar9);
            cVar1 = FUN_004113d0(uVar2,&PTR_FUN_00b8ea58);
            if (cVar1 != '\0') {
              uVar2 = FUN_006d7610(*(undefined8 *)(param_1 + 0x6d0),uVar7);
              uVar2 = FUN_00654bc0(uVar2,iVar9);
              uVar2 = FUN_00b90090(uVar2);
              *(undefined8 *)(*(longlong *)(param_1 + 0x8c0) + -7 + (longlong)iVar11 * 8) = uVar2;
              iVar11 = iVar11 + 1;
            }
            iVar9 = iVar9 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        uVar10 = 0;
        while( true ) {
          uVar2 = FUN_006d7610(*(undefined8 *)(param_1 + 0x6d0),uVar7);
          uVar2 = FUN_00654bc0(uVar2,uVar10);
          cVar1 = FUN_004113d0(uVar2,&PTR_FUN_006757e8);
          if (cVar1 != '\0') break;
          uVar10 = uVar10 + 1;
        }
        uVar2 = FUN_006d7610(*(undefined8 *)(param_1 + 0x6d0),uVar7);
        uVar5 = (ulonglong)uVar10;
        plVar4 = (longlong *)FUN_00654bc0(uVar2,uVar5);
        cVar1 = (**(code **)(*plVar4 + 0x260))(plVar4);
        *(double *)(*(longlong *)(param_1 + 0x8c0) + -7 + (longlong)iVar11 * 8) =
             (double)(int)(cVar1 == '\0');
        if (uVar7 < 8) {
          bVar12 = ((int)CONCAT71((int7)(uVar5 >> 8),1) << ((byte)uVar7 & 0x1f) & 0xfU) != 0;
        }
        else {
          bVar12 = false;
        }
        if ((bVar12) && (*(double *)(*(longlong *)(param_1 + 0x8c0) + 1) <= 0.0)) {
          uVar2 = FUN_00b89270();
          FUN_00b8e520(uVar2,local_40);
          FUN_013ea300(param_1,local_40[0]);
        }
        FUN_004ae7e0(*(undefined8 *)(param_1 + 0x8b8),*(undefined8 *)(param_1 + 0x8c0));
      }
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  FUN_00414480(local_40);
  return;
}

