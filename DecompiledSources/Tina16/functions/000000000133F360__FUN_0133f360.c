/* Ghidra address: 0133f360 */
/* Ghidra symbol: FUN_0133f360 */


bool FUN_0133f360(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  byte *pbVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  bool local_8d;
  int local_8c;
  int local_78;
  
  uVar11 = FUN_00b92140(0);
  bVar4 = false;
  bVar5 = false;
  local_8d = *(char *)(param_1 + 0x334) != '\0';
  if ((*(double *)(param_1 + 0x380) <= *(double *)(param_1 + 0x10) &&
       *(double *)(param_1 + 0x10) != *(double *)(param_1 + 0x380)) &&
     (*(double *)(param_1 + 0x730) <= 1e+29 && *(double *)(param_1 + 0x730) != 1e+29)) {
    iVar9 = *(int *)(param_1 + 0x2d8);
    local_8c = 1;
    if (0 < iVar9) {
      do {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)local_8c * 8);
        if (*(char *)(lVar2 + 0x114) != '\0') {
          bVar4 = true;
          cVar6 = (**(code **)(lVar2 + 0xb8))(*(undefined8 *)(lVar2 + 0x60),lVar2,param_1);
          if (cVar6 != '\0') {
            local_8d = true;
          }
        }
        if (*(char *)(lVar2 + 4) != '\0') {
          pbVar3 = (byte *)**(undefined8 **)(lVar2 + 0x40);
          bVar1 = *pbVar3;
          if (bVar1 < 0x20 && (1 << (bVar1 & 0x1f) & 0x2000010U) != 0) {
            bVar4 = true;
            uVar7 = FUN_01b05600(lVar2,**(undefined1 **)(pbVar3 + 8));
            uVar8 = FUN_01b05600(lVar2,*(undefined1 *)(*(longlong *)(pbVar3 + 8) + 1));
            cVar6 = FUN_016eded0(lVar2,param_1,uVar7,uVar8,0,0xbff0000000000000);
            if (cVar6 != '\0') {
              local_8d = true;
            }
          }
          else if (bVar1 < 0x20 && (1 << (bVar1 & 0x1f) & 0x1000008U) != 0) {
            bVar4 = true;
            uVar7 = FUN_01b05690(lVar2,1,1);
            cVar6 = FUN_016edfa0(lVar2,param_1,uVar7,0,0xbff0000000000000);
            if (cVar6 != '\0') {
              local_8d = true;
            }
          }
          else if (bVar1 == 5) {
            bVar4 = true;
            uVar7 = FUN_01b05690(lVar2,1,1);
            cVar6 = FUN_016edfa0(lVar2,param_1,uVar7,0,0xbff0000000000000);
            if (cVar6 == '\0') {
              uVar7 = FUN_01b05690(lVar2,1,2);
              cVar6 = FUN_016edfa0(lVar2,param_1,uVar7,0,0xbff0000000000000);
              if (cVar6 == '\0') goto LAB_0133f62c;
            }
            local_8d = true;
          }
        }
LAB_0133f62c:
        local_8c = local_8c + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    if (!bVar4) {
      iVar9 = *(int *)(param_1 + 0x2d8);
      local_8c = 1;
      if (0 < iVar9) {
        do {
          lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)local_8c * 8);
          local_78 = 1;
          for (uVar10 = (uint)*(byte *)(lVar2 + 4); uVar10 != 0; uVar10 = uVar10 - 1) {
            pbVar3 = *(byte **)(*(longlong *)(lVar2 + 0x40) + -8 + (longlong)local_78 * 8);
            bVar1 = *pbVar3;
            if (bVar1 < 0x20 && (1 << (bVar1 & 0x1f) & 0x2000010U) != 0) {
              bVar5 = true;
              uVar7 = FUN_01b05600(lVar2,**(undefined1 **)(pbVar3 + 8));
              uVar8 = FUN_01b05600(lVar2,*(undefined1 *)(*(longlong *)(pbVar3 + 8) + 1));
              cVar6 = FUN_016eded0(lVar2,param_1,uVar7,uVar8,0,0xbff0000000000000);
              if (cVar6 != '\0') {
                local_8d = true;
              }
            }
            else if (bVar1 < 0x20 && (1 << (bVar1 & 0x1f) & 0x1000008U) != 0) {
              bVar5 = true;
              uVar7 = FUN_01b05690(lVar2,local_78,1);
              cVar6 = FUN_016edfa0(lVar2,param_1,uVar7,0,0xbff0000000000000);
              if (cVar6 != '\0') {
                local_8d = true;
              }
            }
            else if (bVar1 == 5) {
              bVar5 = true;
              uVar7 = FUN_01b05690(lVar2,local_78,1);
              cVar6 = FUN_016edfa0(lVar2,param_1,uVar7,0,0xbff0000000000000);
              if (cVar6 == '\0') {
                uVar7 = FUN_01b05690(lVar2,local_78,2);
                cVar6 = FUN_016edfa0(lVar2,param_1,uVar7,0,0xbff0000000000000);
                if (cVar6 == '\0') goto LAB_0133f874;
              }
              local_8d = true;
            }
LAB_0133f874:
            local_78 = local_78 + 1;
          }
          local_8c = local_8c + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
    }
    if ((!bVar4) && (!bVar5)) {
      dVar14 = *(double *)(param_1 + 0x720);
      dVar15 = *(double *)(param_1 + 0x730) / 100.0;
      iVar9 = *(int *)(param_1 + 0x30c) + *(int *)(param_1 + 0x310) + -1;
      local_8c = 1;
      if (0 < iVar9) {
        do {
          dVar12 = (double)FUN_0040c850(*(undefined8 *)
                                         (*(longlong *)(param_1 + 0x168) + (longlong)local_8c * 8));
          dVar13 = (double)FUN_0040c850(*(double *)
                                         (*(longlong *)(param_1 + 0x118) + (longlong)local_8c * 8) -
                                        *(double *)
                                         (*(longlong *)(param_1 + 0x168) + (longlong)local_8c * 8));
          if (dVar15 * dVar12 + dVar14 < dVar13) {
            local_8d = true;
            break;
          }
          local_8c = local_8c + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      dVar14 = *(double *)(param_1 + 0x728);
      local_8c = *(int *)(param_1 + 0x30c) + *(int *)(param_1 + 0x310);
      iVar9 = local_8c + *(int *)(param_1 + 0x314) + -1;
      if (local_8c <= iVar9) {
        iVar9 = (iVar9 - local_8c) + 1;
        do {
          dVar12 = (double)FUN_0040c850(*(undefined8 *)
                                         (*(longlong *)(param_1 + 0x168) + (longlong)local_8c * 8));
          dVar13 = (double)FUN_0040c850(*(double *)
                                         (*(longlong *)(param_1 + 0x118) + (longlong)local_8c * 8) -
                                        *(double *)
                                         (*(longlong *)(param_1 + 0x168) + (longlong)local_8c * 8));
          if (dVar15 * dVar12 + dVar14 < dVar13) {
            local_8d = true;
            break;
          }
          local_8c = local_8c + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
    }
  }
  dVar14 = (double)FUN_00b92140(uVar11);
  *(double *)PTR_DAT_02005358 = dVar14 + *(double *)PTR_DAT_02005358;
  return local_8d;
}

