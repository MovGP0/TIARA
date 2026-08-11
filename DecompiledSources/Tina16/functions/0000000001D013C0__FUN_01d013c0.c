/* Ghidra address: 01d013c0 */
/* Ghidra symbol: FUN_01d013c0 */


undefined8 FUN_01d013c0(longlong *param_1,ulonglong param_2)

{
  byte *pbVar1;
  byte bVar2;
  ushort uVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  longlong lVar14;
  uint unaff_EBX;
  uint uVar15;
  uint uVar16;
  int iVar17;
  undefined8 local_40;
  uint local_34;
  int local_30;
  
  uVar3 = *(ushort *)((longlong)param_1 + 0xec);
  uVar16 = (uint)*(ushort *)((longlong)param_1 + 0xf2) + (uint)*(ushort *)((longlong)param_1 + 0xf4)
  ;
  if (uVar16 < uVar3) {
    *(undefined2 *)((longlong)param_1 + 0xec) = 1;
    local_40 = 0;
  }
  else {
    pbVar1 = (byte *)(param_1[0x2d] + (ulonglong)uVar3 * 99);
    local_40 = *(undefined8 *)(pbVar1 + 0x5b);
    if (((param_2 & 4) == 0) && ((*(ushort *)((longlong)param_1 + 0xf4) == 0 || (uVar3 != uVar16))))
    {
      iVar9 = FUN_01d01910(param_1);
      iVar9 = (int)param_1[0x1d] + iVar9;
      if ((*(short *)((longlong)param_1 + 0xec) == 1) && (*(short *)((longlong)param_1 + 0xf6) != 0)
         ) {
        iVar10 = FUN_01d01910(param_1);
        lVar14 = param_1[0x1d];
        uVar3 = *(ushort *)((longlong)param_1 + 0xf4);
        local_34 = (uint)*(ushort *)(param_1 + 0x1f);
        if (local_34 <= *(ushort *)((longlong)param_1 + 0xfa)) {
          iVar17 = (*(ushort *)((longlong)param_1 + 0xfa) - local_34) + 1;
          do {
            plVar4 = *(longlong **)(param_1[0x2d] + (longlong)(int)local_34 * 99 + 0x5b);
            (**(code **)(*plVar4 + 0x208))
                      (plVar4,0,((int)lVar14 + iVar10 + (uint)uVar3 + local_34) -
                                (uint)*(ushort *)(param_1 + 0x1f),0);
            local_34 = local_34 + 1;
            iVar17 = iVar17 + -1;
          } while (iVar17 != 0);
        }
      }
      if (*(ushort *)((longlong)param_1 + 0xec) <= *(ushort *)((longlong)param_1 + 0xf2)) {
        uVar16 = (**(code **)(**(longlong **)(pbVar1 + 0x5b) + 0x1c8))();
        uVar16 = uVar16 & 0xff;
        local_34 = 0;
        if (-1 < (int)(uVar16 - 1)) {
          do {
            bVar6 = false;
            bVar7 = false;
            cVar8 = FUN_01d3d4b0(*pbVar1);
            if (cVar8 != '\0') {
              bVar2 = *pbVar1;
              if (bVar2 < 0x16) {
                if (bVar2 == 0x15) {
LAB_01d01704:
                  if (local_34 == 5) {
                    (**(code **)(**(longlong **)(pbVar1 + 0x5b) + 0x208))
                              (*(longlong **)(pbVar1 + 0x5b),5,iVar9);
                    bVar6 = true;
                  }
                }
                else {
                  if (bVar2 == 0xf) goto LAB_01d016a7;
                  if (bVar2 != 0x11) {
                    if (bVar2 == 0x12) goto LAB_01d01704;
                    if (bVar2 != 0x14) goto LAB_01d0172c;
                  }
                  if (local_34 == 2) {
                    (**(code **)(**(longlong **)(pbVar1 + 0x5b) + 0x208))
                              (*(longlong **)(pbVar1 + 0x5b),2,iVar9);
                    bVar6 = true;
                  }
                }
              }
              else if (bVar2 == 0x16) {
LAB_01d016a7:
                if ((local_34 == 2) || (bVar6 = bVar7, local_34 == 5)) {
                  (**(code **)(**(longlong **)(pbVar1 + 0x5b) + 0x208))
                            (*(longlong **)(pbVar1 + 0x5b),local_34,iVar9);
                  bVar6 = true;
                }
              }
              else if (bVar2 == 0x17) {
                if ((local_34 == 6) || (bVar6 = bVar7, local_34 == 3)) {
                  (**(code **)(**(longlong **)(pbVar1 + 0x5b) + 0x208))
                            (*(longlong **)(pbVar1 + 0x5b),local_34,iVar9,0);
                  bVar6 = true;
                }
              }
              else if (bVar2 == 0x19) {
                bVar6 = bVar7;
                if (local_34 == 3) {
                  (**(code **)(**(longlong **)(pbVar1 + 0x5b) + 0x208))
                            (*(longlong **)(pbVar1 + 0x5b),3,iVar9);
                  bVar6 = true;
                }
              }
              else {
                bVar6 = bVar7;
                if ((bVar2 == 0x1a) && (local_34 == 6)) {
                  (**(code **)(**(longlong **)(pbVar1 + 0x5b) + 0x208))
                            (*(longlong **)(pbVar1 + 0x5b),6,iVar9);
                  bVar6 = true;
                }
              }
            }
LAB_01d0172c:
            cVar8 = FUN_01d3d450(*pbVar1);
            uVar15 = unaff_EBX;
            if ((cVar8 != '\0') && (local_34 == 3)) {
              uVar11 = 0;
              uVar13 = (uint)*(ushort *)((longlong)param_1 + 0xf6);
              if (-1 < (int)(uVar13 - 1)) {
                do {
                  uVar15 = uVar11;
                  if (*(int *)(param_1[0x2f] + (longlong)(int)uVar11 * 4) ==
                      *(ushort *)((longlong)param_1 + 0xec) - 1) break;
                  uVar11 = uVar11 + 1;
                  uVar13 = uVar13 - 1;
                  uVar15 = unaff_EBX;
                } while (uVar13 != 0);
              }
              plVar4 = *(longlong **)
                        (param_1[0x2d] + 0x5b +
                        (ulonglong)((uVar15 & 0xffff) + (uint)*(ushort *)(param_1 + 0x1f)) * 99);
              plVar5 = *(longlong **)
                        (param_1[0x2d] + 0x5b +
                        (ulonglong)*(ushort *)((longlong)param_1 + 0xec) * 99);
              uVar12 = (**(code **)(*plVar4 + 0x210))(plVar4,0);
              (**(code **)(*plVar5 + 0x208))(plVar5,3,uVar12);
              bVar6 = true;
            }
            lVar14 = (longlong)(int)local_34;
            bVar2 = pbVar1[lVar14 * 2 + 3];
            if (!bVar6) {
              if (bVar2 == 0) {
                local_30 = (**(code **)(*param_1 + 0x210))(param_1,pbVar1[lVar14 * 2 + 4] - 1);
              }
              else if (bVar2 == 1) {
                local_30 = (uint)pbVar1[lVar14 * 2 + 4] + (int)param_1[0x1d] + -1;
              }
              else if (bVar2 == 2) {
                local_30 = 0;
              }
              else if (bVar2 == 3) {
                local_30 = iVar9;
              }
              (**(code **)(**(longlong **)(pbVar1 + 0x5b) + 0x208))
                        (*(longlong **)(pbVar1 + 0x5b),local_34,local_30);
            }
            local_34 = local_34 + 1;
            uVar16 = uVar16 - 1;
            unaff_EBX = uVar15;
          } while (uVar16 != 0);
        }
      }
    }
  }
  return local_40;
}

