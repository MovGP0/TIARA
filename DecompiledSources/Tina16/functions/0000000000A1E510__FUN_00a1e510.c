/* Ghidra address: 00a1e510 */
/* Ghidra symbol: FUN_00a1e510 */


/* WARNING: Removing unreachable block (ram,0x00a1e589) */

void FUN_00a1e510(longlong *param_1)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x4c);
  if ((int)uVar1 < 1) {
    iVar9 = 0;
    iVar8 = *(int *)((longlong)param_1 + 0x104);
  }
  else {
    puVar7 = (undefined4 *)(param_1[0xb] + 0x10);
    iVar9 = 0;
    iVar8 = 0;
    do {
      iVar4 = FUN_00a1eeb0(param_1,*puVar7);
      iVar9 = iVar9 + iVar4;
      iVar8 = iVar8 + 1;
      uVar1 = *(uint *)((longlong)param_1 + 0x4c);
      puVar7 = puVar7 + 0x18;
    } while (iVar8 < (int)uVar1);
    iVar8 = *(int *)((longlong)param_1 + 0x104);
  }
  if (iVar8 == 0) {
    if (*(int *)((longlong)param_1 + 0x134) == 0) {
      bVar2 = false;
      if ((int)param_1[9] == 8) {
        if ((int)uVar1 < 1) {
          bVar3 = true;
        }
        else {
          lVar5 = param_1[0xb];
          if (uVar1 == 1) {
            bVar3 = true;
          }
          else {
            iVar8 = (uVar1 & 1) - uVar1;
            bVar3 = true;
            do {
              if ((1 < *(int *)(lVar5 + 0x14)) || (1 < *(int *)(lVar5 + 0x18))) {
                bVar3 = false;
              }
              if ((1 < *(int *)(lVar5 + 0x74)) || (1 < *(int *)(lVar5 + 0x78))) {
                bVar3 = false;
              }
              lVar5 = lVar5 + 0xc0;
              iVar8 = iVar8 + 2;
            } while (iVar8 != 0);
            if ((uVar1 & 1) == 0) goto joined_r0x00a1e5a7;
          }
          if ((1 < *(int *)(lVar5 + 0x14)) || (1 < *(int *)(lVar5 + 0x18))) {
            bVar3 = false;
          }
        }
joined_r0x00a1e5a7:
        bVar2 = bVar3;
        if ((iVar9 != 0) && (bVar2 = false, bVar3)) {
          lVar5 = *param_1;
          *(undefined4 *)(lVar5 + 0x28) = 0x4b;
          bVar2 = false;
          (**(code **)(lVar5 + 8))(param_1,0);
          if (*(int *)((longlong)param_1 + 0x104) != 0) goto LAB_00a1e596;
        }
      }
      if (*(int *)((longlong)param_1 + 0x134) == 0) {
        if (bVar2) {
          uVar6 = 0xc0;
        }
        else {
          uVar6 = 0xc1;
        }
        goto LAB_00a1e631;
      }
    }
    uVar6 = 0xc2;
  }
  else {
LAB_00a1e596:
    uVar6 = 0xc9;
  }
LAB_00a1e631:
  FUN_00a1f0d0(param_1,uVar6);
  return;
}

